#include "protos.h"

void f_0061e110(void) /* sub_61E110 */
{
    FN_ENTER(0x0061e110);
    /* 0061e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e115: push 0x8e1ef6 */ { u32 v = 0x8e1ef6u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e11a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e128: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e12b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e12e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061e131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061e134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061e137: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e139: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61e13eu); f_008581c5();
    /* 0061e13e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e13f: mov dword ptr [0xa8ec20], eax */ W32((u32)(0xa8ec20u), r_eax);
    /* 0061e144: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061e149: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e14c: je 0x61e1e2 */ if (fZ) goto L_0061e1e2;
L_0061e152:; BB(0x0061e152);
    /* 0061e152: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061e159: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e15e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61e163u); f_008581c5();
    /* 0061e163: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e164: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061e167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e169: je 0x61e1de */ if (fZ) goto L_0061e1de;
L_0061e16b:; BB(0x0061e16b);
    /* 0061e16b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061e172: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e179: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061e17c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e17e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e17f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e181: push 0x9c5260 */ { u32 v = 0x9c5260u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e186: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e188: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61e18du); f_005b7a84();
    /* 0061e18d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061e190: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061e197:; BB(0x0061e197);
    /* 0061e197: mov dword ptr [0xa8ec24], eax */ W32((u32)(0xa8ec24u), r_eax);
    /* 0061e19c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061e1a3: push 0x930f24 */ { u32 v = 0x930f24u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1a8: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61e1adu); f_008009dc();
    /* 0061e1ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e1ae: mov edx, dword ptr [0xa8ec20] */ r_edx = R32((u32)(0xa8ec20u));
    /* 0061e1b4: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
L_0061e1b6:; BB(0x0061e1b6);
    /* 0061e1b6: mov eax, dword ptr [0xa8ec24] */ r_eax = R32((u32)(0xa8ec24u));
    /* 0061e1bb: mov edi, dword ptr [0xa8ec20] */ r_edi = R32((u32)(0xa8ec20u));
    /* 0061e1c1: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0061e1c7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 0061e1ca: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0061e1cd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061e1d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e1d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e1da: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e1dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e1dd: ret  */ FN_RET(0x0061e110); r_esp += 4; return;
L_0061e1de:; BB(0x0061e1de);
    /* 0061e1de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e1e0: jmp 0x61e197 */ goto L_0061e197;
L_0061e1e2:; BB(0x0061e1e2);
    /* 0061e1e2: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x61e1e7u); f_0078b220();
    /* 0061e1e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e1e9: je 0x61e152 */ if (fZ) goto L_0061e152;
L_0061e1ef:; BB(0x0061e1ef);
    /* 0061e1ef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061e1f6: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e1fb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61e200u); f_008581c5();
    /* 0061e200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e201: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061e204: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e206: je 0x61e258 */ if (fZ) goto L_0061e258;
L_0061e208:; BB(0x0061e208);
    /* 0061e208: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061e20f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061e216: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e219: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e21b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e21c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e21d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e21e: push 0x9c5280 */ { u32 v = 0x9c5280u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e223: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e225: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61e22au); f_005b7a84();
    /* 0061e22a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e22d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061e234:; BB(0x0061e234);
    /* 0061e234: mov dword ptr [0xa8ec24], eax */ W32((u32)(0xa8ec24u), r_eax);
    /* 0061e239: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061e240: push 0x930f0c */ { u32 v = 0x930f0cu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e245: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x61e24au); f_008009dc();
    /* 0061e24a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e24b: mov edx, dword ptr [0xa8ec20] */ r_edx = R32((u32)(0xa8ec20u));
    /* 0061e251: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0061e253: jmp 0x61e1b6 */ goto L_0061e1b6;
L_0061e258:; BB(0x0061e258);
    /* 0061e258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e25a: jmp 0x61e234 */ goto L_0061e234;
}

void f_0061e25c(void) /* sub_61E25C */
{
    FN_ENTER(0x0061e25c);
    /* 0061e25c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e25d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061e25f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061e261: call 0x61e280 */ r_esp -= 4; W32(r_esp, 0x61e266u); f_0061e280();
    /* 0061e266: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061e26a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e26c: jne 0x61e272 */ if (!fZ) goto L_0061e272;
L_0061e26e:; BB(0x0061e26e);
    /* 0061e26e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061e26f: ret 4 */ FN_RET(0x0061e25c); r_esp += 8; return;
L_0061e272:; BB(0x0061e272);
    /* 0061e272: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e273: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61e278u); f_005c2f74();
    /* 0061e278: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e279: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061e27a: ret 4 */ FN_RET(0x0061e25c); r_esp += 8; return;
}

void f_0061e280(void) /* sub_61E280 */
{
    FN_ENTER(0x0061e280);
    /* 0061e280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e281: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e285: push 0x8e1f10 */ { u32 v = 0x8e1f10u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e28a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e291: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e298: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e29b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e29e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061e2a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061e2a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061e2a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061e2aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e2b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e2b4: mov dword ptr [eax], 0xb276a0 */ W32((u32)(r_eax), 0xb276a0u);
    /* 0061e2ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2bb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61e2c0u); f_007b4e84();
    /* 0061e2c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e2c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e2c4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61e2c9u); f_007b9c8c();
    /* 0061e2c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061e2d0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e2d3: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61e2d8u); f_00619b10();
    /* 0061e2d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e2db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e2e2: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e2e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e2e5: ret  */ FN_RET(0x0061e280); r_esp += 4; return;
}

void f_0061e2e8(void) /* sub_61E2E8 */
{
    FN_ENTER(0x0061e2e8);
    /* 0061e2e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061e2e9: mov esi, ecx */ r_esi = r_ecx;
    /* 0061e2eb: mov edx, dword ptr [esi + 0xd0] */ r_edx = R32((u32)(r_esi+0xd0u));
    /* 0061e2f1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061e2f4: jne 0x61e354 */ if (!fZ) goto L_0061e354;
L_0061e2f6:; BB(0x0061e2f6);
    /* 0061e2f6: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0061e2fc: je 0x61e329 */ if (fZ) goto L_0061e329;
L_0061e2fe:; BB(0x0061e2fe);
    /* 0061e2fe: fld dword ptr [0x930f54] */ FPUSH(R_F32((u32)(0x930f54u)));
    /* 0061e304: fadd dword ptr [esi + 0xd8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xd8u));
    /* 0061e30a: fcom dword ptr [0x930f5c] */ fx_compare(ST(0), R_F32((u32)(0x930f5cu))); 
    /* 0061e310: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061e312: fstp dword ptr [esi + 0xd8] */ W_F32((u32)(r_esi+0xd8u), ST(0)); FPOP();
    /* 0061e318: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061e319: jb 0x61e352 */ if (fC) goto L_0061e352;
L_0061e31b:; BB(0x0061e31b);
    /* 0061e31b: and edx, 0xfffeffff */ {  u32 a = r_edx; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e321: mov dword ptr [esi + 0xd0], edx */ W32((u32)(r_esi+0xd0u), r_edx);
    /* 0061e327: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061e328: ret  */ FN_RET(0x0061e2e8); r_esp += 4; return;
L_0061e329:; BB(0x0061e329);
    /* 0061e329: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 0061e32f: fsub dword ptr [0x930f54] */ ST(0) = ST(0) - R_F32((u32)(0x930f54u));
    /* 0061e335: fcom dword ptr [0x930f60] */ fx_compare(ST(0), R_F32((u32)(0x930f60u))); 
    /* 0061e33b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061e33d: fstp dword ptr [esi + 0xd8] */ W_F32((u32)(r_esi+0xd8u), ST(0)); FPOP();
    /* 0061e343: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061e344: ja 0x61e352 */ if ((!fC&&!fZ)) goto L_0061e352;
L_0061e346:; BB(0x0061e346);
    /* 0061e346: or edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e34c: mov dword ptr [esi + 0xd0], edx */ W32((u32)(r_esi+0xd0u), r_edx);
L_0061e352:; BB(0x0061e352);
    /* 0061e352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061e353: ret  */ FN_RET(0x0061e2e8); r_esp += 4; return;
L_0061e354:; BB(0x0061e354);
    /* 0061e354: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e359: mov ecx, esi */ r_ecx = r_esi;
    /* 0061e35b: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61e360u); f_006134c8();
    /* 0061e360: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061e363: jne 0x61e352 */ if (!fZ) goto L_0061e352;
L_0061e365:; BB(0x0061e365);
    /* 0061e365: mov dword ptr [esi + 0xac], 1 */ W32((u32)(r_esi+0xacu), 0x1u);
    /* 0061e36f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e371: mov ecx, esi */ r_ecx = r_esi;
    /* 0061e373: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e375: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61e37au); f_007b52c4();
    /* 0061e37a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061e37b: ret  */ FN_RET(0x0061e2e8); r_esp += 4; return;
}

void f_0061e37c(void) /* sub_61E37C */
{
    FN_ENTER(0x0061e37c);
    /* 0061e37c: fld dword ptr [0x930f50] */ FPUSH(R_F32((u32)(0x930f50u)));
    /* 0061e382: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0061e385: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0061e388: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 0061e38b: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0061e38d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0061e38f: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0061e391: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061e393: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061e394: jb 0x61e3a9 */ if (fC) goto L_0061e3a9;
L_0061e396:; BB(0x0061e396);
    /* 0061e396: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0061e398: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0061e39a: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0061e39d: mov dword ptr [ecx + 0xac], 2 */ W32((u32)(r_ecx+0xacu), 0x2u);
    /* 0061e3a7: jmp 0x61e3b8 */ goto L_0061e3b8;
L_0061e3a9:; BB(0x0061e3a9);
    /* 0061e3a9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0061e3ab: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0061e3ad: fld dword ptr [0xa8ec2c] */ FPUSH(R_F32((u32)(0xa8ec2cu)));
    /* 0061e3b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0061e3b5: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_0061e3b8:; BB(0x0061e3b8);
    /* 0061e3b8: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0061e3bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e3bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3c1: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3c6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x61e3cbu); f_008144b0();
    /* 0061e3cb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061e3ce: ret  */ FN_RET(0x0061e37c); r_esp += 4; return;
}

void f_0061e3d0(void) /* sub_61E3D0 */
{
    FN_ENTER(0x0061e3d0);
    /* 0061e3d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3d1: mov edi, ecx */ r_edi = r_ecx;
    /* 0061e3d3: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 0061e3d9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061e3db: jne 0x61e3f4 */ if (!fZ) goto L_0061e3f4;
L_0061e3dd:; BB(0x0061e3dd);
    /* 0061e3dd: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061e3e7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0061e3eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3ed: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61e3f2u); f_007b52ec();
L_0061e3f2:; BB(0x0061e3f2);
    /* 0061e3f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061e3f3: ret  */ FN_RET(0x0061e3d0); r_esp += 4; return;
L_0061e3f4:; BB(0x0061e3f4);
    /* 0061e3f4: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e3f9: mov ecx, edi */ r_ecx = r_edi;
    /* 0061e3fb: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61e400u); f_006134c8();
    /* 0061e400: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061e403: je 0x61e3f2 */ if (fZ) goto L_0061e3f2;
L_0061e405:; BB(0x0061e405);
    /* 0061e405: mov dword ptr [edi + 0xac], 3 */ W32((u32)(r_edi+0xacu), 0x3u);
    /* 0061e40f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e411: mov ecx, edi */ r_ecx = r_edi;
    /* 0061e413: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e415: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x61e41au); f_007b52ec();
    /* 0061e41a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0061e41b: ret  */ FN_RET(0x0061e3d0); r_esp += 4; return;
}

void f_0061e41c(void) /* sub_61E41C */
{
    FN_ENTER(0x0061e41c);
    /* 0061e41c: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0061e41f: fld dword ptr [ecx + 0x54] */ FPUSH(R_F32((u32)(r_ecx+0x54u)));
    /* 0061e422: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 0061e424: fcomp dword ptr [0x930f48] */ fx_compare(ST(0), R_F32((u32)(0x930f48u))); FPOP();
    /* 0061e42a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061e42c: mov edx, dword ptr [ecx + 0x54] */ r_edx = R32((u32)(r_ecx+0x54u));
    /* 0061e42f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061e430: ja 0x61e443 */ if ((!fC&&!fZ)) goto L_0061e443;
L_0061e432:; BB(0x0061e432);
    /* 0061e432: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0061e434: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0061e43e: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0061e441: jmp 0x61e44e */ goto L_0061e44e;
L_0061e443:; BB(0x0061e443);
    /* 0061e443: fld dword ptr [0xa8ec2c] */ FPUSH(R_F32((u32)(0xa8ec2cu)));
    /* 0061e449: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0061e44b: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_0061e44e:; BB(0x0061e44e);
    /* 0061e44e: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0061e451: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e453: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e454: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e455: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e456: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e457: push 0x442 */ { u32 v = 0x442u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e45c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x61e461u); f_008144b0();
    /* 0061e461: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061e464: ret  */ FN_RET(0x0061e41c); r_esp += 4; return;
}

void f_0061e468(void) /* sub_61E468 */
{
    FN_ENTER(0x0061e468);
    /* 0061e468: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061e469: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e46a: mov esi, ecx */ r_esi = r_ecx;
    /* 0061e46c: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e472: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e478: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0061e47a: mov ecx, esi */ r_ecx = r_esi;
    /* 0061e47c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61e47fu); call_ind(t); }
    /* 0061e47f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e481: je 0x61e54f */ if (fZ) goto L_0061e54f;
L_0061e487:; BB(0x0061e487);
    /* 0061e487: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e48c: mov ecx, esi */ r_ecx = r_esi;
    /* 0061e48e: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61e493u); f_00613244();
    /* 0061e493: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e495: je 0x61e54f */ if (fZ) goto L_0061e54f;
L_0061e49b:; BB(0x0061e49b);
    /* 0061e49b: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0061e49e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61e4a3u); f_00829cc8();
    /* 0061e4a3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61e4a8u); f_0082d7b0();
    /* 0061e4a8: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0061e4ab: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61e4b0u); f_0082d838();
    /* 0061e4b0: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0061e4b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e4b5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61e4bau); f_0082d8bc();
    /* 0061e4ba: mov ebp, dword ptr [esi + 0x34] */ r_ebp = R32((u32)(r_esi+0x34u));
    /* 0061e4bd: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061e4c0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61e4c5u); f_0082d838();
    /* 0061e4c5: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e4c8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61e4cdu); f_008321d8();
    /* 0061e4cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e4ce: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61e4d3u); f_0082dbac();
    /* 0061e4d3: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0061e4d8: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0061e4dd: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061e4e0: lea edx, [esi + 0xd4] */ r_edx = (u32)(r_esi+0xd4u);
    /* 0061e4e6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061e4eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e4ec: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61e4f1u); f_0082d710();
    /* 0061e4f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e4f2: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0061e4f5: mov eax, dword ptr [esi + 0xd0] */ r_eax = R32((u32)(r_esi+0xd0u));
    /* 0061e4fb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061e4fd: je 0x61e507 */ if (fZ) goto L_0061e507;
L_0061e4ff:; BB(0x0061e4ff);
    /* 0061e4ff: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0061e502: mov ebp, dword ptr [eax + 0x30] */ r_ebp = R32((u32)(r_eax+0x30u));
    /* 0061e505: jmp 0x61e50a */ goto L_0061e50a;
L_0061e507:; BB(0x0061e507);
    /* 0061e507: mov ebp, dword ptr [edx + 0x2c] */ r_ebp = R32((u32)(r_edx+0x2cu));
L_0061e50a:; BB(0x0061e50a);
    /* 0061e50a: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061e50d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61e512u); f_0082d838();
    /* 0061e512: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e515: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61e51au); f_008321d8();
    /* 0061e51a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e51b: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 0061e51e: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0061e521: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61e526u); f_0082d838();
    /* 0061e526: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e529: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61e52eu); f_008321d8();
    /* 0061e52e: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e533: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61e538u); f_0082d710();
    /* 0061e538: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061e53b: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0061e540: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061e545: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61e54au); f_0082dab0();
    /* 0061e54a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61e54fu); f_0082da80();
L_0061e54f:; BB(0x0061e54f);
    /* 0061e54f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e550: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061e551: ret  */ FN_RET(0x0061e468); r_esp += 4; return;
}

void f_0061e554(void) /* sub_61E554 */
{
    FN_ENTER(0x0061e554);
    /* 0061e554: mov ecx, dword ptr [0xa8ec30] */ r_ecx = R32((u32)(0xa8ec30u));
    /* 0061e55a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e55c: je 0x61e571 */ if (fZ) goto L_0061e571;
L_0061e55e:; BB(0x0061e55e);
    /* 0061e55e: je 0x61e567 */ if (fZ) goto L_0061e567;
L_0061e560:; BB(0x0061e560);
    /* 0061e560: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e562: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61e567u); f_004066a8();
L_0061e567:; BB(0x0061e567);
    /* 0061e567: mov dword ptr [0xa8ec30], 0 */ W32((u32)(0xa8ec30u), 0x0u);
L_0061e571:; BB(0x0061e571);
    /* 0061e571: ret  */ FN_RET(0x0061e554); r_esp += 4; return;
}

void f_0061e574(void)
{
    FN_ENTER(0x0061e574);
    /* 0061e574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e575: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e579: push 0x8e1f38 */ { u32 v = 0x8e1f38u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e57e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e58c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e58f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e592: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061e595: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061e598: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061e59b: push 0xe4 */ { u32 v = 0xe4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5a0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061e5a7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61e5acu); f_005caba4();
    /* 0061e5ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e5ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061e5b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e5b2: je 0x61e5eb */ if (fZ) goto L_0061e5eb;
L_0061e5b4:; BB(0x0061e5b4);
    /* 0061e5b4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061e5bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e5c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e5c5: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e5cb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e5ce: call 0x61e5f0 */ r_esp -= 4; W32(r_esp, 0x61e5d3u); f_0061e5f0();
    /* 0061e5d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e5d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061e5dd:; BB(0x0061e5dd);
    /* 0061e5dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e5e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e5e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e5e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e5ea: ret  */ FN_RET(0x0061e574); r_esp += 4; return;
L_0061e5eb:; BB(0x0061e5eb);
    /* 0061e5eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e5ed: jmp 0x61e5dd */ goto L_0061e5dd;
}

void f_0061e5f0(void) /* sub_61E5F0 */
{
    FN_ENTER(0x0061e5f0);
    /* 0061e5f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e5f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5f5: push 0x8e1f54 */ { u32 v = 0x8e1f54u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e5fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e601: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e608: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e60b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e60e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061e611: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061e614: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061e617: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061e61a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e61d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061e620: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061e623: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61e628u); f_00619df0();
    /* 0061e628: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e62f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e632: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061e635: mov dword ptr [ecx], 0xb276a0 */ W32((u32)(r_ecx), 0xb276a0u);
    /* 0061e63b: mov eax, dword ptr [0x9c5300] */ r_eax = R32((u32)(0x9c5300u));
    /* 0061e640: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e641: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061e644: call dword ptr [0xb276b4] */ { u32 t = R32((u32)(0xb276b4u)); r_esp -= 4; W32(r_esp, 0x61e64au); call_ind(t); }
    /* 0061e64a: mov ecx, dword ptr [0xa8ec30] */ r_ecx = R32((u32)(0xa8ec30u));
    /* 0061e650: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e652: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x61e657u); f_005b8610();
    /* 0061e657: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e65a: mov ecx, dword ptr [0xa8ec30] */ r_ecx = R32((u32)(0xa8ec30u));
    /* 0061e660: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e662: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0061e665: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x61e66au); f_005b8624();
    /* 0061e66a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e66d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e66f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0061e672: push 0x9c5304 */ { u32 v = 0x9c5304u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e677: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61e67cu); f_007b9a88();
    /* 0061e67c: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061e67f: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61e684u); f_007b999c();
    /* 0061e684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e685: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e688: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61e68du); f_007b4f54();
    /* 0061e68d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e690: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061e692: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61e695u); call_ind(t); }
    /* 0061e695: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061e698: mov dword ptr [eax + 0xd4], 0x3f800000 */ W32((u32)(r_eax+0xd4u), 0x3f800000u);
    /* 0061e6a2: mov dword ptr [eax + 0xd8], 0x3f800000 */ W32((u32)(r_eax+0xd8u), 0x3f800000u);
    /* 0061e6ac: mov dword ptr [eax + 0xdc], 0x3f800000 */ W32((u32)(r_eax+0xdcu), 0x3f800000u);
    /* 0061e6b6: mov dword ptr [eax + 0xe0], 0x3f800000 */ W32((u32)(r_eax+0xe0u), 0x3f800000u);
    /* 0061e6c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e6c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e6ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e6cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e6cd: ret 8 */ FN_RET(0x0061e5f0); r_esp += 12; return;
}

void f_0061e6d0(void) /* sub_61E6D0 */
{
    FN_ENTER(0x0061e6d0);
    /* 0061e6d0: mov dword ptr [0xa8ec2c], 0x3f800000 */ W32((u32)(0xa8ec2cu), 0x3f800000u);
    /* 0061e6da: ret  */ FN_RET(0x0061e6d0); r_esp += 4; return;
}

void f_0061e6dc(void) /* sub_61E6DC */
{
    FN_ENTER(0x0061e6dc);
    /* 0061e6dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e6df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6e1: push 0x8e1f96 */ { u32 v = 0x8e1f96u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e6ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e6ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e6f4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e6f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e6fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061e6fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061e700: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061e703: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 0061e708: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e70b: je 0x61e769 */ if (fZ) goto L_0061e769;
L_0061e70d:; BB(0x0061e70d);
    /* 0061e70d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0061e714: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e719: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61e71eu); f_008581c5();
    /* 0061e71e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e71f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0061e722: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e724: je 0x61e765 */ if (fZ) goto L_0061e765;
L_0061e726:; BB(0x0061e726);
    /* 0061e726: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0061e72d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e734: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061e737: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e739: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e73a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e73b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e73c: push 0x9c52d0 */ { u32 v = 0x9c52d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e741: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e743: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61e748u); f_005b7a84();
    /* 0061e748: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0061e74b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0061e752:; BB(0x0061e752);
    /* 0061e752: mov dword ptr [0xa8ec30], eax */ W32((u32)(0xa8ec30u), r_eax);
L_0061e757:; BB(0x0061e757);
    /* 0061e757: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e75a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e761: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e764: ret  */ FN_RET(0x0061e6dc); r_esp += 4; return;
L_0061e765:; BB(0x0061e765);
    /* 0061e765: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e767: jmp 0x61e752 */ goto L_0061e752;
L_0061e769:; BB(0x0061e769);
    /* 0061e769: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x61e76eu); f_0078b220();
    /* 0061e76e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e770: je 0x61e70d */ if (fZ) goto L_0061e70d;
L_0061e772:; BB(0x0061e772);
    /* 0061e772: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061e779: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e77e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x61e783u); f_008581c5();
    /* 0061e783: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e784: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061e787: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e789: je 0x61e7be */ if (fZ) goto L_0061e7be;
L_0061e78b:; BB(0x0061e78b);
    /* 0061e78b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061e792: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0061e799: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e79c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e79e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e79f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7a1: push 0x9c52f0 */ { u32 v = 0x9c52f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7a8: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x61e7adu); f_005b7a84();
    /* 0061e7ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e7b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061e7b7:; BB(0x0061e7b7);
    /* 0061e7b7: mov dword ptr [0xa8ec30], eax */ W32((u32)(0xa8ec30u), r_eax);
    /* 0061e7bc: jmp 0x61e757 */ goto L_0061e757;
L_0061e7be:; BB(0x0061e7be);
    /* 0061e7be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e7c0: jmp 0x61e7b7 */ goto L_0061e7b7;
}

void f_0061e7c4(void) /* sub_61E7C4 */
{
    FN_ENTER(0x0061e7c4);
    /* 0061e7c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061e7c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061e7c9: call 0x61e7e8 */ r_esp -= 4; W32(r_esp, 0x61e7ceu); f_0061e7e8();
    /* 0061e7ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0061e7d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061e7d4: jne 0x61e7da */ if (!fZ) goto L_0061e7da;
L_0061e7d6:; BB(0x0061e7d6);
    /* 0061e7d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061e7d7: ret 4 */ FN_RET(0x0061e7c4); r_esp += 8; return;
L_0061e7da:; BB(0x0061e7da);
    /* 0061e7da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x61e7e0u); f_005c2f74();
    /* 0061e7e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e7e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061e7e2: ret 4 */ FN_RET(0x0061e7c4); r_esp += 8; return;
}

void f_0061e7e8(void) /* sub_61E7E8 */
{
    FN_ENTER(0x0061e7e8);
    /* 0061e7e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0061e7eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7ed: push 0x8e1fb0 */ { u32 v = 0x8e1fb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061e7f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e7f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061e800: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e803: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061e806: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061e809: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061e80c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061e80f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0061e812: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061e819: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e81c: mov dword ptr [eax], 0xb277c0 */ W32((u32)(r_eax), 0xb277c0u);
    /* 0061e822: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e823: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x61e828u); f_007b4e84();
    /* 0061e828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e829: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e82c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x61e831u); f_007b9c8c();
    /* 0061e831: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0061e838: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061e83b: call 0x619b10 */ r_esp -= 4; W32(r_esp, 0x61e840u); f_00619b10();
    /* 0061e840: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061e843: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061e84a: mov esp, ebp */ r_esp = r_ebp;
    /* 0061e84c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061e84d: ret  */ FN_RET(0x0061e7e8); r_esp += 4; return;
}

void f_0061e850(void) /* sub_61E850 */
{
    FN_ENTER(0x0061e850);
    /* 0061e850: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e851: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061e854: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061e856: mov eax, dword ptr [ebx + 0xcc] */ r_eax = R32((u32)(r_ebx+0xccu));
    /* 0061e85c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e85f: je 0x61e9e3 */ if (fZ) goto L_0061e9e3;
L_0061e865:; BB(0x0061e865);
    /* 0061e865: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e868: jne 0x61e942 */ if (!fZ) goto L_0061e942;
L_0061e86e:; BB(0x0061e86e);
    /* 0061e86e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061e874: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 0061e87a: and eax, 0xfff0ffff */ {  u32 a = r_eax; u32 b = 0xfff0ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e87f: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061e885: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e888: je 0x61ea22 */ if (fZ) goto L_0061ea22;
L_0061e88e:; BB(0x0061e88e);
    /* 0061e88e: mov edx, ecx */ r_edx = r_ecx;
    /* 0061e890: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0061e892: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e895: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 0061e89b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e89d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061e89f: jle 0x61e8db */ if ((fZ||fS!=fO)) goto L_0061e8db;
L_0061e8a1:; BB(0x0061e8a1);
    /* 0061e8a1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0061e8a4: mov esi, eax */ r_esi = r_eax;
L_0061e8a6:; BB(0x0061e8a6);
    /* 0061e8a6: mov edx, esi */ r_edx = r_esi;
    /* 0061e8a8: add edx, dword ptr [ebx + 0xc8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0061e8ae: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 0061e8b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061e8b2: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61e8b7u); f_00816eec();
    /* 0061e8b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e8b8: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061e8bb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e8be: jne 0x61e8c7 */ if (!fZ) goto L_0061e8c7;
L_0061e8c0:; BB(0x0061e8c0);
    /* 0061e8c0: add dword ptr [ebx + 0xd4], 1 */ { u32 ad = (u32)(r_ebx+0xd4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0061e8c7:; BB(0x0061e8c7);
    /* 0061e8c7: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061e8ca: cmp esi, dword ptr [ebx + 0xd8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061e8d0: jl 0x61e8a6 */ if ((fS!=fO)) goto L_0061e8a6;
L_0061e8d2:; BB(0x0061e8d2);
    /* 0061e8d2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0061e8d5: mov edx, dword ptr [ebx + 0xd4] */ r_edx = R32((u32)(r_ebx+0xd4u));
L_0061e8db:; BB(0x0061e8db);
    /* 0061e8db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061e8dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0061e8df: jle 0x61e925 */ if ((fZ||fS!=fO)) goto L_0061e925;
L_0061e8e1:; BB(0x0061e8e1);
    /* 0061e8e1: mov ecx, dword ptr [ebx + 0xd0] */ r_ecx = R32((u32)(r_ebx+0xd0u));
    /* 0061e8e7: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0061e8eb: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0061e8ee: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
    /* 0061e8f1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0061e8f5: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0061e8f9: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_0061e8fd:; BB(0x0061e8fd);
    /* 0061e8fd: mov esi, 1 */ r_esi = 0x1u;
    /* 0061e902: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0061e904: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061e907: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e90a: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0061e90c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061e90e: jl 0x61e8fd */ if ((fS!=fO)) goto L_0061e8fd;
L_0061e910:; BB(0x0061e910);
    /* 0061e910: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0061e913: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0061e917: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0061e91b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0061e91f: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_0061e925:; BB(0x0061e925);
    /* 0061e925: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e928: je 0x61ea0a */ if (fZ) goto L_0061ea0a;
L_0061e92e:; BB(0x0061e92e);
    /* 0061e92e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061e934: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e937: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061e93d: jmp 0x61ea05 */ goto L_0061ea05;
L_0061e942:; BB(0x0061e942);
    /* 0061e942: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e945: jne 0x61e9d0 */ if (!fZ) goto L_0061e9d0;
L_0061e94b:; BB(0x0061e94b);
    /* 0061e94b: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 0061e951: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e954: je 0x61ea89 */ if (fZ) goto L_0061ea89;
L_0061e95a:; BB(0x0061e95a);
    /* 0061e95a: mov eax, ecx */ r_eax = r_ecx;
    /* 0061e95c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061e95e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e961: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0061e967: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061e969: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061e96b: jle 0x61e9c6 */ if ((fZ||fS!=fO)) goto L_0061e9c6;
L_0061e96d:; BB(0x0061e96d);
    /* 0061e96d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0061e970: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0061e974: lea ecx, [edx + 0x10] */ r_ecx = (u32)(r_edx+0x10u);
    /* 0061e977: mov edi, edx */ r_edi = r_edx;
    /* 0061e979: mov esi, ecx */ r_esi = r_ecx;
L_0061e97b:; BB(0x0061e97b);
    /* 0061e97b: mov eax, edi */ r_eax = r_edi;
    /* 0061e97d: add eax, dword ptr [ebx + 0xc8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xc8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0061e983: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0061e986: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061e987: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61e98cu); f_00816eec();
    /* 0061e98c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061e98d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061e990: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e993: jne 0x61e9ab */ if (!fZ) goto L_0061e9ab;
L_0061e995:; BB(0x0061e995);
    /* 0061e995: add dword ptr [ebx + 0xd4], 1 */ { u32 ad = (u32)(r_ebx+0xd4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061e99c: mov ecx, esi */ r_ecx = r_esi;
    /* 0061e99e: mov eax, 1 */ r_eax = 0x1u;
    /* 0061e9a3: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0061e9a5: or dword ptr [ebx + 0xd0], eax */ { u32 ad = (u32)(r_ebx+0xd0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0061e9ab:; BB(0x0061e9ab);
    /* 0061e9ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0061e9ae: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0061e9b1: cmp edi, dword ptr [ebx + 0xd8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061e9b7: jl 0x61e97b */ if ((fS!=fO)) goto L_0061e97b;
L_0061e9b9:; BB(0x0061e9b9);
    /* 0061e9b9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0061e9bc: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0061e9c0: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
L_0061e9c6:; BB(0x0061e9c6);
    /* 0061e9c6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061e9c9: jne 0x61ea05 */ if (!fZ) goto L_0061ea05;
L_0061e9cb:; BB(0x0061e9cb);
    /* 0061e9cb: jmp 0x61ea6e */ goto L_0061ea6e;
L_0061e9d0:; BB(0x0061e9d0);
    /* 0061e9d0: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061e9d6: and eax, 0xfff0fffe */ {  u32 a = r_eax; u32 b = 0xfff0fffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0061e9db: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061e9e1: jmp 0x61ea05 */ goto L_0061ea05;
L_0061e9e3:; BB(0x0061e9e3);
    /* 0061e9e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061e9e5: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61e9eau); f_00619c10();
    /* 0061e9ea: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061e9f0: mov dword ptr [ebx + 0xd4], 4 */ W32((u32)(r_ebx+0xd4u), 0x4u);
    /* 0061e9fa: or eax, 0xf0001 */ {  u32 a = r_eax; u32 b = 0xf0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061e9ff: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
L_0061ea05:; BB(0x0061ea05);
    /* 0061ea05: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061ea08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061ea09: ret  */ FN_RET(0x0061e850); r_esp += 4; return;
L_0061ea0a:; BB(0x0061ea0a);
    /* 0061ea0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ea0c: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61ea11u); f_00619c10();
    /* 0061ea11: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061ea17: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea1a: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061ea20: jmp 0x61ea05 */ goto L_0061ea05;
L_0061ea22:; BB(0x0061ea22);
    /* 0061ea22: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 0061ea29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea2a: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61ea2fu); f_00816eec();
    /* 0061ea2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ea30: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061ea33: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea36: je 0x61ea49 */ if (fZ) goto L_0061ea49;
L_0061ea38:; BB(0x0061ea38);
    /* 0061ea38: mov dword ptr [ebx + 0xd4], 0 */ W32((u32)(r_ebx+0xd4u), 0x0u);
    /* 0061ea42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0061ea44: jmp 0x61e925 */ goto L_0061e925;
L_0061ea49:; BB(0x0061ea49);
    /* 0061ea49: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061ea4f: mov dword ptr [ebx + 0xd4], 4 */ W32((u32)(r_ebx+0xd4u), 0x4u);
    /* 0061ea59: mov edx, 4 */ r_edx = 0x4u;
    /* 0061ea5e: or eax, 0xf0000 */ {  u32 a = r_eax; u32 b = 0xf0000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea63: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061ea69: jmp 0x61e925 */ goto L_0061e925;
L_0061ea6e:; BB(0x0061ea6e);
    /* 0061ea6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ea70: call 0x619c10 */ r_esp -= 4; W32(r_esp, 0x61ea75u); f_00619c10();
    /* 0061ea75: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061ea7b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061ea7e: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 0061ea84: jmp 0x61ea05 */ goto L_0061ea05;
L_0061ea89:; BB(0x0061ea89);
    /* 0061ea89: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 0061ea90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ea91: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x61ea96u); f_00816eec();
    /* 0061ea96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ea97: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0061ea9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ea9d: je 0x61eab0 */ if (fZ) goto L_0061eab0;
L_0061ea9f:; BB(0x0061ea9f);
    /* 0061ea9f: mov dword ptr [ebx + 0xd4], 0 */ W32((u32)(r_ebx+0xd4u), 0x0u);
    /* 0061eaa9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061eaab: jmp 0x61e9c6 */ goto L_0061e9c6;
L_0061eab0:; BB(0x0061eab0);
    /* 0061eab0: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061eab6: mov dword ptr [ebx + 0xd4], 4 */ W32((u32)(r_ebx+0xd4u), 0x4u);
    /* 0061eac0: mov eax, 4 */ r_eax = 0x4u;
    /* 0061eac5: or edx, 0xf0000 */ {  u32 a = r_edx; u32 b = 0xf0000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0061eacb: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0061ead1: jmp 0x61e9c6 */ goto L_0061e9c6;
}

void f_0061ead8(void) /* sub_61EAD8 */
{
    FN_ENTER(0x0061ead8);
    /* 0061ead8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ead9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061eadb: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061eae1: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0061eae4: jne 0x61eb44 */ if (!fZ) goto L_0061eb44;
L_0061eae6:; BB(0x0061eae6);
    /* 0061eae6: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0061eaec: je 0x61eb19 */ if (fZ) goto L_0061eb19;
L_0061eaee:; BB(0x0061eaee);
    /* 0061eaee: fld dword ptr [0x930fdc] */ FPUSH(R_F32((u32)(0x930fdcu)));
    /* 0061eaf4: fadd dword ptr [ebx + 0xe0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xe0u));
    /* 0061eafa: fcom dword ptr [0x930fe0] */ fx_compare(ST(0), R_F32((u32)(0x930fe0u))); 
    /* 0061eb00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061eb02: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0061eb08: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061eb09: jb 0x61eb42 */ if (fC) goto L_0061eb42;
L_0061eb0b:; BB(0x0061eb0b);
    /* 0061eb0b: and edx, 0xffefffff */ {  u32 a = r_edx; u32 b = 0xffefffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061eb11: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0061eb17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061eb18: ret  */ FN_RET(0x0061ead8); r_esp += 4; return;
L_0061eb19:; BB(0x0061eb19);
    /* 0061eb19: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 0061eb1f: fsub dword ptr [0x930fdc] */ ST(0) = ST(0) - R_F32((u32)(0x930fdcu));
    /* 0061eb25: fcom dword ptr [0x930fe4] */ fx_compare(ST(0), R_F32((u32)(0x930fe4u))); 
    /* 0061eb2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0061eb2d: fstp dword ptr [ebx + 0xe0] */ W_F32((u32)(r_ebx+0xe0u), ST(0)); FPOP();
    /* 0061eb33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0061eb34: ja 0x61eb42 */ if ((!fC&&!fZ)) goto L_0061eb42;
L_0061eb36:; BB(0x0061eb36);
    /* 0061eb36: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061eb3c: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
L_0061eb42:; BB(0x0061eb42);
    /* 0061eb42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061eb43: ret  */ FN_RET(0x0061ead8); r_esp += 4; return;
L_0061eb44:; BB(0x0061eb44);
    /* 0061eb44: push 0x45992000 */ { u32 v = 0x45992000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb49: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061eb4b: call 0x6134c8 */ r_esp -= 4; W32(r_esp, 0x61eb50u); f_006134c8();
    /* 0061eb50: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eb53: je 0x61eb5d */ if (fZ) goto L_0061eb5d;
L_0061eb55:; BB(0x0061eb55);
    /* 0061eb55: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061eb5b: jmp 0x61eae6 */ goto L_0061eae6;
L_0061eb5d:; BB(0x0061eb5d);
    /* 0061eb5d: mov dword ptr [ebx + 0xac], 1 */ W32((u32)(r_ebx+0xacu), 0x1u);
    /* 0061eb67: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061eb6b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb6d: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x61eb72u); f_007b52c4();
    /* 0061eb72: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0061eb75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0061eb77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb79: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb7a: push 0x45a */ { u32 v = 0x45au; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb7f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x61eb84u); f_00814298();
    /* 0061eb84: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0061eb87: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061eb8d: jmp 0x61eae6 */ goto L_0061eae6;
}

void f_0061eb94(void) /* sub_61EB94 */
{
    FN_ENTER(0x0061eb94);
    /* 0061eb94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061eb97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0061eb99: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061eb9f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0061eba1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061eba3: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061eba9: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x61ebacu); call_ind(t); }
    /* 0061ebac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ebae: je 0x61ed55 */ if (fZ) goto L_0061ed55;
L_0061ebb4:; BB(0x0061ebb4);
    /* 0061ebb4: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ebb9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ebbb: call 0x613244 */ r_esp -= 4; W32(r_esp, 0x61ebc0u); f_00613244();
    /* 0061ebc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ebc2: je 0x61ed55 */ if (fZ) goto L_0061ed55;
L_0061ebc8:; BB(0x0061ebc8);
    /* 0061ebc8: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ebcdu); f_0082d7b0();
    /* 0061ebcd: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0061ebd0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x61ebd5u); f_0082d838();
    /* 0061ebd5: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0061ebd8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ebda: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x61ebdfu); f_0082d8bc();
    /* 0061ebdf: mov eax, dword ptr [ebx + 0xac] */ r_eax = R32((u32)(r_ebx+0xacu));
    /* 0061ebe5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ebe7: jne 0x61ed2f */ if (!fZ) goto L_0061ed2f;
L_0061ebed:; BB(0x0061ebed);
    /* 0061ebed: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 0061ebf0: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0061ebf3: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061ebf9: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ebfe: je 0x61ec07 */ if (fZ) goto L_0061ec07;
L_0061ec00:; BB(0x0061ec00);
    /* 0061ec00: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061ec05: jmp 0x61ec09 */ goto L_0061ec09;
L_0061ec07:; BB(0x0061ec07);
    /* 0061ec07: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061ec09:; BB(0x0061ec09);
    /* 0061ec09: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ec0e: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0061ec11: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ec16u); f_00829cc8();
    /* 0061ec16: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ec1bu); f_0082d7b0();
    /* 0061ec1b: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec1e: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ec23: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec26: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61ec2bu); f_00830b74();
    /* 0061ec2b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec2e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61ec33u); f_008321d8();
    /* 0061ec33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ec34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec35: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec38: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ec3a: call 0x61ed5c */ r_esp -= 4; W32(r_esp, 0x61ec3fu); f_0061ed5c();
    /* 0061ec3f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61ec44u); f_0082da80();
    /* 0061ec44: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 0061ec47: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0061ec4a: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0061ec4d: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 0061ec53: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ec59: je 0x61ec62 */ if (fZ) goto L_0061ec62;
L_0061ec5b:; BB(0x0061ec5b);
    /* 0061ec5b: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061ec60: jmp 0x61ec64 */ goto L_0061ec64;
L_0061ec62:; BB(0x0061ec62);
    /* 0061ec62: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061ec64:; BB(0x0061ec64);
    /* 0061ec64: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ec69: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0061ec6c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ec71u); f_00829cc8();
    /* 0061ec71: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ec76u); f_0082d7b0();
    /* 0061ec76: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec79: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ec7e: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec81: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61ec86u); f_00830b74();
    /* 0061ec86: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ec89: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61ec8eu); f_008321d8();
    /* 0061ec8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ec8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec90: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 0061ec93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ec94: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ec96: call 0x61ed5c */ r_esp -= 4; W32(r_esp, 0x61ec9bu); f_0061ed5c();
    /* 0061ec9b: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 0061ec9e: mov eax, dword ptr [ebx + 0xd0] */ r_eax = R32((u32)(r_ebx+0xd0u));
    /* 0061eca4: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061eca9: je 0x61ecb2 */ if (fZ) goto L_0061ecb2;
L_0061ecab:; BB(0x0061ecab);
    /* 0061ecab: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061ecb0: jmp 0x61ecb4 */ goto L_0061ecb4;
L_0061ecb2:; BB(0x0061ecb2);
    /* 0061ecb2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061ecb4:; BB(0x0061ecb4);
    /* 0061ecb4: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ecb9: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0061ecbc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ecc1u); f_00829cc8();
    /* 0061ecc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecc2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0061ecc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ecc5: call 0x61ed5c */ r_esp -= 4; W32(r_esp, 0x61eccau); f_0061ed5c();
    /* 0061ecca: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61eccfu); f_0082da80();
    /* 0061eccf: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 0061ecd2: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0061ecd5: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0061ecd8: mov esi, dword ptr [edx + 0x30] */ r_esi = R32((u32)(r_edx+0x30u));
    /* 0061ecdb: mov ebp, dword ptr [ebx + 0xd0] */ r_ebp = R32((u32)(r_ebx+0xd0u));
    /* 0061ece1: test ebp, 0x80000 */ {  u32 a = r_ebp; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ece7: je 0x61ecf0 */ if (fZ) goto L_0061ecf0;
L_0061ece9:; BB(0x0061ece9);
    /* 0061ece9: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0061ecee: jmp 0x61ecf2 */ goto L_0061ecf2;
L_0061ecf0:; BB(0x0061ecf0);
    /* 0061ecf0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0061ecf2:; BB(0x0061ecf2);
    /* 0061ecf2: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ecf7: mov ecx, dword ptr [eax + ebp*4] */ r_ecx = R32((u32)(r_eax+r_ebp*4));
    /* 0061ecfa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ecffu); f_00829cc8();
    /* 0061ecff: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ed04u); f_0082d7b0();
    /* 0061ed04: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed07: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ed0c: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed0f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61ed14u); f_00830b74();
    /* 0061ed14: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed17: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61ed1cu); f_008321d8();
    /* 0061ed1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ed1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed1e: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed21: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0061ed23: call 0x61ed5c */ r_esp -= 4; W32(r_esp, 0x61ed28u); f_0061ed5c();
    /* 0061ed28: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61ed2du); f_0082da80();
    /* 0061ed2d: jmp 0x61ed50 */ goto L_0061ed50;
L_0061ed2f:; BB(0x0061ed2f);
    /* 0061ed2f: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ed34: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0061ed37: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x61ed3cu); f_00829cc8();
    /* 0061ed3c: push dword ptr [ebx + 0xb0] */ { u32 v = R32((u32)(r_ebx+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed42: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 0061ed45: mov edx, dword ptr [ebx + 0xbc] */ r_edx = R32((u32)(r_ebx+0xbcu));
    /* 0061ed4b: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x61ed50u); f_0083bd00();
L_0061ed50:; BB(0x0061ed50);
    /* 0061ed50: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61ed55u); f_0082da80();
L_0061ed55:; BB(0x0061ed55);
    /* 0061ed55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061ed56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061ed57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0061ed58: ret  */ FN_RET(0x0061eb94); r_esp += 4; return;
}

void f_0061ed5c(void) /* sub_61ED5C */
{
    FN_ENTER(0x0061ed5c);
    /* 0061ed5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed5e: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 0061ed62: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0061ed66: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ed69: je 0x61ed8a */ if (fZ) goto L_0061ed8a;
L_0061ed6b:; BB(0x0061ed6b);
    /* 0061ed6b: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0061ed70: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0061ed75: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0061ed78: add ecx, 0xdc */ {  u32 a = r_ecx; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ed7e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0061ed83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ed84: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61ed89u); f_0082d710();
    /* 0061ed89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0061ed8a:; BB(0x0061ed8a);
    /* 0061ed8a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x61ed8fu); f_0082dbac();
    /* 0061ed8f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61ed94u); f_0082d7b0();
    /* 0061ed94: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed97: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061ed9c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ed9f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61eda4u); f_00830b74();
    /* 0061eda4: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061eda7: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61edacu); f_008321d8();
    /* 0061edac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061edad: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 0061edb0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x61edb5u); f_0082d7b0();
    /* 0061edb5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061edb8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061edbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0061edbd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061edc0: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x61edc5u); f_00830b74();
    /* 0061edc5: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061edc8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x61edcdu); f_008321d8();
    /* 0061edcd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061edce: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61edd3u); f_0082da80();
    /* 0061edd3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x61edd8u); f_0082da80();
    /* 0061edd8: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x61edddu); f_0082dab0();
    /* 0061eddd: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0061ede0: je 0x61edf7 */ if (fZ) goto L_0061edf7;
L_0061ede2:; BB(0x0061ede2);
    /* 0061ede2: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ede7: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x61edecu); f_0082d710();
    /* 0061edec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061eded: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0061edf2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0061edf7:; BB(0x0061edf7);
    /* 0061edf7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0061edf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061edf9: ret 8 */ FN_RET(0x0061ed5c); r_esp += 12; return;
}

void f_0061edfc(void) /* sub_61EDFC */
{
    FN_ENTER(0x0061edfc);
    /* 0061edfc: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ee01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee03: je 0x61ee27 */ if (fZ) goto L_0061ee27;
L_0061ee05:; BB(0x0061ee05);
    /* 0061ee05: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ee07: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x61ee0cu); f_00800b5c();
    /* 0061ee0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ee0d: mov eax, dword ptr [0xa8ec38] */ r_eax = R32((u32)(0xa8ec38u));
    /* 0061ee12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee14: je 0x61ee27 */ if (fZ) goto L_0061ee27;
L_0061ee16:; BB(0x0061ee16);
    /* 0061ee16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee17: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x61ee1cu); f_00857e98();
    /* 0061ee1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ee1d: mov dword ptr [0xa8ec38], 0 */ W32((u32)(0xa8ec38u), 0x0u);
L_0061ee27:; BB(0x0061ee27);
    /* 0061ee27: mov ecx, dword ptr [0xa8ec3c] */ r_ecx = R32((u32)(0xa8ec3cu));
    /* 0061ee2d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061ee2f: je 0x61ee44 */ if (fZ) goto L_0061ee44;
L_0061ee31:; BB(0x0061ee31);
    /* 0061ee31: je 0x61ee3a */ if (fZ) goto L_0061ee3a;
L_0061ee33:; BB(0x0061ee33);
    /* 0061ee33: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee35: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x61ee3au); f_004066a8();
L_0061ee3a:; BB(0x0061ee3a);
    /* 0061ee3a: mov dword ptr [0xa8ec3c], 0 */ W32((u32)(0xa8ec3cu), 0x0u);
L_0061ee44:; BB(0x0061ee44);
    /* 0061ee44: ret  */ FN_RET(0x0061edfc); r_esp += 4; return;
}

void f_0061ee48(void)
{
    FN_ENTER(0x0061ee48);
    /* 0061ee48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee49: mov ebp, esp */ r_ebp = r_esp;
    /* 0061ee4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee4d: push 0x8e1fd8 */ { u32 v = 0x8e1fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061ee58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061ee60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061ee63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061ee66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0061ee69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0061ee6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0061ee6f: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0061ee74: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0061ee7b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x61ee80u); f_005caba4();
    /* 0061ee80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ee81: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0061ee84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0061ee86: je 0x61eebf */ if (fZ) goto L_0061eebf;
L_0061ee88:; BB(0x0061ee88);
    /* 0061ee88: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0061ee8f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ee96: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ee99: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ee9f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061eea2: call 0x61eec4 */ r_esp -= 4; W32(r_esp, 0x61eea7u); f_0061eec4();
    /* 0061eea7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061eeaa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0061eeb1:; BB(0x0061eeb1);
    /* 0061eeb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061eeb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061eebb: mov esp, ebp */ r_esp = r_ebp;
    /* 0061eebd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061eebe: ret  */ FN_RET(0x0061ee48); r_esp += 4; return;
L_0061eebf:; BB(0x0061eebf);
    /* 0061eebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0061eec1: jmp 0x61eeb1 */ goto L_0061eeb1;
}

void f_0061eec4(void) /* sub_61EEC4 */
{
    FN_ENTER(0x0061eec4);
    /* 0061eec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0061eec5: mov ebp, esp */ r_ebp = r_esp;
    /* 0061eec7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0061eec9: push 0x8e1ff4 */ { u32 v = 0x8e1ff4u; r_esp -= 4; W32(r_esp, v); }
    /* 0061eece: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0061eed4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0061eed5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0061eedc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0061eedf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0061eee2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0061eee5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0061eee8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0061eeeb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0061eeee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0061eef1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0061eef4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0061eef7: call 0x619df0 */ r_esp -= 4; W32(r_esp, 0x61eefcu); f_00619df0();
    /* 0061eefc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0061ef03: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ef06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0061ef09: mov dword ptr [ecx], 0xb277c0 */ W32((u32)(r_ecx), 0xb277c0u);
    /* 0061ef0f: mov eax, dword ptr [0x9c5370] */ r_eax = R32((u32)(0x9c5370u));
    /* 0061ef14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef15: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0061ef18: call dword ptr [0xb277d4] */ { u32 t = R32((u32)(0xb277d4u)); r_esp -= 4; W32(r_esp, 0x61ef1eu); call_ind(t); }
    /* 0061ef1e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ef21: mov edi, dword ptr [0xa8ec3c] */ r_edi = R32((u32)(0xa8ec3cu));
    /* 0061ef27: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef29: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 0061ef2f: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0061ef32: push 0x9c5374 */ { u32 v = 0x9c5374u; r_esp -= 4; W32(r_esp, v); }
    /* 0061ef37: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0061ef3a: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 0061ef40: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
    /* 0061ef43: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0061ef46: mov eax, dword ptr [edi + 0x430] */ r_eax = R32((u32)(r_edi+0x430u));
    /* 0061ef4c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0061ef4f: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 0061ef55: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0061ef58: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0061ef5b: mov dword ptr [ecx + 0xb8], 0x3f000000 */ W32((u32)(r_ecx+0xb8u), 0x3f000000u);
    /* 0061ef65: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0061ef68: fadd dword ptr [edx*4 + 0x930fc0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x930fc0u));
    /* 0061ef6f: fadd dword ptr [0x930fd0] */ ST(0) = ST(0) + R_F32((u32)(0x930fd0u));
    /* 0061ef75: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0061ef7b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x61ef80u); f_007b9a88();
    /* 0061ef80: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0061ef83: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x61ef88u); f_007b999c();
    /* 0061ef88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0061ef89: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ef8c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x61ef91u); f_007b4f54();
    /* 0061ef91: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ef94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0061ef96: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x61ef99u); call_ind(t); }
    /* 0061ef99: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0061ef9c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0061ef9f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0061efa2: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0061efa8: mov edx, 4 */ r_edx = 0x4u;
    /* 0061efad: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0061efb0: mov dword ptr [ebx + 0xdc], 0x3f800000 */ W32((u32)(r_ebx+0xdcu), 0x3f800000u);
    /* 0061efba: mov ecx, 0 */ r_ecx = 0x0u;
    /* 0061efbf: jl 0x61efc3 */ if ((fS!=fO)) goto L_0061efc3;
L_0061efc1:; BB(0x0061efc1);
    /* 0061efc1: mov eax, edx */ r_eax = r_edx;
L_0061efc3:; BB(0x0061efc3);
    /* 0061efc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0061efc5: jg 0x61efc9 */ if ((!fZ&&fS==fO)) goto L_0061efc9;
L_0061efc7:; BB(0x0061efc7);
    /* 0061efc7: mov eax, ecx */ r_eax = r_ecx;
L_0061efc9:; BB(0x0061efc9);
    /* 0061efc9: mov dword ptr [ebx + 0x88], eax */ W32((u32)(r_ebx+0x88u), r_eax);
    /* 0061efcf: mov dword ptr [ebx + 0xe0], 0x3f800000 */ W32((u32)(r_ebx+0xe0u), 0x3f800000u);
    /* 0061efd9: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0061efdf: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0061efe1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0061efe4: mov dword ptr [ebx + 0xe4], 0x3f800000 */ W32((u32)(r_ebx+0xe4u), 0x3f800000u);
    /* 0061efee: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0061eff4: mov eax, ebx */ r_eax = r_ebx;
    /* 0061eff6: mov dword ptr [ebx + 0xe8], 0x3f800000 */ W32((u32)(r_ebx+0xe8u), 0x3f800000u);
    /* 0061f000: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0061f003: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0061f006: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0061f00d: mov esp, ebp */ r_esp = r_ebp;
    /* 0061f00f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0061f010: ret 8 */ FN_RET(0x0061eec4); r_esp += 12; return;
}

