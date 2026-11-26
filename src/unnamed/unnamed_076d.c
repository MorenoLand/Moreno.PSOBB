#include "protos.h"

void f_0076d0b8(void) /* sub_76D0B8 */
{
    FN_ENTER(0x0076d0b8);
    /* 0076d0b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076d0bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076d0bd: call 0x76d0dc */ r_esp -= 4; W32(r_esp, 0x76d0c2u); f_0076d0dc();
    /* 0076d0c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076d0c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d0c8: jne 0x76d0ce */ if (!fZ) goto L_0076d0ce;
L_0076d0ca:; BB(0x0076d0ca);
    /* 0076d0ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d0cb: ret 4 */ FN_RET(0x0076d0b8); r_esp += 8; return;
L_0076d0ce:; BB(0x0076d0ce);
    /* 0076d0ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76d0d4u); f_005c2f74();
    /* 0076d0d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d0d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d0d6: ret 4 */ FN_RET(0x0076d0b8); r_esp += 8; return;
}

void f_0076d0dc(void) /* sub_76D0DC */
{
    FN_ENTER(0x0076d0dc);
    /* 0076d0dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0076d0df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0e1: push 0x8f3e58 */ { u32 v = 0x8f3e58u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076d0ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d0ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076d0f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076d0f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076d0fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076d0fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076d100: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076d103: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0076d106: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076d10d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d110: mov dword ptr [ecx], 0xb43e60 */ W32((u32)(r_ecx), 0xb43e60u);
    /* 0076d116: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x76d11bu); f_007b9de0();
    /* 0076d11b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076d122: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076d125: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x76d12au); f_005219f0();
    /* 0076d12a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076d12d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076d134: mov esp, ebp */ r_esp = r_ebp;
    /* 0076d136: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d137: ret  */ FN_RET(0x0076d0dc); r_esp += 4; return;
}

void f_0076d138(void) /* sub_76D138 */
{
    FN_ENTER(0x0076d138);
    /* 0076d138: mov eax, dword ptr [0xa9b110] */ r_eax = R32((u32)(0xa9b110u));
    /* 0076d13d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d140: je 0x76d173 */ if (fZ) goto L_0076d173;
L_0076d142:; BB(0x0076d142);
    /* 0076d142: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d145: je 0x76d173 */ if (fZ) goto L_0076d173;
L_0076d147:; BB(0x0076d147);
    /* 0076d147: cmp eax, 0x2e */ {  u32 a = r_eax; u32 b = 0x2eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d14a: je 0x76d15b */ if (fZ) goto L_0076d15b;
L_0076d14c:; BB(0x0076d14c);
    /* 0076d14c: cmp eax, 0x31 */ {  u32 a = r_eax; u32 b = 0x31u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d14f: je 0x76d15b */ if (fZ) goto L_0076d15b;
L_0076d151:; BB(0x0076d151);
    /* 0076d151: cmp eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d154: je 0x76d15b */ if (fZ) goto L_0076d15b;
L_0076d156:; BB(0x0076d156);
    /* 0076d156: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d159: jne 0x76d16a */ if (!fZ) goto L_0076d16a;
L_0076d15b:; BB(0x0076d15b);
    /* 0076d15b: mov ecx, 0xa9b120 */ r_ecx = 0xa9b120u;
    /* 0076d160: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x76d165u); f_00831290();
    /* 0076d165: mov eax, dword ptr [0xa9b110] */ r_eax = R32((u32)(0xa9b110u));
L_0076d16a:; BB(0x0076d16a);
    /* 0076d16a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076d16d: mov dword ptr [0xa9b110], eax */ W32((u32)(0xa9b110u), r_eax);
    /* 0076d172: ret  */ FN_RET(0x0076d138); r_esp += 4; return;
L_0076d173:; BB(0x0076d173);
    /* 0076d173: mov ecx, 0xa9b114 */ r_ecx = 0xa9b114u;
    /* 0076d178: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76d17du); f_0082d838();
    /* 0076d17d: mov eax, dword ptr [0xa9b110] */ r_eax = R32((u32)(0xa9b110u));
    /* 0076d182: jmp 0x76d16a */ goto L_0076d16a;
}

void f_0076d184(void) /* sub_76D184 */
{
    FN_ENTER(0x0076d184);
    /* 0076d184: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076d188: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d18a: jne 0x76d1e8 */ if (!fZ) goto L_0076d1e8;
L_0076d18c:; BB(0x0076d18c);
    /* 0076d18c: mov eax, dword ptr [0xa9b10c] */ r_eax = R32((u32)(0xa9b10cu));
    /* 0076d191: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d194: jne 0x76d236 */ if (!fZ) goto L_0076d236;
L_0076d19a:; BB(0x0076d19a);
    /* 0076d19a: push 0xa9b0fc */ { u32 v = 0xa9b0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0076d19f: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0076d1a4: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 0076d1aa: mov ecx, dword ptr [0xaf0374] */ r_ecx = R32((u32)(0xaf0374u));
    /* 0076d1b0: mov dword ptr [0xa9b0dc], eax */ W32((u32)(0xa9b0dcu), r_eax);
    /* 0076d1b5: mov dword ptr [0xa9b0cc], edx */ W32((u32)(0xa9b0ccu), r_edx);
    /* 0076d1bb: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 0076d1c1: mov dword ptr [0xa9b0d0], ecx */ W32((u32)(0xa9b0d0u), r_ecx);
    /* 0076d1c7: mov dword ptr [0xa9b0d4], edx */ W32((u32)(0xa9b0d4u), r_edx);
    /* 0076d1cd: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076d1d0: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 0076d1d6: mov dword ptr [0xa9b0d8], edx */ W32((u32)(0xa9b0d8u), r_edx);
    /* 0076d1dc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0076d1e1: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x76d1e6u); f_0082d710();
    /* 0076d1e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d1e7: ret  */ FN_RET(0x0076d184); r_esp += 4; return;
L_0076d1e8:; BB(0x0076d1e8);
    /* 0076d1e8: mov eax, dword ptr [0xa9b10c] */ r_eax = R32((u32)(0xa9b10cu));
    /* 0076d1ed: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d1f0: jne 0x76d22e */ if (!fZ) goto L_0076d22e;
L_0076d1f2:; BB(0x0076d1f2);
    /* 0076d1f2: mov edx, dword ptr [0xa9b0cc] */ r_edx = R32((u32)(0xa9b0ccu));
    /* 0076d1f8: mov ecx, dword ptr [0xa9b0d0] */ r_ecx = R32((u32)(0xa9b0d0u));
    /* 0076d1fe: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 0076d204: mov edx, dword ptr [0xa9b0d4] */ r_edx = R32((u32)(0xa9b0d4u));
    /* 0076d20a: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 0076d210: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 0076d216: mov edx, dword ptr [0xa9b0d8] */ r_edx = R32((u32)(0xa9b0d8u));
    /* 0076d21c: mov dword ptr [0xaf037c], edx */ W32((u32)(0xaf037cu), r_edx);
    /* 0076d222: mov edx, dword ptr [0xa9b0dc] */ r_edx = R32((u32)(0xa9b0dcu));
    /* 0076d228: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
L_0076d22e:; BB(0x0076d22e);
    /* 0076d22e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076d231: mov dword ptr [0xa9b10c], eax */ W32((u32)(0xa9b10cu), r_eax);
L_0076d236:; BB(0x0076d236);
    /* 0076d236: ret  */ FN_RET(0x0076d184); r_esp += 4; return;
}

void f_0076d238(void) /* sub_76D238 */
{
    FN_ENTER(0x0076d238);
    /* 0076d238: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d23c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d23f: jne 0x76d246 */ if (!fZ) goto L_0076d246;
L_0076d241:; BB(0x0076d241);
    /* 0076d241: call 0x76ef44 */ r_esp -= 4; W32(r_esp, 0x76d246u); f_0076ef44();
L_0076d246:; BB(0x0076d246);
    /* 0076d246: ret 4 */ FN_RET(0x0076d238); r_esp += 8; return;
}

void f_0076d24c(void)
{
    FN_ENTER(0x0076d24c);
    /* 0076d24c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d250: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d253: jne 0x76d25d */ if (!fZ) goto L_0076d25d;
L_0076d255:; BB(0x0076d255);
    /* 0076d255: call 0x76ee68 */ r_esp -= 4; W32(r_esp, 0x76d25au); f_0076ee68();
    /* 0076d25a: ret 4 */ FN_RET(0x0076d24c); r_esp += 8; return;
L_0076d25d:; BB(0x0076d25d);
    /* 0076d25d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d25f: jne 0x76d266 */ if (!fZ) goto L_0076d266;
L_0076d261:; BB(0x0076d261);
    /* 0076d261: call 0x76d26c */ r_esp -= 4; W32(r_esp, 0x76d266u); f_0076d26c();
L_0076d266:; BB(0x0076d266);
    /* 0076d266: ret 4 */ FN_RET(0x0076d24c); r_esp += 8; return;
}

void f_0076d26c(void) /* sub_76D26C */
{
    FN_ENTER(0x0076d26c);
    /* 0076d26c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d26d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076d26f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076d271: call 0x76d290 */ r_esp -= 4; W32(r_esp, 0x76d276u); f_0076d290();
    /* 0076d276: push dword ptr [ebx + 0x414] */ { u32 v = R32((u32)(r_ebx+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d27c: push 0x9f7ac8 */ { u32 v = 0x9f7ac8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d281: mov ecx, dword ptr [ebx + 0x410] */ r_ecx = R32((u32)(r_ebx+0x410u));
    /* 0076d287: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076d289: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x76d28cu); call_ind(t); }
    /* 0076d28c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d28d: ret  */ FN_RET(0x0076d26c); r_esp += 4; return;
}

void f_0076d290(void) /* sub_76D290 */
{
    FN_ENTER(0x0076d290);
    /* 0076d290: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d291: mov edi, ecx */ r_edi = r_ecx;
    /* 0076d293: mov ecx, dword ptr [edi + 0x410] */ r_ecx = R32((u32)(r_edi+0x410u));
    /* 0076d299: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0076d29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d29d: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x76d2a2u); f_006ac1a4();
    /* 0076d2a2: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0076d2a5: mov edx, dword ptr [edi + 0x410] */ r_edx = R32((u32)(r_edi+0x410u));
    /* 0076d2ab: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 0076d2ae: push dword ptr [edi + 0x410] */ { u32 v = R32((u32)(r_edi+0x410u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d2b4: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x76d2b9u); f_007b999c();
    /* 0076d2b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d2ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d2bb: ret  */ FN_RET(0x0076d290); r_esp += 4; return;
}

void f_0076d2bc(void)
{
    FN_ENTER(0x0076d2bc);
    /* 0076d2bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d2c0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d2c3: jne 0x76d2ca */ if (!fZ) goto L_0076d2ca;
L_0076d2c5:; BB(0x0076d2c5);
    /* 0076d2c5: call 0x76ee50 */ r_esp -= 4; W32(r_esp, 0x76d2cau); f_0076ee50();
L_0076d2ca:; BB(0x0076d2ca);
    /* 0076d2ca: ret 4 */ FN_RET(0x0076d2bc); r_esp += 8; return;
}

void f_0076d2d0(void)
{
    FN_ENTER(0x0076d2d0);
    /* 0076d2d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d2d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d2d7: jne 0x76d2e1 */ if (!fZ) goto L_0076d2e1;
L_0076d2d9:; BB(0x0076d2d9);
    /* 0076d2d9: call 0x76ecd0 */ r_esp -= 4; W32(r_esp, 0x76d2deu); f_0076ecd0();
    /* 0076d2de: ret 4 */ FN_RET(0x0076d2d0); r_esp += 8; return;
L_0076d2e1:; BB(0x0076d2e1);
    /* 0076d2e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d2e3: jne 0x76d2ea */ if (!fZ) goto L_0076d2ea;
L_0076d2e5:; BB(0x0076d2e5);
    /* 0076d2e5: call 0x76d2f0 */ r_esp -= 4; W32(r_esp, 0x76d2eau); f_0076d2f0();
L_0076d2ea:; BB(0x0076d2ea);
    /* 0076d2ea: ret 4 */ FN_RET(0x0076d2d0); r_esp += 8; return;
}

void f_0076d2f0(void) /* sub_76D2F0 */
{
    FN_ENTER(0x0076d2f0);
    /* 0076d2f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d2f1: mov edi, ecx */ r_edi = r_ecx;
    /* 0076d2f3: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d2f5: call 0x76d290 */ r_esp -= 4; W32(r_esp, 0x76d2fau); f_0076d290();
    /* 0076d2fa: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0076d301: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d304: jne 0x76d31c */ if (!fZ) goto L_0076d31c;
L_0076d306:; BB(0x0076d306);
    /* 0076d306: push dword ptr [edi + 0x414] */ { u32 v = R32((u32)(r_edi+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d30c: push 0x9f7ad0 */ { u32 v = 0x9f7ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d311: mov ecx, dword ptr [edi + 0x410] */ r_ecx = R32((u32)(r_edi+0x410u));
    /* 0076d317: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076d319: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x76d31cu); call_ind(t); }
L_0076d31c:; BB(0x0076d31c);
    /* 0076d31c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d31d: ret  */ FN_RET(0x0076d2f0); r_esp += 4; return;
}

void f_0076d320(void)
{
    FN_ENTER(0x0076d320);
    /* 0076d320: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d324: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d327: jne 0x76d331 */ if (!fZ) goto L_0076d331;
L_0076d329:; BB(0x0076d329);
    /* 0076d329: call 0x76ecb4 */ r_esp -= 4; W32(r_esp, 0x76d32eu); f_0076ecb4();
    /* 0076d32e: ret 4 */ FN_RET(0x0076d320); r_esp += 8; return;
L_0076d331:; BB(0x0076d331);
    /* 0076d331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d333: jne 0x76d33a */ if (!fZ) goto L_0076d33a;
L_0076d335:; BB(0x0076d335);
    /* 0076d335: call 0x76d340 */ r_esp -= 4; W32(r_esp, 0x76d33au); f_0076d340();
L_0076d33a:; BB(0x0076d33a);
    /* 0076d33a: ret 4 */ FN_RET(0x0076d320); r_esp += 8; return;
}

void f_0076d340(void) /* sub_76D340 */
{
    FN_ENTER(0x0076d340);
    /* 0076d340: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d341: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076d343: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 0076d349: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076d34f: je 0x76d376 */ if (fZ) goto L_0076d376;
L_0076d351:; BB(0x0076d351);
    /* 0076d351: fld dword ptr [ebp + 0x3cc] */ FPUSH(R_F32((u32)(r_ebp+0x3ccu)));
    /* 0076d357: fcomp dword ptr [0x977bb0] */ fx_compare(ST(0), R_F32((u32)(0x977bb0u))); FPOP();
    /* 0076d35d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076d35f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076d360: jb 0x76d3d7 */ if (fC) goto L_0076d3d7;
L_0076d362:; BB(0x0076d362);
    /* 0076d362: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076d368: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d36e: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
    /* 0076d374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d375: ret  */ FN_RET(0x0076d340); r_esp += 4; return;
L_0076d376:; BB(0x0076d376);
    /* 0076d376: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076d37c: je 0x76d3c5 */ if (fZ) goto L_0076d3c5;
L_0076d37e:; BB(0x0076d37e);
    /* 0076d37e: fld dword ptr [ebp + 0x3cc] */ FPUSH(R_F32((u32)(r_ebp+0x3ccu)));
    /* 0076d384: fcomp dword ptr [0x977bb4] */ fx_compare(ST(0), R_F32((u32)(0x977bb4u))); FPOP();
    /* 0076d38a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076d38c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076d38d: ja 0x76d3d7 */ if ((!fC&&!fZ)) goto L_0076d3d7;
L_0076d38f:; BB(0x0076d38f);
    /* 0076d38f: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076d396: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d399: je 0x76d3d7 */ if (fZ) goto L_0076d3d7;
L_0076d39b:; BB(0x0076d39b);
    /* 0076d39b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d39e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d3a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d3a3: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d3a9u); call_ind(t); }
    /* 0076d3a9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d3ab: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d3ae: mov eax, 3 */ r_eax = 0x3u;
    /* 0076d3b3: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076d3ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d3bd: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d3c3u); call_ind(t); }
    /* 0076d3c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d3c4: ret  */ FN_RET(0x0076d340); r_esp += 4; return;
L_0076d3c5:; BB(0x0076d3c5);
    /* 0076d3c5: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076d3cb: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d3d1: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
L_0076d3d7:; BB(0x0076d3d7);
    /* 0076d3d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d3d8: ret  */ FN_RET(0x0076d340); r_esp += 4; return;
}

void f_0076d3dc(void)
{
    FN_ENTER(0x0076d3dc);
    /* 0076d3dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d3e0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d3e3: je 0x76d3ee */ if (fZ) goto L_0076d3ee;
L_0076d3e5:; BB(0x0076d3e5);
    /* 0076d3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d3e7: jne 0x76d3ee */ if (!fZ) goto L_0076d3ee;
L_0076d3e9:; BB(0x0076d3e9);
    /* 0076d3e9: call 0x76d3f4 */ r_esp -= 4; W32(r_esp, 0x76d3eeu); f_0076d3f4();
L_0076d3ee:; BB(0x0076d3ee);
    /* 0076d3ee: ret 4 */ FN_RET(0x0076d3dc); r_esp += 8; return;
}

void f_0076d3f4(void) /* sub_76D3F4 */
{
    FN_ENTER(0x0076d3f4);
    /* 0076d3f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d3f5: mov edi, ecx */ r_edi = r_ecx;
    /* 0076d3f7: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d3f9: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d3fe: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x76d403u); f_007aaa30();
    /* 0076d403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d405: je 0x76d41d */ if (fZ) goto L_0076d41d;
L_0076d407:; BB(0x0076d407);
    /* 0076d407: mov eax, dword ptr [edi + 0x394] */ r_eax = R32((u32)(r_edi+0x394u));
    /* 0076d40d: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d410: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0076d413: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d414: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d415: call 0x6ec2d0 */ r_esp -= 4; W32(r_esp, 0x76d41au); f_006ec2d0();
    /* 0076d41a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0076d41d:; BB(0x0076d41d);
    /* 0076d41d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d41e: ret  */ FN_RET(0x0076d3f4); r_esp += 4; return;
}

void f_0076d420(void)
{
    FN_ENTER(0x0076d420);
    /* 0076d420: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d424: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d427: jne 0x76d431 */ if (!fZ) goto L_0076d431;
L_0076d429:; BB(0x0076d429);
    /* 0076d429: call 0x76ec70 */ r_esp -= 4; W32(r_esp, 0x76d42eu); f_0076ec70();
    /* 0076d42e: ret 4 */ FN_RET(0x0076d420); r_esp += 8; return;
L_0076d431:; BB(0x0076d431);
    /* 0076d431: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d433: jne 0x76d43a */ if (!fZ) goto L_0076d43a;
L_0076d435:; BB(0x0076d435);
    /* 0076d435: call 0x76d440 */ r_esp -= 4; W32(r_esp, 0x76d43au); f_0076d440();
L_0076d43a:; BB(0x0076d43a);
    /* 0076d43a: ret 4 */ FN_RET(0x0076d420); r_esp += 8; return;
}

void f_0076d440(void) /* sub_76D440 */
{
    FN_ENTER(0x0076d440);
    /* 0076d440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d441: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076d444: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076d446: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d448: call 0x76d290 */ r_esp -= 4; W32(r_esp, 0x76d44du); f_0076d290();
    /* 0076d44d: push dword ptr [ebp + 0x414] */ { u32 v = R32((u32)(r_ebp+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d453: push 0x9f7ad0 */ { u32 v = 0x9f7ad0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d458: mov ecx, dword ptr [ebp + 0x410] */ r_ecx = R32((u32)(r_ebp+0x410u));
    /* 0076d45e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076d460: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x76d463u); call_ind(t); }
    /* 0076d463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d465: je 0x76d48c */ if (fZ) goto L_0076d48c;
L_0076d467:; BB(0x0076d467);
    /* 0076d467: mov ecx, dword ptr [ebp + 0x410] */ r_ecx = R32((u32)(r_ebp+0x410u));
    /* 0076d46d: mov dword ptr [esp], 0x11 */ W32((u32)(r_esp), 0x11u);
    /* 0076d474: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076d477: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0076d47f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d481: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076d483: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d484: push 0x9f7ad8 */ { u32 v = 0x9f7ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d489: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x76d48cu); call_ind(t); }
L_0076d48c:; BB(0x0076d48c);
    /* 0076d48c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076d48f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d490: ret  */ FN_RET(0x0076d440); r_esp += 4; return;
}

void f_0076d494(void)
{
    FN_ENTER(0x0076d494);
    /* 0076d494: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d498: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d49b: je 0x76d4a6 */ if (fZ) goto L_0076d4a6;
L_0076d49d:; BB(0x0076d49d);
    /* 0076d49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d49f: jne 0x76d4a6 */ if (!fZ) goto L_0076d4a6;
L_0076d4a1:; BB(0x0076d4a1);
    /* 0076d4a1: call 0x76d4ac */ r_esp -= 4; W32(r_esp, 0x76d4a6u); f_0076d4ac();
L_0076d4a6:; BB(0x0076d4a6);
    /* 0076d4a6: ret 4 */ FN_RET(0x0076d494); r_esp += 8; return;
}

void f_0076d4ac(void) /* sub_76D4AC */
{
    FN_ENTER(0x0076d4ac);
    /* 0076d4ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d4ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076d4af: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0076d4b2: fld dword ptr [ebp + 0x3c8] */ FPUSH(R_F32((u32)(r_ebp+0x3c8u)));
    /* 0076d4b8: add edx, 0x888 */ {  u32 a = r_edx; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076d4be: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 0076d4c1: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 0076d4c4: fcomp dword ptr [0x977ba4] */ fx_compare(ST(0), R_F32((u32)(0x977ba4u))); FPOP();
    /* 0076d4ca: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076d4cc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076d4cd: ja 0x76d51b */ if ((!fC&&!fZ)) goto L_0076d51b;
L_0076d4cf:; BB(0x0076d4cf);
    /* 0076d4cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d4d1: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d4d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d4d8: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x76d4ddu); f_007714cc();
    /* 0076d4dd: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0076d4e0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d4e5: je 0x76d51b */ if (fZ) goto L_0076d51b;
L_0076d4e7:; BB(0x0076d4e7);
    /* 0076d4e7: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076d4ee: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d4f1: je 0x76d51b */ if (fZ) goto L_0076d51b;
L_0076d4f3:; BB(0x0076d4f3);
    /* 0076d4f3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d4f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d4f6: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d4f9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d4fb: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d501u); call_ind(t); }
    /* 0076d501: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d503: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d506: mov eax, 0xd */ r_eax = 0xdu;
    /* 0076d50b: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076d512: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d514: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d515: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d51bu); call_ind(t); }
L_0076d51b:; BB(0x0076d51b);
    /* 0076d51b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d51d: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d522: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d524: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x76d529u); f_007714cc();
    /* 0076d529: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0076d52c: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d531: je 0x76d535 */ if (fZ) goto L_0076d535;
L_0076d533:; BB(0x0076d533);
    /* 0076d533: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d534: ret  */ FN_RET(0x0076d4ac); r_esp += 4; return;
L_0076d535:; BB(0x0076d535);
    /* 0076d535: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 0076d53c: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d53f: je 0x76d533 */ if (fZ) goto L_0076d533;
L_0076d541:; BB(0x0076d541);
    /* 0076d541: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d543: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d544: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d547: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d549: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d54fu); call_ind(t); }
    /* 0076d54f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d551: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076d554: mov eax, 0xf */ r_eax = 0xfu;
    /* 0076d559: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 0076d560: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d562: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d563: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d569u); call_ind(t); }
    /* 0076d569: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d56a: ret  */ FN_RET(0x0076d4ac); r_esp += 4; return;
}

void f_0076d56c(void)
{
    FN_ENTER(0x0076d56c);
    /* 0076d56c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d570: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d573: jne 0x76d57d */ if (!fZ) goto L_0076d57d;
L_0076d575:; BB(0x0076d575);
    /* 0076d575: call 0x76ec0c */ r_esp -= 4; W32(r_esp, 0x76d57au); f_0076ec0c();
    /* 0076d57a: ret 4 */ FN_RET(0x0076d56c); r_esp += 8; return;
L_0076d57d:; BB(0x0076d57d);
    /* 0076d57d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d57f: jne 0x76d586 */ if (!fZ) goto L_0076d586;
L_0076d581:; BB(0x0076d581);
    /* 0076d581: call 0x76d58c */ r_esp -= 4; W32(r_esp, 0x76d586u); f_0076d58c();
L_0076d586:; BB(0x0076d586);
    /* 0076d586: ret 4 */ FN_RET(0x0076d56c); r_esp += 8; return;
}

void f_0076d58c(void) /* sub_76D58C */
{
    FN_ENTER(0x0076d58c);
    /* 0076d58c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d58d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076d58f: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0076d592: add eax, 0x888 */ {  u32 a = r_eax; u32 b = 0x888u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076d597: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0076d59a: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0076d5a1: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 0076d5a4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d5a7: je 0x76d685 */ if (fZ) goto L_0076d685;
L_0076d5ad:; BB(0x0076d5ad);
    /* 0076d5ad: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d5b0: jne 0x76d665 */ if (!fZ) goto L_0076d665;
L_0076d5b6:; BB(0x0076d5b6);
    /* 0076d5b6: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 0076d5bc: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d5c2: je 0x76d600 */ if (fZ) goto L_0076d600;
L_0076d5c4:; BB(0x0076d5c4);
    /* 0076d5c4: fld dword ptr [ebp + 0x3c8] */ FPUSH(R_F32((u32)(r_ebp+0x3c8u)));
    /* 0076d5ca: fcom dword ptr [0x977b94] */ fx_compare(ST(0), R_F32((u32)(0x977b94u))); 
    /* 0076d5d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076d5d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076d5d3: jb 0x76d5f6 */ if (fC) goto L_0076d5f6;
L_0076d5d5:; BB(0x0076d5d5);
    /* 0076d5d5: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0076d5db: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076d5de: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0076d5e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076d5e6: jl 0x76d6af */ if ((fS!=fO)) goto L_0076d6af;
L_0076d5ec:; BB(0x0076d5ec);
    /* 0076d5ec: fld dword ptr [0x977b98] */ FPUSH(R_F32((u32)(0x977b98u)));
    /* 0076d5f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076d5f4: jmp 0x76d62b */ goto L_0076d62b;
L_0076d5f6:; BB(0x0076d5f6);
    /* 0076d5f6: fld dword ptr [0x977b98] */ FPUSH(R_F32((u32)(0x977b98u)));
    /* 0076d5fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076d5fe: jmp 0x76d62b */ goto L_0076d62b;
L_0076d600:; BB(0x0076d600);
    /* 0076d600: fld dword ptr [0x977b98] */ FPUSH(R_F32((u32)(0x977b98u)));
    /* 0076d606: fld dword ptr [ebp + 0x3c8] */ FPUSH(R_F32((u32)(r_ebp+0x3c8u)));
    /* 0076d60c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076d60e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076d610: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076d611: ja 0x76d62b */ if ((!fC&&!fZ)) goto L_0076d62b;
L_0076d613:; BB(0x0076d613);
    /* 0076d613: mov eax, 0xa */ r_eax = 0xau;
    /* 0076d618: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0076d61f: and edx, 0xfffffdfe */ {  u32 a = r_edx; u32 b = 0xfffffdfeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0076d625: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
L_0076d62b:; BB(0x0076d62b);
    /* 0076d62b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076d62d: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0076d633: fadd dword ptr [0x9f7800] */ ST(0) = ST(0) + R_F32((u32)(0x9f7800u));
    /* 0076d639: fstp dword ptr [ebp + 0x3f4] */ W_F32((u32)(r_ebp+0x3f4u), ST(0)); FPOP();
    /* 0076d63f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d641: call 0x76d290 */ r_esp -= 4; W32(r_esp, 0x76d646u); f_0076d290();
    /* 0076d646: push dword ptr [ebp + 0x414] */ { u32 v = R32((u32)(r_ebp+0x414u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d64c: push 0x9f7ae0 */ { u32 v = 0x9f7ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d651: mov ecx, dword ptr [ebp + 0x410] */ r_ecx = R32((u32)(r_ebp+0x410u));
    /* 0076d657: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076d659: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x76d65cu); call_ind(t); }
    /* 0076d65c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d65e: call 0x76f000 */ r_esp -= 4; W32(r_esp, 0x76d663u); f_0076f000();
    /* 0076d663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d664: ret  */ FN_RET(0x0076d58c); r_esp += 4; return;
L_0076d665:; BB(0x0076d665);
    /* 0076d665: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d668: jne 0x76d6ad */ if (!fZ) goto L_0076d6ad;
L_0076d66a:; BB(0x0076d66a);
    /* 0076d66a: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0076d670: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d672: je 0x76d6ad */ if (fZ) goto L_0076d6ad;
L_0076d674:; BB(0x0076d674);
    /* 0076d674: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
    /* 0076d67a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d67d: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 0076d683: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d684: ret  */ FN_RET(0x0076d58c); r_esp += 4; return;
L_0076d685:; BB(0x0076d685);
    /* 0076d685: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0076d68b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d68d: je 0x76d6ad */ if (fZ) goto L_0076d6ad;
L_0076d68f:; BB(0x0076d68f);
    /* 0076d68f: mov edx, dword ptr [ebp + 0x3c0] */ r_edx = R32((u32)(r_ebp+0x3c0u));
    /* 0076d695: mov eax, 9 */ r_eax = 0x9u;
    /* 0076d69a: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0076d6a1: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d6a7: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
L_0076d6ad:; BB(0x0076d6ad);
    /* 0076d6ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d6ae: ret  */ FN_RET(0x0076d58c); r_esp += 4; return;
L_0076d6af:; BB(0x0076d6af);
    /* 0076d6af: fld dword ptr [0x977b98] */ FPUSH(R_F32((u32)(0x977b98u)));
    /* 0076d6b5: and edx, 0xfffffeff */ {  u32 a = r_edx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0076d6bb: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076d6c1: mov dword ptr [ebp + 0x3c0], edx */ W32((u32)(r_ebp+0x3c0u), r_edx);
    /* 0076d6c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076d6c9: jmp 0x76d62b */ goto L_0076d62b;
}

void f_0076d6d0(void)
{
    FN_ENTER(0x0076d6d0);
    /* 0076d6d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d6d4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d6d7: jne 0x76d6e1 */ if (!fZ) goto L_0076d6e1;
L_0076d6d9:; BB(0x0076d6d9);
    /* 0076d6d9: call 0x76ebd4 */ r_esp -= 4; W32(r_esp, 0x76d6deu); f_0076ebd4();
    /* 0076d6de: ret 4 */ FN_RET(0x0076d6d0); r_esp += 8; return;
L_0076d6e1:; BB(0x0076d6e1);
    /* 0076d6e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d6e3: jne 0x76d6ea */ if (!fZ) goto L_0076d6ea;
L_0076d6e5:; BB(0x0076d6e5);
    /* 0076d6e5: call 0x76d6f0 */ r_esp -= 4; W32(r_esp, 0x76d6eau); f_0076d6f0();
L_0076d6ea:; BB(0x0076d6ea);
    /* 0076d6ea: ret 4 */ FN_RET(0x0076d6d0); r_esp += 8; return;
}

void f_0076d6f0(void) /* sub_76D6F0 */
{
    FN_ENTER(0x0076d6f0);
    /* 0076d6f0: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0076d6f6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d6f9: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 0076d6ff: ret  */ FN_RET(0x0076d6f0); r_esp += 4; return;
}

void f_0076d700(void) /* sub_76D700 */
{
    FN_ENTER(0x0076d700);
    /* 0076d700: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d701: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076d703: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x76d708u); f_004f7c84();
    /* 0076d708: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d70a: je 0x76d70e */ if (fZ) goto L_0076d70e;
L_0076d70c:; BB(0x0076d70c);
    /* 0076d70c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d70d: ret  */ FN_RET(0x0076d700); r_esp += 4; return;
L_0076d70e:; BB(0x0076d70e);
    /* 0076d70e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076d711: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d713: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x76d719u); call_ind(t); }
    /* 0076d719: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d71c: je 0x76d734 */ if (fZ) goto L_0076d734;
L_0076d71e:; BB(0x0076d71e);
    /* 0076d71e: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x76d723u); f_00520db8();
    /* 0076d723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d725: je 0x76d729 */ if (fZ) goto L_0076d729;
L_0076d727:; BB(0x0076d727);
    /* 0076d727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d728: ret  */ FN_RET(0x0076d700); r_esp += 4; return;
L_0076d729:; BB(0x0076d729);
    /* 0076d729: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076d72c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d72e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x76d734u); call_ind(t); }
L_0076d734:; BB(0x0076d734);
    /* 0076d734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d735: ret  */ FN_RET(0x0076d700); r_esp += 4; return;
}

void f_0076d729(void)
{
    FN_ENTER(0x0076d729);
    /* 0076d729: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0076d72c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d72e: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x76d734u); call_ind(t); }
    /* 0076d734: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d735: ret  */ FN_RET(0x0076d729); r_esp += 4; return;
}

void f_0076d738(void) /* sub_76D738 */
{
    FN_ENTER(0x0076d738);
    /* 0076d738: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d739: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d73a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076d73b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d73c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076d73f: mov edi, ecx */ r_edi = r_ecx;
    /* 0076d741: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x76d746u); f_004f7c84();
    /* 0076d746: mov esi, eax */ r_esi = r_eax;
    /* 0076d748: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d74d: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d74f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076d751: push 0x44480000 */ { u32 v = 0x44480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d756: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x76d759u); call_ind(t); }
    /* 0076d759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d75b: je 0x76d88f */ if (fZ) goto L_0076d88f;
L_0076d761:; BB(0x0076d761);
    /* 0076d761: mov edx, dword ptr [edi + 0x3c0] */ r_edx = R32((u32)(r_edi+0x3c0u));
    /* 0076d767: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076d76a: je 0x76d778 */ if (fZ) goto L_0076d778;
L_0076d76c:; BB(0x0076d76c);
    /* 0076d76c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d76e: jne 0x76d778 */ if (!fZ) goto L_0076d778;
L_0076d770:; BB(0x0076d770);
    /* 0076d770: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076d773: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d775: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076d776: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d777: ret  */ FN_RET(0x0076d738); r_esp += 4; return;
L_0076d778:; BB(0x0076d778);
    /* 0076d778: lea ebp, [edi + 0x398] */ r_ebp = (u32)(r_edi+0x398u);
    /* 0076d77e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d780: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x76d785u); f_005771a4();
    /* 0076d785: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0076d788: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0076d78c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d78d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d78f: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x76d794u); f_0057725c();
    /* 0076d794: mov ebx, eax */ r_ebx = r_eax;
    /* 0076d796: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d798: je 0x76d7b4 */ if (fZ) goto L_0076d7b4;
L_0076d79a:; BB(0x0076d79a);
    /* 0076d79a: mov edx, dword ptr [edi + 0x398] */ r_edx = R32((u32)(r_edi+0x398u));
    /* 0076d7a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d7a2: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x76d7a5u); call_ind(t); }
    /* 0076d7a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d7a7: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x76d7acu); f_008173d0();
    /* 0076d7ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d7ae: jne 0x76d860 */ if (!fZ) goto L_0076d860;
L_0076d7b4:; BB(0x0076d7b4);
    /* 0076d7b4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x76d7b9u); f_0082d7b0();
    /* 0076d7b9: push 0x76d184 */ { u32 v = 0x76d184u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d7be: mov edx, dword ptr [edi + 0x3d4] */ r_edx = R32((u32)(r_edi+0x3d4u));
    /* 0076d7c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076d7c6: mov eax, dword ptr [edx*8 + 0x977aa0] */ r_eax = R32((u32)(r_edx*8+0x977aa0u));
    /* 0076d7cd: mov dword ptr [0xa9b0fc], eax */ W32((u32)(0xa9b0fcu), r_eax);
    /* 0076d7d2: mov eax, dword ptr [edx*8 + 0x977aa4] */ r_eax = R32((u32)(r_edx*8+0x977aa4u));
    /* 0076d7d9: mov dword ptr [0xa9b100], eax */ W32((u32)(0xa9b100u), r_eax);
    /* 0076d7de: mov eax, dword ptr [edx*8 + 0x977aa8] */ r_eax = R32((u32)(r_edx*8+0x977aa8u));
    /* 0076d7e5: mov edx, dword ptr [edx*8 + 0x977aac] */ r_edx = R32((u32)(r_edx*8+0x977aacu));
    /* 0076d7ec: mov dword ptr [0xa9b104], eax */ W32((u32)(0xa9b104u), r_eax);
    /* 0076d7f1: mov dword ptr [0xa9b108], edx */ W32((u32)(0xa9b108u), r_edx);
    /* 0076d7f7: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x76d7fcu); f_0082e8e4();
    /* 0076d7fc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0076d800: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076d803: mov dword ptr [0xa9b10c], 0 */ W32((u32)(0xa9b10cu), 0x0u);
    /* 0076d80d: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d80f: call 0x76d898 */ r_esp -= 4; W32(r_esp, 0x76d814u); f_0076d898();
    /* 0076d814: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0076d818: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x76d81du); f_0082d838();
    /* 0076d81d: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0076d820: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076d822: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76d827u); f_0082d8bc();
    /* 0076d827: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0076d82a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x76d82fu); f_00829cc8();
    /* 0076d82f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d831: je 0x76d83e */ if (fZ) goto L_0076d83e;
L_0076d833:; BB(0x0076d833);
    /* 0076d833: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d836: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x76d83bu); f_0082e760();
    /* 0076d83b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d83c: jmp 0x76d845 */ goto L_0076d845;
L_0076d83e:; BB(0x0076d83e);
    /* 0076d83e: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d840: call 0x7aa850 */ r_esp -= 4; W32(r_esp, 0x76d845u); f_007aa850();
L_0076d845:; BB(0x0076d845);
    /* 0076d845: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d847: call 0x76d918 */ r_esp -= 4; W32(r_esp, 0x76d84cu); f_0076d918();
    /* 0076d84c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0076d850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d851: call 0x82e8e4 */ r_esp -= 4; W32(r_esp, 0x76d856u); f_0082e8e4();
    /* 0076d856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076d857: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76d85cu); f_0082da80();
    /* 0076d85c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d85e: je 0x76d86b */ if (fZ) goto L_0076d86b;
L_0076d860:; BB(0x0076d860);
    /* 0076d860: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 0076d866: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076d868: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x76d86bu); call_ind(t); }
L_0076d86b:; BB(0x0076d86b);
    /* 0076d86b: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 0076d872: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0076d875: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d877: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0076d87f: mov dword ptr [esp + 8], 0x3fc00000 */ W32((u32)(r_esp+0x8u), 0x3fc00000u);
    /* 0076d887: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d889: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d88a: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x76d88fu); f_00779d4c();
L_0076d88f:; BB(0x0076d88f);
    /* 0076d88f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0076d892: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d893: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076d894: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076d895: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d896: ret  */ FN_RET(0x0076d738); r_esp += 4; return;
}

void f_0076d898(void) /* sub_76D898 */
{
    FN_ENTER(0x0076d898);
    /* 0076d898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076d899: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076d89b: push dword ptr [ebx + 0x3c8] */ { u32 v = R32((u32)(r_ebx+0x3c8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d8a1: mov ecx, 0xa9b114 */ r_ecx = 0xa9b114u;
    /* 0076d8a6: call 0x76d8d4 */ r_esp -= 4; W32(r_esp, 0x76d8abu); f_0076d8d4();
    /* 0076d8ab: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076d8b1: mov ecx, 0xa9b114 */ r_ecx = 0xa9b114u;
    /* 0076d8b6: call 0x76d8ec */ r_esp -= 4; W32(r_esp, 0x76d8bbu); f_0076d8ec();
    /* 0076d8bb: mov dword ptr [0xa9b110], 0 */ W32((u32)(0xa9b110u), 0x0u);
    /* 0076d8c5: mov ecx, 0x76d138 */ r_ecx = 0x76d138u;
    /* 0076d8ca: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x76d8cfu); f_0082fabc();
    /* 0076d8cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076d8d0: ret  */ FN_RET(0x0076d898); r_esp += 4; return;
}

void f_0076d8d4(void) /* sub_76D8D4 */
{
    FN_ENTER(0x0076d8d4);
    /* 0076d8d4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0076d8d8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0076d8da: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0076d8e1: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0076d8e8: ret 4 */ FN_RET(0x0076d8d4); r_esp += 8; return;
}

void f_0076d8ec(void) /* sub_76D8EC */
{
    FN_ENTER(0x0076d8ec);
    /* 0076d8ec: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0076d8f0: fld dword ptr [0x977b84] */ FPUSH(R_F32((u32)(0x977b84u)));
    /* 0076d8f6: fld dword ptr [0x977b80] */ FPUSH(R_F32((u32)(0x977b80u)));
    /* 0076d8fc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0076d8fe: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0076d900: fld dword ptr [0x977b7c] */ FPUSH(R_F32((u32)(0x977b7cu)));
    /* 0076d906: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0076d908: fst dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0));
    /* 0076d90b: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0076d90e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0076d910: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0076d913: ret 4 */ FN_RET(0x0076d8ec); r_esp += 8; return;
}

void f_0076d918(void) /* sub_76D918 */
{
    FN_ENTER(0x0076d918);
    /* 0076d918: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076d91a: call 0x82fabc */ r_esp -= 4; W32(r_esp, 0x76d91fu); f_0082fabc();
    /* 0076d91f: mov ecx, 0xa9b114 */ r_ecx = 0xa9b114u;
    /* 0076d924: call 0x76d92c */ r_esp -= 4; W32(r_esp, 0x76d929u); f_0076d92c();
    /* 0076d929: ret  */ FN_RET(0x0076d918); r_esp += 4; return;
}

void f_0076d92c(void) /* sub_76D92C */
{
    FN_ENTER(0x0076d92c);
    /* 0076d92c: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0076d933: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0076d93a: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 0076d940: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 0076d947: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0076d94e: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0076d955: ret  */ FN_RET(0x0076d92c); r_esp += 4; return;
}

void f_0076d958(void) /* sub_76D958 */
{
    FN_ENTER(0x0076d958);
    /* 0076d958: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076d959: mov edi, ecx */ r_edi = r_ecx;
    /* 0076d95b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0076d95e: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076d963: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0076d966: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d968: call 0x76da04 */ r_esp -= 4; W32(r_esp, 0x76d96du); f_0076da04();
    /* 0076d96d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076d96f: je 0x76da01 */ if (fZ) goto L_0076da01;
L_0076d975:; BB(0x0076d975);
    /* 0076d975: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 0076d97b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d97d: jne 0x76d9ca */ if (!fZ) goto L_0076d9ca;
L_0076d97f:; BB(0x0076d97f);
    /* 0076d97f: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0076d985: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076d987: jne 0x76d996 */ if (!fZ) goto L_0076d996;
L_0076d989:; BB(0x0076d989);
    /* 0076d989: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 0076d98e: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076d991: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
L_0076d996:; BB(0x0076d996);
    /* 0076d996: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0076d99d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d9a0: je 0x76da01 */ if (fZ) goto L_0076da01;
L_0076d9a2:; BB(0x0076d9a2);
    /* 0076d9a2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9a5: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076d9a7: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d9a9: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d9afu); call_ind(t); }
    /* 0076d9af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9b1: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076d9b3: mov eax, 8 */ r_eax = 0x8u;
    /* 0076d9b8: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0076d9bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d9c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9c2: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d9c8u); call_ind(t); }
    /* 0076d9c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076d9c9: ret  */ FN_RET(0x0076d958); r_esp += 4; return;
L_0076d9ca:; BB(0x0076d9ca);
    /* 0076d9ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d9cd: jne 0x76da01 */ if (!fZ) goto L_0076da01;
L_0076d9cf:; BB(0x0076d9cf);
    /* 0076d9cf: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0076d9d6: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076d9d9: je 0x76da01 */ if (fZ) goto L_0076da01;
L_0076d9db:; BB(0x0076d9db);
    /* 0076d9db: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9de: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076d9e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d9e2: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76d9e8u); call_ind(t); }
    /* 0076d9e8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9ea: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076d9ec: mov eax, 0xe */ r_eax = 0xeu;
    /* 0076d9f1: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0076d9f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0076d9fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076d9fb: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76da01u); call_ind(t); }
L_0076da01:; BB(0x0076da01);
    /* 0076da01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076da02: ret  */ FN_RET(0x0076d958); r_esp += 4; return;
}

void f_0076da04(void) /* sub_76DA04 */
{
    FN_ENTER(0x0076da04);
    /* 0076da04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076da05: movsx edi, word ptr [ecx + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0076da0c: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0076da11: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0076da13: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0076da16: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0076da18: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0076da1b: mov edx, dword ptr [ecx + 0x3c0] */ r_edx = R32((u32)(r_ecx+0x3c0u));
    /* 0076da21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076da24: jne 0x76da4c */ if (!fZ) goto L_0076da4c;
L_0076da26:; BB(0x0076da26);
    /* 0076da26: movsx edi, word ptr [ecx + 0x346] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x346u));
    /* 0076da2d: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0076da34: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0076da36: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076da38: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076da3a: jl 0x76da4c */ if ((fS!=fO)) goto L_0076da4c;
L_0076da3c:; BB(0x0076da3c);
    /* 0076da3c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076da3e: mov word ptr [ecx + 0x346], di */ W16((u32)(r_ecx+0x346u), (u16)r_edi);
    /* 0076da45: mov eax, 1 */ r_eax = 0x1u;
    /* 0076da4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076da4b: ret  */ FN_RET(0x0076da04); r_esp += 4; return;
L_0076da4c:; BB(0x0076da4c);
    /* 0076da4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076da4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076da4f: ret  */ FN_RET(0x0076da04); r_esp += 4; return;
}

void f_0076da50(void) /* sub_76DA50 */
{
    FN_ENTER(0x0076da50);
    /* 0076da50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076da51: mov edi, ecx */ r_edi = r_ecx;
    /* 0076da53: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 0076da59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076da5b: jne 0x76dad9 */ if (!fZ) goto L_0076dad9;
L_0076da5d:; BB(0x0076da5d);
    /* 0076da5d: movsx eax, word ptr [edi + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 0076da64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0076da66: jle 0x76da7d */ if ((fZ||fS!=fO)) goto L_0076da7d;
L_0076da68:; BB(0x0076da68);
    /* 0076da68: push dword ptr [edi + 0x3d4] */ { u32 v = R32((u32)(r_edi+0x3d4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076da6e: call 0x76f578 */ r_esp -= 4; W32(r_esp, 0x76da73u); f_0076f578();
    /* 0076da73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076da74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076da76: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
L_0076da7d:; BB(0x0076da7d);
    /* 0076da7d: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0076da84: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076da87: je 0x76db45 */ if (fZ) goto L_0076db45;
L_0076da8d:; BB(0x0076da8d);
    /* 0076da8d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076da8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076da90: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076da92: mov ecx, edi */ r_ecx = r_edi;
    /* 0076da94: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76da9au); call_ind(t); }
    /* 0076da9a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076da9c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076da9e: mov eax, 9 */ r_eax = 0x9u;
    /* 0076daa3: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0076daaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0076daac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076daad: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76dab3u); call_ind(t); }
    /* 0076dab3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0076dab5: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dab7: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x76dabdu); call_ind(t); }
    /* 0076dabd: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 0076dac4: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0076dac7: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 0076dace: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dad4: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0076dad7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076dad8: ret  */ FN_RET(0x0076da50); r_esp += 4; return;
L_0076dad9:; BB(0x0076dad9);
    /* 0076dad9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076dadc: jne 0x76db45 */ if (!fZ) goto L_0076db45;
L_0076dade:; BB(0x0076dade);
    /* 0076dade: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 0076dae4: and eax, 0xfffffcff */ {  u32 a = r_eax; u32 b = 0xfffffcffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076dae9: mov dword ptr [edi + 0x3c0], eax */ W32((u32)(r_edi+0x3c0u), r_eax);
    /* 0076daef: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0076daf6: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076daf9: je 0x76db45 */ if (fZ) goto L_0076db45;
L_0076dafb:; BB(0x0076dafb);
    /* 0076dafb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dafd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076dafe: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076db00: mov ecx, edi */ r_ecx = r_edi;
    /* 0076db02: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76db08u); call_ind(t); }
    /* 0076db08: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076db0a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076db0c: mov eax, 0x10 */ r_eax = 0x10u;
    /* 0076db11: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0076db18: mov ecx, edi */ r_ecx = r_edi;
    /* 0076db1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076db1b: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76db21u); call_ind(t); }
    /* 0076db21: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0076db23: mov ecx, edi */ r_ecx = r_edi;
    /* 0076db25: call dword ptr [eax + 0x108] */ { u32 t = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, 0x76db2bu); call_ind(t); }
    /* 0076db2b: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 0076db32: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0076db35: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 0076db3c: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076db42: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
L_0076db45:; BB(0x0076db45);
    /* 0076db45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076db46: ret  */ FN_RET(0x0076da50); r_esp += 4; return;
}

void f_0076db48(void) /* sub_76DB48 */
{
    FN_ENTER(0x0076db48);
    /* 0076db48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076db49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076db4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076db4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076db4c: mov edi, ecx */ r_edi = r_ecx;
    /* 0076db4e: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0076db52: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x76db57u); f_004f7c84();
    /* 0076db57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076db59: jne 0x76dbb9 */ if (!fZ) goto L_0076dbb9;
L_0076db5b:; BB(0x0076db5b);
    /* 0076db5b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076db5d: jl 0x76db64 */ if ((fS!=fO)) goto L_0076db64;
L_0076db5f:; BB(0x0076db5f);
    /* 0076db5f: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076db62: jle 0x76db6b */ if ((fZ||fS!=fO)) goto L_0076db6b;
L_0076db64:; BB(0x0076db64);
    /* 0076db64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076db65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076db66: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076db67: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076db68: ret 8 */ FN_RET(0x0076db48); r_esp += 12; return;
L_0076db6b:; BB(0x0076db6b);
    /* 0076db6b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0076db6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076db70: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
    /* 0076db73: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0076db75: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 0076db79: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076db7b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076db7d: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0076db7f: mov esi, dword ptr [ebx + 0x9f78e0] */ r_esi = R32((u32)(r_ebx+0x9f78e0u));
    /* 0076db85: mov ecx, edi */ r_ecx = r_edi;
    /* 0076db87: lea ebp, [ebx + 0x9f78e0] */ r_ebp = (u32)(r_ebx+0x9f78e0u);
    /* 0076db8d: mov ebx, dword ptr [ebx + 0x9f78e4] */ r_ebx = R32((u32)(r_ebx+0x9f78e4u));
    /* 0076db93: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076db94: call 0x76dbd0 */ r_esp -= 4; W32(r_esp, 0x76db99u); f_0076dbd0();
    /* 0076db99: cmp esi, dword ptr [0x977b70] */ {  u32 a = r_esi; u32 b = R32((u32)(0x977b70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076db9f: je 0x76dbc0 */ if (fZ) goto L_0076dbc0;
L_0076dba1:; BB(0x0076dba1);
    /* 0076dba1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0076dba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076dba6: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0076dba8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076dbaa: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x76dbacu); call_ind(t); }
L_0076dbac:; BB(0x0076dbac);
    /* 0076dbac: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0076dbb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076dbb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dbb2: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dbb4: call 0x76dbe8 */ r_esp -= 4; W32(r_esp, 0x76dbb9u); f_0076dbe8();
L_0076dbb9:; BB(0x0076dbb9);
    /* 0076dbb9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076dbba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076dbbb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076dbbc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076dbbd: ret 8 */ FN_RET(0x0076db48); r_esp += 12; return;
L_0076dbc0:; BB(0x0076dbc0);
    /* 0076dbc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dbc2: je 0x76dbac */ if (fZ) goto L_0076dbac;
L_0076dbc4:; BB(0x0076dbc4);
    /* 0076dbc4: cmp ebx, dword ptr [0x977b74] */ {  u32 a = r_ebx; u32 b = R32((u32)(0x977b74u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dbca: jne 0x76dba1 */ if (!fZ) goto L_0076dba1;
L_0076dbcc:; BB(0x0076dbcc);
    /* 0076dbcc: jmp 0x76dbac */ goto L_0076dbac;
}

void f_0076dbd0(void) /* sub_76DBD0 */
{
    FN_ENTER(0x0076dbd0);
    /* 0076dbd0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076dbd4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076dbd7: jne 0x76dbe2 */ if (!fZ) goto L_0076dbe2;
L_0076dbd9:; BB(0x0076dbd9);
    /* 0076dbd9: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dbdd: call 0x76ef70 */ r_esp -= 4; W32(r_esp, 0x76dbe2u); f_0076ef70();
L_0076dbe2:; BB(0x0076dbe2);
    /* 0076dbe2: ret 8 */ FN_RET(0x0076dbd0); r_esp += 12; return;
}

void f_0076dbe8(void) /* sub_76DBE8 */
{
    FN_ENTER(0x0076dbe8);
    /* 0076dbe8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076dbec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dbee: jne 0x76dbf9 */ if (!fZ) goto L_0076dbf9;
L_0076dbf0:; BB(0x0076dbf0);
    /* 0076dbf0: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dbf4: call 0x76dbfc */ r_esp -= 4; W32(r_esp, 0x76dbf9u); f_0076dbfc();
L_0076dbf9:; BB(0x0076dbf9);
    /* 0076dbf9: ret 8 */ FN_RET(0x0076dbe8); r_esp += 12; return;
}

void f_0076dbfc(void) /* sub_76DBFC */
{
    FN_ENTER(0x0076dbfc);
    /* 0076dbfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dbfd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0076dbff: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
    /* 0076dc05: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076dc07: jne 0x76dc1a */ if (!fZ) goto L_0076dc1a;
L_0076dc09:; BB(0x0076dc09);
    /* 0076dc09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc0c: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x76dc11u); f_006946a8();
    /* 0076dc11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076dc14: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
L_0076dc1a:; BB(0x0076dc1a);
    /* 0076dc1a: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076dc1c: jne 0x76dc39 */ if (!fZ) goto L_0076dc39;
L_0076dc1e:; BB(0x0076dc1e);
    /* 0076dc1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc20: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc22: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0076dc25: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc2b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x76dc30u); f_00805608();
    /* 0076dc30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076dc33: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
L_0076dc39:; BB(0x0076dc39);
    /* 0076dc39: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076dc3b: je 0x76dc4a */ if (fZ) goto L_0076dc4a;
L_0076dc3d:; BB(0x0076dc3d);
    /* 0076dc3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076dc43: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x76dc48u); f_007b52ec();
    /* 0076dc48: jmp 0x76dc55 */ goto L_0076dc55;
L_0076dc4a:; BB(0x0076dc4a);
    /* 0076dc4a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076dc50: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x76dc55u); f_007b52c4();
L_0076dc55:; BB(0x0076dc55);
    /* 0076dc55: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076dc57: call 0x76dcc8 */ r_esp -= 4; W32(r_esp, 0x76dc5cu); f_0076dcc8();
    /* 0076dc5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dc5d: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x76dc62u); f_007b999c();
    /* 0076dc62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076dc63: mov edx, dword ptr [0xa9b070] */ r_edx = R32((u32)(0xa9b070u));
    /* 0076dc69: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dc6f: je 0x76dc78 */ if (fZ) goto L_0076dc78;
L_0076dc71:; BB(0x0076dc71);
    /* 0076dc71: mov eax, 1 */ r_eax = 0x1u;
    /* 0076dc76: jmp 0x76dc7a */ goto L_0076dc7a;
L_0076dc78:; BB(0x0076dc78);
    /* 0076dc78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076dc7a:; BB(0x0076dc7a);
    /* 0076dc7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dc7c: jne 0x76dcaf */ if (!fZ) goto L_0076dcaf;
L_0076dc7e:; BB(0x0076dc7e);
    /* 0076dc7e: mov eax, dword ptr [ebp + 0x3c0] */ r_eax = R32((u32)(r_ebp+0x3c0u));
    /* 0076dc84: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076dc86: jne 0x76dc9d */ if (!fZ) goto L_0076dc9d;
L_0076dc88:; BB(0x0076dc88);
    /* 0076dc88: test dword ptr [ebp + 0x3c4], edx */ {  u32 a = R32((u32)(r_ebp+0x3c4u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dc8e: je 0x76dc97 */ if (fZ) goto L_0076dc97;
L_0076dc90:; BB(0x0076dc90);
    /* 0076dc90: mov eax, 1 */ r_eax = 0x1u;
    /* 0076dc95: jmp 0x76dc99 */ goto L_0076dc99;
L_0076dc97:; BB(0x0076dc97);
    /* 0076dc97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076dc99:; BB(0x0076dc99);
    /* 0076dc99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dc9b: je 0x76dcab */ if (fZ) goto L_0076dcab;
L_0076dc9d:; BB(0x0076dc9d);
    /* 0076dc9d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076dca1: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dca4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076dca6: call 0x76ded8 */ r_esp -= 4; W32(r_esp, 0x76dcabu); f_0076ded8();
L_0076dcab:; BB(0x0076dcab);
    /* 0076dcab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076dcac: ret 4 */ FN_RET(0x0076dbfc); r_esp += 8; return;
L_0076dcaf:; BB(0x0076dcaf);
    /* 0076dcaf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dcb0: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x76dcb5u); f_008113e4();
    /* 0076dcb5: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 0076dcb9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dcbe: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 0076dcc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076dcc3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076dcc4: ret 4 */ FN_RET(0x0076dbfc); r_esp += 8; return;
}

void f_0076dcc8(void) /* sub_76DCC8 */
{
    FN_ENTER(0x0076dcc8);
    /* 0076dcc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076dcc9: mov edi, ecx */ r_edi = r_ecx;
    /* 0076dccb: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 0076dcd1: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dcd3: je 0x76dcd7 */ if (fZ) goto L_0076dcd7;
L_0076dcd5:; BB(0x0076dcd5);
    /* 0076dcd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076dcd6: ret  */ FN_RET(0x0076dcc8); r_esp += 4; return;
L_0076dcd7:; BB(0x0076dcd7);
    /* 0076dcd7: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dcd9: call 0x76dd34 */ r_esp -= 4; W32(r_esp, 0x76dcdeu); f_0076dd34();
    /* 0076dcde: mov eax, dword ptr [edi + 0x3c0] */ r_eax = R32((u32)(r_edi+0x3c0u));
    /* 0076dce4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076dce6: jne 0x76dcf1 */ if (!fZ) goto L_0076dcf1;
L_0076dce8:; BB(0x0076dce8);
    /* 0076dce8: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dcea: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x76dcefu); f_007aa094();
    /* 0076dcef: jmp 0x76dcf8 */ goto L_0076dcf8;
L_0076dcf1:; BB(0x0076dcf1);
    /* 0076dcf1: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dcf3: call 0x76ddd4 */ r_esp -= 4; W32(r_esp, 0x76dcf8u); f_0076ddd4();
L_0076dcf8:; BB(0x0076dcf8);
    /* 0076dcf8: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dcfa: call 0x76de14 */ r_esp -= 4; W32(r_esp, 0x76dcffu); f_0076de14();
    /* 0076dcff: mov ecx, edi */ r_ecx = r_edi;
    /* 0076dd01: call 0x76de78 */ r_esp -= 4; W32(r_esp, 0x76dd06u); f_0076de78();
    /* 0076dd06: mov edx, dword ptr [edi + 0x3c0] */ r_edx = R32((u32)(r_edi+0x3c0u));
    /* 0076dd0c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dd0f: je 0x76dd30 */ if (fZ) goto L_0076dd30;
L_0076dd11:; BB(0x0076dd11);
    /* 0076dd11: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0076dd17: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dd19: je 0x76dd30 */ if (fZ) goto L_0076dd30;
L_0076dd1b:; BB(0x0076dd1b);
    /* 0076dd1b: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076dd1e: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0076dd24: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0076dd27: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dd2a: mov dword ptr [edi + 0x3c0], edx */ W32((u32)(r_edi+0x3c0u), r_edx);
L_0076dd30:; BB(0x0076dd30);
    /* 0076dd30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076dd31: ret  */ FN_RET(0x0076dcc8); r_esp += 4; return;
}

void f_0076dd34(void) /* sub_76DD34 */
{
    FN_ENTER(0x0076dd34);
    /* 0076dd34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076dd35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076dd36: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076dd38: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0076dd3f: cmp ax, word ptr [ebx + 0xba] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0xbau)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0076dd46: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0076dd49: je 0x76ddd1 */ if (fZ) goto L_0076ddd1;
L_0076dd4f:; BB(0x0076dd4f);
    /* 0076dd4f: fld dword ptr [edi*8 + 0x9f7828] */ FPUSH(R_F32((u32)(r_edi*8+0x9f7828u)));
    /* 0076dd56: fcomp dword ptr [0x977b6c] */ fx_compare(ST(0), R_F32((u32)(0x977b6cu))); FPOP();
    /* 0076dd5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076dd5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076dd5f: jb 0x76dd73 */ if (fC) goto L_0076dd73;
L_0076dd61:; BB(0x0076dd61);
    /* 0076dd61: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 0076dd67: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dd6a: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
    /* 0076dd70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076dd71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076dd72: ret  */ FN_RET(0x0076dd34); r_esp += 4; return;
L_0076dd73:; BB(0x0076dd73);
    /* 0076dd73: push dword ptr [edi*8 + 0x9f7824] */ { u32 v = R32((u32)(r_edi*8+0x9f7824u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dd7a: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076dd80: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x76dd85u); f_005b8638();
    /* 0076dd85: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 0076dd8b: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0076dd8e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0076dd91: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0076dd94: fadd dword ptr [edx*4 + 0x977af0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x977af0u));
    /* 0076dd9b: fadd dword ptr [0x977b68] */ ST(0) = ST(0) + R_F32((u32)(0x977b68u));
    /* 0076dda1: fstp dword ptr [ebx + 0xc0] */ W_F32((u32)(r_ebx+0xc0u), ST(0)); FPOP();
    /* 0076dda7: mov eax, dword ptr [edi*8 + 0x9f7828] */ r_eax = R32((u32)(r_edi*8+0x9f7828u));
    /* 0076ddae: movzx edi, word ptr [ebx + 0xb8] */ r_edi = (u32)R16((u32)(r_ebx+0xb8u));
    /* 0076ddb5: mov dword ptr [ebx + 0xc8], eax */ W32((u32)(r_ebx+0xc8u), r_eax);
    /* 0076ddbb: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 0076ddc1: mov word ptr [ebx + 0xba], di */ W16((u32)(r_ebx+0xbau), (u16)r_edi);
    /* 0076ddc8: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ddcb: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
L_0076ddd1:; BB(0x0076ddd1);
    /* 0076ddd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076ddd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076ddd3: ret  */ FN_RET(0x0076dd34); r_esp += 4; return;
}

void f_0076ddd4(void) /* sub_76DDD4 */
{
    FN_ENTER(0x0076ddd4);
    /* 0076ddd4: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 0076ddda: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 0076dde0: fcom dword ptr [0x977b64] */ fx_compare(ST(0), R_F32((u32)(0x977b64u))); 
    /* 0076dde6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076dde8: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0076ddee: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0076ddf1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076ddf2: ja 0x76de07 */ if ((!fC&&!fZ)) goto L_0076de07;
L_0076ddf4:; BB(0x0076ddf4);
    /* 0076ddf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076ddf6: fld dword ptr [0x977b64] */ FPUSH(R_F32((u32)(0x977b64u)));
    /* 0076ddfc: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076ddff: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
    /* 0076de05: jmp 0x76de0d */ goto L_0076de0d;
L_0076de07:; BB(0x0076de07);
    /* 0076de07: mov dword ptr [ecx + 0xb0], edx */ W32((u32)(r_ecx+0xb0u), r_edx);
L_0076de0d:; BB(0x0076de0d);
    /* 0076de0d: fstp dword ptr [ecx + 0xc0] */ W_F32((u32)(r_ecx+0xc0u), ST(0)); FPOP();
    /* 0076de13: ret  */ FN_RET(0x0076ddd4); r_esp += 4; return;
}

void f_0076de14(void) /* sub_76DE14 */
{
    FN_ENTER(0x0076de14);
    /* 0076de14: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0076de1a: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076de1f: je 0x76de29 */ if (fZ) goto L_0076de29;
L_0076de21:; BB(0x0076de21);
    /* 0076de21: fld dword ptr [0xa9b0e8] */ FPUSH(R_F32((u32)(0xa9b0e8u)));
    /* 0076de27: jmp 0x76de42 */ goto L_0076de42;
L_0076de29:; BB(0x0076de29);
    /* 0076de29: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076de2e: je 0x76de3a */ if (fZ) goto L_0076de3a;
L_0076de30:; BB(0x0076de30);
    /* 0076de30: fld dword ptr [0xa9b0e4] */ FPUSH(R_F32((u32)(0xa9b0e4u)));
    /* 0076de36: fchs  */ ST(0) = -ST(0);
    /* 0076de38: jmp 0x76de42 */ goto L_0076de42;
L_0076de3a:; BB(0x0076de3a);
    /* 0076de3a: fld dword ptr [0xa9b0e0] */ FPUSH(R_F32((u32)(0xa9b0e0u)));
    /* 0076de40: fchs  */ ST(0) = -ST(0);
L_0076de42:; BB(0x0076de42);
    /* 0076de42: fadd dword ptr [ecx + 0x3c8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3c8u));
    /* 0076de48: fld dword ptr [0x977b60] */ FPUSH(R_F32((u32)(0x977b60u)));
    /* 0076de4e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076de50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076de52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076de53: jbe 0x76de59 */ if ((fC||fZ)) goto L_0076de59;
L_0076de55:; BB(0x0076de55);
    /* 0076de55: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0076de57: jmp 0x76de6e */ goto L_0076de6e;
L_0076de59:; BB(0x0076de59);
    /* 0076de59: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076de5b: fld dword ptr [0x977b94] */ FPUSH(R_F32((u32)(0x977b94u)));
    /* 0076de61: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076de63: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076de65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076de66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076de68: jbe 0x76de6c */ if ((fC||fZ)) goto L_0076de6c;
L_0076de6a:; BB(0x0076de6a);
    /* 0076de6a: fst st(1) */ ST(1) = ST(0);
L_0076de6c:; BB(0x0076de6c);
    /* 0076de6c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0076de6e:; BB(0x0076de6e);
    /* 0076de6e: fstp dword ptr [ecx + 0x3c8] */ W_F32((u32)(r_ecx+0x3c8u), ST(0)); FPOP();
    /* 0076de74: ret  */ FN_RET(0x0076de14); r_esp += 4; return;
}

void f_0076de78(void) /* sub_76DE78 */
{
    FN_ENTER(0x0076de78);
    /* 0076de78: mov eax, dword ptr [ecx + 0x3c0] */ r_eax = R32((u32)(r_ecx+0x3c0u));
    /* 0076de7e: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076de83: je 0x76de8d */ if (fZ) goto L_0076de8d;
L_0076de85:; BB(0x0076de85);
    /* 0076de85: fld dword ptr [0x977b54] */ FPUSH(R_F32((u32)(0x977b54u)));
    /* 0076de8b: jmp 0x76dea2 */ goto L_0076dea2;
L_0076de8d:; BB(0x0076de8d);
    /* 0076de8d: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0076de92: je 0x76de9c */ if (fZ) goto L_0076de9c;
L_0076de94:; BB(0x0076de94);
    /* 0076de94: fld dword ptr [0x977b58] */ FPUSH(R_F32((u32)(0x977b58u)));
    /* 0076de9a: jmp 0x76dea2 */ goto L_0076dea2;
L_0076de9c:; BB(0x0076de9c);
    /* 0076de9c: fld dword ptr [0x977b5c] */ FPUSH(R_F32((u32)(0x977b5cu)));
L_0076dea2:; BB(0x0076dea2);
    /* 0076dea2: fadd dword ptr [ecx + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3ccu));
    /* 0076dea8: fld dword ptr [0x977b50] */ FPUSH(R_F32((u32)(0x977b50u)));
    /* 0076deae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076deb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076deb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076deb3: jbe 0x76deb9 */ if ((fC||fZ)) goto L_0076deb9;
L_0076deb5:; BB(0x0076deb5);
    /* 0076deb5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0076deb7: jmp 0x76dece */ goto L_0076dece;
L_0076deb9:; BB(0x0076deb9);
    /* 0076deb9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0076debb: fld dword ptr [0x977b4c] */ FPUSH(R_F32((u32)(0x977b4cu)));
    /* 0076dec1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0076dec3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0076dec5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0076dec6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0076dec8: jbe 0x76decc */ if ((fC||fZ)) goto L_0076decc;
L_0076deca:; BB(0x0076deca);
    /* 0076deca: fst st(1) */ ST(1) = ST(0);
L_0076decc:; BB(0x0076decc);
    /* 0076decc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0076dece:; BB(0x0076dece);
    /* 0076dece: fstp dword ptr [ecx + 0x3cc] */ W_F32((u32)(r_ecx+0x3ccu), ST(0)); FPOP();
    /* 0076ded4: ret  */ FN_RET(0x0076de78); r_esp += 4; return;
}

void f_0076ded8(void) /* sub_76DED8 */
{
    FN_ENTER(0x0076ded8);
    /* 0076ded8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076ded9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076deda: mov edi, ecx */ r_edi = r_ecx;
    /* 0076dedc: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0076dee0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0076dee2: jl 0x76df40 */ if ((fS!=fO)) goto L_0076df40;
L_0076dee4:; BB(0x0076dee4);
    /* 0076dee4: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076dee7: jg 0x76df29 */ if ((!fZ&&fS==fO)) goto L_0076df29;
L_0076dee9:; BB(0x0076dee9);
    /* 0076dee9: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 0076def0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076def2: jne 0x76defb */ if (!fZ) goto L_0076defb;
L_0076def4:; BB(0x0076def4);
    /* 0076def4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076def6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076def7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076def8: ret 4 */ FN_RET(0x0076ded8); r_esp += 8; return;
L_0076defb:; BB(0x0076defb);
    /* 0076defb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076defd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076defe: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076df00: mov ecx, edi */ r_ecx = r_edi;
    /* 0076df02: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76df08u); call_ind(t); }
    /* 0076df08: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076df0a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0076df0c: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 0076df0f: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 0076df16: mov ecx, edi */ r_ecx = r_edi;
    /* 0076df18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076df19: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76df1fu); call_ind(t); }
    /* 0076df1f: mov eax, 1 */ r_eax = 0x1u;
    /* 0076df24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076df25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076df26: ret 4 */ FN_RET(0x0076ded8); r_esp += 8; return;
L_0076df29:; BB(0x0076df29);
    /* 0076df29: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076df2c: push 0x977884 */ { u32 v = 0x977884u; r_esp -= 4; W32(r_esp, v); }
    /* 0076df31: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76df36u); f_0061cdb0();
    /* 0076df36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0076df39:; BB(0x0076df39);
    /* 0076df39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076df3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076df3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076df3d: ret 4 */ FN_RET(0x0076ded8); r_esp += 8; return;
L_0076df40:; BB(0x0076df40);
    /* 0076df40: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076df43: jne 0x76df29 */ if (!fZ) goto L_0076df29;
L_0076df45:; BB(0x0076df45);
    /* 0076df45: jmp 0x76df39 */ goto L_0076df39;
}

void f_0076df48(void) /* sub_76DF48 */
{
    FN_ENTER(0x0076df48);
    /* 0076df48: call 0x76f17c */ r_esp -= 4; W32(r_esp, 0x76df4du); f_0076f17c();
    /* 0076df4d: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076df53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076df55: je 0x76df6a */ if (fZ) goto L_0076df6a;
L_0076df57:; BB(0x0076df57);
    /* 0076df57: je 0x76df60 */ if (fZ) goto L_0076df60;
L_0076df59:; BB(0x0076df59);
    /* 0076df59: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076df5b: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x76df60u); f_004066a8();
L_0076df60:; BB(0x0076df60);
    /* 0076df60: mov dword ptr [0xa9b0f8], 0 */ W32((u32)(0xa9b0f8u), 0x0u);
L_0076df6a:; BB(0x0076df6a);
    /* 0076df6a: ret  */ FN_RET(0x0076df48); r_esp += 4; return;
}

void f_0076df6c(void) /* sub_76DF6C */
{
    FN_ENTER(0x0076df6c);
    /* 0076df6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076df6d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076df6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076df71: push 0x8f3e80 */ { u32 v = 0x8f3e80u; r_esp -= 4; W32(r_esp, v); }
    /* 0076df76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076df7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076df7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076df84: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076df87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076df8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0076df8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076df90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076df93: push 0x418 */ { u32 v = 0x418u; r_esp -= 4; W32(r_esp, v); }
    /* 0076df98: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0076df9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76dfa4u); f_005caba4();
    /* 0076dfa4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076dfa5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076dfa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076dfaa: je 0x76dfe6 */ if (fZ) goto L_0076dfe6;
L_0076dfac:; BB(0x0076dfac);
    /* 0076dfac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0076dfb3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076dfba: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dfbd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dfc0: push dword ptr [0xaca364] */ { u32 v = R32((u32)(0xaca364u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076dfc6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076dfc9: call 0x76dfec */ r_esp -= 4; W32(r_esp, 0x76dfceu); f_0076dfec();
    /* 0076dfce: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076dfd1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0076dfd8:; BB(0x0076dfd8);
    /* 0076dfd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076dfdb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076dfe2: mov esp, ebp */ r_esp = r_ebp;
    /* 0076dfe4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076dfe5: ret  */ FN_RET(0x0076df6c); r_esp += 4; return;
L_0076dfe6:; BB(0x0076dfe6);
    /* 0076dfe6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076dfe8: jmp 0x76dfd8 */ goto L_0076dfd8;
}

void f_0076dfec(void) /* sub_76DFEC */
{
    FN_ENTER(0x0076dfec);
    /* 0076dfec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076dfed: mov ebp, esp */ r_ebp = r_esp;
    /* 0076dfef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076dff1: push 0x8f3ee6 */ { u32 v = 0x8f3ee6u; r_esp -= 4; W32(r_esp, v); }
    /* 0076dff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076dffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076dffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0076e004: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076e007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076e00a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0076e00d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0076e010: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0076e013: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0076e016: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e019: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0076e01c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0076e01f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0076e022: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0076e025: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x76e02au); f_00521738();
    /* 0076e02a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076e031: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e034: mov dword ptr [ecx], 0xb43ca0 */ W32((u32)(r_ecx), 0xb43ca0u);
    /* 0076e03a: add ecx, 0x398 */ {  u32 a = r_ecx; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e040: call 0x57713c */ r_esp -= 4; W32(r_esp, 0x76e045u); f_0057713c();
    /* 0076e045: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076e04c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e04f: mov eax, dword ptr [0x9f7abc] */ r_eax = R32((u32)(0x9f7abcu));
    /* 0076e054: mov edx, dword ptr [0xa9b0f8] */ r_edx = R32((u32)(0xa9b0f8u));
    /* 0076e05a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0076e05d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e05f: je 0x76e36b */ if (fZ) goto L_0076e36b;
L_0076e065:; BB(0x0076e065);
    /* 0076e065: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0076e068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e069: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076e06b: call dword ptr [edx + 0x14c] */ { u32 t = R32((u32)(r_edx+0x14cu)); r_esp -= 4; W32(r_esp, 0x76e071u); call_ind(t); }
    /* 0076e071: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e074: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076e076: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x76e07cu); call_ind(t); }
    /* 0076e07c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076e07f: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0076e081: jne 0x76e087 */ if (!fZ) goto L_0076e087;
L_0076e083:; BB(0x0076e083);
    /* 0076e083: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076e085: jmp 0x76e08c */ goto L_0076e08c;
L_0076e087:; BB(0x0076e087);
    /* 0076e087: mov eax, 1 */ r_eax = 0x1u;
L_0076e08c:; BB(0x0076e08c);
    /* 0076e08c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e08f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e090: call 0x76e38c */ r_esp -= 4; W32(r_esp, 0x76e095u); f_0076e38c();
    /* 0076e095: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e098: call 0x76e3e4 */ r_esp -= 4; W32(r_esp, 0x76e09du); f_0076e3e4();
    /* 0076e09d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e0a0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e0a2: push 0x9f7740 */ { u32 v = 0x9f7740u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e0a7: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x76e0acu); f_007b9a88();
    /* 0076e0ac: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e0af: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x76e0b4u); f_007b4f54();
    /* 0076e0b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e0b7: push dword ptr [eax + 0x370] */ { u32 v = R32((u32)(r_eax+0x370u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e0bd: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076e0c3: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x76e0c8u); f_005b8610();
    /* 0076e0c8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e0cb: push dword ptr [edx + 0x370] */ { u32 v = R32((u32)(r_edx+0x370u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076e0d1: mov ecx, dword ptr [0xa9b0f8] */ r_ecx = R32((u32)(0xa9b0f8u));
    /* 0076e0d7: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0076e0da: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x76e0dfu); f_005b8624();
    /* 0076e0df: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e0e2: movsx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 0076e0e9: mov dword ptr [ecx + 0xd8], 0x9f7820 */ W32((u32)(r_ecx+0xd8u), 0x9f7820u);
    /* 0076e0f3: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0076e0f6: mov eax, dword ptr [0xa9b0f8] */ r_eax = R32((u32)(0xa9b0f8u));
    /* 0076e0fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e0fc: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0076e102: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0076e108: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x76e10du); f_007aa4c8();
    /* 0076e10d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e110: mov eax, dword ptr [ecx + 0xb0] */ r_eax = R32((u32)(r_ecx+0xb0u));
    /* 0076e116: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0076e119: mov dword ptr [ecx + 0xb0], eax */ W32((u32)(r_ecx+0xb0u), r_eax);
    /* 0076e11f: call 0x76f14c */ r_esp -= 4; W32(r_esp, 0x76e124u); f_0076f14c();
    /* 0076e124: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e129: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 0076e12f: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076e132: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0076e138: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0076e13b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0076e13c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x76e141u); f_007b4c58();
    /* 0076e141: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e144: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x76e149u); f_0078730c();
    /* 0076e149: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e14c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e14f: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0076e155: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 0076e15b: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 0076e161: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0076e164: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0076e167: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 0076e16a: add ecx, 0x398 */ {  u32 a = r_ecx; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0076e170: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x76e175u); f_0057739c();
    /* 0076e175: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e178: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076e17b: mov dword ptr [ecx + 0x3c8], 0 */ W32((u32)(r_ecx+0x3c8u), 0x0u);
    /* 0076e185: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0076e18b: mov eax, dword ptr [ecx + 0x3b4] */ r_eax = R32((u32)(r_ecx+0x3b4u));
    /* 0076e191: mov dword ptr [ecx + 0x3cc], 0 */ W32((u32)(r_ecx+0x3ccu), 0x0u);
    /* 0076e19b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076e19d: mov dword ptr [ecx + 0x3c0], edx */ W32((u32)(r_ecx+0x3c0u), r_edx);
    /* 0076e1a3: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
    /* 0076e1a9: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 0076e1af: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0076e1b4: mov dword ptr [ecx + 0x37c], ebx */ W32((u32)(r_ecx+0x37cu), r_ebx);
    /* 0076e1ba: mov word ptr [ecx + 0x32e], bx */ W16((u32)(r_ecx+0x32eu), (u16)r_ebx);
    /* 0076e1c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e1c3: jne 0x76e1ea */ if (!fZ) goto L_0076e1ea;
L_0076e1c5:; BB(0x0076e1c5);
    /* 0076e1c5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1c9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076e1cb: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x76e1d1u); call_ind(t); }
    /* 0076e1d1: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e1d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1d6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076e1d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076e1da: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0076e1e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1e2: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e1e8u); call_ind(t); }
    /* 0076e1e8: jmp 0x76e215 */ goto L_0076e215;
L_0076e1ea:; BB(0x0076e1ea);
    /* 0076e1ea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e1ed: jne 0x76e215 */ if (!fZ) goto L_0076e215;
L_0076e1ef:; BB(0x0076e1ef);
    /* 0076e1ef: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1f1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076e1f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0076e1f5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x76e1fbu); call_ind(t); }
    /* 0076e1fb: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e1fe: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e200: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0076e202: mov eax, 0xa */ r_eax = 0xau;
    /* 0076e207: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 0076e20e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e20f: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x76e215u); call_ind(t); }
L_0076e215:; BB(0x0076e215);
    /* 0076e215: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0076e21c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e21e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x76e223u); f_008581c5();
    /* 0076e223: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076e226: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076e229: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0076e22c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e22e: je 0x76e361 */ if (fZ) goto L_0076e361;
L_0076e234:; BB(0x0076e234);
    /* 0076e234: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0076e23b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0076e242: mov ecx, eax */ r_ecx = r_eax;
    /* 0076e244: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e246: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x76e24bu); f_00521a4c();
    /* 0076e24b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0076e252:; BB(0x0076e252);
    /* 0076e252: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e255: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0076e258: mov dword ptr [edx + 0x414], eax */ W32((u32)(r_edx+0x414u), r_eax);
    /* 0076e25e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0076e265: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0076e26c: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076e271: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x76e276u); f_005caba4();
    /* 0076e276: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076e279: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076e27c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0076e27f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076e281: je 0x76e357 */ if (fZ) goto L_0076e357;
L_0076e287:; BB(0x0076e287);
    /* 0076e287: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0076e28e: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0076e295: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e298: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076e29b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e29c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076e29d: call 0x76e46c */ r_esp -= 4; W32(r_esp, 0x76e2a2u); f_0076e46c();
    /* 0076e2a2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0076e2a9:; BB(0x0076e2a9);
    /* 0076e2a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e2ac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076e2af: mov eax, dword ptr [0x9f77f0] */ r_eax = R32((u32)(0x9f77f0u));
    /* 0076e2b4: mov edi, dword ptr [0x9f77f4] */ r_edi = R32((u32)(0x9f77f4u));
    /* 0076e2ba: mov esi, dword ptr [0x9f77f8] */ r_esi = R32((u32)(0x9f77f8u));
    /* 0076e2c0: mov ebx, dword ptr [0x9f77fc] */ r_ebx = R32((u32)(0x9f77fcu));
    /* 0076e2c6: mov dword ptr [edx + 0x410], ecx */ W32((u32)(r_edx+0x410u), r_ecx);
    /* 0076e2cc: mov dword ptr [edx + 0x3e4], eax */ W32((u32)(r_edx+0x3e4u), r_eax);
    /* 0076e2d2: mov eax, dword ptr [0x9f7800] */ r_eax = R32((u32)(0x9f7800u));
    /* 0076e2d7: mov dword ptr [edx + 0x3e8], edi */ W32((u32)(r_edx+0x3e8u), r_edi);
    /* 0076e2dd: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076e2e0: mov dword ptr [edx + 0x3ec], esi */ W32((u32)(r_edx+0x3ecu), r_esi);
    /* 0076e2e6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076e2e9: mov dword ptr [edx + 0x3f0], ebx */ W32((u32)(r_edx+0x3f0u), r_ebx);
    /* 0076e2ef: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076e2f2: mov dword ptr [edx + 0x3f4], eax */ W32((u32)(r_edx+0x3f4u), r_eax);
    /* 0076e2f8: mov eax, dword ptr [0x9f7804] */ r_eax = R32((u32)(0x9f7804u));
    /* 0076e2fd: mov dword ptr [edx + 0x3f8], eax */ W32((u32)(r_edx+0x3f8u), r_eax);
    /* 0076e303: mov eax, dword ptr [0x9f7808] */ r_eax = R32((u32)(0x9f7808u));
    /* 0076e308: mov dword ptr [edx + 0x3fc], eax */ W32((u32)(r_edx+0x3fcu), r_eax);
    /* 0076e30e: mov eax, dword ptr [0x9f780c] */ r_eax = R32((u32)(0x9f780cu));
    /* 0076e313: mov dword ptr [edx + 0x400], eax */ W32((u32)(r_edx+0x400u), r_eax);
    /* 0076e319: mov eax, dword ptr [0x9f7810] */ r_eax = R32((u32)(0x9f7810u));
    /* 0076e31e: mov dword ptr [edx + 0x404], eax */ W32((u32)(r_edx+0x404u), r_eax);
    /* 0076e324: mov eax, dword ptr [0x9f7814] */ r_eax = R32((u32)(0x9f7814u));
    /* 0076e329: mov dword ptr [edx + 0x408], eax */ W32((u32)(r_edx+0x408u), r_eax);
    /* 0076e32f: mov eax, dword ptr [0x9f7818] */ r_eax = R32((u32)(0x9f7818u));
    /* 0076e334: mov dword ptr [edx + 0x40c], eax */ W32((u32)(r_edx+0x40cu), r_eax);
    /* 0076e33a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0076e33d: mov dword ptr [eax + 0x3d4], 0 */ W32((u32)(r_eax+0x3d4u), 0x0u);
    /* 0076e347: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076e34a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076e351: mov esp, ebp */ r_esp = r_ebp;
    /* 0076e353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e354: ret 0xc */ FN_RET(0x0076dfec); r_esp += 16; return;
L_0076e357:; BB(0x0076e357);
    /* 0076e357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076e359: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076e35c: jmp 0x76e2a9 */ goto L_0076e2a9;
L_0076e361:; BB(0x0076e361);
    /* 0076e361: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0076e363: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076e366: jmp 0x76e252 */ goto L_0076e252;
L_0076e36b:; BB(0x0076e36b);
    /* 0076e36b: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0076e36f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076e375: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0076e379: mov eax, ecx */ r_eax = r_ecx;
    /* 0076e37b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076e37e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076e385: mov esp, ebp */ r_esp = r_ebp;
    /* 0076e387: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076e388: ret 0xc */ FN_RET(0x0076dfec); r_esp += 16; return;
}

