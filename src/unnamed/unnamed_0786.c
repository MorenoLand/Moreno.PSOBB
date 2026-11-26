#include "protos.h"

void f_00786074(void) /* sub_786074 */
{
    FN_ENTER(0x00786074);
    /* 00786074: mov ecx, dword ptr [0xa9c20c] */ r_ecx = R32((u32)(0xa9c20cu));
    /* 0078607a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078607c: je 0x78608d */ if (fZ) goto L_0078608d;
L_0078607e:; BB(0x0078607e);
    /* 0078607e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x786083u); f_00829de0();
    /* 00786083: mov dword ptr [0xa9c20c], 0 */ W32((u32)(0xa9c20cu), 0x0u);
L_0078608d:; BB(0x0078608d);
    /* 0078608d: ret  */ FN_RET(0x00786074); r_esp += 4; return;
}

void f_00786090(void) /* sub_786090 */
{
    FN_ENTER(0x00786090);
    /* 00786090: mov eax, 0x9f9cf8 */ r_eax = 0x9f9cf8u;
    /* 00786095: mov dword ptr [0xa9c20c], eax */ W32((u32)(0xa9c20cu), r_eax);
    /* 0078609a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078609b: push 0x979db4 */ { u32 v = 0x979db4u; r_esp -= 4; W32(r_esp, v); }
    /* 007860a0: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x7860a5u); f_0081a7d8();
    /* 007860a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007860a8: ret  */ FN_RET(0x00786090); r_esp += 4; return;
}

void f_007860ac(void) /* sub_7860AC */
{
    FN_ENTER(0x007860ac);
    /* 007860ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007860ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007860af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007860b1: call 0x7860d0 */ r_esp -= 4; W32(r_esp, 0x7860b6u); f_007860d0();
    /* 007860b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007860ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007860bc: jne 0x7860c2 */ if (!fZ) goto L_007860c2;
L_007860be:; BB(0x007860be);
    /* 007860be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007860bf: ret 4 */ FN_RET(0x007860ac); r_esp += 8; return;
L_007860c2:; BB(0x007860c2);
    /* 007860c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007860c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7860c8u); f_005c2f74();
    /* 007860c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007860c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007860ca: ret 4 */ FN_RET(0x007860ac); r_esp += 8; return;
}

void f_007860d0(void) /* sub_7860D0 */
{
    FN_ENTER(0x007860d0);
    /* 007860d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007860d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007860d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007860d5: push 0x8f48d8 */ { u32 v = 0x8f48d8u; r_esp -= 4; W32(r_esp, v); }
    /* 007860da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007860e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007860e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007860e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007860eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007860ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007860f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007860f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007860f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007860fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007860fd: mov dword ptr [ecx], 0xb44ad0 */ W32((u32)(r_ecx), 0xb44ad0u);
    /* 00786103: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078610a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78610fu); f_008171e8();
    /* 0078610f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00786112: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00786119: mov esp, ebp */ r_esp = r_ebp;
    /* 0078611b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078611c: ret  */ FN_RET(0x007860d0); r_esp += 4; return;
}

void f_00786120(void) /* sub_786120 */
{
    FN_ENTER(0x00786120);
    /* 00786120: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00786121: mov esi, ecx */ r_esi = r_ecx;
    /* 00786123: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00786127: mov ecx, esi */ r_ecx = r_esi;
    /* 00786129: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78612eu); f_008193cc();
    /* 0078612e: mov dword ptr [esi], 0xb44ad0 */ W32((u32)(r_esi), 0xb44ad0u);
    /* 00786134: mov eax, dword ptr [0x9f9d04] */ r_eax = R32((u32)(0x9f9d04u));
    /* 00786139: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0078613c: mov eax, dword ptr [0xa9c200] */ r_eax = R32((u32)(0xa9c200u));
    /* 00786141: mov dword ptr [esi + 0x1c], 0xffffffff */ W32((u32)(r_esi+0x1cu), 0xffffffffu);
    /* 00786148: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078614a: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 0078614d: mov dword ptr [esi + 0x20], 0xff */ W32((u32)(r_esi+0x20u), 0xffu);
    /* 00786154: mov dword ptr [0xa9c218], edx */ W32((u32)(0xa9c218u), r_edx);
    /* 0078615a: mov ecx, esi */ r_ecx = r_esi;
    /* 0078615c: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0078615f: mov dword ptr [0xa9c214], eax */ W32((u32)(0xa9c214u), r_eax);
    /* 00786164: call 0x785630 */ r_esp -= 4; W32(r_esp, 0x786169u); f_00785630();
    /* 00786169: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78616eu); f_006dc358();
    /* 0078616e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786170: jne 0x78617e */ if (!fZ) goto L_0078617e;
L_00786172:; BB(0x00786172);
    /* 00786172: mov dword ptr [esi + 0xec], 0x1e */ W32((u32)(r_esi+0xecu), 0x1eu);
    /* 0078617c: jmp 0x78618d */ goto L_0078618d;
L_0078617e:; BB(0x0078617e);
    /* 0078617e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00786181: jne 0x78618d */ if (!fZ) goto L_0078618d;
L_00786183:; BB(0x00786183);
    /* 00786183: mov dword ptr [esi + 0xec], 0x19 */ W32((u32)(r_esi+0xecu), 0x19u);
L_0078618d:; BB(0x0078618d);
    /* 0078618d: mov eax, esi */ r_eax = r_esi;
    /* 0078618f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786190: ret 4 */ FN_RET(0x00786120); r_esp += 8; return;
}

void f_0078616d(void)
{
    FN_ENTER(0x0078616d);
    /* 0078616d: inc dword ptr [ebp - 0x38f38a40] */ { u32 ad = (u32)(r_ebp+0xc70c75c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00786173: xchg ah, ch */ { u32 x = (u8)(r_eax>>8); u32 y = (u8)(r_ecx>>8); r_eax = (r_eax & 0xffff00ffu) | (((y) & 0xffu) << 8); r_ecx = (r_ecx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 00786175: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786177: add byte ptr [esi], bl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786179: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0078617b: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0078617d: jae 0xaed637b */ if (!fC) UNSUP(0x0078617d, "branch to code that was not decoded");
L_00786183:; BB(0x00786183);
    /* 00786183: mov dword ptr [esi + 0xec], 0x19 */ W32((u32)(r_esi+0xecu), 0x19u);
    /* 0078618d: mov eax, esi */ r_eax = r_esi;
    /* 0078618f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786190: ret 4 */ FN_RET(0x0078616d); r_esp += 8; return;
}

void f_00786194(void) /* sub_786194 */
{
    FN_ENTER(0x00786194);
    /* 00786194: call 0x78619c */ r_esp -= 4; W32(r_esp, 0x786199u); f_0078619c();
    /* 00786199: ret  */ FN_RET(0x00786194); r_esp += 4; return;
}

void f_0078619c(void) /* sub_78619C */
{
    FN_ENTER(0x0078619c);
    /* 0078619c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078619d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078619e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007861a0: mov eax, dword ptr [0xa9c218] */ r_eax = R32((u32)(0xa9c218u));
    /* 007861a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007861a7: je 0x786265 */ if (fZ) goto L_00786265;
L_007861ad:; BB(0x007861ad);
    /* 007861ad: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007861b0: je 0x786294 */ if (fZ) goto L_00786294;
L_007861b6:; BB(0x007861b6);
    /* 007861b6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007861b9: je 0x786268 */ if (fZ) goto L_00786268;
L_007861bf:; BB(0x007861bf);
    /* 007861bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007861c2: je 0x78622d */ if (fZ) goto L_0078622d;
L_007861c4:; BB(0x007861c4);
    /* 007861c4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007861c7: jne 0x78621e */ if (!fZ) goto L_0078621e;
L_007861c9:; BB(0x007861c9);
    /* 007861c9: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 007861cc: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 007861d2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007861d5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007861d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007861da: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007861dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007861de: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007861e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007861e2: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007861e4: jg 0x7861ec */ if ((!fZ&&fS==fO)) goto L_007861ec;
L_007861e6:; BB(0x007861e6);
    /* 007861e6: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 007861e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007861ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007861eb: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_007861ec:; BB(0x007861ec);
    /* 007861ec: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 007861ef: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 007861f6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007861f9: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007861fc: jg 0x78620e */ if ((!fZ&&fS==fO)) goto L_0078620e;
L_007861fe:; BB(0x007861fe);
    /* 007861fe: mov dword ptr [0xa9c218], 1 */ W32((u32)(0xa9c218u), 0x1u);
    /* 00786208: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0078620b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078620c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078620d: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_0078620e:; BB(0x0078620e);
    /* 0078620e: mov eax, 5 */ r_eax = 0x5u;
    /* 00786213: mov dword ptr [0xa9c218], eax */ W32((u32)(0xa9c218u), r_eax);
    /* 00786218: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0078621b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078621c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078621d: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_0078621e:; BB(0x0078621e);
    /* 0078621e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00786221: jne 0x786265 */ if (!fZ) goto L_00786265;
L_00786223:; BB(0x00786223);
    /* 00786223: mov dword ptr [ebp + 0x28], 5 */ W32((u32)(r_ebp+0x28u), 0x5u);
    /* 0078622a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078622b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078622c: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_0078622d:; BB(0x0078622d);
    /* 0078622d: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 00786230: mov edx, dword ptr [ebp + 0xec] */ r_edx = R32((u32)(r_ebp+0xecu));
    /* 00786236: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00786239: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 0078623c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0078623f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00786242: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786244: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00786246: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00786248: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0078624a: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078624c: jle 0x786265 */ if ((fZ||fS!=fO)) goto L_00786265;
L_0078624e:; BB(0x0078624e);
    /* 0078624e: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00786251: mov dword ptr [0xa9c218], 4 */ W32((u32)(0xa9c218u), 0x4u);
    /* 0078625b: call 0x408eb0 */ r_esp -= 4; W32(r_esp, 0x786260u); f_00408eb0();
    /* 00786260: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00786261: add dword ptr [ebp + 0x24], 1 */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00786265:; BB(0x00786265);
    /* 00786265: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786266: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786267: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_00786268:; BB(0x00786268);
    /* 00786268: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0078626b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078626e: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00786271: mov ebp, dword ptr [ebp + 0xec] */ r_ebp = R32((u32)(r_ebp+0xecu));
    /* 00786277: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0078627b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078627d: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078627f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00786281: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00786283: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00786285: jle 0x786265 */ if ((fZ||fS!=fO)) goto L_00786265;
L_00786287:; BB(0x00786287);
    /* 00786287: mov dword ptr [0xa9c218], 3 */ W32((u32)(0xa9c218u), 0x3u);
    /* 00786291: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786292: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786293: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
L_00786294:; BB(0x00786294);
    /* 00786294: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00786297: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 0078629d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007862a0: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 007862a3: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 007862a6: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007862a8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007862aa: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007862ac: jle 0x786265 */ if ((fZ||fS!=fO)) goto L_00786265;
L_007862ae:; BB(0x007862ae);
    /* 007862ae: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007862b1: mov dword ptr [0xa9c218], 2 */ W32((u32)(0xa9c218u), 0x2u);
    /* 007862bb: call 0x408eb0 */ r_esp -= 4; W32(r_esp, 0x7862c0u); f_00408eb0();
    /* 007862c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007862c1: add dword ptr [ebp + 0x24], 1 */ { u32 ad = (u32)(r_ebp+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007862c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007862c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007862c7: ret  */ FN_RET(0x0078619c); r_esp += 4; return;
}

void f_007862c8(void) /* sub_7862C8 */
{
    FN_ENTER(0x007862c8);
    /* 007862c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007862c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007862cb: mov eax, dword ptr [0xa9c218] */ r_eax = R32((u32)(0xa9c218u));
    /* 007862d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007862d2: jne 0x7862d6 */ if (!fZ) goto L_007862d6;
L_007862d4:; BB(0x007862d4);
    /* 007862d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007862d5: ret  */ FN_RET(0x007862c8); r_esp += 4; return;
L_007862d6:; BB(0x007862d6);
    /* 007862d6: mov ecx, dword ptr [0xa9c214] */ r_ecx = R32((u32)(0xa9c214u));
    /* 007862dc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7862e1u); f_00829cc8();
    /* 007862e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007862e3: call 0x7862ec */ r_esp -= 4; W32(r_esp, 0x7862e8u); f_007862ec();
    /* 007862e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007862e9: ret  */ FN_RET(0x007862c8); r_esp += 4; return;
}

void f_007862ec(void) /* sub_7862EC */
{
    FN_ENTER(0x007862ec);
    /* 007862ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007862ed: mov esi, ecx */ r_esi = r_ecx;
    /* 007862ef: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007862f4: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7862f9u); f_0082bb30();
    /* 007862f9: mov eax, dword ptr [0xa9c218] */ r_eax = R32((u32)(0xa9c218u));
    /* 007862fe: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786301: je 0x78635f */ if (fZ) goto L_0078635f;
L_00786303:; BB(0x00786303);
    /* 00786303: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786306: je 0x78633c */ if (fZ) goto L_0078633c;
L_00786308:; BB(0x00786308);
    /* 00786308: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078630b: je 0x78635f */ if (fZ) goto L_0078635f;
L_0078630d:; BB(0x0078630d);
    /* 0078630d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786310: jl 0x78635f */ if ((fS!=fO)) goto L_0078635f;
L_00786312:; BB(0x00786312);
    /* 00786312: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786315: jg 0x78635f */ if ((!fZ&&fS==fO)) goto L_0078635f;
L_00786317:; BB(0x00786317);
    /* 00786317: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0078631a: lea ecx, [eax + eax + 3] */ r_ecx = (u32)(r_eax+r_eax+0x3u);
    /* 0078631e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00786323: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x786328u); f_0082bb60();
    /* 00786328: push 0x38d1b717 */ { u32 v = 0x38d1b717u; r_esp -= 4; W32(r_esp, v); }
    /* 0078632d: add esi, 0xcc */ {  u32 a = r_esi; u32 b = 0xccu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00786333: mov ecx, esi */ r_ecx = r_esi;
    /* 00786335: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78633au); f_0082b440();
    /* 0078633a: jmp 0x78635f */ goto L_0078635f;
L_0078633c:; BB(0x0078633c);
    /* 0078633c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0078633f: lea ecx, [eax + eax + 2] */ r_ecx = (u32)(r_eax+r_eax+0x2u);
    /* 00786343: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00786348: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78634du); f_0082bb60();
    /* 0078634d: push 0x38d1b717 */ { u32 v = 0x38d1b717u; r_esp -= 4; W32(r_esp, v); }
    /* 00786352: add esi, 0xac */ {  u32 a = r_esi; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00786358: mov ecx, esi */ r_ecx = r_esi;
    /* 0078635a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78635fu); f_0082b440();
L_0078635f:; BB(0x0078635f);
    /* 0078635f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x786364u); f_004ac444();
    /* 00786364: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786365: ret  */ FN_RET(0x007862ec); r_esp += 4; return;
}

void f_00786368(void) /* sub_786368 */
{
    FN_ENTER(0x00786368);
    /* 00786368: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00786369: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078636b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078636d: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x786372u); f_0078638c();
    /* 00786372: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00786376: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786378: jne 0x78637e */ if (!fZ) goto L_0078637e;
L_0078637a:; BB(0x0078637a);
    /* 0078637a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078637b: ret 4 */ FN_RET(0x00786368); r_esp += 8; return;
L_0078637e:; BB(0x0078637e);
    /* 0078637e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078637f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x786384u); f_005c2f74();
    /* 00786384: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00786385: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786386: ret 4 */ FN_RET(0x00786368); r_esp += 8; return;
}

void f_0078638c(void) /* sub_78638C */
{
    FN_ENTER(0x0078638c);
    /* 0078638c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078638d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078638f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00786391: push 0x8f48f4 */ { u32 v = 0x8f48f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00786396: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078639c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078639d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007863a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007863a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007863aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007863ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007863b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007863b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007863b6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007863bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007863c0: mov dword ptr [eax], 0xb44b40 */ W32((u32)(r_eax), 0xb44b40u);
    /* 007863c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007863c7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x7863ccu); f_007b4e84();
    /* 007863cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007863cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007863d0: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 007863d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007863d8: je 0x786404 */ if (fZ) goto L_00786404;
L_007863da:; BB(0x007863da);
    /* 007863da: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007863de: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007863e3: jl 0x786404 */ if ((fS!=fO)) goto L_00786404;
L_007863e5:; BB(0x007863e5);
    /* 007863e5: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007863ea: jge 0x786404 */ if ((fS==fO)) goto L_00786404;
L_007863ec:; BB(0x007863ec);
    /* 007863ec: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 007863ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007863ef: call 0x81139c */ r_esp -= 4; W32(r_esp, 0x7863f4u); f_0081139c();
    /* 007863f4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007863f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007863fa: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
L_00786404:; BB(0x00786404);
    /* 00786404: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078640b: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x786410u); f_00770660();
    /* 00786410: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00786413: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078641a: mov esp, ebp */ r_esp = r_ebp;
    /* 0078641c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078641d: ret  */ FN_RET(0x0078638c); r_esp += 4; return;
}

void f_00786420(void) /* sub_786420 */
{
    FN_ENTER(0x00786420);
    /* 00786420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00786421: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00786423: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00786425: call 0x786444 */ r_esp -= 4; W32(r_esp, 0x78642au); f_00786444();
    /* 0078642a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078642e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786430: jne 0x786436 */ if (!fZ) goto L_00786436;
L_00786432:; BB(0x00786432);
    /* 00786432: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786433: ret 4 */ FN_RET(0x00786420); r_esp += 8; return;
L_00786436:; BB(0x00786436);
    /* 00786436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00786437: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78643cu); f_005c2f74();
    /* 0078643c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078643d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078643e: ret 4 */ FN_RET(0x00786420); r_esp += 8; return;
}

void f_00786444(void) /* sub_786444 */
{
    FN_ENTER(0x00786444);
    /* 00786444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00786445: mov ebp, esp */ r_ebp = r_esp;
    /* 00786447: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00786449: push 0x8f4910 */ { u32 v = 0x8f4910u; r_esp -= 4; W32(r_esp, v); }
    /* 0078644e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00786454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00786455: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078645c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078645f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00786462: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00786465: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00786468: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078646b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078646e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00786471: mov dword ptr [ecx], 0xb44ca0 */ W32((u32)(r_ecx), 0xb44ca0u);
    /* 00786477: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078647e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x786483u); f_008171e8();
    /* 00786483: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00786486: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078648d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078648f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786490: ret  */ FN_RET(0x00786444); r_esp += 4; return;
}

void f_00786461(void)
{
    FN_ENTER(0x00786461);
}

void f_00786494(void) /* sub_786494 */
{
    FN_ENTER(0x00786494);
    /* 00786494: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00786495: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00786498: mov esi, ecx */ r_esi = r_ecx;
    /* 0078649a: mov ecx, esi */ r_ecx = r_esi;
    /* 0078649c: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007864a0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007864a4: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x7864a9u); f_00770738();
    /* 007864a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007864ab: je 0x78656e */ if (fZ) goto L_0078656e;
L_007864b1:; BB(0x007864b1);
    /* 007864b1: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007864b4: test edx, 0x2000800 */ {  u32 a = r_edx; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007864ba: je 0x7864c5 */ if (fZ) goto L_007864c5;
L_007864bc:; BB(0x007864bc);
    /* 007864bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007864be: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007864c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007864c2: ret 8 */ FN_RET(0x00786494); r_esp += 12; return;
L_007864c5:; BB(0x007864c5);
    /* 007864c5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007864c8: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007864cb: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007864ce: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007864d1: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007864d4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007864d8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007864dc: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 007864df: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7864e4u); f_0082f9c4();
    /* 007864e4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007864e7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007864ea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007864ec: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007864f0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007864f4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007864f6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007864f8: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007864fc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007864fe: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00786500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00786502: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00786504: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00786506: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00786507: jae 0x786516 */ if (!fC) goto L_00786516;
L_00786509:; BB(0x00786509);
    /* 00786509: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078650b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078650d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078650f: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786513: ret 8 */ FN_RET(0x00786494); r_esp += 12; return;
L_00786516:; BB(0x00786516);
    /* 00786516: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00786518: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0078651a: fmul qword ptr [0x97a1d0] */ ST(0) = ST(0) * R_F64((u32)(0x97a1d0u));
    /* 00786520: fdiv qword ptr [0x97a1c8] */ ST(0) = ST(0) / R_F64((u32)(0x97a1c8u));
    /* 00786526: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0078652a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0078652f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786534: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00786538: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0078653c: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00786540: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 00786544: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00786548: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0078654a: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078654f: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00786552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00786553: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x786558u); f_007a9018();
    /* 00786558: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078655b: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0078655f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00786563: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00786566: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00786568: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0078656a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078656c: jle 0x786577 */ if ((fZ||fS!=fO)) goto L_00786577;
L_0078656e:; BB(0x0078656e);
    /* 0078656e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786570: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786574: ret 8 */ FN_RET(0x00786494); r_esp += 12; return;
L_00786577:; BB(0x00786577);
    /* 00786577: mov eax, 1 */ r_eax = 0x1u;
    /* 0078657c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078657f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786580: ret 8 */ FN_RET(0x00786494); r_esp += 12; return;
}

void f_00786574(void)
{
    FN_ENTER(0x00786574);
    /* 00786574: ret 8 */ FN_RET(0x00786574); r_esp += 12; return;
}

void f_00786584(void) /* sub_786584 */
{
    FN_ENTER(0x00786584);
    /* 00786584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00786585: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00786587: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00786589: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x78658eu); f_00770738();
    /* 0078658e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078658f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00786591: call 0x786598 */ r_esp -= 4; W32(r_esp, 0x786596u); f_00786598();
    /* 00786596: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786597: ret  */ FN_RET(0x00786584); r_esp += 4; return;
}

void f_00786598(void) /* sub_786598 */
{
    FN_ENTER(0x00786598);
    /* 00786598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00786599: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078659a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0078659e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007865a0: je 0x7865c5 */ if (fZ) goto L_007865c5;
L_007865a2:; BB(0x007865a2);
    /* 007865a2: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7865a7u); f_007ba980();
    /* 007865a7: mov ebx, eax */ r_ebx = r_eax;
    /* 007865a9: mov ecx, edi */ r_ecx = r_edi;
    /* 007865ab: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x7865b0u); f_007ba980();
    /* 007865b0: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 007865b3: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 007865b6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007865b8: mov eax, 0 */ r_eax = 0x0u;
    /* 007865bd: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 007865c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007865c1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007865c2: ret 4 */ FN_RET(0x00786598); r_esp += 8; return;
L_007865c5:; BB(0x007865c5);
    /* 007865c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007865c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007865c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007865c9: ret 4 */ FN_RET(0x00786598); r_esp += 8; return;
}

void f_007865cc(void) /* sub_7865CC */
{
    FN_ENTER(0x007865cc);
    /* 007865cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007865cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007865cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007865d1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007865d3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x7865d8u); f_007706b0();
    /* 007865d8: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007865dd: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 007865e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007865e5: ret  */ FN_RET(0x007865cc); r_esp += 4; return;
}

void f_007865e8(void) /* sub_7865E8 */
{
    FN_ENTER(0x007865e8);
    /* 007865e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007865e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007865eb: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007865ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007865f1: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x7865f6u); f_00770748();
    /* 007865f6: mov dword ptr [ebx], 0xb44b40 */ W32((u32)(r_ebx), 0xb44b40u);
    /* 007865fc: mov edx, dword ptr [0x9f9ed8] */ r_edx = R32((u32)(0x9f9ed8u));
    /* 00786602: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00786605: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0078660a: mov dword ptr [ebx + 0x35c], 0 */ W32((u32)(r_ebx+0x35cu), 0x0u);
    /* 00786614: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0078661b: mov dword ptr [ebx + 0x360], 0 */ W32((u32)(r_ebx+0x360u), 0x0u);
    /* 00786625: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786627: mov dword ptr [ebx + 0x370], eax */ W32((u32)(r_ebx+0x370u), r_eax);
    /* 0078662d: mov dword ptr [ebx + 0x374], eax */ W32((u32)(r_ebx+0x374u), r_eax);
    /* 00786633: mov dword ptr [ebx + 0x364], 0 */ W32((u32)(r_ebx+0x364u), 0x0u);
    /* 0078663d: mov dword ptr [ebx + 0x378], eax */ W32((u32)(r_ebx+0x378u), r_eax);
    /* 00786643: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00786649: mov dword ptr [ebx + 0x348], eax */ W32((u32)(r_ebx+0x348u), r_eax);
    /* 0078664f: mov dword ptr [ebx + 0x368], 0 */ W32((u32)(r_ebx+0x368u), 0x0u);
    /* 00786659: mov dword ptr [ebx + 0x34c], eax */ W32((u32)(r_ebx+0x34cu), r_eax);
    /* 0078665f: mov dword ptr [ebx + 0x350], eax */ W32((u32)(r_ebx+0x350u), r_eax);
    /* 00786665: mov dword ptr [ebx + 0x354], eax */ W32((u32)(r_ebx+0x354u), r_eax);
    /* 0078666b: mov dword ptr [ebx + 0x36c], 0 */ W32((u32)(r_ebx+0x36cu), 0x0u);
    /* 00786675: mov dword ptr [ebx + 0x358], eax */ W32((u32)(r_ebx+0x358u), r_eax);
    /* 0078667b: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 00786682: mov word ptr [ebx + 0x344], ax */ W16((u32)(r_ebx+0x344u), (u16)r_eax);
    /* 00786689: movzx eax, word ptr [ebx + 0x334] */ r_eax = (u32)R16((u32)(r_ebx+0x334u));
    /* 00786690: mov word ptr [ebx + 0x346], ax */ W16((u32)(r_ebx+0x346u), (u16)r_eax);
    /* 00786697: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0078669a: or eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078669f: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 007866a2: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 007866a8: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007866ab: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 007866b1: mov eax, ebx */ r_eax = r_ebx;
    /* 007866b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007866b4: ret 4 */ FN_RET(0x007865e8); r_esp += 8; return;
}

void f_007866b8(void) /* sub_7866B8 */
{
    FN_ENTER(0x007866b8);
    /* 007866b8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007866bc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007866be: call dword ptr [eax + 0x148] */ { u32 t = R32((u32)(r_eax+0x148u)); r_esp -= 4; W32(r_esp, 0x7866c4u); call_ind(t); }
    /* 007866c4: ret 4 */ FN_RET(0x007866b8); r_esp += 8; return;
}

void f_007866c8(void) /* sub_7866C8 */
{
    FN_ENTER(0x007866c8);
    /* 007866c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007866c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007866ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007866cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007866cc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007866cf: mov esi, ecx */ r_esi = r_ecx;
    /* 007866d1: movzx edx, word ptr [esi + 0x2bc] */ r_edx = (u32)R16((u32)(r_esi+0x2bcu));
    /* 007866d8: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007866dc: movzx eax, word ptr [ebp + 6] */ r_eax = (u32)R16((u32)(r_ebp+0x6u));
    /* 007866e0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007866e2: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 007866e7: mov word ptr [esi + 0x334], dx */ W16((u32)(r_esi+0x334u), (u16)r_edx);
    /* 007866ee: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007866f1: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007866f5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007866f8: je 0x78683b */ if (fZ) goto L_0078683b;
L_007866fe:; BB(0x007866fe);
    /* 007866fe: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00786701: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786704: je 0x786718 */ if (fZ) goto L_00786718;
L_00786706:; BB(0x00786706);
    /* 00786706: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786709: jne 0x786718 */ if (!fZ) goto L_00786718;
L_0078670b:; BB(0x0078670b);
    /* 0078670b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0078670d: mov ecx, esi */ r_ecx = r_esi;
    /* 0078670f: call dword ptr [eax + 0xbc] */ { u32 t = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, 0x786715u); call_ind(t); }
    /* 00786715: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_00786718:; BB(0x00786718);
    /* 00786718: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078671b: je 0x78672f */ if (fZ) goto L_0078672f;
L_0078671d:; BB(0x0078671d);
    /* 0078671d: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786720: jne 0x78672f */ if (!fZ) goto L_0078672f;
L_00786722:; BB(0x00786722);
    /* 00786722: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00786724: mov ecx, esi */ r_ecx = r_esi;
    /* 00786726: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x78672cu); call_ind(t); }
    /* 0078672c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_0078672f:; BB(0x0078672f);
    /* 0078672f: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786732: je 0x786746 */ if (fZ) goto L_00786746;
L_00786734:; BB(0x00786734);
    /* 00786734: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786737: jne 0x786746 */ if (!fZ) goto L_00786746;
L_00786739:; BB(0x00786739);
    /* 00786739: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0078673b: mov ecx, esi */ r_ecx = r_esi;
    /* 0078673d: call dword ptr [eax + 0xc4] */ { u32 t = R32((u32)(r_eax+0xc4u)); r_esp -= 4; W32(r_esp, 0x786743u); call_ind(t); }
    /* 00786743: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_00786746:; BB(0x00786746);
    /* 00786746: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00786749: je 0x78675f */ if (fZ) goto L_0078675f;
L_0078674b:; BB(0x0078674b);
    /* 0078674b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078674e: jne 0x78675f */ if (!fZ) goto L_0078675f;
L_00786750:; BB(0x00786750);
    /* 00786750: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00786752: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00786754: mov ecx, esi */ r_ecx = r_esi;
    /* 00786756: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x78675cu); call_ind(t); }
    /* 0078675c: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_0078675f:; BB(0x0078675f);
    /* 0078675f: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00786761: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00786764: movzx edi, byte ptr [ebp + 8] */ r_edi = (u32)R8((u32)(r_ebp+0x8u));
    /* 00786768: movzx edx, byte ptr [ebp + 9] */ r_edx = (u32)R8((u32)(r_ebp+0x9u));
    /* 0078676c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078676e: mov byte ptr [ebp + 8], al */ W8((u32)(r_ebp+0x8u), (u8)r_eax);
    /* 00786771: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00786775: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00786779: mov byte ptr [ebp + 9], al */ W8((u32)(r_ebp+0x9u), (u8)r_eax);
    /* 0078677c: cmp edi, 9 */ {  u32 a = r_edi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078677f: je 0x786793 */ if (fZ) goto L_00786793;
L_00786781:; BB(0x00786781);
    /* 00786781: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786784: je 0x78678a */ if (fZ) goto L_0078678a;
L_00786786:; BB(0x00786786);
    /* 00786786: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00786788: jmp 0x7867ac */ goto L_007867ac;
L_0078678a:; BB(0x0078678a);
    /* 0078678a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078678e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00786791: jmp 0x78679a */ goto L_0078679a;
L_00786793:; BB(0x00786793);
    /* 00786793: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00786797: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0078679a:; BB(0x0078679a);
    /* 0078679a: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078679e: mov ecx, esi */ r_ecx = r_esi;
    /* 007867a0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007867a2: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007867a6: call dword ptr [eax + 0xd4] */ { u32 t = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, 0x7867acu); call_ind(t); }
L_007867ac:; BB(0x007867ac);
    /* 007867ac: movzx edi, byte ptr [ebp + 0xa] */ r_edi = (u32)R8((u32)(r_ebp+0xau));
    /* 007867b0: movzx edx, byte ptr [ebp + 0xb] */ r_edx = (u32)R8((u32)(r_ebp+0xbu));
    /* 007867b4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007867b8: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 007867bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007867be: mov byte ptr [ebp + 0xa], al */ W8((u32)(r_ebp+0xau), (u8)r_eax);
    /* 007867c1: mov byte ptr [ebp + 0xb], al */ W8((u32)(r_ebp+0xbu), (u8)r_eax);
    /* 007867c4: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007867c7: je 0x7867db */ if (fZ) goto L_007867db;
L_007867c9:; BB(0x007867c9);
    /* 007867c9: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007867cc: je 0x7867d2 */ if (fZ) goto L_007867d2;
L_007867ce:; BB(0x007867ce);
    /* 007867ce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007867d0: jmp 0x7867f4 */ goto L_007867f4;
L_007867d2:; BB(0x007867d2);
    /* 007867d2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007867d6: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007867d9: jmp 0x7867e2 */ goto L_007867e2;
L_007867db:; BB(0x007867db);
    /* 007867db: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007867df: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_007867e2:; BB(0x007867e2);
    /* 007867e2: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007867e6: mov ecx, esi */ r_ecx = r_esi;
    /* 007867e8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 007867ea: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007867ee: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x7867f4u); call_ind(t); }
L_007867f4:; BB(0x007867f4);
    /* 007867f4: mov eax, dword ptr [0xaaecf0] */ r_eax = R32((u32)(0xaaecf0u));
    /* 007867f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007867fb: jne 0x786831 */ if (!fZ) goto L_00786831;
L_007867fd:; BB(0x007867fd);
    /* 007867fd: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786801: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786806: jne 0x786831 */ if (!fZ) goto L_00786831;
L_00786808:; BB(0x00786808);
    /* 00786808: test ebx, 0x800 */ {  u32 a = r_ebx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078680e: je 0x786831 */ if (fZ) goto L_00786831;
L_00786810:; BB(0x00786810);
    /* 00786810: mov ecx, esi */ r_ecx = r_esi;
    /* 00786812: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x786817u); f_007778d8();
    /* 00786817: mov ebx, eax */ r_ebx = r_eax;
    /* 00786819: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x78681eu); f_007bb6d0();
    /* 0078681e: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 00786821: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786823: jne 0x786831 */ if (!fZ) goto L_00786831;
L_00786825:; BB(0x00786825);
    /* 00786825: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078682a: mov ecx, esi */ r_ecx = r_esi;
    /* 0078682c: call 0x7778e0 */ r_esp -= 4; W32(r_esp, 0x786831u); f_007778e0();
L_00786831:; BB(0x00786831);
    /* 00786831: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786834: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786835: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786836: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786837: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786838: ret 4 */ FN_RET(0x007866c8); r_esp += 8; return;
L_0078683b:; BB(0x0078683b);
    /* 0078683b: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 0078683e: and ebx, 0xffffffc0 */ {  u32 a = r_ebx; u32 b = 0xffffffc0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00786841: jmp 0x78675f */ goto L_0078675f;
}

void f_00786848(void) /* sub_786848 */
{
    FN_ENTER(0x00786848);
    /* 00786848: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00786849: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078684a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078684b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078684f: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 00786853: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00786857: mov ebp, dword ptr [eax + 0x10] */ r_ebp = R32((u32)(r_eax+0x10u));
    /* 0078685a: mov dword ptr [ecx + 0x50], ebp */ W32((u32)(r_ecx+0x50u), r_ebp);
    /* 0078685d: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 00786860: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 00786863: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 00786866: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 00786869: mov dword ptr [ecx + 0x38], ebp */ W32((u32)(r_ecx+0x38u), r_ebp);
    /* 0078686c: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 0078686f: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 00786872: mov ebp, dword ptr [eax + 0x1c] */ r_ebp = R32((u32)(r_eax+0x1cu));
    /* 00786875: mov dword ptr [ecx + 0x5c], ebp */ W32((u32)(r_ecx+0x5cu), r_ebp);
    /* 00786878: mov ebp, dword ptr [eax + 0x20] */ r_ebp = R32((u32)(r_eax+0x20u));
    /* 0078687b: mov dword ptr [ecx + 0x60], ebp */ W32((u32)(r_ecx+0x60u), r_ebp);
    /* 0078687e: mov ebp, dword ptr [eax + 0x24] */ r_ebp = R32((u32)(r_eax+0x24u));
    /* 00786881: mov dword ptr [ecx + 0x64], ebp */ W32((u32)(r_ecx+0x64u), r_ebp);
    /* 00786884: mov ebp, dword ptr [eax + 0x28] */ r_ebp = R32((u32)(r_eax+0x28u));
    /* 00786887: mov dword ptr [ecx + 0x35c], ebp */ W32((u32)(r_ecx+0x35cu), r_ebp);
    /* 0078688d: mov ebp, dword ptr [eax + 0x2c] */ r_ebp = R32((u32)(r_eax+0x2cu));
    /* 00786890: mov dword ptr [ecx + 0x360], ebp */ W32((u32)(r_ecx+0x360u), r_ebp);
    /* 00786896: mov ebp, dword ptr [eax + 0x30] */ r_ebp = R32((u32)(r_eax+0x30u));
    /* 00786899: mov dword ptr [ecx + 0x364], ebp */ W32((u32)(r_ecx+0x364u), r_ebp);
    /* 0078689f: mov ebp, dword ptr [eax + 0x34] */ r_ebp = R32((u32)(r_eax+0x34u));
    /* 007868a2: mov dword ptr [ecx + 0x368], ebp */ W32((u32)(r_ecx+0x368u), r_ebp);
    /* 007868a8: mov ebp, dword ptr [eax + 0x38] */ r_ebp = R32((u32)(r_eax+0x38u));
    /* 007868ab: mov dword ptr [ecx + 0x36c], ebp */ W32((u32)(r_ecx+0x36cu), r_ebp);
    /* 007868b1: movsx ebp, word ptr [eax + 0x3c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x3cu));
    /* 007868b5: mov dword ptr [ecx + 0x370], ebp */ W32((u32)(r_ecx+0x370u), r_ebp);
    /* 007868bb: movsx ebp, word ptr [eax + 0x3e] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 007868bf: mov dword ptr [ecx + 0x374], ebp */ W32((u32)(r_ecx+0x374u), r_ebp);
    /* 007868c5: movzx ebp, word ptr [eax + 8] */ r_ebp = (u32)R16((u32)(r_eax+0x8u));
    /* 007868c9: mov word ptr [ecx + 0x28], bp */ W16((u32)(r_ecx+0x28u), (u16)r_ebp);
    /* 007868cd: movzx ebp, word ptr [eax + 0xa] */ r_ebp = (u32)R16((u32)(r_eax+0xau));
    /* 007868d1: mov word ptr [ecx + 0x2a], bp */ W16((u32)(r_ecx+0x2au), (u16)r_ebp);
    /* 007868d5: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 007868d8: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 007868dc: add ecx, 0x168 */ {  u32 a = r_ecx; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007868e2: mov eax, dword ptr [0xa9c22c] */ r_eax = R32((u32)(0xa9c22cu));
    /* 007868e7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007868e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007868ea: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x7868efu); f_0084c390();
    /* 007868ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007868f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007868f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007868f2: ret 4 */ FN_RET(0x00786848); r_esp += 8; return;
}

void f_007868f8(void) /* sub_7868F8 */
{
    FN_ENTER(0x007868f8);
    /* 007868f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007868f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007868fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007868fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007868fc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007868ff: mov esi, ecx */ r_esi = r_ecx;
    /* 00786901: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 00786905: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00786909: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0078690d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078690f: je 0x78696d */ if (fZ) goto L_0078696d;
L_00786911:; BB(0x00786911);
    /* 00786911: mov dword ptr [esi + 0x2b4], ebp */ W32((u32)(r_esi+0x2b4u), r_ebp);
    /* 00786917: movzx edx, word ptr [ebp + 6] */ r_edx = (u32)R16((u32)(r_ebp+0x6u));
    /* 0078691b: add edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078691e: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00786921: mov edx, dword ptr [esi + 0x2e8] */ r_edx = R32((u32)(r_esi+0x2e8u));
    /* 00786927: mov word ptr [esi + 0x2bc], di */ W16((u32)(r_esi+0x2bcu), (u16)r_edi);
    /* 0078692e: mov word ptr [esi + 0x334], di */ W16((u32)(r_esi+0x334u), (u16)r_edi);
    /* 00786935: mov word ptr [esi + 0x346], di */ W16((u32)(r_esi+0x346u), (u16)r_edi);
    /* 0078693c: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078693f: je 0x786953 */ if (fZ) goto L_00786953;
L_00786941:; BB(0x00786941);
    /* 00786941: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00786943: mov word ptr [esi + 0x2be], dx */ W16((u32)(r_esi+0x2beu), (u16)r_edx);
    /* 0078694a: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 00786951: jmp 0x78697b */ goto L_0078697b;
L_00786953:; BB(0x00786953);
    /* 00786953: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00786957: add edx, dword ptr [ebp + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078695a: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 0078695d: mov word ptr [esi + 0x2be], di */ W16((u32)(r_esi+0x2beu), (u16)r_edi);
    /* 00786964: mov word ptr [esi + 0x336], di */ W16((u32)(r_esi+0x336u), (u16)r_edi);
    /* 0078696b: jmp 0x78697b */ goto L_0078697b;
L_0078696d:; BB(0x0078696d);
    /* 0078696d: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00786973: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786975: je 0x786b14 */ if (fZ) goto L_00786b14;
L_0078697b:; BB(0x0078697b);
    /* 0078697b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078697d: je 0x786b20 */ if (fZ) goto L_00786b20;
L_00786983:; BB(0x00786983);
    /* 00786983: mov dword ptr [esi + 0x31c], eax */ W32((u32)(r_esi+0x31cu), r_eax);
L_00786989:; BB(0x00786989);
    /* 00786989: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078698b: je 0x786b06 */ if (fZ) goto L_00786b06;
L_00786991:; BB(0x00786991);
    /* 00786991: mov dword ptr [esi + 0x320], ebx */ W32((u32)(r_esi+0x320u), r_ebx);
L_00786997:; BB(0x00786997);
    /* 00786997: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0078699b: fld dword ptr [esi + 0x278] */ FPUSH(R_F32((u32)(r_esi+0x278u)));
    /* 007869a1: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 007869a4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007869a7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007869a9: mov word ptr [esi + 0x2cc], cx */ W16((u32)(r_esi+0x2ccu), (u16)r_ecx);
    /* 007869b0: mov word ptr [esi + 0x2c4], cx */ W16((u32)(r_esi+0x2c4u), (u16)r_ecx);
    /* 007869b7: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 007869bb: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 007869be: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007869c0: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007869c3: mov word ptr [esi + 0x2ce], dx */ W16((u32)(r_esi+0x2ceu), (u16)r_edx);
    /* 007869ca: mov word ptr [esi + 0x2c6], dx */ W16((u32)(r_esi+0x2c6u), (u16)r_edx);
    /* 007869d1: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 007869d5: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007869d9: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 007869dc: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007869de: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 007869e1: mov word ptr [esi + 0x2d0], dx */ W16((u32)(r_esi+0x2d0u), (u16)r_edx);
    /* 007869e8: mov word ptr [esi + 0x2c8], dx */ W16((u32)(r_esi+0x2c8u), (u16)r_edx);
    /* 007869ef: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007869f3: add edx, dword ptr [ebx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007869f6: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007869f9: mov word ptr [esi + 0x2d2], dx */ W16((u32)(r_esi+0x2d2u), (u16)r_edx);
    /* 00786a00: mov word ptr [esi + 0x2ca], dx */ W16((u32)(r_esi+0x2cau), (u16)r_edx);
    /* 00786a07: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 00786a0b: movzx eax, word ptr [ebp + 0xa] */ r_eax = (u32)R16((u32)(r_ebp+0xau));
    /* 00786a0f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00786a11: mov word ptr [esi + 0x2d4], di */ W16((u32)(r_esi+0x2d4u), (u16)r_edi);
    /* 00786a18: movzx ebp, word ptr [ebp + 0xc] */ r_ebp = (u32)R16((u32)(r_ebp+0xcu));
    /* 00786a1c: mov word ptr [esi + 0x2d6], bp */ W16((u32)(r_esi+0x2d6u), (u16)r_ebp);
    /* 00786a23: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00786a27: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 00786a2e: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 00786a32: mov word ptr [esi + 0x2f8], ax */ W16((u32)(r_esi+0x2f8u), (u16)r_eax);
    /* 00786a39: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00786a3d: mov word ptr [esi + 0x2fa], ax */ W16((u32)(r_esi+0x2fau), (u16)r_eax);
    /* 00786a44: movzx eax, word ptr [ebx + 0xa] */ r_eax = (u32)R16((u32)(r_ebx+0xau));
    /* 00786a48: mov word ptr [esi + 0x2fc], ax */ W16((u32)(r_esi+0x2fcu), (u16)r_eax);
    /* 00786a4f: movzx ebx, word ptr [ebx + 8] */ r_ebx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00786a53: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786a57: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786a5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786a61: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786a65: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786a69: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786a6d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786a71: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786a75: mov word ptr [esi + 0x2fe], bx */ W16((u32)(r_esi+0x2feu), (u16)r_ebx);
    /* 00786a7c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786a7e: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00786a82: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00786a86: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00786a8a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00786a8c: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 00786a93: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786a97: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786a9c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786aa1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786aa5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786aa9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786aad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786ab1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786ab5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00786ab9: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00786abd: fmul dword ptr [esi + 0x284] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x284u));
    /* 00786ac3: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786ac5: mov word ptr [esi + 0x2ce], ax */ W16((u32)(r_esi+0x2ceu), (u16)r_eax);
    /* 00786acc: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786ad0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786ad5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786ada: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786ade: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786ae2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786ae6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786aea: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786aee: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786af0: mov word ptr [esi + 0x2d2], ax */ W16((u32)(r_esi+0x2d2u), (u16)r_eax);
    /* 00786af7: mov eax, 1 */ r_eax = 0x1u;
    /* 00786afc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786aff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b03: ret 0xc */ FN_RET(0x007868f8); r_esp += 16; return;
L_00786b06:; BB(0x00786b06);
    /* 00786b06: mov ebx, dword ptr [esi + 0x320] */ r_ebx = R32((u32)(r_esi+0x320u));
    /* 00786b0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786b0e: jne 0x786997 */ if (!fZ) goto L_00786997;
L_00786b14:; BB(0x00786b14);
    /* 00786b14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786b16: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786b19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b1d: ret 0xc */ FN_RET(0x007868f8); r_esp += 16; return;
L_00786b20:; BB(0x00786b20);
    /* 00786b20: mov eax, dword ptr [esi + 0x31c] */ r_eax = R32((u32)(r_esi+0x31cu));
    /* 00786b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786b28: jne 0x786989 */ if (!fZ) goto L_00786989;
L_00786b2e:; BB(0x00786b2e);
    /* 00786b2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786b30: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786b33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b37: ret 0xc */ FN_RET(0x007868f8); r_esp += 16; return;
}

void f_00786966(void)
{
    FN_ENTER(0x00786966);
    /* 00786966: mov esi, 0x336 */ r_esi = 0x336u;
    /* 0078696b: jmp 0x78697b */ goto L_0078697b;
L_0078697b:; BB(0x0078697b);
    /* 0078697b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078697d: je 0x786b20 */ if (fZ) goto L_00786b20;
L_00786983:; BB(0x00786983);
    /* 00786983: mov dword ptr [esi + 0x31c], eax */ W32((u32)(r_esi+0x31cu), r_eax);
L_00786989:; BB(0x00786989);
    /* 00786989: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078698b: je 0x786b06 */ if (fZ) goto L_00786b06;
L_00786991:; BB(0x00786991);
    /* 00786991: mov dword ptr [esi + 0x320], ebx */ W32((u32)(r_esi+0x320u), r_ebx);
L_00786997:; BB(0x00786997);
    /* 00786997: movsx ecx, word ptr [ebp] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp));
    /* 0078699b: fld dword ptr [esi + 0x278] */ FPUSH(R_F32((u32)(r_esi+0x278u)));
    /* 007869a1: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 007869a4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007869a7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007869a9: mov word ptr [esi + 0x2cc], cx */ W16((u32)(r_esi+0x2ccu), (u16)r_ecx);
    /* 007869b0: mov word ptr [esi + 0x2c4], cx */ W16((u32)(r_esi+0x2c4u), (u16)r_ecx);
    /* 007869b7: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 007869bb: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 007869be: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007869c0: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007869c3: mov word ptr [esi + 0x2ce], dx */ W16((u32)(r_esi+0x2ceu), (u16)r_edx);
    /* 007869ca: mov word ptr [esi + 0x2c6], dx */ W16((u32)(r_esi+0x2c6u), (u16)r_edx);
    /* 007869d1: movzx edi, word ptr [ebp + 4] */ r_edi = (u32)R16((u32)(r_ebp+0x4u));
    /* 007869d5: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007869d9: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 007869dc: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007869de: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 007869e1: mov word ptr [esi + 0x2d0], dx */ W16((u32)(r_esi+0x2d0u), (u16)r_edx);
    /* 007869e8: mov word ptr [esi + 0x2c8], dx */ W16((u32)(r_esi+0x2c8u), (u16)r_edx);
    /* 007869ef: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007869f3: add edx, dword ptr [ebx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007869f6: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007869f9: mov word ptr [esi + 0x2d2], dx */ W16((u32)(r_esi+0x2d2u), (u16)r_edx);
    /* 00786a00: mov word ptr [esi + 0x2ca], dx */ W16((u32)(r_esi+0x2cau), (u16)r_edx);
    /* 00786a07: movzx edi, word ptr [eax + 4] */ r_edi = (u32)R16((u32)(r_eax+0x4u));
    /* 00786a0b: movzx eax, word ptr [ebp + 0xa] */ r_eax = (u32)R16((u32)(r_ebp+0xau));
    /* 00786a0f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00786a11: mov word ptr [esi + 0x2d4], di */ W16((u32)(r_esi+0x2d4u), (u16)r_edi);
    /* 00786a18: movzx ebp, word ptr [ebp + 0xc] */ r_ebp = (u32)R16((u32)(r_ebp+0xcu));
    /* 00786a1c: mov word ptr [esi + 0x2d6], bp */ W16((u32)(r_esi+0x2d6u), (u16)r_ebp);
    /* 00786a23: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00786a27: mov word ptr [esi + 0x2f6], ax */ W16((u32)(r_esi+0x2f6u), (u16)r_eax);
    /* 00786a2e: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 00786a32: mov word ptr [esi + 0x2f8], ax */ W16((u32)(r_esi+0x2f8u), (u16)r_eax);
    /* 00786a39: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00786a3d: mov word ptr [esi + 0x2fa], ax */ W16((u32)(r_esi+0x2fau), (u16)r_eax);
    /* 00786a44: movzx eax, word ptr [ebx + 0xa] */ r_eax = (u32)R16((u32)(r_ebx+0xau));
    /* 00786a48: mov word ptr [esi + 0x2fc], ax */ W16((u32)(r_esi+0x2fcu), (u16)r_eax);
    /* 00786a4f: movzx ebx, word ptr [ebx + 8] */ r_ebx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00786a53: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786a57: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786a5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786a61: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786a65: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786a69: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786a6d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786a71: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786a75: mov word ptr [esi + 0x2fe], bx */ W16((u32)(r_esi+0x2feu), (u16)r_ebx);
    /* 00786a7c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786a7e: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00786a82: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 00786a86: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00786a8a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00786a8c: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 00786a93: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786a97: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786a9c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786aa1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786aa5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786aa9: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786aad: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786ab1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786ab5: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00786ab9: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00786abd: fmul dword ptr [esi + 0x284] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x284u));
    /* 00786ac3: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786ac5: mov word ptr [esi + 0x2ce], ax */ W16((u32)(r_esi+0x2ceu), (u16)r_eax);
    /* 00786acc: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00786ad0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00786ad5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00786ada: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00786ade: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00786ae2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00786ae6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00786aea: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00786aee: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786af0: mov word ptr [esi + 0x2d2], ax */ W16((u32)(r_esi+0x2d2u), (u16)r_eax);
    /* 00786af7: mov eax, 1 */ r_eax = 0x1u;
    /* 00786afc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786aff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b00: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b02: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b03: ret 0xc */ FN_RET(0x00786966); r_esp += 16; return;
L_00786b06:; BB(0x00786b06);
    /* 00786b06: mov ebx, dword ptr [esi + 0x320] */ r_ebx = R32((u32)(r_esi+0x320u));
    /* 00786b0c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786b0e: jne 0x786997 */ if (!fZ) goto L_00786997;
L_00786b14:; BB(0x00786b14);
    /* 00786b14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786b16: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786b19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b1b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b1c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b1d: ret 0xc */ FN_RET(0x00786966); r_esp += 16; return;
L_00786b20:; BB(0x00786b20);
    /* 00786b20: mov eax, dword ptr [esi + 0x31c] */ r_eax = R32((u32)(r_esi+0x31cu));
    /* 00786b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786b28: jne 0x786989 */ if (!fZ) goto L_00786989;
L_00786b2e:; BB(0x00786b2e);
    /* 00786b2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786b30: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786b33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786b34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786b35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786b36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786b37: ret 0xc */ FN_RET(0x00786966); r_esp += 16; return;
}

void f_00786b3c(void) /* sub_786B3C */
{
    FN_ENTER(0x00786b3c);
    /* 00786b3c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00786b3f: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 00786b44: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786b4a: jl 0x786bb4 */ if ((fS!=fO)) goto L_00786bb4;
L_00786b4c:; BB(0x00786b4c);
    /* 00786b4c: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786b52: jge 0x786bb4 */ if ((fS==fO)) goto L_00786bb4;
L_00786b54:; BB(0x00786b54);
    /* 00786b54: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00786b5a: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 00786b5f: lea eax, [edx + eax - 1] */ r_eax = (u32)(r_edx+r_eax+0xffffffffu);
    /* 00786b63: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786b65: jge 0x786b9b */ if ((fS==fO)) goto L_00786b9b;
L_00786b67:; BB(0x00786b67);
    /* 00786b67: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00786b6b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_00786b6e:; BB(0x00786b6e);
    /* 00786b6e: lea ebx, [edx + eax] */ r_ebx = (u32)(r_edx+r_eax);
    /* 00786b71: mov esi, ebx */ r_esi = r_ebx;
    /* 00786b73: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00786b76: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00786b78: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00786b7a: mov esi, dword ptr [ebx*4 + 0xaad720] */ r_esi = R32((u32)(r_ebx*4+0xaad720u));
    /* 00786b81: movzx esi, word ptr [esi + 0x1c] */ r_esi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00786b85: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786b87: jge 0x786b8e */ if ((fS==fO)) goto L_00786b8e;
L_00786b89:; BB(0x00786b89);
    /* 00786b89: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 00786b8c: jmp 0x786b90 */ goto L_00786b90;
L_00786b8e:; BB(0x00786b8e);
    /* 00786b8e: mov eax, ebx */ r_eax = r_ebx;
L_00786b90:; BB(0x00786b90);
    /* 00786b90: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786b92: jl 0x786b6e */ if ((fS!=fO)) goto L_00786b6e;
L_00786b94:; BB(0x00786b94);
    /* 00786b94: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00786b98: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00786b9b:; BB(0x00786b9b);
    /* 00786b9b: mov edx, dword ptr [edx*4 + 0xaad720] */ r_edx = R32((u32)(r_edx*4+0xaad720u));
    /* 00786ba2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ba4: je 0x786bb4 */ if (fZ) goto L_00786bb4;
L_00786ba6:; BB(0x00786ba6);
    /* 00786ba6: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 00786baa: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786bac: jne 0x786bb4 */ if (!fZ) goto L_00786bb4;
L_00786bae:; BB(0x00786bae);
    /* 00786bae: mov eax, edx */ r_eax = r_edx;
    /* 00786bb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786bb3: ret  */ FN_RET(0x00786b3c); r_esp += 4; return;
L_00786bb4:; BB(0x00786bb4);
    /* 00786bb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786bb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786bb9: ret  */ FN_RET(0x00786b3c); r_esp += 4; return;
}

void f_00786bbc(void) /* sub_786BBC */
{
    FN_ENTER(0x00786bbc);
    /* 00786bbc: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x786bc1u); f_007b4f54();
    /* 00786bc1: ret  */ FN_RET(0x00786bbc); r_esp += 4; return;
}

void f_00786bc4(void) /* sub_786BC4 */
{
    FN_ENTER(0x00786bc4);
    /* 00786bc4: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00786bca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786bcc: je 0x786be0 */ if (fZ) goto L_00786be0;
L_00786bce:; BB(0x00786bce);
    /* 00786bce: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
L_00786bd4:; BB(0x00786bd4);
    /* 00786bd4: mov ecx, eax */ r_ecx = r_eax;
    /* 00786bd6: mov eax, dword ptr [eax + 0x34c] */ r_eax = R32((u32)(r_eax+0x34cu));
    /* 00786bdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786bde: jne 0x786bd4 */ if (!fZ) goto L_00786bd4;
L_00786be0:; BB(0x00786be0);
    /* 00786be0: mov eax, dword ptr [ecx + 0x348] */ r_eax = R32((u32)(r_ecx+0x348u));
    /* 00786be6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786be8: je 0x786beb */ if (fZ) goto L_00786beb;
L_00786bea:; BB(0x00786bea);
    /* 00786bea: ret  */ FN_RET(0x00786bc4); r_esp += 4; return;
L_00786beb:; BB(0x00786beb);
    /* 00786beb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786bed: ret  */ FN_RET(0x00786bc4); r_esp += 4; return;
}

void f_00786bf0(void) /* sub_786BF0 */
{
    FN_ENTER(0x00786bf0);
    /* 00786bf0: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00786bf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786bf8: je 0x786c0c */ if (fZ) goto L_00786c0c;
L_00786bfa:; BB(0x00786bfa);
    /* 00786bfa: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
L_00786c00:; BB(0x00786c00);
    /* 00786c00: mov ecx, eax */ r_ecx = r_eax;
    /* 00786c02: mov eax, dword ptr [eax + 0x34c] */ r_eax = R32((u32)(r_eax+0x34cu));
    /* 00786c08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786c0a: jne 0x786c00 */ if (!fZ) goto L_00786c00;
L_00786c0c:; BB(0x00786c0c);
    /* 00786c0c: mov eax, dword ptr [ecx + 0x348] */ r_eax = R32((u32)(r_ecx+0x348u));
    /* 00786c12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786c14: je 0x786c1e */ if (fZ) goto L_00786c1e;
L_00786c16:; BB(0x00786c16);
    /* 00786c16: je 0x786c1e */ if (fZ) goto L_00786c1e;
L_00786c18:; BB(0x00786c18);
    /* 00786c18: mov eax, 1 */ r_eax = 0x1u;
    /* 00786c1d: ret  */ FN_RET(0x00786bf0); r_esp += 4; return;
L_00786c1e:; BB(0x00786c1e);
    /* 00786c1e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786c20: ret  */ FN_RET(0x00786bf0); r_esp += 4; return;
}

void f_00786c24(void) /* sub_786C24 */
{
    FN_ENTER(0x00786c24);
    /* 00786c24: mov ecx, dword ptr [ecx + 0x354] */ r_ecx = R32((u32)(r_ecx+0x354u));
    /* 00786c2a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00786c2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00786c2e: je 0x786c50 */ if (fZ) goto L_00786c50;
L_00786c30:; BB(0x00786c30);
    /* 00786c30: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00786c36: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786c38: je 0x786c4d */ if (fZ) goto L_00786c4d;
L_00786c3a:; BB(0x00786c3a);
    /* 00786c3a: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
L_00786c40:; BB(0x00786c40);
    /* 00786c40: mov edx, dword ptr [edx + 0x350] */ r_edx = R32((u32)(r_edx+0x350u));
    /* 00786c46: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786c49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786c4b: jne 0x786c40 */ if (!fZ) goto L_00786c40;
L_00786c4d:; BB(0x00786c4d);
    /* 00786c4d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00786c50:; BB(0x00786c50);
    /* 00786c50: ret  */ FN_RET(0x00786c24); r_esp += 4; return;
}

void f_00786c54(void) /* sub_786C54 */
{
    FN_ENTER(0x00786c54);
    /* 00786c54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00786c55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00786c56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00786c57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00786c58: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00786c5b: mov esi, ecx */ r_esi = r_ecx;
    /* 00786c5d: mov ebx, dword ptr [esi + 0x374] */ r_ebx = R32((u32)(r_esi+0x374u));
    /* 00786c63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00786c65: jle 0x786c71 */ if ((fZ||fS!=fO)) goto L_00786c71;
L_00786c67:; BB(0x00786c67);
    /* 00786c67: mov eax, dword ptr [esi + 0x348] */ r_eax = R32((u32)(r_esi+0x348u));
    /* 00786c6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786c6f: je 0x786c79 */ if (fZ) goto L_00786c79;
L_00786c71:; BB(0x00786c71);
    /* 00786c71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786c74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786c75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786c76: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786c77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786c78: ret  */ FN_RET(0x00786c54); r_esp += 4; return;
L_00786c79:; BB(0x00786c79);
    /* 00786c79: mov eax, dword ptr [esi + 0x34c] */ r_eax = R32((u32)(r_esi+0x34cu));
    /* 00786c7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786c81: jne 0x786c71 */ if (!fZ) goto L_00786c71;
L_00786c83:; BB(0x00786c83);
    /* 00786c83: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00786c89: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 00786c8e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00786c90: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00786c92: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786c94: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00786c98:; BB(0x00786c98);
    /* 00786c98: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786c9a: jge 0x786daa */ if ((fS==fO)) goto L_00786daa;
L_00786ca0:; BB(0x00786ca0);
    /* 00786ca0: mov edi, dword ptr [edx*4 + 0xaad720] */ r_edi = R32((u32)(r_edx*4+0xaad720u));
    /* 00786ca7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ca9: je 0x786da2 */ if (fZ) goto L_00786da2;
L_00786caf:; BB(0x00786caf);
    /* 00786caf: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786cb1: je 0x786da2 */ if (fZ) goto L_00786da2;
L_00786cb7:; BB(0x00786cb7);
    /* 00786cb7: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 00786cbb: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786cc1: jl 0x786da2 */ if ((fS!=fO)) goto L_00786da2;
L_00786cc7:; BB(0x00786cc7);
    /* 00786cc7: cmp ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00786ccd: jge 0x786da2 */ if ((fS==fO)) goto L_00786da2;
L_00786cd3:; BB(0x00786cd3);
    /* 00786cd3: mov ebp, dword ptr [edi + 0x30] */ r_ebp = R32((u32)(r_edi+0x30u));
    /* 00786cd6: test ebp, 0x800 */ {  u32 a = r_ebp; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786cdc: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786ce2:; BB(0x00786ce2);
    /* 00786ce2: cmp ebx, dword ptr [edi + 0x374] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x374u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ce8: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786cee:; BB(0x00786cee);
    /* 00786cee: movsx ebp, word ptr [edi + 0x28] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x28u));
    /* 00786cf2: cmp bp, word ptr [esi + 0x28] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00786cf6: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786cfc:; BB(0x00786cfc);
    /* 00786cfc: mov ebp, dword ptr [esi + 0x33c] */ r_ebp = R32((u32)(r_esi+0x33cu));
    /* 00786d02: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d05: je 0x786d89 */ if (fZ) goto L_00786d89;
L_00786d0b:; BB(0x00786d0b);
    /* 00786d0b: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d0e: jne 0x786d3d */ if (!fZ) goto L_00786d3d;
L_00786d10:; BB(0x00786d10);
    /* 00786d10: mov ebp, dword ptr [edi + 0x33c] */ r_ebp = R32((u32)(r_edi+0x33cu));
    /* 00786d16: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d19: jne 0x786d28 */ if (!fZ) goto L_00786d28;
L_00786d1b:; BB(0x00786d1b);
    /* 00786d1b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d1d: je 0x786f0b */ if (fZ) goto L_00786f0b;
L_00786d23:; BB(0x00786d23);
    /* 00786d23: jmp 0x786da2 */ goto L_00786da2;
L_00786d28:; BB(0x00786d28);
    /* 00786d28: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d2b: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786d2d:; BB(0x00786d2d);
    /* 00786d2d: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 00786d33: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d35: je 0x786dca */ if (fZ) goto L_00786dca;
L_00786d3b:; BB(0x00786d3b);
    /* 00786d3b: jmp 0x786da2 */ goto L_00786da2;
L_00786d3d:; BB(0x00786d3d);
    /* 00786d3d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d3f: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786d41:; BB(0x00786d41);
    /* 00786d41: mov ebp, dword ptr [edi + 0x33c] */ r_ebp = R32((u32)(r_edi+0x33cu));
    /* 00786d47: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d4a: jne 0x786d56 */ if (!fZ) goto L_00786d56;
L_00786d4c:; BB(0x00786d4c);
    /* 00786d4c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d4e: je 0x786df4 */ if (fZ) goto L_00786df4;
L_00786d54:; BB(0x00786d54);
    /* 00786d54: jmp 0x786da2 */ goto L_00786da2;
L_00786d56:; BB(0x00786d56);
    /* 00786d56: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d59: jne 0x786d79 */ if (!fZ) goto L_00786d79;
L_00786d5b:; BB(0x00786d5b);
    /* 00786d5b: mov ebp, dword ptr [edi + 0x354] */ r_ebp = R32((u32)(r_edi+0x354u));
    /* 00786d61: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d63: je 0x786e86 */ if (fZ) goto L_00786e86;
L_00786d69:; BB(0x00786d69);
    /* 00786d69: mov edi, dword ptr [esi + 0x350] */ r_edi = R32((u32)(r_esi+0x350u));
    /* 00786d6f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d71: je 0x786e53 */ if (fZ) goto L_00786e53;
L_00786d77:; BB(0x00786d77);
    /* 00786d77: jmp 0x786da2 */ goto L_00786da2;
L_00786d79:; BB(0x00786d79);
    /* 00786d79: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 00786d7f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d81: je 0x786e8d */ if (fZ) goto L_00786e8d;
L_00786d87:; BB(0x00786d87);
    /* 00786d87: jmp 0x786da2 */ goto L_00786da2;
L_00786d89:; BB(0x00786d89);
    /* 00786d89: mov ebp, dword ptr [edi + 0x33c] */ r_ebp = R32((u32)(r_edi+0x33cu));
    /* 00786d8f: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d92: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786d94:; BB(0x00786d94);
    /* 00786d94: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 00786d9a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786d9c: je 0x786ebe */ if (fZ) goto L_00786ebe;
L_00786da2:; BB(0x00786da2);
    /* 00786da2: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00786da5: jmp 0x786c98 */ goto L_00786c98;
L_00786daa:; BB(0x00786daa);
    /* 00786daa: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00786dae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786db0: je 0x786eef */ if (fZ) goto L_00786eef;
L_00786db6:; BB(0x00786db6);
    /* 00786db6: mov dword ptr [esi + 0x348], ecx */ W32((u32)(r_esi+0x348u), r_ecx);
    /* 00786dbc: mov dword ptr [ecx + 0x354], esi */ W32((u32)(r_ecx+0x354u), r_esi);
    /* 00786dc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786dc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786dc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786dc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786dc9: ret  */ FN_RET(0x00786c54); r_esp += 4; return;
L_00786dca:; BB(0x00786dca);
    /* 00786dca: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00786dce: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786dd0: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786dd2:; BB(0x00786dd2);
    /* 00786dd2: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
    /* 00786dd8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786dda: je 0x786dee */ if (fZ) goto L_00786dee;
L_00786ddc:; BB(0x00786ddc);
    /* 00786ddc: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
L_00786de2:; BB(0x00786de2);
    /* 00786de2: mov edi, ebp */ r_edi = r_ebp;
    /* 00786de4: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786dea: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786dec: jne 0x786de2 */ if (!fZ) goto L_00786de2;
L_00786dee:; BB(0x00786dee);
    /* 00786dee: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786df2: jmp 0x786da2 */ goto L_00786da2;
L_00786df4:; BB(0x00786df4);
    /* 00786df4: mov ebp, dword ptr [edi + 0x354] */ r_ebp = R32((u32)(r_edi+0x354u));
    /* 00786dfa: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00786dfd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786dff: je 0x786e4c */ if (fZ) goto L_00786e4c;
L_00786e01:; BB(0x00786e01);
    /* 00786e01: mov ebp, dword ptr [ebp + 0x354] */ r_ebp = R32((u32)(r_ebp+0x354u));
    /* 00786e07: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e09: je 0x786e44 */ if (fZ) goto L_00786e44;
L_00786e0b:; BB(0x00786e0b);
    /* 00786e0b: mov edi, dword ptr [esi + 0x350] */ r_edi = R32((u32)(r_esi+0x350u));
    /* 00786e11: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e13: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786e15:; BB(0x00786e15);
    /* 00786e15: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00786e19: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e1b: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786e1d:; BB(0x00786e1d);
    /* 00786e1d: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00786e21: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786e27: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e29: je 0x786da2 */ if (fZ) goto L_00786da2;
L_00786e2f:; BB(0x00786e2f);
    /* 00786e2f: mov edi, ebp */ r_edi = r_ebp;
    /* 00786e31: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786e37: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e39: jne 0x786e2f */ if (!fZ) goto L_00786e2f;
L_00786e3b:; BB(0x00786e3b);
    /* 00786e3b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786e3f: jmp 0x786da2 */ goto L_00786da2;
L_00786e44:; BB(0x00786e44);
    /* 00786e44: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00786e47: jmp 0x786da2 */ goto L_00786da2;
L_00786e4c:; BB(0x00786e4c);
    /* 00786e4c: mov ecx, edi */ r_ecx = r_edi;
    /* 00786e4e: jmp 0x786da2 */ goto L_00786da2;
L_00786e53:; BB(0x00786e53);
    /* 00786e53: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00786e57: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e59: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786e5f:; BB(0x00786e5f);
    /* 00786e5f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00786e63: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786e69: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e6b: je 0x786da2 */ if (fZ) goto L_00786da2;
L_00786e71:; BB(0x00786e71);
    /* 00786e71: mov edi, ebp */ r_edi = r_ebp;
    /* 00786e73: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786e79: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e7b: jne 0x786e71 */ if (!fZ) goto L_00786e71;
L_00786e7d:; BB(0x00786e7d);
    /* 00786e7d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786e81: jmp 0x786da2 */ goto L_00786da2;
L_00786e86:; BB(0x00786e86);
    /* 00786e86: mov ecx, edi */ r_ecx = r_edi;
    /* 00786e88: jmp 0x786da2 */ goto L_00786da2;
L_00786e8d:; BB(0x00786e8d);
    /* 00786e8d: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00786e91: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786e93: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786e99:; BB(0x00786e99);
    /* 00786e99: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
    /* 00786e9f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ea1: je 0x786eb5 */ if (fZ) goto L_00786eb5;
L_00786ea3:; BB(0x00786ea3);
    /* 00786ea3: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
L_00786ea9:; BB(0x00786ea9);
    /* 00786ea9: mov edi, ebp */ r_edi = r_ebp;
    /* 00786eab: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786eb1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786eb3: jne 0x786ea9 */ if (!fZ) goto L_00786ea9;
L_00786eb5:; BB(0x00786eb5);
    /* 00786eb5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786eb9: jmp 0x786da2 */ goto L_00786da2;
L_00786ebe:; BB(0x00786ebe);
    /* 00786ebe: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00786ec2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ec4: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786eca:; BB(0x00786eca);
    /* 00786eca: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
    /* 00786ed0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ed2: je 0x786ee6 */ if (fZ) goto L_00786ee6;
L_00786ed4:; BB(0x00786ed4);
    /* 00786ed4: mov ebp, dword ptr [edi + 0x350] */ r_ebp = R32((u32)(r_edi+0x350u));
L_00786eda:; BB(0x00786eda);
    /* 00786eda: mov edi, ebp */ r_edi = r_ebp;
    /* 00786edc: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786ee2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ee4: jne 0x786eda */ if (!fZ) goto L_00786eda;
L_00786ee6:; BB(0x00786ee6);
    /* 00786ee6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786eea: jmp 0x786da2 */ goto L_00786da2;
L_00786eef:; BB(0x00786eef);
    /* 00786eef: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786ef1: je 0x786c71 */ if (fZ) goto L_00786c71;
L_00786ef7:; BB(0x00786ef7);
    /* 00786ef7: mov dword ptr [esi + 0x34c], edi */ W32((u32)(r_esi+0x34cu), r_edi);
    /* 00786efd: mov dword ptr [edi + 0x350], esi */ W32((u32)(r_edi+0x350u), r_esi);
    /* 00786f03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00786f06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00786f07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00786f08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00786f09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00786f0a: ret  */ FN_RET(0x00786c54); r_esp += 4; return;
L_00786f0b:; BB(0x00786f0b);
    /* 00786f0b: mov ebp, dword ptr [edi + 0x354] */ r_ebp = R32((u32)(r_edi+0x354u));
    /* 00786f11: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00786f14: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f16: je 0x786f5c */ if (fZ) goto L_00786f5c;
L_00786f18:; BB(0x00786f18);
    /* 00786f18: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 00786f1e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f20: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786f26:; BB(0x00786f26);
    /* 00786f26: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00786f2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f2c: jne 0x786da2 */ if (!fZ) goto L_00786da2;
L_00786f32:; BB(0x00786f32);
    /* 00786f32: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00786f35: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00786f39: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786f3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f41: je 0x786da2 */ if (fZ) goto L_00786da2;
L_00786f47:; BB(0x00786f47);
    /* 00786f47: mov edi, ebp */ r_edi = r_ebp;
    /* 00786f49: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 00786f4f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f51: jne 0x786f47 */ if (!fZ) goto L_00786f47;
L_00786f53:; BB(0x00786f53);
    /* 00786f53: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00786f57: jmp 0x786da2 */ goto L_00786da2;
L_00786f5c:; BB(0x00786f5c);
    /* 00786f5c: mov ecx, edi */ r_ecx = r_edi;
    /* 00786f5e: jmp 0x786da2 */ goto L_00786da2;
}

void f_00786f62(void)
{
    FN_ENTER(0x00786f62);
    /* 00786f62: call dword ptr [eax + 0x48a98b55] */ { u32 t = R32((u32)(r_eax+0x48a98b55u)); r_esp -= 4; W32(r_esp, 0x786f68u); call_ind(t); }
    /* 00786f68: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786f6a: add byte ptr [ebp + 0xa840fed], al */ { u32 ad = (u32)(r_ebp+0xa840fedu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f70: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00786f72: add byte ptr [ebx + 0x35081], cl */ { u32 ad = (u32)(r_ebx+0x35081u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f78: add byte ptr [ebp - 0x337bf040], al */ { u32 ad = (u32)(r_ebp+0xcc840fc0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f7e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f80: add byte ptr [ebx + 0x35491], cl */ { u32 ad = (u32)(r_ebx+0x35491u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f86: add byte ptr [ebp - 0x74a78b2e], al */ { u32 ad = (u32)(r_ebp+0x8b5874d2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f8c: test al, 0x54 */ {  u32 a = (u8)r_eax; u32 b = 0x54u; u32 r = (a & b) & 0xffu;   }
    /* 00786f8e: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00786f90: add byte ptr [ebp - 0x717bf013], al */ { u32 ad = (u32)(r_ebp+0x8e840fedu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f96: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f98: add byte ptr [ebx + 0x35085], cl */ { u32 ad = (u32)(r_ebx+0x35085u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786f9e: add byte ptr [ebp - 0x74ed8b40], al */ { u32 ad = (u32)(r_ebp+0x8b1274c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00786fa4: test dword ptr [eax + 3], edx */ {  u32 a = R32((u32)(r_eax+0x3u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;   }
    /* 00786fa7: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00786fa9:; BB(0x00786fa9);
    /* 00786fa9: mov ebp, eax */ r_ebp = r_eax;
    /* 00786fab: mov eax, dword ptr [eax + 0x350] */ r_eax = R32((u32)(r_eax+0x350u));
    /* 00786fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786fb3: jne 0x786fa9 */ if (!fZ) goto L_00786fa9;
L_00786fb5:; BB(0x00786fb5);
    /* 00786fb5: mov dword ptr [ebp + 0x350], edx */ W32((u32)(r_ebp+0x350u), r_edx);
    /* 00786fbb: mov eax, dword ptr [ecx + 0x354] */ r_eax = R32((u32)(r_ecx+0x354u));
    /* 00786fc1: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 00786fcb: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00786fd1: mov dword ptr [edx + 0x34c], ebp */ W32((u32)(r_edx+0x34cu), r_ebp);
    /* 00786fd7: mov ebp, dword ptr [ecx + 0x348] */ r_ebp = R32((u32)(r_ecx+0x348u));
    /* 00786fdd: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 00786fe3: mov dword ptr [ebp + 0x354], eax */ W32((u32)(r_ebp+0x354u), r_eax);
    /* 00786fe9: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00786fef: mov eax, dword ptr [ecx + 0x348] */ r_eax = R32((u32)(r_ecx+0x348u));
    /* 00786ff5: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 00786ffb: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
    /* 00787001: mov dword ptr [ebp + 0x34c], 0 */ W32((u32)(r_ebp+0x34cu), 0x0u);
    /* 0078700b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078700d: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 00787013: mov dword ptr [ecx + 0x34c], eax */ W32((u32)(r_ecx+0x34cu), r_eax);
    /* 00787019: mov dword ptr [ecx + 0x350], eax */ W32((u32)(r_ecx+0x350u), r_eax);
    /* 0078701f: mov dword ptr [ecx + 0x354], eax */ W32((u32)(r_ecx+0x354u), r_eax);
    /* 00787025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787026: ret  */ FN_RET(0x00786f62); r_esp += 4; return;
}

void f_00786f64(void) /* sub_786F64 */
{
    FN_ENTER(0x00786f64);
    /* 00786f64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00786f65: mov ebp, dword ptr [ecx + 0x348] */ r_ebp = R32((u32)(r_ecx+0x348u));
    /* 00786f6b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f6d: je 0x78707d */ if (fZ) goto L_0078707d;
L_00786f73:; BB(0x00786f73);
    /* 00786f73: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 00786f79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f7b: je 0x78704d */ if (fZ) goto L_0078704d;
L_00786f81:; BB(0x00786f81);
    /* 00786f81: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00786f87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f89: je 0x786fe3 */ if (fZ) goto L_00786fe3;
L_00786f8b:; BB(0x00786f8b);
    /* 00786f8b: mov ebp, dword ptr [eax + 0x354] */ r_ebp = R32((u32)(r_eax+0x354u));
    /* 00786f91: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786f93: je 0x787027 */ if (fZ) goto L_00787027;
L_00786f99:; BB(0x00786f99);
    /* 00786f99: mov eax, dword ptr [ebp + 0x350] */ r_eax = R32((u32)(r_ebp+0x350u));
    /* 00786f9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786fa1: je 0x786fb5 */ if (fZ) goto L_00786fb5;
L_00786fa3:; BB(0x00786fa3);
    /* 00786fa3: mov eax, dword ptr [ebp + 0x350] */ r_eax = R32((u32)(r_ebp+0x350u));
L_00786fa9:; BB(0x00786fa9);
    /* 00786fa9: mov ebp, eax */ r_ebp = r_eax;
    /* 00786fab: mov eax, dword ptr [eax + 0x350] */ r_eax = R32((u32)(r_eax+0x350u));
    /* 00786fb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00786fb3: jne 0x786fa9 */ if (!fZ) goto L_00786fa9;
L_00786fb5:; BB(0x00786fb5);
    /* 00786fb5: mov dword ptr [ebp + 0x350], edx */ W32((u32)(r_ebp+0x350u), r_edx);
    /* 00786fbb: mov eax, dword ptr [ecx + 0x354] */ r_eax = R32((u32)(r_ecx+0x354u));
    /* 00786fc1: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 00786fcb: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00786fd1: mov dword ptr [edx + 0x34c], ebp */ W32((u32)(r_edx+0x34cu), r_ebp);
    /* 00786fd7: mov ebp, dword ptr [ecx + 0x348] */ r_ebp = R32((u32)(r_ecx+0x348u));
    /* 00786fdd: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
L_00786fe3:; BB(0x00786fe3);
    /* 00786fe3: mov dword ptr [ebp + 0x354], eax */ W32((u32)(r_ebp+0x354u), r_eax);
    /* 00786fe9: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00786fef: mov eax, dword ptr [ecx + 0x348] */ r_eax = R32((u32)(r_ecx+0x348u));
    /* 00786ff5: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 00786ffb: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
    /* 00787001: mov dword ptr [ebp + 0x34c], 0 */ W32((u32)(r_ebp+0x34cu), 0x0u);
L_0078700b:; BB(0x0078700b);
    /* 0078700b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078700d: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 00787013: mov dword ptr [ecx + 0x34c], eax */ W32((u32)(r_ecx+0x34cu), r_eax);
    /* 00787019: mov dword ptr [ecx + 0x350], eax */ W32((u32)(r_ecx+0x350u), r_eax);
    /* 0078701f: mov dword ptr [ecx + 0x354], eax */ W32((u32)(r_ecx+0x354u), r_eax);
    /* 00787025: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00787026: ret  */ FN_RET(0x00786f64); r_esp += 4; return;
L_00787027:; BB(0x00787027);
    /* 00787027: mov dword ptr [eax + 0x354], edx */ W32((u32)(r_eax+0x354u), r_edx);
    /* 0078702d: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00787033: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 00787039: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 0078703f: mov ebp, dword ptr [ecx + 0x348] */ r_ebp = R32((u32)(r_ecx+0x348u));
    /* 00787045: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 0078704b: jmp 0x786fe3 */ goto L_00786fe3;
L_0078704d:; BB(0x0078704d);
    /* 0078704d: mov eax, dword ptr [ecx + 0x354] */ r_eax = R32((u32)(r_ecx+0x354u));
    /* 00787053: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787055: je 0x787071 */ if (fZ) goto L_00787071;
L_00787057:; BB(0x00787057);
    /* 00787057: mov dword ptr [ebp + 0x354], eax */ W32((u32)(r_ebp+0x354u), r_eax);
    /* 0078705d: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00787063: mov eax, dword ptr [ecx + 0x348] */ r_eax = R32((u32)(r_ecx+0x348u));
    /* 00787069: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 0078706f: jmp 0x78700b */ goto L_0078700b;
L_00787071:; BB(0x00787071);
    /* 00787071: mov dword ptr [ebp + 0x354], 0 */ W32((u32)(r_ebp+0x354u), 0x0u);
    /* 0078707b: jmp 0x78700b */ goto L_0078700b;
L_0078707d:; BB(0x0078707d);
    /* 0078707d: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00787083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787085: je 0x7871c1 */ if (fZ) goto L_007871c1;
L_0078708b:; BB(0x0078708b);
    /* 0078708b: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00787091: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787093: je 0x78713a */ if (fZ) goto L_0078713a;
L_00787099:; BB(0x00787099);
    /* 00787099: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 0078709f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007870a1: je 0x7870f7 */ if (fZ) goto L_007870f7;
L_007870a3:; BB(0x007870a3);
    /* 007870a3: mov eax, dword ptr [edx + 0x354] */ r_eax = R32((u32)(r_edx+0x354u));
    /* 007870a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007870ab: je 0x787114 */ if (fZ) goto L_00787114;
L_007870ad:; BB(0x007870ad);
    /* 007870ad: mov edx, dword ptr [eax + 0x350] */ r_edx = R32((u32)(r_eax+0x350u));
    /* 007870b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007870b5: je 0x7870c9 */ if (fZ) goto L_007870c9;
L_007870b7:; BB(0x007870b7);
    /* 007870b7: mov edx, dword ptr [eax + 0x350] */ r_edx = R32((u32)(r_eax+0x350u));
L_007870bd:; BB(0x007870bd);
    /* 007870bd: mov eax, edx */ r_eax = r_edx;
    /* 007870bf: mov edx, dword ptr [edx + 0x350] */ r_edx = R32((u32)(r_edx+0x350u));
    /* 007870c5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007870c7: jne 0x7870bd */ if (!fZ) goto L_007870bd;
L_007870c9:; BB(0x007870c9);
    /* 007870c9: mov dword ptr [eax + 0x350], ebp */ W32((u32)(r_eax+0x350u), r_ebp);
    /* 007870cf: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 007870d5: mov dword ptr [edx + 0x348], 0 */ W32((u32)(r_edx+0x348u), 0x0u);
    /* 007870df: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 007870e5: mov dword ptr [ebp + 0x34c], eax */ W32((u32)(r_ebp+0x34cu), r_eax);
    /* 007870eb: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 007870f1: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
L_007870f7:; BB(0x007870f7);
    /* 007870f7: mov dword ptr [eax + 0x350], edx */ W32((u32)(r_eax+0x350u), r_edx);
    /* 007870fd: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00787103: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00787109: mov dword ptr [edx + 0x34c], eax */ W32((u32)(r_edx+0x34cu), r_eax);
    /* 0078710f: jmp 0x78700b */ goto L_0078700b;
L_00787114:; BB(0x00787114);
    /* 00787114: mov dword ptr [edx + 0x354], ebp */ W32((u32)(r_edx+0x354u), r_ebp);
    /* 0078711a: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00787120: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 00787126: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 0078712c: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 00787132: mov edx, dword ptr [ecx + 0x350] */ r_edx = R32((u32)(r_ecx+0x350u));
    /* 00787138: jmp 0x7870f7 */ goto L_007870f7;
L_0078713a:; BB(0x0078713a);
    /* 0078713a: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 00787140: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787142: je 0x787192 */ if (fZ) goto L_00787192;
L_00787144:; BB(0x00787144);
    /* 00787144: mov edx, dword ptr [eax + 0x354] */ r_edx = R32((u32)(r_eax+0x354u));
    /* 0078714a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078714c: je 0x7871a1 */ if (fZ) goto L_007871a1;
L_0078714e:; BB(0x0078714e);
    /* 0078714e: mov eax, dword ptr [edx + 0x350] */ r_eax = R32((u32)(r_edx+0x350u));
    /* 00787154: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787156: je 0x78716a */ if (fZ) goto L_0078716a;
L_00787158:; BB(0x00787158);
    /* 00787158: mov eax, dword ptr [edx + 0x350] */ r_eax = R32((u32)(r_edx+0x350u));
L_0078715e:; BB(0x0078715e);
    /* 0078715e: mov edx, eax */ r_edx = r_eax;
    /* 00787160: mov eax, dword ptr [eax + 0x350] */ r_eax = R32((u32)(r_eax+0x350u));
    /* 00787166: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00787168: jne 0x78715e */ if (!fZ) goto L_0078715e;
L_0078716a:; BB(0x0078716a);
    /* 0078716a: mov dword ptr [edx + 0x350], ebp */ W32((u32)(r_edx+0x350u), r_ebp);
    /* 00787170: mov eax, dword ptr [ecx + 0x354] */ r_eax = R32((u32)(r_ecx+0x354u));
    /* 00787176: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 00787180: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 00787186: mov dword ptr [ebp + 0x34c], edx */ W32((u32)(r_ebp+0x34cu), r_edx);
    /* 0078718c: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
L_00787192:; BB(0x00787192);
    /* 00787192: mov dword ptr [eax + 0x350], 0 */ W32((u32)(r_eax+0x350u), 0x0u);
    /* 0078719c: jmp 0x78700b */ goto L_0078700b;
L_007871a1:; BB(0x007871a1);
    /* 007871a1: mov dword ptr [eax + 0x354], ebp */ W32((u32)(r_eax+0x354u), r_ebp);
    /* 007871a7: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 007871ad: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 007871b3: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 007871b9: mov eax, dword ptr [ecx + 0x34c] */ r_eax = R32((u32)(r_ecx+0x34cu));
    /* 007871bf: jmp 0x787192 */ goto L_00787192;
L_007871c1:; BB(0x007871c1);
    /* 007871c1: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
    /* 007871c7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007871c9: je 0x787256 */ if (fZ) goto L_00787256;
L_007871cf:; BB(0x007871cf);
    /* 007871cf: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 007871d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007871d7: je 0x787227 */ if (fZ) goto L_00787227;
L_007871d9:; BB(0x007871d9);
    /* 007871d9: mov eax, dword ptr [ebp + 0x354] */ r_eax = R32((u32)(r_ebp+0x354u));
    /* 007871df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007871e1: je 0x787236 */ if (fZ) goto L_00787236;
L_007871e3:; BB(0x007871e3);
    /* 007871e3: mov ebp, dword ptr [eax + 0x350] */ r_ebp = R32((u32)(r_eax+0x350u));
    /* 007871e9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007871eb: je 0x7871ff */ if (fZ) goto L_007871ff;
L_007871ed:; BB(0x007871ed);
    /* 007871ed: mov ebp, dword ptr [eax + 0x350] */ r_ebp = R32((u32)(r_eax+0x350u));
L_007871f3:; BB(0x007871f3);
    /* 007871f3: mov eax, ebp */ r_eax = r_ebp;
    /* 007871f5: mov ebp, dword ptr [ebp + 0x350] */ r_ebp = R32((u32)(r_ebp+0x350u));
    /* 007871fb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007871fd: jne 0x7871f3 */ if (!fZ) goto L_007871f3;
L_007871ff:; BB(0x007871ff);
    /* 007871ff: mov dword ptr [eax + 0x350], edx */ W32((u32)(r_eax+0x350u), r_edx);
    /* 00787205: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 0078720b: mov dword ptr [edx + 0x348], 0 */ W32((u32)(r_edx+0x348u), 0x0u);
    /* 00787215: mov ebp, dword ptr [ecx + 0x354] */ r_ebp = R32((u32)(r_ecx+0x354u));
    /* 0078721b: mov dword ptr [ebp + 0x34c], eax */ W32((u32)(r_ebp+0x34cu), r_eax);
    /* 00787221: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
L_00787227:; BB(0x00787227);
    /* 00787227: mov dword ptr [ebp + 0x34c], 0 */ W32((u32)(r_ebp+0x34cu), 0x0u);
    /* 00787231: jmp 0x78700b */ goto L_0078700b;
L_00787236:; BB(0x00787236);
    /* 00787236: mov dword ptr [ebp + 0x354], edx */ W32((u32)(r_ebp+0x354u), r_edx);
    /* 0078723c: mov edx, dword ptr [ecx + 0x354] */ r_edx = R32((u32)(r_ecx+0x354u));
    /* 00787242: mov eax, dword ptr [ecx + 0x350] */ r_eax = R32((u32)(r_ecx+0x350u));
    /* 00787248: mov dword ptr [edx + 0x348], eax */ W32((u32)(r_edx+0x348u), r_eax);
    /* 0078724e: mov ebp, dword ptr [ecx + 0x350] */ r_ebp = R32((u32)(r_ecx+0x350u));
    /* 00787254: jmp 0x787227 */ goto L_00787227;
L_00787256:; BB(0x00787256);
    /* 00787256: mov eax, dword ptr [ecx + 0x354] */ r_eax = R32((u32)(r_ecx+0x354u));
    /* 0078725c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078725e: je 0x78700b */ if (fZ) goto L_0078700b;
L_00787264:; BB(0x00787264);
    /* 00787264: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 0078726e: jmp 0x78700b */ goto L_0078700b;
}

