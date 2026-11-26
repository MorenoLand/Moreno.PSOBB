#include "protos.h"

void f_0077c070(void) /* sub_77C070 */
{
    FN_ENTER(0x0077c070);
    /* 0077c070: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c071: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c073: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c075: push 0x8f41f0 */ { u32 v = 0x8f41f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c07a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c080: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c081: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c088: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c08b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c08e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0077c091: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0077c094: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0077c097: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077c09a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c09d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0077c0a0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0077c0a3: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x77c0a8u); f_007b4b48();
    /* 0077c0a8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077c0af: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077c0b2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c0b5: mov dword ptr [ecx], 0xb44398 */ W32((u32)(r_ecx), 0xb44398u);
    /* 0077c0bb: mov ebx, dword ptr [0x9f7fe0] */ r_ebx = R32((u32)(0x9f7fe0u));
    /* 0077c0c1: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0077c0c4: mov esi, dword ptr [edx + 0xc] */ r_esi = R32((u32)(r_edx+0xcu));
    /* 0077c0c7: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 0077c0ca: mov edi, dword ptr [edx + 0x10] */ r_edi = R32((u32)(r_edx+0x10u));
    /* 0077c0cd: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 0077c0d0: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 0077c0d3: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0077c0d6: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0077c0d9: mov dword ptr [ecx + 0x5c], eax */ W32((u32)(r_ecx+0x5cu), r_eax);
    /* 0077c0dc: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0077c0df: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 0077c0e2: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 0077c0e5: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
    /* 0077c0e8: mov ebx, dword ptr [edx + 0x24] */ r_ebx = R32((u32)(r_edx+0x24u));
    /* 0077c0eb: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0077c0ee: mov dword ptr [ecx + 0x68], ebx */ W32((u32)(r_ecx+0x68u), r_ebx);
    /* 0077c0f1: mov esi, dword ptr [edx + 0x28] */ r_esi = R32((u32)(r_edx+0x28u));
    /* 0077c0f4: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077c0f9: mov dword ptr [ecx + 0x6c], esi */ W32((u32)(r_ecx+0x6cu), r_esi);
    /* 0077c0fc: fld dword ptr [edx + 0x2c] */ FPUSH(R_F32((u32)(r_edx+0x2cu)));
    /* 0077c0ff: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0077c102: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 0077c105: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 0077c10f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0077c112: fcomp dword ptr [0x97939c] */ fx_compare(ST(0), R_F32((u32)(0x97939cu))); FPOP();
    /* 0077c118: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077c11a: mov dword ptr [ecx + 0xb8], ebx */ W32((u32)(r_ecx+0xb8u), r_ebx);
    /* 0077c120: mov dword ptr [ecx + 0xbc], esi */ W32((u32)(r_ecx+0xbcu), r_esi);
    /* 0077c126: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 0077c130: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077c131: mov dword ptr [ecx + 0xb4], 0 */ W32((u32)(r_ecx+0xb4u), 0x0u);
    /* 0077c13b: jae 0x77c144 */ if (!fC) goto L_0077c144;
L_0077c13d:; BB(0x0077c13d);
    /* 0077c13d: mov eax, 1 */ r_eax = 0x1u;
    /* 0077c142: jmp 0x77c146 */ goto L_0077c146;
L_0077c144:; BB(0x0077c144);
    /* 0077c144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0077c146:; BB(0x0077c146);
    /* 0077c146: mov dword ptr [ecx + 0xc4], 0x10001 */ W32((u32)(r_ecx+0xc4u), 0x10001u);
    /* 0077c150: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c151: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 0077c157: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x77c15cu); f_0082e900();
    /* 0077c15c: fcomp dword ptr [0x979398] */ fx_compare(ST(0), R_F32((u32)(0x979398u))); FPOP();
    /* 0077c162: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077c164: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077c165: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077c168: jae 0x77c17d */ if (!fC) goto L_0077c17d;
L_0077c16a:; BB(0x0077c16a);
    /* 0077c16a: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0077c170: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0077c175: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 0077c17b: jmp 0x77c18e */ goto L_0077c18e;
L_0077c17d:; BB(0x0077c17d);
    /* 0077c17d: mov eax, dword ptr [ecx + 0xc4] */ r_eax = R32((u32)(r_ecx+0xc4u));
    /* 0077c183: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077c188: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
L_0077c18e:; BB(0x0077c18e);
    /* 0077c18e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c190: lea eax, [ecx + 0xac] */ r_eax = (u32)(r_ecx+0xacu);
    /* 0077c196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c197: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x77c19cu); f_007b9a88();
    /* 0077c19c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077c19f: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x77c1a4u); f_007b4f54();
    /* 0077c1a4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0077c1a7: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c1aa: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c1ad: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c1b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c1b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c1ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c1bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c1bd: ret 8 */ FN_RET(0x0077c070); r_esp += 12; return;
}

void f_0077c1c0(void) /* sub_77C1C0 */
{
    FN_ENTER(0x0077c1c0);
    /* 0077c1c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1c1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0077c1c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0077c1c5: call 0x77c1e4 */ r_esp -= 4; W32(r_esp, 0x77c1cau); f_0077c1e4();
    /* 0077c1ca: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0077c1ce: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c1d0: jne 0x77c1d6 */ if (!fZ) goto L_0077c1d6;
L_0077c1d2:; BB(0x0077c1d2);
    /* 0077c1d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077c1d3: ret 4 */ FN_RET(0x0077c1c0); r_esp += 8; return;
L_0077c1d6:; BB(0x0077c1d6);
    /* 0077c1d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1d7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77c1dcu); f_005c2f74();
    /* 0077c1dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c1dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077c1de: ret 4 */ FN_RET(0x0077c1c0); r_esp += 8; return;
}

void f_0077c1e4(void) /* sub_77C1E4 */
{
    FN_ENTER(0x0077c1e4);
    /* 0077c1e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1e5: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c1e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1e9: push 0x8f422a */ { u32 v = 0x8f422au; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c1f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c1fc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c1ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c202: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c205: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c208: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c20b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077c20e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c211: mov dword ptr [eax], 0xb44530 */ W32((u32)(r_eax), 0xb44530u);
    /* 0077c217: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0077c21a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c21d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0077c220: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077c227: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c22a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77c22fu); f_008171e8();
    /* 0077c22f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c232: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c239: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c23b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c23c: ret  */ FN_RET(0x0077c1e4); r_esp += 4; return;
}

void f_0077c2d8(void) /* sub_77C2D8 */
{
    FN_ENTER(0x0077c2d8);
    /* 0077c2d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c2d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c2db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c2dd: push 0x8f42a6 */ { u32 v = 0x8f42a6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c2e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c2e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c2e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c2f0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c2f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c2f6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0077c2f9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0077c2fc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0077c2ff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0077c302: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0077c305: mov eax, ecx */ r_eax = r_ecx;
    /* 0077c307: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0077c30a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0077c30d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0077c314: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x77c319u); f_008171e8();
    /* 0077c319: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c31c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c31e: jne 0x77c330 */ if (!fZ) goto L_0077c330;
L_0077c320:; BB(0x0077c320);
    /* 0077c320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c323: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c32a: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c32c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c32d: ret 4 */ FN_RET(0x0077c2d8); r_esp += 8; return;
L_0077c330:; BB(0x0077c330);
    /* 0077c330: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c334: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x77c339u); f_005c2f74();
    /* 0077c339: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c33a: jmp 0x77c320 */ goto L_0077c320;
}

void f_0077c33c(void) /* sub_77C33C */
{
    FN_ENTER(0x0077c33c);
    /* 0077c33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c33d: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c33f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c341: push 0x8f42cc */ { u32 v = 0x8f42ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c346: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c34c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c34d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c354: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c357: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c35a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c35d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c360: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c363: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0077c366: mov eax, dword ptr [0xa9b204] */ r_eax = R32((u32)(0xa9b204u));
    /* 0077c36b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c36d: jne 0x77c52b */ if (!fZ) goto L_0077c52b;
L_0077c373:; BB(0x0077c373);
    /* 0077c373: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c376: jne 0x77c4f3 */ if (!fZ) goto L_0077c4f3;
L_0077c37c:; BB(0x0077c37c);
    /* 0077c37c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077c37f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077c382: ja 0x77c514 */ if ((!fC&&!fZ)) goto L_0077c514;
L_0077c388:; BB(0x0077c388);
    /* 0077c388: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077c38b: mov edx, dword ptr [eax*4 + 0x9793a0] */ r_edx = R32((u32)(r_eax*4+0x9793a0u));
    /* 0077c392: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0077c4f3:; BB(0x0077c4f3);
    /* 0077c4f3: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077c4f6: jne 0x77c514 */ if (!fZ) goto L_0077c514;
L_0077c4f8:; BB(0x0077c4f8);
    /* 0077c4f8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c4fb: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0077c4fe: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c500: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c504: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c50a: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0077c50e: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c513u); f_007a60dc();
    /* 0077c513: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c33c); r_esp += 4; return;
L_0077c52b:; BB(0x0077c52b);
    /* 0077c52b: call 0x417c10 */ r_esp -= 4; W32(r_esp, 0x77c530u); f_00417c10();
    /* 0077c530: mov dword ptr [0xa9b204], 0 */ W32((u32)(0xa9b204u), 0x0u);
    /* 0077c53a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c53d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c544: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c546: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c547: ret  */ FN_RET(0x0077c33c); r_esp += 4; return;
}

void f_0077c394(void)
{
    FN_ENTER(0x0077c394);
    /* 0077c394: mov eax, dword ptr [0xa9b200] */ r_eax = R32((u32)(0xa9b200u));
    /* 0077c399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c39b: jle 0x77c514 */ if ((fZ||fS!=fO)) goto L_0077c514;
L_0077c3a1:; BB(0x0077c3a1);
    /* 0077c3a1: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0077c3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3a5: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x77c3aau); f_0082e940();
    /* 0077c3aa: mov ebx, eax */ r_ebx = r_eax;
    /* 0077c3ac: mov edx, dword ptr [0xa9b200] */ r_edx = R32((u32)(0xa9b200u));
    /* 0077c3b2: shl edx, 9 */ { u32 c = (9u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0077c3b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3b9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x77c3beu); f_0086b688();
    /* 0077c3be: push dword ptr [0xa9b200] */ { u32 v = R32((u32)(0xa9b200u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c3c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3c5: push 0x9793d0 */ { u32 v = 0x9793d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3cc: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x77c3d1u); f_00828928();
    /* 0077c3d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3d2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x77c3d7u); f_0082e960();
    /* 0077c3d7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077c3da: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c394); r_esp += 4; return;
}

void f_0077c3df(void)
{
    FN_ENTER(0x0077c3df);
    /* 0077c3df: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3e1: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x77c3e6u); f_00417a9c();
    /* 0077c3e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c3e7: mov dword ptr [0xa9b204], 1 */ W32((u32)(0xa9b204u), 0x1u);
    /* 0077c3f1: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c3df); r_esp += 4; return;
}

void f_0077c3f6(void)
{
    FN_ENTER(0x0077c3f6);
    /* 0077c3f6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c3f8: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x77c3fdu); f_00417a9c();
    /* 0077c3fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c3fe: mov dword ptr [0xa9b204], 1 */ W32((u32)(0xa9b204u), 0x1u);
    /* 0077c408: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c3f6); r_esp += 4; return;
}

void f_0077c40d(void)
{
    FN_ENTER(0x0077c40d);
    /* 0077c40d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c40f: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x77c414u); f_00417a9c();
    /* 0077c414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c415: mov dword ptr [0xa9b204], 1 */ W32((u32)(0xa9b204u), 0x1u);
    /* 0077c41f: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c40d); r_esp += 4; return;
}

void f_0077c424(void)
{
    FN_ENTER(0x0077c424);
    /* 0077c424: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c426: call 0x417a9c */ r_esp -= 4; W32(r_esp, 0x77c42bu); f_00417a9c();
    /* 0077c42b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c42c: mov dword ptr [0xa9b204], 1 */ W32((u32)(0xa9b204u), 0x1u);
    /* 0077c436: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c424); r_esp += 4; return;
}

void f_0077c43b(void)
{
    FN_ENTER(0x0077c43b);
    /* 0077c43b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c43e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0077c441: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c443: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c447: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c44d: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0077c451: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c456u); f_007a60dc();
    /* 0077c456: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c457: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c43b); r_esp += 4; return;
}

void f_0077c45c(void)
{
    FN_ENTER(0x0077c45c);
    /* 0077c45c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c45f: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0077c462: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c464: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c468: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c46e: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0077c472: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c477u); f_007a60dc();
    /* 0077c477: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c478: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c45c); r_esp += 4; return;
}

void f_0077c47d(void)
{
    FN_ENTER(0x0077c47d);
    /* 0077c47d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c480: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0077c483: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c485: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c489: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c48f: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0077c493: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c498u); f_007a60dc();
    /* 0077c498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c499: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c47d); r_esp += 4; return;
}

void f_0077c49b(void)
{
    FN_ENTER(0x0077c49b);
    /* 0077c49b: call 0x4e2edc */ r_esp -= 4; W32(r_esp, 0x77c4a0u); f_004e2edc();
    /* 0077c4a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c4a2: jne 0x77c548 */ if (!fZ) goto L_0077c548;
L_0077c4a8:; BB(0x0077c4a8);
    /* 0077c4a8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c4ab: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0077c4ae: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c4b2: push 0x20b8 */ { u32 v = 0x20b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c4b7: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c4bd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077c4c4: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0077c4c8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77c4cdu); f_005caba4();
    /* 0077c4cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c4ce: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0077c4d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c4d3: je 0x77c514 */ if (fZ) goto L_0077c514;
L_0077c4d5:; BB(0x0077c4d5);
    /* 0077c4d5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077c4dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077c4e3: mov ecx, eax */ r_ecx = r_eax;
    /* 0077c4e5: call 0x7a7de8 */ r_esp -= 4; W32(r_esp, 0x77c4eau); f_007a7de8();
    /* 0077c4ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077c4f1: jmp 0x77c514 */ goto L_0077c514;
L_0077c514:; BB(0x0077c514);
    /* 0077c514: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0077c517: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0077c51a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0077c51d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c520: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c527: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c529: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c52a: ret  */ FN_RET(0x0077c49b); r_esp += 4; return;
L_0077c548:; BB(0x0077c548);
    /* 0077c548: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0077c54b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c54c: call 0x4e7604 */ r_esp -= 4; W32(r_esp, 0x77c551u); f_004e7604();
    /* 0077c551: mov ebx, eax */ r_ebx = r_eax;
    /* 0077c553: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c558: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x77c55du); f_006c1bcc();
    /* 0077c55d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077c560: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0077c562: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0077c565: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0077c568: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0077c56b: add eax, 0x370 */ {  u32 a = r_eax; u32 b = 0x370u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077c570: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0077c572: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0077c575: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0077c578: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0077c57b: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0077c57e: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0077c581: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0077c584: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0077c587: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0077c58a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0077c58d: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0077c590: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0077c593: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0077c596: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0077c599: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0077c59c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0077c59f: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0077c5a2: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0077c5a5: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0077c5a8: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0077c5ab: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0077c5ae: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0077c5b1: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0077c5b4: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0077c5b7: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0077c5ba: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0077c5bd: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0077c5c0: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0077c5c3: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0077c5c6: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0077c5c9: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0077c5cc: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0077c5cf: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 0077c5d2: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0077c5d5: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 0077c5d8: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0077c5db: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 0077c5de: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0077c5e1: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0077c5e4: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0077c5e7: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 0077c5ea: mov dword ptr [eax + 0x58], edx */ W32((u32)(r_eax+0x58u), r_edx);
    /* 0077c5ed: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 0077c5f0: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 0077c5f3: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0077c5f6: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0077c5f9: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 0077c5fc: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 0077c5ff: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 0077c602: mov ebx, dword ptr [ebx + 0x6c] */ r_ebx = R32((u32)(r_ebx+0x6cu));
    /* 0077c605: mov dword ptr [eax + 0x68], edx */ W32((u32)(r_eax+0x68u), r_edx);
    /* 0077c608: mov dword ptr [eax + 0x6c], ebx */ W32((u32)(r_eax+0x6cu), r_ebx);
    /* 0077c60b: jmp 0x77c4a8 */ goto L_0077c4a8;
}

void f_0077c610(void) /* sub_77C610 */
{
    FN_ENTER(0x0077c610);
    /* 0077c610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c611: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c613: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c615: push 0x8f42e8 */ { u32 v = 0x8f42e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c61a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c620: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c621: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c628: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c62b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c62e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c631: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c634: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c637: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077c63a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c63c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c63e: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c644: call 0x815c88 */ r_esp -= 4; W32(r_esp, 0x77c649u); f_00815c88();
    /* 0077c649: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077c650: push 0x9793d8 */ { u32 v = 0x9793d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c655: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c658: mov dword ptr [ecx], 0xb44530 */ W32((u32)(r_ecx), 0xb44530u);
    /* 0077c65e: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c663u); f_00815aa8();
    /* 0077c663: push 0x9793f0 */ { u32 v = 0x9793f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c668: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c66b: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c670u); f_00815aa8();
    /* 0077c670: push 0x979400 */ { u32 v = 0x979400u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c675: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c678: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c67du); f_00815aa8();
    /* 0077c67d: push 0x979414 */ { u32 v = 0x979414u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c682: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c685: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c68au); f_00815aa8();
    /* 0077c68a: push 0x97942c */ { u32 v = 0x97942cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c68f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c692: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c697u); f_00815aa8();
    /* 0077c697: push 0x979440 */ { u32 v = 0x979440u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c69c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c69f: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c6a4u); f_00815aa8();
    /* 0077c6a4: push 0x979458 */ { u32 v = 0x979458u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c6a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c6ac: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c6b1u); f_00815aa8();
    /* 0077c6b1: push 0x979478 */ { u32 v = 0x979478u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c6b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c6b9: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c6beu); f_00815aa8();
    /* 0077c6be: push 0x979498 */ { u32 v = 0x979498u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c6c3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c6c6: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c6cbu); f_00815aa8();
    /* 0077c6cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c6ce: mov dword ptr [eax + 0x20b0], 0x77c33c */ W32((u32)(r_eax+0x20b0u), 0x77c33cu);
    /* 0077c6d8: call 0x6c3158 */ r_esp -= 4; W32(r_esp, 0x77c6ddu); f_006c3158();
    /* 0077c6dd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c6e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077c6e2: mov dword ptr [0xa9b200], edx */ W32((u32)(0xa9b200u), r_edx);
    /* 0077c6e8: mov dword ptr [0xa9b204], edx */ W32((u32)(0xa9b204u), r_edx);
    /* 0077c6ee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c6f1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c6f8: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c6fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c6fb: ret  */ FN_RET(0x0077c610); r_esp += 4; return;
}

void f_0077c6fc(void) /* sub_77C6FC */
{
    FN_ENTER(0x0077c6fc);
    /* 0077c6fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077c6fd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c700: mov esi, ecx */ r_esi = r_ecx;
    /* 0077c702: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0077c707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c709: jne 0x77c710 */ if (!fZ) goto L_0077c710;
L_0077c70b:; BB(0x0077c70b);
    /* 0077c70b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077c70e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077c70f: ret  */ FN_RET(0x0077c6fc); r_esp += 4; return;
L_0077c710:; BB(0x0077c710);
    /* 0077c710: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 0077c715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c717: je 0x77c730 */ if (fZ) goto L_0077c730;
L_0077c719:; BB(0x0077c719);
    /* 0077c719: push 0x9794a8 */ { u32 v = 0x9794a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c71e: push 0x60003 */ { u32 v = 0x60003u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c723: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77c728u); f_0061cdb0();
    /* 0077c728: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077c72b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077c72e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077c72f: ret  */ FN_RET(0x0077c6fc); r_esp += 4; return;
L_0077c730:; BB(0x0077c730);
    /* 0077c730: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c732: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c734: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c739: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c73f: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x77c744u); f_007c09fc();
    /* 0077c744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c746: je 0x77c769 */ if (fZ) goto L_0077c769;
L_0077c748:; BB(0x0077c748);
    /* 0077c748: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c74a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c74c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c751: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c757: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x77c75cu); f_007c0c6c();
    /* 0077c75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c75e: je 0x77c769 */ if (fZ) goto L_0077c769;
L_0077c760:; BB(0x0077c760);
    /* 0077c760: add dword ptr [0xa9b200], -1 */ { u32 ad = (u32)(0xa9b200u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0077c767: jmp 0x77c788 */ goto L_0077c788;
L_0077c769:; BB(0x0077c769);
    /* 0077c769: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c76b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c76d: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c772: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c778: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x77c77du); f_007c0c6c();
    /* 0077c77d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c77f: je 0x77c788 */ if (fZ) goto L_0077c788;
L_0077c781:; BB(0x0077c781);
    /* 0077c781: add dword ptr [0xa9cd68], -1 */ { u32 ad = (u32)(0xa9cd68u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0077c788:; BB(0x0077c788);
    /* 0077c788: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c78a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c78c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c791: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c797: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x77c79cu); f_007c09fc();
    /* 0077c79c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c79e: je 0x77c7c6 */ if (fZ) goto L_0077c7c6;
L_0077c7a0:; BB(0x0077c7a0);
    /* 0077c7a0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c7a2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c7a4: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c7a9: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c7af: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x77c7b4u); f_007c0c6c();
    /* 0077c7b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c7b6: je 0x77c7c6 */ if (fZ) goto L_0077c7c6;
L_0077c7b8:; BB(0x0077c7b8);
    /* 0077c7b8: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0077c7bd: add dword ptr [0xa9b200], 1 */ { u32 ad = (u32)(0xa9b200u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0077c7c4: jmp 0x77c7f2 */ goto L_0077c7f2;
L_0077c7c6:; BB(0x0077c7c6);
    /* 0077c7c6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c7c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c7ca: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0077c7cf: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c7d5: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x77c7dau); f_007c0c6c();
    /* 0077c7da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c7dc: je 0x77c7ed */ if (fZ) goto L_0077c7ed;
L_0077c7de:; BB(0x0077c7de);
    /* 0077c7de: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0077c7e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077c7e6: mov dword ptr [0xa9cd68], eax */ W32((u32)(0xa9cd68u), r_eax);
    /* 0077c7eb: jmp 0x77c7f2 */ goto L_0077c7f2;
L_0077c7ed:; BB(0x0077c7ed);
    /* 0077c7ed: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
L_0077c7f2:; BB(0x0077c7f2);
    /* 0077c7f2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077c7f5: jle 0x77c803 */ if ((fZ||fS!=fO)) goto L_0077c803;
L_0077c7f7:; BB(0x0077c7f7);
    /* 0077c7f7: mov dword ptr [0xa9cd68], 0 */ W32((u32)(0xa9cd68u), 0x0u);
    /* 0077c801: jmp 0x77c811 */ goto L_0077c811;
L_0077c803:; BB(0x0077c803);
    /* 0077c803: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077c805: jge 0x77c811 */ if ((fS==fO)) goto L_0077c811;
L_0077c807:; BB(0x0077c807);
    /* 0077c807: mov dword ptr [0xa9cd68], 3 */ W32((u32)(0xa9cd68u), 0x3u);
L_0077c811:; BB(0x0077c811);
    /* 0077c811: push 0x9794dc */ { u32 v = 0x9794dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c816: push 0x40003 */ { u32 v = 0x40003u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c81b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77c820u); f_0061cdb0();
    /* 0077c820: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0077c825: mov dword ptr [esp + 8], 0x92b8d0 */ W32((u32)(r_esp+0x8u), 0x92b8d0u);
    /* 0077c82d: mov dword ptr [esp + 0xc], 0x9794bc */ W32((u32)(r_esp+0xcu), 0x9794bcu);
    /* 0077c835: mov dword ptr [esp + 0x10], 0x9794c4 */ W32((u32)(r_esp+0x10u), 0x9794c4u);
    /* 0077c83d: mov dword ptr [esp + 0x14], 0x9794d0 */ W32((u32)(r_esp+0x14u), 0x9794d0u);
    /* 0077c845: push dword ptr [esp + eax*4 + 8] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c849: push 0x9794f0 */ { u32 v = 0x9794f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c84e: push 0x40006 */ { u32 v = 0x40006u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c853: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77c858u); f_0061cdb0();
    /* 0077c858: push dword ptr [0xa9b200] */ { u32 v = R32((u32)(0xa9b200u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c85e: push 0x9794fc */ { u32 v = 0x9794fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c863: push 0x40007 */ { u32 v = 0x40007u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c868: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77c86du); f_0061cdb0();
    /* 0077c86d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077c870: mov ecx, esi */ r_ecx = r_esi;
    /* 0077c872: call 0x815ddc */ r_esp -= 4; W32(r_esp, 0x77c877u); f_00815ddc();
    /* 0077c877: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077c87a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077c87b: ret  */ FN_RET(0x0077c6fc); r_esp += 4; return;
}

void f_0077c87c(void) /* sub_77C87C */
{
    FN_ENTER(0x0077c87c);
    /* 0077c87c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c87d: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c87f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c881: push 0x8f4304 */ { u32 v = 0x8f4304u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c886: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c88c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c88d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c894: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c897: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c89a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c89d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c8a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c8a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0077c8a6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c8a8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c8aa: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077c8b0: call 0x815c88 */ r_esp -= 4; W32(r_esp, 0x77c8b5u); f_00815c88();
    /* 0077c8b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077c8bc: push 0x979508 */ { u32 v = 0x979508u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c8c1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c8c4: mov dword ptr [ecx], 0xb44540 */ W32((u32)(r_ecx), 0xb44540u);
    /* 0077c8ca: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c8cfu); f_00815aa8();
    /* 0077c8cf: push 0x97951c */ { u32 v = 0x97951cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c8d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c8d7: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c8dcu); f_00815aa8();
    /* 0077c8dc: push 0x97953c */ { u32 v = 0x97953cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c8e1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c8e4: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x77c8e9u); f_00815aa8();
    /* 0077c8e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0077c8ec: mov dword ptr [eax + 0x20b0], 0x77c930 */ W32((u32)(r_eax+0x20b0u), 0x77c930u);
    /* 0077c8f6: mov dword ptr [0xa9c4e8], 0 */ W32((u32)(0xa9c4e8u), 0x0u);
    /* 0077c900: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077c903: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077c90a: mov esp, ebp */ r_esp = r_ebp;
    /* 0077c90c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c90d: ret  */ FN_RET(0x0077c87c); r_esp += 4; return;
}

void f_0077c910(void) /* sub_77C910 */
{
    FN_ENTER(0x0077c910);
    /* 0077c910: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c911: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0077c913: push 0x97955c */ { u32 v = 0x97955cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c918: push 0x60003 */ { u32 v = 0x60003u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c91d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x77c922u); f_0061cdb0();
    /* 0077c922: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077c925: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077c927: call 0x815ddc */ r_esp -= 4; W32(r_esp, 0x77c92cu); f_00815ddc();
    /* 0077c92c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077c92d: ret  */ FN_RET(0x0077c910); r_esp += 4; return;
}

void f_0077c930(void) /* sub_77C930 */
{
    FN_ENTER(0x0077c930);
    /* 0077c930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077c931: mov ebp, esp */ r_ebp = r_esp;
    /* 0077c933: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c935: push 0x8f432c */ { u32 v = 0x8f432cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c93a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0077c940: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077c941: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0077c948: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077c94b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0077c94e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0077c951: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0077c954: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0077c957: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0077c95a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0077c95d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0077c960: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c963: jne 0x77c9d6 */ if (!fZ) goto L_0077c9d6;
L_0077c965:; BB(0x0077c965);
    /* 0077c965: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c967: je 0x77c9be */ if (fZ) goto L_0077c9be;
L_0077c969:; BB(0x0077c969);
    /* 0077c969: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077c96c: jne 0x77c993 */ if (!fZ) goto L_0077c993;
L_0077c96e:; BB(0x0077c96e);
    /* 0077c96e: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c972: mov dword ptr [0xaac4b8], 1 */ W32((u32)(0xaac4b8u), 0x1u);
    /* 0077c97c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c982: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0077c986: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c988: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c98du); f_007a60dc();
    /* 0077c98d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c98e: jmp 0x77ca1e */ goto L_0077ca1e;
L_0077c993:; BB(0x0077c993);
    /* 0077c993: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077c996: jne 0x77ca1e */ if (!fZ) goto L_0077ca1e;
L_0077c99c:; BB(0x0077c99c);
    /* 0077c99c: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c9a0: mov dword ptr [0xaac4b8], 0 */ W32((u32)(0xaac4b8u), 0x0u);
    /* 0077c9aa: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c9b0: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0077c9b4: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0077c9b6: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c9bbu); f_007a60dc();
    /* 0077c9bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c9bc: jmp 0x77ca1e */ goto L_0077ca1e;
L_0077c9be:; BB(0x0077c9be);
    /* 0077c9be: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0077c9c0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c9c4: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c9ca: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0077c9ce: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x77c9d3u); f_007a60dc();
    /* 0077c9d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c9d4: jmp 0x77ca1e */ goto L_0077ca1e;
L_0077c9d6:; BB(0x0077c9d6);
    /* 0077c9d6: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077c9d9: jne 0x77ca1e */ if (!fZ) goto L_0077ca1e;
L_0077c9db:; BB(0x0077c9db);
    /* 0077c9db: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0077c9df: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0077c9e6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077c9ec: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0077c9f0: push 0x20b8 */ { u32 v = 0x20b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077c9f5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x77c9fau); f_005caba4();
    /* 0077c9fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077c9fb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0077c9fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ca00: je 0x77ca1e */ if (fZ) goto L_0077ca1e;
L_0077ca02:; BB(0x0077ca02);
    /* 0077ca02: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0077ca09: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0077ca10: mov ecx, eax */ r_ecx = r_eax;
    /* 0077ca12: call 0x7a7de8 */ r_esp -= 4; W32(r_esp, 0x77ca17u); f_007a7de8();
    /* 0077ca17: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0077ca1e:; BB(0x0077ca1e);
    /* 0077ca1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0077ca21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0077ca28: mov esp, ebp */ r_esp = r_ebp;
    /* 0077ca2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077ca2b: ret  */ FN_RET(0x0077c930); r_esp += 4; return;
}

void f_0077ca2c(void) /* sub_77CA2C */
{
    FN_ENTER(0x0077ca2c);
    /* 0077ca2c: mov dword ptr [0xa9b1f4], 0x3f800000 */ W32((u32)(0xa9b1f4u), 0x3f800000u);
    /* 0077ca36: mov dword ptr [0xa9b1f8], 0x41000000 */ W32((u32)(0xa9b1f8u), 0x41000000u);
    /* 0077ca40: mov dword ptr [0xa9b1fc], 0x3fc00000 */ W32((u32)(0xa9b1fcu), 0x3fc00000u);
    /* 0077ca4a: ret  */ FN_RET(0x0077ca2c); r_esp += 4; return;
}

void f_0077ca4c(void) /* sub_77CA4C */
{
    FN_ENTER(0x0077ca4c);
    /* 0077ca4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077ca4d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077ca50: mov eax, dword ptr [0xa46c44] */ r_eax = R32((u32)(0xa46c44u));
    /* 0077ca55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ca57: jne 0x77cafe */ if (!fZ) goto L_0077cafe;
L_0077ca5d:; BB(0x0077ca5d);
    /* 0077ca5d: movzx edx, word ptr [0xa9b360] */ r_edx = (u32)R16((u32)(0xa9b360u));
    /* 0077ca64: mov eax, edx */ r_eax = r_edx;
    /* 0077ca66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077ca68: jle 0x77caf9 */ if ((fZ||fS!=fO)) goto L_0077caf9;
L_0077ca6e:; BB(0x0077ca6e);
    /* 0077ca6e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0077ca72: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0077ca75:; BB(0x0077ca75);
    /* 0077ca75: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077ca77: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077ca7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077ca7c: jle 0x77cac5 */ if ((fZ||fS!=fO)) goto L_0077cac5;
L_0077ca7e:; BB(0x0077ca7e);
    /* 0077ca7e: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0077ca81: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ca83: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ca85: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ca87: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ca89: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0077ca8c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ca8e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ca90: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ca92: lea ebx, [eax + eax + 0x20] */ r_ebx = (u32)(r_eax+r_eax+0x20u);
L_0077ca96:; BB(0x0077ca96);
    /* 0077ca96: lea edx, [esi + 0xa9b220] */ r_edx = (u32)(r_esi+0xa9b220u);
    /* 0077ca9c: lea eax, [ebx + 0xa9b220] */ r_eax = (u32)(r_ebx+0xa9b220u);
    /* 0077caa2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077caa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077caa4: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x77caa9u); f_00857fed();
    /* 0077caa9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077caac: movzx edx, word ptr [0xa9b360] */ r_edx = (u32)R16((u32)(0xa9b360u));
    /* 0077cab3: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cab6: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077cab9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cabc: mov eax, edx */ r_eax = r_edx;
    /* 0077cabe: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077cac1: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cac3: jl 0x77ca96 */ if ((fS!=fO)) goto L_0077ca96;
L_0077cac5:; BB(0x0077cac5);
    /* 0077cac5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cac7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cac9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cacb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077cacd: mov word ptr [edi*8 + 0xa9b220], cx */ W16((u32)(r_edi*8+0xa9b220u), (u16)r_ecx);
    /* 0077cad5: jle 0x77cae4 */ if ((fZ||fS!=fO)) goto L_0077cae4;
L_0077cad7:; BB(0x0077cad7);
    /* 0077cad7: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cada: mov word ptr [0xa9b360], dx */ W16((u32)(0xa9b360u), (u16)r_edx);
    /* 0077cae1: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
L_0077cae4:; BB(0x0077cae4);
    /* 0077cae4: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
    /* 0077caee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077caf0: jg 0x77ca75 */ if ((!fZ&&fS==fO)) goto L_0077ca75;
L_0077caf2:; BB(0x0077caf2);
    /* 0077caf2: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0077caf6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0077caf9:; BB(0x0077caf9);
    /* 0077caf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077cafc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077cafd: ret  */ FN_RET(0x0077ca4c); r_esp += 4; return;
L_0077cafe:; BB(0x0077cafe);
    /* 0077cafe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077cb00: mov ebx, eax */ r_ebx = r_eax;
L_0077cb02:; BB(0x0077cb02);
    /* 0077cb02: push dword ptr [ebx + 0x9f8000] */ { u32 v = R32((u32)(r_ebx+0x9f8000u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077cb08: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cb0d: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cb12u); f_00858c4d();
    /* 0077cb12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cb15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cb17: je 0x77cbb8 */ if (fZ) goto L_0077cbb8;
L_0077cb1d:; BB(0x0077cb1d);
    /* 0077cb1d: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077cb20: cmp ebx, 0xb8 */ {  u32 a = r_ebx; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cb26: jl 0x77cb02 */ if ((fS!=fO)) goto L_0077cb02;
L_0077cb28:; BB(0x0077cb28);
    /* 0077cb28: movzx eax, word ptr [0xa9b360] */ r_eax = (u32)R16((u32)(0xa9b360u));
    /* 0077cb2f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077cb31: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077cb34: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077cb36: jle 0x77cb93 */ if ((fZ||fS!=fO)) goto L_0077cb93;
L_0077cb38:; BB(0x0077cb38);
    /* 0077cb38: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0077cb3c: mov ebx, edx */ r_ebx = r_edx;
    /* 0077cb3e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0077cb41: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077cb44: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cb46: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cb48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cb4a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cb4c: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0077cb4f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cb51: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cb53: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cb55: lea ecx, [ecx + ecx + 0x20] */ r_ecx = (u32)(r_ecx+r_ecx+0x20u);
    /* 0077cb59: mov edi, eax */ r_edi = r_eax;
    /* 0077cb5b: mov esi, ecx */ r_esi = r_ecx;
L_0077cb5d:; BB(0x0077cb5d);
    /* 0077cb5d: lea edx, [edi + 0xa9b220] */ r_edx = (u32)(r_edi+0xa9b220u);
    /* 0077cb63: lea eax, [esi + 0xa9b220] */ r_eax = (u32)(r_esi+0xa9b220u);
    /* 0077cb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077cb6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cb6b: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x77cb70u); f_00857fed();
    /* 0077cb70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cb73: movzx eax, word ptr [0xa9b360] */ r_eax = (u32)R16((u32)(0xa9b360u));
    /* 0077cb7a: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cb7d: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cb80: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077cb83: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0077cb86: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cb88: jl 0x77cb5d */ if ((fS!=fO)) goto L_0077cb5d;
L_0077cb8a:; BB(0x0077cb8a);
    /* 0077cb8a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0077cb8e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0077cb91: mov edx, ebx */ r_edx = r_ebx;
L_0077cb93:; BB(0x0077cb93);
    /* 0077cb93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cb95: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cb97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077cb9b: mov word ptr [edx*8 + 0xa9b220], cx */ W16((u32)(r_edx*8+0xa9b220u), (u16)r_ecx);
    /* 0077cba3: jle 0x77cbae */ if ((fZ||fS!=fO)) goto L_0077cbae;
L_0077cba5:; BB(0x0077cba5);
    /* 0077cba5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cba8: mov word ptr [0xa9b360], ax */ W16((u32)(0xa9b360u), (u16)r_eax);
L_0077cbae:; BB(0x0077cbae);
    /* 0077cbae: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
L_0077cbb8:; BB(0x0077cbb8);
    /* 0077cbb8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077cbbb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077cbbc: ret  */ FN_RET(0x0077ca4c); r_esp += 4; return;
}

void f_0077cbc0(void) /* sub_77CBC0 */
{
    FN_ENTER(0x0077cbc0);
    /* 0077cbc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077cbc1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077cbc4: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 0077cbc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077cbc9: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x77cbceu); f_00858009();
    /* 0077cbce: mov ecx, eax */ r_ecx = r_eax;
    /* 0077cbd0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cbd3: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0077cbd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077cbd9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cbdb: je 0x77cd1b */ if (fZ) goto L_0077cd1b;
L_0077cbe1:; BB(0x0077cbe1);
    /* 0077cbe1: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0077cbe5: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0077cbe9: mov ebx, eax */ r_ebx = r_eax;
    /* 0077cbeb: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0077cbef: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
L_0077cbf3:; BB(0x0077cbf3);
    /* 0077cbf3: mov esi, ebp */ r_esi = r_ebp;
    /* 0077cbf5: mov edi, ebp */ r_edi = r_ebp;
    /* 0077cbf7: mov ecx, 0x970ed4 */ r_ecx = 0x970ed4u;
    /* 0077cbfc: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0077cbff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077cc01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc03: je 0x77cc26 */ if (fZ) goto L_0077cc26;
L_0077cc05:; BB(0x0077cc05);
    /* 0077cc05: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_0077cc08:; BB(0x0077cc08);
    /* 0077cc08: movzx ebp, word ptr [edi] */ r_ebp = (u32)R16((u32)(r_edi));
    /* 0077cc0b: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc0d: jne 0x77cde5 */ if (!fZ) goto L_0077cde5;
L_0077cc13:; BB(0x0077cc13);
    /* 0077cc13: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cc16: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 0077cc19: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cc1c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cc1f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc21: jne 0x77cc08 */ if (!fZ) goto L_0077cc08;
L_0077cc23:; BB(0x0077cc23);
    /* 0077cc23: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0077cc26:; BB(0x0077cc26);
    /* 0077cc26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cc28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077cc2a: jle 0x77cddc */ if ((fZ||fS!=fO)) goto L_0077cddc;
L_0077cc30:; BB(0x0077cc30);
    /* 0077cc30: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cc33: jl 0x77cc71 */ if ((fS!=fO)) goto L_0077cc71;
L_0077cc35:; BB(0x0077cc35);
    /* 0077cc35: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc3a: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc3c:; BB(0x0077cc3c);
    /* 0077cc3c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc3f: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc44: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc46:; BB(0x0077cc46);
    /* 0077cc46: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc49: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc4e: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc50:; BB(0x0077cc50);
    /* 0077cc50: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc53: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc58: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc5a:; BB(0x0077cc5a);
    /* 0077cc5a: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc5d: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc62: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc64:; BB(0x0077cc64);
    /* 0077cc64: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc67: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cc6a: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 0077cc6d: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cc6f: jle 0x77cc35 */ if ((fZ||fS!=fO)) goto L_0077cc35;
L_0077cc71:; BB(0x0077cc71);
    /* 0077cc71: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0077cc74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc76: je 0x77cc85 */ if (fZ) goto L_0077cc85;
L_0077cc78:; BB(0x0077cc78);
    /* 0077cc78: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cc7b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cc7e: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cc80: jl 0x77cc71 */ if ((fS!=fO)) goto L_0077cc71;
L_0077cc82:; BB(0x0077cc82);
    /* 0077cc82: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_0077cc85:; BB(0x0077cc85);
    /* 0077cc85: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0077cc89: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0077cc8c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0077cc8e: jmp 0x77cc93 */ goto L_0077cc93;
L_0077cc90:; BB(0x0077cc90);
    /* 0077cc90: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
L_0077cc93:; BB(0x0077cc93);
    /* 0077cc93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cc95: je 0x77cdd0 */ if (fZ) goto L_0077cdd0;
L_0077cc9b:; BB(0x0077cc9b);
    /* 0077cc9b: mov ebx, esi */ r_ebx = r_esi;
    /* 0077cc9d: mov ecx, 0x970ed8 */ r_ecx = 0x970ed8u;
    /* 0077cca2: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0077cca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cca7: je 0x77cdc4 */ if (fZ) goto L_0077cdc4;
L_0077ccad:; BB(0x0077ccad);
    /* 0077ccad: movzx ebp, word ptr [ebx] */ r_ebp = (u32)R16((u32)(r_ebx));
    /* 0077ccb0: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ccb2: jne 0x77cd8a */ if (!fZ) goto L_0077cd8a;
L_0077ccb8:; BB(0x0077ccb8);
    /* 0077ccb8: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ccbb: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 0077ccbe: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077ccc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077ccc3: jne 0x77ccad */ if (!fZ) goto L_0077ccad;
L_0077ccc5:; BB(0x0077ccc5);
    /* 0077ccc5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0077ccc9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0077cccc:; BB(0x0077cccc);
    /* 0077cccc: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 0077cccf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077ccd1: mov word ptr [esp + ecx*2 + 0x18], dx */ W16((u32)(r_esp+r_ecx*2+0x18u), (u16)r_edx);
    /* 0077ccd6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0077ccd8:; BB(0x0077ccd8);
    /* 0077ccd8: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0077ccdc: push dword ptr [esi + 0x9f8000] */ { u32 v = R32((u32)(r_esi+0x9f8000u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077cce2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cce3: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cce8u); f_00858c4d();
    /* 0077cce8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cced: je 0x77cd27 */ if (fZ) goto L_0077cd27;
L_0077ccef:; BB(0x0077ccef);
    /* 0077ccef: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ccf2: cmp esi, 0xb8 */ {  u32 a = r_esi; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ccf8: jl 0x77ccd8 */ if ((fS!=fO)) goto L_0077ccd8;
L_0077ccfa:; BB(0x0077ccfa);
    /* 0077ccfa: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0077ccfd:; BB(0x0077ccfd);
    /* 0077ccfd: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0077cd01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cd03: jne 0x77cbf3 */ if (!fZ) goto L_0077cbf3;
L_0077cd09:; BB(0x0077cd09);
    /* 0077cd09: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0077cd0d: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0077cd11: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0077cd15: mov eax, ebx */ r_eax = r_ebx;
    /* 0077cd17: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
L_0077cd1b:; BB(0x0077cd1b);
    /* 0077cd1b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cd1d: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077cd20: mov eax, ecx */ r_eax = r_ecx;
    /* 0077cd22: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077cd25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077cd26: ret  */ FN_RET(0x0077cbc0); r_esp += 4; return;
L_0077cd27:; BB(0x0077cd27);
    /* 0077cd27: movzx edx, word ptr [0xa9b360] */ r_edx = (u32)R16((u32)(0xa9b360u));
    /* 0077cd2e: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cd31: jge 0x77cd5a */ if ((fS==fO)) goto L_0077cd5a;
L_0077cd33:; BB(0x0077cd33);
    /* 0077cd33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cd35: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cd37: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cd39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077cd3b: lea ecx, [edx + edx + 0xa9b220] */ r_ecx = (u32)(r_edx+r_edx+0xa9b220u);
    /* 0077cd42: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0077cd46: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd49: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd4a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x77cd4fu); f_00857dec();
    /* 0077cd4f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cd52: add word ptr [0xa9b360], 1 */ { u32 ad = (u32)(0xa9b360u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0077cd5a:; BB(0x0077cd5a);
    /* 0077cd5a: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0077cd5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd5f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x77cd64u); f_00858009();
    /* 0077cd64: mov edi, eax */ r_edi = r_eax;
    /* 0077cd66: push 0x970ed4 */ { u32 v = 0x970ed4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd6b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x77cd70u); f_00858009();
    /* 0077cd70: mov esi, eax */ r_esi = r_eax;
    /* 0077cd72: push 0x970ed8 */ { u32 v = 0x970ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd77: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cd79: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x77cd7eu); f_00858009();
    /* 0077cd7e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cd81: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077cd83: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077cd85: jmp 0x77ccfa */ goto L_0077ccfa;
L_0077cd8a:; BB(0x0077cd8a);
    /* 0077cd8a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cd8b: call 0x85a514 */ r_esp -= 4; W32(r_esp, 0x77cd90u); f_0085a514();
    /* 0077cd90: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077cd91: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
    /* 0077cd9b: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 0077cd9e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077cda1: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077cda4: mov word ptr [esp + edx*2 + 0x18], ax */ W16((u32)(r_esp+r_edx*2+0x18u), (u16)r_eax);
    /* 0077cda9: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 0077cdac: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077cdaf: jl 0x77cc90 */ if ((fS!=fO)) goto L_0077cc90;
L_0077cdb5:; BB(0x0077cdb5);
    /* 0077cdb5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0077cdb9: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0077cdbc:; BB(0x0077cdbc);
    /* 0077cdbc: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0077cdbf: jmp 0x77ccfd */ goto L_0077ccfd;
L_0077cdc4:; BB(0x0077cdc4);
    /* 0077cdc4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0077cdc8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0077cdcb: jmp 0x77cccc */ goto L_0077cccc;
L_0077cdd0:; BB(0x0077cdd0);
    /* 0077cdd0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0077cdd4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0077cdd7: jmp 0x77ccfa */ goto L_0077ccfa;
L_0077cddc:; BB(0x0077cddc);
    /* 0077cddc: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 0077cde0: jmp 0x77cc85 */ goto L_0077cc85;
L_0077cde5:; BB(0x0077cde5);
    /* 0077cde5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 0077cde8: jmp 0x77cdbc */ goto L_0077cdbc;
}

void f_0077cdec(void) /* sub_77CDEC */
{
    FN_ENTER(0x0077cdec);
    /* 0077cdec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0077cded: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077cdef: mov ebx, eax */ r_ebx = r_eax;
L_0077cdf1:; BB(0x0077cdf1);
    /* 0077cdf1: push dword ptr [ebx + 0x9f8000] */ { u32 v = R32((u32)(r_ebx+0x9f8000u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077cdf7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0077cdfb: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77ce00u); f_00858c4d();
    /* 0077ce00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ce03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ce05: je 0x77ce16 */ if (fZ) goto L_0077ce16;
L_0077ce07:; BB(0x0077ce07);
    /* 0077ce07: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077ce0a: cmp ebx, 0xb8 */ {  u32 a = r_ebx; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ce10: jl 0x77cdf1 */ if ((fS!=fO)) goto L_0077cdf1;
L_0077ce12:; BB(0x0077ce12);
    /* 0077ce12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077ce14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ce15: ret  */ FN_RET(0x0077cdec); r_esp += 4; return;
L_0077ce16:; BB(0x0077ce16);
    /* 0077ce16: mov eax, 1 */ r_eax = 0x1u;
    /* 0077ce1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077ce1c: ret  */ FN_RET(0x0077cdec); r_esp += 4; return;
}

void f_0077ce20(void) /* sub_77CE20 */
{
    FN_ENTER(0x0077ce20);
    /* 0077ce20: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0077ce23: movzx eax, word ptr [0xa9b360] */ r_eax = (u32)R16((u32)(0xa9b360u));
    /* 0077ce2a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077ce2c: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0077ce2f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077ce31: jle 0x77ce96 */ if ((fZ||fS!=fO)) goto L_0077ce96;
L_0077ce33:; BB(0x0077ce33);
    /* 0077ce33: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0077ce37: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0077ce3b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0077ce3e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077ce41: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ce43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ce45: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ce47: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ce49: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0077ce4c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ce4e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ce50: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ce52: lea ecx, [ecx + ecx + 0x20] */ r_ecx = (u32)(r_ecx+r_ecx+0x20u);
    /* 0077ce56: mov esi, eax */ r_esi = r_eax;
    /* 0077ce58: mov edi, edx */ r_edi = r_edx;
    /* 0077ce5a: mov ebx, ecx */ r_ebx = r_ecx;
L_0077ce5c:; BB(0x0077ce5c);
    /* 0077ce5c: lea edx, [esi + 0xa9b220] */ r_edx = (u32)(r_esi+0xa9b220u);
    /* 0077ce62: lea eax, [ebx + 0xa9b220] */ r_eax = (u32)(r_ebx+0xa9b220u);
    /* 0077ce68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077ce69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077ce6a: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x77ce6fu); f_00857fed();
    /* 0077ce6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077ce72: movzx eax, word ptr [0xa9b360] */ r_eax = (u32)R16((u32)(0xa9b360u));
    /* 0077ce79: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0077ce7c: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077ce7f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077ce82: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 0077ce85: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077ce87: jl 0x77ce5c */ if ((fS!=fO)) goto L_0077ce5c;
L_0077ce89:; BB(0x0077ce89);
    /* 0077ce89: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0077ce8d: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0077ce91: mov edx, edi */ r_edx = r_edi;
    /* 0077ce93: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0077ce96:; BB(0x0077ce96);
    /* 0077ce96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077ce98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077ce9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0077ce9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077ce9e: mov word ptr [edx*8 + 0xa9b220], cx */ W16((u32)(r_edx*8+0xa9b220u), (u16)r_ecx);
    /* 0077cea6: jle 0x77ceb1 */ if ((fZ||fS!=fO)) goto L_0077ceb1;
L_0077cea8:; BB(0x0077cea8);
    /* 0077cea8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077ceab: mov word ptr [0xa9b360], ax */ W16((u32)(0xa9b360u), (u16)r_eax);
L_0077ceb1:; BB(0x0077ceb1);
    /* 0077ceb1: mov dword ptr [0xa9b364], 0x1e */ W32((u32)(0xa9b364u), 0x1eu);
    /* 0077cebb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077cebe: ret  */ FN_RET(0x0077ce20); r_esp += 4; return;
}

void f_0077cec0(void) /* sub_77CEC0 */
{
    FN_ENTER(0x0077cec0);
    /* 0077cec0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077cec1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077cec7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x77ceccu); f_0068d5a8();
    /* 0077cecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077cecd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077cecf: je 0x77d571 */ if (fZ) goto L_0077d571;
L_0077ced5:; BB(0x0077ced5);
    /* 0077ced5: mov esi, dword ptr [eax + 0x38c] */ r_esi = R32((u32)(r_eax+0x38cu));
    /* 0077cedb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077cedd: je 0x77d571 */ if (fZ) goto L_0077d571;
L_0077cee3:; BB(0x0077cee3);
    /* 0077cee3: push 0x97957c */ { u32 v = 0x97957cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077cee8: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077ceed: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cef2u); f_00858c4d();
    /* 0077cef2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cef7: jne 0x77cf05 */ if (!fZ) goto L_0077cf05;
L_0077cef9:; BB(0x0077cef9);
    /* 0077cef9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cefb: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cefd: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x77cf00u); call_ind(t); }
    /* 0077cf00: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cf03: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cf04: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cf05:; BB(0x0077cf05);
    /* 0077cf05: push 0x979584 */ { u32 v = 0x979584u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf0a: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf0f: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cf14u); f_00858c4d();
    /* 0077cf14: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cf17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cf19: jne 0x77cf27 */ if (!fZ) goto L_0077cf27;
L_0077cf1b:; BB(0x0077cf1b);
    /* 0077cf1b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cf1d: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cf1f: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x77cf22u); call_ind(t); }
    /* 0077cf22: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cf25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cf26: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cf27:; BB(0x0077cf27);
    /* 0077cf27: push 0x97958c */ { u32 v = 0x97958cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf2c: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf31: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cf36u); f_00858c4d();
    /* 0077cf36: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cf39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cf3b: jne 0x77cf49 */ if (!fZ) goto L_0077cf49;
L_0077cf3d:; BB(0x0077cf3d);
    /* 0077cf3d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cf3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cf41: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x77cf44u); call_ind(t); }
    /* 0077cf44: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cf47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cf48: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cf49:; BB(0x0077cf49);
    /* 0077cf49: push 0x979594 */ { u32 v = 0x979594u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf4e: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf53: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cf58u); f_00858c4d();
    /* 0077cf58: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cf5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cf5d: jne 0x77cf6b */ if (!fZ) goto L_0077cf6b;
L_0077cf5f:; BB(0x0077cf5f);
    /* 0077cf5f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cf61: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cf63: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x77cf66u); call_ind(t); }
    /* 0077cf66: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cf69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cf6a: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cf6b:; BB(0x0077cf6b);
    /* 0077cf6b: push 0x97959c */ { u32 v = 0x97959cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf70: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf75: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cf7au); f_00858c4d();
    /* 0077cf7a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cf7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cf7f: jne 0x77cf8d */ if (!fZ) goto L_0077cf8d;
L_0077cf81:; BB(0x0077cf81);
    /* 0077cf81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cf83: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cf85: call dword ptr [eax + 0x74] */ { u32 t = R32((u32)(r_eax+0x74u)); r_esp -= 4; W32(r_esp, 0x77cf88u); call_ind(t); }
    /* 0077cf88: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cf8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cf8c: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cf8d:; BB(0x0077cf8d);
    /* 0077cf8d: push 0x9795a4 */ { u32 v = 0x9795a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf92: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cf97: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cf9cu); f_00858c4d();
    /* 0077cf9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cf9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cfa1: jne 0x77cfaf */ if (!fZ) goto L_0077cfaf;
L_0077cfa3:; BB(0x0077cfa3);
    /* 0077cfa3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cfa5: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cfa7: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x77cfaau); call_ind(t); }
    /* 0077cfaa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cfad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cfae: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cfaf:; BB(0x0077cfaf);
    /* 0077cfaf: push 0x9795ac */ { u32 v = 0x9795acu; r_esp -= 4; W32(r_esp, v); }
    /* 0077cfb4: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cfb9: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cfbeu); f_00858c4d();
    /* 0077cfbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cfc1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cfc3: jne 0x77cfd1 */ if (!fZ) goto L_0077cfd1;
L_0077cfc5:; BB(0x0077cfc5);
    /* 0077cfc5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cfc7: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cfc9: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x77cfccu); call_ind(t); }
    /* 0077cfcc: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cfcf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cfd0: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cfd1:; BB(0x0077cfd1);
    /* 0077cfd1: push 0x9795b4 */ { u32 v = 0x9795b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cfd6: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077cfdb: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77cfe0u); f_00858c4d();
    /* 0077cfe0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077cfe3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077cfe5: jne 0x77cff6 */ if (!fZ) goto L_0077cff6;
L_0077cfe7:; BB(0x0077cfe7);
    /* 0077cfe7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077cfe9: mov ecx, esi */ r_ecx = r_esi;
    /* 0077cfeb: call dword ptr [eax + 0x80] */ { u32 t = R32((u32)(r_eax+0x80u)); r_esp -= 4; W32(r_esp, 0x77cff1u); call_ind(t); }
    /* 0077cff1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077cff4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077cff5: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077cff6:; BB(0x0077cff6);
    /* 0077cff6: push 0x9795bc */ { u32 v = 0x9795bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077cffb: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d000: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d005u); f_00858c4d();
    /* 0077d005: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d008: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d00a: jne 0x77d01b */ if (!fZ) goto L_0077d01b;
L_0077d00c:; BB(0x0077d00c);
    /* 0077d00c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d00e: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d010: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x77d016u); call_ind(t); }
    /* 0077d016: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d019: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d01a: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d01b:; BB(0x0077d01b);
    /* 0077d01b: push 0x9795c4 */ { u32 v = 0x9795c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d020: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d025: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d02au); f_00858c4d();
    /* 0077d02a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d02d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d02f: jne 0x77d040 */ if (!fZ) goto L_0077d040;
L_0077d031:; BB(0x0077d031);
    /* 0077d031: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d033: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d035: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x77d03bu); call_ind(t); }
    /* 0077d03b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d03e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d03f: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d040:; BB(0x0077d040);
    /* 0077d040: push 0x9795cc */ { u32 v = 0x9795ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d045: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d04a: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d04fu); f_00858c4d();
    /* 0077d04f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d054: jne 0x77d065 */ if (!fZ) goto L_0077d065;
L_0077d056:; BB(0x0077d056);
    /* 0077d056: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d058: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d05a: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x77d060u); call_ind(t); }
    /* 0077d060: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d063: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d064: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d065:; BB(0x0077d065);
    /* 0077d065: push 0x9795d4 */ { u32 v = 0x9795d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d06a: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d06f: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d074u); f_00858c4d();
    /* 0077d074: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d079: jne 0x77d08a */ if (!fZ) goto L_0077d08a;
L_0077d07b:; BB(0x0077d07b);
    /* 0077d07b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d07d: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d07f: call dword ptr [eax + 0x90] */ { u32 t = R32((u32)(r_eax+0x90u)); r_esp -= 4; W32(r_esp, 0x77d085u); call_ind(t); }
    /* 0077d085: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d088: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d089: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d08a:; BB(0x0077d08a);
    /* 0077d08a: push 0x9795dc */ { u32 v = 0x9795dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d08f: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d094: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d099u); f_00858c4d();
    /* 0077d099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d09c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d09e: jne 0x77d0af */ if (!fZ) goto L_0077d0af;
L_0077d0a0:; BB(0x0077d0a0);
    /* 0077d0a0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d0a2: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d0a4: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x77d0aau); call_ind(t); }
    /* 0077d0aa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d0ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d0ae: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d0af:; BB(0x0077d0af);
    /* 0077d0af: push 0x9795e0 */ { u32 v = 0x9795e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d0b4: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d0b9: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d0beu); f_00858c4d();
    /* 0077d0be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d0c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d0c3: jne 0x77d0d4 */ if (!fZ) goto L_0077d0d4;
L_0077d0c5:; BB(0x0077d0c5);
    /* 0077d0c5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d0c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d0c9: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x77d0cfu); call_ind(t); }
    /* 0077d0cf: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d0d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d0d3: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d0d4:; BB(0x0077d0d4);
    /* 0077d0d4: push 0x9795e4 */ { u32 v = 0x9795e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d0d9: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d0de: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d0e3u); f_00858c4d();
    /* 0077d0e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d0e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d0e8: jne 0x77d0f9 */ if (!fZ) goto L_0077d0f9;
L_0077d0ea:; BB(0x0077d0ea);
    /* 0077d0ea: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d0ec: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d0ee: call dword ptr [eax + 0xd8] */ { u32 t = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, 0x77d0f4u); call_ind(t); }
    /* 0077d0f4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d0f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d0f8: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d0f9:; BB(0x0077d0f9);
    /* 0077d0f9: push 0x9795e8 */ { u32 v = 0x9795e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d0fe: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d103: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d108u); f_00858c4d();
    /* 0077d108: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d10b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d10d: jne 0x77d11e */ if (!fZ) goto L_0077d11e;
L_0077d10f:; BB(0x0077d10f);
    /* 0077d10f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d111: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d113: call dword ptr [eax + 0xdc] */ { u32 t = R32((u32)(r_eax+0xdcu)); r_esp -= 4; W32(r_esp, 0x77d119u); call_ind(t); }
    /* 0077d119: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d11c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d11d: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d11e:; BB(0x0077d11e);
    /* 0077d11e: push 0x9795ec */ { u32 v = 0x9795ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d123: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d128: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d12du); f_00858c4d();
    /* 0077d12d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d130: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d132: jne 0x77d143 */ if (!fZ) goto L_0077d143;
L_0077d134:; BB(0x0077d134);
    /* 0077d134: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d136: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d138: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x77d13eu); call_ind(t); }
    /* 0077d13e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d141: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d142: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d143:; BB(0x0077d143);
    /* 0077d143: push 0x9795f0 */ { u32 v = 0x9795f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d148: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d14d: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d152u); f_00858c4d();
    /* 0077d152: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d155: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d157: jne 0x77d168 */ if (!fZ) goto L_0077d168;
L_0077d159:; BB(0x0077d159);
    /* 0077d159: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d15b: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d15d: call dword ptr [eax + 0xe0] */ { u32 t = R32((u32)(r_eax+0xe0u)); r_esp -= 4; W32(r_esp, 0x77d163u); call_ind(t); }
    /* 0077d163: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d166: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d167: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d168:; BB(0x0077d168);
    /* 0077d168: push 0x9795f4 */ { u32 v = 0x9795f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d16d: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d172: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d177u); f_00858c4d();
    /* 0077d177: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d17a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d17c: jne 0x77d18d */ if (!fZ) goto L_0077d18d;
L_0077d17e:; BB(0x0077d17e);
    /* 0077d17e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d180: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d182: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x77d188u); call_ind(t); }
    /* 0077d188: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d18b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d18c: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d18d:; BB(0x0077d18d);
    /* 0077d18d: push 0x9795f8 */ { u32 v = 0x9795f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d192: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d197: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d19cu); f_00858c4d();
    /* 0077d19c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d19f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d1a1: jne 0x77d1b2 */ if (!fZ) goto L_0077d1b2;
L_0077d1a3:; BB(0x0077d1a3);
    /* 0077d1a3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d1a5: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d1a7: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x77d1adu); call_ind(t); }
    /* 0077d1ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d1b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d1b1: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d1b2:; BB(0x0077d1b2);
    /* 0077d1b2: push 0x9795fc */ { u32 v = 0x9795fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d1b7: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d1bc: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d1c1u); f_00858c4d();
    /* 0077d1c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d1c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d1c6: jne 0x77d1d7 */ if (!fZ) goto L_0077d1d7;
L_0077d1c8:; BB(0x0077d1c8);
    /* 0077d1c8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d1ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d1cc: call dword ptr [eax + 0xc0] */ { u32 t = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, 0x77d1d2u); call_ind(t); }
    /* 0077d1d2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d1d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d1d6: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d1d7:; BB(0x0077d1d7);
    /* 0077d1d7: push 0x979600 */ { u32 v = 0x979600u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d1dc: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d1e1: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d1e6u); f_00858c4d();
    /* 0077d1e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d1e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d1eb: jne 0x77d1fc */ if (!fZ) goto L_0077d1fc;
L_0077d1ed:; BB(0x0077d1ed);
    /* 0077d1ed: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d1ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d1f1: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x77d1f7u); call_ind(t); }
    /* 0077d1f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d1fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d1fb: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d1fc:; BB(0x0077d1fc);
    /* 0077d1fc: push 0x979604 */ { u32 v = 0x979604u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d201: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d206: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d20bu); f_00858c4d();
    /* 0077d20b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d20e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d210: jne 0x77d221 */ if (!fZ) goto L_0077d221;
L_0077d212:; BB(0x0077d212);
    /* 0077d212: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d214: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d216: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x77d21cu); call_ind(t); }
    /* 0077d21c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d21f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d220: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d221:; BB(0x0077d221);
    /* 0077d221: push 0x979608 */ { u32 v = 0x979608u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d226: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d22b: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d230u); f_00858c4d();
    /* 0077d230: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d235: jne 0x77d243 */ if (!fZ) goto L_0077d243;
L_0077d237:; BB(0x0077d237);
    /* 0077d237: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d239: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d23b: call dword ptr [eax + 0x64] */ { u32 t = R32((u32)(r_eax+0x64u)); r_esp -= 4; W32(r_esp, 0x77d23eu); call_ind(t); }
    /* 0077d23e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d241: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d242: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d243:; BB(0x0077d243);
    /* 0077d243: push 0x97960c */ { u32 v = 0x97960cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d248: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d24d: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d252u); f_00858c4d();
    /* 0077d252: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d255: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d257: jne 0x77d268 */ if (!fZ) goto L_0077d268;
L_0077d259:; BB(0x0077d259);
    /* 0077d259: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d25b: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d25d: call dword ptr [eax + 0xb8] */ { u32 t = R32((u32)(r_eax+0xb8u)); r_esp -= 4; W32(r_esp, 0x77d263u); call_ind(t); }
    /* 0077d263: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d266: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d267: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d268:; BB(0x0077d268);
    /* 0077d268: push 0x979610 */ { u32 v = 0x979610u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d26d: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d272: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d277u); f_00858c4d();
    /* 0077d277: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d27a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d27c: jne 0x77d28d */ if (!fZ) goto L_0077d28d;
L_0077d27e:; BB(0x0077d27e);
    /* 0077d27e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d280: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d282: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x77d288u); call_ind(t); }
    /* 0077d288: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d28b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d28c: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d28d:; BB(0x0077d28d);
    /* 0077d28d: push 0x979614 */ { u32 v = 0x979614u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d292: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d297: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d29cu); f_00858c4d();
    /* 0077d29c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d29f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d2a1: jne 0x77d2b2 */ if (!fZ) goto L_0077d2b2;
L_0077d2a3:; BB(0x0077d2a3);
    /* 0077d2a3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d2a5: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d2a7: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x77d2adu); call_ind(t); }
    /* 0077d2ad: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d2b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d2b1: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d2b2:; BB(0x0077d2b2);
    /* 0077d2b2: push 0x979618 */ { u32 v = 0x979618u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d2b7: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d2bc: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d2c1u); f_00858c4d();
    /* 0077d2c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d2c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d2c6: jne 0x77d2d7 */ if (!fZ) goto L_0077d2d7;
L_0077d2c8:; BB(0x0077d2c8);
    /* 0077d2c8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d2ca: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d2cc: call dword ptr [eax + 0xbc] */ { u32 t = R32((u32)(r_eax+0xbcu)); r_esp -= 4; W32(r_esp, 0x77d2d2u); call_ind(t); }
    /* 0077d2d2: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d2d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d2d6: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d2d7:; BB(0x0077d2d7);
    /* 0077d2d7: push 0x97961c */ { u32 v = 0x97961cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d2dc: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d2e1: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d2e6u); f_00858c4d();
    /* 0077d2e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d2e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d2eb: jne 0x77d2fc */ if (!fZ) goto L_0077d2fc;
L_0077d2ed:; BB(0x0077d2ed);
    /* 0077d2ed: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d2ef: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d2f1: call dword ptr [eax + 0xc4] */ { u32 t = R32((u32)(r_eax+0xc4u)); r_esp -= 4; W32(r_esp, 0x77d2f7u); call_ind(t); }
    /* 0077d2f7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d2fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d2fb: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d2fc:; BB(0x0077d2fc);
    /* 0077d2fc: push 0x979620 */ { u32 v = 0x979620u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d301: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d306: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d30bu); f_00858c4d();
    /* 0077d30b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d30e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d310: jne 0x77d321 */ if (!fZ) goto L_0077d321;
L_0077d312:; BB(0x0077d312);
    /* 0077d312: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d314: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d316: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x77d31cu); call_ind(t); }
    /* 0077d31c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d31f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d320: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d321:; BB(0x0077d321);
    /* 0077d321: push 0x979624 */ { u32 v = 0x979624u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d326: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d32b: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d330u); f_00858c4d();
    /* 0077d330: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d335: jne 0x77d346 */ if (!fZ) goto L_0077d346;
L_0077d337:; BB(0x0077d337);
    /* 0077d337: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d339: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d33b: call dword ptr [eax + 0xd4] */ { u32 t = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, 0x77d341u); call_ind(t); }
    /* 0077d341: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d344: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d345: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d346:; BB(0x0077d346);
    /* 0077d346: push 0x979628 */ { u32 v = 0x979628u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d34b: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d350: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d355u); f_00858c4d();
    /* 0077d355: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d358: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d35a: jne 0x77d36b */ if (!fZ) goto L_0077d36b;
L_0077d35c:; BB(0x0077d35c);
    /* 0077d35c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d35e: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d360: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x77d366u); call_ind(t); }
    /* 0077d366: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d369: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d36a: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d36b:; BB(0x0077d36b);
    /* 0077d36b: push 0x97962c */ { u32 v = 0x97962cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d370: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d375: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d37au); f_00858c4d();
    /* 0077d37a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d37f: jne 0x77d390 */ if (!fZ) goto L_0077d390;
L_0077d381:; BB(0x0077d381);
    /* 0077d381: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d383: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d385: call dword ptr [eax + 0xcc] */ { u32 t = R32((u32)(r_eax+0xccu)); r_esp -= 4; W32(r_esp, 0x77d38bu); call_ind(t); }
    /* 0077d38b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d38e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d38f: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d390:; BB(0x0077d390);
    /* 0077d390: push 0x979630 */ { u32 v = 0x979630u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d395: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d39a: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d39fu); f_00858c4d();
    /* 0077d39f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d3a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d3a4: jne 0x77d3b5 */ if (!fZ) goto L_0077d3b5;
L_0077d3a6:; BB(0x0077d3a6);
    /* 0077d3a6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d3a8: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d3aa: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x77d3b0u); call_ind(t); }
    /* 0077d3b0: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d3b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d3b4: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d3b5:; BB(0x0077d3b5);
    /* 0077d3b5: push 0x979634 */ { u32 v = 0x979634u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d3ba: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d3bf: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d3c4u); f_00858c4d();
    /* 0077d3c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d3c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d3c9: jne 0x77d3da */ if (!fZ) goto L_0077d3da;
L_0077d3cb:; BB(0x0077d3cb);
    /* 0077d3cb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d3cd: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d3cf: call dword ptr [eax + 0xe8] */ { u32 t = R32((u32)(r_eax+0xe8u)); r_esp -= 4; W32(r_esp, 0x77d3d5u); call_ind(t); }
    /* 0077d3d5: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d3d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d3d9: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d3da:; BB(0x0077d3da);
    /* 0077d3da: push 0x979638 */ { u32 v = 0x979638u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d3df: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d3e4: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d3e9u); f_00858c4d();
    /* 0077d3e9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d3ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d3ee: jne 0x77d3ff */ if (!fZ) goto L_0077d3ff;
L_0077d3f0:; BB(0x0077d3f0);
    /* 0077d3f0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d3f2: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d3f4: call dword ptr [eax + 0xf8] */ { u32 t = R32((u32)(r_eax+0xf8u)); r_esp -= 4; W32(r_esp, 0x77d3fau); call_ind(t); }
    /* 0077d3fa: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d3fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d3fe: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d3ff:; BB(0x0077d3ff);
    /* 0077d3ff: push 0x97963c */ { u32 v = 0x97963cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d404: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d409: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d40eu); f_00858c4d();
    /* 0077d40e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d413: jne 0x77d424 */ if (!fZ) goto L_0077d424;
L_0077d415:; BB(0x0077d415);
    /* 0077d415: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d417: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d419: call dword ptr [eax + 0x110] */ { u32 t = R32((u32)(r_eax+0x110u)); r_esp -= 4; W32(r_esp, 0x77d41fu); call_ind(t); }
    /* 0077d41f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d422: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d423: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d424:; BB(0x0077d424);
    /* 0077d424: push 0x979640 */ { u32 v = 0x979640u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d429: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d42e: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d433u); f_00858c4d();
    /* 0077d433: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d436: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d438: jne 0x77d449 */ if (!fZ) goto L_0077d449;
L_0077d43a:; BB(0x0077d43a);
    /* 0077d43a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d43c: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d43e: call dword ptr [eax + 0x114] */ { u32 t = R32((u32)(r_eax+0x114u)); r_esp -= 4; W32(r_esp, 0x77d444u); call_ind(t); }
    /* 0077d444: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d447: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d448: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d449:; BB(0x0077d449);
    /* 0077d449: push 0x979644 */ { u32 v = 0x979644u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d44e: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d453: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d458u); f_00858c4d();
    /* 0077d458: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d45b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d45d: jne 0x77d46e */ if (!fZ) goto L_0077d46e;
L_0077d45f:; BB(0x0077d45f);
    /* 0077d45f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d461: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d463: call dword ptr [eax + 0x118] */ { u32 t = R32((u32)(r_eax+0x118u)); r_esp -= 4; W32(r_esp, 0x77d469u); call_ind(t); }
    /* 0077d469: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d46c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d46d: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d46e:; BB(0x0077d46e);
    /* 0077d46e: push 0x979648 */ { u32 v = 0x979648u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d473: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d478: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d47du); f_00858c4d();
    /* 0077d47d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d482: jne 0x77d493 */ if (!fZ) goto L_0077d493;
L_0077d484:; BB(0x0077d484);
    /* 0077d484: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d486: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d488: call dword ptr [eax + 0x11c] */ { u32 t = R32((u32)(r_eax+0x11cu)); r_esp -= 4; W32(r_esp, 0x77d48eu); call_ind(t); }
    /* 0077d48e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d491: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d492: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d493:; BB(0x0077d493);
    /* 0077d493: push 0x97964c */ { u32 v = 0x97964cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d498: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d49d: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d4a2u); f_00858c4d();
    /* 0077d4a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d4a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d4a7: jne 0x77d4b8 */ if (!fZ) goto L_0077d4b8;
L_0077d4a9:; BB(0x0077d4a9);
    /* 0077d4a9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d4ab: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d4ad: call dword ptr [eax + 0x94] */ { u32 t = R32((u32)(r_eax+0x94u)); r_esp -= 4; W32(r_esp, 0x77d4b3u); call_ind(t); }
    /* 0077d4b3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d4b6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d4b7: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d4b8:; BB(0x0077d4b8);
    /* 0077d4b8: push 0x979650 */ { u32 v = 0x979650u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d4bd: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d4c2: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d4c7u); f_00858c4d();
    /* 0077d4c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d4ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d4cc: jne 0x77d4dd */ if (!fZ) goto L_0077d4dd;
L_0077d4ce:; BB(0x0077d4ce);
    /* 0077d4ce: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d4d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d4d2: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x77d4d8u); call_ind(t); }
    /* 0077d4d8: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d4db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d4dc: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d4dd:; BB(0x0077d4dd);
    /* 0077d4dd: push 0x979654 */ { u32 v = 0x979654u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d4e2: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d4e7: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d4ecu); f_00858c4d();
    /* 0077d4ec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d4ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d4f1: jne 0x77d502 */ if (!fZ) goto L_0077d502;
L_0077d4f3:; BB(0x0077d4f3);
    /* 0077d4f3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d4f5: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d4f7: call dword ptr [eax + 0x9c] */ { u32 t = R32((u32)(r_eax+0x9cu)); r_esp -= 4; W32(r_esp, 0x77d4fdu); call_ind(t); }
    /* 0077d4fd: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d500: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d501: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d502:; BB(0x0077d502);
    /* 0077d502: push 0x979658 */ { u32 v = 0x979658u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d507: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d50c: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d511u); f_00858c4d();
    /* 0077d511: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d514: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d516: jne 0x77d527 */ if (!fZ) goto L_0077d527;
L_0077d518:; BB(0x0077d518);
    /* 0077d518: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d51a: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d51c: call dword ptr [eax + 0xa0] */ { u32 t = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, 0x77d522u); call_ind(t); }
    /* 0077d522: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d525: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d526: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d527:; BB(0x0077d527);
    /* 0077d527: push 0x97965c */ { u32 v = 0x97965cu; r_esp -= 4; W32(r_esp, v); }
    /* 0077d52c: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d531: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d536u); f_00858c4d();
    /* 0077d536: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077d53b: jne 0x77d54c */ if (!fZ) goto L_0077d54c;
L_0077d53d:; BB(0x0077d53d);
    /* 0077d53d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d53f: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d541: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x77d547u); call_ind(t); }
    /* 0077d547: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d54a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d54b: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d54c:; BB(0x0077d54c);
    /* 0077d54c: push 0x979660 */ { u32 v = 0x979660u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d551: push 0xa9b220 */ { u32 v = 0xa9b220u; r_esp -= 4; W32(r_esp, v); }
    /* 0077d556: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x77d55bu); f_00858c4d();
    /* 0077d55b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077d55e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077d560: jne 0x77d571 */ if (!fZ) goto L_0077d571;
L_0077d562:; BB(0x0077d562);
    /* 0077d562: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077d564: mov ecx, esi */ r_ecx = r_esi;
    /* 0077d566: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x77d56cu); call_ind(t); }
    /* 0077d56c: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0077d56f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d570: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
L_0077d571:; BB(0x0077d571);
    /* 0077d571: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0077d576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0077d577: ret  */ FN_RET(0x0077cec0); r_esp += 4; return;
}

