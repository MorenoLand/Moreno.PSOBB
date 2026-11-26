#include "protos.h"

void f_0060d040(void) /* sub_60D040 */
{
    FN_ENTER(0x0060d040);
    /* 0060d040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d041: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d045: push 0x8dff98 */ { u32 v = 0x8dff98u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d04a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d051: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d058: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d05b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d05e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d061: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d064: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d067: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060d06a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d06d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060d070: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d073: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60d078u); f_0060c858();
    /* 0060d078: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d07f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d082: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d085: mov dword ptr [ecx], 0xb21e60 */ W32((u32)(r_ecx), 0xb21e60u);
    /* 0060d08b: mov eax, dword ptr [0x9c43d4] */ r_eax = R32((u32)(0x9c43d4u));
    /* 0060d090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d091: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060d094: call dword ptr [0xb21fac] */ { u32 t = R32((u32)(0xb21facu)); r_esp -= 4; W32(r_esp, 0x60d09au); call_ind(t); }
    /* 0060d09a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d09d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060d0a0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060d0a3: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060d0a6: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060d0ac: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060d0b2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d0b5: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060d0bb: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060d0c1: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060d0c7: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060d0cd: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060d0d3: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060d0d9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d0dc: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060d0e2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d0e5: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060d0eb: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060d0ee: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060d0f4: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060d0f7: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060d0fd: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060d100: mov edx, dword ptr [0xa8e8bc] */ r_edx = R32((u32)(0xa8e8bcu));
    /* 0060d106: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d10c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060d10f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060d112: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d118: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060d11b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060d11e: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60d123u); f_00606bc8();
    /* 0060d123: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d126: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d129: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d12c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060d12f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d132: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d139: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d13b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d13c: ret 8 */ FN_RET(0x0060d040); r_esp += 12; return;
}

void f_0060d140(void) /* sub_60D140 */
{
    FN_ENTER(0x0060d140);
    /* 0060d140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d141: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d145: push 0x8dffc0 */ { u32 v = 0x8dffc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d14a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d158: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d15b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d15e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d161: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d164: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d167: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d16c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060d173: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60d178u); f_008581c5();
    /* 0060d178: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d179: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060d17c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d17e: je 0x60d1bf */ if (fZ) goto L_0060d1bf;
L_0060d180:; BB(0x0060d180);
    /* 0060d180: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060d187: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d18e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d191: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d196: push 0x9c43c4 */ { u32 v = 0x9c43c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d19b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d19d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60d1a2u); f_005b7a84();
    /* 0060d1a2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d1a5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060d1ac:; BB(0x0060d1ac);
    /* 0060d1ac: mov dword ptr [0xa8e8bc], eax */ W32((u32)(0xa8e8bcu), r_eax);
    /* 0060d1b1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d1b4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d1bb: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d1bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d1be: ret  */ FN_RET(0x0060d140); r_esp += 4; return;
L_0060d1bf:; BB(0x0060d1bf);
    /* 0060d1bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d1c1: jmp 0x60d1ac */ goto L_0060d1ac;
}

void f_0060d1c4(void) /* sub_60D1C4 */
{
    FN_ENTER(0x0060d1c4);
    /* 0060d1c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060d1c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060d1c9: call 0x60d1e8 */ r_esp -= 4; W32(r_esp, 0x60d1ceu); f_0060d1e8();
    /* 0060d1ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060d1d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d1d4: jne 0x60d1da */ if (!fZ) goto L_0060d1da;
L_0060d1d6:; BB(0x0060d1d6);
    /* 0060d1d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d1d7: ret 4 */ FN_RET(0x0060d1c4); r_esp += 8; return;
L_0060d1da:; BB(0x0060d1da);
    /* 0060d1da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60d1e0u); f_005c2f74();
    /* 0060d1e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d1e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d1e2: ret 4 */ FN_RET(0x0060d1c4); r_esp += 8; return;
}

void f_0060d1e8(void) /* sub_60D1E8 */
{
    FN_ENTER(0x0060d1e8);
    /* 0060d1e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d1eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1ed: push 0x8dffdc */ { u32 v = 0x8dffdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d1f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d1f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d200: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d203: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d206: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d209: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d20c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d20f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060d212: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d215: mov dword ptr [ecx], 0xb220a0 */ W32((u32)(r_ecx), 0xb220a0u);
    /* 0060d21b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d222: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60d227u); f_0060c7e4();
    /* 0060d227: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d22a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d231: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d233: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d234: ret  */ FN_RET(0x0060d1e8); r_esp += 4; return;
}

void f_0060d238(void) /* sub_60D238 */
{
    FN_ENTER(0x0060d238);
    /* 0060d238: mov ecx, dword ptr [0xa8e8c8] */ r_ecx = R32((u32)(0xa8e8c8u));
    /* 0060d23e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d240: je 0x60d255 */ if (fZ) goto L_0060d255;
L_0060d242:; BB(0x0060d242);
    /* 0060d242: je 0x60d24b */ if (fZ) goto L_0060d24b;
L_0060d244:; BB(0x0060d244);
    /* 0060d244: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d246: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60d24bu); f_004066a8();
L_0060d24b:; BB(0x0060d24b);
    /* 0060d24b: mov dword ptr [0xa8e8c8], 0 */ W32((u32)(0xa8e8c8u), 0x0u);
L_0060d255:; BB(0x0060d255);
    /* 0060d255: ret  */ FN_RET(0x0060d238); r_esp += 4; return;
}

void f_0060d258(void)
{
    FN_ENTER(0x0060d258);
    /* 0060d258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d259: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d25b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d25d: push 0x8e001e */ { u32 v = 0x8e001eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d262: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d269: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d270: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d273: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d276: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d279: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d27c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d27f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d281: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d288: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d28du); f_005caba4();
    /* 0060d28d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d28e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060d291: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d293: je 0x60d31b */ if (fZ) goto L_0060d31b;
L_0060d299:; BB(0x0060d299);
    /* 0060d299: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060d2a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d2a7: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d2ad: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d2b0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60d2b5u); f_00787a4c();
    /* 0060d2b5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d2b8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d2bf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060d2c2:; BB(0x0060d2c2);
    /* 0060d2c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d2c9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060d2d0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2d5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d2dau); f_005caba4();
    /* 0060d2da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d2db: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060d2de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d2e0: je 0x60d317 */ if (fZ) goto L_0060d317;
L_0060d2e2:; BB(0x0060d2e2);
    /* 0060d2e2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060d2e9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060d2f0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d2f3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d2f6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d2f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d2fa: call 0x60d324 */ r_esp -= 4; W32(r_esp, 0x60d2ffu); f_0060d324();
    /* 0060d2ff: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d302: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060d309:; BB(0x0060d309);
    /* 0060d309: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d30c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d313: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d315: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d316: ret  */ FN_RET(0x0060d258); r_esp += 4; return;
L_0060d317:; BB(0x0060d317);
    /* 0060d317: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d319: jmp 0x60d309 */ goto L_0060d309;
L_0060d31b:; BB(0x0060d31b);
    /* 0060d31b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d31d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d320: jmp 0x60d2c2 */ goto L_0060d2c2;
}

void f_0060d324(void) /* sub_60D324 */
{
    FN_ENTER(0x0060d324);
    /* 0060d324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d325: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d327: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d329: push 0x8e0038 */ { u32 v = 0x8e0038u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d32e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d335: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d33c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d33f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d342: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d345: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d348: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d34b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060d34e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d351: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060d354: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d357: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60d35cu); f_0060c858();
    /* 0060d35c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d363: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d366: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d369: mov dword ptr [ecx], 0xb220a0 */ W32((u32)(r_ecx), 0xb220a0u);
    /* 0060d36f: mov eax, dword ptr [0x9c43f0] */ r_eax = R32((u32)(0x9c43f0u));
    /* 0060d374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d375: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060d378: call dword ptr [0xb221ec] */ { u32 t = R32((u32)(0xb221ecu)); r_esp -= 4; W32(r_esp, 0x60d37eu); call_ind(t); }
    /* 0060d37e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d381: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060d384: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060d387: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060d38a: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060d390: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060d396: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d399: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060d39f: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060d3a5: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060d3ab: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060d3b1: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060d3b7: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060d3bd: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d3c0: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060d3c6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d3c9: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060d3cf: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060d3d2: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060d3d8: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060d3db: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060d3e1: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060d3e4: mov edx, dword ptr [0xa8e8c8] */ r_edx = R32((u32)(0xa8e8c8u));
    /* 0060d3ea: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d3f0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060d3f3: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060d3f6: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d3fc: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060d3ff: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060d402: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60d407u); f_00606bc8();
    /* 0060d407: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d40a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d40d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d410: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060d413: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d416: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d41d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d41f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d420: ret 8 */ FN_RET(0x0060d324); r_esp += 12; return;
}

void f_0060d424(void) /* sub_60D424 */
{
    FN_ENTER(0x0060d424);
    /* 0060d424: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d425: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d427: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d429: push 0x8e0060 */ { u32 v = 0x8e0060u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d42e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d435: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d43c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d43f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d442: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d445: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d448: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d44b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d450: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060d457: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60d45cu); f_008581c5();
    /* 0060d45c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d45d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060d460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d462: je 0x60d4a3 */ if (fZ) goto L_0060d4a3;
L_0060d464:; BB(0x0060d464);
    /* 0060d464: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060d46b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d472: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d475: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d477: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d478: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d479: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d47a: push 0x9c43e0 */ { u32 v = 0x9c43e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d47f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d481: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60d486u); f_005b7a84();
    /* 0060d486: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d489: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060d490:; BB(0x0060d490);
    /* 0060d490: mov dword ptr [0xa8e8c8], eax */ W32((u32)(0xa8e8c8u), r_eax);
    /* 0060d495: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d498: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d49f: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d4a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d4a2: ret  */ FN_RET(0x0060d424); r_esp += 4; return;
L_0060d4a3:; BB(0x0060d4a3);
    /* 0060d4a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d4a5: jmp 0x60d490 */ goto L_0060d490;
}

void f_0060d4a8(void) /* sub_60D4A8 */
{
    FN_ENTER(0x0060d4a8);
    /* 0060d4a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4a9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060d4ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060d4ad: call 0x60d4cc */ r_esp -= 4; W32(r_esp, 0x60d4b2u); f_0060d4cc();
    /* 0060d4b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060d4b6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d4b8: jne 0x60d4be */ if (!fZ) goto L_0060d4be;
L_0060d4ba:; BB(0x0060d4ba);
    /* 0060d4ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d4bb: ret 4 */ FN_RET(0x0060d4a8); r_esp += 8; return;
L_0060d4be:; BB(0x0060d4be);
    /* 0060d4be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4bf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60d4c4u); f_005c2f74();
    /* 0060d4c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d4c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d4c6: ret 4 */ FN_RET(0x0060d4a8); r_esp += 8; return;
}

void f_0060d4cc(void) /* sub_60D4CC */
{
    FN_ENTER(0x0060d4cc);
    /* 0060d4cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d4cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4d1: push 0x8e007c */ { u32 v = 0x8e007cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d4dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d4dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d4e4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d4e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d4ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d4ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d4f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d4f3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060d4f6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d4f9: mov dword ptr [ecx], 0xb222e0 */ W32((u32)(r_ecx), 0xb222e0u);
    /* 0060d4ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d506: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60d50bu); f_0060c7e4();
    /* 0060d50b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d50e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d515: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d518: ret  */ FN_RET(0x0060d4cc); r_esp += 4; return;
}

void f_0060d51c(void) /* sub_60D51C */
{
    FN_ENTER(0x0060d51c);
    /* 0060d51c: mov ecx, dword ptr [0xa8e8d4] */ r_ecx = R32((u32)(0xa8e8d4u));
    /* 0060d522: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d524: je 0x60d539 */ if (fZ) goto L_0060d539;
L_0060d526:; BB(0x0060d526);
    /* 0060d526: je 0x60d52f */ if (fZ) goto L_0060d52f;
L_0060d528:; BB(0x0060d528);
    /* 0060d528: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d52a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60d52fu); f_004066a8();
L_0060d52f:; BB(0x0060d52f);
    /* 0060d52f: mov dword ptr [0xa8e8d4], 0 */ W32((u32)(0xa8e8d4u), 0x0u);
L_0060d539:; BB(0x0060d539);
    /* 0060d539: ret  */ FN_RET(0x0060d51c); r_esp += 4; return;
}

void f_0060d53c(void)
{
    FN_ENTER(0x0060d53c);
    /* 0060d53c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d53d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d53f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d541: push 0x8e00be */ { u32 v = 0x8e00beu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d54c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d54d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d554: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d55a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d55d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d560: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d563: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d565: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d56c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d571u); f_005caba4();
    /* 0060d571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d572: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060d575: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d577: je 0x60d5ff */ if (fZ) goto L_0060d5ff;
L_0060d57d:; BB(0x0060d57d);
    /* 0060d57d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060d584: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d58b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d591: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d594: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60d599u); f_00787a4c();
    /* 0060d599: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d59c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d5a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060d5a6:; BB(0x0060d5a6);
    /* 0060d5a6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d5ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060d5b4: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5b9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d5beu); f_005caba4();
    /* 0060d5be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d5bf: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060d5c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d5c4: je 0x60d5fb */ if (fZ) goto L_0060d5fb;
L_0060d5c6:; BB(0x0060d5c6);
    /* 0060d5c6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060d5cd: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060d5d4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d5d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d5da: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d5dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d5de: call 0x60d608 */ r_esp -= 4; W32(r_esp, 0x60d5e3u); f_0060d608();
    /* 0060d5e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d5e6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060d5ed:; BB(0x0060d5ed);
    /* 0060d5ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d5f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d5f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d5f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d5fa: ret  */ FN_RET(0x0060d53c); r_esp += 4; return;
L_0060d5fb:; BB(0x0060d5fb);
    /* 0060d5fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d5fd: jmp 0x60d5ed */ goto L_0060d5ed;
L_0060d5ff:; BB(0x0060d5ff);
    /* 0060d5ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d601: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d604: jmp 0x60d5a6 */ goto L_0060d5a6;
}

void f_0060d608(void) /* sub_60D608 */
{
    FN_ENTER(0x0060d608);
    /* 0060d608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d609: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d60b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d60d: push 0x8e00d8 */ { u32 v = 0x8e00d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d612: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d619: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d620: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d623: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d626: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d629: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d62c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d62f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060d632: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d635: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060d638: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d63b: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60d640u); f_0060c858();
    /* 0060d640: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d647: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d64a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d64d: mov dword ptr [ecx], 0xb222e0 */ W32((u32)(r_ecx), 0xb222e0u);
    /* 0060d653: mov eax, dword ptr [0x9c440c] */ r_eax = R32((u32)(0x9c440cu));
    /* 0060d658: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d659: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060d65c: call dword ptr [0xb2242c] */ { u32 t = R32((u32)(0xb2242cu)); r_esp -= 4; W32(r_esp, 0x60d662u); call_ind(t); }
    /* 0060d662: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d665: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060d668: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060d66b: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060d66e: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060d674: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060d67a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d67d: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060d683: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060d689: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060d68f: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060d695: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060d69b: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060d6a1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d6a4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060d6aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d6ad: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060d6b3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060d6b6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060d6bc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060d6bf: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060d6c5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060d6c8: mov edx, dword ptr [0xa8e8d4] */ r_edx = R32((u32)(0xa8e8d4u));
    /* 0060d6ce: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d6d4: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060d6d7: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060d6da: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d6e0: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060d6e3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060d6e6: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60d6ebu); f_00606bc8();
    /* 0060d6eb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d6ee: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d6f1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d6f4: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060d6f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d6fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d701: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d703: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d704: ret 8 */ FN_RET(0x0060d608); r_esp += 12; return;
}

void f_0060d708(void) /* sub_60D708 */
{
    FN_ENTER(0x0060d708);
    /* 0060d708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d709: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d70b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d70d: push 0x8e0100 */ { u32 v = 0x8e0100u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d712: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d719: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d720: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d723: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d726: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d729: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d72c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d72f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d734: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060d73b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60d740u); f_008581c5();
    /* 0060d740: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d741: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060d744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d746: je 0x60d787 */ if (fZ) goto L_0060d787;
L_0060d748:; BB(0x0060d748);
    /* 0060d748: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060d74f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d756: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d759: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d75b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d75c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d75d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d75e: push 0x9c43fc */ { u32 v = 0x9c43fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d763: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d765: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60d76au); f_005b7a84();
    /* 0060d76a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d76d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060d774:; BB(0x0060d774);
    /* 0060d774: mov dword ptr [0xa8e8d4], eax */ W32((u32)(0xa8e8d4u), r_eax);
    /* 0060d779: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d77c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d783: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d785: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d786: ret  */ FN_RET(0x0060d708); r_esp += 4; return;
L_0060d787:; BB(0x0060d787);
    /* 0060d787: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d789: jmp 0x60d774 */ goto L_0060d774;
}

void f_0060d78c(void) /* sub_60D78C */
{
    FN_ENTER(0x0060d78c);
    /* 0060d78c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d78d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060d78f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060d791: call 0x60d7b0 */ r_esp -= 4; W32(r_esp, 0x60d796u); f_0060d7b0();
    /* 0060d796: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060d79a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d79c: jne 0x60d7a2 */ if (!fZ) goto L_0060d7a2;
L_0060d79e:; BB(0x0060d79e);
    /* 0060d79e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d79f: ret 4 */ FN_RET(0x0060d78c); r_esp += 8; return;
L_0060d7a2:; BB(0x0060d7a2);
    /* 0060d7a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60d7a8u); f_005c2f74();
    /* 0060d7a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d7a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060d7aa: ret 4 */ FN_RET(0x0060d78c); r_esp += 8; return;
}

void f_0060d7b0(void) /* sub_60D7B0 */
{
    FN_ENTER(0x0060d7b0);
    /* 0060d7b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d7b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7b5: push 0x8e011c */ { u32 v = 0x8e011cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d7c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d7c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d7cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d7ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060d7d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060d7d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060d7d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060d7da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d7dd: mov dword ptr [ecx], 0xb22520 */ W32((u32)(r_ecx), 0xb22520u);
    /* 0060d7e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d7ea: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60d7efu); f_0060c7e4();
    /* 0060d7ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d7f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d7f9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d7fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d7fc: ret  */ FN_RET(0x0060d7b0); r_esp += 4; return;
}

void f_0060d800(void) /* sub_60D800 */
{
    FN_ENTER(0x0060d800);
    /* 0060d800: mov ecx, dword ptr [0xa8e8e0] */ r_ecx = R32((u32)(0xa8e8e0u));
    /* 0060d806: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d808: je 0x60d81d */ if (fZ) goto L_0060d81d;
L_0060d80a:; BB(0x0060d80a);
    /* 0060d80a: je 0x60d813 */ if (fZ) goto L_0060d813;
L_0060d80c:; BB(0x0060d80c);
    /* 0060d80c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d80e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60d813u); f_004066a8();
L_0060d813:; BB(0x0060d813);
    /* 0060d813: mov dword ptr [0xa8e8e0], 0 */ W32((u32)(0xa8e8e0u), 0x0u);
L_0060d81d:; BB(0x0060d81d);
    /* 0060d81d: ret  */ FN_RET(0x0060d800); r_esp += 4; return;
}

void f_0060d820(void)
{
    FN_ENTER(0x0060d820);
    /* 0060d820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d821: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d825: push 0x8e015e */ { u32 v = 0x8e015eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d838: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d83b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d83e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d841: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d844: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d847: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d849: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d850: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d855u); f_005caba4();
    /* 0060d855: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d856: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060d859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d85b: je 0x60d8e3 */ if (fZ) goto L_0060d8e3;
L_0060d861:; BB(0x0060d861);
    /* 0060d861: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060d868: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d86f: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d875: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d878: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60d87du); f_00787a4c();
    /* 0060d87d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060d880: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060d887: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060d88a:; BB(0x0060d88a);
    /* 0060d88a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060d891: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060d898: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d89d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60d8a2u); f_005caba4();
    /* 0060d8a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060d8a3: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060d8a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060d8a8: je 0x60d8df */ if (fZ) goto L_0060d8df;
L_0060d8aa:; BB(0x0060d8aa);
    /* 0060d8aa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060d8b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060d8b8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d8bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d8be: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d8c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8c2: call 0x60d8ec */ r_esp -= 4; W32(r_esp, 0x60d8c7u); f_0060d8ec();
    /* 0060d8c7: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d8ca: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060d8d1:; BB(0x0060d8d1);
    /* 0060d8d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d8d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d8db: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d8dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d8de: ret  */ FN_RET(0x0060d820); r_esp += 4; return;
L_0060d8df:; BB(0x0060d8df);
    /* 0060d8df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060d8e1: jmp 0x60d8d1 */ goto L_0060d8d1;
L_0060d8e3:; BB(0x0060d8e3);
    /* 0060d8e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060d8e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d8e8: jmp 0x60d88a */ goto L_0060d88a;
}

void f_0060d8ec(void) /* sub_60D8EC */
{
    FN_ENTER(0x0060d8ec);
    /* 0060d8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8f1: push 0x8e0178 */ { u32 v = 0x8e0178u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060d904: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060d907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060d90a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060d90d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060d910: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060d913: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060d916: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060d919: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060d91c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060d91f: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60d924u); f_0060c858();
    /* 0060d924: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060d92b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d92e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060d931: mov dword ptr [ecx], 0xb22520 */ W32((u32)(r_ecx), 0xb22520u);
    /* 0060d937: mov eax, dword ptr [0x9c4428] */ r_eax = R32((u32)(0x9c4428u));
    /* 0060d93c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060d93d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060d940: call dword ptr [0xb2266c] */ { u32 t = R32((u32)(0xb2266cu)); r_esp -= 4; W32(r_esp, 0x60d946u); call_ind(t); }
    /* 0060d946: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d949: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060d94c: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060d94f: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060d952: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060d958: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060d95e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d961: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060d967: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060d96d: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060d973: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060d979: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060d97f: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060d985: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d988: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060d98e: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d991: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060d997: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060d99a: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060d9a0: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060d9a3: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060d9a9: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060d9ac: mov edx, dword ptr [0xa8e8e0] */ r_edx = R32((u32)(0xa8e8e0u));
    /* 0060d9b2: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d9b8: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060d9bb: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060d9be: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060d9c4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060d9c7: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060d9ca: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60d9cfu); f_00606bc8();
    /* 0060d9cf: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060d9d2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060d9d5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060d9d8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060d9db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060d9de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060d9e5: mov esp, ebp */ r_esp = r_ebp;
    /* 0060d9e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060d9e8: ret 8 */ FN_RET(0x0060d8ec); r_esp += 12; return;
}

void f_0060d9ec(void) /* sub_60D9EC */
{
    FN_ENTER(0x0060d9ec);
    /* 0060d9ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0060d9ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9f1: push 0x8e01a0 */ { u32 v = 0x8e01a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060d9fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060d9fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060da04: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060da07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060da0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060da0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060da10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060da13: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da18: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060da1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60da24u); f_008581c5();
    /* 0060da24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060da25: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060da28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060da2a: je 0x60da6b */ if (fZ) goto L_0060da6b;
L_0060da2c:; BB(0x0060da2c);
    /* 0060da2c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060da33: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060da3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060da3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060da3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060da42: push 0x9c4418 */ { u32 v = 0x9c4418u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060da49: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60da4eu); f_005b7a84();
    /* 0060da4e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060da51: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060da58:; BB(0x0060da58);
    /* 0060da58: mov dword ptr [0xa8e8e0], eax */ W32((u32)(0xa8e8e0u), r_eax);
    /* 0060da5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060da60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060da67: mov esp, ebp */ r_esp = r_ebp;
    /* 0060da69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060da6a: ret  */ FN_RET(0x0060d9ec); r_esp += 4; return;
L_0060da6b:; BB(0x0060da6b);
    /* 0060da6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060da6d: jmp 0x60da58 */ goto L_0060da58;
}

void f_0060da70(void) /* sub_60DA70 */
{
    FN_ENTER(0x0060da70);
    /* 0060da70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060da73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060da75: call 0x60da94 */ r_esp -= 4; W32(r_esp, 0x60da7au); f_0060da94();
    /* 0060da7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060da7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060da80: jne 0x60da86 */ if (!fZ) goto L_0060da86;
L_0060da82:; BB(0x0060da82);
    /* 0060da82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060da83: ret 4 */ FN_RET(0x0060da70); r_esp += 8; return;
L_0060da86:; BB(0x0060da86);
    /* 0060da86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060da87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60da8cu); f_005c2f74();
    /* 0060da8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060da8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060da8e: ret 4 */ FN_RET(0x0060da70); r_esp += 8; return;
}

void f_0060da94(void) /* sub_60DA94 */
{
    FN_ENTER(0x0060da94);
    /* 0060da94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060da95: mov ebp, esp */ r_ebp = r_esp;
    /* 0060da97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060da99: push 0x8e01bc */ { u32 v = 0x8e01bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0060da9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060daa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060daa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060daac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060daaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060dab2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060dab5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060dab8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060dabb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060dabe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dac1: mov dword ptr [ecx], 0xb22760 */ W32((u32)(r_ecx), 0xb22760u);
    /* 0060dac7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060dace: call 0x60c7e4 */ r_esp -= 4; W32(r_esp, 0x60dad3u); f_0060c7e4();
    /* 0060dad3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060dad6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060dadd: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dadf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dae0: ret  */ FN_RET(0x0060da94); r_esp += 4; return;
}

void f_0060dae4(void) /* sub_60DAE4 */
{
    FN_ENTER(0x0060dae4);
    /* 0060dae4: mov ecx, dword ptr [0xa8e8ec] */ r_ecx = R32((u32)(0xa8e8ecu));
    /* 0060daea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060daec: je 0x60db01 */ if (fZ) goto L_0060db01;
L_0060daee:; BB(0x0060daee);
    /* 0060daee: je 0x60daf7 */ if (fZ) goto L_0060daf7;
L_0060daf0:; BB(0x0060daf0);
    /* 0060daf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060daf2: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x60daf7u); f_004066a8();
L_0060daf7:; BB(0x0060daf7);
    /* 0060daf7: mov dword ptr [0xa8e8ec], 0 */ W32((u32)(0xa8e8ecu), 0x0u);
L_0060db01:; BB(0x0060db01);
    /* 0060db01: ret  */ FN_RET(0x0060dae4); r_esp += 4; return;
}

void f_0060db04(void)
{
    FN_ENTER(0x0060db04);
    /* 0060db04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060db05: mov ebp, esp */ r_ebp = r_esp;
    /* 0060db07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060db09: push 0x8e01fe */ { u32 v = 0x8e01feu; r_esp -= 4; W32(r_esp, v); }
    /* 0060db0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060db14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060db15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060db1c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060db1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060db22: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060db25: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060db28: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060db2b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db2d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060db34: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60db39u); f_005caba4();
    /* 0060db39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060db3a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060db3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060db3f: je 0x60dbc7 */ if (fZ) goto L_0060dbc7;
L_0060db45:; BB(0x0060db45);
    /* 0060db45: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060db4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060db53: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060db59: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060db5c: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60db61u); f_00787a4c();
    /* 0060db61: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060db64: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060db6b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060db6e:; BB(0x0060db6e);
    /* 0060db6e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060db75: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060db7c: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060db81: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60db86u); f_005caba4();
    /* 0060db86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060db87: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060db8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060db8c: je 0x60dbc3 */ if (fZ) goto L_0060dbc3;
L_0060db8e:; BB(0x0060db8e);
    /* 0060db8e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060db95: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060db9c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060db9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060dba2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dba6: call 0x60dbd0 */ r_esp -= 4; W32(r_esp, 0x60dbabu); f_0060dbd0();
    /* 0060dbab: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dbae: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060dbb5:; BB(0x0060dbb5);
    /* 0060dbb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060dbb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060dbbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dbc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dbc2: ret  */ FN_RET(0x0060db04); r_esp += 4; return;
L_0060dbc3:; BB(0x0060dbc3);
    /* 0060dbc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060dbc5: jmp 0x60dbb5 */ goto L_0060dbb5;
L_0060dbc7:; BB(0x0060dbc7);
    /* 0060dbc7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060dbc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060dbcc: jmp 0x60db6e */ goto L_0060db6e;
}

void f_0060dbd0(void) /* sub_60DBD0 */
{
    FN_ENTER(0x0060dbd0);
    /* 0060dbd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dbd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbd5: push 0x8e0218 */ { u32 v = 0x8e0218u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060dbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dbe1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060dbe8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060dbeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060dbee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060dbf1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060dbf4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060dbf7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060dbfa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060dbfd: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060dc00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060dc03: call 0x60c858 */ r_esp -= 4; W32(r_esp, 0x60dc08u); f_0060c858();
    /* 0060dc08: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060dc0f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dc12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060dc15: mov dword ptr [ecx], 0xb22760 */ W32((u32)(r_ecx), 0xb22760u);
    /* 0060dc1b: mov eax, dword ptr [0x9c4444] */ r_eax = R32((u32)(0x9c4444u));
    /* 0060dc20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dc21: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060dc24: call dword ptr [0xb228ac] */ { u32 t = R32((u32)(0xb228acu)); r_esp -= 4; W32(r_esp, 0x60dc2au); call_ind(t); }
    /* 0060dc2a: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dc2d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060dc30: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060dc33: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060dc36: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060dc3c: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060dc42: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dc45: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060dc4b: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060dc51: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 0060dc57: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060dc5d: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060dc63: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 0060dc69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dc6c: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060dc72: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dc75: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060dc7b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060dc7e: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060dc84: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060dc87: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060dc8d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060dc90: mov edx, dword ptr [0xa8e8ec] */ r_edx = R32((u32)(0xa8e8ecu));
    /* 0060dc96: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060dc9c: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0060dc9f: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0060dca2: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 0060dca8: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0060dcab: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060dcae: call 0x606bc8 */ r_esp -= 4; W32(r_esp, 0x60dcb3u); f_00606bc8();
    /* 0060dcb3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dcb6: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dcb9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060dcbc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060dcbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060dcc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060dcc9: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dccc: ret 8 */ FN_RET(0x0060dbd0); r_esp += 12; return;
}

void f_0060dcd0(void) /* sub_60DCD0 */
{
    FN_ENTER(0x0060dcd0);
    /* 0060dcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dcd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcd5: push 0x8e0240 */ { u32 v = 0x8e0240u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060dce0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dce1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060dce8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060dceb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060dcee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060dcf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060dcf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060dcf7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dcfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0060dd03: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x60dd08u); f_008581c5();
    /* 0060dd08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060dd09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060dd0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060dd0e: je 0x60dd4f */ if (fZ) goto L_0060dd4f;
L_0060dd10:; BB(0x0060dd10);
    /* 0060dd10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060dd17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060dd1e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dd21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060dd23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd26: push 0x9c4434 */ { u32 v = 0x9c4434u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd2d: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x60dd32u); f_005b7a84();
    /* 0060dd32: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dd35: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060dd3c:; BB(0x0060dd3c);
    /* 0060dd3c: mov dword ptr [0xa8e8ec], eax */ W32((u32)(0xa8e8ecu), r_eax);
    /* 0060dd41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060dd44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060dd4b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060dd4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060dd4e: ret  */ FN_RET(0x0060dcd0); r_esp += 4; return;
L_0060dd4f:; BB(0x0060dd4f);
    /* 0060dd4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060dd51: jmp 0x60dd3c */ goto L_0060dd3c;
}

void f_0060dd54(void) /* sub_60DD54 */
{
    FN_ENTER(0x0060dd54);
    /* 0060dd54: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd55: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060dd57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060dd59: call 0x60dd78 */ r_esp -= 4; W32(r_esp, 0x60dd5eu); f_0060dd78();
    /* 0060dd5e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060dd62: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060dd64: jne 0x60dd6a */ if (!fZ) goto L_0060dd6a;
L_0060dd66:; BB(0x0060dd66);
    /* 0060dd66: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060dd67: ret 4 */ FN_RET(0x0060dd54); r_esp += 8; return;
L_0060dd6a:; BB(0x0060dd6a);
    /* 0060dd6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd6b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x60dd70u); f_005c2f74();
    /* 0060dd70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060dd71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060dd72: ret 4 */ FN_RET(0x0060dd54); r_esp += 8; return;
}

void f_0060dd78(void) /* sub_60DD78 */
{
    FN_ENTER(0x0060dd78);
    /* 0060dd78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd79: mov ebp, esp */ r_ebp = r_esp;
    /* 0060dd7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd7d: push 0x8e025c */ { u32 v = 0x8e025cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd82: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060dd88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060dd89: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060dd90: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060dd93: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060dd96: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060dd99: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0060dd9c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060dd9f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060dda2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060dda5: mov dword ptr [ecx], 0xb22960 */ W32((u32)(r_ecx), 0xb22960u);
    /* 0060ddab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060ddb2: call 0x606190 */ r_esp -= 4; W32(r_esp, 0x60ddb7u); f_00606190();
    /* 0060ddb7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060ddba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060ddc1: mov esp, ebp */ r_esp = r_ebp;
    /* 0060ddc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ddc4: ret  */ FN_RET(0x0060dd78); r_esp += 4; return;
}

void f_0060ddc8(void) /* sub_60DDC8 */
{
    FN_ENTER(0x0060ddc8);
    /* 0060ddc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060ddc9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0060ddcb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0060ddce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060ddd0: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060ddd6: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060dddc: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x60dddfu); call_ind(t); }
    /* 0060dddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060dde1: je 0x60ddee */ if (fZ) goto L_0060ddee;
L_0060dde3:; BB(0x0060dde3);
    /* 0060dde3: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0060dde9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060ddec: je 0x60ddf0 */ if (fZ) goto L_0060ddf0;
L_0060ddee:; BB(0x0060ddee);
    /* 0060ddee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060ddef: ret  */ FN_RET(0x0060ddc8); r_esp += 4; return;
L_0060ddf0:; BB(0x0060ddf0);
    /* 0060ddf0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0060ddf5: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0060ddf8: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0060ddfb: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0060de00: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x60de05u); f_00829cc8();
    /* 0060de05: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060de07: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x60de0cu); f_0082d990();
    /* 0060de0c: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0060de0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060de11: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x60de16u); f_008316b4();
    /* 0060de16: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0060de19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060de1b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x60de20u); f_0082d8bc();
    /* 0060de20: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060de22: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x60de27u); f_007aa668();
    /* 0060de27: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x60de2cu); f_0082da80();
    /* 0060de2c: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0060de31: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0060de34: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0060de39: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0060de3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060de3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060de3f: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x60de44u); f_00779d4c();
    /* 0060de44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060de45: ret  */ FN_RET(0x0060ddc8); r_esp += 4; return;
}

void f_0060de48(void)
{
    FN_ENTER(0x0060de48);
    /* 0060de48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060de49: mov ebp, esp */ r_ebp = r_esp;
    /* 0060de4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060de4d: push 0x8e029e */ { u32 v = 0x8e029eu; r_esp -= 4; W32(r_esp, v); }
    /* 0060de52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060de58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060de59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060de60: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060de63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060de66: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060de69: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060de6c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060de6f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0060de71: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060de78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60de7du); f_005caba4();
    /* 0060de7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060de7e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0060de81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060de83: je 0x60df0b */ if (fZ) goto L_0060df0b;
L_0060de89:; BB(0x0060de89);
    /* 0060de89: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0060de90: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060de97: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060de9d: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060dea0: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x60dea5u); f_00787a4c();
    /* 0060dea5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0060dea8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0060deaf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0060deb2:; BB(0x0060deb2);
    /* 0060deb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060deb9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0060dec0: push 0x3c0 */ { u32 v = 0x3c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dec5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60decau); f_005caba4();
    /* 0060deca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060decb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0060dece: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060ded0: je 0x60df07 */ if (fZ) goto L_0060df07;
L_0060ded2:; BB(0x0060ded2);
    /* 0060ded2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0060ded9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0060dee0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060dee3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0060dee6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dee9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060deea: call 0x60df14 */ r_esp -= 4; W32(r_esp, 0x60deefu); f_0060df14();
    /* 0060deef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060def2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0060def9:; BB(0x0060def9);
    /* 0060def9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060defc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060df03: mov esp, ebp */ r_esp = r_ebp;
    /* 0060df05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060df06: ret  */ FN_RET(0x0060de48); r_esp += 4; return;
L_0060df07:; BB(0x0060df07);
    /* 0060df07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060df09: jmp 0x60def9 */ goto L_0060def9;
L_0060df0b:; BB(0x0060df0b);
    /* 0060df0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060df0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060df10: jmp 0x60deb2 */ goto L_0060deb2;
}

void f_0060df14(void) /* sub_60DF14 */
{
    FN_ENTER(0x0060df14);
    /* 0060df14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060df15: mov ebp, esp */ r_ebp = r_esp;
    /* 0060df17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060df19: push 0x8e02b8 */ { u32 v = 0x8e02b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0060df1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060df24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060df25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060df2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060df2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060df32: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0060df35: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0060df38: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0060df3b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0060df3e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060df41: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0060df44: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0060df47: call 0x606c28 */ r_esp -= 4; W32(r_esp, 0x60df4cu); f_00606c28();
    /* 0060df4c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0060df53: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060df56: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0060df59: mov dword ptr [ecx], 0xb22960 */ W32((u32)(r_ecx), 0xb22960u);
    /* 0060df5f: mov eax, dword ptr [0x9c4448] */ r_eax = R32((u32)(0x9c4448u));
    /* 0060df64: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060df65: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060df68: call dword ptr [0xb22aac] */ { u32 t = R32((u32)(0xb22aacu)); r_esp -= 4; W32(r_esp, 0x60df6eu); call_ind(t); }
    /* 0060df6e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060df71: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060df74: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060df76: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0060df79: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0060df7c: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0060df7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060df81: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0060df87: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 0060df8d: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060df90: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 0060df96: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 0060df9c: mov eax, dword ptr [edx + 0x2a8] */ r_eax = R32((u32)(r_edx+0x2a8u));
    /* 0060dfa2: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 0060dfa8: mov dword ptr [edx + 0x29c], eax */ W32((u32)(r_edx+0x29cu), r_eax);
    /* 0060dfae: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 0060dfb4: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 0060dfba: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dfbd: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 0060dfc3: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0060dfc6: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 0060dfcc: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0060dfcf: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 0060dfd5: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0060dfd8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0060dfda: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x60dfe0u); call_ind(t); }
    /* 0060dfe0: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0060dfe6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dfe8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x60dfedu); f_005b8610();
    /* 0060dfed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060dff0: mov ecx, dword ptr [0xa72d38] */ r_ecx = R32((u32)(0xa72d38u));
    /* 0060dff6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060dff8: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0060dffb: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x60e000u); f_005b8624();
    /* 0060e000: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e003: mov edx, dword ptr [0xa72d38] */ r_edx = R32((u32)(0xa72d38u));
    /* 0060e009: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0060e00c: movsx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0060e013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060e014: push dword ptr [edx + 0x430] */ { u32 v = R32((u32)(r_edx+0x430u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060e01a: push 0x9c4478 */ { u32 v = 0x9c4478u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e01f: call 0x7aa624 */ r_esp -= 4; W32(r_esp, 0x60e024u); f_007aa624();
    /* 0060e024: push 0x9c3e8c */ { u32 v = 0x9c3e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e029: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e02c: mov dword ptr [ecx + 0x358], 0x9c3eb0 */ W32((u32)(r_ecx+0x358u), 0x9c3eb0u);
    /* 0060e036: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x60e03bu); f_00771160();
    /* 0060e03b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e03e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060e040: push 0x9c444c */ { u32 v = 0x9c444cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060e045: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x60e04au); f_007b9a88();
    /* 0060e04a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e04d: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x60e052u); f_007b4f54();
    /* 0060e052: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e055: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x60e05au); f_0078730c();
    /* 0060e05a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e05d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0060e060: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0060e063: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 0060e069: mov ecx, dword ptr [edi + 0x304] */ r_ecx = R32((u32)(r_edi+0x304u));
    /* 0060e06f: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 0060e075: mov dword ptr [edi + 0x74], edx */ W32((u32)(r_edi+0x74u), r_edx);
    /* 0060e078: mov dword ptr [edi + 0x78], ecx */ W32((u32)(r_edi+0x78u), r_ecx);
    /* 0060e07b: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 0060e07e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0060e081: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060e084: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060e087: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060e08e: mov esp, ebp */ r_esp = r_ebp;
    /* 0060e090: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060e091: ret 8 */ FN_RET(0x0060df14); r_esp += 12; return;
}

