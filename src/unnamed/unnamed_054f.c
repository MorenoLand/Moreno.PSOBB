#include "protos.h"

void f_0054f228(void) /* sub_54F228 */
{
    FN_ENTER(0x0054f228);
    /* 0054f228: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f229: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f22a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f22b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054f22e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054f230: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0054f236: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054f239: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054f23c: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054f23f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f242: and eax, 0xf9fbffff */ {  u32 a = r_eax; u32 b = 0xf9fbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f247: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054f24a: movzx eax, word ptr [ebx + 0x340] */ r_eax = (u32)R16((u32)(r_ebx+0x340u));
    /* 0054f251: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f256: jl 0x54f287 */ if ((fS!=fO)) goto L_0054f287;
L_0054f258:; BB(0x0054f258);
    /* 0054f258: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f25d: jge 0x54f270 */ if ((fS==fO)) goto L_0054f270;
L_0054f25f:; BB(0x0054f25f);
    /* 0054f25f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f260: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x54f265u); f_00786b3c();
    /* 0054f265: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054f266: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f267: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f269: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54f26eu); f_007706b0();
    /* 0054f26e: jmp 0x54f2b3 */ goto L_0054f2b3;
L_0054f270:; BB(0x0054f270);
    /* 0054f270: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0054f275: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f277: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 0054f27e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f280: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54f285u); f_007706b0();
    /* 0054f285: jmp 0x54f2b3 */ goto L_0054f2b3;
L_0054f287:; BB(0x0054f287);
    /* 0054f287: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f288: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x54f28du); f_0068d5a8();
    /* 0054f28d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054f28e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f290: je 0x54f2aa */ if (fZ) goto L_0054f2aa;
L_0054f292:; BB(0x0054f292);
    /* 0054f292: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0054f298: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f29e: jne 0x54f2aa */ if (!fZ) goto L_0054f2aa;
L_0054f2a0:; BB(0x0054f2a0);
    /* 0054f2a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f2a3: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54f2a8u); f_007706b0();
    /* 0054f2a8: jmp 0x54f2b3 */ goto L_0054f2b3;
L_0054f2aa:; BB(0x0054f2aa);
    /* 0054f2aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f2ae: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x54f2b3u); f_007706b0();
L_0054f2b3:; BB(0x0054f2b3);
    /* 0054f2b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f2b5: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54f2bau); f_00770738();
    /* 0054f2ba: mov edi, eax */ r_edi = r_eax;
    /* 0054f2bc: movsx edx, word ptr [ebx + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x330u));
    /* 0054f2c3: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0054f2c6: ja 0x54f865 */ if ((!fC&&!fZ)) goto L_0054f865;
L_0054f2cc:; BB(0x0054f2cc);
    /* 0054f2cc: mov edx, dword ptr [edx*4 + 0x9244b8] */ r_edx = R32((u32)(r_edx*4+0x9244b8u));
    /* 0054f2d3: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0054f865:; BB(0x0054f865);
    /* 0054f865: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f228); r_esp += 4; return;
}

void f_0054f2d5(void)
{
    FN_ENTER(0x0054f2d5);
    /* 0054f2d5: movsx edx, word ptr [ebx + 0x342] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x342u));
    /* 0054f2dc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054f2df: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 0054f2e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0054f2e4: jl 0x54f8b1 */ if ((fS!=fO)) goto L_0054f8b1;
L_0054f2ea:; BB(0x0054f2ea);
    /* 0054f2ea: mov word ptr [ebx + 0x342], dx */ W16((u32)(r_ebx+0x342u), (u16)r_edx);
    /* 0054f2f1: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f2f4: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f2d5); r_esp += 4; return;
L_0054f8b1:; BB(0x0054f8b1);
    /* 0054f8b1: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f8b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f8b6: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0054f8bd: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f8c2: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054f8c5: mov word ptr [ebx + 0x342], dx */ W16((u32)(r_ebx+0x342u), (u16)r_edx);
    /* 0054f8cc: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f8cf: jmp 0x54f868 */ goto L_0054f868;
}

void f_0054f2f9(void)
{
    FN_ENTER(0x0054f2f9);
    /* 0054f2f9: push 0x42580000 */ { u32 v = 0x42580000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f2fe: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f303: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f30a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f30c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f311u); f_007aaa30();
    /* 0054f311: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f313: je 0x54f3ac */ if (fZ) goto L_0054f3ac;
L_0054f319:; BB(0x0054f319);
    /* 0054f319: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0054f31f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f322: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054f324: je 0x54f333 */ if (fZ) goto L_0054f333;
L_0054f326:; BB(0x0054f326);
    /* 0054f326: add edi, dword ptr [0xaae164] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054f32c: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 0054f331: jmp 0x54f338 */ goto L_0054f338;
L_0054f333:; BB(0x0054f333);
    /* 0054f333: mov eax, 0x1000 */ r_eax = 0x1000u;
L_0054f338:; BB(0x0054f338);
    /* 0054f338: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f33a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054f33c: jle 0x54f3ac */ if ((fZ||fS!=fO)) goto L_0054f3ac;
L_0054f33e:; BB(0x0054f33e);
    /* 0054f33e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0054f342: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0054f346:; BB(0x0054f346);
    /* 0054f346: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0054f34d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f34e: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x54f353u); f_006ea71c();
    /* 0054f353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054f354: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f356: je 0x54f3a1 */ if (fZ) goto L_0054f3a1;
L_0054f358:; BB(0x0054f358);
    /* 0054f358: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f35a: je 0x54f3a1 */ if (fZ) goto L_0054f3a1;
L_0054f35c:; BB(0x0054f35c);
    /* 0054f35c: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0054f360: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0054f364: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f366: jle 0x54f3a1 */ if ((fZ||fS!=fO)) goto L_0054f3a1;
L_0054f368:; BB(0x0054f368);
    /* 0054f368: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054f36b: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f370: jne 0x54f3a1 */ if (!fZ) goto L_0054f3a1;
L_0054f372:; BB(0x0054f372);
    /* 0054f372: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f377: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f378: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f37a: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f37c: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x54f37fu); call_ind(t); }
    /* 0054f37f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f381: je 0x54f3a1 */ if (fZ) goto L_0054f3a1;
L_0054f383:; BB(0x0054f383);
    /* 0054f383: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f388: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f389: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f38b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f38d: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x54f390u); call_ind(t); }
    /* 0054f390: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f392: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f395: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054f399: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f39b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0054f39e: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x54f3a1u); call_ind(t); }
L_0054f3a1:; BB(0x0054f3a1);
    /* 0054f3a1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f3a4: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f3a6: jl 0x54f346 */ if ((fS!=fO)) goto L_0054f346;
L_0054f3a8:; BB(0x0054f3a8);
    /* 0054f3a8: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0054f3ac:; BB(0x0054f3ac);
    /* 0054f3ac: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054f3b2: fcom dword ptr [0x9245f8] */ fx_compare(ST(0), R_F32((u32)(0x9245f8u))); 
    /* 0054f3b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f3ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f3bb: jb 0x54f3ce */ if (fC) goto L_0054f3ce;
L_0054f3bd:; BB(0x0054f3bd);
    /* 0054f3bd: fcomp dword ptr [0x9245f4] */ fx_compare(ST(0), R_F32((u32)(0x9245f4u))); FPOP();
    /* 0054f3c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f3c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f3c6: jbe 0x54f8d1 */ if ((fC||fZ)) goto L_0054f8d1;
L_0054f3cc:; BB(0x0054f3cc);
    /* 0054f3cc: jmp 0x54f3d0 */ goto L_0054f3d0;
L_0054f3ce:; BB(0x0054f3ce);
    /* 0054f3ce: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054f3d0:; BB(0x0054f3d0);
    /* 0054f3d0: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 0054f3d6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f3d9: je 0x54f421 */ if (fZ) goto L_0054f421;
L_0054f3db:; BB(0x0054f3db);
    /* 0054f3db: mov ebp, dword ptr [0xa73978] */ r_ebp = R32((u32)(0xa73978u));
    /* 0054f3e1: mov edx, 7 */ r_edx = 0x7u;
    /* 0054f3e6: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0054f3ed: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 0054f3f0: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0054f3f4: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0054f3f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054f3fe: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0054f402: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0054f406: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0054f40a: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0054f40e: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f411: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0054f415: mov word ptr [ebx + 0x342], ax */ W16((u32)(r_ebx+0x342u), (u16)r_eax);
    /* 0054f41c: jmp 0x54f868 */ goto L_0054f868;
L_0054f421:; BB(0x0054f421);
    /* 0054f421: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f424: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f2f9); r_esp += 4; return;
L_0054f8d1:; BB(0x0054f8d1);
    /* 0054f8d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f8d3: call 0x551510 */ r_esp -= 4; W32(r_esp, 0x54f8d8u); f_00551510();
    /* 0054f8d8: jmp 0x54f3d0 */ goto L_0054f3d0;
}

void f_0054f429(void)
{
    FN_ENTER(0x0054f429);
    /* 0054f429: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0054f42b: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f430: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f437: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f439: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x54f43cu); call_ind(t); }
    /* 0054f43c: push 0x42500000 */ { u32 v = 0x42500000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f441: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f443: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f448u); f_007aaa30();
    /* 0054f448: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f44a: jne 0x54f454 */ if (!fZ) goto L_0054f454;
L_0054f44c:; BB(0x0054f44c);
    /* 0054f44c: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f44f: jmp 0x54f868 */ goto L_0054f868;
L_0054f454:; BB(0x0054f454);
    /* 0054f454: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f459: mov eax, 6 */ r_eax = 0x6u;
    /* 0054f45e: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f465: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f467: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54f46cu); f_007879b8();
    /* 0054f46c: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f46f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f471: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f472: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f473: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f475: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54f47au); f_00814298();
    /* 0054f47a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f47d: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f429); r_esp += 4; return;
}

void f_0054f482(void)
{
    FN_ENTER(0x0054f482);
    /* 0054f482: push 0x42140000 */ { u32 v = 0x42140000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f487: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f48c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f493: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f495: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f49au); f_007aaa30();
    /* 0054f49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f49c: je 0x54f535 */ if (fZ) goto L_0054f535;
L_0054f4a2:; BB(0x0054f4a2);
    /* 0054f4a2: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0054f4a8: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f4ab: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054f4ad: je 0x54f4bc */ if (fZ) goto L_0054f4bc;
L_0054f4af:; BB(0x0054f4af);
    /* 0054f4af: add edi, dword ptr [0xaae164] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054f4b5: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 0054f4ba: jmp 0x54f4c1 */ goto L_0054f4c1;
L_0054f4bc:; BB(0x0054f4bc);
    /* 0054f4bc: mov eax, 0x1000 */ r_eax = 0x1000u;
L_0054f4c1:; BB(0x0054f4c1);
    /* 0054f4c1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f4c3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054f4c5: jle 0x54f535 */ if ((fZ||fS!=fO)) goto L_0054f535;
L_0054f4c7:; BB(0x0054f4c7);
    /* 0054f4c7: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0054f4cb: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0054f4cf:; BB(0x0054f4cf);
    /* 0054f4cf: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0054f4d6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f4d7: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x54f4dcu); f_006ea71c();
    /* 0054f4dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054f4dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f4df: je 0x54f52a */ if (fZ) goto L_0054f52a;
L_0054f4e1:; BB(0x0054f4e1);
    /* 0054f4e1: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f4e3: je 0x54f52a */ if (fZ) goto L_0054f52a;
L_0054f4e5:; BB(0x0054f4e5);
    /* 0054f4e5: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0054f4e9: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0054f4ed: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f4ef: jle 0x54f52a */ if ((fZ||fS!=fO)) goto L_0054f52a;
L_0054f4f1:; BB(0x0054f4f1);
    /* 0054f4f1: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054f4f4: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f4f9: jne 0x54f52a */ if (!fZ) goto L_0054f52a;
L_0054f4fb:; BB(0x0054f4fb);
    /* 0054f4fb: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f500: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f501: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f503: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f505: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x54f508u); call_ind(t); }
    /* 0054f508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f50a: je 0x54f52a */ if (fZ) goto L_0054f52a;
L_0054f50c:; BB(0x0054f50c);
    /* 0054f50c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f511: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f512: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f514: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f516: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x54f519u); call_ind(t); }
    /* 0054f519: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f51b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f51e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054f522: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f524: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0054f527: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x54f52au); call_ind(t); }
L_0054f52a:; BB(0x0054f52a);
    /* 0054f52a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f52d: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f52f: jl 0x54f4cf */ if ((fS!=fO)) goto L_0054f4cf;
L_0054f531:; BB(0x0054f531);
    /* 0054f531: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0054f535:; BB(0x0054f535);
    /* 0054f535: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054f53b: fcom dword ptr [0x9245f0] */ fx_compare(ST(0), R_F32((u32)(0x9245f0u))); 
    /* 0054f541: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f543: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f544: jb 0x54f557 */ if (fC) goto L_0054f557;
L_0054f546:; BB(0x0054f546);
    /* 0054f546: fcomp dword ptr [0x9245ec] */ fx_compare(ST(0), R_F32((u32)(0x9245ecu))); FPOP();
    /* 0054f54c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f54e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f54f: jbe 0x54f8dd */ if ((fC||fZ)) goto L_0054f8dd;
L_0054f555:; BB(0x0054f555);
    /* 0054f555: jmp 0x54f559 */ goto L_0054f559;
L_0054f557:; BB(0x0054f557);
    /* 0054f557: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054f559:; BB(0x0054f559);
    /* 0054f559: push 0x42280000 */ { u32 v = 0x42280000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f55e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f560: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f565u); f_007aaa30();
    /* 0054f565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f567: je 0x54f57d */ if (fZ) goto L_0054f57d;
L_0054f569:; BB(0x0054f569);
    /* 0054f569: mov eax, 5 */ r_eax = 0x5u;
    /* 0054f56e: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f575: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f578: jmp 0x54f868 */ goto L_0054f868;
L_0054f57d:; BB(0x0054f57d);
    /* 0054f57d: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f580: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f482); r_esp += 4; return;
L_0054f8dd:; BB(0x0054f8dd);
    /* 0054f8dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f8df: call 0x551510 */ r_esp -= 4; W32(r_esp, 0x54f8e4u); f_00551510();
    /* 0054f8e4: jmp 0x54f559 */ goto L_0054f559;
}

void f_0054f585(void)
{
    FN_ENTER(0x0054f585);
    /* 0054f585: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0054f587: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f58c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f593: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f595: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x54f598u); call_ind(t); }
    /* 0054f598: push 0x42000000 */ { u32 v = 0x42000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f59d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f59f: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f5a4u); f_007aaa30();
    /* 0054f5a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f5a6: jne 0x54f5b0 */ if (!fZ) goto L_0054f5b0;
L_0054f5a8:; BB(0x0054f5a8);
    /* 0054f5a8: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f5ab: jmp 0x54f868 */ goto L_0054f868;
L_0054f5b0:; BB(0x0054f5b0);
    /* 0054f5b0: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5b5: mov eax, 4 */ r_eax = 0x4u;
    /* 0054f5ba: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f5c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f5c3: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54f5c8u); f_007879b8();
    /* 0054f5c8: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f5cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f5cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5d1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54f5d6u); f_00814298();
    /* 0054f5d6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f5d9: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f585); r_esp += 4; return;
}

void f_0054f5de(void)
{
    FN_ENTER(0x0054f5de);
    /* 0054f5de: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f5e3: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f5e8: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f5ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f5f1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f5f6u); f_007aaa30();
    /* 0054f5f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f5f8: je 0x54f691 */ if (fZ) goto L_0054f691;
L_0054f5fe:; BB(0x0054f5fe);
    /* 0054f5fe: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 0054f604: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f607: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054f609: je 0x54f618 */ if (fZ) goto L_0054f618;
L_0054f60b:; BB(0x0054f60b);
    /* 0054f60b: add edi, dword ptr [0xaae164] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054f611: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 0054f616: jmp 0x54f61d */ goto L_0054f61d;
L_0054f618:; BB(0x0054f618);
    /* 0054f618: mov eax, 0x1000 */ r_eax = 0x1000u;
L_0054f61d:; BB(0x0054f61d);
    /* 0054f61d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f61f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054f621: jle 0x54f691 */ if ((fZ||fS!=fO)) goto L_0054f691;
L_0054f623:; BB(0x0054f623);
    /* 0054f623: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0054f627: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_0054f62b:; BB(0x0054f62b);
    /* 0054f62b: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 0054f632: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f633: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x54f638u); f_006ea71c();
    /* 0054f638: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054f639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f63b: je 0x54f686 */ if (fZ) goto L_0054f686;
L_0054f63d:; BB(0x0054f63d);
    /* 0054f63d: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f63f: je 0x54f686 */ if (fZ) goto L_0054f686;
L_0054f641:; BB(0x0054f641);
    /* 0054f641: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0054f645: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 0054f649: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f64b: jle 0x54f686 */ if ((fZ||fS!=fO)) goto L_0054f686;
L_0054f64d:; BB(0x0054f64d);
    /* 0054f64d: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054f650: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f655: jne 0x54f686 */ if (!fZ) goto L_0054f686;
L_0054f657:; BB(0x0054f657);
    /* 0054f657: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f65c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f65d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f65f: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f661: call dword ptr [eax + 0x50] */ { u32 t = R32((u32)(r_eax+0x50u)); r_esp -= 4; W32(r_esp, 0x54f664u); call_ind(t); }
    /* 0054f664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f666: je 0x54f686 */ if (fZ) goto L_0054f686;
L_0054f668:; BB(0x0054f668);
    /* 0054f668: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f66d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f66e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f670: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f672: call dword ptr [eax + 0x5c] */ { u32 t = R32((u32)(r_eax+0x5cu)); r_esp -= 4; W32(r_esp, 0x54f675u); call_ind(t); }
    /* 0054f675: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054f677: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f67a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054f67e: mov ecx, esi */ r_ecx = r_esi;
    /* 0054f680: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0054f683: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x54f686u); call_ind(t); }
L_0054f686:; BB(0x0054f686);
    /* 0054f686: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0054f689: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f68b: jl 0x54f62b */ if ((fS!=fO)) goto L_0054f62b;
L_0054f68d:; BB(0x0054f68d);
    /* 0054f68d: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0054f691:; BB(0x0054f691);
    /* 0054f691: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0054f697: fcom dword ptr [0x9245e8] */ fx_compare(ST(0), R_F32((u32)(0x9245e8u))); 
    /* 0054f69d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f69f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f6a0: jb 0x54f6b3 */ if (fC) goto L_0054f6b3;
L_0054f6a2:; BB(0x0054f6a2);
    /* 0054f6a2: fcomp dword ptr [0x9245e4] */ fx_compare(ST(0), R_F32((u32)(0x9245e4u))); FPOP();
    /* 0054f6a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f6aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f6ab: jbe 0x54f8e9 */ if ((fC||fZ)) goto L_0054f8e9;
L_0054f6b1:; BB(0x0054f6b1);
    /* 0054f6b1: jmp 0x54f6b5 */ goto L_0054f6b5;
L_0054f6b3:; BB(0x0054f6b3);
    /* 0054f6b3: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0054f6b5:; BB(0x0054f6b5);
    /* 0054f6b5: push 0x41a80000 */ { u32 v = 0x41a80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f6bc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f6c1u); f_007aaa30();
    /* 0054f6c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f6c3: je 0x54f6d9 */ if (fZ) goto L_0054f6d9;
L_0054f6c5:; BB(0x0054f6c5);
    /* 0054f6c5: mov eax, 3 */ r_eax = 0x3u;
    /* 0054f6ca: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f6d1: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f6d4: jmp 0x54f868 */ goto L_0054f868;
L_0054f6d9:; BB(0x0054f6d9);
    /* 0054f6d9: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f6dc: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f5de); r_esp += 4; return;
L_0054f8e9:; BB(0x0054f8e9);
    /* 0054f8e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f8eb: call 0x551510 */ r_esp -= 4; W32(r_esp, 0x54f8f0u); f_00551510();
    /* 0054f8f0: jmp 0x54f6b5 */ goto L_0054f6b5;
}

void f_0054f6e1(void)
{
    FN_ENTER(0x0054f6e1);
    /* 0054f6e1: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f6e6: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f6eb: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0054f6f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f6f4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54f6f9u); f_007aaa30();
    /* 0054f6f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f6fb: jne 0x54f705 */ if (!fZ) goto L_0054f705;
L_0054f6fd:; BB(0x0054f6fd);
    /* 0054f6fd: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f700: jmp 0x54f868 */ goto L_0054f868;
L_0054f705:; BB(0x0054f705);
    /* 0054f705: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f70a: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f70f: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 0054f716: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f718: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54f71du); f_007879b8();
    /* 0054f71d: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f720: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f722: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f723: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f725: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f726: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54f72bu); f_00814298();
    /* 0054f72b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f72e: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f6e1); r_esp += 4; return;
}

void f_0054f733(void)
{
    FN_ENTER(0x0054f733);
    /* 0054f733: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f735: jne 0x54f75a */ if (!fZ) goto L_0054f75a;
L_0054f737:; BB(0x0054f737);
    /* 0054f737: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0054f73a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f73c: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0054f743: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f748: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0054f74b: mov word ptr [ebx + 0x342], dx */ W16((u32)(r_ebx+0x342u), (u16)r_edx);
    /* 0054f752: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f755: jmp 0x54f868 */ goto L_0054f868;
L_0054f75a:; BB(0x0054f75a);
    /* 0054f75a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0054f75d: mov ebp, dword ptr [edi + 0x300] */ r_ebp = R32((u32)(r_edi+0x300u));
    /* 0054f763: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0054f769: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0054f76c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054f770: mov edx, dword ptr [edi + 0x308] */ r_edx = R32((u32)(r_edi+0x308u));
    /* 0054f776: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0054f77a: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0054f780: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54f785u); f_0082f9c4();
    /* 0054f785: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0054f788: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f789: mov ebp, dword ptr [ebx + 0x358] */ r_ebp = R32((u32)(r_ebx+0x358u));
    /* 0054f78f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f791: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f794: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x54f799u); f_00771858();
    /* 0054f799: mov ebp, eax */ r_ebp = r_eax;
    /* 0054f79b: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0054f79e: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f7a4: jne 0x54f7b1 */ if (!fZ) goto L_0054f7b1;
L_0054f7a6:; BB(0x0054f7a6);
    /* 0054f7a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f7ac: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54f7b1u); f_00772b44();
L_0054f7b1:; BB(0x0054f7b1);
    /* 0054f7b1: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054f7b4: jl 0x54f7be */ if ((fS!=fO)) goto L_0054f7be;
L_0054f7b6:; BB(0x0054f7b6);
    /* 0054f7b6: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f7b9: jmp 0x54f868 */ goto L_0054f868;
L_0054f7be:; BB(0x0054f7be);
    /* 0054f7be: mov edx, 1 */ r_edx = 0x1u;
    /* 0054f7c3: mov word ptr [ebx + 0x330], dx */ W16((u32)(r_ebx+0x330u), (u16)r_edx);
    /* 0054f7ca: mov edx, dword ptr [0xa73978] */ r_edx = R32((u32)(0xa73978u));
    /* 0054f7d0: mov ebp, 2 */ r_ebp = 0x2u;
    /* 0054f7d5: mov word ptr [ebx + 0xb8], bp */ W16((u32)(r_ebx+0xb8u), (u16)r_ebp);
    /* 0054f7dc: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 0054f7de: mov dword ptr [ebx + 0xd0], edx */ W32((u32)(r_ebx+0xd0u), r_edx);
    /* 0054f7e4: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0054f7ea: or edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0054f7f0: mov dword ptr [ebx + 0xb0], edx */ W32((u32)(r_ebx+0xb0u), r_edx);
    /* 0054f7f6: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 0054f7fc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f7fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f7ff: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x54f804u); f_00771e14();
    /* 0054f804: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f807: jne 0x54f82c */ if (!fZ) goto L_0054f82c;
L_0054f809:; BB(0x0054f809);
    /* 0054f809: mov dword ptr [ebx + 0x314], 0 */ W32((u32)(r_ebx+0x314u), 0x0u);
    /* 0054f813: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f816: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 0054f820: mov dword ptr [ebx + 0x30c], 0 */ W32((u32)(r_ebx+0x30cu), 0x0u);
    /* 0054f82a: jmp 0x54f868 */ goto L_0054f868;
L_0054f82c:; BB(0x0054f82c);
    /* 0054f82c: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f832: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f838: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 0054f83e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f840: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f846: push dword ptr [ebx + 0x308] */ { u32 v = R32((u32)(r_ebx+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f84c: push dword ptr [ebx + 0x304] */ { u32 v = R32((u32)(r_ebx+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f852: push dword ptr [ebx + 0x300] */ { u32 v = R32((u32)(r_ebx+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f858: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f85b: call 0x771f5c */ r_esp -= 4; W32(r_esp, 0x54f860u); f_00771f5c();
    /* 0054f860: lea ebp, [ebx + 0x38] */ r_ebp = (u32)(r_ebx+0x38u);
    /* 0054f863: jmp 0x54f868 */ goto L_0054f868;
L_0054f868:; BB(0x0054f868);
    /* 0054f868: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f86a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54f86fu); f_007aa094();
    /* 0054f86f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f871: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f877: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54f87cu); f_007a8cb8();
    /* 0054f87c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f87f: mov dword ptr [ebx + 0x3a4], eax */ W32((u32)(r_ebx+0x3a4u), r_eax);
    /* 0054f885: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f887: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54f88cu); f_007b6894();
    /* 0054f88c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054f88e: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54f893u); f_007b798c();
    /* 0054f893: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f897: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054f89d: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54f8a2u); f_00805608();
    /* 0054f8a2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8a5: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54f8aau); f_006946a8();
    /* 0054f8aa: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054f8ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054f8ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054f8af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054f8b0: ret  */ FN_RET(0x0054f733); r_esp += 4; return;
}

void f_0054f8f8(void) /* sub_54F8F8 */
{
    FN_ENTER(0x0054f8f8);
    /* 0054f8f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f8fa: mov edi, ecx */ r_edi = r_ecx;
    /* 0054f8fc: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0054f902: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054f905: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054f908: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054f90b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0054f90e: and eax, 0xf9dbffff */ {  u32 a = r_eax; u32 b = 0xf9dbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f913: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0054f916: mov ecx, edi */ r_ecx = r_edi;
    /* 0054f918: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54f91du); f_00770738();
    /* 0054f91d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054f91f: je 0x54fab1 */ if (fZ) goto L_0054fab1;
L_0054f925:; BB(0x0054f925);
    /* 0054f925: movsx edx, word ptr [edi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x330u));
    /* 0054f92c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f92e: je 0x54fa04 */ if (fZ) goto L_0054fa04;
L_0054f934:; BB(0x0054f934);
    /* 0054f934: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f937: jne 0x54f9da */ if (!fZ) goto L_0054f9da;
L_0054f93d:; BB(0x0054f93d);
    /* 0054f93d: mov ebx, dword ptr [0xa73978] */ r_ebx = R32((u32)(0xa73978u));
    /* 0054f943: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054f945: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f94b: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0054f951: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f957: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f95d: mov ecx, edi */ r_ecx = r_edi;
    /* 0054f95f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f962: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054f965: call 0x772aa0 */ r_esp -= 4; W32(r_esp, 0x54f96au); f_00772aa0();
    /* 0054f96a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054f96c: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0054f96f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054f970: lea eax, [edi + 0x2a4] */ r_eax = (u32)(r_edi+0x2a4u);
    /* 0054f976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054f977: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x54f97cu); f_007a9180();
    /* 0054f97c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054f97f: fcom dword ptr [0xa7395c] */ fx_compare(ST(0), R_F32((u32)(0xa7395cu))); 
    /* 0054f985: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f987: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f988: jae 0x54f99b */ if (!fC) goto L_0054f99b;
L_0054f98a:; BB(0x0054f98a);
    /* 0054f98a: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0054f990: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f993: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 0054f999: jmp 0x54f9aa */ goto L_0054f9aa;
L_0054f99b:; BB(0x0054f99b);
    /* 0054f99b: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0054f9a1: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054f9a4: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
L_0054f9aa:; BB(0x0054f9aa);
    /* 0054f9aa: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 0054f9b0: mov edx, dword ptr [edi + 0x358] */ r_edx = R32((u32)(r_edi+0x358u));
    /* 0054f9b6: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0054f9b9: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 0054f9bc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054f9be: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0054f9c0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054f9c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054f9c3: jbe 0x54fa7b */ if ((fC||fZ)) goto L_0054fa7b;
L_0054f9c9:; BB(0x0054f9c9);
    /* 0054f9c9: mov eax, 2 */ r_eax = 0x2u;
    /* 0054f9ce: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0054f9d5: jmp 0x54fa7b */ goto L_0054fa7b;
L_0054f9da:; BB(0x0054f9da);
    /* 0054f9da: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054f9dd: jne 0x54f9ff */ if (!fZ) goto L_0054f9ff;
L_0054f9df:; BB(0x0054f9df);
    /* 0054f9df: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0054f9e5: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054f9e8: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 0054f9ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054f9f0: mov word ptr [edi + 0x330], dx */ W16((u32)(r_edi+0x330u), (u16)r_edx);
    /* 0054f9f7: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0054f9fa: jmp 0x54fa7b */ goto L_0054fa7b;
L_0054f9ff:; BB(0x0054f9ff);
    /* 0054f9ff: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0054fa02: jmp 0x54fa7b */ goto L_0054fa7b;
L_0054fa04:; BB(0x0054fa04);
    /* 0054fa04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa06: push dword ptr [eax + 0x308] */ { u32 v = R32((u32)(r_eax+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa0c: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa0e: push dword ptr [eax + 0x304] */ { u32 v = R32((u32)(r_eax+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa14: push dword ptr [eax + 0x300] */ { u32 v = R32((u32)(r_eax+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa1a: call 0x771c8c */ r_esp -= 4; W32(r_esp, 0x54fa1fu); f_00771c8c();
    /* 0054fa1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fa21: jne 0x54fa28 */ if (!fZ) goto L_0054fa28;
L_0054fa23:; BB(0x0054fa23);
    /* 0054fa23: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0054fa26: jmp 0x54fa7b */ goto L_0054fa7b;
L_0054fa28:; BB(0x0054fa28);
    /* 0054fa28: mov eax, dword ptr [0xa73978] */ r_eax = R32((u32)(0xa73978u));
    /* 0054fa2d: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0054fa30: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 0054fa36: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 0054fa3c: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0054fa42: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 0054fa48: mov eax, 1 */ r_eax = 0x1u;
    /* 0054fa4d: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0054fa54: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa5a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa5c: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa62: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fa68: call 0x771f1c */ r_esp -= 4; W32(r_esp, 0x54fa6du); f_00771f1c();
    /* 0054fa6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa71: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa73: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54fa78u); f_00772b44();
    /* 0054fa78: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
L_0054fa7b:; BB(0x0054fa7b);
    /* 0054fa7b: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa7d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54fa82u); f_007aa094();
    /* 0054fa82: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa84: call 0x54fab4 */ r_esp -= 4; W32(r_esp, 0x54fa89u); f_0054fab4();
    /* 0054fa89: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa8b: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x54fa90u); f_007b6894();
    /* 0054fa90: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fa92: call 0x7b798c */ r_esp -= 4; W32(r_esp, 0x54fa97u); f_007b798c();
    /* 0054fa97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fa9b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054faa0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054faa1: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54faa6u); f_00805608();
    /* 0054faa6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054faa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054faa9: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x54faaeu); f_006946a8();
    /* 0054faae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0054fab1:; BB(0x0054fab1);
    /* 0054fab1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054fab2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054fab3: ret  */ FN_RET(0x0054f8f8); r_esp += 4; return;
}

void f_0054fab4(void) /* sub_54FAB4 */
{
    FN_ENTER(0x0054fab4);
    /* 0054fab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054fab5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054fab8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054faba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054fabc: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54fac1u); f_00770738();
    /* 0054fac1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fac3: je 0x54fb3b */ if (fZ) goto L_0054fb3b;
L_0054fac5:; BB(0x0054fac5);
    /* 0054fac5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0054fac8: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 0054face: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0054fad1: mov edx, dword ptr [eax + 0x304] */ r_edx = R32((u32)(r_eax+0x304u));
    /* 0054fad7: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 0054fadd: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054fae1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054fae5: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0054faeb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x54faf0u); f_0082f9c4();
    /* 0054faf0: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0054faf3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054faf7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054faf9: fmul qword ptr [0x924558] */ ST(0) = ST(0) * R_F64((u32)(0x924558u));
    /* 0054faff: fdiv qword ptr [0x924550] */ ST(0) = ST(0) / R_F64((u32)(0x924550u));
    /* 0054fb05: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0054fb09: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0054fb0e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fb13: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0054fb17: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0054fb1b: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0054fb1f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0054fb23: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0054fb27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb28: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fb2b: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x54fb30u); f_007a900c();
    /* 0054fb30: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054fb33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054fb36: call 0x54fb40 */ r_esp -= 4; W32(r_esp, 0x54fb3bu); f_0054fb40();
L_0054fb3b:; BB(0x0054fb3b);
    /* 0054fb3b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054fb3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054fb3f: ret  */ FN_RET(0x0054fab4); r_esp += 4; return;
}

void f_0054fb40(void) /* sub_54FB40 */
{
    FN_ENTER(0x0054fb40);
    /* 0054fb40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb41: mov edi, ecx */ r_edi = r_ecx;
    /* 0054fb43: mov ecx, 0x238e */ r_ecx = 0x238eu;
    /* 0054fb48: mov edx, 0xffffdc72 */ r_edx = 0xffffdc72u;
    /* 0054fb4d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054fb51: cmp eax, 0x238e */ {  u32 a = r_eax; u32 b = 0x238eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fb56: jg 0x54fb5a */ if ((!fZ&&fS==fO)) goto L_0054fb5a;
L_0054fb58:; BB(0x0054fb58);
    /* 0054fb58: mov ecx, eax */ r_ecx = r_eax;
L_0054fb5a:; BB(0x0054fb5a);
    /* 0054fb5a: cmp ecx, 0xffffdc72 */ {  u32 a = r_ecx; u32 b = 0xffffdc72u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fb60: jg 0x54fb64 */ if ((!fZ&&fS==fO)) goto L_0054fb64;
L_0054fb62:; BB(0x0054fb62);
    /* 0054fb62: mov ecx, edx */ r_ecx = r_edx;
L_0054fb64:; BB(0x0054fb64);
    /* 0054fb64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb65: push dword ptr [edi + 0x3a4] */ { u32 v = R32((u32)(r_edi+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054fb6b: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x54fb70u); f_007a8cb8();
    /* 0054fb70: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 0054fb76: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054fb79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054fb7a: ret 4 */ FN_RET(0x0054fb40); r_esp += 8; return;
}

void f_0054fb80(void) /* sub_54FB80 */
{
    FN_ENTER(0x0054fb80);
    /* 0054fb80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fb82: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054fb84: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054fb87: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fb8c: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fb91: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0054fb94: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 0054fb9a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0054fb9d: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054fba0: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0054fba3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054fba5: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54fbaau); f_007aa094();
    /* 0054fbaa: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 0054fbb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbb3: je 0x54fbf6 */ if (fZ) goto L_0054fbf6;
L_0054fbb5:; BB(0x0054fbb5);
    /* 0054fbb5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbb8: jne 0x54fbd3 */ if (!fZ) goto L_0054fbd3;
L_0054fbba:; BB(0x0054fbba);
    /* 0054fbba: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0054fbc0: lea ecx, [ebp + 0x3ac] */ r_ecx = (u32)(r_ebp+0x3acu);
    /* 0054fbc6: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x54fbc9u); call_ind(t); }
    /* 0054fbc9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbcc: je 0x54fc3e */ if (fZ) goto L_0054fc3e;
L_0054fbce:; BB(0x0054fbce);
    /* 0054fbce: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054fbd1: jmp 0x54fc29 */ goto L_0054fc29;
L_0054fbd3:; BB(0x0054fbd3);
    /* 0054fbd3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fbd6: jne 0x54fbf1 */ if (!fZ) goto L_0054fbf1;
L_0054fbd8:; BB(0x0054fbd8);
    /* 0054fbd8: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0054fbde: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fbe3: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fbe6: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 0054fbec: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054fbef: jmp 0x54fc29 */ goto L_0054fc29;
L_0054fbf1:; BB(0x0054fbf1);
    /* 0054fbf1: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054fbf4: jmp 0x54fc29 */ goto L_0054fc29;
L_0054fbf6:; BB(0x0054fbf6);
    /* 0054fbf6: mov eax, 1 */ r_eax = 0x1u;
    /* 0054fbfb: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0054fc02: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054fc05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc06: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x54fc0bu); f_00578a20();
    /* 0054fc0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054fc0c: lea ecx, [ebp + 0x3ac] */ r_ecx = (u32)(r_ebp+0x3acu);
    /* 0054fc12: call 0x512494 */ r_esp -= 4; W32(r_esp, 0x54fc17u); f_00512494();
    /* 0054fc17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054fc1d: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54fc22u); f_00772b44();
    /* 0054fc22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc23: call 0x578a68 */ r_esp -= 4; W32(r_esp, 0x54fc28u); f_00578a68();
    /* 0054fc28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0054fc29:; BB(0x0054fc29);
    /* 0054fc29: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc2b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc2d: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc32: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc33: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x54fc38u); f_00805608();
    /* 0054fc38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054fc3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054fc3c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054fc3d: ret  */ FN_RET(0x0054fb80); r_esp += 4; return;
L_0054fc3e:; BB(0x0054fc3e);
    /* 0054fc3e: mov eax, 2 */ r_eax = 0x2u;
    /* 0054fc43: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0054fc4a: lea ebx, [ebp + 0x38] */ r_ebx = (u32)(r_ebp+0x38u);
    /* 0054fc4d: jmp 0x54fc29 */ goto L_0054fc29;
}

void f_0054fc50(void) /* sub_54FC50 */
{
    FN_ENTER(0x0054fc50);
    /* 0054fc50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc51: mov esi, ecx */ r_esi = r_ecx;
    /* 0054fc53: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0054fc56: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fc5b: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fc60: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0054fc63: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0054fc69: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0054fc6c: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054fc6f: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0054fc72: mov ecx, esi */ r_ecx = r_esi;
    /* 0054fc74: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x54fc79u); f_00770738();
    /* 0054fc79: movsx edx, word ptr [esi + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0054fc80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fc82: je 0x54fcd6 */ if (fZ) goto L_0054fcd6;
L_0054fc84:; BB(0x0054fc84);
    /* 0054fc84: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fc87: jne 0x54fcbb */ if (!fZ) goto L_0054fcbb;
L_0054fc89:; BB(0x0054fc89);
    /* 0054fc89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054fc8b: je 0x54fced */ if (fZ) goto L_0054fced;
L_0054fc8d:; BB(0x0054fc8d);
    /* 0054fc8d: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054fc92: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0054fc98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fc9a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x54fc9fu); f_007a9180();
    /* 0054fc9f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0054fca2: fcomp dword ptr [0x9245d4] */ fx_compare(ST(0), R_F32((u32)(0x9245d4u))); FPOP();
    /* 0054fca8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054fcaa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054fcab: jae 0x54fced */ if (!fC) goto L_0054fced;
L_0054fcad:; BB(0x0054fcad);
    /* 0054fcad: mov eax, 2 */ r_eax = 0x2u;
    /* 0054fcb2: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0054fcb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054fcba: ret  */ FN_RET(0x0054fc50); r_esp += 4; return;
L_0054fcbb:; BB(0x0054fcbb);
    /* 0054fcbb: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054fcbe: jne 0x54fced */ if (!fZ) goto L_0054fced;
L_0054fcc0:; BB(0x0054fcc0);
    /* 0054fcc0: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0054fcc6: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fccb: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054fcce: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 0054fcd4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054fcd5: ret  */ FN_RET(0x0054fc50); r_esp += 4; return;
L_0054fcd6:; BB(0x0054fcd6);
    /* 0054fcd6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcd8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcda: mov eax, 1 */ r_eax = 0x1u;
    /* 0054fcdf: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0054fce6: mov ecx, esi */ r_ecx = r_esi;
    /* 0054fce8: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x54fcedu); f_00772b44();
L_0054fced:; BB(0x0054fced);
    /* 0054fced: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054fcee: ret  */ FN_RET(0x0054fc50); r_esp += 4; return;
}

void f_0054fcf0(void) /* sub_54FCF0 */
{
    FN_ENTER(0x0054fcf0);
    /* 0054fcf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcf1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054fcf3: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 0054fcf6: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 0054fcf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054fcfa: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0054fcfd: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 0054fd00: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 0054fd03: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0054fd06: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x54fd0bu); f_007b999c();
    /* 0054fd0b: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0054fd0e: mov ecx, dword ptr [ebp + 0xa4] */ r_ecx = R32((u32)(r_ebp+0xa4u));
    /* 0054fd14: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fd19: or eax, 0x6040000 */ {  u32 a = r_eax; u32 b = 0x6040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fd1e: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0054fd21: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0054fd24: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054fd27: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0054fd2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054fd2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054fd2c: ret  */ FN_RET(0x0054fcf0); r_esp += 4; return;
}

void f_0054fd30(void) /* sub_54FD30 */
{
    FN_ENTER(0x0054fd30);
    /* 0054fd30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054fd33: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0054fd39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd3b: je 0x54fdad */ if (fZ) goto L_0054fdad;
L_0054fd3d:; BB(0x0054fd3d);
    /* 0054fd3d: cmp eax, 0x107 */ {  u32 a = r_eax; u32 b = 0x107u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd42: je 0x54fd52 */ if (fZ) goto L_0054fd52;
L_0054fd44:; BB(0x0054fd44);
    /* 0054fd44: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd49: je 0x54fd52 */ if (fZ) goto L_0054fd52;
L_0054fd4b:; BB(0x0054fd4b);
    /* 0054fd4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054fd4d: call 0x54ea78 */ r_esp -= 4; W32(r_esp, 0x54fd52u); f_0054ea78();
L_0054fd52:; BB(0x0054fd52);
    /* 0054fd52: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 0054fd58: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054fd5a: jne 0x54fd73 */ if (!fZ) goto L_0054fd73;
L_0054fd5c:; BB(0x0054fd5c);
    /* 0054fd5c: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 0054fd62: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd64: je 0x54fdc2 */ if (fZ) goto L_0054fdc2;
L_0054fd66:; BB(0x0054fd66);
    /* 0054fd66: call 0x579410 */ r_esp -= 4; W32(r_esp, 0x54fd6bu); f_00579410();
    /* 0054fd6b: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 0054fd71: jmp 0x54fdc2 */ goto L_0054fdc2;
L_0054fd73:; BB(0x0054fd73);
    /* 0054fd73: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0054fd79: cmp eax, dword ptr [ebx + 0x38c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x38cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd7f: je 0x54fda5 */ if (fZ) goto L_0054fda5;
L_0054fd81:; BB(0x0054fd81);
    /* 0054fd81: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 0054fd87: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fd89: je 0x54fd9d */ if (fZ) goto L_0054fd9d;
L_0054fd8b:; BB(0x0054fd8b);
    /* 0054fd8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054fd8c: call 0x579420 */ r_esp -= 4; W32(r_esp, 0x54fd91u); f_00579420();
    /* 0054fd91: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0054fd97: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
L_0054fd9d:; BB(0x0054fd9d);
    /* 0054fd9d: mov dword ptr [ebx + 0x38c], eax */ W32((u32)(r_ebx+0x38cu), r_eax);
    /* 0054fda3: jmp 0x54fdc2 */ goto L_0054fdc2;
L_0054fda5:; BB(0x0054fda5);
    /* 0054fda5: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 0054fdab: jmp 0x54fdc2 */ goto L_0054fdc2;
L_0054fdad:; BB(0x0054fdad);
    /* 0054fdad: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
    /* 0054fdb3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fdb5: je 0x54fdc2 */ if (fZ) goto L_0054fdc2;
L_0054fdb7:; BB(0x0054fdb7);
    /* 0054fdb7: call 0x579410 */ r_esp -= 4; W32(r_esp, 0x54fdbcu); f_00579410();
    /* 0054fdbc: mov ecx, dword ptr [ebx + 0x3a8] */ r_ecx = R32((u32)(r_ebx+0x3a8u));
L_0054fdc2:; BB(0x0054fdc2);
    /* 0054fdc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054fdc4: je 0x54fde1 */ if (fZ) goto L_0054fde1;
L_0054fdc6:; BB(0x0054fdc6);
    /* 0054fdc6: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0054fdcc: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0054fdcf: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 0054fdd5: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 0054fdd8: mov ebx, dword ptr [ebx + 0x3a0] */ r_ebx = R32((u32)(r_ebx+0x3a0u));
    /* 0054fdde: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
L_0054fde1:; BB(0x0054fde1);
    /* 0054fde1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054fde2: ret  */ FN_RET(0x0054fd30); r_esp += 4; return;
}

void f_0054fde4(void) /* sub_54FDE4 */
{
    FN_ENTER(0x0054fde4);
    /* 0054fde4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054fde5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054fde6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054fde9: mov esi, ecx */ r_esi = r_ecx;
    /* 0054fdeb: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fdf0: mov ecx, esi */ r_ecx = r_esi;
    /* 0054fdf2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054fdf4: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fdf9: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054fdfe: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x54fe01u); call_ind(t); }
    /* 0054fe01: mov edi, eax */ r_edi = r_eax;
    /* 0054fe03: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe05: je 0x54ff98 */ if (fZ) goto L_0054ff98;
L_0054fe0b:; BB(0x0054fe0b);
    /* 0054fe0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054fe0c: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x54fe11u); f_00794548();
    /* 0054fe11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054fe12: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0054fe15: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54fe1au); f_00829cc8();
    /* 0054fe1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fe1c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54fe21u); f_0082d990();
    /* 0054fe21: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0054fe24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fe26: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x54fe2bu); f_008316b4();
    /* 0054fe2b: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0054fe2e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fe30: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54fe35u); f_0082d8bc();
    /* 0054fe35: mov edx, dword ptr [esi + 0x3a4] */ r_edx = R32((u32)(r_esi+0x3a4u));
    /* 0054fe3b: mov dword ptr [0xa739a4], 0 */ W32((u32)(0xa739a4u), 0x0u);
    /* 0054fe45: mov ecx, 0x54e374 */ r_ecx = 0x54e374u;
    /* 0054fe4a: mov dword ptr [0xa739a0], edx */ W32((u32)(0xa739a0u), r_edx);
    /* 0054fe50: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x54fe55u); f_0082fac4();
    /* 0054fe55: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x54fe5au); f_00578b38();
    /* 0054fe5a: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 0054fe61: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe63: je 0x54ff40 */ if (fZ) goto L_0054ff40;
L_0054fe69:; BB(0x0054fe69);
    /* 0054fe69: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe6c: jne 0x54fe80 */ if (!fZ) goto L_0054fe80;
L_0054fe6e:; BB(0x0054fe6e);
    /* 0054fe6e: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 0054fe75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fe78: je 0x550015 */ if (fZ) goto L_00550015;
L_0054fe7e:; BB(0x0054fe7e);
    /* 0054fe7e: jmp 0x54fe91 */ goto L_0054fe91;
L_0054fe80:; BB(0x0054fe80);
    /* 0054fe80: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054fe82: jle 0x54ff30 */ if ((fZ||fS!=fO)) goto L_0054ff30;
L_0054fe88:; BB(0x0054fe88);
    /* 0054fe88: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054fe8b: jg 0x54ff30 */ if ((!fZ&&fS==fO)) goto L_0054ff30;
L_0054fe91:; BB(0x0054fe91);
    /* 0054fe91: mov eax, dword ptr [esi + 0x3ac] */ r_eax = R32((u32)(r_esi+0x3acu));
    /* 0054fe97: lea edi, [esi + 0x3ac] */ r_edi = (u32)(r_esi+0x3acu);
    /* 0054fe9d: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fe9f: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x54fea2u); call_ind(t); }
    /* 0054fea2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054fea4: je 0x54ff40 */ if (fZ) goto L_0054ff40;
L_0054feaa:; BB(0x0054feaa);
    /* 0054feaa: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0054feaf: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 0054feb5: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0054feba: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0054febf: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 0054fec5: mov ecx, edi */ r_ecx = r_edi;
    /* 0054fec7: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0054fecc: mov eax, dword ptr [esi + 0x3ac] */ r_eax = R32((u32)(r_esi+0x3acu));
    /* 0054fed2: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x54fed5u); call_ind(t); }
    /* 0054fed5: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0054feda: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054fedd: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0054fee2: mov ecx, esi */ r_ecx = r_esi;
    /* 0054fee4: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x54fee9u); f_008173d0();
    /* 0054fee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054feeb: jne 0x54fef4 */ if (!fZ) goto L_0054fef4;
L_0054feed:; BB(0x0054feed);
    /* 0054feed: mov ecx, esi */ r_ecx = r_esi;
    /* 0054feef: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x54fef4u); f_007aa668();
L_0054fef4:; BB(0x0054fef4);
    /* 0054fef4: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0054fef9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054fefc: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0054ff01: mov edx, dword ptr [esi + 0x3ac] */ r_edx = R32((u32)(r_esi+0x3acu));
    /* 0054ff07: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ff09: call dword ptr [edx + 0x1c] */ { u32 t = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, 0x54ff0cu); call_ind(t); }
    /* 0054ff0c: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 0054ff11: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0054ff17: mov edi, dword ptr [0xaab518] */ r_edi = R32((u32)(0xaab518u));
    /* 0054ff1d: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 0054ff22: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0054ff28: mov dword ptr [0xaf034c], edi */ W32((u32)(0xaf034cu), r_edi);
    /* 0054ff2e: jmp 0x54ff40 */ goto L_0054ff40;
L_0054ff30:; BB(0x0054ff30);
    /* 0054ff30: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ff33: je 0x550024 */ if (fZ) goto L_00550024;
L_0054ff39:; BB(0x0054ff39);
    /* 0054ff39: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ff3b: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x54ff40u); f_007aa7b8();
L_0054ff40:; BB(0x0054ff40);
    /* 0054ff40: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x54ff45u); f_0082dab0();
    /* 0054ff45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ff47: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x54ff4cu); f_0082fac4();
    /* 0054ff4c: mov eax, dword ptr [0xa73994] */ r_eax = R32((u32)(0xa73994u));
    /* 0054ff51: mov edx, dword ptr [0xa73998] */ r_edx = R32((u32)(0xa73998u));
    /* 0054ff57: mov edi, dword ptr [0xa7399c] */ r_edi = R32((u32)(0xa7399cu));
    /* 0054ff5d: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 0054ff63: mov dword ptr [esi + 0x39c], edx */ W32((u32)(r_esi+0x39cu), r_edx);
    /* 0054ff69: mov dword ptr [esi + 0x3a0], edi */ W32((u32)(r_esi+0x3a0u), r_edi);
    /* 0054ff6f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54ff74u); f_0082da80();
    /* 0054ff74: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x54ff79u); f_00794750();
    /* 0054ff79: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0054ff7f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ff81: jne 0x55000f */ if (!fZ) goto L_0055000f;
L_0054ff87:; BB(0x0054ff87);
    /* 0054ff87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054ff89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ff8b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ff8d: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x54ff92u); f_00779d4c();
    /* 0054ff92: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ff95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ff96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054ff97: ret  */ FN_RET(0x0054fde4); r_esp += 4; return;
L_0054ff98:; BB(0x0054ff98);
    /* 0054ff98: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0054ff9d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54ffa2u); f_0082d990();
    /* 0054ffa2: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0054ffa5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54ffaau); f_0082d838();
    /* 0054ffaa: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0054ffad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ffaf: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54ffb4u); f_0082d8bc();
    /* 0054ffb4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x54ffb9u); f_0082fa9c();
    /* 0054ffb9: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054ffbf: mov ecx, esi */ r_ecx = r_esi;
    /* 0054ffc1: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x54ffc6u); f_007aaab8();
    /* 0054ffc6: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x54ffcbu); f_0082faac();
    /* 0054ffcb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54ffd0u); f_0082da80();
    /* 0054ffd0: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 0054ffd6: add ecx, 0x680 */ {  u32 a = r_ecx; u32 b = 0x680u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ffdc: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x54ffe1u); f_0082d990();
    /* 0054ffe1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0054ffe8: add esi, 0x398 */ {  u32 a = r_esi; u32 b = 0x398u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054ffee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054fff0: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0054fff8: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00550000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00550001: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00550005: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x55000au); f_00830aa0();
    /* 0055000a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55000fu); f_0082da80();
L_0055000f:; BB(0x0055000f);
    /* 0055000f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00550012: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00550013: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00550014: ret  */ FN_RET(0x0054fde4); r_esp += 4; return;
L_00550015:; BB(0x00550015);
    /* 00550015: lea edx, [esi + 0x68] */ r_edx = (u32)(r_esi+0x68u);
    /* 00550018: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055001a: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x55001fu); f_0083c0a0();
    /* 0055001f: jmp 0x54fe91 */ goto L_0054fe91;
L_00550024:; BB(0x00550024);
    /* 00550024: mov ecx, esi */ r_ecx = r_esi;
    /* 00550026: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x55002bu); f_007aa668();
    /* 0055002b: jmp 0x54ff40 */ goto L_0054ff40;
}

