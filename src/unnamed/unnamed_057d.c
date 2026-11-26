#include "protos.h"

void f_0057d0b8(void) /* sub_57D0B8 */
{
    FN_ENTER(0x0057d0b8);
    /* 0057d0b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0b9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0057d0bd: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0c3: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x57d0c8u); f_00780630();
    /* 0057d0c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d0cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d0cd: je 0x57d0eb */ if (fZ) goto L_0057d0eb;
L_0057d0cf:; BB(0x0057d0cf);
    /* 0057d0cf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0057d0d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0057d0d4: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 0057d0d6: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0057d0d9: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0057d0dc: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0057d0df: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0057d0e2: mov eax, 1 */ r_eax = 0x1u;
    /* 0057d0e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d0e8: ret 4 */ FN_RET(0x0057d0b8); r_esp += 8; return;
L_0057d0eb:; BB(0x0057d0eb);
    /* 0057d0eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d0ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d0ee: ret 4 */ FN_RET(0x0057d0b8); r_esp += 8; return;
}

void f_0057d0f4(void) /* sub_57D0F4 */
{
    FN_ENTER(0x0057d0f4);
    /* 0057d0f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d0f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0f9: push 0x8d79b0 */ { u32 v = 0x8d79b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d0fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057d104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057d10c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d10f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057d112: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0057d115: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0057d118: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0057d11b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0057d11e: push dword ptr [0xaca348] */ { u32 v = R32((u32)(0xaca348u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057d124: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0057d127: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0057d12a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057d12d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0057d130: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0057d133: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0057d136: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x57d13bu); f_007b4b48();
    /* 0057d13b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057d142: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d145: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0057d148: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057d14b: mov dword ptr [eax], 0xb07378 */ W32((u32)(r_eax), 0xb07378u);
    /* 0057d151: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0057d153: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0057d15a: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 0057d160: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0057d163: mov dword ptr [ebp - 0x30], 0x4000 */ W32((u32)(r_ebp+0xffffffd0u), 0x4000u);
    /* 0057d16a: mov dword ptr [eax + 0xb0], ebx */ W32((u32)(r_eax+0xb0u), r_ebx);
    /* 0057d170: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0057d173: mov dword ptr [eax + 0xb4], edi */ W32((u32)(r_eax+0xb4u), r_edi);
    /* 0057d179: mov dword ptr [eax + 0xdc], 0 */ W32((u32)(r_eax+0xdcu), 0x0u);
    /* 0057d183: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0057d187: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057d18a: mov word ptr [eax + 0xf8], dx */ W16((u32)(r_eax+0xf8u), (u16)r_edx);
    /* 0057d191: lea eax, [ecx - 0x4000] */ r_eax = (u32)(r_ecx+0xffffc000u);
    /* 0057d197: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057d19a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x57d19fu); f_0082dcbc();
    /* 0057d19f: fmul dword ptr [0xa74104] */ ST(0) = ST(0) * R_F32((u32)(0xa74104u));
    /* 0057d1a5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d1a8: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057d1ab: fstp dword ptr [eax + 0xb8] */ W_F32((u32)(r_eax+0xb8u), ST(0)); FPOP();
    /* 0057d1b1: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 0057d1bb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x57d1c0u); f_0082ddd8();
    /* 0057d1c0: fmul dword ptr [0xa74104] */ ST(0) = ST(0) * R_F32((u32)(0xa74104u));
    /* 0057d1c6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d1c9: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d1cb: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 0057d1d1: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0057d1d4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1d6: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d1dd: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x57d1e2u); f_00509dc4();
    /* 0057d1e2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d1e5: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d1e8: mov edx, dword ptr [ecx + 0xb0] */ r_edx = R32((u32)(r_ecx+0xb0u));
    /* 0057d1ee: mov ebx, dword ptr [ecx + 0xb4] */ r_ebx = R32((u32)(r_ecx+0xb4u));
    /* 0057d1f4: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 0057d1fa: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 0057d200: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 0057d206: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 0057d20c: mov dword ptr [ecx + 0xec], ebx */ W32((u32)(r_ecx+0xecu), r_ebx);
    /* 0057d212: lea esi, [ecx + 0xe4] */ r_esi = (u32)(r_ecx+0xe4u);
    /* 0057d218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d219: call 0x57d0b8 */ r_esp -= 4; W32(r_esp, 0x57d21eu); f_0057d0b8();
    /* 0057d21e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057d221: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057d224: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057d227: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d22a: mov dword ptr [eax + 0xf4], 0 */ W32((u32)(r_eax+0xf4u), 0x0u);
    /* 0057d234: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d237: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057d23e: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d241: ret 0xc */ FN_RET(0x0057d0f4); r_esp += 16; return;
}

void f_0057d270(void) /* sub_57D270 */
{
    FN_ENTER(0x0057d270);
    /* 0057d270: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d271: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057d273: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057d275: call 0x57d294 */ r_esp -= 4; W32(r_esp, 0x57d27au); f_0057d294();
    /* 0057d27a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057d27e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d280: jne 0x57d286 */ if (!fZ) goto L_0057d286;
L_0057d282:; BB(0x0057d282);
    /* 0057d282: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d283: ret 4 */ FN_RET(0x0057d270); r_esp += 8; return;
L_0057d286:; BB(0x0057d286);
    /* 0057d286: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d287: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57d28cu); f_005c2f74();
    /* 0057d28c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057d28d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d28e: ret 4 */ FN_RET(0x0057d270); r_esp += 8; return;
}

void f_0057d294(void) /* sub_57D294 */
{
    FN_ENTER(0x0057d294);
    /* 0057d294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d295: mov ebp, esp */ r_ebp = r_esp;
    /* 0057d297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d299: push 0x8d7a14 */ { u32 v = 0x8d7a14u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d29e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057d2a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057d2ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d2af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057d2b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0057d2b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057d2b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057d2bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057d2be: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0057d2c5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d2c8: mov dword ptr [ecx], 0xb074e0 */ W32((u32)(r_ecx), 0xb074e0u);
    /* 0057d2ce: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x57d2d3u); f_007b9c8c();
    /* 0057d2d3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0057d2da: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2df: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d2e2: add eax, 0x414 */ {  u32 a = r_eax; u32 b = 0x414u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d2e7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2e9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d2ec: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x57d2f1u); f_008586d6();
    /* 0057d2f1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057d2f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d2fb: add ecx, 0x3f0 */ {  u32 a = r_ecx; u32 b = 0x3f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d301: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x57d306u); f_005769f8();
    /* 0057d306: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057d309: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x57d30eu); f_0052bf84();
    /* 0057d30e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057d311: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057d318: mov esp, ebp */ r_esp = r_ebp;
    /* 0057d31a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d31b: ret  */ FN_RET(0x0057d294); r_esp += 4; return;
}

void f_0057d31c(void) /* sub_57D31C */
{
    FN_ENTER(0x0057d31c);
    /* 0057d31c: mov edx, dword ptr [ecx + 0x390] */ r_edx = R32((u32)(r_ecx+0x390u));
    /* 0057d322: test edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d328: jne 0x57d357 */ if (!fZ) goto L_0057d357;
L_0057d32a:; BB(0x0057d32a);
    /* 0057d32a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057d32d: jne 0x57d34b */ if (!fZ) goto L_0057d34b;
L_0057d32f:; BB(0x0057d32f);
    /* 0057d32f: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0057d336: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d339: je 0x57d34b */ if (fZ) goto L_0057d34b;
L_0057d33b:; BB(0x0057d33b);
    /* 0057d33b: mov dword ptr [ecx + 0x37c], 0xc */ W32((u32)(r_ecx+0x37cu), 0xcu);
    /* 0057d345: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
L_0057d34b:; BB(0x0057d34b);
    /* 0057d34b: or edx, 0x20001 */ {  u32 a = r_edx; u32 b = 0x20001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d351: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
L_0057d357:; BB(0x0057d357);
    /* 0057d357: ret  */ FN_RET(0x0057d31c); r_esp += 4; return;
}

void f_0057d358(void) /* sub_57D358 */
{
    FN_ENTER(0x0057d358);
    /* 0057d358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d35a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d35b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d35c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d35f: mov edi, ecx */ r_edi = r_ecx;
    /* 0057d361: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057d364: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d369: je 0x57d373 */ if (fZ) goto L_0057d373;
L_0057d36b:; BB(0x0057d36b);
    /* 0057d36b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057d36e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d36f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d370: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d371: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d372: ret  */ FN_RET(0x0057d358); r_esp += 4; return;
L_0057d373:; BB(0x0057d373);
    /* 0057d373: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d378: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d37a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0057d37c: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d381: push 0x43160000 */ { u32 v = 0x43160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d386: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x57d389u); call_ind(t); }
    /* 0057d389: mov esi, eax */ r_esi = r_eax;
    /* 0057d38b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d38d: je 0x57d509 */ if (fZ) goto L_0057d509;
L_0057d393:; BB(0x0057d393);
    /* 0057d393: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57d398u); f_004f7c84();
    /* 0057d398: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d39b: je 0x57d3b3 */ if (fZ) goto L_0057d3b3;
L_0057d39d:; BB(0x0057d39d);
    /* 0057d39d: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0057d3a3: test edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d3a9: je 0x57d3b3 */ if (fZ) goto L_0057d3b3;
L_0057d3ab:; BB(0x0057d3ab);
    /* 0057d3ab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057d3ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d3af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d3b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d3b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d3b2: ret  */ FN_RET(0x0057d358); r_esp += 4; return;
L_0057d3b3:; BB(0x0057d3b3);
    /* 0057d3b3: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0057d3b9: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0057d3bf: lea ebp, [edi + 0x414] */ r_ebp = (u32)(r_edi+0x414u);
    /* 0057d3c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057d3c7: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x57d3ccu); f_005771a4();
    /* 0057d3cc: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0057d3d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d3d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057d3d5: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x57d3dau); f_0057725c();
    /* 0057d3da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d3dc: je 0x57d406 */ if (fZ) goto L_0057d406;
L_0057d3de:; BB(0x0057d3de);
    /* 0057d3de: mov edx, dword ptr [edi + 0x414] */ r_edx = R32((u32)(r_edi+0x414u));
    /* 0057d3e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057d3e6: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x57d3e9u); call_ind(t); }
    /* 0057d3e9: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d3eb: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x57d3f0u); f_008173d0();
    /* 0057d3f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d3f2: je 0x57d406 */ if (fZ) goto L_0057d406;
L_0057d3f4:; BB(0x0057d3f4);
    /* 0057d3f4: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0057d3f9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0057d3fe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057d401: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d402: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d403: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d405: ret  */ FN_RET(0x0057d358); r_esp += 4; return;
L_0057d406:; BB(0x0057d406);
    /* 0057d406: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0057d409: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x57d40eu); f_00829cc8();
    /* 0057d40e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d40f: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x57d414u); f_00794548();
    /* 0057d414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057d415: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x57d41au); f_00578b38();
    /* 0057d41a: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0057d41f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x57d424u); f_0082d7b0();
    /* 0057d424: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0057d427: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0057d42a: fadd dword ptr [edi + 0x3ec] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3ecu));
    /* 0057d430: fadd dword ptr [edi + 0x40c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40cu));
    /* 0057d436: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d439: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0057d43d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0057d440: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0057d443: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d445: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0057d449: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x57d44eu); f_00830b74();
    /* 0057d44e: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0057d451: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d453: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57d458u); f_0082d8bc();
    /* 0057d458: mov edx, dword ptr [edi + 0x68] */ r_edx = R32((u32)(r_edi+0x68u));
    /* 0057d45b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d45c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d45d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057d45f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d460: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x57d465u); f_0082fa0c();
    /* 0057d465: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0057d46b: and edx, 0xfffffbff */ {  u32 a = r_edx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057d471: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0057d477: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57d47cu); f_004f7c84();
    /* 0057d47c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d47f: je 0x57d569 */ if (fZ) goto L_0057d569;
L_0057d485:; BB(0x0057d485);
    /* 0057d485: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0057d48b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057d48e: jne 0x57d51a */ if (!fZ) goto L_0057d51a;
L_0057d494:; BB(0x0057d494);
    /* 0057d494: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d497: je 0x57d511 */ if (fZ) goto L_0057d511;
L_0057d499:; BB(0x0057d499);
    /* 0057d499: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d49b: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x57d4a0u); f_007aa7b8();
L_0057d4a0:; BB(0x0057d4a0);
    /* 0057d4a0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57d4a5u); f_0082da80();
    /* 0057d4a5: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x57d4aau); f_00794750();
    /* 0057d4aa: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x57d4afu); f_0082dab0();
    /* 0057d4af: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057d4b2: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d4b7: jne 0x57d4f4 */ if (!fZ) goto L_0057d4f4;
L_0057d4b9:; BB(0x0057d4b9);
    /* 0057d4b9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d4bb: je 0x57d4f4 */ if (fZ) goto L_0057d4f4;
L_0057d4bd:; BB(0x0057d4bd);
    /* 0057d4bd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0057d4c1: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 0057d4c4: fmul dword ptr [0x9279c0] */ ST(0) = ST(0) * R_F32((u32)(0x9279c0u));
    /* 0057d4ca: fld dword ptr [edi + 0x40c] */ FPUSH(R_F32((u32)(r_edi+0x40cu)));
    /* 0057d4d0: fmul dword ptr [0x9279c4] */ ST(0) = ST(0) * R_F32((u32)(0x9279c4u));
    /* 0057d4d6: fadd dword ptr [0x9279c8] */ ST(0) = ST(0) + R_F32((u32)(0x9279c8u));
    /* 0057d4dc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0057d4de: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d4e0: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0057d4e4: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0057d4e8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0057d4ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d4ef: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x57d4f4u); f_00779d4c();
L_0057d4f4:; BB(0x0057d4f4);
    /* 0057d4f4: mov eax, dword ptr [edi + 0x414] */ r_eax = R32((u32)(r_edi+0x414u));
    /* 0057d4fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057d4fc: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57d4ffu); call_ind(t); }
    /* 0057d4ff: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0057d504: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0057d509:; BB(0x0057d509);
    /* 0057d509: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057d50c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d50d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057d50e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d50f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d510: ret  */ FN_RET(0x0057d358); r_esp += 4; return;
L_0057d511:; BB(0x0057d511);
    /* 0057d511: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d513: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57d518u); f_007aa668();
    /* 0057d518: jmp 0x57d4a0 */ goto L_0057d4a0;
L_0057d51a:; BB(0x0057d51a);
    /* 0057d51a: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0057d520: lea ecx, [edi + 0x3f0] */ r_ecx = (u32)(r_edi+0x3f0u);
    /* 0057d526: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0057d529: call dword ptr [edx + 0x20] */ { u32 t = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, 0x57d52cu); call_ind(t); }
    /* 0057d52c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d52e: jne 0x57d537 */ if (!fZ) goto L_0057d537;
L_0057d530:; BB(0x0057d530);
    /* 0057d530: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0057d532: jmp 0x57d4a0 */ goto L_0057d4a0;
L_0057d537:; BB(0x0057d537);
    /* 0057d537: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0057d53a: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0057d540: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x57d543u); call_ind(t); }
    /* 0057d543: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d546: je 0x57d560 */ if (fZ) goto L_0057d560;
L_0057d548:; BB(0x0057d548);
    /* 0057d548: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d54a: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x57d54fu); f_007aa7b8();
L_0057d54f:; BB(0x0057d54f);
    /* 0057d54f: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0057d552: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0057d558: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x57d55bu); call_ind(t); }
    /* 0057d55b: jmp 0x57d4a0 */ goto L_0057d4a0;
L_0057d560:; BB(0x0057d560);
    /* 0057d560: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d562: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x57d567u); f_007aa668();
    /* 0057d567: jmp 0x57d54f */ goto L_0057d54f;
L_0057d569:; BB(0x0057d569);
    /* 0057d569: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057d56c: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x57d571u); f_0082e1e8();
    /* 0057d571: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057d572: jmp 0x57d4a0 */ goto L_0057d4a0;
}

void f_0057d578(void) /* sub_57D578 */
{
    FN_ENTER(0x0057d578);
    /* 0057d578: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d57a: mov esi, ecx */ r_esi = r_ecx;
    /* 0057d57c: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x57d581u); f_004f7c84();
    /* 0057d581: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d584: je 0x57d72a */ if (fZ) goto L_0057d72a;
L_0057d58a:; BB(0x0057d58a);
    /* 0057d58a: movzx eax, word ptr [esi + 0x340] */ r_eax = (u32)R16((u32)(r_esi+0x340u));
    /* 0057d591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d592: call 0x578c74 */ r_esp -= 4; W32(r_esp, 0x57d597u); f_00578c74();
    /* 0057d597: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057d598: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d599: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d59b: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x57d5a0u); f_007706b0();
    /* 0057d5a0: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d5a2: call 0x52d00c */ r_esp -= 4; W32(r_esp, 0x57d5a7u); f_0052d00c();
    /* 0057d5a7: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d5a9: call 0x57f3b8 */ r_esp -= 4; W32(r_esp, 0x57d5aeu); f_0057f3b8();
    /* 0057d5ae: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0057d5b5: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
    /* 0057d5bb: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d5bd: je 0x57d5f2 */ if (fZ) goto L_0057d5f2;
L_0057d5bf:; BB(0x0057d5bf);
    /* 0057d5bf: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0057d5c5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d5c8: je 0x57d5e1 */ if (fZ) goto L_0057d5e1;
L_0057d5ca:; BB(0x0057d5ca);
    /* 0057d5ca: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 0057d5d4: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d5d6: call 0x57d734 */ r_esp -= 4; W32(r_esp, 0x57d5dbu); f_0057d734();
    /* 0057d5db: mov edx, dword ptr [esi + 0x37c] */ r_edx = R32((u32)(r_esi+0x37cu));
L_0057d5e1:; BB(0x0057d5e1);
    /* 0057d5e1: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0057d5eb: mov word ptr [esi + 0x32e], dx */ W16((u32)(r_esi+0x32eu), (u16)r_edx);
L_0057d5f2:; BB(0x0057d5f2);
    /* 0057d5f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d5f4: call 0x57d734 */ r_esp -= 4; W32(r_esp, 0x57d5f9u); f_0057d734();
    /* 0057d5f9: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 0057d5ff: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d602: je 0x57d6fd */ if (fZ) goto L_0057d6fd;
L_0057d608:; BB(0x0057d608);
    /* 0057d608: fld dword ptr [0x9279bc] */ FPUSH(R_F32((u32)(0x9279bcu)));
    /* 0057d60e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0057d611: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0057d614: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0057d617: fld dword ptr [esi + 0x40c] */ FPUSH(R_F32((u32)(r_esi+0x40cu)));
    /* 0057d61d: mov ebx, dword ptr [esi + 0xa4] */ r_ebx = R32((u32)(r_esi+0xa4u));
    /* 0057d623: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057d625: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0057d627: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0057d629: fstp dword ptr [esi + 0x304] */ W_F32((u32)(r_esi+0x304u), ST(0)); FPOP();
    /* 0057d62f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057d631: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0057d637: mov dword ptr [esi + 0x308], edx */ W32((u32)(r_esi+0x308u), r_edx);
    /* 0057d63d: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0057d640: mov eax, dword ptr [esi + 0x390] */ r_eax = R32((u32)(r_esi+0x390u));
    /* 0057d646: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d64b: je 0x57d652 */ if (fZ) goto L_0057d652;
L_0057d64d:; BB(0x0057d64d);
    /* 0057d64d: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0057d650: jmp 0x57d66f */ goto L_0057d66f;
L_0057d652:; BB(0x0057d652);
    /* 0057d652: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d654: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d655: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x57d65au); f_006946a8();
    /* 0057d65a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d65c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d65e: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0057d661: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057d666: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d667: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x57d66cu); f_00805608();
    /* 0057d66c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057d66f:; BB(0x0057d66f);
    /* 0057d66f: mov eax, dword ptr [esi + 0x3e4] */ r_eax = R32((u32)(r_esi+0x3e4u));
    /* 0057d675: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0057d677: jle 0x57d682 */ if ((fZ||fS!=fO)) goto L_0057d682;
L_0057d679:; BB(0x0057d679);
    /* 0057d679: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d67c: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
L_0057d682:; BB(0x0057d682);
    /* 0057d682: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0057d688: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0057d68b: and edx, 0xfffffff9 */ {  u32 a = r_edx; u32 b = 0xfffffff9u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057d68e: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0057d691: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 0057d697: fld dword ptr [esi + 0x40c] */ FPUSH(R_F32((u32)(r_esi+0x40cu)));
    /* 0057d69d: fcomp dword ptr [0x9279b4] */ fx_compare(ST(0), R_F32((u32)(0x9279b4u))); FPOP();
    /* 0057d6a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d6a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d6a6: jbe 0x57d6b3 */ if ((fC||fZ)) goto L_0057d6b3;
L_0057d6a8:; BB(0x0057d6a8);
    /* 0057d6a8: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0057d6ab: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057d6ae: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0057d6b1: jmp 0x57d6bc */ goto L_0057d6bc;
L_0057d6b3:; BB(0x0057d6b3);
    /* 0057d6b3: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0057d6b6: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057d6b9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_0057d6bc:; BB(0x0057d6bc);
    /* 0057d6bc: lea eax, [esi + 0x44] */ r_eax = (u32)(r_esi+0x44u);
    /* 0057d6bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d6c1: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x57d6c6u); f_0078ea50();
    /* 0057d6c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0057d6c9: fcomp dword ptr [0x9279b8] */ fx_compare(ST(0), R_F32((u32)(0x9279b8u))); FPOP();
    /* 0057d6cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d6d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d6d2: jbe 0x57d6e8 */ if ((fC||fZ)) goto L_0057d6e8;
L_0057d6d4:; BB(0x0057d6d4);
    /* 0057d6d4: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0057d6d7: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 0057d6da: mov ebx, dword ptr [esi + 0x4c] */ r_ebx = R32((u32)(r_esi+0x4cu));
    /* 0057d6dd: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0057d6e0: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 0057d6e3: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 0057d6e6: jmp 0x57d6f1 */ goto L_0057d6f1;
L_0057d6e8:; BB(0x0057d6e8);
    /* 0057d6e8: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0057d6eb: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0057d6ee: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
L_0057d6f1:; BB(0x0057d6f1);
    /* 0057d6f1: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0057d6f4: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 0057d6f7: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 0057d6fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d6fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d6fc: ret  */ FN_RET(0x0057d578); r_esp += 4; return;
L_0057d6fd:; BB(0x0057d6fd);
    /* 0057d6fd: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 0057d707: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d709: call 0x57d734 */ r_esp -= 4; W32(r_esp, 0x57d70eu); f_0057d734();
    /* 0057d70e: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0057d714: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 0057d71e: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 0057d725: jmp 0x57d608 */ goto L_0057d608;
L_0057d72a:; BB(0x0057d72a);
    /* 0057d72a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057d72c: call 0x57f588 */ r_esp -= 4; W32(r_esp, 0x57d731u); f_0057f588();
    /* 0057d731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057d732: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057d733: ret  */ FN_RET(0x0057d578); r_esp += 4; return;
}

void f_0057d734(void) /* sub_57D734 */
{
    FN_ENTER(0x0057d734);
    /* 0057d734: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0057d73b: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057d73e: ja 0x57d78d */ if ((!fC&&!fZ)) goto L_0057d78d;
L_0057d740:; BB(0x0057d740);
    /* 0057d740: mov eax, dword ptr [eax*4 + 0x927800] */ r_eax = R32((u32)(r_eax*4+0x927800u));
    /* 0057d747: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d734); r_esp += 4; return;
}

void f_0057d749(void)
{
    FN_ENTER(0x0057d749);
    /* 0057d749: call 0x57d790 */ r_esp -= 4; W32(r_esp, 0x57d74eu); f_0057d790();
    /* 0057d74e: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d749); r_esp += 4; return;
}

void f_0057d750(void)
{
    FN_ENTER(0x0057d750);
    /* 0057d750: call 0x57d8d4 */ r_esp -= 4; W32(r_esp, 0x57d755u); f_0057d8d4();
    /* 0057d755: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d750); r_esp += 4; return;
}

void f_0057d757(void)
{
    FN_ENTER(0x0057d757);
    /* 0057d757: call 0x57dfb0 */ r_esp -= 4; W32(r_esp, 0x57d75cu); f_0057dfb0();
    /* 0057d75c: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d757); r_esp += 4; return;
}

void f_0057d75e(void)
{
    FN_ENTER(0x0057d75e);
    /* 0057d75e: call 0x57e36c */ r_esp -= 4; W32(r_esp, 0x57d763u); f_0057e36c();
    /* 0057d763: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d75e); r_esp += 4; return;
}

void f_0057d765(void)
{
    FN_ENTER(0x0057d765);
    /* 0057d765: call 0x57e8d4 */ r_esp -= 4; W32(r_esp, 0x57d76au); f_0057e8d4();
    /* 0057d76a: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d765); r_esp += 4; return;
}

void f_0057d76c(void)
{
    FN_ENTER(0x0057d76c);
    /* 0057d76c: call 0x57e9ac */ r_esp -= 4; W32(r_esp, 0x57d771u); f_0057e9ac();
    /* 0057d771: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d76c); r_esp += 4; return;
}

void f_0057d773(void)
{
    FN_ENTER(0x0057d773);
    /* 0057d773: call 0x57eb7c */ r_esp -= 4; W32(r_esp, 0x57d778u); f_0057eb7c();
    /* 0057d778: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d773); r_esp += 4; return;
}

void f_0057d77a(void)
{
    FN_ENTER(0x0057d77a);
    /* 0057d77a: call 0x52c6ac */ r_esp -= 4; W32(r_esp, 0x57d77fu); f_0052c6ac();
    /* 0057d77f: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d77a); r_esp += 4; return;
}

void f_0057d781(void)
{
    FN_ENTER(0x0057d781);
    /* 0057d781: call 0x57ee30 */ r_esp -= 4; W32(r_esp, 0x57d786u); f_0057ee30();
    /* 0057d786: jmp 0x57d78d */ goto L_0057d78d;
L_0057d78d:; BB(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d781); r_esp += 4; return;
}

void f_0057d788(void)
{
    FN_ENTER(0x0057d788);
    /* 0057d788: call 0x57f18c */ r_esp -= 4; W32(r_esp, 0x57d78du); f_0057f18c();
    /* 0057d78d: ret  */ FN_RET(0x0057d788); r_esp += 4; return;
}

void f_0057d78d(void)
{
    FN_ENTER(0x0057d78d);
    /* 0057d78d: ret  */ FN_RET(0x0057d78d); r_esp += 4; return;
}

void f_0057d790(void) /* sub_57D790 */
{
    FN_ENTER(0x0057d790);
    /* 0057d790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d791: mov edi, ecx */ r_edi = r_ecx;
    /* 0057d793: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 0057d799: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d79b: je 0x57d7d3 */ if (fZ) goto L_0057d7d3;
L_0057d79d:; BB(0x0057d79d);
    /* 0057d79d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d7a0: je 0x57d889 */ if (fZ) goto L_0057d889;
L_0057d7a6:; BB(0x0057d7a6);
    /* 0057d7a6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057d7a9: jne 0x57d8d2 */ if (!fZ) goto L_0057d8d2;
L_0057d7af:; BB(0x0057d7af);
    /* 0057d7af: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 0057d7b2: mov edx, dword ptr [edi + 0x390] */ r_edx = R32((u32)(r_edi+0x390u));
    /* 0057d7b8: mov dword ptr [edi + 0x37c], 1 */ W32((u32)(r_edi+0x37cu), 0x1u);
    /* 0057d7c2: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 0057d7c5: and edx, 0xfffdfffe */ {  u32 a = r_edx; u32 b = 0xfffdfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057d7cb: mov dword ptr [edi + 0x390], edx */ W32((u32)(r_edi+0x390u), r_edx);
    /* 0057d7d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d7d2: ret  */ FN_RET(0x0057d790); r_esp += 4; return;
L_0057d7d3:; BB(0x0057d7d3);
    /* 0057d7d3: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0057d7d6: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d7db: jne 0x57d879 */ if (!fZ) goto L_0057d879;
L_0057d7e1:; BB(0x0057d7e1);
    /* 0057d7e1: movsx eax, word ptr [edi + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x394u));
    /* 0057d7e8: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057d7eb: jge 0x57d879 */ if ((fS==fO)) goto L_0057d879;
L_0057d7f1:; BB(0x0057d7f1);
    /* 0057d7f1: fld dword ptr [0x9279ac] */ FPUSH(R_F32((u32)(0x9279acu)));
    /* 0057d7f7: fadd dword ptr [edi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x68u));
    /* 0057d7fa: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
    /* 0057d7fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d800: mov word ptr [edi + 0x394], ax */ W16((u32)(r_edi+0x394u), (u16)r_eax);
    /* 0057d807: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 0057d811: push 0xfa */ { u32 v = 0xfau; r_esp -= 4; W32(r_esp, v); }
    /* 0057d816: mov eax, 5 */ r_eax = 0x5u;
    /* 0057d81b: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0057d822: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0057d828: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d829: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57d82eu); f_0050b510();
    /* 0057d82e: mov eax, dword ptr [edi + 0x358] */ r_eax = R32((u32)(r_edi+0x358u));
    /* 0057d834: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0057d837: fmul dword ptr [edi + 0x68] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x68u));
    /* 0057d83a: fstp dword ptr [edi + 0x3e0] */ W_F32((u32)(r_edi+0x3e0u), ST(0)); FPOP();
    /* 0057d840: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0057d843: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057d845: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d846: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057d848: push 0x111 */ { u32 v = 0x111u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d84d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57d852u); f_00814298();
    /* 0057d852: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057d855: movzx eax, word ptr [edi + 0x2cc] */ r_eax = (u32)R16((u32)(r_edi+0x2ccu));
    /* 0057d85c: movzx edx, word ptr [edi + 0x2c4] */ r_edx = (u32)R16((u32)(r_edi+0x2c4u));
    /* 0057d863: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057d866: mov word ptr [edi + 0x2cc], ax */ W16((u32)(r_edi+0x2ccu), (u16)r_eax);
    /* 0057d86d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057d870: mov word ptr [edi + 0x2c4], dx */ W16((u32)(r_edi+0x2c4u), (u16)r_edx);
    /* 0057d877: jmp 0x57d889 */ goto L_0057d889;
L_0057d879:; BB(0x0057d879);
    /* 0057d879: mov eax, dword ptr [edi + 0x68] */ r_eax = R32((u32)(r_edi+0x68u));
    /* 0057d87c: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
    /* 0057d886: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
L_0057d889:; BB(0x0057d889);
    /* 0057d889: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d88b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57d890u); f_007aa094();
    /* 0057d890: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d892: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057d894: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d896: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57d89bu); f_00772b44();
    /* 0057d89b: mov ecx, edi */ r_ecx = r_edi;
    /* 0057d89d: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57d8a2u); f_007b6880();
    /* 0057d8a2: fld dword ptr [0xa74158] */ FPUSH(R_F32((u32)(0xa74158u)));
    /* 0057d8a8: fadd dword ptr [edi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x68u));
    /* 0057d8ab: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 0057d8ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057d8b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d8b2: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 0057d8b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d8ba: ja 0x57d8be */ if ((!fC&&!fZ)) goto L_0057d8be;
L_0057d8bc:; BB(0x0057d8bc);
    /* 0057d8bc: fst st(1) */ ST(1) = ST(0);
L_0057d8be:; BB(0x0057d8be);
    /* 0057d8be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057d8c0: fstp dword ptr [edi + 0x68] */ W_F32((u32)(r_edi+0x68u), ST(0)); FPOP();
    /* 0057d8c3: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057d8c6: je 0x57d8d2 */ if (fZ) goto L_0057d8d2;
L_0057d8c8:; BB(0x0057d8c8);
    /* 0057d8c8: mov dword ptr [edi + 0x384], 0xffffffff */ W32((u32)(r_edi+0x384u), 0xffffffffu);
L_0057d8d2:; BB(0x0057d8d2);
    /* 0057d8d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057d8d3: ret  */ FN_RET(0x0057d790); r_esp += 4; return;
}

void f_0057d8d4(void) /* sub_57D8D4 */
{
    FN_ENTER(0x0057d8d4);
    /* 0057d8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d8d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057d8d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057d8d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057d8d8: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057d8db: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057d8dd: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0057d8e0: mov eax, dword ptr [ebx + 0x384] */ r_eax = R32((u32)(r_ebx+0x384u));
    /* 0057d8e6: and edx, 0xff7fffff */ {  u32 a = r_edx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057d8ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d8ee: je 0x57dcb3 */ if (fZ) goto L_0057dcb3;
L_0057d8f4:; BB(0x0057d8f4);
    /* 0057d8f4: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0057d8f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d8fa: je 0x57da85 */ if (fZ) goto L_0057da85;
L_0057d900:; BB(0x0057d900);
    /* 0057d900: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d903: jne 0x57da39 */ if (!fZ) goto L_0057da39;
L_0057d909:; BB(0x0057d909);
    /* 0057d909: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0057d90f: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057d912: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057d915: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0057d918: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057d91a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57d91fu); f_007aa094();
    /* 0057d91f: fld dword ptr [0x927988] */ FPUSH(R_F32((u32)(0x927988u)));
    /* 0057d925: fadd dword ptr [ebx + 0x40c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40cu));
    /* 0057d92b: fcom dword ptr [0x9279a8] */ fx_compare(ST(0), R_F32((u32)(0x9279a8u))); 
    /* 0057d931: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d933: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d934: ja 0x57d98d */ if ((!fC&&!fZ)) goto L_0057d98d;
L_0057d936:; BB(0x0057d936);
    /* 0057d936: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057d938: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0057d93b: or edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057d941: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057d943: mov dword ptr [ebx + 0x40c], eax */ W32((u32)(r_ebx+0x40cu), r_eax);
    /* 0057d949: and edx, 0xfeffffff */ {  u32 a = r_edx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057d94f: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0057d952: movsx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0057d959: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0057d95b: mov dword ptr [ebx + 0x310], ebp */ W32((u32)(r_ebx+0x310u), r_ebp);
    /* 0057d961: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d964: je 0x57d9df */ if (fZ) goto L_0057d9df;
L_0057d966:; BB(0x0057d966);
    /* 0057d966: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057d96c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0057d96e: jne 0x57d9df */ if (!fZ) goto L_0057d9df;
L_0057d970:; BB(0x0057d970);
    /* 0057d970: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 0057d977: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d979: je 0x57d9df */ if (fZ) goto L_0057d9df;
L_0057d97b:; BB(0x0057d97b);
    /* 0057d97b: mov dword ptr [ebx + 0x37c], 0 */ W32((u32)(r_ebx+0x37cu), 0x0u);
    /* 0057d985: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0057d98b: jmp 0x57d9df */ goto L_0057d9df;
L_0057d98d:; BB(0x0057d98d);
    /* 0057d98d: movsx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0057d994: fst dword ptr [ebx + 0x40c] */ W_F32((u32)(r_ebx+0x40cu), ST(0));
    /* 0057d99a: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d99d: je 0x57dc60 */ if (fZ) goto L_0057dc60;
L_0057d9a3:; BB(0x0057d9a3);
    /* 0057d9a3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057d9a5: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0057d9ab: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0057d9af: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0057d9b4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057d9b9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0057d9bd: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0057d9c1: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057d9c5: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0057d9c9: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0057d9cd: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d9d0: je 0x57dc43 */ if (fZ) goto L_0057dc43;
L_0057d9d6:; BB(0x0057d9d6);
    /* 0057d9d6: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d9d9: je 0x57dc43 */ if (fZ) goto L_0057dc43;
L_0057d9df:; BB(0x0057d9df);
    /* 0057d9df: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057d9e2: jne 0x57da1f */ if (!fZ) goto L_0057da1f;
L_0057d9e4:; BB(0x0057d9e4);
    /* 0057d9e4: fld dword ptr [0x92799c] */ FPUSH(R_F32((u32)(0x92799cu)));
    /* 0057d9ea: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0057d9f0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057d9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057d9f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057d9f5: jb 0x57dfa7 */ if (fC) goto L_0057dfa7;
L_0057d9fb:; BB(0x0057d9fb);
    /* 0057d9fb: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 0057da01: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0057da03: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057da05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057da07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057da08: jae 0x57da1f */ if (!fC) goto L_0057da1f;
L_0057da0a:; BB(0x0057da0a);
    /* 0057da0a: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0057da0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057da0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057da10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057da11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057da12: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da17: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57da1cu); f_00814298();
    /* 0057da1c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057da1f:; BB(0x0057da1f);
    /* 0057da1f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057da21: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x57da26u); f_007b6894();
    /* 0057da26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057da2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057da2c: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57da31u); f_00772b44();
    /* 0057da31: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057da34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057da35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057da36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057da37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057da38: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057da39:; BB(0x0057da39);
    /* 0057da39: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057da3c: jne 0x57dc3b */ if (!fZ) goto L_0057dc3b;
L_0057da42:; BB(0x0057da42);
    /* 0057da42: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0057da48: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057da4b: je 0x57da5c */ if (fZ) goto L_0057da5c;
L_0057da4d:; BB(0x0057da4d);
    /* 0057da4d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057da50: je 0x57da5c */ if (fZ) goto L_0057da5c;
L_0057da52:; BB(0x0057da52);
    /* 0057da52: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
L_0057da5c:; BB(0x0057da5c);
    /* 0057da5c: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0057da62: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0057da65: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057da68: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0057da6b: mov ebp, dword ptr [ebx + 0x390] */ r_ebp = R32((u32)(r_ebx+0x390u));
    /* 0057da71: and ebp, 0xfffbffff */ {  u32 a = r_ebp; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0057da77: mov dword ptr [ebx + 0x390], ebp */ W32((u32)(r_ebx+0x390u), r_ebp);
    /* 0057da7d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057da80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057da81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057da82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057da83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057da84: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057da85:; BB(0x0057da85);
    /* 0057da85: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057da87: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57da8cu); f_007aa094();
    /* 0057da8c: mov eax, dword ptr [0xa74184] */ r_eax = R32((u32)(0xa74184u));
    /* 0057da91: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057da97: push dword ptr [ebx + 0x39c] */ { u32 v = R32((u32)(r_ebx+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057da9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057da9f: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057daa5: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057daa8: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057daab: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057daae: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dab0: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x57dab5u); f_00771f5c();
    /* 0057dab5: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0057dabb: fcom dword ptr [0x927980] */ fx_compare(ST(0), R_F32((u32)(0x927980u))); 
    /* 0057dac1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057dac3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057dac4: jae 0x57db60 */ if (!fC) goto L_0057db60;
L_0057daca:; BB(0x0057daca);
    /* 0057daca: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0057dad1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dad4: je 0x57dc99 */ if (fZ) goto L_0057dc99;
L_0057dada:; BB(0x0057dada);
    /* 0057dada: fld dword ptr [0x92797c] */ FPUSH(R_F32((u32)(0x92797cu)));
    /* 0057dae0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0057dae2: fst dword ptr [ebx + 0x40c] */ W_F32((u32)(r_ebx+0x40cu), ST(0));
L_0057dae8:; BB(0x0057dae8);
    /* 0057dae8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057daea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057daec: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57daf1u); f_007b6880();
    /* 0057daf1: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0057daf8: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dafb: jne 0x57db58 */ if (!fZ) goto L_0057db58;
L_0057dafd:; BB(0x0057dafd);
    /* 0057dafd: fld dword ptr [0x927994] */ FPUSH(R_F32((u32)(0x927994u)));
    /* 0057db03: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0057db09: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0057db0b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057db0d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057db0e: jb 0x57db4c */ if (fC) goto L_0057db4c;
L_0057db10:; BB(0x0057db10);
    /* 0057db10: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 0057db16: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0057db18: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057db1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057db1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057db1d: jae 0x57db44 */ if (!fC) goto L_0057db44;
L_0057db1f:; BB(0x0057db1f);
    /* 0057db1f: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057db24: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0057db27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057db28: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57db2du); f_0050b510();
    /* 0057db2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057db2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057db30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057db31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057db32: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 0057db37: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57db3cu); f_00814298();
    /* 0057db3c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057db3f: jmp 0x57dc06 */ goto L_0057dc06;
L_0057db44:; BB(0x0057db44);
    /* 0057db44: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0057db47: jmp 0x57dc06 */ goto L_0057dc06;
L_0057db4c:; BB(0x0057db4c);
    /* 0057db4c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0057db4e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057db50: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0057db53: jmp 0x57dc06 */ goto L_0057dc06;
L_0057db58:; BB(0x0057db58);
    /* 0057db58: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0057db5b: jmp 0x57dc06 */ goto L_0057dc06;
L_0057db60:; BB(0x0057db60);
    /* 0057db60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057db62: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 0057db65: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0057db68: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 0057db6b: mov dword ptr [ebx + 0x44], ebp */ W32((u32)(r_ebx+0x44u), r_ebp);
    /* 0057db6e: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 0057db71: mov dword ptr [ebx + 0x4c], esi */ W32((u32)(r_ebx+0x4cu), r_esi);
    /* 0057db74: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 0057db7e: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0057db81: lea edx, [ebx + 0x30c] */ r_edx = (u32)(r_ebx+0x30cu);
    /* 0057db87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057db89: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57db8eu); f_0082ebac();
    /* 0057db8e: lea eax, [ebx + 0x398] */ r_eax = (u32)(r_ebx+0x398u);
    /* 0057db94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057db95: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057db96: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x57db9bu); f_0078ea50();
    /* 0057db9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057db9e: fld dword ptr [0x927998] */ FPUSH(R_F32((u32)(0x927998u)));
    /* 0057dba4: fadd dword ptr [ebx + 0x3e0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3e0u));
    /* 0057dbaa: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0057dbac: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057dbae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057dbb0: mov edx, 0x41200000 */ r_edx = 0x41200000u;
    /* 0057dbb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057dbb6: jb 0x57dbd6 */ if (fC) goto L_0057dbd6;
L_0057dbb8:; BB(0x0057dbb8);
    /* 0057dbb8: mov dword ptr [ebx + 0x384], 2 */ W32((u32)(r_ebx+0x384u), 0x2u);
    /* 0057dbc2: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0057dbcc: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
L_0057dbd6:; BB(0x0057dbd6);
    /* 0057dbd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbd7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dbd9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x57dbdeu); f_007aaa30();
    /* 0057dbde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dbe0: je 0x57dbff */ if (fZ) goto L_0057dbff;
L_0057dbe2:; BB(0x0057dbe2);
    /* 0057dbe2: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbe7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbe8: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57dbedu); f_0050b510();
    /* 0057dbed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057dbef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbf2: push 0x10d */ { u32 v = 0x10du; r_esp -= 4; W32(r_esp, v); }
    /* 0057dbf7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57dbfcu); f_00814298();
    /* 0057dbfc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0057dbff:; BB(0x0057dbff);
    /* 0057dbff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc00: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x57dc05u); f_007b999c();
    /* 0057dc05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0057dc06:; BB(0x0057dc06);
    /* 0057dc06: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0057dc0c: fcomp dword ptr [0x927990] */ fx_compare(ST(0), R_F32((u32)(0x927990u))); FPOP();
    /* 0057dc12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057dc14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057dc15: jbe 0x57dc31 */ if ((fC||fZ)) goto L_0057dc31;
L_0057dc17:; BB(0x0057dc17);
    /* 0057dc17: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057dc1d: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0057dc20: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0057dc22: lea edx, [ebx + 0x30c] */ r_edx = (u32)(r_ebx+0x30cu);
    /* 0057dc28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dc2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc2b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc2c: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x57dc31u); f_00771858();
L_0057dc31:; BB(0x0057dc31);
    /* 0057dc31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc33: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc34: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dc36: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x57dc3bu); f_007b4c58();
L_0057dc3b:; BB(0x0057dc3b);
    /* 0057dc3b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057dc3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057dc3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057dc40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057dc41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057dc42: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057dc43:; BB(0x0057dc43);
    /* 0057dc43: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc48: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0057dc4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dc4c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57dc51u); f_0050b510();
    /* 0057dc51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057dc54: movsx edx, word ptr [ebx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 0057dc5b: jmp 0x57d9df */ goto L_0057d9df;
L_0057dc60:; BB(0x0057dc60);
    /* 0057dc60: fld dword ptr [0x9279a0] */ FPUSH(R_F32((u32)(0x9279a0u)));
    /* 0057dc66: fdiv dword ptr [ebx + 0xcc] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0xccu));
    /* 0057dc6c: fadd dword ptr [0x927984] */ ST(0) = ST(0) + R_F32((u32)(0x927984u));
    /* 0057dc72: fmul dword ptr [0x9279a4] */ ST(0) = ST(0) * R_F32((u32)(0x9279a4u));
    /* 0057dc78: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057dc7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057dc7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057dc7d: jb 0x57d9df */ if (fC) goto L_0057d9df;
L_0057dc83:; BB(0x0057dc83);
    /* 0057dc83: mov eax, 8 */ r_eax = 0x8u;
    /* 0057dc88: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057dc8f: mov edx, 8 */ r_edx = 0x8u;
    /* 0057dc94: jmp 0x57d9df */ goto L_0057d9df;
L_0057dc99:; BB(0x0057dc99);
    /* 0057dc99: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0057dc9f: fcomp dword ptr [0x927994] */ fx_compare(ST(0), R_F32((u32)(0x927994u))); FPOP();
    /* 0057dca5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057dca7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057dca8: jb 0x57dae8 */ if (fC) goto L_0057dae8;
L_0057dcae:; BB(0x0057dcae);
    /* 0057dcae: jmp 0x57dada */ goto L_0057dada;
L_0057dcb3:; BB(0x0057dcb3);
    /* 0057dcb3: mov dword ptr [ebx + 0x384], 1 */ W32((u32)(r_ebx+0x384u), 0x1u);
    /* 0057dcbd: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dcc3: je 0x57dd81 */ if (fZ) goto L_0057dd81;
L_0057dcc9:; BB(0x0057dcc9);
    /* 0057dcc9: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057dccf: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057dcd4: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0057dcd7: je 0x57dd36 */ if (fZ) goto L_0057dd36;
L_0057dcd9:; BB(0x0057dcd9);
    /* 0057dcd9: mov ebp, dword ptr [ebx + 0x50] */ r_ebp = R32((u32)(r_ebx+0x50u));
    /* 0057dcdc: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0057dcdf: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 0057dce2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dce3: mov dword ptr [ebx + 0x398], ebp */ W32((u32)(r_ebx+0x398u), r_ebp);
    /* 0057dce9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057dcea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057dceb: mov dword ptr [ebx + 0x39c], edx */ W32((u32)(r_ebx+0x39cu), r_edx);
    /* 0057dcf1: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0057dcf7: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dcfa: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dcfd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dcff: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd02: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd08: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x57dd0du); f_00771f5c();
    /* 0057dd0d: mov eax, dword ptr [ebx + 0x390] */ r_eax = R32((u32)(r_ebx+0x390u));
    /* 0057dd13: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0057dd16: mov dword ptr [ebx + 0x40c], 0x42480000 */ W32((u32)(r_ebx+0x40cu), 0x42480000u);
    /* 0057dd20: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057dd25: mov dword ptr [ebx + 0x390], eax */ W32((u32)(r_ebx+0x390u), r_eax);
    /* 0057dd2b: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057dd31: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0057dd34: jmp 0x57dd6d */ goto L_0057dd6d;
L_0057dd36:; BB(0x0057dd36);
    /* 0057dd36: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 0057dd3c: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dd40: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x57dd45u); f_0052ccd8();
    /* 0057dd45: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd4b: push dword ptr [ebx + 0x39c] */ { u32 v = R32((u32)(r_ebx+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057dd53: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd59: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd5c: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd5f: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd62: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dd68: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x57dd6du); f_00771f5c();
L_0057dd6d:; BB(0x0057dd6d);
    /* 0057dd6d: mov eax, 7 */ r_eax = 0x7u;
    /* 0057dd72: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057dd79: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057dd7c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057dd7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057dd7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057dd7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057dd80: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057dd81:; BB(0x0057dd81);
    /* 0057dd81: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057dd87: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 0057dd91: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 0057dd94: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 0057dd9a: mov eax, 6 */ r_eax = 0x6u;
    /* 0057dd9f: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0057dda6: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dda8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ddaa: call 0x52ccd8 */ r_esp -= 4; W32(r_esp, 0x57ddafu); f_0052ccd8();
    /* 0057ddaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057ddb1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x57ddb6u); f_00770738();
    /* 0057ddb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057ddb8: je 0x57df6b */ if (fZ) goto L_0057df6b;
L_0057ddbe:; BB(0x0057ddbe);
    /* 0057ddbe: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0057ddc1: mov ebp, dword ptr [ebx + 0x38] */ r_ebp = R32((u32)(r_ebx+0x38u));
    /* 0057ddc4: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0057ddc7: mov edi, dword ptr [ebx + 0x40] */ r_edi = R32((u32)(r_ebx+0x40u));
    /* 0057ddca: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0057ddcd: mov edx, eax */ r_edx = r_eax;
    /* 0057ddcf: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0057ddd2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0057ddd6: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0057ddda: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x57dddfu); f_0082f9c4();
    /* 0057dddf: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0057dde2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057dde6: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0057dde8: fmul qword ptr [0x927888] */ ST(0) = ST(0) * R_F64((u32)(0x927888u));
    /* 0057ddee: fdiv qword ptr [0x927880] */ ST(0) = ST(0) / R_F64((u32)(0x927880u));
    /* 0057ddf4: fld dword ptr [0x9279a8] */ FPUSH(R_F32((u32)(0x9279a8u)));
    /* 0057ddfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057ddfc: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0057de00: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0057de05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0057de0a: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0057de0e: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0057de12: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0057de16: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0057de1a: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0057de1e: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0057de22: mov esi, edi */ r_esi = r_edi;
    /* 0057de24: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057de29: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57de2eu); f_0082d990();
    /* 0057de2e: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0057de36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057de38: mov edx, edi */ r_edx = r_edi;
    /* 0057de3a: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0057de42: mov dword ptr [esp + 0xc], 0x43480000 */ W32((u32)(r_esp+0xcu), 0x43480000u);
    /* 0057de4a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57de4fu); f_0082d8bc();
    /* 0057de4f: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 0057de53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057de55: lea ebp, [ebx + 0x398] */ r_ebp = (u32)(r_ebx+0x398u);
    /* 0057de5b: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0057de61: mov ebx, edi */ r_ebx = r_edi;
    /* 0057de63: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0057de67: mov edi, eax */ r_edi = r_eax;
L_0057de69:; BB(0x0057de69);
    /* 0057de69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057de6a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 0057de6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057de70: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x57de75u); f_00830aa0();
    /* 0057de75: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0057de79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057de7b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57de80u); f_0082ebac();
    /* 0057de80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057de82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057de83: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0057de87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057de88: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x57de8du); f_0077fffc();
    /* 0057de8d: mov edx, eax */ r_edx = r_eax;
    /* 0057de8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057de92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057de94: je 0x57df60 */ if (fZ) goto L_0057df60;
L_0057de9a:; BB(0x0057de9a);
    /* 0057de9a: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0057de9e: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057dea1: lea eax, [eax + 0x38] */ r_eax = (u32)(r_eax+0x38u);
    /* 0057dea4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dea5: call 0x78ea6c */ r_esp -= 4; W32(r_esp, 0x57deaau); f_0078ea6c();
    /* 0057deaa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057dead: fadd dword ptr [0x92798c] */ ST(0) = ST(0) + R_F32((u32)(0x92798cu));
    /* 0057deb3: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0057deb7: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0057deb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057debb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057debc: jae 0x57dec4 */ if (!fC) goto L_0057dec4;
L_0057debe:; BB(0x0057debe);
    /* 0057debe: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0057dec2: mov esi, ebx */ r_esi = r_ebx;
L_0057dec4:; BB(0x0057dec4);
    /* 0057dec4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057dec6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057dec8: mov edx, 0x5555 */ r_edx = 0x5555u;
    /* 0057decd: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57ded2u); f_0082d8bc();
    /* 0057ded2: add ebx, 0x5555 */ {  u32 a = r_ebx; u32 b = 0x5555u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0057ded8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057dedb: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057dede: jl 0x57de69 */ if ((fS!=fO)) goto L_0057de69;
L_0057dee0:; BB(0x0057dee0);
    /* 0057dee0: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0057dee4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57dee9u); f_0082da80();
    /* 0057dee9: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057deee: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57def3u); f_0082d990();
    /* 0057def3: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0057def7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0057defb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057defd: mov edx, esi */ r_edx = r_esi;
    /* 0057deff: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0057df07: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0057df0f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57df14u); f_0082d8bc();
    /* 0057df14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057df15: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0057df19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057df1b: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x57df20u); f_00830aa0();
    /* 0057df20: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 0057df24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057df26: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x57df2bu); f_0082ebac();
    /* 0057df2b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57df30u); f_0082da80();
L_0057df30:; BB(0x0057df30);
    /* 0057df30: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df36: push dword ptr [ebx + 0x39c] */ { u32 v = R32((u32)(r_ebx+0x39cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057df3e: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df44: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df47: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df4a: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df4d: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df53: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x57df58u); f_00771f5c();
    /* 0057df58: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057df5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057df5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057df5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057df5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057df5f: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057df60:; BB(0x0057df60);
    /* 0057df60: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 0057df64: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x57df69u); f_0082da80();
    /* 0057df69: jmp 0x57df30 */ goto L_0057df30;
L_0057df6b:; BB(0x0057df6b);
    /* 0057df6b: mov ebp, dword ptr [ebx + 0x50] */ r_ebp = R32((u32)(r_ebx+0x50u));
    /* 0057df6e: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0057df71: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 0057df74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057df75: mov dword ptr [ebx + 0x398], ebp */ W32((u32)(r_ebx+0x398u), r_ebp);
    /* 0057df7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057df7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057df7d: mov dword ptr [ebx + 0x39c], edx */ W32((u32)(r_ebx+0x39cu), r_edx);
    /* 0057df83: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0057df89: push dword ptr [ebx + 0x40] */ { u32 v = R32((u32)(r_ebx+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df8c: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df8f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0057df91: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df94: push dword ptr [ebx + 0x3e0] */ { u32 v = R32((u32)(r_ebx+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057df9a: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x57df9fu); f_00771f5c();
    /* 0057df9f: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057dfa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057dfa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057dfa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057dfa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057dfa6: ret  */ FN_RET(0x0057d8d4); r_esp += 4; return;
L_0057dfa7:; BB(0x0057dfa7);
    /* 0057dfa7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0057dfa9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057dfab: jmp 0x57da1f */ goto L_0057da1f;
}

void f_0057dfb0(void) /* sub_57DFB0 */
{
    FN_ENTER(0x0057dfb0);
    /* 0057dfb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057dfb1: mov ebp, esp */ r_ebp = r_esp;
    /* 0057dfb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057dfb5: push 0x8d7a3c */ { u32 v = 0x8d7a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0057dfba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057dfc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057dfc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057dfc8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057dfcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057dfce: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0057dfd1: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0057dfd4: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0057dfd7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0057dfda: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x57dfdfu); f_00770738();
    /* 0057dfdf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0057dfe2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057dfe5: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 0057dfeb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057dfed: je 0x57e27d */ if (fZ) goto L_0057e27d;
L_0057dff3:; BB(0x0057dff3);
    /* 0057dff3: jle 0x57e246 */ if ((fZ||fS!=fO)) goto L_0057e246;
L_0057dff9:; BB(0x0057dff9);
    /* 0057dff9: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057dffc: jg 0x57e1d7 */ if ((!fZ&&fS==fO)) goto L_0057e1d7;
L_0057e002:; BB(0x0057e002);
    /* 0057e002: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e005: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e007: je 0x57e26e */ if (fZ) goto L_0057e26e;
L_0057e00d:; BB(0x0057e00d);
    /* 0057e00d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e010: jne 0x57e05a */ if (!fZ) goto L_0057e05a;
L_0057e012:; BB(0x0057e012);
    /* 0057e012: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e015: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0057e01b: fcomp dword ptr [0x927974] */ fx_compare(ST(0), R_F32((u32)(0x927974u))); FPOP();
    /* 0057e021: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e023: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e024: jb 0x57e159 */ if (fC) goto L_0057e159;
L_0057e02a:; BB(0x0057e02a);
    /* 0057e02a: mov ecx, edx */ r_ecx = r_edx;
    /* 0057e02c: call 0x57e2e4 */ r_esp -= 4; W32(r_esp, 0x57e031u); f_0057e2e4();
    /* 0057e031: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e034: push 0xf7 */ { u32 v = 0xf7u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e039: lea edx, [eax + 0x3a4] */ r_edx = (u32)(r_eax+0x3a4u);
    /* 0057e03f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e040: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x57e045u); f_0050b510();
    /* 0057e045: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e048: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e04b: mov dword ptr [eax + 0x384], 2 */ W32((u32)(r_eax+0x384u), 0x2u);
    /* 0057e055: jmp 0x57e159 */ goto L_0057e159;
L_0057e05a:; BB(0x0057e05a);
    /* 0057e05a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e05d: jne 0x57e159 */ if (!fZ) goto L_0057e159;
L_0057e063:; BB(0x0057e063);
    /* 0057e063: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e066: lea edx, [ecx + 0x38] */ r_edx = (u32)(r_ecx+0x38u);
    /* 0057e069: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0057e06c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e06e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e06f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e070: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e071: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e072: push 0x10b */ { u32 v = 0x10bu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e077: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x57e07cu); f_008144b0();
    /* 0057e07c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e07f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e082: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 0057e088: fcomp dword ptr [0x927978] */ fx_compare(ST(0), R_F32((u32)(0x927978u))); FPOP();
    /* 0057e08e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057e090: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057e091: jb 0x57e159 */ if (fC) goto L_0057e159;
L_0057e097:; BB(0x0057e097);
    /* 0057e097: mov ecx, edx */ r_ecx = r_edx;
    /* 0057e099: call 0x57e2e4 */ r_esp -= 4; W32(r_esp, 0x57e09eu); f_0057e2e4();
    /* 0057e09e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0057e0a5: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e0aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57e0afu); f_005caba4();
    /* 0057e0af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057e0b0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057e0b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e0b5: je 0x57e25d */ if (fZ) goto L_0057e25d;
L_0057e0bb:; BB(0x0057e0bb);
    /* 0057e0bb: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0057e0c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057e0c9: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e0cc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e0cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0057e0d0: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 0057e0d3: lea edi, [esi + 0x3a4] */ r_edi = (u32)(r_esi+0x3a4u);
    /* 0057e0d9: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057e0dc: test ecx, 0x1000000 */ {  u32 a = r_ecx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e0e2: lea ebx, [ebx + 0x300] */ r_ebx = (u32)(r_ebx+0x300u);
    /* 0057e0e8: mov edx, 0 */ r_edx = 0x0u;
    /* 0057e0ed: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0057e0f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e0f1: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e0f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e0f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057e0f5: call 0x57ff44 */ r_esp -= 4; W32(r_esp, 0x57e0fau); f_0057ff44();
    /* 0057e0fa: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057e101:; BB(0x0057e101);
    /* 0057e101: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057e108: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e10b: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057e10e: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0057e111: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 0057e114: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e11a: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0057e11d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0057e124: mov dword ptr [ebp - 0x30], 0x4000 */ W32((u32)(r_ebp+0xffffffd0u), 0x4000u);
    /* 0057e12b: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 0057e130: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e131: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e132: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x57e137u); f_0050bab4();
    /* 0057e137: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057e13a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057e13c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e13d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057e13e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057e13f: push 0x114 */ { u32 v = 0x114u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e144: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x57e149u); f_00814298();
    /* 0057e149: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057e14c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e14f: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
L_0057e159:; BB(0x0057e159);
    /* 0057e159: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057e15c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e15f: mov eax, dword ptr [ebx + 0x300] */ r_eax = R32((u32)(r_ebx+0x300u));
    /* 0057e165: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0057e16b: mov edx, dword ptr [ebx + 0x304] */ r_edx = R32((u32)(r_ebx+0x304u));
    /* 0057e171: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 0057e177: mov esi, dword ptr [ebx + 0x308] */ r_esi = R32((u32)(r_ebx+0x308u));
    /* 0057e17d: mov dword ptr [ecx + 0x2ac], esi */ W32((u32)(r_ecx+0x2acu), r_esi);
    /* 0057e183: call 0x7718b4 */ r_esp -= 4; W32(r_esp, 0x57e188u); f_007718b4();
    /* 0057e188: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e18b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57e190u); f_007aa094();
    /* 0057e190: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e193: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0057e196: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e19c: jne 0x57e1a9 */ if (!fZ) goto L_0057e1a9;
L_0057e19e:; BB(0x0057e19e);
    /* 0057e19e: mov ecx, eax */ r_ecx = r_eax;
    /* 0057e1a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e1a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057e1a4: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x57e1a9u); f_00772b44();
L_0057e1a9:; BB(0x0057e1a9);
    /* 0057e1a9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e1ac: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x57e1b1u); f_007b6880();
    /* 0057e1b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e1b4: mov edx, dword ptr [eax + 0x38c] */ r_edx = R32((u32)(r_eax+0x38cu));
    /* 0057e1ba: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057e1bd: mov dword ptr [eax + 0x38c], edx */ W32((u32)(r_eax+0x38cu), r_edx);
    /* 0057e1c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e1c5: jg 0x57e246 */ if ((!fZ&&fS==fO)) goto L_0057e246;
L_0057e1cb:; BB(0x0057e1cb);
    /* 0057e1cb: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0057e1d5: jmp 0x57e246 */ goto L_0057e246;
L_0057e1d7:; BB(0x0057e1d7);
    /* 0057e1d7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e1da: jne 0x57e246 */ if (!fZ) goto L_0057e246;
L_0057e1dc:; BB(0x0057e1dc);
    /* 0057e1dc: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0057e1df: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e1e5: je 0x57e21d */ if (fZ) goto L_0057e21d;
L_0057e1e7:; BB(0x0057e1e7);
    /* 0057e1e7: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0057e1ed: mov dword ptr [eax + 0x380], 0 */ W32((u32)(r_eax+0x380u), 0x0u);
    /* 0057e1f7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e1fa: jne 0x57e246 */ if (!fZ) goto L_0057e246;
L_0057e1fc:; BB(0x0057e1fc);
    /* 0057e1fc: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0057e203: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0057e206: je 0x57e246 */ if (fZ) goto L_0057e246;
L_0057e208:; BB(0x0057e208);
    /* 0057e208: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e20b: mov dword ptr [edx + 0x37c], 0xb */ W32((u32)(r_edx+0x37cu), 0xbu);
    /* 0057e215: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
    /* 0057e21b: jmp 0x57e246 */ goto L_0057e246;
L_0057e21d:; BB(0x0057e21d);
    /* 0057e21d: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 0057e223: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e226: jne 0x57e246 */ if (!fZ) goto L_0057e246;
L_0057e228:; BB(0x0057e228);
    /* 0057e228: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0057e22f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e231: je 0x57e246 */ if (fZ) goto L_0057e246;
L_0057e233:; BB(0x0057e233);
    /* 0057e233: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e236: mov dword ptr [edx + 0x37c], 0 */ W32((u32)(r_edx+0x37cu), 0x0u);
    /* 0057e240: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_0057e246:; BB(0x0057e246);
    /* 0057e246: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0057e249: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0057e24c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057e24f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057e252: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057e259: mov esp, ebp */ r_esp = r_ebp;
    /* 0057e25b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057e25c: ret  */ FN_RET(0x0057dfb0); r_esp += 4; return;
L_0057e25d:; BB(0x0057e25d);
    /* 0057e25d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e260: lea edx, [eax + 0x3a4] */ r_edx = (u32)(r_eax+0x3a4u);
    /* 0057e266: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0057e269: jmp 0x57e101 */ goto L_0057e101;
L_0057e26e:; BB(0x0057e26e);
    /* 0057e26e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e271: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 0057e27b: jmp 0x57e246 */ goto L_0057e246;
L_0057e27d:; BB(0x0057e27d);
    /* 0057e27d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0057e280: mov dword ptr [eax + 0x38c], 0x5a */ W32((u32)(r_eax+0x38cu), 0x5au);
    /* 0057e28a: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057e290: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057e296: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0057e299: jne 0x57e2ab */ if (!fZ) goto L_0057e2ab;
L_0057e29b:; BB(0x0057e29b);
    /* 0057e29b: mov edx, eax */ r_edx = r_eax;
    /* 0057e29d: mov eax, 2 */ r_eax = 0x2u;
    /* 0057e2a2: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0057e2a9: jmp 0x57e2b9 */ goto L_0057e2b9;
L_0057e2ab:; BB(0x0057e2ab);
    /* 0057e2ab: mov edx, eax */ r_edx = r_eax;
    /* 0057e2ad: mov eax, 9 */ r_eax = 0x9u;
    /* 0057e2b2: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
L_0057e2b9:; BB(0x0057e2b9);
    /* 0057e2b9: mov ecx, edx */ r_ecx = r_edx;
    /* 0057e2bb: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 0057e2c5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57e2cau); f_007aa094();
    /* 0057e2ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057e2cd: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 0057e2d3: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057e2d8: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 0057e2de: jmp 0x57e246 */ goto L_0057e246;
}

