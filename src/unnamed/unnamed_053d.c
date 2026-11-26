#include "protos.h"

void f_0053d088(void) /* sub_53D088 */
{
    FN_ENTER(0x0053d088);
    /* 0053d088: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d089: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d08b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053d08d: call 0x53d0ac */ r_esp -= 4; W32(r_esp, 0x53d092u); f_0053d0ac();
    /* 0053d092: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053d096: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d098: jne 0x53d09e */ if (!fZ) goto L_0053d09e;
L_0053d09a:; BB(0x0053d09a);
    /* 0053d09a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d09b: ret 4 */ FN_RET(0x0053d088); r_esp += 8; return;
L_0053d09e:; BB(0x0053d09e);
    /* 0053d09e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d09f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53d0a4u); f_005c2f74();
    /* 0053d0a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d0a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d0a6: ret 4 */ FN_RET(0x0053d088); r_esp += 8; return;
}

void f_0053d0ac(void) /* sub_53D0AC */
{
    FN_ENTER(0x0053d0ac);
    /* 0053d0ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0ad: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d0af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0b1: push 0x8d53f0 */ { u32 v = 0x8d53f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053d0bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053d0c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d0c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053d0ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053d0cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053d0d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053d0d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053d0d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d0d9: mov dword ptr [ecx], 0xb02990 */ W32((u32)(r_ecx), 0xb02990u);
    /* 0053d0df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053d0e6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x53d0ebu); f_008171e8();
    /* 0053d0eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d0ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d0f5: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d0f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d0f8: ret  */ FN_RET(0x0053d0ac); r_esp += 4; return;
}

void f_0053d0fc(void) /* sub_53D0FC */
{
    FN_ENTER(0x0053d0fc);
    /* 0053d0fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d0fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d0ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053d101: call 0x53d120 */ r_esp -= 4; W32(r_esp, 0x53d106u); f_0053d120();
    /* 0053d106: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053d10a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d10c: jne 0x53d112 */ if (!fZ) goto L_0053d112;
L_0053d10e:; BB(0x0053d10e);
    /* 0053d10e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d10f: ret 4 */ FN_RET(0x0053d0fc); r_esp += 8; return;
L_0053d112:; BB(0x0053d112);
    /* 0053d112: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d113: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53d118u); f_005c2f74();
    /* 0053d118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d119: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d11a: ret 4 */ FN_RET(0x0053d0fc); r_esp += 8; return;
}

void f_0053d120(void) /* sub_53D120 */
{
    FN_ENTER(0x0053d120);
    /* 0053d120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d121: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d125: push 0x8d540c */ { u32 v = 0x8d540cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d12a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053d130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d131: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053d138: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d13b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053d13e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053d141: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053d144: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053d147: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053d14a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d14d: mov dword ptr [ecx], 0xb029a0 */ W32((u32)(r_ecx), 0xb029a0u);
    /* 0053d153: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053d15a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x53d15fu); f_008171e8();
    /* 0053d15f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d162: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d169: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d16b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d16c: ret  */ FN_RET(0x0053d120); r_esp += 4; return;
}

void f_0053d170(void) /* sub_53D170 */
{
    FN_ENTER(0x0053d170);
    /* 0053d170: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d171: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d173: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053d175: call 0x53d194 */ r_esp -= 4; W32(r_esp, 0x53d17au); f_0053d194();
    /* 0053d17a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053d17e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d180: jne 0x53d186 */ if (!fZ) goto L_0053d186;
L_0053d182:; BB(0x0053d182);
    /* 0053d182: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d183: ret 4 */ FN_RET(0x0053d170); r_esp += 8; return;
L_0053d186:; BB(0x0053d186);
    /* 0053d186: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d187: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53d18cu); f_005c2f74();
    /* 0053d18c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d18d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d18e: ret 4 */ FN_RET(0x0053d170); r_esp += 8; return;
}

void f_0053d194(void) /* sub_53D194 */
{
    FN_ENTER(0x0053d194);
    /* 0053d194: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d195: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d197: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d199: push 0x8d5428 */ { u32 v = 0x8d5428u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d19e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053d1a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053d1ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d1af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053d1b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053d1b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053d1b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053d1bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053d1be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d1c1: mov dword ptr [ecx], 0xb029b0 */ W32((u32)(r_ecx), 0xb029b0u);
    /* 0053d1c7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053d1ce: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x53d1d3u); f_008171e8();
    /* 0053d1d3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d1d6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d1dd: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d1df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d1e0: ret  */ FN_RET(0x0053d194); r_esp += 4; return;
}

void f_0053d1e4(void) /* sub_53D1E4 */
{
    FN_ENTER(0x0053d1e4);
    /* 0053d1e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d1e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053d1e9: call 0x53d208 */ r_esp -= 4; W32(r_esp, 0x53d1eeu); f_0053d208();
    /* 0053d1ee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053d1f2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d1f4: jne 0x53d1fa */ if (!fZ) goto L_0053d1fa;
L_0053d1f6:; BB(0x0053d1f6);
    /* 0053d1f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d1f7: ret 4 */ FN_RET(0x0053d1e4); r_esp += 8; return;
L_0053d1fa:; BB(0x0053d1fa);
    /* 0053d1fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d1fb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x53d200u); f_005c2f74();
    /* 0053d200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d201: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d202: ret 4 */ FN_RET(0x0053d1e4); r_esp += 8; return;
}

void f_0053d208(void) /* sub_53D208 */
{
    FN_ENTER(0x0053d208);
    /* 0053d208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d209: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d20b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d20d: push 0x8d5444 */ { u32 v = 0x8d5444u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053d218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053d220: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053d226: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0053d229: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0053d22c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053d22f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0053d232: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d235: mov dword ptr [ecx], 0xb029c0 */ W32((u32)(r_ecx), 0xb029c0u);
    /* 0053d23b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053d242: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x53d247u); f_005219f0();
    /* 0053d247: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d24a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d251: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d253: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d254: ret  */ FN_RET(0x0053d208); r_esp += 4; return;
}

void f_0053d258(void) /* sub_53D258 */
{
    FN_ENTER(0x0053d258);
    /* 0053d258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053d259: mov ebp, esp */ r_ebp = r_esp;
    /* 0053d25b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053d25d: push 0x8d5460 */ { u32 v = 0x8d5460u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d262: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053d268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d269: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053d270: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d273: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053d276: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0053d279: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0053d27c: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0053d27f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053d282: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053d285: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0053d288: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0053d28b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0053d28e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0053d291: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0053d294: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0053d297: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x53d29cu); f_008193cc();
    /* 0053d29c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053d2a3: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d2a6: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053d2a9: mov dword ptr [esi], 0xb02990 */ W32((u32)(r_esi), 0xb02990u);
    /* 0053d2af: mov eax, dword ptr [0x9bcde4] */ r_eax = R32((u32)(0x9bcde4u));
    /* 0053d2b4: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 0053d2bb: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0053d2be: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053d2c1: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0053d2c4: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0053d2c7: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 0053d2ca: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0053d2cd: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0053d2d0: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0053d2d3: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 0053d2d6: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0053d2d9: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0053d2dc: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053d2df: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0053d2e2: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53d2e7u); f_0082f9c4();
    /* 0053d2e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053d2ea: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0053d2ed: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0053d2f4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53d2f9u); f_0082dcbc();
    /* 0053d2f9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d2fc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053d2ff: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0053d302: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 0053d309: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 0053d30c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53d311u); f_0082ddd8();
    /* 0053d311: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d314: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0053d317: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 0053d31a: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053d31d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d31e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d31f: call 0x7829cc */ r_esp -= 4; W32(r_esp, 0x53d324u); f_007829cc();
    /* 0053d324: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053d327: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d32a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d32c: je 0x53d345 */ if (fZ) goto L_0053d345;
L_0053d32e:; BB(0x0053d32e);
    /* 0053d32e: push 0xffffe800 */ { u32 v = 0xffffe800u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d333: lea eax, [edx + 0x20] */ r_eax = (u32)(r_edx+0x20u);
    /* 0053d336: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053d339: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d33a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d33b: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x53d340u); f_00782b64();
    /* 0053d340: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053d343: jmp 0x53d35a */ goto L_0053d35a;
L_0053d345:; BB(0x0053d345);
    /* 0053d345: push 0x1800 */ { u32 v = 0x1800u; r_esp -= 4; W32(r_esp, v); }
    /* 0053d34a: lea eax, [edx + 0x20] */ r_eax = (u32)(r_edx+0x20u);
    /* 0053d34d: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053d350: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053d352: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x53d357u); f_00782b64();
    /* 0053d357: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0053d35a:; BB(0x0053d35a);
    /* 0053d35a: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0053d35d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053d360: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053d363: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053d366: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053d369: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053d370: mov esp, ebp */ r_esp = r_ebp;
    /* 0053d372: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053d373: ret 0x10 */ FN_RET(0x0053d258); r_esp += 20; return;
}

void f_0053d378(void) /* sub_53D378 */
{
    FN_ENTER(0x0053d378);
    /* 0053d378: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d379: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d37b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0053d37e: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0053d382: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d383: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x53d388u); f_0051f8d8();
    /* 0053d388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d38b: je 0x53d39c */ if (fZ) goto L_0053d39c;
L_0053d38d:; BB(0x0053d38d);
    /* 0053d38d: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0053d391: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d396: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053d39a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d39b: ret  */ FN_RET(0x0053d378); r_esp += 4; return;
L_0053d39c:; BB(0x0053d39c);
    /* 0053d39c: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053d39f: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x53d3a4u); f_00520f3c();
    /* 0053d3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053d3a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d3a7: jne 0x53d3b8 */ if (!fZ) goto L_0053d3b8;
L_0053d3a9:; BB(0x0053d3a9);
    /* 0053d3a9: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0053d3ad: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d3b2: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053d3b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d3b7: ret  */ FN_RET(0x0053d378); r_esp += 4; return;
L_0053d3b8:; BB(0x0053d3b8);
    /* 0053d3b8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0053d3bb: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 0053d3c2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d3c5: jne 0x53d3d6 */ if (!fZ) goto L_0053d3d6;
L_0053d3c7:; BB(0x0053d3c7);
    /* 0053d3c7: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0053d3cb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d3d0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053d3d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d3d5: ret  */ FN_RET(0x0053d378); r_esp += 4; return;
L_0053d3d6:; BB(0x0053d3d6);
    /* 0053d3d6: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0053d3d9: fcom dword ptr [0x923494] */ fx_compare(ST(0), R_F32((u32)(0x923494u))); 
    /* 0053d3df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053d3e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053d3e2: ja 0x53d3f5 */ if ((!fC&&!fZ)) goto L_0053d3f5;
L_0053d3e4:; BB(0x0053d3e4);
    /* 0053d3e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053d3e6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0053d3ea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d3ef: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053d3f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d3f4: ret  */ FN_RET(0x0053d378); r_esp += 4; return;
L_0053d3f5:; BB(0x0053d3f5);
    /* 0053d3f5: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0053d3f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053d3fa: fstp dword ptr [edx + 0x30c] */ W_F32((u32)(r_edx+0x30cu), ST(0)); FPOP();
    /* 0053d400: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0053d403: fmul dword ptr [ebx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x2cu));
    /* 0053d406: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0053d409: fstp dword ptr [eax + 0x314] */ W_F32((u32)(r_eax+0x314u), ST(0)); FPOP();
    /* 0053d40f: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0053d412: fmul dword ptr [0x923490] */ ST(0) = ST(0) * R_F32((u32)(0x923490u));
    /* 0053d418: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0053d41b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d41c: ret  */ FN_RET(0x0053d378); r_esp += 4; return;
}

void f_0053d3a0(void)
{
    FN_ENTER(0x0053d3a0);
    /* 0053d3a0: cwde  */ r_eax = (u32)(i32)(i16)r_eax;
    /* 0053d3a1: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;   }
    /* 0053d3a3: call ptr [ecx - 0x7b] */ { u32 t = R32((u32)(r_ecx+0xffffff85u)); r_esp -= 4; W32(r_esp, 0x53d3a6u); call_ind(t); }
    /* 0053d3a6: sal byte ptr [ebp + 0xf], 0xf */ { u32 ad = (u32)(r_ebp+0xfu); u32 c = (15u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0053d3aa: mov bh, 0x43 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0x43u) & 0xffu) << 8);
    /* 0053d3ac: or byte ptr [0xffff0001], cl */ { u32 ad = (u32)(0xffff0001u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053d3b2: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0053d3b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d3b7: ret  */ FN_RET(0x0053d3a0); r_esp += 4; return;
}

void f_0053d420(void) /* sub_53D420 */
{
    FN_ENTER(0x0053d420);
    /* 0053d420: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053d421: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053d422: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d423: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d426: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0053d428: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 0053d42c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0053d42e: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053d432: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x53d437u); f_008193cc();
    /* 0053d437: fld dword ptr [0x92346c] */ FPUSH(R_F32((u32)(0x92346cu)));
    /* 0053d43d: fld dword ptr [0x923468] */ FPUSH(R_F32((u32)(0x923468u)));
    /* 0053d443: mov dword ptr [ebx], 0xb029a0 */ W32((u32)(r_ebx), 0xb029a0u);
    /* 0053d449: mov edx, dword ptr [0x9bcde8] */ r_edx = R32((u32)(0x9bcde8u));
    /* 0053d44f: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0053d452: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0053d454: mov dword ptr [ebx + 0x20], edi */ W32((u32)(r_ebx+0x20u), r_edi);
    /* 0053d457: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0053d45a: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0053d45d: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0053d461: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 0053d464: mov dword ptr [ebx + 0x38], 0x41200000 */ W32((u32)(r_ebx+0x38u), 0x41200000u);
    /* 0053d46b: mov dword ptr [ebx + 0x28], esi */ W32((u32)(r_ebx+0x28u), r_esi);
    /* 0053d46e: mov dword ptr [ebx + 0x2c], 0x3f800000 */ W32((u32)(r_ebx+0x2cu), 0x3f800000u);
    /* 0053d475: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053d477: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0053d47a: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 0053d47d: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0053d480: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0053d483: fld dword ptr [0xa73660] */ FPUSH(R_F32((u32)(0xa73660u)));
    /* 0053d489: fld dword ptr [0xa73660] */ FPUSH(R_F32((u32)(0xa73660u)));
    /* 0053d48f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d491: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d493: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d495: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d497: fld dword ptr [0xa73668] */ FPUSH(R_F32((u32)(0xa73668u)));
    /* 0053d49d: fld dword ptr [0xa73668] */ FPUSH(R_F32((u32)(0xa73668u)));
    /* 0053d4a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4a5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0053d4a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4a9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0053d4ab: lea edi, [ebx + 0x40] */ r_edi = (u32)(r_ebx+0x40u);
    /* 0053d4ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d4b0: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0053d4b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4b4: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0053d4b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4b9: fstp dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0)); FPOP();
    /* 0053d4bc: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 0053d4bf: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 0053d4c6: mov dword ptr [edi + 0x14], 0 */ W32((u32)(r_edi+0x14u), 0x0u);
    /* 0053d4cd: fld dword ptr [0xa7366c] */ FPUSH(R_F32((u32)(0xa7366cu)));
    /* 0053d4d3: fld dword ptr [0xa7366c] */ FPUSH(R_F32((u32)(0xa7366cu)));
    /* 0053d4d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4db: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d4dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4df: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d4e1: fld dword ptr [0xa73674] */ FPUSH(R_F32((u32)(0xa73674u)));
    /* 0053d4e7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d4e9: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0053d4ec: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 0053d4ef: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d4f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4f3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d4f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4f7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d4f9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d4fb: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 0053d4fe: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 0053d501: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 0053d508: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 0053d50f: fld dword ptr [0xa73678] */ FPUSH(R_F32((u32)(0xa73678u)));
    /* 0053d515: fld dword ptr [0xa73678] */ FPUSH(R_F32((u32)(0xa73678u)));
    /* 0053d51b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d51d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d51f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d521: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d523: fld dword ptr [0xa73680] */ FPUSH(R_F32((u32)(0xa73680u)));
    /* 0053d529: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d52b: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 0053d52e: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 0053d531: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d533: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d535: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d537: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d539: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d53b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d53d: fstp dword ptr [edi + 0x58] */ W_F32((u32)(r_edi+0x58u), ST(0)); FPOP();
    /* 0053d540: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 0053d543: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
    /* 0053d54a: mov dword ptr [edi + 0x54], 0 */ W32((u32)(r_edi+0x54u), 0x0u);
    /* 0053d551: fld dword ptr [0xa73684] */ FPUSH(R_F32((u32)(0xa73684u)));
    /* 0053d557: fld dword ptr [0xa73684] */ FPUSH(R_F32((u32)(0xa73684u)));
    /* 0053d55d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d55f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d561: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d563: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d565: fld dword ptr [0xa7368c] */ FPUSH(R_F32((u32)(0xa7368cu)));
    /* 0053d56b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d56d: fstp dword ptr [edi + 0x70] */ W_F32((u32)(r_edi+0x70u), ST(0)); FPOP();
    /* 0053d570: fstp dword ptr [edi + 0x60] */ W_F32((u32)(r_edi+0x60u), ST(0)); FPOP();
    /* 0053d573: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d575: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d577: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d579: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d57b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d57d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d57f: fstp dword ptr [edi + 0x78] */ W_F32((u32)(r_edi+0x78u), ST(0)); FPOP();
    /* 0053d582: fstp dword ptr [edi + 0x68] */ W_F32((u32)(r_edi+0x68u), ST(0)); FPOP();
    /* 0053d585: mov dword ptr [edi + 0x64], 0 */ W32((u32)(r_edi+0x64u), 0x0u);
    /* 0053d58c: mov dword ptr [edi + 0x74], 0 */ W32((u32)(r_edi+0x74u), 0x0u);
    /* 0053d593: fld dword ptr [0xa73690] */ FPUSH(R_F32((u32)(0xa73690u)));
    /* 0053d599: fld dword ptr [0xa73690] */ FPUSH(R_F32((u32)(0xa73690u)));
    /* 0053d59f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d5a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5a5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d5a7: fld dword ptr [0xa73698] */ FPUSH(R_F32((u32)(0xa73698u)));
    /* 0053d5ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d5af: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 0053d5b5: fstp dword ptr [edi + 0x80] */ W_F32((u32)(r_edi+0x80u), ST(0)); FPOP();
    /* 0053d5bb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d5bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5bf: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d5c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5c3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d5c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5c7: fstp dword ptr [edi + 0x98] */ W_F32((u32)(r_edi+0x98u), ST(0)); FPOP();
    /* 0053d5cd: fstp dword ptr [edi + 0x88] */ W_F32((u32)(r_edi+0x88u), ST(0)); FPOP();
    /* 0053d5d3: mov dword ptr [edi + 0x84], 0 */ W32((u32)(r_edi+0x84u), 0x0u);
    /* 0053d5dd: mov dword ptr [edi + 0x94], 0 */ W32((u32)(r_edi+0x94u), 0x0u);
    /* 0053d5e7: fld dword ptr [0xa7369c] */ FPUSH(R_F32((u32)(0xa7369cu)));
    /* 0053d5ed: fld dword ptr [0xa7369c] */ FPUSH(R_F32((u32)(0xa7369cu)));
    /* 0053d5f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5f5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d5f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d5f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d5fb: fld dword ptr [0xa736a4] */ FPUSH(R_F32((u32)(0xa736a4u)));
    /* 0053d601: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0053d603: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0053d605: fstp dword ptr [edi + 0xa0] */ W_F32((u32)(r_edi+0xa0u), ST(0)); FPOP();
    /* 0053d60b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d60d: fstp dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0)); FPOP();
    /* 0053d613: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d615: fstp dword ptr [edi + 0xb0] */ W_F32((u32)(r_edi+0xb0u), ST(0)); FPOP();
    /* 0053d61b: fstp dword ptr [edi + 0xb8] */ W_F32((u32)(r_edi+0xb8u), ST(0)); FPOP();
    /* 0053d621: mov dword ptr [edi + 0xa4], 0 */ W32((u32)(r_edi+0xa4u), 0x0u);
    /* 0053d62b: mov dword ptr [edi + 0xb4], 0 */ W32((u32)(r_edi+0xb4u), 0x0u);
    /* 0053d635: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0053d638: fmul dword ptr [0x923474] */ ST(0) = ST(0) * R_F32((u32)(0x923474u));
    /* 0053d63e: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0053d641: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053d644: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053d648: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053d64d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053d652: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053d656: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053d65a: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053d65e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053d661: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0053d664: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0053d668: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0053d66b: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d66e: jge 0x53d6dd */ if ((fS==fO)) goto L_0053d6dd;
L_0053d670:; BB(0x0053d670);
    /* 0053d670: mov ecx, edx */ r_ecx = r_edx;
    /* 0053d672: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d674: add ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d677: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d67a: jl 0x53d6c3 */ if ((fS!=fO)) goto L_0053d6c3;
L_0053d67c:; BB(0x0053d67c);
    /* 0053d67c: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d683: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d685: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 0053d688: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d68f: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d691: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 0053d694: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d69b: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d69d: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 0053d6a0: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d6a7: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d6a9: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 0053d6ac: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d6b3: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d6b5: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 0053d6b8: add edi, 0x50 */ {  u32 a = r_edi; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053d6bb: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053d6be: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d6c1: jl 0x53d67c */ if ((fS!=fO)) goto L_0053d67c;
L_0053d6c3:; BB(0x0053d6c3);
    /* 0053d6c3: mov ecx, dword ptr [eax*2 + 0xa736a8] */ r_ecx = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d6ca: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d6cc: mov dword ptr [edi + 0xc], ecx */ W32((u32)(r_edi+0xcu), r_ecx);
    /* 0053d6cf: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053d6d2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053d6d5: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d6d8: jl 0x53d6c3 */ if ((fS!=fO)) goto L_0053d6c3;
L_0053d6da:; BB(0x0053d6da);
    /* 0053d6da: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
L_0053d6dd:; BB(0x0053d6dd);
    /* 0053d6dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d6df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053d6e1: jle 0x53d6f9 */ if ((fZ||fS!=fO)) goto L_0053d6f9;
L_0053d6e3:; BB(0x0053d6e3);
    /* 0053d6e3: mov edx, dword ptr [0xa736a8] */ r_edx = R32((u32)(0xa736a8u));
    /* 0053d6e9: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053d6eb: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 0053d6ee: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053d6f1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053d6f4: cmp eax, dword ptr [ebx + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d6f7: jl 0x53d6e3 */ if ((fS!=fO)) goto L_0053d6e3;
L_0053d6f9:; BB(0x0053d6f9);
    /* 0053d6f9: mov eax, ebx */ r_eax = r_ebx;
    /* 0053d6fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053d6fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d6ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053d700: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053d701: ret 0xc */ FN_RET(0x0053d420); r_esp += 16; return;
}

void f_0053d704(void) /* sub_53D704 */
{
    FN_ENTER(0x0053d704);
    /* 0053d704: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053d705: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053d706: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053d707: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053d70a: mov esi, ecx */ r_esi = r_ecx;
    /* 0053d70c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0053d70f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d711: jne 0x53d8fb */ if (!fZ) goto L_0053d8fb;
L_0053d717:; BB(0x0053d717);
    /* 0053d717: fld dword ptr [0x923454] */ FPUSH(R_F32((u32)(0x923454u)));
    /* 0053d71d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0053d720: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0053d723: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053d725: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053d727: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0053d72a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053d72b: ja 0x53d73b */ if ((!fC&&!fZ)) goto L_0053d73b;
L_0053d72d:; BB(0x0053d72d);
    /* 0053d72d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0053d72f: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 0053d736: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 0053d739: jmp 0x53d740 */ goto L_0053d740;
L_0053d73b:; BB(0x0053d73b);
    /* 0053d73b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053d73d: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
L_0053d740:; BB(0x0053d740);
    /* 0053d740: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d742: fld dword ptr [0x923460] */ FPUSH(R_F32((u32)(0x923460u)));
    /* 0053d748: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0053d74a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053d74c: lea ebx, [esi + 0x40] */ r_ebx = (u32)(r_esi+0x40u);
    /* 0053d74f: fld dword ptr [0xa73660] */ FPUSH(R_F32((u32)(0xa73660u)));
    /* 0053d755: fld dword ptr [0xa73660] */ FPUSH(R_F32((u32)(0xa73660u)));
    /* 0053d75b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d75d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d75f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d761: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d763: fld dword ptr [0xa73668] */ FPUSH(R_F32((u32)(0xa73668u)));
    /* 0053d769: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d76b: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0053d76e: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0053d770: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d772: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d774: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d776: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d778: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d77a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d77c: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0053d77f: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0053d782: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 0053d789: mov dword ptr [ebx + 0x14], 0 */ W32((u32)(r_ebx+0x14u), 0x0u);
    /* 0053d790: fld dword ptr [0xa7366c] */ FPUSH(R_F32((u32)(0xa7366cu)));
    /* 0053d796: fld dword ptr [0xa7366c] */ FPUSH(R_F32((u32)(0xa7366cu)));
    /* 0053d79c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d79e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d7a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7a2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d7a4: fld dword ptr [0xa73674] */ FPUSH(R_F32((u32)(0xa73674u)));
    /* 0053d7aa: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d7ac: fstp dword ptr [ebx + 0x30] */ W_F32((u32)(r_ebx+0x30u), ST(0)); FPOP();
    /* 0053d7af: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0053d7b2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d7b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7b6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d7b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7ba: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d7bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7be: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 0053d7c1: fstp dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0)); FPOP();
    /* 0053d7c4: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
    /* 0053d7cb: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 0053d7d2: fld dword ptr [0xa73678] */ FPUSH(R_F32((u32)(0xa73678u)));
    /* 0053d7d8: fld dword ptr [0xa73678] */ FPUSH(R_F32((u32)(0xa73678u)));
    /* 0053d7de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7e0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d7e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7e4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d7e6: fld dword ptr [0xa73680] */ FPUSH(R_F32((u32)(0xa73680u)));
    /* 0053d7ec: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d7ee: fstp dword ptr [ebx + 0x50] */ W_F32((u32)(r_ebx+0x50u), ST(0)); FPOP();
    /* 0053d7f1: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 0053d7f4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d7f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7f8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d7fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d7fc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d7fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d800: fstp dword ptr [ebx + 0x58] */ W_F32((u32)(r_ebx+0x58u), ST(0)); FPOP();
    /* 0053d803: fstp dword ptr [ebx + 0x48] */ W_F32((u32)(r_ebx+0x48u), ST(0)); FPOP();
    /* 0053d806: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
    /* 0053d80d: mov dword ptr [ebx + 0x54], 0 */ W32((u32)(r_ebx+0x54u), 0x0u);
    /* 0053d814: fld dword ptr [0xa73684] */ FPUSH(R_F32((u32)(0xa73684u)));
    /* 0053d81a: fld dword ptr [0xa73684] */ FPUSH(R_F32((u32)(0xa73684u)));
    /* 0053d820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d822: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d824: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d826: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d828: fld dword ptr [0xa7368c] */ FPUSH(R_F32((u32)(0xa7368cu)));
    /* 0053d82e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d830: fstp dword ptr [ebx + 0x70] */ W_F32((u32)(r_ebx+0x70u), ST(0)); FPOP();
    /* 0053d833: fstp dword ptr [ebx + 0x60] */ W_F32((u32)(r_ebx+0x60u), ST(0)); FPOP();
    /* 0053d836: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d838: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d83a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d83c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d83e: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d840: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d842: fstp dword ptr [ebx + 0x78] */ W_F32((u32)(r_ebx+0x78u), ST(0)); FPOP();
    /* 0053d845: fstp dword ptr [ebx + 0x68] */ W_F32((u32)(r_ebx+0x68u), ST(0)); FPOP();
    /* 0053d848: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
    /* 0053d84f: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
    /* 0053d856: fld dword ptr [0xa73690] */ FPUSH(R_F32((u32)(0xa73690u)));
    /* 0053d85c: fld dword ptr [0xa73690] */ FPUSH(R_F32((u32)(0xa73690u)));
    /* 0053d862: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d864: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d868: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d86a: fld dword ptr [0xa73698] */ FPUSH(R_F32((u32)(0xa73698u)));
    /* 0053d870: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053d872: fstp dword ptr [ebx + 0x90] */ W_F32((u32)(r_ebx+0x90u), ST(0)); FPOP();
    /* 0053d878: fstp dword ptr [ebx + 0x80] */ W_F32((u32)(r_ebx+0x80u), ST(0)); FPOP();
    /* 0053d87e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0053d880: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d882: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d884: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d886: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d888: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d88a: fstp dword ptr [ebx + 0x98] */ W_F32((u32)(r_ebx+0x98u), ST(0)); FPOP();
    /* 0053d890: fstp dword ptr [ebx + 0x88] */ W_F32((u32)(r_ebx+0x88u), ST(0)); FPOP();
    /* 0053d896: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
    /* 0053d8a0: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 0053d8aa: fld dword ptr [0xa7369c] */ FPUSH(R_F32((u32)(0xa7369cu)));
    /* 0053d8b0: fld dword ptr [0xa7369c] */ FPUSH(R_F32((u32)(0xa7369cu)));
    /* 0053d8b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d8b8: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053d8ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d8bc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053d8be: fld dword ptr [0xa736a4] */ FPUSH(R_F32((u32)(0xa736a4u)));
    /* 0053d8c4: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0053d8c6: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0053d8c8: fstp dword ptr [ebx + 0xa0] */ W_F32((u32)(r_ebx+0xa0u), ST(0)); FPOP();
    /* 0053d8ce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053d8d0: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
    /* 0053d8d6: fstp dword ptr [ebx + 0xb0] */ W_F32((u32)(r_ebx+0xb0u), ST(0)); FPOP();
    /* 0053d8dc: fstp dword ptr [ebx + 0xb8] */ W_F32((u32)(r_ebx+0xb8u), ST(0)); FPOP();
    /* 0053d8e2: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 0053d8ec: mov dword ptr [ebx + 0xb4], 0 */ W32((u32)(r_ebx+0xb4u), 0x0u);
    /* 0053d8f6: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0053d8f9: jmp 0x53d93e */ goto L_0053d93e;
L_0053d8fb:; BB(0x0053d8fb);
    /* 0053d8fb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053d8fe: jne 0x53d938 */ if (!fZ) goto L_0053d938;
L_0053d900:; BB(0x0053d900);
    /* 0053d900: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0053d903: fsub dword ptr [0x923458] */ ST(0) = ST(0) - R_F32((u32)(0x923458u));
    /* 0053d909: fcom dword ptr [0x923464] */ fx_compare(ST(0), R_F32((u32)(0x923464u))); 
    /* 0053d90f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053d911: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053d912: jb 0x53d91c */ if (fC) goto L_0053d91c;
L_0053d914:; BB(0x0053d914);
    /* 0053d914: fst dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0));
    /* 0053d917: lea ebx, [esi + 0x40] */ r_ebx = (u32)(r_esi+0x40u);
    /* 0053d91a: jmp 0x53d93e */ goto L_0053d93e;
L_0053d91c:; BB(0x0053d91c);
    /* 0053d91c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053d91e: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 0053d922: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053d924: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0053d927: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053d92d: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 0053d931: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053d934: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053d935: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053d936: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053d937: ret  */ FN_RET(0x0053d704); r_esp += 4; return;
L_0053d938:; BB(0x0053d938);
    /* 0053d938: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0053d93b: lea ebx, [esi + 0x40] */ r_ebx = (u32)(r_esi+0x40u);
L_0053d93e:; BB(0x0053d93e);
    /* 0053d93e: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0053d941: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0053d944: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053d949: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0053d94c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d94f: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d952: jl 0x53d95f */ if ((fS!=fO)) goto L_0053d95f;
L_0053d954:; BB(0x0053d954);
    /* 0053d954: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 0053d95b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d95d: jmp 0x53d962 */ goto L_0053d962;
L_0053d95f:; BB(0x0053d95f);
    /* 0053d95f: mov dword ptr [esi + 0x30], ecx */ W32((u32)(r_esi+0x30u), r_ecx);
L_0053d962:; BB(0x0053d962);
    /* 0053d962: fmul dword ptr [0x92345c] */ ST(0) = ST(0) * R_F32((u32)(0x92345cu));
    /* 0053d968: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053d96b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053d96f: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053d974: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053d979: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053d97d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053d981: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053d985: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053d988: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0053d98b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0053d98f: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0053d992: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d995: jge 0x53da04 */ if ((fS==fO)) goto L_0053da04;
L_0053d997:; BB(0x0053d997);
    /* 0053d997: mov edi, ecx */ r_edi = r_ecx;
    /* 0053d999: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0053d99b: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053d99e: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9a1: jl 0x53d9ea */ if ((fS!=fO)) goto L_0053d9ea;
L_0053d9a3:; BB(0x0053d9a3);
    /* 0053d9a3: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9aa: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9ac: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 0053d9af: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9b6: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9b8: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 0053d9bb: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9c2: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9c4: mov dword ptr [ebx + 0x2c], edi */ W32((u32)(r_ebx+0x2cu), r_edi);
    /* 0053d9c7: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9ce: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9d0: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
    /* 0053d9d3: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9da: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9dc: mov dword ptr [ebx + 0x4c], edi */ W32((u32)(r_ebx+0x4cu), r_edi);
    /* 0053d9df: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053d9e2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d9e5: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9e8: jl 0x53d9a3 */ if ((fS!=fO)) goto L_0053d9a3;
L_0053d9ea:; BB(0x0053d9ea);
    /* 0053d9ea: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9f1: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9f3: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 0053d9f6: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053d9f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d9fc: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9ff: jl 0x53d9ea */ if ((fS!=fO)) goto L_0053d9ea;
L_0053da01:; BB(0x0053da01);
    /* 0053da01: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
L_0053da04:; BB(0x0053da04);
    /* 0053da04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053da06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053da08: jle 0x53da20 */ if ((fZ||fS!=fO)) goto L_0053da20;
L_0053da0a:; BB(0x0053da0a);
    /* 0053da0a: mov ecx, dword ptr [0xa736a8] */ r_ecx = R32((u32)(0xa736a8u));
    /* 0053da10: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053da12: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0053da15: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053da18: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053da1b: cmp eax, dword ptr [esi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053da1e: jl 0x53da0a */ if ((fS!=fO)) goto L_0053da0a;
L_0053da20:; BB(0x0053da20);
    /* 0053da20: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053da23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053da24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053da25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053da26: ret  */ FN_RET(0x0053d704); r_esp += 4; return;
}

void f_0053d996(void)
{
    FN_ENTER(0x0053d996);
    /* 0053d996: insd dword ptr es:[edi], dx */ UNSUP(0x0053d996, "insd dword ptr es:[edi], dx");
    /* 0053d997: mov edi, ecx */ r_edi = r_ecx;
    /* 0053d999: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0053d99b: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053d99e: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9a1: jl 0x53d9ea */ if ((fS!=fO)) goto L_0053d9ea;
L_0053d9a3:; BB(0x0053d9a3);
    /* 0053d9a3: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9aa: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9ac: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 0053d9af: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9b6: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9b8: mov dword ptr [ebx + 0x1c], edi */ W32((u32)(r_ebx+0x1cu), r_edi);
    /* 0053d9bb: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9c2: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9c4: mov dword ptr [ebx + 0x2c], edi */ W32((u32)(r_ebx+0x2cu), r_edi);
    /* 0053d9c7: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9ce: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9d0: mov dword ptr [ebx + 0x3c], edi */ W32((u32)(r_ebx+0x3cu), r_edi);
    /* 0053d9d3: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9da: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9dc: mov dword ptr [ebx + 0x4c], edi */ W32((u32)(r_ebx+0x4cu), r_edi);
    /* 0053d9df: add ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053d9e2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d9e5: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9e8: jl 0x53d9a3 */ if ((fS!=fO)) goto L_0053d9a3;
L_0053d9ea:; BB(0x0053d9ea);
    /* 0053d9ea: mov edi, dword ptr [eax*2 + 0xa736a8] */ r_edi = R32((u32)(r_eax*2+0xa736a8u));
    /* 0053d9f1: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0053d9f3: mov dword ptr [ebx + 0xc], edi */ W32((u32)(r_ebx+0xcu), r_edi);
    /* 0053d9f6: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053d9f9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0053d9fc: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053d9ff: jl 0x53d9ea */ if ((fS!=fO)) goto L_0053d9ea;
L_0053da01:; BB(0x0053da01);
    /* 0053da01: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0053da04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053da06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053da08: jle 0x53da20 */ if ((fZ||fS!=fO)) goto L_0053da20;
L_0053da0a:; BB(0x0053da0a);
    /* 0053da0a: mov ecx, dword ptr [0xa736a8] */ r_ecx = R32((u32)(0xa736a8u));
    /* 0053da10: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0053da12: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0053da15: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053da18: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053da1b: cmp eax, dword ptr [esi + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x30u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053da1e: jl 0x53da0a */ if ((fS!=fO)) goto L_0053da0a;
L_0053da20:; BB(0x0053da20);
    /* 0053da20: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053da23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053da24: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053da25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053da26: ret  */ FN_RET(0x0053d996); r_esp += 4; return;
}

void f_0053da28(void) /* sub_53DA28 */
{
    FN_ENTER(0x0053da28);
    /* 0053da28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053da29: mov esi, ecx */ r_esi = r_ecx;
    /* 0053da2b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x53da30u); f_0082d7b0();
    /* 0053da30: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 0053da33: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x53da38u); f_0082d838();
    /* 0053da38: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0053da3b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053da3d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x53da42u); f_0082d8bc();
    /* 0053da42: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0053da45: fcomp dword ptr [0x923450] */ fx_compare(ST(0), R_F32((u32)(0x923450u))); FPOP();
    /* 0053da4b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053da4d: lea ecx, [esi + 0x40] */ r_ecx = (u32)(r_esi+0x40u);
    /* 0053da50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053da52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053da53: mov eax, 1 */ r_eax = 0x1u;
    /* 0053da58: jb 0x53da5c */ if (fC) goto L_0053da5c;
L_0053da5a:; BB(0x0053da5a);
    /* 0053da5a: mov eax, edx */ r_eax = r_edx;
L_0053da5c:; BB(0x0053da5c);
    /* 0053da5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053da5d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053da5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0053da60: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x53da65u); f_0082b1c8();
    /* 0053da65: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0053da68: fcomp dword ptr [0x923450] */ fx_compare(ST(0), R_F32((u32)(0x923450u))); FPOP();
    /* 0053da6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053da70: lea edx, [esi + 0xa0] */ r_edx = (u32)(r_esi+0xa0u);
    /* 0053da76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053da78: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053da79: mov esi, 1 */ r_esi = 0x1u;
    /* 0053da7e: jb 0x53da82 */ if (fC) goto L_0053da82;
L_0053da80:; BB(0x0053da80);
    /* 0053da80: mov esi, ecx */ r_esi = r_ecx;
L_0053da82:; BB(0x0053da82);
    /* 0053da82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053da83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0053da85: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053da86: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x53da8bu); f_0082b1c8();
    /* 0053da8b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053da8e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x53da93u); f_0082da80();
    /* 0053da93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053da94: ret  */ FN_RET(0x0053da28); r_esp += 4; return;
}

void f_0053da98(void) /* sub_53DA98 */
{
    FN_ENTER(0x0053da98);
    /* 0053da98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053da99: mov ebp, esp */ r_ebp = r_esp;
    /* 0053da9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0053da9d: push 0x8d547c */ { u32 v = 0x8d547cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053daa2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0053daa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053daa9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0053dab0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053dab3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0053dab6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0053dab9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0053dabc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0053dabf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0053dac2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053dac5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0053dac8: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0053dacb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053dace: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0053dad1: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x53dad6u); f_008193cc();
    /* 0053dad6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0053dadd: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053dae0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053dae3: mov dword ptr [edx], 0xb029b0 */ W32((u32)(r_edx), 0xb029b0u);
    /* 0053dae9: mov eax, dword ptr [0x9bcde8] */ r_eax = R32((u32)(0x9bcde8u));
    /* 0053daee: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0053daf1: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0053daf3: mov dword ptr [edx + 0x28], esi */ W32((u32)(r_edx+0x28u), r_esi);
    /* 0053daf6: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0053daf9: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0053dafc: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 0053daff: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053db02: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 0053db05: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0053db07: mov dword ptr [edx + 0x34], edi */ W32((u32)(r_edx+0x34u), r_edi);
    /* 0053db0a: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 0053db0d: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 0053db10: mov dword ptr [edx + 0x38], edi */ W32((u32)(r_edx+0x38u), r_edi);
    /* 0053db13: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0053db16: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0053db19: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 0053db1c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0053db1f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053db22: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 0053db25: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 0053db28: mov dword ptr [edx + 0x44], edi */ W32((u32)(r_edx+0x44u), r_edi);
    /* 0053db2b: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0053db2e: lea ecx, [edx + 0x40] */ r_ecx = (u32)(r_edx+0x40u);
    /* 0053db31: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053db34: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53db39u); f_0082f9c4();
    /* 0053db39: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053db3c: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053db3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053db40: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x53db45u); f_00782868();
    /* 0053db45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053db46: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0053db49: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0053db4c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053db4f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053db52: fstp dword ptr [eax + 0x4c] */ W_F32((u32)(r_eax+0x4cu), ST(0)); FPOP();
    /* 0053db55: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
    /* 0053db5c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053db5f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053db66: mov esp, ebp */ r_esp = r_ebp;
    /* 0053db68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053db69: ret 0xc */ FN_RET(0x0053da98); r_esp += 16; return;
}

void f_0053db6c(void) /* sub_53DB6C */
{
    FN_ENTER(0x0053db6c);
    /* 0053db6c: fld dword ptr [0x923448] */ FPUSH(R_F32((u32)(0x923448u)));
    /* 0053db72: fadd dword ptr [ecx + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x50u));
    /* 0053db75: fld dword ptr [0x923444] */ FPUSH(R_F32((u32)(0x923444u)));
    /* 0053db7b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053db7d: fst dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0));
    /* 0053db80: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053db82: fcom dword ptr [ecx + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x4cu))); 
    /* 0053db85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053db87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053db88: jb 0x53dbac */ if (fC) goto L_0053dbac;
L_0053db8a:; BB(0x0053db8a);
    /* 0053db8a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053db8c: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0053db8f: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0053db92: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0053db95: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0053db98: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0053db9b: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0053db9e: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 0053dba2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053dba7: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0053dbab: ret  */ FN_RET(0x0053db6c); r_esp += 4; return;
L_0053dbac:; BB(0x0053dbac);
    /* 0053dbac: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 0053dbaf: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053dbb1: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0053dbb4: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 0053dbb7: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 0053dbba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dbbc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053dbbe: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0053dbc1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0053dbc3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053dbc5: fadd dword ptr [ecx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30u));
    /* 0053dbc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dbca: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0053dbcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dbcf: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 0053dbd2: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0053dbd5: ret  */ FN_RET(0x0053db6c); r_esp += 4; return;
}

void f_0053dbd8(void) /* sub_53DBD8 */
{
    FN_ENTER(0x0053dbd8);
    /* 0053dbd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053dbd9: mov esi, ecx */ r_esi = r_ecx;
    /* 0053dbdb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053dbdf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053dbe3: mov ecx, esi */ r_ecx = r_esi;
    /* 0053dbe5: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x53dbeau); f_00521bbc();
    /* 0053dbea: mov dword ptr [esi], 0xb029c0 */ W32((u32)(r_esi), 0xb029c0u);
    /* 0053dbf0: mov edx, dword ptr [0x9bcde8] */ r_edx = R32((u32)(0x9bcde8u));
    /* 0053dbf6: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 0053dbf9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0053dbfb: mov dword ptr [esi + 0xd0], 0 */ W32((u32)(r_esi+0xd0u), 0x0u);
    /* 0053dc05: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 0053dc0b: mov dword ptr [esi + 0xb4], eax */ W32((u32)(r_esi+0xb4u), r_eax);
    /* 0053dc11: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0053dc15: mov dword ptr [esi + 0xc8], 0 */ W32((u32)(r_esi+0xc8u), 0x0u);
    /* 0053dc1f: mov dword ptr [esi + 0xc4], eax */ W32((u32)(r_esi+0xc4u), r_eax);
    /* 0053dc25: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0053dc2b: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 0053dc35: mov dword ptr [esi + 0x38], 0 */ W32((u32)(r_esi+0x38u), 0x0u);
    /* 0053dc3c: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 0053dc43: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
    /* 0053dc4a: mov dword ptr [esi + 0xb8], 0 */ W32((u32)(r_esi+0xb8u), 0x0u);
    /* 0053dc54: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 0053dc5e: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 0053dc68: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 0053dc6f: mov eax, esi */ r_eax = r_esi;
    /* 0053dc71: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053dc72: ret 0xc */ FN_RET(0x0053dbd8); r_esp += 16; return;
}

void f_0053dc78(void) /* sub_53DC78 */
{
    FN_ENTER(0x0053dc78);
    /* 0053dc78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053dc7a: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053dc7d: mov edi, ecx */ r_edi = r_ecx;
    /* 0053dc7f: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0053dc85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dc87: jne 0x53dc8f */ if (!fZ) goto L_0053dc8f;
L_0053dc89:; BB(0x0053dc89);
    /* 0053dc89: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053dc8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053dc8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053dc8e: ret  */ FN_RET(0x0053dc78); r_esp += 4; return;
L_0053dc8f:; BB(0x0053dc8f);
    /* 0053dc8f: fld dword ptr [0x923430] */ FPUSH(R_F32((u32)(0x923430u)));
    /* 0053dc95: fld dword ptr [0x92343c] */ FPUSH(R_F32((u32)(0x92343cu)));
    /* 0053dc9b: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0053dc9e: fld dword ptr [edi + 0xb8] */ FPUSH(R_F32((u32)(r_edi+0xb8u)));
    /* 0053dca4: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0053dcaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dcac: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053dcae: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0053dcb1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0053dcb3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0053dcb5: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0053dcb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053dcba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0053dcbd: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0053dcc1: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0053dcc5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0053dcc9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0053dccb: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053dcce: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dcd3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053dcd4: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0053dcd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dcd8: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x53dcddu); f_0077fffc();
    /* 0053dcdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dce0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053dce2: je 0x53dd31 */ if (fZ) goto L_0053dd31;
L_0053dce4:; BB(0x0053dce4);
    /* 0053dce4: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0053dce8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053dceb: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0053dced: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0053dcf0: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 0053dcf3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0053dcf7: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0053dcfa: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053dcfe: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0053dd01: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0053dd05: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0053dd08: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 0053dd0b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0053dd0f: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0053dd12: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0053dd16: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53dd1bu); f_0082f9c4();
    /* 0053dd1b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0053dd1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd20: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x53dd25u); f_00782868();
    /* 0053dd25: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0053dd29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dd2c: mov ebp, 1 */ r_ebp = 0x1u;
L_0053dd31:; BB(0x0053dd31);
    /* 0053dd31: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0053dd35: fadd dword ptr [edi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xc8u));
    /* 0053dd3b: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 0053dd41: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053dd43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053dd45: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053dd46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dd48: jae 0x53ddb6 */ if (!fC) goto L_0053ddb6;
L_0053dd4a:; BB(0x0053dd4a);
    /* 0053dd4a: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0053dd50: jmp 0x53dd5a */ goto L_0053dd5a;
L_0053dd52:; BB(0x0053dd52);
    /* 0053dd52: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0053dd54: fst dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0));
L_0053dd5a:; BB(0x0053dd5a);
    /* 0053dd5a: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0053dd5e: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0053dd61: fld dword ptr [edi + 0xb8] */ FPUSH(R_F32((u32)(r_edi+0xb8u)));
    /* 0053dd67: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 0053dd6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dd6f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0053dd71: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0053dd74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dd76: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053dd78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dd7a: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 0053dd7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dd7f: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0053dd83: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0053dd87: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0053dd8b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd8f: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053dd95: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x53dd9au); f_0050a984();
    /* 0053dd9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053dd9d: fld dword ptr [0x92342c] */ FPUSH(R_F32((u32)(0x92342cu)));
    /* 0053dda3: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 0053dda9: fld dword ptr [edi + 0xc8] */ FPUSH(R_F32((u32)(r_edi+0xc8u)));
    /* 0053ddaf: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0053ddb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0053ddb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0053ddb4: ja 0x53dd52 */ if ((!fC&&!fZ)) goto L_0053dd52;
L_0053ddb6:; BB(0x0053ddb6);
    /* 0053ddb6: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0053ddba: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0053ddbc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0053ddbf: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0053ddc3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053ddc5: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 0053ddcb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0053ddcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053ddcf: fmul dword ptr [0x923434] */ ST(0) = ST(0) * R_F32((u32)(0x923434u));
    /* 0053ddd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053ddd7: fstp dword ptr [edi + 0xc8] */ W_F32((u32)(r_edi+0xc8u), ST(0)); FPOP();
    /* 0053dddd: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 0053dde0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0053dde4: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 0053dde7: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0053ddea: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0053ddf0: mov ecx, edi */ r_ecx = r_edi;
    /* 0053ddf2: mov dword ptr [eax + 0x10], 0x40200000 */ W32((u32)(r_eax+0x10u), 0x40200000u);
    /* 0053ddf9: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0053ddff: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0053de02: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x53de07u); f_007b7e9c();
    /* 0053de07: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0053de0d: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0053de10: test edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053de16: je 0x53de28 */ if (fZ) goto L_0053de28;
L_0053de18:; BB(0x0053de18);
    /* 0053de18: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 0053de22: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053de25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053de26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053de27: ret  */ FN_RET(0x0053dc78); r_esp += 4; return;
L_0053de28:; BB(0x0053de28);
    /* 0053de28: mov eax, dword ptr [0x923424] */ r_eax = R32((u32)(0x923424u));
    /* 0053de2d: mov edx, dword ptr [edi + 0xd0] */ r_edx = R32((u32)(r_edi+0xd0u));
    /* 0053de33: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0053de37: mov ecx, edi */ r_ecx = r_edi;
    /* 0053de39: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0053de3d: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0053de41: push dword ptr [edi + 0xc4] */ { u32 v = R32((u32)(r_edi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053de47: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0053de49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053de4a: push 0x92341c */ { u32 v = 0x92341cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053de4f: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x53de52u); call_ind(t); }
    /* 0053de52: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0053de58: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053de5b: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 0053de61: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053de63: jne 0x53de69 */ if (!fZ) goto L_0053de69;
L_0053de65:; BB(0x0053de65);
    /* 0053de65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0053de67: jge 0x53de73 */ if ((fS==fO)) goto L_0053de73;
L_0053de69:; BB(0x0053de69);
    /* 0053de69: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
L_0053de73:; BB(0x0053de73);
    /* 0053de73: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053de76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053de77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053de78: ret  */ FN_RET(0x0053dc78); r_esp += 4; return;
}

void f_0053de7c(void) /* sub_53DE7C */
{
    FN_ENTER(0x0053de7c);
    /* 0053de7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053de7d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053de80: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0053de82: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0053de86: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0053de8a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0053de8c: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 0053de8f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053de92: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0053de95: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0053de98: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0053de9b: mov dword ptr [ebp + 0x60], ecx */ W32((u32)(r_ebp+0x60u), r_ecx);
    /* 0053de9e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53dea3u); f_0082dcbc();
    /* 0053dea3: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0053dea6: fstp dword ptr [ebp + 0xb8] */ W_F32((u32)(r_ebp+0xb8u), ST(0)); FPOP();
    /* 0053deac: mov dword ptr [ebp + 0xbc], 0 */ W32((u32)(r_ebp+0xbcu), 0x0u);
    /* 0053deb6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53debbu); f_0082ddd8();
    /* 0053debb: mov edx, dword ptr [ebp + 0xc4] */ r_edx = R32((u32)(r_ebp+0xc4u));
    /* 0053dec1: fstp dword ptr [ebp + 0xc0] */ W_F32((u32)(r_ebp+0xc0u), ST(0)); FPOP();
    /* 0053dec7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053dec9: mov dword ptr [ebp + 0xb0], 1 */ W32((u32)(r_ebp+0xb0u), 0x1u);
    /* 0053ded3: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0053ded6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053ded8: jle 0x53def8 */ if ((fZ||fS!=fO)) goto L_0053def8;
L_0053deda:; BB(0x0053deda);
    /* 0053deda: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0053dedd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_0053dee1:; BB(0x0053dee1);
    /* 0053dee1: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0053dee3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0053dee6: mov dword ptr [esi + eax*4], ecx */ W32((u32)(r_esi+r_eax*4), r_ecx);
    /* 0053dee9: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0053deec: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053deef: jl 0x53dee1 */ if ((fS!=fO)) goto L_0053dee1;
L_0053def1:; BB(0x0053def1);
    /* 0053def1: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0053def4: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0053def8:; BB(0x0053def8);
    /* 0053def8: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0053defc: mov dword ptr [edx + 8], 0 */ W32((u32)(r_edx+0x8u), 0x0u);
    /* 0053df03: mov dword ptr [ebp + 0xd0], eax */ W32((u32)(r_ebp+0xd0u), r_eax);
    /* 0053df09: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 0053df13: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 0053df1d: mov dword ptr [ebp + 0xb4], 0x19 */ W32((u32)(r_ebp+0xb4u), 0x19u);
    /* 0053df27: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053df2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053df2b: ret 0xc */ FN_RET(0x0053de7c); r_esp += 16; return;
}

void f_0053df30(void) /* sub_53DF30 */
{
    FN_ENTER(0x0053df30);
    /* 0053df30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0053df31: mov ebx, esp */ r_ebx = r_esp;
    /* 0053df33: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0053df36: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053df37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053df38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0053df39: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0053df3c: mov edx, 0xa73660 */ r_edx = 0xa73660u;
    /* 0053df41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0053df43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053df45: mov ebp, eax */ r_ebp = r_eax;
    /* 0053df47: mov edi, edx */ r_edi = r_edx;
    /* 0053df49: mov esi, ecx */ r_esi = r_ecx;
L_0053df4b:; BB(0x0053df4b);
    /* 0053df4b: mov ecx, esi */ r_ecx = r_esi;
    /* 0053df4d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x53df52u); f_0082dcbc();
    /* 0053df52: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0053df56: mov ecx, esi */ r_ecx = r_esi;
    /* 0053df58: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x53df5du); f_0082ddd8();
    /* 0053df5d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0053df61: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 0053df63: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 0053df66: add esi, 0x6666 */ {  u32 a = r_esi; u32 b = 0x6666u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053df6c: mov dword ptr [edi + 4], 0 */ W32((u32)(r_edi+0x4u), 0x0u);
    /* 0053df73: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053df76: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0053df79: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053df7c: jl 0x53df4b */ if ((fS!=fO)) goto L_0053df4b;
L_0053df7e:; BB(0x0053df7e);
    /* 0053df7e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x53df83u); f_008587a5();
    /* 0053df83: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0053df87: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0053df8b: fdiv dword ptr [0x923410] */ ST(0) = ST(0) / R_F32((u32)(0x923410u));
    /* 0053df91: fmul dword ptr [0x92340c] */ ST(0) = ST(0) * R_F32((u32)(0x92340cu));
    /* 0053df97: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0053df9b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x53dfa0u); f_008587a5();
    /* 0053dfa0: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0053dfa4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0053dfa8: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0053dfac: fdiv dword ptr [0x923410] */ ST(0) = ST(0) / R_F32((u32)(0x923410u));
    /* 0053dfb2: fmul dword ptr [0x92340c] */ ST(0) = ST(0) * R_F32((u32)(0x92340cu));
    /* 0053dfb8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0053dfba: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053dfbd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053dfc1: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053dfc6: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053dfcb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053dfcf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053dfd3: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053dfd7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053dfda: movzx edx, byte ptr [esp + 0x18] */ r_edx = (u32)R8((u32)(r_esp+0x18u));
    /* 0053dfdf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053dfe2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053dfe6: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053dfeb: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053dff0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053dff4: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053dff8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053dffc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053dfff: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0053e004: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0053e007: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0053e009: mov ecx, 0xa736a8 */ r_ecx = 0xa736a8u;
    /* 0053e00e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053e010: mov esi, eax */ r_esi = r_eax;
    /* 0053e012: mov ebp, edx */ r_ebp = r_edx;
    /* 0053e014: mov edi, ecx */ r_edi = r_ecx;
L_0053e016:; BB(0x0053e016);
    /* 0053e016: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0053e019: and ebp, 0xffff00 */ {  u32 a = r_ebp; u32 b = 0xffff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0053e01f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x53e024u); f_008587a5();
    /* 0053e024: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0053e028: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0053e02c: fdiv dword ptr [0x923410] */ ST(0) = ST(0) / R_F32((u32)(0x923410u));
    /* 0053e032: fmul dword ptr [0x92340c] */ ST(0) = ST(0) * R_F32((u32)(0x92340cu));
    /* 0053e038: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053e03b: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0053e03e: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0053e042: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053e047: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0053e04c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0053e050: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0053e054: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0053e058: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0053e05b: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 0053e060: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 0053e062: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0053e064: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0053e067: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053e06a: jl 0x53e016 */ if ((fS!=fO)) goto L_0053e016;
L_0053e06c:; BB(0x0053e06c);
    /* 0053e06c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053e06f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053e070: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0053e071: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0053e072: mov esp, ebx */ r_esp = r_ebx;
    /* 0053e074: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0053e075: ret  */ FN_RET(0x0053df30); r_esp += 4; return;
}

