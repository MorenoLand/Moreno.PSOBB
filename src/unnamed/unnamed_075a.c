#include "protos.h"

void f_0075a114(void) /* sub_75A114 */
{
    FN_ENTER(0x0075a114);
    /* 0075a114: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a115: mov esi, ecx */ r_esi = r_ecx;
    /* 0075a117: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0075a11a: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75a11fu); f_007365f4();
    /* 0075a11f: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a122: je 0x75a128 */ if (fZ) goto L_0075a128;
L_0075a124:; BB(0x0075a124);
    /* 0075a124: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a126: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a127: ret  */ FN_RET(0x0075a114); r_esp += 4; return;
L_0075a128:; BB(0x0075a128);
    /* 0075a128: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0075a12b: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 0075a132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a133: call 0x73664c */ r_esp -= 4; W32(r_esp, 0x75a138u); f_0073664c();
    /* 0075a138: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a13a: jne 0x75a140 */ if (!fZ) goto L_0075a140;
L_0075a13c:; BB(0x0075a13c);
    /* 0075a13c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a13e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a13f: ret  */ FN_RET(0x0075a114); r_esp += 4; return;
L_0075a140:; BB(0x0075a140);
    /* 0075a140: mov eax, 1 */ r_eax = 0x1u;
    /* 0075a145: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a146: ret  */ FN_RET(0x0075a114); r_esp += 4; return;
}

void f_0075a148(void) /* sub_75A148 */
{
    FN_ENTER(0x0075a148);
    /* 0075a148: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a149: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a14a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0075a14c: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a14e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a153u); f_0073ec50();
    /* 0075a153: mov ebx, eax */ r_ebx = r_eax;
    /* 0075a155: push 0xc7 */ { u32 v = 0xc7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a15a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a15fu); f_0079317c();
    /* 0075a15f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a160: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a162: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a163: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75a168u); f_00735460();
    /* 0075a168: mov ebx, eax */ r_ebx = r_eax;
    /* 0075a16a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a16d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a16e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075a170: call 0x75a17c */ r_esp -= 4; W32(r_esp, 0x75a175u); f_0075a17c();
    /* 0075a175: mov eax, ebx */ r_eax = r_ebx;
    /* 0075a177: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a178: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a179: ret  */ FN_RET(0x0075a148); r_esp += 4; return;
}

void f_0075a17c(void) /* sub_75A17C */
{
    FN_ENTER(0x0075a17c);
    /* 0075a17c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a17d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0075a181: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a183: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x75a188u); f_00736578();
    /* 0075a188: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75a18du); f_0077d9f0();
    /* 0075a18d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075a18f: jle 0x75a1ee */ if ((fZ||fS!=fO)) goto L_0075a1ee;
L_0075a191:; BB(0x0075a191);
    /* 0075a191: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a196: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a19bu); f_0079317c();
    /* 0075a19b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a19c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a19e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1a0: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a1a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1a3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a1a8u); f_00735c90();
L_0075a1a8:; BB(0x0075a1a8);
    /* 0075a1a8: push 0xcd */ { u32 v = 0xcdu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1ad: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a1b2u); f_0079317c();
    /* 0075a1b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a1b3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1b5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1b7: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a1b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1ba: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a1bfu); f_00735c90();
    /* 0075a1bf: push 0x42fe0000 */ { u32 v = 0x42fe0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1c4: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a1c6: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 0075a1cd: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075a1d2: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 0075a1d9: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1de: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75a1e3u); f_007361d0();
    /* 0075a1e3: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a1e5: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75a1eau); f_00736458();
    /* 0075a1ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a1eb: ret 4 */ FN_RET(0x0075a17c); r_esp += 8; return;
L_0075a1ee:; BB(0x0075a1ee);
    /* 0075a1ee: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1f3: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a1f8u); f_0079317c();
    /* 0075a1f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a1f9: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1fb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a1fd: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a1ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a200: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75a205u); f_00735ee0();
    /* 0075a205: jmp 0x75a1a8 */ goto L_0075a1a8;
}

void f_0075a208(void) /* sub_75A208 */
{
    FN_ENTER(0x0075a208);
    /* 0075a208: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a209: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a20a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a20b: mov edi, ecx */ r_edi = r_ecx;
    /* 0075a20d: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a210: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0075a213: movsx esi, word ptr [eax + 0x6a] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x6au));
    /* 0075a217: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a21a: movsx ebx, word ptr [eax + 0x6c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x6cu));
    /* 0075a21e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a21f: movsx edx, word ptr [edi + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
    /* 0075a223: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a225: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075a228: call 0x77dad8 */ r_esp -= 4; W32(r_esp, 0x75a22du); f_0077dad8();
    /* 0075a22d: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0075a230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a232: je 0x75a259 */ if (fZ) goto L_0075a259;
L_0075a234:; BB(0x0075a234);
    /* 0075a234: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a237: movsx ecx, word ptr [edi + 0x1e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
    /* 0075a23b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0075a23e: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0075a240: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075a243: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a245: mov eax, 0 */ r_eax = 0x0u;
    /* 0075a24a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0075a24d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a24e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a24f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a250: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a251: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075a254: call 0x77dad8 */ r_esp -= 4; W32(r_esp, 0x75a259u); f_0077dad8();
L_0075a259:; BB(0x0075a259);
    /* 0075a259: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a25a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a25b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a25c: ret  */ FN_RET(0x0075a208); r_esp += 4; return;
}

void f_0075a260(void) /* sub_75A260 */
{
    FN_ENTER(0x0075a260);
    /* 0075a260: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a261: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 0075a264: movsx edi, word ptr [edx + 0x6a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x6au));
    /* 0075a268: push dword ptr [ecx + 0x2c] */ { u32 v = R32((u32)(r_ecx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a26b: push dword ptr [ecx + 0x28] */ { u32 v = R32((u32)(r_ecx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a26e: movsx eax, word ptr [edx + 0x6c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6cu));
    /* 0075a272: movsx edx, byte ptr [ecx + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1du));
    /* 0075a276: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075a278: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075a27a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a27b: movsx edi, word ptr [ecx + 0x1e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1eu));
    /* 0075a27f: mov ecx, dword ptr [ecx + 0x38] */ r_ecx = R32((u32)(r_ecx+0x38u));
    /* 0075a282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a283: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a284: call 0x77daac */ r_esp -= 4; W32(r_esp, 0x75a289u); f_0077daac();
    /* 0075a289: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a28a: ret  */ FN_RET(0x0075a260); r_esp += 4; return;
}

void f_0075a28c(void) /* sub_75A28C */
{
    FN_ENTER(0x0075a28c);
    /* 0075a28c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a28d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a28e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a28f: mov edi, ecx */ r_edi = r_ecx;
    /* 0075a291: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a293: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a298u); f_0073ec50();
    /* 0075a298: mov ebp, eax */ r_ebp = r_eax;
    /* 0075a29a: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a29f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a2a4u); f_0079317c();
    /* 0075a2a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2a5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2a8: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75a2adu); f_00735460();
    /* 0075a2ad: mov esi, eax */ r_esi = r_eax;
    /* 0075a2af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a2b2: call 0x77d99c */ r_esp -= 4; W32(r_esp, 0x75a2b7u); f_0077d99c();
    /* 0075a2b7: mov ebp, eax */ r_ebp = r_eax;
    /* 0075a2b9: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75a2beu); f_0077d9f0();
    /* 0075a2be: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075a2c0: lea edx, [ebp + eax + 0xc] */ r_edx = (u32)(r_ebp+r_eax+0xcu);
    /* 0075a2c4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075a2c6: jle 0x75a369 */ if ((fZ||fS!=fO)) goto L_0075a369;
L_0075a2cc:; BB(0x0075a2cc);
    /* 0075a2cc: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2d1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a2d6u); f_0079317c();
    /* 0075a2d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a2d7: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2d9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2db: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a2dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2de: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a2e3u); f_00735c90();
    /* 0075a2e3: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2e8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a2edu); f_0079317c();
    /* 0075a2ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a2ee: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2f0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a2f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a2f5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a2fau); f_00735c90();
L_0075a2fa:; BB(0x0075a2fa);
    /* 0075a2fa: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0075a2fd: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0075a2ff: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a305: je 0x75a320 */ if (fZ) goto L_0075a320;
L_0075a307:; BB(0x0075a307);
    /* 0075a307: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a30c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a311u); f_0079317c();
    /* 0075a311: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a312: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a314: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a316: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a319: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a31eu); f_00735c90();
    /* 0075a31e: jmp 0x75a337 */ goto L_0075a337;
L_0075a320:; BB(0x0075a320);
    /* 0075a320: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a325: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a32au); f_0079317c();
    /* 0075a32a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a32b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a32d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a32f: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a332: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75a337u); f_00735ee0();
L_0075a337:; BB(0x0075a337);
    /* 0075a337: push 0x43000000 */ { u32 v = 0x43000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a33c: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a33e: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075a345: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075a34b: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075a352: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a357: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75a35cu); f_007361d0();
    /* 0075a35c: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a35e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75a363u); f_00736458();
    /* 0075a363: mov eax, esi */ r_eax = r_esi;
    /* 0075a365: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a366: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a367: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a368: ret  */ FN_RET(0x0075a28c); r_esp += 4; return;
L_0075a369:; BB(0x0075a369);
    /* 0075a369: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a36e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a373u); f_0079317c();
    /* 0075a373: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a374: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a376: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a378: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a37a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a37b: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75a380u); f_00735ee0();
    /* 0075a380: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a385: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a38au); f_0079317c();
    /* 0075a38a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a38b: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0075a38d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a38f: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a391: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a392: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75a397u); f_00735ee0();
    /* 0075a397: jmp 0x75a2fa */ goto L_0075a2fa;
}

void f_0075a39c(void) /* sub_75A39C */
{
    FN_ENTER(0x0075a39c);
    /* 0075a39c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a39d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075a39f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a3a1: push 0x8f3250 */ { u32 v = 0x8f3250u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a3a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075a3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a3ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075a3b4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a3b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075a3ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0075a3bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0075a3c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075a3c3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075a3c6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0075a3cd: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a3d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75a3d7u); f_005caba4();
    /* 0075a3d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a3d8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0075a3db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a3dd: je 0x75a427 */ if (fZ) goto L_0075a427;
L_0075a3df:; BB(0x0075a3df);
    /* 0075a3df: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0075a3e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a3ed: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a3f2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a3f7u); f_0073ec50();
    /* 0075a3f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a3f8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a3fb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a3fe: lea ebx, [edx + 0x28] */ r_ebx = (u32)(r_edx+0x28u);
    /* 0075a401: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075a404: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a405: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a406: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a407: call 0x75c640 */ r_esp -= 4; W32(r_esp, 0x75a40cu); f_0075c640();
    /* 0075a40c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a40f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0075a416:; BB(0x0075a416);
    /* 0075a416: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075a419: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a41c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a423: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a425: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a426: ret  */ FN_RET(0x0075a39c); r_esp += 4; return;
L_0075a427:; BB(0x0075a427);
    /* 0075a427: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a429: jmp 0x75a416 */ goto L_0075a416;
}

void f_0075a42c(void) /* sub_75A42C */
{
    FN_ENTER(0x0075a42c);
    /* 0075a42c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a42d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a42e: mov edi, ecx */ r_edi = r_ecx;
    /* 0075a430: mov ecx, dword ptr [edi + 0x48] */ r_ecx = R32((u32)(r_edi+0x48u));
    /* 0075a433: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x75a438u); f_007365f4();
    /* 0075a438: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075a43b: jne 0x75a444 */ if (!fZ) goto L_0075a444;
L_0075a43d:; BB(0x0075a43d);
    /* 0075a43d: mov byte ptr [edi + 0x1c], 0x18 */ W8((u32)(r_edi+0x1cu), 0x18u);
    /* 0075a441: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a442: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a443: ret  */ FN_RET(0x0075a42c); r_esp += 4; return;
L_0075a444:; BB(0x0075a444);
    /* 0075a444: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075a447: jne 0x75a473 */ if (!fZ) goto L_0075a473;
L_0075a449:; BB(0x0075a449);
    /* 0075a449: mov ecx, dword ptr [edi + 0x5c] */ r_ecx = R32((u32)(r_edi+0x5cu));
    /* 0075a44c: call 0x75d2e4 */ r_esp -= 4; W32(r_esp, 0x75a451u); f_0075d2e4();
    /* 0075a451: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0075a454: call 0x714598 */ r_esp -= 4; W32(r_esp, 0x75a459u); f_00714598();
    /* 0075a459: call 0x77d99c */ r_esp -= 4; W32(r_esp, 0x75a45eu); f_0077d99c();
    /* 0075a45e: mov ebx, eax */ r_ebx = r_eax;
    /* 0075a460: call 0x77d9f0 */ r_esp -= 4; W32(r_esp, 0x75a465u); f_0077d9f0();
    /* 0075a465: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0075a467: lea eax, [ebx + eax + 0xc] */ r_eax = (u32)(r_ebx+r_eax+0xcu);
    /* 0075a46b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a46d: jle 0x75a476 */ if ((fZ||fS!=fO)) goto L_0075a476;
L_0075a46f:; BB(0x0075a46f);
    /* 0075a46f: mov byte ptr [edi + 0x1c], 0x14 */ W8((u32)(r_edi+0x1cu), 0x14u);
L_0075a473:; BB(0x0075a473);
    /* 0075a473: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a474: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a475: ret  */ FN_RET(0x0075a42c); r_esp += 4; return;
L_0075a476:; BB(0x0075a476);
    /* 0075a476: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 0075a47a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a47b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a47c: ret  */ FN_RET(0x0075a42c); r_esp += 4; return;
}

void f_0075a480(void) /* sub_75A480 */
{
    FN_ENTER(0x0075a480);
    /* 0075a480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a481: mov ebp, esp */ r_ebp = r_esp;
    /* 0075a483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a485: push 0x8f3278 */ { u32 v = 0x8f3278u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a48a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075a490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075a498: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a49b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075a49e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0075a4a1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0075a4a4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075a4a7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075a4aa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0075a4b1: push 0x98 */ { u32 v = 0x98u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4b6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75a4bbu); f_005caba4();
    /* 0075a4bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a4bc: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0075a4bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a4c1: je 0x75a513 */ if (fZ) goto L_0075a513;
L_0075a4c3:; BB(0x0075a4c3);
    /* 0075a4c3: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0075a4ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a4d1: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4d6: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a4dbu); f_0073ec50();
    /* 0075a4db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a4dc: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a4df: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a4e2: movsx esi, word ptr [edx + 0x1e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edx+0x1eu));
    /* 0075a4e6: lea ebx, [edx + 0x28] */ r_ebx = (u32)(r_edx+0x28u);
    /* 0075a4e9: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0075a4ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a4f0: call 0x75d400 */ r_esp -= 4; W32(r_esp, 0x75a4f5u); f_0075d400();
    /* 0075a4f5: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a4f8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0075a4ff:; BB(0x0075a4ff);
    /* 0075a4ff: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075a502: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075a505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a508: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a50f: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a511: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a512: ret  */ FN_RET(0x0075a480); r_esp += 4; return;
L_0075a513:; BB(0x0075a513);
    /* 0075a513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a515: jmp 0x75a4ff */ goto L_0075a4ff;
}

void f_0075a518(void) /* sub_75A518 */
{
    FN_ENTER(0x0075a518);
    /* 0075a518: movsx eax, word ptr [ecx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20u));
    /* 0075a51c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a51d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
    /* 0075a520: call 0x73662c */ r_esp -= 4; W32(r_esp, 0x75a525u); f_0073662c();
    /* 0075a525: ret  */ FN_RET(0x0075a518); r_esp += 4; return;
}

void f_0075a528(void) /* sub_75A528 */
{
    FN_ENTER(0x0075a528);
    /* 0075a528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a529: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a52b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a530u); f_0073ec50();
    /* 0075a530: mov ebx, eax */ r_ebx = r_eax;
    /* 0075a532: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a537: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a53cu); f_0079317c();
    /* 0075a53c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a53d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a53f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a540: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x75a545u); f_00735460();
    /* 0075a545: mov ebx, eax */ r_ebx = r_eax;
    /* 0075a547: push 0xd4 */ { u32 v = 0xd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a54c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a551u); f_0079317c();
    /* 0075a551: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a554: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a556: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a558: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a55a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a55b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a560u); f_00735c90();
    /* 0075a560: push 0xd5 */ { u32 v = 0xd5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a565: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a56au); f_0079317c();
    /* 0075a56a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a56b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a56d: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a56f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a571: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a572: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a577u); f_00735c90();
    /* 0075a577: push 0xd6 */ { u32 v = 0xd6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a57c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a581u); f_0079317c();
    /* 0075a581: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a582: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a584: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a586: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a588: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a589: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a58eu); f_00735c90();
    /* 0075a58e: push 0xd7 */ { u32 v = 0xd7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a593: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a598u); f_0079317c();
    /* 0075a598: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a599: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a59b: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a59d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a59f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5a0: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a5a5u); f_00735c90();
    /* 0075a5a5: push 0xd8 */ { u32 v = 0xd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5aa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a5afu); f_0079317c();
    /* 0075a5af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a5b0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5b2: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a5b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5b7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a5bcu); f_00735c90();
    /* 0075a5bc: push 0xd9 */ { u32 v = 0xd9u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5c1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a5c6u); f_0079317c();
    /* 0075a5c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a5c7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5c9: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a5cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5ce: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a5d3u); f_00735c90();
    /* 0075a5d3: push 0xda */ { u32 v = 0xdau; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5d8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a5ddu); f_0079317c();
    /* 0075a5dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a5de: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5e0: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a5e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5e5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a5eau); f_00735c90();
    /* 0075a5ea: push 0xdb */ { u32 v = 0xdbu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5ef: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a5f4u); f_0079317c();
    /* 0075a5f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a5f5: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5f7: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a5fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a5fc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a601u); f_00735c90();
    /* 0075a601: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a606: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a60bu); f_0079317c();
    /* 0075a60b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a60c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a60e: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a610: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a613: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75a618u); f_00735c90();
    /* 0075a618: push 0x43000000 */ { u32 v = 0x43000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a61d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a61f: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075a626: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075a62c: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 0075a633: push 0x43410000 */ { u32 v = 0x43410000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a638: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x75a63du); f_007361d0();
    /* 0075a63d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a63f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x75a644u); f_00736458();
    /* 0075a644: mov eax, ebx */ r_eax = r_ebx;
    /* 0075a646: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a647: ret  */ FN_RET(0x0075a528); r_esp += 4; return;
}

void f_0075a648(void) /* sub_75A648 */
{
    FN_ENTER(0x0075a648);
    /* 0075a648: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a649: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a64a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a64b: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a64e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a64f: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x75a654u); f_0073cd8c();
    /* 0075a654: mov edi, eax */ r_edi = r_eax;
    /* 0075a656: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a658: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a65du); f_0079317c();
    /* 0075a65d: mov esi, eax */ r_esi = r_eax;
    /* 0075a65f: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a661: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a666u); f_0079317c();
    /* 0075a666: mov ebp, eax */ r_ebp = r_eax;
    /* 0075a668: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 0075a66a: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a66fu); f_0073ec50();
    /* 0075a66f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a672: push 0x43320000 */ { u32 v = 0x43320000u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a677: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a678: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a67a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a67b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a67c: call 0x73cfec */ r_esp -= 4; W32(r_esp, 0x75a681u); f_0073cfec();
    /* 0075a681: mov ecx, edi */ r_ecx = r_edi;
    /* 0075a683: call 0x73d170 */ r_esp -= 4; W32(r_esp, 0x75a688u); f_0073d170();
    /* 0075a688: mov eax, edi */ r_eax = r_edi;
    /* 0075a68a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a68b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a68c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a68d: ret  */ FN_RET(0x0075a648); r_esp += 4; return;
}

void f_0075a690(void) /* sub_75A690 */
{
    FN_ENTER(0x0075a690);
    /* 0075a690: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a691: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a692: mov edi, ecx */ r_edi = r_ecx;
    /* 0075a694: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a696: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a69bu); f_0073ec50();
    /* 0075a69b: push 0x9f55c4 */ { u32 v = 0x9f55c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6a1: call 0x714ab0 */ r_esp -= 4; W32(r_esp, 0x75a6a6u); f_00714ab0();
    /* 0075a6a6: mov esi, eax */ r_esi = r_eax;
    /* 0075a6a8: push 0xca */ { u32 v = 0xcau; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6ad: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a6b2u); f_0079317c();
    /* 0075a6b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a6b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6b6: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a6b8: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x75a6bdu); f_00737ae4();
    /* 0075a6bd: push 0xdd */ { u32 v = 0xddu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6c2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a6c7u); f_0079317c();
    /* 0075a6c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a6c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6cb: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a6cd: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x75a6d2u); f_00714d64();
    /* 0075a6d2: push 0xde */ { u32 v = 0xdeu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6d7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75a6dcu); f_0079317c();
    /* 0075a6dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a6dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a6e2: call 0x714d64 */ r_esp -= 4; W32(r_esp, 0x75a6e7u); f_00714d64();
    /* 0075a6e7: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075a6ea: call 0x77d8fc */ r_esp -= 4; W32(r_esp, 0x75a6efu); f_0077d8fc();
    /* 0075a6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a6f1: je 0x75a6fe */ if (fZ) goto L_0075a6fe;
L_0075a6f3:; BB(0x0075a6f3);
    /* 0075a6f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a6f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a6f7: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x75a6fcu); f_00714e5c();
    /* 0075a6fc: jmp 0x75a707 */ goto L_0075a707;
L_0075a6fe:; BB(0x0075a6fe);
    /* 0075a6fe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a700: mov ecx, esi */ r_ecx = r_esi;
    /* 0075a702: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x75a707u); f_00714e5c();
L_0075a707:; BB(0x0075a707);
    /* 0075a707: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0075a70e: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a714: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0075a71b: mov eax, esi */ r_eax = r_esi;
    /* 0075a71d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075a71e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a71f: ret  */ FN_RET(0x0075a690); r_esp += 4; return;
}

void f_0075a720(void) /* sub_75A720 */
{
    FN_ENTER(0x0075a720);
    /* 0075a720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a721: mov ebp, esp */ r_ebp = r_esp;
    /* 0075a723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a725: push 0x8f32a0 */ { u32 v = 0x8f32a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a72a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075a730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075a738: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a73b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075a73e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0075a741: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0075a744: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075a747: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0075a74a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0075a751: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a753: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x75a758u); f_005caba4();
    /* 0075a758: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a759: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0075a75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a75e: je 0x75a7f7 */ if (fZ) goto L_0075a7f7;
L_0075a764:; BB(0x0075a764);
    /* 0075a764: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0075a76b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a772: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a778: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a77b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a77e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a780: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a782: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a784: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a785: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x75a78au); f_0078eba4();
    /* 0075a78a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075a78d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0075a794:; BB(0x0075a794);
    /* 0075a794: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075a79b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a79d: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x75a7a2u); f_0078ed3c();
    /* 0075a7a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075a7a5: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075a7a8: call 0x77d95c */ r_esp -= 4; W32(r_esp, 0x75a7adu); f_0077d95c();
    /* 0075a7ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a7ae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7b0: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x75a7b5u); f_0078ed74();
    /* 0075a7b5: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a7ba: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x75a7bfu); f_0073ec50();
    /* 0075a7bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a7c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a7c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7c3: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x75a7c8u); f_0078ed84();
    /* 0075a7c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7ca: call 0x78ee8c */ r_esp -= 4; W32(r_esp, 0x75a7cfu); f_0078ee8c();
    /* 0075a7cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7d1: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x75a7d6u); f_0061cdb0();
    /* 0075a7d6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7d8: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x75a7ddu); f_0078ee34();
    /* 0075a7dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a7df: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x75a7e4u); f_0078ee74();
    /* 0075a7e4: mov eax, ebx */ r_eax = r_ebx;
    /* 0075a7e6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075a7e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a7ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a7f3: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a7f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a7f6: ret  */ FN_RET(0x0075a720); r_esp += 4; return;
L_0075a7f7:; BB(0x0075a7f7);
    /* 0075a7f7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0075a7f9: jmp 0x75a794 */ goto L_0075a794;
}

void f_0075a7fc(void)
{
    FN_ENTER(0x0075a7fc);
    /* 0075a7fc: mov ecx, dword ptr [0xa9ad04] */ r_ecx = R32((u32)(0xa9ad04u));
    /* 0075a802: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a804: je 0x75a80b */ if (fZ) goto L_0075a80b;
L_0075a806:; BB(0x0075a806);
    /* 0075a806: call 0x75a80c */ r_esp -= 4; W32(r_esp, 0x75a80bu); f_0075a80c();
L_0075a80b:; BB(0x0075a80b);
    /* 0075a80b: ret  */ FN_RET(0x0075a7fc); r_esp += 4; return;
}

void f_0075a80c(void) /* sub_75A80C */
{
    FN_ENTER(0x0075a80c);
    /* 0075a80c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a80d: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a810: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0075a813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a815: je 0x75a907 */ if (fZ) goto L_0075a907;
L_0075a81b:; BB(0x0075a81b);
    /* 0075a81b: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 0075a81e: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075a821: jge 0x75a865 */ if ((fS==fO)) goto L_0075a865;
L_0075a823:; BB(0x0075a823);
    /* 0075a823: mov edx, eax */ r_edx = r_eax;
    /* 0075a825: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0075a828: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075a82a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0075a82e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0075a832: fmul dword ptr [0x9742d8] */ ST(0) = ST(0) * R_F32((u32)(0x9742d8u));
    /* 0075a838: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0075a83c: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0075a841: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075a846: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0075a84a: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0075a84e: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 0075a852: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0075a856: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0075a85a: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0075a85d: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0075a863: jmp 0x75a86a */ goto L_0075a86a;
L_0075a865:; BB(0x0075a865);
    /* 0075a865: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
L_0075a86a:; BB(0x0075a86a);
    /* 0075a86a: push dword ptr [ecx + 0x24] */ { u32 v = R32((u32)(r_ecx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a86d: call 0x7199e0 */ r_esp -= 4; W32(r_esp, 0x75a872u); f_007199e0();
    /* 0075a872: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0075a876: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075a879: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0075a87d: fdivr dword ptr [0x9742d4] */ ST(0) = R_F32((u32)(0x9742d4u)) / ST(0);
    /* 0075a883: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0075a887: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075a88c: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x75a891u); f_0082bb30();
    /* 0075a891: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0075a897: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x75a89cu); f_00829cc8();
    /* 0075a89c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0075a89e: mov edx, edi */ r_edx = r_edi;
    /* 0075a8a0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x75a8a5u); f_0082bb60();
    /* 0075a8a5: fld dword ptr [0x9742c8] */ FPUSH(R_F32((u32)(0x9742c8u)));
    /* 0075a8ab: fld dword ptr [0x9742c4] */ FPUSH(R_F32((u32)(0x9742c4u)));
    /* 0075a8b1: mov dword ptr [esp], 0x43f10000 */ W32((u32)(r_esp), 0x43f10000u);
    /* 0075a8b8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075a8ba: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0075a8bd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0075a8c1: mov dword ptr [esp + 4], 0x43ac0000 */ W32((u32)(r_esp+0x4u), 0x43ac0000u);
    /* 0075a8c9: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0075a8cd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0075a8d1: mov dword ptr [esp + 0x10], 0x3f600000 */ W32((u32)(r_esp+0x10u), 0x3f600000u);
    /* 0075a8d9: mov dword ptr [esp + 0x14], 0x3eae0000 */ W32((u32)(r_esp+0x14u), 0x3eae0000u);
    /* 0075a8e1: mov dword ptr [esp + 0x18], 0x3f6e0000 */ W32((u32)(r_esp+0x18u), 0x3f6e0000u);
    /* 0075a8e9: mov dword ptr [esp + 0x1c], 0x3ec60000 */ W32((u32)(r_esp+0x1cu), 0x3ec60000u);
    /* 0075a8f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a8f2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0075a8f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075a8f9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075a8fd: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75a902u); f_0082b440();
    /* 0075a902: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75a907u); f_004ac444();
L_0075a907:; BB(0x0075a907);
    /* 0075a907: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075a90a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a90b: ret  */ FN_RET(0x0075a80c); r_esp += 4; return;
}

void f_0075a8d9(void)
{
    FN_ENTER(0x0075a8d9);
    /* 0075a8d9: mov dword ptr [esp + 0x14], 0x3eae0000 */ W32((u32)(r_esp+0x14u), 0x3eae0000u);
    /* 0075a8e1: mov dword ptr [esp + 0x18], 0x3f6e0000 */ W32((u32)(r_esp+0x18u), 0x3f6e0000u);
    /* 0075a8e9: mov dword ptr [esp + 0x1c], 0x3ec60000 */ W32((u32)(r_esp+0x1cu), 0x3ec60000u);
    /* 0075a8f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075a8f2: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0075a8f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075a8f9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075a8fd: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75a902u); f_0082b440();
    /* 0075a902: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75a907u); f_004ac444();
    /* 0075a907: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075a90a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075a90b: ret  */ FN_RET(0x0075a8d9); r_esp += 4; return;
}

void f_0075a90c(void) /* sub_75A90C */
{
    FN_ENTER(0x0075a90c);
    /* 0075a90c: mov dword ptr [0xa9acf8], 0x3f800000 */ W32((u32)(0xa9acf8u), 0x3f800000u);
    /* 0075a916: mov dword ptr [0xa9acfc], 0x41000000 */ W32((u32)(0xa9acfcu), 0x41000000u);
    /* 0075a920: mov dword ptr [0xa9ad00], 0x3fc00000 */ W32((u32)(0xa9ad00u), 0x3fc00000u);
    /* 0075a92a: ret  */ FN_RET(0x0075a90c); r_esp += 4; return;
}

void f_0075a92c(void) /* sub_75A92C */
{
    FN_ENTER(0x0075a92c);
    /* 0075a92c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a92d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075a92f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075a931: call 0x75a950 */ r_esp -= 4; W32(r_esp, 0x75a936u); f_0075a950();
    /* 0075a936: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075a93a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075a93c: jne 0x75a942 */ if (!fZ) goto L_0075a942;
L_0075a93e:; BB(0x0075a93e);
    /* 0075a93e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a93f: ret 4 */ FN_RET(0x0075a92c); r_esp += 8; return;
L_0075a942:; BB(0x0075a942);
    /* 0075a942: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075a943: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75a948u); f_005c2f74();
    /* 0075a948: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075a949: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075a94a: ret 4 */ FN_RET(0x0075a92c); r_esp += 8; return;
}

void f_0075a950(void) /* sub_75A950 */
{
    FN_ENTER(0x0075a950);
    /* 0075a950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a951: mov ebp, esp */ r_ebp = r_esp;
    /* 0075a953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a955: push 0x8f32bc */ { u32 v = 0x8f32bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a95a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075a960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a961: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075a968: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a96b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075a96e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0075a971: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0075a974: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075a977: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075a97a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a981: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075a984: mov ecx, dword ptr [eax + 0x68] */ r_ecx = R32((u32)(r_eax+0x68u));
    /* 0075a987: mov dword ptr [eax], 0xb42b08 */ W32((u32)(r_eax), 0xb42b08u);
    /* 0075a98d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075a98f: je 0x75a99b */ if (fZ) goto L_0075a99b;
L_0075a991:; BB(0x0075a991);
    /* 0075a991: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a993: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x75a998u); f_00728a10();
    /* 0075a998: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0075a99b:; BB(0x0075a99b);
    /* 0075a99b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0075a9a2: mov ecx, eax */ r_ecx = r_eax;
    /* 0075a9a4: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x75a9a9u); f_00710c28();
    /* 0075a9a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075a9ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075a9b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0075a9b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075a9b6: ret  */ FN_RET(0x0075a950); r_esp += 4; return;
}

void f_0075a9b8(void) /* sub_75A9B8 */
{
    FN_ENTER(0x0075a9b8);
    /* 0075a9b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9b9: mov ebp, esp */ r_ebp = r_esp;
    /* 0075a9bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9bd: push 0x8f32f2 */ { u32 v = 0x8f32f2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075a9c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075a9d0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075a9d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075a9d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0075a9d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0075a9dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0075a9df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0075a9e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075a9e5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0075a9e8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0075a9eb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9ed: push 0x9f56ac */ { u32 v = 0x9f56acu; r_esp -= 4; W32(r_esp, v); }
    /* 0075a9f2: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x75a9f7u); f_00710d30();
    /* 0075a9f7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075a9fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075aa01: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0075aa04: mov dword ptr [eax], 0xb42b08 */ W32((u32)(r_eax), 0xb42b08u);
    /* 0075aa0a: mov esi, dword ptr [0x9f56a8] */ r_esi = R32((u32)(0x9f56a8u));
    /* 0075aa10: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0075aa12: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 0075aa15: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0075aa17: mov byte ptr [eax + 0x60], dl */ W8((u32)(r_eax+0x60u), (u8)r_edx);
    /* 0075aa1a: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0075aa1d: mov byte ptr [eax + 0x61], dl */ W8((u32)(r_eax+0x61u), (u8)r_edx);
    /* 0075aa20: mov byte ptr [eax + 0x62], dl */ W8((u32)(r_eax+0x62u), (u8)r_edx);
    /* 0075aa23: mov dword ptr [eax + 0x64], edi */ W32((u32)(r_eax+0x64u), r_edi);
    /* 0075aa26: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x75aa2bu); f_008581c5();
    /* 0075aa2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075aa2c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0075aa2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075aa31: je 0x75aa83 */ if (fZ) goto L_0075aa83;
L_0075aa33:; BB(0x0075aa33);
    /* 0075aa33: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0075aa3a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0075aa41: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0075aa43: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75aa48u); f_0079317c();
    /* 0075aa48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075aa49: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075aa4c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075aa4f: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0075aa53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075aa54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075aa55: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x75aa5au); f_00761320();
    /* 0075aa5a: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075aa5d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0075aa64:; BB(0x0075aa64);
    /* 0075aa64: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0075aa67: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075aa6a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0075aa6d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0075aa70: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0075aa73: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075aa76: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075aa7d: mov esp, ebp */ r_esp = r_ebp;
    /* 0075aa7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075aa80: ret 8 */ FN_RET(0x0075a9b8); r_esp += 12; return;
L_0075aa83:; BB(0x0075aa83);
    /* 0075aa83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075aa85: jmp 0x75aa64 */ goto L_0075aa64;
}

void f_0075aa88(void) /* sub_75AA88 */
{
    FN_ENTER(0x0075aa88);
    /* 0075aa88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075aa89: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075aa8b: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0075aa8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075aa90: jne 0x75aa99 */ if (!fZ) goto L_0075aa99;
L_0075aa92:; BB(0x0075aa92);
    /* 0075aa92: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_0075aa99:; BB(0x0075aa99);
    /* 0075aa99: movzx eax, byte ptr [ebx + 0x60] */ r_eax = (u32)R8((u32)(r_ebx+0x60u));
    /* 0075aa9d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075aa9f: jne 0x75ab08 */ if (!fZ) goto L_0075ab08;
L_0075aaa1:; BB(0x0075aaa1);
    /* 0075aaa1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075aaa3: call 0x75ab34 */ r_esp -= 4; W32(r_esp, 0x75aaa8u); f_0075ab34();
    /* 0075aaa8: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75aaadu); f_00694c6c();
    /* 0075aaad: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0075aab3: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075aab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075aaba: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075aabd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aabf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aac1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aac3: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075aaca: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75aacfu); f_007c1160();
    /* 0075aacf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075aad1: je 0x75aada */ if (fZ) goto L_0075aada;
L_0075aad3:; BB(0x0075aad3);
    /* 0075aad3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075aad5: call 0x75ac74 */ r_esp -= 4; W32(r_esp, 0x75aadau); f_0075ac74();
L_0075aada:; BB(0x0075aada);
    /* 0075aada: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75aadfu); f_00694c6c();
    /* 0075aadf: mov edx, dword ptr [0xa0f678] */ r_edx = R32((u32)(0xa0f678u));
    /* 0075aae5: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075aae8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aaea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aaec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075aaee: or edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075aaf0: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075aaf7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075aaf8: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75aafdu); f_007c1160();
    /* 0075aafd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075aaff: je 0x75ab08 */ if (fZ) goto L_0075ab08;
L_0075ab01:; BB(0x0075ab01);
    /* 0075ab01: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075ab03: call 0x74943c */ r_esp -= 4; W32(r_esp, 0x75ab08u); f_0074943c();
L_0075ab08:; BB(0x0075ab08);
    /* 0075ab08: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 0075ab0b: fcomp dword ptr [0x97438c] */ fx_compare(ST(0), R_F32((u32)(0x97438cu))); FPOP();
    /* 0075ab11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0075ab13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0075ab14: jb 0x75ab1e */ if (fC) goto L_0075ab1e;
L_0075ab16:; BB(0x0075ab16);
    /* 0075ab16: mov ecx, dword ptr [ebx + 0x68] */ r_ecx = R32((u32)(r_ebx+0x68u));
    /* 0075ab19: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x75ab1eu); f_00761388();
L_0075ab1e:; BB(0x0075ab1e);
    /* 0075ab1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075ab20: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x75ab25u); f_00710db4();
    /* 0075ab25: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 0075ab28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab29: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075ab2b: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x75ab30u); f_0072a5ec();
    /* 0075ab30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ab31: ret  */ FN_RET(0x0075aa88); r_esp += 4; return;
}

void f_0075ab34(void) /* sub_75AB34 */
{
    FN_ENTER(0x0075ab34);
    /* 0075ab34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0075ab37: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75ab3cu); f_00694c6c();
    /* 0075ab3c: mov edx, dword ptr [0xa0f664] */ r_edx = R32((u32)(0xa0f664u));
    /* 0075ab42: or edx, dword ptr [0xa0f668] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ab48: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab4a: or edx, dword ptr [0xa0f670] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ab50: or edx, dword ptr [0xa0f66c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0075ab56: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab59: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075ab5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab5e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab60: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab62: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075ab69: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75ab6eu); f_007c09fc();
    /* 0075ab6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075ab70: jne 0x75ab74 */ if (!fZ) goto L_0075ab74;
L_0075ab72:; BB(0x0075ab72);
    /* 0075ab72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ab73: ret  */ FN_RET(0x0075ab34); r_esp += 4; return;
L_0075ab74:; BB(0x0075ab74);
    /* 0075ab74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab79: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab7e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75ab83u); f_00814298();
    /* 0075ab83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ab86: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75ab8bu); f_00694c6c();
    /* 0075ab8b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab8d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ab8f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075ab92: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab94: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ab9a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab9c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ab9e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075aba5: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75abaau); f_007c09fc();
    /* 0075abaa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075abac: je 0x75abb2 */ if (fZ) goto L_0075abb2;
L_0075abae:; BB(0x0075abae);
    /* 0075abae: add byte ptr [ebx + 0x62], 0xff */ { u32 ad = (u32)(r_ebx+0x62u);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075abb2:; BB(0x0075abb2);
    /* 0075abb2: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75abb7u); f_00694c6c();
    /* 0075abb7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075abb9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075abbb: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075abbe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abc0: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075abc6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abc8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abca: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075abd1: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75abd6u); f_007c09fc();
    /* 0075abd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075abd8: je 0x75abde */ if (fZ) goto L_0075abde;
L_0075abda:; BB(0x0075abda);
    /* 0075abda: add byte ptr [ebx + 0x62], 1 */ { u32 ad = (u32)(r_ebx+0x62u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075abde:; BB(0x0075abde);
    /* 0075abde: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75abe3u); f_00694c6c();
    /* 0075abe3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075abe5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075abe7: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075abea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abec: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075abf2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abf4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075abf6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075abfd: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75ac02u); f_007c09fc();
    /* 0075ac02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ac04: je 0x75ac0a */ if (fZ) goto L_0075ac0a;
L_0075ac06:; BB(0x0075ac06);
    /* 0075ac06: add byte ptr [ebx + 0x61], 1 */ { u32 ad = (u32)(r_ebx+0x61u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0075ac0a:; BB(0x0075ac0a);
    /* 0075ac0a: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x75ac0fu); f_00694c6c();
    /* 0075ac0f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac11: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac13: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0075ac16: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac18: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075ac1e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac22: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0075ac29: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x75ac2eu); f_007c09fc();
    /* 0075ac2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075ac30: jne 0x75ac38 */ if (!fZ) goto L_0075ac38;
L_0075ac32:; BB(0x0075ac32);
    /* 0075ac32: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 0075ac36: jmp 0x75ac3f */ goto L_0075ac3f;
L_0075ac38:; BB(0x0075ac38);
    /* 0075ac38: movsx eax, byte ptr [ebx + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x61u));
    /* 0075ac3c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0075ac3f:; BB(0x0075ac3f);
    /* 0075ac3f: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0075ac42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ac46: jg 0x75ac4a */ if ((!fZ&&fS==fO)) goto L_0075ac4a;
L_0075ac48:; BB(0x0075ac48);
    /* 0075ac48: mov edx, eax */ r_edx = r_eax;
L_0075ac4a:; BB(0x0075ac4a);
    /* 0075ac4a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ac4d: jl 0x75ac55 */ if ((fS!=fO)) goto L_0075ac55;
L_0075ac4f:; BB(0x0075ac4f);
    /* 0075ac4f: mov byte ptr [ebx + 0x61], 1 */ W8((u32)(r_ebx+0x61u), 0x1u);
    /* 0075ac53: jmp 0x75ac58 */ goto L_0075ac58;
L_0075ac55:; BB(0x0075ac55);
    /* 0075ac55: mov byte ptr [ebx + 0x61], dl */ W8((u32)(r_ebx+0x61u), (u8)r_edx);
L_0075ac58:; BB(0x0075ac58);
    /* 0075ac58: movsx edx, byte ptr [ebx + 0x62] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 0075ac5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ac60: jg 0x75ac64 */ if ((!fZ&&fS==fO)) goto L_0075ac64;
L_0075ac62:; BB(0x0075ac62);
    /* 0075ac62: mov edx, eax */ r_edx = r_eax;
L_0075ac64:; BB(0x0075ac64);
    /* 0075ac64: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0075ac67: jl 0x75ac6f */ if ((fS!=fO)) goto L_0075ac6f;
L_0075ac69:; BB(0x0075ac69);
    /* 0075ac69: mov byte ptr [ebx + 0x62], 1 */ W8((u32)(r_ebx+0x62u), 0x1u);
    /* 0075ac6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ac6e: ret  */ FN_RET(0x0075ab34); r_esp += 4; return;
L_0075ac6f:; BB(0x0075ac6f);
    /* 0075ac6f: mov byte ptr [ebx + 0x62], dl */ W8((u32)(r_ebx+0x62u), (u8)r_edx);
    /* 0075ac72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075ac73: ret  */ FN_RET(0x0075ab34); r_esp += 4; return;
}

void f_0075ac74(void) /* sub_75AC74 */
{
    FN_ENTER(0x0075ac74);
    /* 0075ac74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac75: mov edi, ecx */ r_edi = r_ecx;
    /* 0075ac77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac7c: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac81: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x75ac86u); f_00814298();
    /* 0075ac86: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075ac89: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075ac8b: movzx eax, byte ptr [edi + 0x60] */ r_eax = (u32)R8((u32)(r_edi+0x60u));
    /* 0075ac8f: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 0075ac92: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ac97: mov byte ptr [edi + 0x60], al */ W8((u32)(r_edi+0x60u), (u8)r_eax);
    /* 0075ac9a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x75ac9fu); f_00760acc();
    /* 0075ac9f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075aca0: ret  */ FN_RET(0x0075ac74); r_esp += 4; return;
}

void f_0075aca4(void) /* sub_75ACA4 */
{
    FN_ENTER(0x0075aca4);
    /* 0075aca4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075aca5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075aca6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075aca7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075aca8: mov edi, ecx */ r_edi = r_ecx;
    /* 0075acaa: mov ecx, edi */ r_ecx = r_edi;
    /* 0075acac: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x75acb1u); f_00712644();
    /* 0075acb1: mov ebp, eax */ r_ebp = r_eax;
    /* 0075acb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0075acb5: mov esi, eax */ r_esi = r_eax;
L_0075acb7:; BB(0x0075acb7);
    /* 0075acb7: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 0075acba: mov ebx, dword ptr [ebx + esi*4] */ r_ebx = R32((u32)(r_ebx+r_esi*4));
    /* 0075acbd: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 0075acc0: movsx edx, byte ptr [edx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 0075acc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075acc4: call 0x7147e8 */ r_esp -= 4; W32(r_esp, 0x75acc9u); f_007147e8();
    /* 0075acc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075acca: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0075accd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0075acd0: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075acd3: jl 0x75acb7 */ if ((fS!=fO)) goto L_0075acb7;
L_0075acd5:; BB(0x0075acd5);
    /* 0075acd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075acd6: mov ecx, edi */ r_ecx = r_edi;
    /* 0075acd8: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x75acddu); f_00710f80();
    /* 0075acdd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075acde: mov ecx, edi */ r_ecx = r_edi;
    /* 0075ace0: call 0x75ad00 */ r_esp -= 4; W32(r_esp, 0x75ace5u); f_0075ad00();
    /* 0075ace5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ace6: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 0075ace9: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x75aceeu); f_00761390();
    /* 0075acee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075acef: lea edx, [edi + 0x24] */ r_edx = (u32)(r_edi+0x24u);
    /* 0075acf2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075acf3: mov ecx, edi */ r_ecx = r_edi;
    /* 0075acf5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x75acfau); f_0072a648();
    /* 0075acfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075acfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075acfc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075acfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075acfe: ret  */ FN_RET(0x0075aca4); r_esp += 4; return;
}

void f_0075ad00(void) /* sub_75AD00 */
{
    FN_ENTER(0x0075ad00);
    /* 0075ad00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ad01: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075ad02: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075ad05: mov esi, ecx */ r_esi = r_ecx;
    /* 0075ad07: mov ebp, dword ptr [esp + 0x74] */ r_ebp = R32((u32)(r_esp+0x74u));
    /* 0075ad0b: mov ecx, esi */ r_ecx = r_esi;
    /* 0075ad0d: call 0x75afa8 */ r_esp -= 4; W32(r_esp, 0x75ad12u); f_0075afa8();
    /* 0075ad12: fld dword ptr [0x974388] */ FPUSH(R_F32((u32)(0x974388u)));
    /* 0075ad18: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 0075ad1b: mov edx, dword ptr [esi + eax*4] */ r_edx = R32((u32)(r_esi+r_eax*4));
    /* 0075ad1e: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0075ad21: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0075ad23: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0075ad26: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075ad28: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0075ad2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075ad2d: jl 0x75af9c */ if ((fS!=fO)) goto L_0075af9c;
L_0075ad33:; BB(0x0075ad33);
    /* 0075ad33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ad35: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0075ad39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075ad3c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075ad3f: jge 0x75ad7d */ if ((fS==fO)) goto L_0075ad7d;
L_0075ad41:; BB(0x0075ad41);
    /* 0075ad41: mov edx, eax */ r_edx = r_eax;
    /* 0075ad43: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0075ad46: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075ad48: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0075ad4c: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0075ad50: fmul dword ptr [0x974384] */ ST(0) = ST(0) * R_F32((u32)(0x974384u));
    /* 0075ad56: fnstcw word ptr [esp + 0x30] */ W16((u32)(r_esp+0x30u), fcw);
    /* 0075ad5a: movzx eax, word ptr [esp + 0x30] */ r_eax = (u32)R16((u32)(r_esp+0x30u));
    /* 0075ad5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075ad64: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0075ad68: fldcw word ptr [esp + 0x38] */ fcw = R16((u32)(r_esp+0x38u));
    /* 0075ad6c: fistp qword ptr [esp + 0x40] */ W64((u32)(r_esp+0x40u), (u64)fx_int64(ST(0))); FPOP();
    /* 0075ad70: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0075ad74: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0075ad78: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0075ad7b: jmp 0x75ad82 */ goto L_0075ad82;
L_0075ad7d:; BB(0x0075ad7d);
    /* 0075ad7d: mov esi, 0xff000000 */ r_esi = 0xff000000u;
L_0075ad82:; BB(0x0075ad82);
    /* 0075ad82: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0075ad87: fld dword ptr [0x974378] */ FPUSH(R_F32((u32)(0x974378u)));
    /* 0075ad8d: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0075ad90: fdivr dword ptr [0x97437c] */ ST(0) = R_F32((u32)(0x97437cu)) / ST(0);
    /* 0075ad96: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0075ad99: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0075ad9c: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0075ad9f: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0075ada3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ada5: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0075ada9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075adab: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0075adaf: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0075adb3: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0075adb9: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075adbc: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0075adc0: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 0075adc4: fmul dword ptr [0x974380] */ ST(0) = ST(0) * R_F32((u32)(0x974380u));
    /* 0075adca: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075adcf: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 0075add3: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x75add8u); f_0082bb30();
    /* 0075add8: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0075adde: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x75ade3u); f_00829cc8();
    /* 0075ade3: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0075ade8: mov edx, esi */ r_edx = r_esi;
    /* 0075adea: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x75adefu); f_0082bb60();
    /* 0075adef: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075adf3: fld dword ptr [0x974374] */ FPUSH(R_F32((u32)(0x974374u)));
    /* 0075adf9: fld dword ptr [0x974374] */ FPUSH(R_F32((u32)(0x974374u)));
    /* 0075adff: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075ae03: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 0075ae07: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 0075ae0b: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0075ae0f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075ae11: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 0075ae15: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0075ae19: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0075ae1d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075ae1f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075ae21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ae23: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075ae27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075ae29: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0075ae2d: mov dword ptr [esp + 0x18], 0x3f5f0000 */ W32((u32)(r_esp+0x18u), 0x3f5f0000u);
    /* 0075ae35: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0075ae3d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0075ae41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075ae43: mov dword ptr [esp + 0x20], 0x3f6b0000 */ W32((u32)(r_esp+0x20u), 0x3f6b0000u);
    /* 0075ae4b: mov dword ptr [esp + 0x24], 0x3d400000 */ W32((u32)(r_esp+0x24u), 0x3d400000u);
    /* 0075ae53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075ae54: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75ae59u); f_0071bbb4();
    /* 0075ae59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075ae5a: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075ae5e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075ae61: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0075ae65: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75ae6au); f_0082b440();
    /* 0075ae6a: fld dword ptr [0x974360] */ FPUSH(R_F32((u32)(0x974360u)));
    /* 0075ae70: fsub dword ptr [esp + 0x64] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x64u));
    /* 0075ae74: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 0075ae78: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075ae7c: fld dword ptr [0x974374] */ FPUSH(R_F32((u32)(0x974374u)));
    /* 0075ae82: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075ae84: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0075ae88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ae8a: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0075ae8e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075ae90: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075ae92: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075ae96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075ae98: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0075ae9c: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0075aea0: mov dword ptr [esp + 0x18], 0x3f6b0000 */ W32((u32)(r_esp+0x18u), 0x3f6b0000u);
    /* 0075aea8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075aeaa: mov dword ptr [esp + 0x20], 0x3f770000 */ W32((u32)(r_esp+0x20u), 0x3f770000u);
    /* 0075aeb2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075aeb3: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75aeb8u); f_0071bbb4();
    /* 0075aeb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075aeb9: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075aebd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075aec0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0075aec4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75aec9u); f_0082b440();
    /* 0075aec9: fld dword ptr [0x974360] */ FPUSH(R_F32((u32)(0x974360u)));
    /* 0075aecf: fsub dword ptr [esp + 0x64] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x64u));
    /* 0075aed3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0075aed7: fld dword ptr [0x974374] */ FPUSH(R_F32((u32)(0x974374u)));
    /* 0075aedd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075aedf: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075aee1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075aee3: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 0075aee7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075aee9: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0075aeed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075aeef: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0075aef3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075aef5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0075aef7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075aef9: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075aefd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075aeff: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0075af03: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0075af07: mov dword ptr [esp + 0x1c], 0x3d400000 */ W32((u32)(r_esp+0x1cu), 0x3d400000u);
    /* 0075af0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075af11: mov dword ptr [esp + 0x24], 0x3dc00000 */ W32((u32)(r_esp+0x24u), 0x3dc00000u);
    /* 0075af19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075af1a: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75af1fu); f_0071bbb4();
    /* 0075af1f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075af20: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075af24: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075af27: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0075af2b: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75af30u); f_0082b440();
    /* 0075af30: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0075af34: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075af38: fsubr dword ptr [0x974360] */ ST(0) = R_F32((u32)(0x974360u)) - ST(0);
    /* 0075af3e: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 0075af42: fld dword ptr [0x974374] */ FPUSH(R_F32((u32)(0x974374u)));
    /* 0075af48: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075af4a: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0075af4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075af50: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0075af54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075af56: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075af58: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0075af5c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075af5e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0075af62: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0075af66: mov dword ptr [esp + 0x18], 0x3f5f0000 */ W32((u32)(r_esp+0x18u), 0x3f5f0000u);
    /* 0075af6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0075af70: mov dword ptr [esp + 0x20], 0x3f6b0000 */ W32((u32)(r_esp+0x20u), 0x3f6b0000u);
    /* 0075af78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075af79: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75af7eu); f_0071bbb4();
    /* 0075af7e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075af7f: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0075af83: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075af86: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0075af8a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75af8fu); f_0082b440();
    /* 0075af8f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75af94u); f_004ac444();
    /* 0075af94: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075af97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075af98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075af99: ret 4 */ FN_RET(0x0075ad00); r_esp += 8; return;
L_0075af9c:; BB(0x0075af9c);
    /* 0075af9c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0075af9e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0075afa0: add esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075afa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0075afa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075afa5: ret 4 */ FN_RET(0x0075ad00); r_esp += 8; return;
}

void f_0075afa8(void) /* sub_75AFA8 */
{
    FN_ENTER(0x0075afa8);
    /* 0075afa8: movsx eax, byte ptr [ecx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x62u));
    /* 0075afac: movsx edx, byte ptr [ecx + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x61u));
    /* 0075afb0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075afb2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075afb4: ret  */ FN_RET(0x0075afa8); r_esp += 4; return;
}

void f_0075afb8(void) /* sub_75AFB8 */
{
    FN_ENTER(0x0075afb8);
    /* 0075afb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075afb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0075afba: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075afbd: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 0075afc1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0075afc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075afc6: jl 0x75b232 */ if ((fS!=fO)) goto L_0075b232;
L_0075afcc:; BB(0x0075afcc);
    /* 0075afcc: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0075afcf: jge 0x75b00d */ if ((fS==fO)) goto L_0075b00d;
L_0075afd1:; BB(0x0075afd1);
    /* 0075afd1: mov edx, eax */ r_edx = r_eax;
    /* 0075afd3: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0075afd6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0075afd8: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0075afdc: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0075afe0: fmul dword ptr [0x974354] */ ST(0) = ST(0) * R_F32((u32)(0x974354u));
    /* 0075afe6: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 0075afea: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 0075afef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075aff4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0075aff8: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 0075affc: fistp qword ptr [esp + 0x38] */ W64((u32)(r_esp+0x38u), (u64)fx_int64(ST(0))); FPOP();
    /* 0075b000: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0075b004: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0075b008: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0075b00b: jmp 0x75b012 */ goto L_0075b012;
L_0075b00d:; BB(0x0075b00d);
    /* 0075b00d: mov ebx, 0xff000000 */ r_ebx = 0xff000000u;
L_0075b012:; BB(0x0075b012);
    /* 0075b012: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0075b017: fld dword ptr [0x974350] */ FPUSH(R_F32((u32)(0x974350u)));
    /* 0075b01d: fadd dword ptr [esp + 0x78] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x78u));
    /* 0075b021: fld dword ptr [0x974348] */ FPUSH(R_F32((u32)(0x974348u)));
    /* 0075b027: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 0075b02a: fdivr dword ptr [0x97434c] */ ST(0) = R_F32((u32)(0x97434cu)) / ST(0);
    /* 0075b030: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0075b033: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0075b036: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075b038: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0075b03c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b03e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0075b042: or ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0075b048: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075b04b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0075b050: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0075b054: fild dword ptr [esp + 0x40] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x40u)));
    /* 0075b058: fmul dword ptr [esp + 0x7c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x7cu));
    /* 0075b05c: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0075b060: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b062: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0075b064: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b066: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0075b069: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b06b: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0075b06f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b071: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0075b075: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0075b079: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x75b07eu); f_0082bb30();
    /* 0075b07e: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0075b084: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x75b089u); f_00829cc8();
    /* 0075b089: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0075b08e: mov edx, ebx */ r_edx = r_ebx;
    /* 0075b090: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x75b095u); f_0082bb60();
    /* 0075b095: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0075b099: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b09f: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b0a5: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0075b0a9: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0075b0ad: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 0075b0b1: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0075b0b4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075b0b6: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0075b0ba: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0075b0be: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0075b0c2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075b0c4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075b0c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b0c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0075b0cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b0ce: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0075b0d2: mov dword ptr [esp + 0x10], 0x3f5f0000 */ W32((u32)(r_esp+0x10u), 0x3f5f0000u);
    /* 0075b0da: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0075b0e2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075b0e5: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b0e7: mov dword ptr [esp + 0x18], 0x3f6b0000 */ W32((u32)(r_esp+0x18u), 0x3f6b0000u);
    /* 0075b0ef: mov dword ptr [esp + 0x1c], 0x3d400000 */ W32((u32)(r_esp+0x1cu), 0x3d400000u);
    /* 0075b0f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b0f8: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b0fdu); f_0071bbb4();
    /* 0075b0fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b0fe: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b102: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b105: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075b109: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b10eu); f_0082b440();
    /* 0075b10e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0075b112: fsub dword ptr [esp + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x50u));
    /* 0075b116: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b11a: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0075b11e: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b124: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075b126: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0075b12a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b12c: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0075b130: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b132: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075b134: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b136: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 0075b13a: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0075b13d: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b143: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0075b145: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0075b147: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b149: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0075b14d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b14f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0075b153: mov dword ptr [esp + 0x10], 0x3f6b0000 */ W32((u32)(r_esp+0x10u), 0x3f6b0000u);
    /* 0075b15b: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b15d: mov dword ptr [esp + 0x18], 0x3f770000 */ W32((u32)(r_esp+0x18u), 0x3f770000u);
    /* 0075b165: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075b168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b169: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b16eu); f_0071bbb4();
    /* 0075b16e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b16f: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b173: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b176: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075b17a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b17fu); f_0082b440();
    /* 0075b17f: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b183: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0075b187: fadd dword ptr [esp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x48u));
    /* 0075b18b: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b191: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b193: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0075b196: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b198: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 0075b19c: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0075b1a0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b1a2: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075b1a4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0075b1a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b1aa: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0075b1ae: mov dword ptr [esp + 0x14], 0x3d400000 */ W32((u32)(r_esp+0x14u), 0x3d400000u);
    /* 0075b1b6: mov dword ptr [esp + 0x1c], 0x3dc00000 */ W32((u32)(r_esp+0x1cu), 0x3dc00000u);
    /* 0075b1be: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075b1c1: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b1c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b1c4: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b1c9u); f_0071bbb4();
    /* 0075b1c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b1ca: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b1ce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b1d1: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075b1d5: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b1dau); f_0082b440();
    /* 0075b1da: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0075b1de: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0075b1e2: fld dword ptr [0x974344] */ FPUSH(R_F32((u32)(0x974344u)));
    /* 0075b1e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0075b1ea: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0075b1ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b1ef: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0075b1f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075b1f5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0075b1f7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0075b1fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0075b1fd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0075b201: mov dword ptr [esp + 0x10], 0x3f5f0000 */ W32((u32)(r_esp+0x10u), 0x3f5f0000u);
    /* 0075b209: mov ecx, edi */ r_ecx = r_edi;
    /* 0075b20b: mov dword ptr [esp + 0x18], 0x3f6b0000 */ W32((u32)(r_esp+0x18u), 0x3f6b0000u);
    /* 0075b213: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075b216: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075b217: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x75b21cu); f_0071bbb4();
    /* 0075b21c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075b21d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0075b221: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075b224: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0075b228: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x75b22du); f_0082b440();
    /* 0075b22d: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x75b232u); f_004ac444();
L_0075b232:; BB(0x0075b232);
    /* 0075b232: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075b235: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075b236: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075b237: ret  */ FN_RET(0x0075afb8); r_esp += 4; return;
}

