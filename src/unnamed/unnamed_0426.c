#include "protos.h"

void f_0042620c(void) /* sub_42620C */
{
    FN_ENTER(0x0042620c);
    /* 0042620c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0042620d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0042620e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042620f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426210: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00426212:; BB(0x00426212);
    /* 00426212: mov ebx, dword ptr [ecx + eax*4 + 0x1c] */ r_ebx = R32((u32)(r_ecx+r_eax*4+0x1cu));
    /* 00426216: mov ebp, dword ptr [ebx + 0xa8] */ r_ebp = R32((u32)(r_ebx+0xa8u));
    /* 0042621c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0042621e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00426221: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00426223: jle 0x426255 */ if ((fZ||fS!=fO)) goto L_00426255;
L_00426225:; BB(0x00426225);
    /* 00426225: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00426228: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042622a: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0042622c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042622e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00426230: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00426232: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00426234: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00426236:; BB(0x00426236);
    /* 00426236: mov edi, dword ptr [ebx + 0xa4] */ r_edi = R32((u32)(r_ebx+0xa4u));
    /* 0042623c: mov esi, dword ptr [ebp + edi + 0x18] */ r_esi = R32((u32)(r_ebp+r_edi+0x18u));
    /* 00426240: and esi, 0xfffffffe */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00426243: mov dword ptr [ebp + edi + 0x18], esi */ W32((u32)(r_ebp+r_edi+0x18u), r_esi);
    /* 00426247: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0042624a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0042624d: cmp edx, dword ptr [ebx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426253: jl 0x426236 */ if ((fS!=fO)) goto L_00426236;
L_00426255:; BB(0x00426255);
    /* 00426255: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00426258: jl 0x426212 */ if ((fS!=fO)) goto L_00426212;
L_0042625a:; BB(0x0042625a);
    /* 0042625a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042625b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042625c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042625d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0042625e: ret  */ FN_RET(0x0042620c); r_esp += 4; return;
}

void f_00426260(void) /* sub_426260 */
{
    FN_ENTER(0x00426260);
    /* 00426260: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00426264: mov eax, dword ptr [ecx + edx*4 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x1cu));
    /* 00426268: ret 4 */ FN_RET(0x00426260); r_esp += 8; return;
}

void f_0042626c(void) /* sub_42626C */
{
    FN_ENTER(0x0042626c);
    /* 0042626c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042626d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0042626f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426271: call 0x426290 */ r_esp -= 4; W32(r_esp, 0x426276u); f_00426290();
    /* 00426276: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042627a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042627c: jne 0x426282 */ if (!fZ) goto L_00426282;
L_0042627e:; BB(0x0042627e);
    /* 0042627e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042627f: ret 4 */ FN_RET(0x0042626c); r_esp += 8; return;
L_00426282:; BB(0x00426282);
    /* 00426282: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426283: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x426288u); f_005c2f74();
    /* 00426288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00426289: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042628a: ret 4 */ FN_RET(0x0042626c); r_esp += 8; return;
}

void f_00426290(void) /* sub_426290 */
{
    FN_ENTER(0x00426290);
    /* 00426290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426291: mov ebp, esp */ r_ebp = r_esp;
    /* 00426293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426295: push 0x8cd848 */ { u32 v = 0x8cd848u; r_esp -= 4; W32(r_esp, v); }
    /* 0042629a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004262a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004262a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004262a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004262ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004262ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004262b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004262b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004262b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004262ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004262bd: mov dword ptr [ecx], 0xaf3d78 */ W32((u32)(r_ecx), 0xaf3d78u);
    /* 004262c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004262ca: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4262cfu); f_008171e8();
    /* 004262cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004262d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004262d9: mov esp, ebp */ r_esp = r_ebp;
    /* 004262db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004262dc: ret  */ FN_RET(0x00426290); r_esp += 4; return;
}

void f_004262e0(void) /* sub_4262E0 */
{
    FN_ENTER(0x004262e0);
    /* 004262e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004262e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004262e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004262e5: push 0x8cd864 */ { u32 v = 0x8cd864u; r_esp -= 4; W32(r_esp, v); }
    /* 004262ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004262f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004262f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004262f8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004262fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004262fe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00426301: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00426304: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00426307: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0042630a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0042630d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00426310: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00426313: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00426316: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00426319: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x42631eu); f_008193cc();
    /* 0042631e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426325: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426328: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0042632b: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0042632e: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00426331: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 00426334: mov dword ptr [ebx], 0xaf3d78 */ W32((u32)(r_ebx), 0xaf3d78u);
    /* 0042633a: mov eax, dword ptr [0x9a3f70] */ r_eax = R32((u32)(0x9a3f70u));
    /* 0042633f: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00426342: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
    /* 00426349: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42634eu); f_00420a44();
    /* 0042634e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426350: jne 0x426388 */ if (!fZ) goto L_00426388;
L_00426352:; BB(0x00426352);
    /* 00426352: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426355: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00426358: mov ebx, dword ptr [ecx + 0x1c] */ r_ebx = R32((u32)(r_ecx+0x1cu));
    /* 0042635b: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0042635e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426360: mov byte ptr [ebp - 0x34], 1 */ W8((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00426364: mov byte ptr [ebp - 0x33], al */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_eax);
    /* 00426367: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 0042636b: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0042636e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426370: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x426375u); f_004d31f4();
    /* 00426375: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 00426378: push 0x238e */ { u32 v = 0x238eu; r_esp -= 4; W32(r_esp, v); }
    /* 0042637d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042637e: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x426383u); f_004d6770();
    /* 00426383: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00426386: jmp 0x4263c5 */ goto L_004263c5;
L_00426388:; BB(0x00426388);
    /* 00426388: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0042638b: jne 0x4263c5 */ if (!fZ) goto L_004263c5;
L_0042638d:; BB(0x0042638d);
    /* 0042638d: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426390: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00426392: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00426395: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00426398: mov eax, 1 */ r_eax = 0x1u;
    /* 0042639d: mov byte ptr [ebp - 0x34], al */ W8((u32)(r_ebp+0xffffffccu), (u8)r_eax);
    /* 004263a0: mov byte ptr [ebp - 0x33], al */ W8((u32)(r_ebp+0xffffffcdu), (u8)r_eax);
    /* 004263a3: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004263a6: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 004263a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004263ab: mov word ptr [ebp - 0x32], dx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_edx);
    /* 004263af: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4263b4u); f_004d31f4();
    /* 004263b4: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 004263b7: push 0x3333 */ { u32 v = 0x3333u; r_esp -= 4; W32(r_esp, v); }
    /* 004263bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004263bd: call 0x4d6770 */ r_esp -= 4; W32(r_esp, 0x4263c2u); f_004d6770();
    /* 004263c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004263c5:; BB(0x004263c5);
    /* 004263c5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004263c8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004263cb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004263ce: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004263d1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004263d8: mov esp, ebp */ r_esp = r_ebp;
    /* 004263da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004263db: ret 0xc */ FN_RET(0x004262e0); r_esp += 16; return;
}

void f_004263e0(void) /* sub_4263E0 */
{
    FN_ENTER(0x004263e0);
    /* 004263e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004263e1: mov esi, ecx */ r_esi = r_ecx;
    /* 004263e3: call 0x4d6864 */ r_esp -= 4; W32(r_esp, 0x4263e8u); f_004d6864();
    /* 004263e8: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 004263ec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004263ee: jne 0x4263f9 */ if (!fZ) goto L_004263f9;
L_004263f0:; BB(0x004263f0);
    /* 004263f0: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004263f3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004263f5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004263f7: jne 0x42640b */ if (!fZ) goto L_0042640b;
L_004263f9:; BB(0x004263f9);
    /* 004263f9: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x4263feu); f_004d3250();
    /* 004263fe: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00426402: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426407: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0042640b:; BB(0x0042640b);
    /* 0042640b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0042640c: ret  */ FN_RET(0x004263e0); r_esp += 4; return;
}

void f_00426410(void) /* sub_426410 */
{
    FN_ENTER(0x00426410);
    /* 00426410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426411: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00426413: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426415: call 0x426434 */ r_esp -= 4; W32(r_esp, 0x42641au); f_00426434();
    /* 0042641a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042641e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426420: jne 0x426426 */ if (!fZ) goto L_00426426;
L_00426422:; BB(0x00426422);
    /* 00426422: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426423: ret 4 */ FN_RET(0x00426410); r_esp += 8; return;
L_00426426:; BB(0x00426426);
    /* 00426426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426427: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x42642cu); f_005c2f74();
    /* 0042642c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042642d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042642e: ret 4 */ FN_RET(0x00426410); r_esp += 8; return;
}

void f_00426434(void) /* sub_426434 */
{
    FN_ENTER(0x00426434);
    /* 00426434: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426435: mov ebp, esp */ r_ebp = r_esp;
    /* 00426437: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426439: push 0x8cd880 */ { u32 v = 0x8cd880u; r_esp -= 4; W32(r_esp, v); }
    /* 0042643e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426445: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042644c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042644f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00426452: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00426455: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00426458: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042645b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042645e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426465: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426468: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0042646b: mov dword ptr [eax], 0xaf3de0 */ W32((u32)(r_eax), 0xaf3de0u);
    /* 00426471: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426473: je 0x42647f */ if (fZ) goto L_0042647f;
L_00426475:; BB(0x00426475);
    /* 00426475: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426477: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x42647cu); f_00418aa8();
    /* 0042647c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0042647f:; BB(0x0042647f);
    /* 0042647f: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 00426486: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042648d: mov ecx, eax */ r_ecx = r_eax;
    /* 0042648f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x426494u); f_008171e8();
    /* 00426494: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426497: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042649e: mov esp, ebp */ r_esp = r_ebp;
    /* 004264a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004264a1: ret  */ FN_RET(0x00426434); r_esp += 4; return;
}

void f_004264a4(void) /* sub_4264A4 */
{
    FN_ENTER(0x004264a4);
    /* 004264a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004264a5: mov ebp, esp */ r_ebp = r_esp;
    /* 004264a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004264a9: push 0x8cd8b6 */ { u32 v = 0x8cd8b6u; r_esp -= 4; W32(r_esp, v); }
    /* 004264ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004264b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004264b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004264bc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004264bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004264c2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004264c5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004264c8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004264cb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004264ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004264d1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004264d4: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004264d7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004264da: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004264dd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4264e2u); f_008193cc();
    /* 004264e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004264e9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004264ec: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004264ef: fld dword ptr [0x8fc370] */ FPUSH(R_F32((u32)(0x8fc370u)));
    /* 004264f5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004264f7: mov dword ptr [eax], 0xaf3de0 */ W32((u32)(r_eax), 0xaf3de0u);
    /* 004264fd: mov edx, dword ptr [0x9a3f74] */ r_edx = R32((u32)(0x9a3f74u));
    /* 00426503: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00426506: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00426508: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0042650f: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00426512: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00426515: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426518: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 0042651b: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0042651e: mov dword ptr [eax + 0x24], edi */ W32((u32)(r_eax+0x24u), r_edi);
    /* 00426521: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00426523: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00426525: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00426527: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0042652a: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0042652d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0042652f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00426532: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00426535: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00426538: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0042653a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042653c: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 0042653f: fstp dword ptr [eax + 0x2c] */ W_F32((u32)(r_eax+0x2cu), ST(0)); FPOP();
    /* 00426542: fstp dword ptr [eax + 0x30] */ W_F32((u32)(r_eax+0x30u), ST(0)); FPOP();
    /* 00426545: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x42654au); f_008581c5();
    /* 0042654a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042654b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0042654e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426550: je 0x426593 */ if (fZ) goto L_00426593;
L_00426552:; BB(0x00426552);
    /* 00426552: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00426559: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00426560: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00426563: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00426565: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x42656au); f_00521a4c();
    /* 0042656a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0042656d: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00426574:; BB(0x00426574);
    /* 00426574: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426577: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0042657a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042657d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426580: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00426583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426586: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0042658d: mov esp, ebp */ r_esp = r_ebp;
    /* 0042658f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426590: ret 0xc */ FN_RET(0x004264a4); r_esp += 16; return;
L_00426593:; BB(0x00426593);
    /* 00426593: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426595: jmp 0x426574 */ goto L_00426574;
}

void f_00426598(void) /* sub_426598 */
{
    FN_ENTER(0x00426598);
    /* 00426598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00426599: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0042659a: mov edi, ecx */ r_edi = r_ecx;
    /* 0042659c: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 0042659f: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 004265a2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004265a4: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4265a9u); f_0082ebac();
    /* 004265a9: fld dword ptr [edi + 0x20] */ FPUSH(R_F32((u32)(r_edi+0x20u)));
    /* 004265ac: fcom dword ptr [0x8fc36c] */ fx_compare(ST(0), R_F32((u32)(0x8fc36cu))); 
    /* 004265b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004265b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004265b5: jb 0x4265d5 */ if (fC) goto L_004265d5;
L_004265b7:; BB(0x004265b7);
    /* 004265b7: fcomp dword ptr [0x8fc368] */ fx_compare(ST(0), R_F32((u32)(0x8fc368u))); FPOP();
    /* 004265bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004265bf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004265c0: jae 0x4265d2 */ if (!fC) goto L_004265d2;
L_004265c2:; BB(0x004265c2);
    /* 004265c2: call 0x423804 */ r_esp -= 4; W32(r_esp, 0x4265c7u); f_00423804();
    /* 004265c7: push dword ptr [edi + 0x34] */ { u32 v = R32((u32)(r_edi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004265ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004265cb: mov ecx, eax */ r_ecx = r_eax;
    /* 004265cd: call 0x424f78 */ r_esp -= 4; W32(r_esp, 0x4265d2u); f_00424f78();
L_004265d2:; BB(0x004265d2);
    /* 004265d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004265d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004265d4: ret  */ FN_RET(0x00426598); r_esp += 4; return;
L_004265d5:; BB(0x004265d5);
    /* 004265d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004265d7: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004265db: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004265e0: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004265e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004265e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004265e6: ret  */ FN_RET(0x00426598); r_esp += 4; return;
}

void f_004265e8(void) /* sub_4265E8 */
{
    FN_ENTER(0x004265e8);
    /* 004265e8: mov dword ptr [0xa437f8], 0x42c80000 */ W32((u32)(0xa437f8u), 0x42c80000u);
    /* 004265f2: mov dword ptr [0x9a3f80], 0x41200000 */ W32((u32)(0x9a3f80u), 0x41200000u);
    /* 004265fc: ret  */ FN_RET(0x004265e8); r_esp += 4; return;
}

void f_00426600(void) /* sub_426600 */
{
    FN_ENTER(0x00426600);
    /* 00426600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426601: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00426603: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426605: call 0x426624 */ r_esp -= 4; W32(r_esp, 0x42660au); f_00426624();
    /* 0042660a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042660e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426610: jne 0x426616 */ if (!fZ) goto L_00426616;
L_00426612:; BB(0x00426612);
    /* 00426612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426613: ret 4 */ FN_RET(0x00426600); r_esp += 8; return;
L_00426616:; BB(0x00426616);
    /* 00426616: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426617: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x42661cu); f_005c2f74();
    /* 0042661c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042661d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042661e: ret 4 */ FN_RET(0x00426600); r_esp += 8; return;
}

void f_00426624(void) /* sub_426624 */
{
    FN_ENTER(0x00426624);
    /* 00426624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426625: mov ebp, esp */ r_ebp = r_esp;
    /* 00426627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426629: push 0x8cd8d0 */ { u32 v = 0x8cd8d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0042662e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042663c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042663f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00426642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00426645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00426648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0042664b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0042664e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426651: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 00426654: mov dword ptr [ecx], 0xaf3e40 */ W32((u32)(r_ecx), 0xaf3e40u);
    /* 0042665a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042665c: je 0x426675 */ if (fZ) goto L_00426675;
L_0042665e:; BB(0x0042665e);
    /* 0042665e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426661: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00426665: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0042666a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042666e: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_00426675:; BB(0x00426675);
    /* 00426675: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 00426678: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042667a: je 0x426693 */ if (fZ) goto L_00426693;
L_0042667c:; BB(0x0042667c);
    /* 0042667c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042667f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00426683: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00426688: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0042668c: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_00426693:; BB(0x00426693);
    /* 00426693: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0042669a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x42669fu); f_008171e8();
    /* 0042669f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004266a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004266a9: mov esp, ebp */ r_esp = r_ebp;
    /* 004266ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004266ac: ret  */ FN_RET(0x00426624); r_esp += 4; return;
}

void f_004266b0(void) /* sub_4266B0 */
{
    FN_ENTER(0x004266b0);
    /* 004266b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004266b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004266b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004266b5: push 0x8cd8ec */ { u32 v = 0x8cd8ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004266ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004266c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004266c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004266c8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004266cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004266ce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004266d1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004266d4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004266d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004266da: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004266dd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004266e0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004266e3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004266e6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004266e9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4266eeu); f_008193cc();
    /* 004266ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004266f5: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004266f8: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004266fb: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004266fe: mov dword ptr [edx], 0xaf3e40 */ W32((u32)(r_edx), 0xaf3e40u);
    /* 00426704: mov eax, dword ptr [0x9a3f8c] */ r_eax = R32((u32)(0x9a3f8cu));
    /* 00426709: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0042670c: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0042670e: mov dword ptr [edx + 0x1c], ebx */ W32((u32)(r_edx+0x1cu), r_ebx);
    /* 00426711: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00426714: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 00426717: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0042671a: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0042671d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0042671f: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00426722: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00426725: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00426728: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0042672b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0042672e: lea ecx, [edx + 0x28] */ r_ecx = (u32)(r_edx+0x28u);
    /* 00426731: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426734: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x426739u); f_0082f9c4();
    /* 00426739: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0042673c: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0042673f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426740: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x426745u); f_00782868();
    /* 00426745: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426748: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0042674b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0042674d: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00426750: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 00426753: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
    /* 0042675a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042675b: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 0042675e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0042675f: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00426762: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426766: push 0x31f */ { u32 v = 0x31fu; r_esp -= 4; W32(r_esp, v); }
    /* 0042676b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x426770u); f_00814298();
    /* 00426770: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00426773: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426776: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00426779: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0042677c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0042677f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426782: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00426789: mov esp, ebp */ r_esp = r_ebp;
    /* 0042678b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042678c: ret 0xc */ FN_RET(0x004266b0); r_esp += 16; return;
}

void f_00426790(void) /* sub_426790 */
{
    FN_ENTER(0x00426790);
    /* 00426790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426791: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426792: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00426794: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 00426797: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426799: je 0x426805 */ if (fZ) goto L_00426805;
L_0042679b:; BB(0x0042679b);
    /* 0042679b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042679e: jne 0x4267da */ if (!fZ) goto L_004267da;
L_004267a0:; BB(0x004267a0);
    /* 004267a0: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004267a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004267a6: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004267a9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004267ac: je 0x42688f */ if (fZ) goto L_0042688f;
L_004267b2:; BB(0x004267b2);
    /* 004267b2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004267b5: jle 0x4267c1 */ if ((fZ||fS!=fO)) goto L_004267c1;
L_004267b7:; BB(0x004267b7);
    /* 004267b7: mov dword ptr [ebp + 0x38], 2 */ W32((u32)(r_ebp+0x38u), 0x2u);
    /* 004267be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004267bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004267c0: ret  */ FN_RET(0x00426790); r_esp += 4; return;
L_004267c1:; BB(0x004267c1);
    /* 004267c1: mov eax, dword ptr [0xa43800] */ r_eax = R32((u32)(0xa43800u));
    /* 004267c6: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004267c8: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004267cb: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004267ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004267cf: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4267d4u); f_0050b7a4();
    /* 004267d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004267d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004267d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004267d9: ret  */ FN_RET(0x00426790); r_esp += 4; return;
L_004267da:; BB(0x004267da);
    /* 004267da: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004267dd: jne 0x42688c */ if (!fZ) goto L_0042688c;
L_004267e3:; BB(0x004267e3);
    /* 004267e3: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004267e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004267e9: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 004267ec: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004267ef: jle 0x42688c */ if ((fZ||fS!=fO)) goto L_0042688c;
L_004267f5:; BB(0x004267f5);
    /* 004267f5: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004267f9: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004267fe: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00426802: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426803: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426804: ret  */ FN_RET(0x00426790); r_esp += 4; return;
L_00426805:; BB(0x00426805);
    /* 00426805: fld dword ptr [0x8fc394] */ FPUSH(R_F32((u32)(0x8fc394u)));
    /* 0042680b: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0042680e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00426810: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00426813: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00426815: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00426817: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00426819: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 0042681c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0042681d: jae 0x426835 */ if (!fC) goto L_00426835;
L_0042681f:; BB(0x0042681f);
    /* 0042681f: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00426821: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00426823: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00426825: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 0042682c: mov dword ptr [ebp + 0x38], 1 */ W32((u32)(r_ebp+0x38u), 0x1u);
    /* 00426833: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00426835:; BB(0x00426835);
    /* 00426835: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00426837: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00426839: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 0042683c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0042683e: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00426841: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00426844: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 00426847: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 0042684a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042684c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0042684e: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 00426851: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00426853: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00426855: fadd dword ptr [ebp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x24u));
    /* 00426858: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042685a: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0042685d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0042685f: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 00426862: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00426865: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426867: je 0x426902 */ if (fZ) goto L_00426902;
L_0042686d:; BB(0x0042686d);
    /* 0042686d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042686f: je 0x42687a */ if (fZ) goto L_0042687a;
L_00426871:; BB(0x00426871);
    /* 00426871: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 00426874: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426875: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42687au); f_00508db8();
L_0042687a:; BB(0x0042687a);
    /* 0042687a: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 0042687d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042687f: je 0x42688c */ if (fZ) goto L_0042688c;
L_00426881:; BB(0x00426881);
    /* 00426881: add ebp, 0x1c */ {  u32 a = r_ebp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00426884: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426885: mov ecx, eax */ r_ecx = r_eax;
    /* 00426887: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x42688cu); f_00508db8();
L_0042688c:; BB(0x0042688c);
    /* 0042688c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042688d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0042688e: ret  */ FN_RET(0x00426790); r_esp += 4; return;
L_0042688f:; BB(0x0042688f);
    /* 0042688f: mov eax, dword ptr [0xa43800] */ r_eax = R32((u32)(0xa43800u));
    /* 00426894: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00426896: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00426899: lea ebx, [ebp + 0x1c] */ r_ebx = (u32)(r_ebp+0x1cu);
    /* 0042689c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0042689d: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4268a2u); f_0050b7a4();
    /* 004268a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004268a5: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 004268a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004268aa: je 0x4268c0 */ if (fZ) goto L_004268c0;
L_004268ac:; BB(0x004268ac);
    /* 004268ac: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004268b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004268b5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004268b9: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
L_004268c0:; BB(0x004268c0);
    /* 004268c0: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 004268c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004268c5: je 0x4268db */ if (fZ) goto L_004268db;
L_004268c7:; BB(0x004268c7);
    /* 004268c7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004268cb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004268d0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004268d4: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
L_004268db:; BB(0x004268db);
    /* 004268db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004268dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004268de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004268df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004268e0: push 0x320 */ { u32 v = 0x320u; r_esp -= 4; W32(r_esp, v); }
    /* 004268e5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4268eau); f_00814298();
    /* 004268ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004268ed: call 0x423804 */ r_esp -= 4; W32(r_esp, 0x4268f2u); f_00423804();
    /* 004268f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004268f3: mov ecx, eax */ r_ecx = r_eax;
    /* 004268f5: call 0x425004 */ r_esp -= 4; W32(r_esp, 0x4268fau); f_00425004();
    /* 004268fa: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004268fd: jmp 0x4267b2 */ goto L_004267b2;
L_00426902:; BB(0x00426902);
    /* 00426902: mov eax, dword ptr [0xa43800] */ r_eax = R32((u32)(0xa43800u));
    /* 00426907: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00426909: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0042690b: lea edx, [ebp + 0x1c] */ r_edx = (u32)(r_ebp+0x1cu);
    /* 0042690e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0042690f: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x426914u); f_0050981c();
    /* 00426914: mov ecx, eax */ r_ecx = r_eax;
    /* 00426916: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426919: mov dword ptr [ebp + 0x44], ecx */ W32((u32)(r_ebp+0x44u), r_ecx);
    /* 0042691c: jmp 0x42686d */ goto L_0042686d;
}

void f_00426924(void) /* sub_426924 */
{
    FN_ENTER(0x00426924);
    /* 00426924: mov dword ptr [0xa43804], 0x44610000 */ W32((u32)(0xa43804u), 0x44610000u);
    /* 0042692e: mov dword ptr [0x9a3f98], 0x41f00000 */ W32((u32)(0x9a3f98u), 0x41f00000u);
    /* 00426938: ret  */ FN_RET(0x00426924); r_esp += 4; return;
}

void f_0042693c(void) /* sub_42693C */
{
    FN_ENTER(0x0042693c);
    /* 0042693c: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x426941u); f_00420a44();
    /* 00426941: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426943: jne 0x426950 */ if (!fZ) goto L_00426950;
L_00426945:; BB(0x00426945);
    /* 00426945: mov dword ptr [0xa43800], 0x8fc374 */ W32((u32)(0xa43800u), 0x8fc374u);
    /* 0042694f: ret  */ FN_RET(0x0042693c); r_esp += 4; return;
L_00426950:; BB(0x00426950);
    /* 00426950: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00426953: jne 0x42695f */ if (!fZ) goto L_0042695f;
L_00426955:; BB(0x00426955);
    /* 00426955: mov dword ptr [0xa43800], 0x8fc380 */ W32((u32)(0xa43800u), 0x8fc380u);
L_0042695f:; BB(0x0042695f);
    /* 0042695f: ret  */ FN_RET(0x0042693c); r_esp += 4; return;
}

void f_00426960(void) /* sub_426960 */
{
    FN_ENTER(0x00426960);
    /* 00426960: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426961: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00426963: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426965: call 0x426984 */ r_esp -= 4; W32(r_esp, 0x42696au); f_00426984();
    /* 0042696a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0042696e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426970: jne 0x426976 */ if (!fZ) goto L_00426976;
L_00426972:; BB(0x00426972);
    /* 00426972: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426973: ret 4 */ FN_RET(0x00426960); r_esp += 8; return;
L_00426976:; BB(0x00426976);
    /* 00426976: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426977: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x42697cu); f_005c2f74();
    /* 0042697c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0042697d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0042697e: ret 4 */ FN_RET(0x00426960); r_esp += 8; return;
}

void f_00426984(void) /* sub_426984 */
{
    FN_ENTER(0x00426984);
    /* 00426984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426985: mov ebp, esp */ r_ebp = r_esp;
    /* 00426987: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426989: push 0x8cd908 */ { u32 v = 0x8cd908u; r_esp -= 4; W32(r_esp, v); }
    /* 0042698e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426994: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426995: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0042699c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0042699f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004269a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004269a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004269a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004269ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004269ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004269b5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004269b8: mov ecx, dword ptr [eax + 0xbc] */ r_ecx = R32((u32)(r_eax+0xbcu));
    /* 004269be: mov dword ptr [eax], 0xaf3ec0 */ W32((u32)(r_eax), 0xaf3ec0u);
    /* 004269c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004269c6: je 0x4269d2 */ if (fZ) goto L_004269d2;
L_004269c8:; BB(0x004269c8);
    /* 004269c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004269ca: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x4269cfu); f_00418aa8();
    /* 004269cf: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004269d2:; BB(0x004269d2);
    /* 004269d2: mov dword ptr [eax + 0xbc], 0 */ W32((u32)(r_eax+0xbcu), 0x0u);
    /* 004269dc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004269e3: mov ecx, eax */ r_ecx = r_eax;
    /* 004269e5: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x4269eau); f_005219f0();
    /* 004269ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004269ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004269f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004269f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004269f7: ret  */ FN_RET(0x00426984); r_esp += 4; return;
}

void f_004269f8(void) /* sub_4269F8 */
{
    FN_ENTER(0x004269f8);
    /* 004269f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004269f9: mov ebp, esp */ r_ebp = r_esp;
    /* 004269fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004269fd: push 0x8cd93e */ { u32 v = 0x8cd93eu; r_esp -= 4; W32(r_esp, v); }
    /* 00426a02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426a09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00426a10: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426a13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00426a16: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00426a19: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00426a1c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00426a1f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426a22: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00426a25: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00426a28: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00426a2b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00426a2e: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00426a30: push 0x9a3fc0 */ { u32 v = 0x9a3fc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426a35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00426a36: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426a38: call 0x521c5c */ r_esp -= 4; W32(r_esp, 0x426a3du); f_00521c5c();
    /* 00426a3d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426a44: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426a47: mov dword ptr [ebx], 0xaf3ec0 */ W32((u32)(r_ebx), 0xaf3ec0u);
    /* 00426a4d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00426a52: mov eax, dword ptr [0x9a42ac] */ r_eax = R32((u32)(0x9a42acu));
    /* 00426a57: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
L_00426a5a:; BB(0x00426a5a);
    /* 00426a5a: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 00426a60: mov ebx, dword ptr [0x9a3fc0] */ r_ebx = R32((u32)(0x9a3fc0u));
    /* 00426a66: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00426a69: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426a6b: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00426a6d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426a6f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426a71: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00426a73: mov dword ptr [eax + edx*4], ebx */ W32((u32)(r_eax+r_edx*4), r_ebx);
    /* 00426a76: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00426a79: cmp ecx, 0x11 */ {  u32 a = r_ecx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426a7c: mov esi, dword ptr [0x9a3fc4] */ r_esi = R32((u32)(0x9a3fc4u));
    /* 00426a82: mov dword ptr [eax + edx*4 + 4], esi */ W32((u32)(r_eax+r_edx*4+0x4u), r_esi);
    /* 00426a86: mov edi, dword ptr [0x9a3fc8] */ r_edi = R32((u32)(0x9a3fc8u));
    /* 00426a8c: mov dword ptr [eax + edx*4 + 8], edi */ W32((u32)(r_eax+r_edx*4+0x8u), r_edi);
    /* 00426a90: mov ebx, dword ptr [0x9a3fcc] */ r_ebx = R32((u32)(0x9a3fccu));
    /* 00426a96: mov dword ptr [eax + edx*4 + 0xc], ebx */ W32((u32)(r_eax+r_edx*4+0xcu), r_ebx);
    /* 00426a9a: mov ebx, dword ptr [0x9a3fd0] */ r_ebx = R32((u32)(0x9a3fd0u));
    /* 00426aa0: mov dword ptr [eax + edx*4 + 0x10], ebx */ W32((u32)(r_eax+r_edx*4+0x10u), r_ebx);
    /* 00426aa4: mov ebx, dword ptr [0x9a3fd4] */ r_ebx = R32((u32)(0x9a3fd4u));
    /* 00426aaa: mov dword ptr [eax + edx*4 + 0x14], ebx */ W32((u32)(r_eax+r_edx*4+0x14u), r_ebx);
    /* 00426aae: mov ebx, dword ptr [0x9a3fd8] */ r_ebx = R32((u32)(0x9a3fd8u));
    /* 00426ab4: mov dword ptr [eax + edx*4 + 0x18], ebx */ W32((u32)(r_eax+r_edx*4+0x18u), r_ebx);
    /* 00426ab8: mov ebx, dword ptr [0x9a3fdc] */ r_ebx = R32((u32)(0x9a3fdcu));
    /* 00426abe: mov dword ptr [eax + edx*4 + 0x1c], ebx */ W32((u32)(r_eax+r_edx*4+0x1cu), r_ebx);
    /* 00426ac2: mov ebx, dword ptr [0x9a3fe0] */ r_ebx = R32((u32)(0x9a3fe0u));
    /* 00426ac8: mov dword ptr [eax + edx*4 + 0x20], ebx */ W32((u32)(r_eax+r_edx*4+0x20u), r_ebx);
    /* 00426acc: mov ebx, dword ptr [0x9a3fe4] */ r_ebx = R32((u32)(0x9a3fe4u));
    /* 00426ad2: mov dword ptr [eax + edx*4 + 0x24], ebx */ W32((u32)(r_eax+r_edx*4+0x24u), r_ebx);
    /* 00426ad6: mov ebx, dword ptr [0x9a3fe8] */ r_ebx = R32((u32)(0x9a3fe8u));
    /* 00426adc: mov dword ptr [eax + edx*4 + 0x28], ebx */ W32((u32)(r_eax+r_edx*4+0x28u), r_ebx);
    /* 00426ae0: jge 0x426aea */ if ((fS==fO)) goto L_00426aea;
L_00426ae2:; BB(0x00426ae2);
    /* 00426ae2: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426ae5: jmp 0x426a5a */ goto L_00426a5a;
L_00426aea:; BB(0x00426aea);
    /* 00426aea: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426aed: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426af0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426af3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00426af5: mov dword ptr [ecx + 0xb4], eax */ W32((u32)(r_ecx+0xb4u), r_eax);
    /* 00426afb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00426b02: mov dword ptr [ecx + 0xb8], edx */ W32((u32)(r_ecx+0xb8u), r_edx);
    /* 00426b08: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x426b0du); f_008581c5();
    /* 00426b0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00426b0e: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00426b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426b13: je 0x426b81 */ if (fZ) goto L_00426b81;
L_00426b15:; BB(0x00426b15);
    /* 00426b15: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00426b1c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00426b23: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00426b26: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00426b28: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x426b2du); f_00521a4c();
    /* 00426b2d: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00426b30: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00426b37:; BB(0x00426b37);
    /* 00426b37: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00426b3a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00426b3d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426b40: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00426b43: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00426b49: mov dword ptr [eax + 0xc0], 0 */ W32((u32)(r_eax+0xc0u), 0x0u);
    /* 00426b53: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
    /* 00426b5d: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 00426b67: mov dword ptr [eax + 0xcc], 0 */ W32((u32)(r_eax+0xccu), 0x0u);
    /* 00426b71: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426b74: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00426b7b: mov esp, ebp */ r_esp = r_ebp;
    /* 00426b7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426b7e: ret 8 */ FN_RET(0x004269f8); r_esp += 12; return;
L_00426b81:; BB(0x00426b81);
    /* 00426b81: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426b83: jmp 0x426b37 */ goto L_00426b37;
}

void f_00426b88(void) /* sub_426B88 */
{
    FN_ENTER(0x00426b88);
    /* 00426b88: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 00426b92: call 0x4cf87c */ r_esp -= 4; W32(r_esp, 0x426b97u); f_004cf87c();
    /* 00426b97: ret  */ FN_RET(0x00426b88); r_esp += 4; return;
}

void f_00426b98(void) /* sub_426B98 */
{
    FN_ENTER(0x00426b98);
    /* 00426b98: mov dword ptr [ecx + 0xc0], 1 */ W32((u32)(r_ecx+0xc0u), 0x1u);
    /* 00426ba2: call 0x4cf87c */ r_esp -= 4; W32(r_esp, 0x426ba7u); f_004cf87c();
    /* 00426ba7: ret  */ FN_RET(0x00426b98); r_esp += 4; return;
}

void f_00426ba8(void) /* sub_426BA8 */
{
    FN_ENTER(0x00426ba8);
    /* 00426ba8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00426ba9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426baa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426bab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426bac: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426baf: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00426bb1: mov edx, dword ptr [ebx + 0xb8] */ r_edx = R32((u32)(r_ebx+0xb8u));
    /* 00426bb7: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 00426bba: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00426bbd: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 00426bc0: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00426bc3: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00426bc6: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00426bc9: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00426bcc: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00426bcf: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x426bd4u); f_0082ebac();
    /* 00426bd4: fld dword ptr [0x8fc3c4] */ FPUSH(R_F32((u32)(0x8fc3c4u)));
    /* 00426bda: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00426bdd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00426bdf: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00426be2: mov edx, dword ptr [ebx + 0xb4] */ r_edx = R32((u32)(r_ebx+0xb4u));
    /* 00426be8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00426bea: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00426bed: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 00426bf0: mov eax, dword ptr [edx + 0x3c] */ r_eax = R32((u32)(r_edx+0x3cu));
    /* 00426bf3: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00426bf6: mov esi, dword ptr [edx + 0x60] */ r_esi = R32((u32)(r_edx+0x60u));
    /* 00426bf9: mov dword ptr [ebx + 0x60], esi */ W32((u32)(r_ebx+0x60u), r_esi);
    /* 00426bfc: mov esi, dword ptr [ebx + 0xb8] */ r_esi = R32((u32)(r_ebx+0xb8u));
    /* 00426c02: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x426c07u); f_0082d7b0();
    /* 00426c07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c09: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x426c0eu); f_00830cd8();
    /* 00426c0e: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00426c11: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00426c13: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c15: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x426c1au); f_0082d8bc();
    /* 00426c1a: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00426c1d: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00426c20: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00426c23: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426c26: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00426c28: fchs  */ ST(0) = -ST(0);
    /* 00426c2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00426c2d: fchs  */ ST(0) = -ST(0);
    /* 00426c2f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00426c33: fchs  */ ST(0) = -ST(0);
    /* 00426c35: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00426c39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c3b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x426c40u); f_00830b74();
    /* 00426c40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00426c42: mov ebp, esi */ r_ebp = r_esi;
    /* 00426c44: mov esi, eax */ r_esi = r_eax;
L_00426c46:; BB(0x00426c46);
    /* 00426c46: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00426c49: mov edi, esi */ r_edi = r_esi;
    /* 00426c4b: add edi, dword ptr [ebx + 0xa4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00426c51: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 00426c54: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00426c57: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00426c58: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 00426c5b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00426c5e: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00426c61: mov edx, ebp */ r_edx = r_ebp;
    /* 00426c63: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00426c66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00426c68: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x426c6du); f_00830aa0();
    /* 00426c6d: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00426c72: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00426c73: call 0x520304 */ r_esp -= 4; W32(r_esp, 0x426c78u); f_00520304();
    /* 00426c78: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426c7b: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00426c7e: cmp esi, 0x2ec */ {  u32 a = r_esi; u32 b = 0x2ecu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426c84: jl 0x426c46 */ if ((fS!=fO)) goto L_00426c46;
L_00426c86:; BB(0x00426c86);
    /* 00426c86: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x426c8bu); f_0082da80();
    /* 00426c8b: mov eax, dword ptr [ebx + 0xc0] */ r_eax = R32((u32)(r_ebx+0xc0u));
    /* 00426c91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426c94: je 0x426d0b */ if (fZ) goto L_00426d0b;
L_00426c96:; BB(0x00426c96);
    /* 00426c96: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00426c99: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x426c9eu); f_0082ddd8();
    /* 00426c9e: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00426ca1: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00426cab: fchs  */ ST(0) = -ST(0);
    /* 00426cad: fmul dword ptr [0x8fc3b8] */ ST(0) = ST(0) * R_F32((u32)(0x8fc3b8u));
    /* 00426cb3: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 00426cb9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x426cbeu); f_0082dcbc();
    /* 00426cbe: fld dword ptr [0x8fc3b8] */ FPUSH(R_F32((u32)(0x8fc3b8u)));
    /* 00426cc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00426cc6: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
L_00426ccc:; BB(0x00426ccc);
    /* 00426ccc: mov eax, dword ptr [0x8fc3a0] */ r_eax = R32((u32)(0x8fc3a0u));
    /* 00426cd1: mov ecx, dword ptr [ebx + 0xb4] */ r_ecx = R32((u32)(r_ebx+0xb4u));
    /* 00426cd7: mov dword ptr [esp], 0x40400000 */ W32((u32)(r_esp), 0x40400000u);
    /* 00426cde: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00426ce2: call 0x424f68 */ r_esp -= 4; W32(r_esp, 0x426ce7u); f_00424f68();
    /* 00426ce7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00426cea: push dword ptr [ebx + 0xbc] */ { u32 v = R32((u32)(r_ebx+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00426cf0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426cf1: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00426cf3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426cf5: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x426cf8u); call_ind(t); }
    /* 00426cf8: mov ecx, dword ptr [ebx + 0xb4] */ r_ecx = R32((u32)(r_ebx+0xb4u));
    /* 00426cfe: call 0x41ed38 */ r_esp -= 4; W32(r_esp, 0x426d03u); f_0041ed38();
    /* 00426d03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00426d06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426d07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426d08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426d09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00426d0a: ret  */ FN_RET(0x00426ba8); r_esp += 4; return;
L_00426d0b:; BB(0x00426d0b);
    /* 00426d0b: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00426d0e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x426d13u); f_0082ddd8();
    /* 00426d13: fld dword ptr [0x8fc3b8] */ FPUSH(R_F32((u32)(0x8fc3b8u)));
    /* 00426d19: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00426d1c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00426d1e: fstp dword ptr [ebx + 0xc4] */ W_F32((u32)(r_ebx+0xc4u), ST(0)); FPOP();
    /* 00426d24: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 00426d2e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x426d33u); f_0082dcbc();
    /* 00426d33: fchs  */ ST(0) = -ST(0);
    /* 00426d35: fmul dword ptr [0x8fc3b8] */ ST(0) = ST(0) * R_F32((u32)(0x8fc3b8u));
    /* 00426d3b: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 00426d41: jmp 0x426ccc */ goto L_00426ccc;
}

void f_00426d44(void) /* sub_426D44 */
{
    FN_ENTER(0x00426d44);
    /* 00426d44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426d45: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00426d49: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00426d4e: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00426d54: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00426d56: mov ecx, esi */ r_ecx = r_esi;
    /* 00426d58: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x426d5bu); call_ind(t); }
    /* 00426d5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00426d5d: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x426d62u); f_00520e6c();
    /* 00426d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426d64: je 0x426d6d */ if (fZ) goto L_00426d6d;
L_00426d66:; BB(0x00426d66);
    /* 00426d66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00426d67: call 0x418d14 */ r_esp -= 4; W32(r_esp, 0x426d6cu); f_00418d14();
    /* 00426d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00426d6d:; BB(0x00426d6d);
    /* 00426d6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00426d6e: ret 8 */ FN_RET(0x00426d44); r_esp += 12; return;
}

void f_00426da0(void) /* sub_426DA0 */
{
    FN_ENTER(0x00426da0);
    /* 00426da0: mov ecx, dword ptr [0xa4381c] */ r_ecx = R32((u32)(0xa4381cu));
    /* 00426da6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426da8: je 0x426dc5 */ if (fZ) goto L_00426dc5;
L_00426daa:; BB(0x00426daa);
    /* 00426daa: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x426dafu); f_00829de0();
    /* 00426daf: push dword ptr [0xa4381c] */ { u32 v = R32((u32)(0xa4381cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00426db5: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x426dbau); f_0082e960();
    /* 00426dba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00426dbb: mov dword ptr [0xa4381c], 0 */ W32((u32)(0xa4381cu), 0x0u);
L_00426dc5:; BB(0x00426dc5);
    /* 00426dc5: mov ecx, dword ptr [0xa43820] */ r_ecx = R32((u32)(0xa43820u));
    /* 00426dcb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426dcd: je 0x426dd6 */ if (fZ) goto L_00426dd6;
L_00426dcf:; BB(0x00426dcf);
    /* 00426dcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426dd1: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x426dd6u); f_004066a8();
L_00426dd6:; BB(0x00426dd6);
    /* 00426dd6: mov dword ptr [0xa43820], 0 */ W32((u32)(0xa43820u), 0x0u);
    /* 00426de0: ret  */ FN_RET(0x00426da0); r_esp += 4; return;
}

void f_00426de4(void) /* sub_426DE4 */
{
    FN_ENTER(0x00426de4);
    /* 00426de4: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x426de9u); f_00420a44();
    /* 00426de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426deb: jne 0x426e0f */ if (!fZ) goto L_00426e0f;
L_00426ded:; BB(0x00426ded);
    /* 00426ded: push 0x9a42dc */ { u32 v = 0x9a42dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00426df2: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x426df7u); f_0051f6b0();
    /* 00426df7: push 0x8fc480 */ { u32 v = 0x8fc480u; r_esp -= 4; W32(r_esp, v); }
    /* 00426dfc: mov dword ptr [0xa43820], eax */ W32((u32)(0xa43820u), r_eax);
    /* 00426e01: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x426e06u); f_008009dc();
    /* 00426e06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00426e09: mov dword ptr [0xa4381c], eax */ W32((u32)(0xa4381cu), r_eax);
    /* 00426e0e: ret  */ FN_RET(0x00426de4); r_esp += 4; return;
L_00426e0f:; BB(0x00426e0f);
    /* 00426e0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00426e12: jne 0x426e3a */ if (!fZ) goto L_00426e3a;
L_00426e14:; BB(0x00426e14);
    /* 00426e14: push 0x8fc498 */ { u32 v = 0x8fc498u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e19: push 0x9a42dc */ { u32 v = 0x9a42dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00426e1e: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x426e23u); f_0051f674();
    /* 00426e23: push 0x8fc4b4 */ { u32 v = 0x8fc4b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e28: mov dword ptr [0xa43820], eax */ W32((u32)(0xa43820u), r_eax);
    /* 00426e2d: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x426e32u); f_008009dc();
    /* 00426e32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00426e35: mov dword ptr [0xa4381c], eax */ W32((u32)(0xa4381cu), r_eax);
L_00426e3a:; BB(0x00426e3a);
    /* 00426e3a: ret  */ FN_RET(0x00426de4); r_esp += 4; return;
}

void f_00426e3c(void) /* sub_426E3C */
{
    FN_ENTER(0x00426e3c);
    /* 00426e3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426e3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00426e3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00426e41: call 0x426e60 */ r_esp -= 4; W32(r_esp, 0x426e46u); f_00426e60();
    /* 00426e46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00426e4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00426e4c: jne 0x426e52 */ if (!fZ) goto L_00426e52;
L_00426e4e:; BB(0x00426e4e);
    /* 00426e4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426e4f: ret 4 */ FN_RET(0x00426e3c); r_esp += 8; return;
L_00426e52:; BB(0x00426e52);
    /* 00426e52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00426e53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x426e58u); f_005c2f74();
    /* 00426e58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00426e59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00426e5a: ret 4 */ FN_RET(0x00426e3c); r_esp += 8; return;
}

void f_00426e60(void) /* sub_426E60 */
{
    FN_ENTER(0x00426e60);
    /* 00426e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426e61: mov ebp, esp */ r_ebp = r_esp;
    /* 00426e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426e65: push 0x8cd958 */ { u32 v = 0x8cd958u; r_esp -= 4; W32(r_esp, v); }
    /* 00426e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426e71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00426e78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426e7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00426e7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00426e81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00426e84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00426e87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00426e8a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426e91: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426e94: mov ecx, dword ptr [eax + 0xb8] */ r_ecx = R32((u32)(r_eax+0xb8u));
    /* 00426e9a: mov dword ptr [eax], 0xaf3f80 */ W32((u32)(r_eax), 0xaf3f80u);
    /* 00426ea0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ea2: je 0x426eba */ if (fZ) goto L_00426eba;
L_00426ea4:; BB(0x00426ea4);
    /* 00426ea4: je 0x426eb0 */ if (fZ) goto L_00426eb0;
L_00426ea6:; BB(0x00426ea6);
    /* 00426ea6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00426ea8: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x426eadu); f_00418aa8();
    /* 00426ead: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00426eb0:; BB(0x00426eb0);
    /* 00426eb0: mov dword ptr [eax + 0xb8], 0 */ W32((u32)(r_eax+0xb8u), 0x0u);
L_00426eba:; BB(0x00426eba);
    /* 00426eba: mov edx, dword ptr [eax + 0xb4] */ r_edx = R32((u32)(r_eax+0xb4u));
    /* 00426ec0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426ec2: je 0x426ede */ if (fZ) goto L_00426ede;
L_00426ec4:; BB(0x00426ec4);
    /* 00426ec4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00426ec8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00426ecd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00426ed1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00426ed4: mov dword ptr [eax + 0xb4], 0 */ W32((u32)(r_eax+0xb4u), 0x0u);
L_00426ede:; BB(0x00426ede);
    /* 00426ede: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00426ee5: mov ecx, eax */ r_ecx = r_eax;
    /* 00426ee7: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x426eecu); f_005219f0();
    /* 00426eec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00426eef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00426ef6: mov esp, ebp */ r_esp = r_ebp;
    /* 00426ef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00426ef9: ret  */ FN_RET(0x00426e60); r_esp += 4; return;
}

void f_00426efc(void) /* sub_426EFC */
{
    FN_ENTER(0x00426efc);
    /* 00426efc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00426efd: mov ebp, esp */ r_ebp = r_esp;
    /* 00426eff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00426f01: push 0x8cd9aa */ { u32 v = 0x8cd9aau; r_esp -= 4; W32(r_esp, v); }
    /* 00426f06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00426f0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00426f14: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00426f17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00426f1a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00426f1d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00426f20: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00426f23: mov eax, dword ptr [0xa43898] */ r_eax = R32((u32)(0xa43898u));
    /* 00426f28: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00426f2b: jge 0x4270d3 */ if ((fS==fO)) goto L_004270d3;
L_00426f31:; BB(0x00426f31);
    /* 00426f31: call 0x423804 */ r_esp -= 4; W32(r_esp, 0x426f36u); f_00423804();
    /* 00426f36: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00426f39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426f3b: je 0x4270d3 */ if (fZ) goto L_004270d3;
L_00426f41:; BB(0x00426f41);
    /* 00426f41: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00426f48: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00426f4d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x426f52u); f_005caba4();
    /* 00426f52: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00426f55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00426f58: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00426f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00426f5d: je 0x4270ed */ if (fZ) goto L_004270ed;
L_00426f63:; BB(0x00426f63);
    /* 00426f63: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00426f6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00426f71: mov ecx, eax */ r_ecx = r_eax;
    /* 00426f73: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00426f76: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00426f79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426f7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00426f7d: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x426f82u); f_00521bbc();
    /* 00426f82: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00426f89: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00426f8c: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 00426f92: mov dword ptr [eax], 0xaf3f80 */ W32((u32)(r_eax), 0xaf3f80u);
    /* 00426f98: mov edx, dword ptr [0x9a42ec] */ r_edx = R32((u32)(0x9a42ecu));
    /* 00426f9e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00426fa1: mov ecx, dword ptr [0x9a42f8] */ r_ecx = R32((u32)(0x9a42f8u));
    /* 00426fa7: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00426faa: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 00426fad: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00426faf: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 00426fb2: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 00426fb5: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 00426fb8: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00426fbb: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00426fbe: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x426fc3u); f_008587a5();
    /* 00426fc3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426fc6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00426fc9: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 00426fcc: fdiv dword ptr [0x8fc4e4] */ ST(0) = ST(0) / R_F32((u32)(0x8fc4e4u));
    /* 00426fd2: fmul dword ptr [0x8fc4e0] */ ST(0) = ST(0) * R_F32((u32)(0x8fc4e0u));
    /* 00426fd8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00426fda: fnstcw word ptr [ebp - 0x30] */ W16((u32)(r_ebp+0xffffffd0u), fcw);
    /* 00426fdd: movzx eax, word ptr [ebp - 0x30] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd0u));
    /* 00426fe1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00426fe6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00426fe9: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00426fec: fistp dword ptr [edx + 0x60] */ W32((u32)(r_edx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 00426fef: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 00426ff2: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 00426ff5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00426ff6: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x426ffbu); f_00509590();
    /* 00426ffb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00426ffe: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00427005: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0042700b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0042700d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x427012u); f_008581c5();
    /* 00427012: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00427015: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00427018: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0042701b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0042701d: je 0x4270e3 */ if (fZ) goto L_004270e3;
L_00427023:; BB(0x00427023);
    /* 00427023: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0042702a: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00427031: mov ecx, eax */ r_ecx = r_eax;
    /* 00427033: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00427035: call 0x521a4c */ r_esp -= 4; W32(r_esp, 0x42703au); f_00521a4c();
    /* 0042703a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_00427041:; BB(0x00427041);
    /* 00427041: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00427044: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00427047: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0042704d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00427054: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00427056: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0042705c: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 00427062: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00427068: mov dword ptr [edx + 0xc8], eax */ W32((u32)(r_edx+0xc8u), r_eax);
    /* 0042706e: mov ecx, dword ptr [0xa43898] */ r_ecx = R32((u32)(0xa43898u));
    /* 00427074: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00427077: jge 0x427088 */ if ((fS==fO)) goto L_00427088;
L_00427079:; BB(0x00427079);
    /* 00427079: mov dword ptr [ecx*4 + 0xa43840], edx */ W32((u32)(r_ecx*4+0xa43840u), r_edx);
    /* 00427080: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00427083: mov dword ptr [0xa43898], eax */ W32((u32)(0xa43898u), r_eax);
L_00427088:; BB(0x00427088);
    /* 00427088: call 0x420a44 */ r_esp -= 4; W32(r_esp, 0x42708du); f_00420a44();
    /* 0042708d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0042708f: jne 0x4270a0 */ if (!fZ) goto L_004270a0;
L_00427091:; BB(0x00427091);
    /* 00427091: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00427094: mov dword ptr [eax + 0xcc], 1 */ W32((u32)(r_eax+0xccu), 0x1u);
    /* 0042709e: jmp 0x4270b2 */ goto L_004270b2;
L_004270a0:; BB(0x004270a0);
    /* 004270a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004270a3: jne 0x4270b2 */ if (!fZ) goto L_004270b2;
L_004270a5:; BB(0x004270a5);
    /* 004270a5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004270a8: mov dword ptr [eax + 0xcc], 0x13 */ W32((u32)(r_eax+0xccu), 0x13u);
L_004270b2:; BB(0x004270b2);
    /* 004270b2: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_004270b9:; BB(0x004270b9);
    /* 004270b9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004270bc: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004270bf: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004270c2: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004270c5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004270c8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004270cf: mov esp, ebp */ r_esp = r_ebp;
    /* 004270d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004270d2: ret  */ FN_RET(0x00426efc); r_esp += 4; return;
L_004270d3:; BB(0x004270d3);
    /* 004270d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004270d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004270d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004270df: mov esp, ebp */ r_esp = r_ebp;
    /* 004270e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004270e2: ret  */ FN_RET(0x00426efc); r_esp += 4; return;
L_004270e3:; BB(0x004270e3);
    /* 004270e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004270e5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004270e8: jmp 0x427041 */ goto L_00427041;
L_004270ed:; BB(0x004270ed);
    /* 004270ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004270ef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004270f2: jmp 0x4270b9 */ goto L_004270b9;
}

