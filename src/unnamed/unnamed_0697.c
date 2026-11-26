#include "protos.h"

void f_006970a0(void) /* sub_6970A0 */
{
    FN_ENTER(0x006970a0);
    /* 006970a0: mov ecx, dword ptr [0xa942f8] */ r_ecx = R32((u32)(0xa942f8u));
    /* 006970a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006970a8: je 0x6970c5 */ if (fZ) goto L_006970c5;
L_006970aa:; BB(0x006970aa);
    /* 006970aa: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x6970afu); f_00829de0();
    /* 006970af: push dword ptr [0xa942f8] */ { u32 v = R32((u32)(0xa942f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006970b5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6970bau); f_0082e960();
    /* 006970ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006970bb: mov dword ptr [0xa942f8], 0 */ W32((u32)(0xa942f8u), 0x0u);
L_006970c5:; BB(0x006970c5);
    /* 006970c5: ret  */ FN_RET(0x006970a0); r_esp += 4; return;
}

void f_006970c8(void) /* sub_6970C8 */
{
    FN_ENTER(0x006970c8);
    /* 006970c8: mov dword ptr [0xa942ec], 0x3f800000 */ W32((u32)(0xa942ecu), 0x3f800000u);
    /* 006970d2: mov dword ptr [0xa942f0], 0x41000000 */ W32((u32)(0xa942f0u), 0x41000000u);
    /* 006970dc: mov dword ptr [0xa942f4], 0x3fc00000 */ W32((u32)(0xa942f4u), 0x3fc00000u);
    /* 006970e6: ret  */ FN_RET(0x006970c8); r_esp += 4; return;
}

void f_006970e8(void) /* sub_6970E8 */
{
    FN_ENTER(0x006970e8);
    /* 006970e8: push 0x93c8e8 */ { u32 v = 0x93c8e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006970ed: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6970f2u); f_008009dc();
    /* 006970f2: mov dword ptr [0xa942f8], eax */ W32((u32)(0xa942f8u), r_eax);
    /* 006970f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006970f8: ret  */ FN_RET(0x006970e8); r_esp += 4; return;
}

void f_006970fc(void) /* sub_6970FC */
{
    FN_ENTER(0x006970fc);
    /* 006970fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006970fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006970ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697101: push 0x8eb49c */ { u32 v = 0x8eb49cu; r_esp -= 4; W32(r_esp, v); }
    /* 00697106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069710c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069710d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069711a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0069711d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00697120: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00697123: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00697126: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00697129: mov eax, ecx */ r_eax = r_ecx;
    /* 0069712b: mov dword ptr [eax], 0xb39878 */ W32((u32)(r_eax), 0xb39878u);
    /* 00697131: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00697138: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x69713du); f_008171e8();
    /* 0069713d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00697140: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697142: jne 0x697154 */ if (!fZ) goto L_00697154;
L_00697144:; BB(0x00697144);
    /* 00697144: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697147: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069714e: mov esp, ebp */ r_esp = r_ebp;
    /* 00697150: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697151: ret 4 */ FN_RET(0x006970fc); r_esp += 8; return;
L_00697154:; BB(0x00697154);
    /* 00697154: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00697157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697158: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x69715du); f_005c2f74();
    /* 0069715d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069715e: jmp 0x697144 */ goto L_00697144;
}

void f_00697160(void) /* sub_697160 */
{
    FN_ENTER(0x00697160);
    /* 00697160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697161: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00697163: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697165: call 0x6971f8 */ r_esp -= 4; W32(r_esp, 0x69716au); f_006971f8();
    /* 0069716a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0069716e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697170: jne 0x697176 */ if (!fZ) goto L_00697176;
L_00697172:; BB(0x00697172);
    /* 00697172: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697173: ret 4 */ FN_RET(0x00697160); r_esp += 8; return;
L_00697176:; BB(0x00697176);
    /* 00697176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697177: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x69717cu); f_005c2f74();
    /* 0069717c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069717d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069717e: ret 4 */ FN_RET(0x00697160); r_esp += 8; return;
}

void f_00697184(void) /* sub_697184 */
{
    FN_ENTER(0x00697184);
    /* 00697184: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697185: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00697187: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697189: call 0x6971a8 */ r_esp -= 4; W32(r_esp, 0x69718eu); f_006971a8();
    /* 0069718e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00697192: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697194: jne 0x69719a */ if (!fZ) goto L_0069719a;
L_00697196:; BB(0x00697196);
    /* 00697196: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697197: ret 4 */ FN_RET(0x00697184); r_esp += 8; return;
L_0069719a:; BB(0x0069719a);
    /* 0069719a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069719b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6971a0u); f_005c2f74();
    /* 006971a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006971a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006971a2: ret 4 */ FN_RET(0x00697184); r_esp += 8; return;
}

void f_006971a8(void) /* sub_6971A8 */
{
    FN_ENTER(0x006971a8);
    /* 006971a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006971a9: mov ebp, esp */ r_ebp = r_esp;
    /* 006971ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006971ad: push 0x8eb4b8 */ { u32 v = 0x8eb4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006971b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006971b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006971b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006971c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006971c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006971c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006971c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006971cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006971cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006971d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006971d5: mov dword ptr [ecx], 0xb398c8 */ W32((u32)(r_ecx), 0xb398c8u);
    /* 006971db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006971e2: call 0x6971f8 */ r_esp -= 4; W32(r_esp, 0x6971e7u); f_006971f8();
    /* 006971e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006971ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006971f1: mov esp, ebp */ r_esp = r_ebp;
    /* 006971f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006971f4: ret  */ FN_RET(0x006971a8); r_esp += 4; return;
}

void f_006971f8(void) /* sub_6971F8 */
{
    FN_ENTER(0x006971f8);
    /* 006971f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006971f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006971fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006971fd: push 0x8eb4d4 */ { u32 v = 0x8eb4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00697202: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697209: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697210: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697213: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697216: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00697219: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0069721c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0069721f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00697222: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697229: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0069722c: mov dword ptr [ecx], 0xb39888 */ W32((u32)(r_ecx), 0xb39888u);
    /* 00697232: call 0x697268 */ r_esp -= 4; W32(r_esp, 0x697237u); f_00697268();
    /* 00697237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697239: je 0x697249 */ if (fZ) goto L_00697249;
L_0069723b:; BB(0x0069723b);
    /* 0069723b: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0069723f: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00697245: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_00697249:; BB(0x00697249);
    /* 00697249: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00697250: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697253: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x697258u); f_008171e8();
    /* 00697258: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069725b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697262: mov esp, ebp */ r_esp = r_ebp;
    /* 00697264: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697265: ret  */ FN_RET(0x006971f8); r_esp += 4; return;
}

void f_00697246(void)
{
    FN_ENTER(0x00697246);
    /* 00697246: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00697249: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00697250: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697253: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x697258u); f_008171e8();
    /* 00697258: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069725b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697262: mov esp, ebp */ r_esp = r_ebp;
    /* 00697264: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697265: ret  */ FN_RET(0x00697246); r_esp += 4; return;
}

void f_00697268(void) /* sub_697268 */
{
    FN_ENTER(0x00697268);
    /* 00697268: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0069726b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069726d: je 0x697283 */ if (fZ) goto L_00697283;
L_0069726f:; BB(0x0069726f);
    /* 0069726f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00697272: cmp eax, dword ptr [0x9ba90c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9ba90cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00697278: je 0x697283 */ if (fZ) goto L_00697283;
L_0069727a:; BB(0x0069727a);
    /* 0069727a: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00697281: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00697283:; BB(0x00697283);
    /* 00697283: mov eax, edx */ r_eax = r_edx;
    /* 00697285: ret  */ FN_RET(0x00697268); r_esp += 4; return;
}

void f_00697288(void) /* sub_697288 */
{
    FN_ENTER(0x00697288);
    /* 00697288: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697289: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0069728b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069728d: call 0x6972ac */ r_esp -= 4; W32(r_esp, 0x697292u); f_006972ac();
    /* 00697292: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00697296: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697298: jne 0x69729e */ if (!fZ) goto L_0069729e;
L_0069729a:; BB(0x0069729a);
    /* 0069729a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069729b: ret 4 */ FN_RET(0x00697288); r_esp += 8; return;
L_0069729e:; BB(0x0069729e);
    /* 0069729e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069729f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6972a4u); f_005c2f74();
    /* 006972a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006972a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006972a6: ret 4 */ FN_RET(0x00697288); r_esp += 8; return;
}

void f_006972ac(void) /* sub_6972AC */
{
    FN_ENTER(0x006972ac);
    /* 006972ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006972ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006972af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006972b1: push 0x8eb4f0 */ { u32 v = 0x8eb4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006972b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006972bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006972bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006972c4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006972c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006972ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006972cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006972d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006972d3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006972d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006972d9: mov dword ptr [ecx], 0xb398d8 */ W32((u32)(r_ecx), 0xb398d8u);
    /* 006972df: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006972e6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6972ebu); f_008171e8();
    /* 006972eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006972ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006972f5: mov esp, ebp */ r_esp = r_ebp;
    /* 006972f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006972f8: ret  */ FN_RET(0x006972ac); r_esp += 4; return;
}

void f_006972fc(void) /* sub_6972FC */
{
    FN_ENTER(0x006972fc);
    /* 006972fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006972fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006972ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697301: push 0x8eb50c */ { u32 v = 0x8eb50cu; r_esp -= 4; W32(r_esp, v); }
    /* 00697306: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069730c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069730d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697314: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697317: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069731a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0069731d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00697320: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00697323: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00697326: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00697329: mov eax, ecx */ r_eax = r_ecx;
    /* 0069732b: mov dword ptr [eax], 0xb39898 */ W32((u32)(r_eax), 0xb39898u);
    /* 00697331: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00697338: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x69733du); f_008171e8();
    /* 0069733d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00697340: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697342: jne 0x697354 */ if (!fZ) goto L_00697354;
L_00697344:; BB(0x00697344);
    /* 00697344: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697347: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0069734e: mov esp, ebp */ r_esp = r_ebp;
    /* 00697350: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697351: ret 4 */ FN_RET(0x006972fc); r_esp += 8; return;
L_00697354:; BB(0x00697354);
    /* 00697354: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00697357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697358: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x69735du); f_005c2f74();
    /* 0069735d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069735e: jmp 0x697344 */ goto L_00697344;
}

void f_00697360(void) /* sub_697360 */
{
    FN_ENTER(0x00697360);
    /* 00697360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697361: mov ebp, esp */ r_ebp = r_esp;
    /* 00697363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697365: push 0x8eb528 */ { u32 v = 0x8eb528u; r_esp -= 4; W32(r_esp, v); }
    /* 0069736a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697371: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697378: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069737b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069737e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00697381: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00697384: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00697387: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0069738a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0069738d: mov eax, ecx */ r_eax = r_ecx;
    /* 0069738f: mov dword ptr [eax], 0xb398a8 */ W32((u32)(r_eax), 0xb398a8u);
    /* 00697395: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0069739c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6973a1u); f_008171e8();
    /* 006973a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006973a4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006973a6: jne 0x6973b8 */ if (!fZ) goto L_006973b8;
L_006973a8:; BB(0x006973a8);
    /* 006973a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006973ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006973b2: mov esp, ebp */ r_esp = r_ebp;
    /* 006973b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006973b5: ret 4 */ FN_RET(0x00697360); r_esp += 8; return;
L_006973b8:; BB(0x006973b8);
    /* 006973b8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006973bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006973bc: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6973c1u); f_005c2f74();
    /* 006973c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006973c2: jmp 0x6973a8 */ goto L_006973a8;
}

void f_006973c4(void) /* sub_6973C4 */
{
    FN_ENTER(0x006973c4);
    /* 006973c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006973c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006973c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006973c9: push 0x8eb544 */ { u32 v = 0x8eb544u; r_esp -= 4; W32(r_esp, v); }
    /* 006973ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006973d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006973d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006973dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006973df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006973e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006973e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006973e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006973eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006973ee: mov dword ptr [ecx], 0xb398b8 */ W32((u32)(r_ecx), 0xb398b8u);
    /* 006973f4: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006973f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006973fe: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x697403u); f_008171e8();
    /* 00697403: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00697406: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697408: jne 0x69741a */ if (!fZ) goto L_0069741a;
L_0069740a:; BB(0x0069740a);
    /* 0069740a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069740d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697414: mov esp, ebp */ r_esp = r_ebp;
    /* 00697416: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697417: ret 4 */ FN_RET(0x006973c4); r_esp += 8; return;
L_0069741a:; BB(0x0069741a);
    /* 0069741a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0069741d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069741e: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x697423u); f_005c2f74();
    /* 00697423: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697424: jmp 0x69740a */ goto L_0069740a;
}

void f_00697428(void) /* sub_697428 */
{
    FN_ENTER(0x00697428);
    /* 00697428: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069742a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069742c: je 0x697435 */ if (fZ) goto L_00697435;
L_0069742e:; BB(0x0069742e);
    /* 0069742e: mov edx, 1 */ r_edx = 0x1u;
    /* 00697433: jmp 0x697437 */ goto L_00697437;
L_00697435:; BB(0x00697435);
    /* 00697435: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00697437:; BB(0x00697437);
    /* 00697437: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697439: je 0x697441 */ if (fZ) goto L_00697441;
L_0069743b:; BB(0x0069743b);
    /* 0069743b: mov eax, 1 */ r_eax = 0x1u;
    /* 00697440: ret  */ FN_RET(0x00697428); r_esp += 4; return;
L_00697441:; BB(0x00697441);
    /* 00697441: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00697443: je 0x69744c */ if (fZ) goto L_0069744c;
L_00697445:; BB(0x00697445);
    /* 00697445: mov edx, 1 */ r_edx = 0x1u;
    /* 0069744a: jmp 0x69744e */ goto L_0069744e;
L_0069744c:; BB(0x0069744c);
    /* 0069744c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0069744e:; BB(0x0069744e);
    /* 0069744e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697450: je 0x697458 */ if (fZ) goto L_00697458;
L_00697452:; BB(0x00697452);
    /* 00697452: mov eax, 2 */ r_eax = 0x2u;
    /* 00697457: ret  */ FN_RET(0x00697428); r_esp += 4; return;
L_00697458:; BB(0x00697458);
    /* 00697458: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069745a: je 0x697463 */ if (fZ) goto L_00697463;
L_0069745c:; BB(0x0069745c);
    /* 0069745c: mov edx, 1 */ r_edx = 0x1u;
    /* 00697461: jmp 0x697465 */ goto L_00697465;
L_00697463:; BB(0x00697463);
    /* 00697463: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00697465:; BB(0x00697465);
    /* 00697465: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697467: je 0x69746f */ if (fZ) goto L_0069746f;
L_00697469:; BB(0x00697469);
    /* 00697469: mov eax, 3 */ r_eax = 0x3u;
    /* 0069746e: ret  */ FN_RET(0x00697428); r_esp += 4; return;
L_0069746f:; BB(0x0069746f);
    /* 0069746f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00697471: je 0x69747a */ if (fZ) goto L_0069747a;
L_00697473:; BB(0x00697473);
    /* 00697473: mov eax, 1 */ r_eax = 0x1u;
    /* 00697478: jmp 0x69747c */ goto L_0069747c;
L_0069747a:; BB(0x0069747a);
    /* 0069747a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069747c:; BB(0x0069747c);
    /* 0069747c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069747e: je 0x697486 */ if (fZ) goto L_00697486;
L_00697480:; BB(0x00697480);
    /* 00697480: mov eax, 4 */ r_eax = 0x4u;
    /* 00697485: ret  */ FN_RET(0x00697428); r_esp += 4; return;
L_00697486:; BB(0x00697486);
    /* 00697486: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697488: ret  */ FN_RET(0x00697428); r_esp += 4; return;
}

void f_0069748c(void) /* sub_69748C */
{
    FN_ENTER(0x0069748c);
    /* 0069748c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069748d: mov ebp, esp */ r_ebp = r_esp;
    /* 0069748f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697491: push 0x8eb56c */ { u32 v = 0x8eb56cu; r_esp -= 4; W32(r_esp, v); }
    /* 00697496: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0069749c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069749d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006974a4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006974a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006974aa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006974ad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006974b0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006974b3: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006974b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006974b8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6974bdu); f_0068d5a8();
    /* 006974bd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006974c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006974c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006974c5: je 0x69753d */ if (fZ) goto L_0069753d;
L_006974c7:; BB(0x006974c7);
    /* 006974c7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006974ce: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006974d0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6974d5u); f_005caba4();
    /* 006974d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006974d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006974db: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006974de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006974e0: je 0x697536 */ if (fZ) goto L_00697536;
L_006974e2:; BB(0x006974e2);
    /* 006974e2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006974e9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006974f0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006974f3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006974f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006974f7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6974fcu); f_008193cc();
    /* 006974fc: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 006974ff: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 00697503: movzx esi, word ptr [ebp + 8] */ r_esi = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697507: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 0069750a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069750c: mov byte ptr [edi + 0x1d], dl */ W8((u32)(r_edi+0x1du), (u8)r_edx);
    /* 0069750f: mov dword ptr [edi], 0xb39878 */ W32((u32)(r_edi), 0xb39878u);
    /* 00697515: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00697518: mov word ptr [edi + 0x1e], si */ W16((u32)(r_edi+0x1eu), (u16)r_esi);
    /* 0069751c: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_0069751f:; BB(0x0069751f);
    /* 0069751f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00697522: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697525: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697528: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0069752b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697532: mov esp, ebp */ r_esp = r_ebp;
    /* 00697534: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697535: ret  */ FN_RET(0x0069748c); r_esp += 4; return;
L_00697536:; BB(0x00697536);
    /* 00697536: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697538: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0069753b: jmp 0x69751f */ goto L_0069751f;
L_0069753d:; BB(0x0069753d);
    /* 0069753d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069753f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697542: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697549: mov esp, ebp */ r_esp = r_ebp;
    /* 0069754b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069754c: ret  */ FN_RET(0x0069748c); r_esp += 4; return;
}

void f_00697550(void) /* sub_697550 */
{
    FN_ENTER(0x00697550);
    /* 00697550: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00697553: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00697558: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0069755b: ret  */ FN_RET(0x00697550); r_esp += 4; return;
}

void f_0069755c(void) /* sub_69755C */
{
    FN_ENTER(0x0069755c);
    /* 0069755c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069755d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069755e: mov esi, ecx */ r_esi = r_ecx;
    /* 00697560: movzx eax, word ptr [esi + 0x1e] */ r_eax = (u32)R16((u32)(r_esi+0x1eu));
    /* 00697564: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697565: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69756au); f_0068d5a8();
    /* 0069756a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069756c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069756f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697571: je 0x6976a3 */ if (fZ) goto L_006976a3;
L_00697577:; BB(0x00697577);
    /* 00697577: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00697579: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x69757eu); f_008173b4();
    /* 0069757e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697580: je 0x6976a3 */ if (fZ) goto L_006976a3;
L_00697586:; BB(0x00697586);
    /* 00697586: mov ecx, esi */ r_ecx = r_esi;
    /* 00697588: call 0x6976a8 */ r_esp -= 4; W32(r_esp, 0x69758du); f_006976a8();
    /* 0069758d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00697590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697592: je 0x6976a3 */ if (fZ) goto L_006976a3;
L_00697598:; BB(0x00697598);
    /* 00697598: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0069759a: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x69759fu); f_00689b44();
    /* 0069759f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006975a1: jne 0x6976a3 */ if (!fZ) goto L_006976a3;
L_006975a7:; BB(0x006975a7);
    /* 006975a7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6975acu); f_0082d7b0();
    /* 006975ac: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6975b1u); f_0082dbac();
    /* 006975b1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006975b6: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006975bb: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 006975c0: mov ecx, 0x9b97a8 */ r_ecx = 0x9b97a8u;
    /* 006975c5: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 006975ca: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 006975cf: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 006975d4: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 006975d9: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 006975de: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 006975e3: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 006975e8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6975edu); f_00829cc8();
    /* 006975ed: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006975f2: or eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006975f5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006975fa: add ebp, 0x920 */ {  u32 a = r_ebp; u32 b = 0x920u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00697600: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00697602: mov edx, ebp */ r_edx = r_ebp;
    /* 00697604: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x697609u); f_008316b4();
    /* 00697609: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0069760e: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00697614: add edx, dword ptr [esi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697617: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00697619: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x69761eu); f_0082d8bc();
    /* 0069761e: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00697623: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 00697628: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 0069762d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0069762f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x697634u); f_0082fa0c();
    /* 00697634: mov ecx, esi */ r_ecx = r_esi;
    /* 00697636: call 0x6976a8 */ r_esp -= 4; W32(r_esp, 0x69763bu); f_006976a8();
    /* 0069763b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069763e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697640: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697642: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697644: lea edx, [eax + eax + 0x93c900] */ r_edx = (u32)(r_eax+r_eax+0x93c900u);
    /* 0069764b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0069764c: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x697651u); f_0082d710();
    /* 00697651: push dword ptr [0xaab330] */ { u32 v = R32((u32)(0xaab330u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697657: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x69765cu); f_0082e1e8();
    /* 0069765c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069765f: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 00697664: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 0069766a: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 00697670: mov ebp, dword ptr [0xaab514] */ r_ebp = R32((u32)(0xaab514u));
    /* 00697676: mov esi, dword ptr [0xaab518] */ r_esi = R32((u32)(0xaab518u));
    /* 0069767c: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 00697681: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 00697687: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 0069768d: mov dword ptr [0xaf037c], ebp */ W32((u32)(0xaf037cu), r_ebp);
    /* 00697693: mov dword ptr [0xaf034c], esi */ W32((u32)(0xaf034cu), r_esi);
    /* 00697699: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x69769eu); f_0082dab0();
    /* 0069769e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6976a3u); f_0082da80();
L_006976a3:; BB(0x006976a3);
    /* 006976a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006976a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006976a5: ret  */ FN_RET(0x0069755c); r_esp += 4; return;
}

void f_006976a8(void) /* sub_6976A8 */
{
    FN_ENTER(0x006976a8);
    /* 006976a8: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 006976ac: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006976af: jl 0x6976b7 */ if ((fS!=fO)) goto L_006976b7;
L_006976b1:; BB(0x006976b1);
    /* 006976b1: mov byte ptr [ecx + 0x1c], 0 */ W8((u32)(r_ecx+0x1cu), 0x0u);
    /* 006976b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_006976b7:; BB(0x006976b7);
    /* 006976b7: ret  */ FN_RET(0x006976a8); r_esp += 4; return;
}

void f_006976b8(void) /* sub_6976B8 */
{
    FN_ENTER(0x006976b8);
    /* 006976b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006976b9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006976bc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006976be: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006976c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006976c2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6976c7u); f_0068d5a8();
    /* 006976c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006976c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006976ca: je 0x6976dd */ if (fZ) goto L_006976dd;
L_006976cc:; BB(0x006976cc);
    /* 006976cc: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006976d3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006976d6: jne 0x6976dd */ if (!fZ) goto L_006976dd;
L_006976d8:; BB(0x006976d8);
    /* 006976d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006976db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006976dc: ret  */ FN_RET(0x006976b8); r_esp += 4; return;
L_006976dd:; BB(0x006976dd);
    /* 006976dd: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 006976e0: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006976e6: jne 0x6976f2 */ if (!fZ) goto L_006976f2;
L_006976e8:; BB(0x006976e8);
    /* 006976e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006976ea: call 0x697714 */ r_esp -= 4; W32(r_esp, 0x6976efu); f_00697714();
    /* 006976ef: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
L_006976f2:; BB(0x006976f2);
    /* 006976f2: mov byte ptr [esp], 0x87 */ W8((u32)(r_esp), 0x87u);
    /* 006976f6: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006976fb: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 006976fe: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00697703: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00697707: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069770a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x69770fu); f_008003e0();
    /* 0069770f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00697712: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697713: ret  */ FN_RET(0x006976b8); r_esp += 4; return;
}

void f_00697714(void) /* sub_697714 */
{
    FN_ENTER(0x00697714);
    /* 00697714: fld dword ptr [0x93ca40] */ FPUSH(R_F32((u32)(0x93ca40u)));
    /* 0069771a: fld dword ptr [0x93ca38] */ FPUSH(R_F32((u32)(0x93ca38u)));
    /* 00697720: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00697723: fld dword ptr [0x93ca30] */ FPUSH(R_F32((u32)(0x93ca30u)));
    /* 00697729: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0069772b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069772d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0069772f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00697731: fmul dword ptr [0x93ca3c] */ ST(0) = ST(0) * R_F32((u32)(0x93ca3cu));
    /* 00697737: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00697739: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0069773b: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0069773e: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00697741: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 00697744: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 0069774b: lea eax, [ecx + 0x18] */ r_eax = (u32)(r_ecx+0x18u);
    /* 0069774e: lea edx, [ecx + 0x24] */ r_edx = (u32)(r_ecx+0x24u);
    /* 00697751: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00697758: mov dword ptr [ecx + 0x2c], 0xc0a00000 */ W32((u32)(r_ecx+0x2cu), 0xc0a00000u);
    /* 0069775f: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697764: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697766: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x69776bu); f_004d85bc();
    /* 0069776b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069776e: ret  */ FN_RET(0x00697714); r_esp += 4; return;
}

void f_00697770(void) /* sub_697770 */
{
    FN_ENTER(0x00697770);
    /* 00697770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697771: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697772: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697774: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00697778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697779: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69777eu); f_0068d5a8();
    /* 0069777e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069777f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697781: je 0x697792 */ if (fZ) goto L_00697792;
L_00697783:; BB(0x00697783);
    /* 00697783: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069778a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069778d: jne 0x697792 */ if (!fZ) goto L_00697792;
L_0069778f:; BB(0x0069778f);
    /* 0069778f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697791: ret  */ FN_RET(0x00697770); r_esp += 4; return;
L_00697792:; BB(0x00697792);
    /* 00697792: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00697796: mov byte ptr [esp], 0x88 */ W8((u32)(r_esp), 0x88u);
    /* 0069779a: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069779f: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006977a4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006977a7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6977acu); f_008003e0();
    /* 006977ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006977ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006977ae: ret  */ FN_RET(0x00697770); r_esp += 4; return;
}

void f_006977b0(void) /* sub_6977B0 */
{
    FN_ENTER(0x006977b0);
    /* 006977b0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006977b3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006977b7: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 006977bf: mov byte ptr [esp], 0x87 */ W8((u32)(r_esp), 0x87u);
    /* 006977c3: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006977c8: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006977ca: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006977cd: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 006977d0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006977d4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006977d7: call 0x6a9b30 */ r_esp -= 4; W32(r_esp, 0x6977dcu); f_006a9b30();
    /* 006977dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006977de: je 0x69780b */ if (fZ) goto L_0069780b;
L_006977e0:; BB(0x006977e0);
    /* 006977e0: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 006977e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006977e6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6977ebu); f_0068d5a8();
    /* 006977eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006977ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006977ee: je 0x69780b */ if (fZ) goto L_0069780b;
L_006977f0:; BB(0x006977f0);
    /* 006977f0: mov edx, dword ptr [0xa95624] */ r_edx = R32((u32)(0xa95624u));
    /* 006977f6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006977f9: jne 0x69780b */ if (!fZ) goto L_0069780b;
L_006977fb:; BB(0x006977fb);
    /* 006977fb: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006977ff: add eax, 0x688 */ {  u32 a = r_eax; u32 b = 0x688u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697804: mov ecx, eax */ r_ecx = r_eax;
    /* 00697806: call 0x697810 */ r_esp -= 4; W32(r_esp, 0x69780bu); f_00697810();
L_0069780b:; BB(0x0069780b);
    /* 0069780b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069780e: ret  */ FN_RET(0x006977b0); r_esp += 4; return;
}

void f_00697810(void) /* sub_697810 */
{
    FN_ENTER(0x00697810);
    /* 00697810: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00697814: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00697817: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069781a: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0069781d: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00697820: ret 4 */ FN_RET(0x00697810); r_esp += 8; return;
}

void f_00697824(void)
{
    FN_ENTER(0x00697824);
    /* 00697824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697825: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00697829: mov byte ptr [esp], 0x88 */ W8((u32)(r_esp), 0x88u);
    /* 0069782d: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00697832: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00697835: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00697837: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0069783a: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69783fu); f_006a9e70();
    /* 0069783f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697841: je 0x69786a */ if (fZ) goto L_0069786a;
L_00697843:; BB(0x00697843);
    /* 00697843: movzx eax, word ptr [esp + 2] */ r_eax = (u32)R16((u32)(r_esp+0x2u));
    /* 00697848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697849: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x69784eu); f_0068d5a8();
    /* 0069784e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069784f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697851: je 0x69786a */ if (fZ) goto L_0069786a;
L_00697853:; BB(0x00697853);
    /* 00697853: mov edx, dword ptr [0xa95624] */ r_edx = R32((u32)(0xa95624u));
    /* 00697859: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069785c: jne 0x69786a */ if (!fZ) goto L_0069786a;
L_0069785e:; BB(0x0069785e);
    /* 0069785e: add eax, 0x688 */ {  u32 a = r_eax; u32 b = 0x688u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697863: mov ecx, eax */ r_ecx = r_eax;
    /* 00697865: call 0x69786c */ r_esp -= 4; W32(r_esp, 0x69786au); f_0069786c();
L_0069786a:; BB(0x0069786a);
    /* 0069786a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069786b: ret  */ FN_RET(0x00697824); r_esp += 4; return;
}

void f_0069786c(void) /* sub_69786C */
{
    FN_ENTER(0x0069786c);
    /* 0069786c: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0069786f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697872: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00697875: ret  */ FN_RET(0x0069786c); r_esp += 4; return;
}

void f_00697878(void) /* sub_697878 */
{
    FN_ENTER(0x00697878);
    /* 00697878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00697879: mov edi, ecx */ r_edi = r_ecx;
    /* 0069787b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069787f: mov ecx, edi */ r_ecx = r_edi;
    /* 00697881: call 0x69788c */ r_esp -= 4; W32(r_esp, 0x697886u); f_0069788c();
    /* 00697886: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00697888: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697889: ret 4 */ FN_RET(0x00697878); r_esp += 8; return;
}

void f_0069788c(void) /* sub_69788C */
{
    FN_ENTER(0x0069788c);
    /* 0069788c: push dword ptr [0xa94300] */ { u32 v = R32((u32)(0xa94300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697892: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697896: call 0x6978a0 */ r_esp -= 4; W32(r_esp, 0x69789bu); f_006978a0();
    /* 0069789b: ret 4 */ FN_RET(0x0069788c); r_esp += 8; return;
}

void f_006978a0(void) /* sub_6978A0 */
{
    FN_ENTER(0x006978a0);
    /* 006978a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006978a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006978a2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006978a4: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006978a8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006978ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006978af: call 0x690344 */ r_esp -= 4; W32(r_esp, 0x6978b4u); f_00690344();
    /* 006978b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006978b6: je 0x6978c6 */ if (fZ) goto L_006978c6;
L_006978b8:; BB(0x006978b8);
    /* 006978b8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006978bb: fmul dword ptr [0x93ca20] */ ST(0) = ST(0) * R_F32((u32)(0x93ca20u));
    /* 006978c1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006978c4: jmp 0x6978d9 */ goto L_006978d9;
L_006978c6:; BB(0x006978c6);
    /* 006978c6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006978c9: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006978cb: je 0x6978d9 */ if (fZ) goto L_006978d9;
L_006978cd:; BB(0x006978cd);
    /* 006978cd: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006978d0: fmul dword ptr [0x93ca24] */ ST(0) = ST(0) * R_F32((u32)(0x93ca24u));
    /* 006978d6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006978d9:; BB(0x006978d9);
    /* 006978d9: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006978dc: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006978e0: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 006978e3: mov edx, dword ptr [eax + 0x68c] */ r_edx = R32((u32)(r_eax+0x68cu));
    /* 006978e9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006978ec: je 0x6978f5 */ if (fZ) goto L_006978f5;
L_006978ee:; BB(0x006978ee);
    /* 006978ee: mov eax, 1 */ r_eax = 0x1u;
    /* 006978f3: jmp 0x6978f7 */ goto L_006978f7;
L_006978f5:; BB(0x006978f5);
    /* 006978f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006978f7:; BB(0x006978f7);
    /* 006978f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006978f9: je 0x69790b */ if (fZ) goto L_0069790b;
L_006978fb:; BB(0x006978fb);
    /* 006978fb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006978ff: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00697902: fmul dword ptr [eax + 0x690] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x690u));
    /* 00697908: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0069790b:; BB(0x0069790b);
    /* 0069790b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0069790e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069790f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697910: ret 8 */ FN_RET(0x006978a0); r_esp += 12; return;
}

void f_00697914(void) /* sub_697914 */
{
    FN_ENTER(0x00697914);
    /* 00697914: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00697915: mov edi, ecx */ r_edi = r_ecx;
    /* 00697917: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069791b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069791f: mov ecx, edi */ r_ecx = r_edi;
    /* 00697921: call 0x6978a0 */ r_esp -= 4; W32(r_esp, 0x697926u); f_006978a0();
    /* 00697926: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 00697928: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697929: ret 8 */ FN_RET(0x00697914); r_esp += 12; return;
}

void f_0069792c(void) /* sub_69792C */
{
    FN_ENTER(0x0069792c);
    /* 0069792c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00697930: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00697932: jl 0x697939 */ if ((fS!=fO)) goto L_00697939;
L_00697934:; BB(0x00697934);
    /* 00697934: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00697937: jl 0x69793e */ if ((fS!=fO)) goto L_0069793e;
L_00697939:; BB(0x00697939);
    /* 00697939: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069793b: ret 4 */ FN_RET(0x0069792c); r_esp += 8; return;
L_0069793e:; BB(0x0069793e);
    /* 0069793e: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00697941: ret 4 */ FN_RET(0x0069792c); r_esp += 8; return;
}

void f_00697944(void) /* sub_697944 */
{
    FN_ENTER(0x00697944);
    /* 00697944: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00697948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069794a: jl 0x697951 */ if ((fS!=fO)) goto L_00697951;
L_0069794c:; BB(0x0069794c);
    /* 0069794c: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069794f: jle 0x697953 */ if ((fZ||fS!=fO)) goto L_00697953;
L_00697951:; BB(0x00697951);
    /* 00697951: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00697953:; BB(0x00697953);
    /* 00697953: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00697955: ret 4 */ FN_RET(0x00697944); r_esp += 8; return;
}

void f_00697958(void) /* sub_697958 */
{
    FN_ENTER(0x00697958);
    /* 00697958: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069795a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0069795c: jl 0x697963 */ if ((fS!=fO)) goto L_00697963;
L_0069795e:; BB(0x0069795e);
    /* 0069795e: cmp eax, 0x63 */ {  u32 a = r_eax; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00697961: jle 0x697965 */ if ((fZ||fS!=fO)) goto L_00697965;
L_00697963:; BB(0x00697963);
    /* 00697963: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00697965:; BB(0x00697965);
    /* 00697965: ret  */ FN_RET(0x00697958); r_esp += 4; return;
}

void f_00697968(void) /* sub_697968 */
{
    FN_ENTER(0x00697968);
    /* 00697968: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069796a: sub eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069796e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697970: jl 0x69797c */ if ((fS!=fO)) goto L_0069797c;
L_00697972:; BB(0x00697972);
    /* 00697972: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00697974: mov eax, 1 */ r_eax = 0x1u;
    /* 00697979: ret 4 */ FN_RET(0x00697968); r_esp += 8; return;
L_0069797c:; BB(0x0069797c);
    /* 0069797c: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00697982: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697984: ret 4 */ FN_RET(0x00697968); r_esp += 8; return;
}

void f_00697988(void) /* sub_697988 */
{
    FN_ENTER(0x00697988);
    /* 00697988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697989: mov ebp, esp */ r_ebp = r_esp;
    /* 0069798b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0069798d: push 0x8eb594 */ { u32 v = 0x8eb594u; r_esp -= 4; W32(r_esp, v); }
    /* 00697992: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697999: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006979a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006979a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006979a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006979a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006979ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006979af: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006979b2: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006979b8: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006979be: je 0x6979c7 */ if (fZ) goto L_006979c7;
L_006979c0:; BB(0x006979c0);
    /* 006979c0: mov eax, 1 */ r_eax = 0x1u;
    /* 006979c5: jmp 0x6979c9 */ goto L_006979c9;
L_006979c7:; BB(0x006979c7);
    /* 006979c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006979c9:; BB(0x006979c9);
    /* 006979c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006979cb: jne 0x6979e1 */ if (!fZ) goto L_006979e1;
L_006979cd:; BB(0x006979cd);
    /* 006979cd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006979d0: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006979d7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006979da: je 0x6979e1 */ if (fZ) goto L_006979e1;
L_006979dc:; BB(0x006979dc);
    /* 006979dc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006979df: jne 0x6979fe */ if (!fZ) goto L_006979fe;
L_006979e1:; BB(0x006979e1);
    /* 006979e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006979e4: and edx, 0xffff7fff */ {  u32 a = r_edx; u32 b = 0xffff7fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006979ea: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
    /* 006979f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006979f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006979fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006979fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006979fd: ret  */ FN_RET(0x00697988); r_esp += 4; return;
L_006979fe:; BB(0x006979fe);
    /* 006979fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00697a05: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00697a07: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x697a0cu); f_005caba4();
    /* 00697a0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697a0d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00697a10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697a12: je 0x697a3e */ if (fZ) goto L_00697a3e;
L_00697a14:; BB(0x00697a14);
    /* 00697a14: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00697a1b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697a22: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00697a25: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00697a29: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697a2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00697a2c: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697a32: call 0x697a50 */ r_esp -= 4; W32(r_esp, 0x697a37u); f_00697a50();
    /* 00697a37: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00697a3e:; BB(0x00697a3e);
    /* 00697a3e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00697a41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697a44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697a4b: mov esp, ebp */ r_esp = r_ebp;
    /* 00697a4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697a4e: ret  */ FN_RET(0x00697988); r_esp += 4; return;
}

void f_00697a50(void) /* sub_697A50 */
{
    FN_ENTER(0x00697a50);
    /* 00697a50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697a51: mov ebp, esp */ r_ebp = r_esp;
    /* 00697a53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697a55: push 0x8eb5b0 */ { u32 v = 0x8eb5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00697a5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697a60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697a61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697a68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697a6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697a6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00697a71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00697a74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00697a77: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00697a7b: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00697a7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697a7f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697a82: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00697a85: call 0x697b00 */ r_esp -= 4; W32(r_esp, 0x697a8au); f_00697b00();
    /* 00697a8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697a91: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697a94: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00697a97: mov dword ptr [ecx], 0xb398c8 */ W32((u32)(r_ecx), 0xb398c8u);
    /* 00697a9d: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00697aa1: call 0x697b2c */ r_esp -= 4; W32(r_esp, 0x697aa6u); f_00697b2c();
    /* 00697aa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697aa8: je 0x697ac9 */ if (fZ) goto L_00697ac9;
L_00697aaa:; BB(0x00697aaa);
    /* 00697aaa: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00697aaf: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697ab5: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x697abau); f_00509590();
    /* 00697aba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697abd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697abf: je 0x697ade */ if (fZ) goto L_00697ade;
L_00697ac1:; BB(0x00697ac1);
    /* 00697ac1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697ac4: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00697ac7: jmp 0x697acc */ goto L_00697acc;
L_00697ac9:; BB(0x00697ac9);
    /* 00697ac9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
L_00697acc:; BB(0x00697acc);
    /* 00697acc: mov eax, edx */ r_eax = r_edx;
    /* 00697ace: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697ad1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697ad8: mov esp, ebp */ r_esp = r_ebp;
    /* 00697ada: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697adb: ret 8 */ FN_RET(0x00697a50); r_esp += 12; return;
L_00697ade:; BB(0x00697ade);
    /* 00697ade: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697ae1: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00697ae5: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697aeb: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00697aef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697af2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697af9: mov esp, ebp */ r_esp = r_ebp;
    /* 00697afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697afc: ret 8 */ FN_RET(0x00697a50); r_esp += 12; return;
}

void f_00697b00(void) /* sub_697B00 */
{
    FN_ENTER(0x00697b00);
    /* 00697b00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697b01: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00697b03: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697b07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697b09: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x697b0eu); f_008193cc();
    /* 00697b0e: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00697b13: mov dword ptr [ebx], 0xb39888 */ W32((u32)(r_ebx), 0xb39888u);
    /* 00697b19: mov word ptr [ebx + 0x1c], dx */ W16((u32)(r_ebx+0x1cu), (u16)r_edx);
    /* 00697b1d: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 00697b24: mov eax, ebx */ r_eax = r_ebx;
    /* 00697b26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697b27: ret 8 */ FN_RET(0x00697b00); r_esp += 12; return;
}

void f_00697b2c(void) /* sub_697B2C */
{
    FN_ENTER(0x00697b2c);
    /* 00697b2c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00697b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697b31: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697b36u); f_0068d5a8();
    /* 00697b36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697b37: ret  */ FN_RET(0x00697b2c); r_esp += 4; return;
}

void f_00697b38(void) /* sub_697B38 */
{
    FN_ENTER(0x00697b38);
    /* 00697b38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00697b39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697b3a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697b3d: mov edi, ecx */ r_edi = r_ecx;
    /* 00697b3f: mov ecx, edi */ r_ecx = r_edi;
    /* 00697b41: call 0x697b2c */ r_esp -= 4; W32(r_esp, 0x697b46u); f_00697b2c();
    /* 00697b46: mov ebx, eax */ r_ebx = r_eax;
    /* 00697b48: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697b4a: je 0x697baa */ if (fZ) goto L_00697baa;
L_00697b4c:; BB(0x00697b4c);
    /* 00697b4c: mov edx, dword ptr [ebx + 0x328] */ r_edx = R32((u32)(r_ebx+0x328u));
    /* 00697b52: test edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697b58: je 0x697baa */ if (fZ) goto L_00697baa;
L_00697b5a:; BB(0x00697b5a);
    /* 00697b5a: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x697b5fu); f_00807d60();
    /* 00697b5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697b61: je 0x697baa */ if (fZ) goto L_00697baa;
L_00697b63:; BB(0x00697b63);
    /* 00697b63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697b65: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x697b6au); f_006877b0();
    /* 00697b6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697b6c: je 0x697baa */ if (fZ) goto L_00697baa;
L_00697b6e:; BB(0x00697b6e);
    /* 00697b6e: mov ecx, edi */ r_ecx = r_edi;
    /* 00697b70: call 0x697268 */ r_esp -= 4; W32(r_esp, 0x697b75u); f_00697268();
    /* 00697b75: mov edi, eax */ r_edi = r_eax;
    /* 00697b77: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697b79: je 0x697ba4 */ if (fZ) goto L_00697ba4;
L_00697b7b:; BB(0x00697b7b);
    /* 00697b7b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00697b7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697b7f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00697b81: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00697b83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697b85: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x697b8bu); call_ind(t); }
    /* 00697b8b: fld dword ptr [0x93ca1c] */ FPUSH(R_F32((u32)(0x93ca1cu)));
    /* 00697b91: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00697b95: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00697b99: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00697b9c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697b9d: mov ecx, edi */ r_ecx = r_edi;
    /* 00697b9f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x697ba4u); f_00508db8();
L_00697ba4:; BB(0x00697ba4);
    /* 00697ba4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00697ba7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697ba8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697ba9: ret  */ FN_RET(0x00697b38); r_esp += 4; return;
L_00697baa:; BB(0x00697baa);
    /* 00697baa: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00697bae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00697bb3: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00697bb7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00697bba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697bbb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697bbc: ret  */ FN_RET(0x00697b38); r_esp += 4; return;
}

void f_00697bc0(void) /* sub_697BC0 */
{
    FN_ENTER(0x00697bc0);
    /* 00697bc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697bc1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697bc3: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00697bc6: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697bc9: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00697bcc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697bce: jl 0x697bd2 */ if ((fS!=fO)) goto L_00697bd2;
L_00697bd0:; BB(0x00697bd0);
    /* 00697bd0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697bd1: ret  */ FN_RET(0x00697bc0); r_esp += 4; return;
L_00697bd2:; BB(0x00697bd2);
    /* 00697bd2: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00697bd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697bd7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697bdcu); f_0068d5a8();
    /* 00697bdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697bdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697bdf: je 0x697c03 */ if (fZ) goto L_00697c03;
L_00697be1:; BB(0x00697be1);
    /* 00697be1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00697be3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00697be5: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697bea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697beb: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x697bf0u); f_0050b7a4();
    /* 00697bf0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697bf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697bf5: je 0x697c03 */ if (fZ) goto L_00697c03;
L_00697bf7:; BB(0x00697bf7);
    /* 00697bf7: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00697bfb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697bfc: mov ecx, eax */ r_ecx = r_eax;
    /* 00697bfe: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x697c03u); f_00508f14();
L_00697c03:; BB(0x00697c03);
    /* 00697c03: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697c07: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697c0c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00697c10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697c11: ret  */ FN_RET(0x00697bc0); r_esp += 4; return;
}

void f_00697c14(void) /* sub_697C14 */
{
    FN_ENTER(0x00697c14);
    /* 00697c14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697c15: mov ebp, esp */ r_ebp = r_esp;
    /* 00697c17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697c19: push 0x8eb5d8 */ { u32 v = 0x8eb5d8u; r_esp -= 4; W32(r_esp, v); }
    /* 00697c1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697c24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697c25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697c2c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697c2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697c32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00697c35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00697c38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00697c3b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00697c3d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00697c44: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x697c49u); f_005caba4();
    /* 00697c49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697c4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00697c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697c4f: je 0x697c79 */ if (fZ) goto L_00697c79;
L_00697c51:; BB(0x00697c51);
    /* 00697c51: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00697c58: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697c5f: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697c63: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697c66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697c67: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697c6d: call 0x697c88 */ r_esp -= 4; W32(r_esp, 0x697c72u); f_00697c88();
    /* 00697c72: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00697c79:; BB(0x00697c79);
    /* 00697c79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697c7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697c83: mov esp, ebp */ r_esp = r_ebp;
    /* 00697c85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697c86: ret  */ FN_RET(0x00697c14); r_esp += 4; return;
}

void f_00697c88(void) /* sub_697C88 */
{
    FN_ENTER(0x00697c88);
    /* 00697c88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697c89: mov ebp, esp */ r_ebp = r_esp;
    /* 00697c8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697c8d: push 0x8eb5f4 */ { u32 v = 0x8eb5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00697c92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697c98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697c99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697ca0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697ca3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697ca6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00697ca9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00697cac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00697caf: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00697cb3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697cb6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00697cb9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00697cbc: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x697cc1u); f_008193cc();
    /* 00697cc1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697cc8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697ccb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00697cce: mov dword ptr [eax], 0xb398d8 */ W32((u32)(r_eax), 0xb398d8u);
    /* 00697cd4: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 00697cd8: mov dword ptr [eax + 0x20], 0xa */ W32((u32)(r_eax+0x20u), 0xau);
    /* 00697cdf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697ce0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697ce5u); f_0068d5a8();
    /* 00697ce5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697ce8: je 0x697d0f */ if (fZ) goto L_00697d0f;
L_00697cea:; BB(0x00697cea);
    /* 00697cea: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00697cec: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00697cee: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00697cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697cf4: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x697cf9u); f_0050b7a4();
    /* 00697cf9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00697cfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697cfe: je 0x697d0f */ if (fZ) goto L_00697d0f;
L_00697d00:; BB(0x00697d00);
    /* 00697d00: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697d03: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00697d07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697d08: mov ecx, eax */ r_ecx = r_eax;
    /* 00697d0a: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x697d0fu); f_00508f14();
L_00697d0f:; BB(0x00697d0f);
    /* 00697d0f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00697d12: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00697d15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697d18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697d1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00697d21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697d22: ret 8 */ FN_RET(0x00697c88); r_esp += 12; return;
}

void f_00697d28(void) /* sub_697D28 */
{
    FN_ENTER(0x00697d28);
    /* 00697d28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00697d29: mov esi, ecx */ r_esi = r_ecx;
    /* 00697d2b: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00697d2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697d30: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697d35u); f_0068d5a8();
    /* 00697d35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697d38: je 0x697d5c */ if (fZ) goto L_00697d5c;
L_00697d3a:; BB(0x00697d3a);
    /* 00697d3a: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 00697d40: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697d42: jne 0x697d5c */ if (!fZ) goto L_00697d5c;
L_00697d44:; BB(0x00697d44);
    /* 00697d44: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00697d47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697d49: je 0x697d4f */ if (fZ) goto L_00697d4f;
L_00697d4b:; BB(0x00697d4b);
    /* 00697d4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697d4c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x697d4eu); call_ind(t); }
    /* 00697d4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00697d4f:; BB(0x00697d4f);
    /* 00697d4f: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00697d53: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697d58: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_00697d5c:; BB(0x00697d5c);
    /* 00697d5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00697d5d: ret  */ FN_RET(0x00697d28); r_esp += 4; return;
}

void f_00697d60(void) /* sub_697D60 */
{
    FN_ENTER(0x00697d60);
    /* 00697d60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697d61: mov ebp, esp */ r_ebp = r_esp;
    /* 00697d63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697d65: push 0x8eb61c */ { u32 v = 0x8eb61cu; r_esp -= 4; W32(r_esp, v); }
    /* 00697d6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697d70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697d71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697d78: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697d7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697d7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00697d81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00697d84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00697d87: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00697d89: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00697d90: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x697d95u); f_005caba4();
    /* 00697d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697d96: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00697d99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697d9b: je 0x697dd3 */ if (fZ) goto L_00697dd3;
L_00697d9d:; BB(0x00697d9d);
    /* 00697d9d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00697da4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697dab: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00697dae: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697db2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697db5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697db6: call 0x697dd8 */ r_esp -= 4; W32(r_esp, 0x697dbbu); f_00697dd8();
    /* 00697dbb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697dbe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00697dc5:; BB(0x00697dc5);
    /* 00697dc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697dc8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697dcf: mov esp, ebp */ r_esp = r_ebp;
    /* 00697dd1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697dd2: ret  */ FN_RET(0x00697d60); r_esp += 4; return;
L_00697dd3:; BB(0x00697dd3);
    /* 00697dd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697dd5: jmp 0x697dc5 */ goto L_00697dc5;
}

void f_00697dd8(void) /* sub_697DD8 */
{
    FN_ENTER(0x00697dd8);
    /* 00697dd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00697dd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00697ddb: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697de1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00697de3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x697de8u); f_008193cc();
    /* 00697de8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00697ded: mov dword ptr [ebx], 0xb39898 */ W32((u32)(r_ebx), 0xb39898u);
    /* 00697df3: mov edx, dword ptr [0x9cb9c4] */ r_edx = R32((u32)(0x9cb9c4u));
    /* 00697df9: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00697dfc: mov word ptr [ebx + 0x1c], ax */ W16((u32)(r_ebx+0x1cu), (u16)r_eax);
    /* 00697e00: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00697e04: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00697e07: mov eax, ebx */ r_eax = r_ebx;
    /* 00697e09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00697e0a: ret 8 */ FN_RET(0x00697dd8); r_esp += 12; return;
}

void f_00697e10(void) /* sub_697E10 */
{
    FN_ENTER(0x00697e10);
    /* 00697e10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00697e11: mov edi, ecx */ r_edi = r_ecx;
    /* 00697e13: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00697e17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697e18: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697e1du); f_0068d5a8();
    /* 00697e1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697e20: je 0x697e3a */ if (fZ) goto L_00697e3a;
L_00697e22:; BB(0x00697e22);
    /* 00697e22: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00697e25: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697e27: je 0x697e2d */ if (fZ) goto L_00697e2d;
L_00697e29:; BB(0x00697e29);
    /* 00697e29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697e2a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x697e2cu); call_ind(t); }
    /* 00697e2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00697e2d:; BB(0x00697e2d);
    /* 00697e2d: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00697e31: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697e36: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_00697e3a:; BB(0x00697e3a);
    /* 00697e3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00697e3b: ret  */ FN_RET(0x00697e10); r_esp += 4; return;
}

void f_00697e3c(void) /* sub_697E3C */
{
    FN_ENTER(0x00697e3c);
    /* 00697e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697e3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00697e3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00697e41: push 0x8eb644 */ { u32 v = 0x8eb644u; r_esp -= 4; W32(r_esp, v); }
    /* 00697e46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00697e4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697e4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00697e54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00697e57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00697e5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00697e5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00697e60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00697e63: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00697e65: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00697e6c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x697e71u); f_005caba4();
    /* 00697e71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697e72: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00697e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697e77: je 0x697eb4 */ if (fZ) goto L_00697eb4;
L_00697e79:; BB(0x00697e79);
    /* 00697e79: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00697e80: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00697e87: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697e8a: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00697e8e: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697e92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697e96: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00697e97: call 0x697eb8 */ r_esp -= 4; W32(r_esp, 0x697e9cu); f_00697eb8();
    /* 00697e9c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00697e9f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00697ea6:; BB(0x00697ea6);
    /* 00697ea6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00697ea9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00697eb0: mov esp, ebp */ r_esp = r_ebp;
    /* 00697eb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697eb3: ret  */ FN_RET(0x00697e3c); r_esp += 4; return;
L_00697eb4:; BB(0x00697eb4);
    /* 00697eb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697eb6: jmp 0x697ea6 */ goto L_00697ea6;
}

void f_00697eb8(void) /* sub_697EB8 */
{
    FN_ENTER(0x00697eb8);
    /* 00697eb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697eb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697ebb: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 00697ec1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00697ec3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x697ec8u); f_008193cc();
    /* 00697ec8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00697ecd: mov dword ptr [ebp], 0xb398a8 */ W32((u32)(r_ebp), 0xb398a8u);
    /* 00697ed4: mov edx, dword ptr [0x9cb9c8] */ r_edx = R32((u32)(0x9cb9c8u));
    /* 00697eda: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00697edd: mov word ptr [ebp + 0x1c], ax */ W16((u32)(r_ebp+0x1cu), (u16)r_eax);
    /* 00697ee1: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00697ee6: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00697eea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00697eee: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00697ef1: mov eax, ebp */ r_eax = r_ebp;
    /* 00697ef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697ef4: ret 0xc */ FN_RET(0x00697eb8); r_esp += 16; return;
}

void f_00697ef8(void) /* sub_697EF8 */
{
    FN_ENTER(0x00697ef8);
    /* 00697ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00697ef9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00697efb: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00697eff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697f00: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x697f05u); f_0068d5a8();
    /* 00697f05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00697f06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697f08: je 0x697f38 */ if (fZ) goto L_00697f38;
L_00697f0a:; BB(0x00697f0a);
    /* 00697f0a: movsx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x1eu));
    /* 00697f0e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00697f11: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 00697f15: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00697f18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697f1a: jl 0x697f1e */ if ((fS!=fO)) goto L_00697f1e;
L_00697f1c:; BB(0x00697f1c);
    /* 00697f1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697f1d: ret  */ FN_RET(0x00697ef8); r_esp += 4; return;
L_00697f1e:; BB(0x00697f1e);
    /* 00697f1e: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00697f21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00697f23: je 0x697f29 */ if (fZ) goto L_00697f29;
L_00697f25:; BB(0x00697f25);
    /* 00697f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00697f26: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x697f28u); call_ind(t); }
    /* 00697f28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00697f29:; BB(0x00697f29);
    /* 00697f29: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697f2d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697f32: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00697f36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697f37: ret  */ FN_RET(0x00697ef8); r_esp += 4; return;
L_00697f38:; BB(0x00697f38);
    /* 00697f38: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00697f3c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00697f41: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00697f45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00697f46: ret  */ FN_RET(0x00697ef8); r_esp += 4; return;
}

void f_00697f48(void) /* sub_697F48 */
{
    FN_ENTER(0x00697f48);
    /* 00697f48: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00697f4e: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00697f55: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 00697f5c: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00697f63: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00697f6a: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00697f71: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 00697f78: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00697f7f: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00697f86: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00697f8d: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00697f94: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00697f9b: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 00697fa2: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 00697fa9: mov dword ptr [ecx + 0x34], 0 */ W32((u32)(r_ecx+0x34u), 0x0u);
    /* 00697fb0: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
    /* 00697fb7: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 00697fbe: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
    /* 00697fc5: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 00697fcc: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 00697fd3: mov dword ptr [ecx + 0x4c], 0 */ W32((u32)(r_ecx+0x4cu), 0x0u);
    /* 00697fda: mov dword ptr [ecx + 0x58], 0 */ W32((u32)(r_ecx+0x58u), 0x0u);
    /* 00697fe1: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 00697fe8: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00697fef: mov dword ptr [ecx + 0x5c], 0 */ W32((u32)(r_ecx+0x5cu), 0x0u);
    /* 00697ff6: mov dword ptr [ecx + 0x68], 0 */ W32((u32)(r_ecx+0x68u), 0x0u);
    /* 00697ffd: mov dword ptr [ecx + 0x64], 0 */ W32((u32)(r_ecx+0x64u), 0x0u);
    /* 00698004: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 0069800b: mov dword ptr [ecx + 0x6c], 0 */ W32((u32)(r_ecx+0x6cu), 0x0u);
    /* 00698012: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00698019: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 00698020: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 0069802a: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 00698031: ret  */ FN_RET(0x00697f48); r_esp += 4; return;
}

