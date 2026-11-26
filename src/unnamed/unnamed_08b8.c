#include "protos.h"

void f_008b8102(void) /* sub_8B8102 */
{
    FN_ENTER(0x008b8102);
    /* 008b8102: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8103: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8105: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8106: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8107: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8109: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b810a: mov ebx, 0x400 */ r_ebx = 0x400u;
    /* 008b810f: mov edi, eax */ r_edi = r_eax;
    /* 008b8111: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b8114: mov esi, dword ptr [edi + 0x19c] */ r_esi = R32((u32)(r_edi+0x19cu));
    /* 008b811a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b811b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b811d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b811e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b8120u); call_ind(t); }
    /* 008b8120: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8121: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008b8124: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b8127: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8129: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b812a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b812cu); call_ind(t); }
    /* 008b812c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b812d: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008b8130: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b8133: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8135: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8136: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b8138u); call_ind(t); }
    /* 008b8138: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8139: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008b813c: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b813f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8141: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8142: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b8144u); call_ind(t); }
    /* 008b8144: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b8147: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 008b814a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b814c: mov edx, 0x5b6900 */ r_edx = 0x5b6900u;
    /* 008b8151: mov dword ptr [ebp - 8], 0xff1daf00 */ W32((u32)(r_ebp+0xfffffff8u), 0xff1daf00u);
    /* 008b8158: mov dword ptr [ebp - 4], 0xff4d0b80 */ W32((u32)(r_ebp+0xfffffffcu), 0xff4d0b80u);
    /* 008b815f: mov ecx, 0x2c8d00 */ r_ecx = 0x2c8d00u;
L_008b8164:; BB(0x008b8164);
    /* 008b8164: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 008b8167: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b816a: add dword ptr [ebp - 4], 0x166e9 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x166e9u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8171: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b8174: mov dword ptr [eax + ebx], edi */ W32((u32)(r_eax+r_ebx), r_edi);
    /* 008b8177: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b817a: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 008b817d: add dword ptr [ebp - 8], 0x1c5a2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x1c5a2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8184: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b8187: mov dword ptr [eax + ebx], edi */ W32((u32)(r_eax+r_ebx), r_edi);
    /* 008b818a: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 008b818d: mov dword ptr [eax + edi], edx */ W32((u32)(r_eax+r_edi), r_edx);
    /* 008b8190: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 008b8193: mov dword ptr [eax + edi], ecx */ W32((u32)(r_eax+r_edi), r_ecx);
    /* 008b8196: sub ecx, 0x581a */ {  u32 a = r_ecx; u32 b = 0x581au; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b819c: sub edx, 0xb6d2 */ {  u32 a = r_edx; u32 b = 0xb6d2u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b81a2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b81a5: cmp ecx, 0xffd4cb1a */ {  u32 a = r_ecx; u32 b = 0xffd4cb1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b81ab: jge 0x8b8164 */ if ((fS==fO)) goto L_008b8164;
L_008b81ad:; BB(0x008b81ad);
    /* 008b81ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b81ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b81af: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b81b0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b81b1: ret  */ FN_RET(0x008b8102); r_esp += 4; return;
}

void f_008b81b2(void) /* sub_8B81B2 */
{
    FN_ENTER(0x008b81b2);
    /* 008b81b2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b81b6: mov eax, dword ptr [ecx + 0x19c] */ r_eax = R32((u32)(r_ecx+0x19cu));
    /* 008b81bc: and byte ptr [eax + 0x24], 0 */ { u32 ad = (u32)(r_eax+0x24u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b81c0: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 008b81c3: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 008b81c6: ret  */ FN_RET(0x008b81b2); r_esp += 4; return;
}

void f_008b81c7(void) /* sub_8B81C7 */
{
    FN_ENTER(0x008b81c7);
    /* 008b81c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b81c8: mov ebp, esp */ r_ebp = r_esp;
    /* 008b81ca: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b81cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b81cc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b81cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b81d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b81d1: mov esi, dword ptr [ecx + 0x19c] */ r_esi = R32((u32)(r_ecx+0x19cu));
    /* 008b81d7: cmp byte ptr [esi + 0x24], 0 */ {  u32 a = R8((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b81db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b81dc: je 0x8b8207 */ if (fZ) goto L_008b8207;
L_008b81de:; BB(0x008b81de);
    /* 008b81de: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b81e1: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 008b81e4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008b81e6: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008b81e9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b81eb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b81ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b81ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b81ef: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008b81f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b81f3: lea eax, [esi + 0x20] */ r_eax = (u32)(r_esi+0x20u);
    /* 008b81f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b81f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b81f9: call 0x8a8d09 */ r_esp -= 4; W32(r_esp, 0x8b81feu); f_008a8d09();
    /* 008b81fe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b8201: and byte ptr [esi + 0x24], 0 */ { u32 ad = (u32)(r_esi+0x24u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b8205: jmp 0x8b8258 */ goto L_008b8258;
L_008b8207:; BB(0x008b8207);
    /* 008b8207: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 008b820a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008b820c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b820d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b820f: jae 0x8b8213 */ if (!fC) goto L_008b8213;
L_008b8211:; BB(0x008b8211);
    /* 008b8211: mov edi, eax */ r_edi = r_eax;
L_008b8213:; BB(0x008b8213);
    /* 008b8213: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 008b8216: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008b8218: sub dword ptr [ebp + 0x20], eax */ { u32 ad = (u32)(r_ebp+0x20u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b821b: cmp edi, dword ptr [ebp + 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b821e: jbe 0x8b8223 */ if ((fC||fZ)) goto L_008b8223;
L_008b8220:; BB(0x008b8220);
    /* 008b8220: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
L_008b8223:; BB(0x008b8223);
    /* 008b8223: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b8226: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b8229: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 008b822c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b822e: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008b8231: jbe 0x8b823b */ if ((fC||fZ)) goto L_008b823b;
L_008b8233:; BB(0x008b8233);
    /* 008b8233: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008b8236: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b8239: jmp 0x8b8245 */ goto L_008b8245;
L_008b823b:; BB(0x008b823b);
    /* 008b823b: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008b823e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b8241: mov byte ptr [esi + 0x24], 1 */ W8((u32)(r_esi+0x24u), 0x1u);
L_008b8245:; BB(0x008b8245);
    /* 008b8245: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 008b8248: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b8249: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b824c: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b824e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b8251: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8252: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8b8255u); call_ind(t); }
    /* 008b8255: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008b8258:; BB(0x008b8258);
    /* 008b8258: add dword ptr [ebx], edi */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b825a: sub dword ptr [esi + 0x2c], edi */ { u32 ad = (u32)(r_esi+0x2cu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b825d: cmp byte ptr [esi + 0x24], 0 */ {  u32 a = R8((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b8261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b8262: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8263: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b8264: jne 0x8b826b */ if (!fZ) goto L_008b826b;
L_008b8266:; BB(0x008b8266);
    /* 008b8266: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b8269: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008b826b:; BB(0x008b826b);
    /* 008b826b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b826c: ret  */ FN_RET(0x008b81c7); r_esp += 4; return;
}

void f_008b826d(void) /* sub_8B826D */
{
    FN_ENTER(0x008b826d);
    /* 008b826d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b826e: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8270: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8273: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 008b8279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b827a: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008b827d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008b827f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8280: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008b8283: lea edx, [edi + edx*4] */ r_edx = (u32)(r_edi+r_edx*4);
    /* 008b8286: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008b8289: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b828a: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 008b828c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b828f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b8290: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8b8293u); call_ind(t); }
    /* 008b8293: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 008b8296: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8298: inc dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008b829a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b829b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b829c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b829d: ret  */ FN_RET(0x008b826d); r_esp += 4; return;
}

void f_008b829e(void) /* sub_8B829E */
{
    FN_ENTER(0x008b829e);
    /* 008b829e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b829f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b82a1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b82a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b82a5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b82a8: mov eax, dword ptr [ebx + 0x19c] */ r_eax = R32((u32)(r_ebx+0x19cu));
    /* 008b82ae: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008b82b1: mov ecx, dword ptr [ebx + 0x11c] */ r_ecx = R32((u32)(r_ebx+0x11cu));
    /* 008b82b7: mov ebx, dword ptr [ebx + 0x5c] */ r_ebx = R32((u32)(r_ebx+0x5cu));
    /* 008b82ba: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008b82bd: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 008b82c0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b82c3: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008b82c6: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 008b82c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b82ca: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b82cd: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b82d0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b82d3: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b82d6: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fZ = (r == 0); } }
    /* 008b82d8: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b82db: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008b82dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b82de: mov edi, dword ptr [eax + edx] */ r_edi = R32((u32)(r_eax+r_edx));
    /* 008b82e1: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008b82e4: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 008b82e7: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 008b82ea: mov esi, dword ptr [eax + esi] */ r_esi = R32((u32)(r_eax+r_esi));
    /* 008b82ed: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b82f0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b82f2: je 0x8b8390 */ if (fZ) goto L_008b8390;
L_008b82f8:; BB(0x008b82f8);
    /* 008b82f8: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
L_008b82fb:; BB(0x008b82fb);
    /* 008b82fb: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008b82fe: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b82ff: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b8302: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 008b8305: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8306: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b8309: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008b830c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b830f: mov esi, dword ptr [edx + esi] */ r_esi = R32((u32)(r_edx+r_esi));
    /* 008b8312: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 008b8315: mov esi, ebx */ r_esi = r_ebx;
    /* 008b8317: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b831a: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b831d: mov dword ptr [ebp + 0x10], esi */ W32((u32)(r_ebp+0x10u), r_esi);
    /* 008b8320: mov esi, dword ptr [esi + ebx] */ r_esi = R32((u32)(r_esi+r_ebx));
    /* 008b8323: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8326: add esi, dword ptr [edx + ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8329: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b832c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b832f: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b8332: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8335: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008b8338: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008b833b: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b833d: mov bl, byte ptr [ebx + ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_ecx))) & 0xffu);
    /* 008b8340: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008b8342: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b8345: lea ebx, [edx + esi] */ r_ebx = (u32)(r_edx+r_esi);
    /* 008b8348: mov bl, byte ptr [ebx + ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_ecx))) & 0xffu);
    /* 008b834b: mov byte ptr [eax + 1], bl */ W8((u32)(r_eax+0x1u), (u8)r_ebx);
    /* 008b834e: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008b8351: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8353: mov dl, byte ptr [edx + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 008b8356: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8359: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 008b835c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b835d: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008b8360: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8362: mov bl, byte ptr [ebx + ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_ecx))) & 0xffu);
    /* 008b8365: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8368: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b836a: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008b836c: mov bl, byte ptr [esi + ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_ecx))) & 0xffu);
    /* 008b836f: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008b8372: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8374: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8377: mov byte ptr [eax + 1], bl */ W8((u32)(r_eax+0x1u), (u8)r_ebx);
    /* 008b837a: mov dl, byte ptr [edx + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 008b837d: mov byte ptr [eax + 2], dl */ W8((u32)(r_eax+0x2u), (u8)r_edx);
    /* 008b8380: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8383: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8384: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8387: dec dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b838a: jne 0x8b82fb */ if (!fZ) goto L_008b82fb;
L_008b8390:; BB(0x008b8390);
    /* 008b8390: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b8393: test byte ptr [ebx + 0x5c], 1 */ {  u32 a = R8((u32)(r_ebx+0x5cu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b8397: je 0x8b83ef */ if (fZ) goto L_008b83ef;
L_008b8399:; BB(0x008b8399);
    /* 008b8399: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b839c: movzx esi, byte ptr [esi] */ r_esi = (u32)R8((u32)(r_esi));
    /* 008b839f: movzx edi, byte ptr [edi] */ r_edi = (u32)R8((u32)(r_edi));
    /* 008b83a2: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b83a5: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008b83a8: mov ebx, esi */ r_ebx = r_esi;
    /* 008b83aa: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b83ad: mov esi, dword ptr [edx + esi] */ r_esi = R32((u32)(r_edx+r_esi));
    /* 008b83b0: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b83b3: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b83b6: add esi, dword ptr [ebx + edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+r_edx)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b83b9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b83bc: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 008b83bf: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b83c2: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b83c5: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b83c8: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008b83cb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b83ce: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b83d1: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b83d3: mov dl, byte ptr [edx + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 008b83d6: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008b83d8: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b83db: lea edx, [edi + esi] */ r_edx = (u32)(r_edi+r_esi);
    /* 008b83de: mov dl, byte ptr [edx + ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ecx))) & 0xffu);
    /* 008b83e1: mov byte ptr [eax + 1], dl */ W8((u32)(r_eax+0x1u), (u8)r_edx);
    /* 008b83e4: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b83e7: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b83e9: mov cl, byte ptr [edi + ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+r_ecx))) & 0xffu);
    /* 008b83ec: mov byte ptr [eax + 2], cl */ W8((u32)(r_eax+0x2u), (u8)r_ecx);
L_008b83ef:; BB(0x008b83ef);
    /* 008b83ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b83f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b83f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b83f2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b83f3: ret  */ FN_RET(0x008b829e); r_esp += 4; return;
}

void f_008b83f4(void) /* sub_8B83F4 */
{
    FN_ENTER(0x008b83f4);
    /* 008b83f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b83f5: mov ebp, esp */ r_ebp = r_esp;
    /* 008b83f7: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b83fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b83fb: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b83fe: mov ecx, dword ptr [ebx + 0x19c] */ r_ecx = R32((u32)(r_ebx+0x19cu));
    /* 008b8404: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 008b8407: mov eax, dword ptr [ebx + 0x11c] */ r_eax = R32((u32)(r_ebx+0x11cu));
    /* 008b840d: mov ebx, dword ptr [ebx + 0x5c] */ r_ebx = R32((u32)(r_ebx+0x5cu));
    /* 008b8410: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b8413: mov edx, dword ptr [ecx + 0x14] */ r_edx = R32((u32)(r_ecx+0x14u));
    /* 008b8416: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008b8419: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 008b841c: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 008b841f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8420: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008b8423: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008b8426: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b8429: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b842c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b842e: lea edx, [edx + esi*8] */ r_edx = (u32)(r_edx+r_esi*8);
    /* 008b8431: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8432: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008b8434: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 008b8437: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b843a: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r; fZ = (r == 0); } }
    /* 008b843c: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008b843f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008b8442: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 008b8445: mov edx, dword ptr [esi + edx] */ r_edx = R32((u32)(r_esi+r_edx));
    /* 008b8448: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008b844b: mov edi, dword ptr [esi + ecx] */ r_edi = R32((u32)(r_esi+r_ecx));
    /* 008b844e: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008b8451: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b8453: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 008b8456: je 0x8b8552 */ if (fZ) goto L_008b8552;
L_008b845c:; BB(0x008b845c);
    /* 008b845c: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_008b845f:; BB(0x008b845f);
    /* 008b845f: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008b8462: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8463: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b8466: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008b8469: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b846c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b846d: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b8470: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8473: mov edi, dword ptr [edx + edi] */ r_edi = R32((u32)(r_edx+r_edi));
    /* 008b8476: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008b8479: mov edi, ebx */ r_edi = r_ebx;
    /* 008b847b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b847e: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b8481: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b8484: mov edi, dword ptr [edi + ebx] */ r_edi = R32((u32)(r_edi+r_ebx));
    /* 008b8487: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b848a: add edi, dword ptr [edx + ebx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b848d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8490: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b8493: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b8496: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b8499: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b849c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b849f: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b84a2: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b84a4: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b84a7: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b84a9: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b84ac: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b84af: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 008b84b2: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b84b5: mov byte ptr [ecx + 1], bl */ W8((u32)(r_ecx+0x1u), (u8)r_ebx);
    /* 008b84b8: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b84bb: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b84bd: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b84c0: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 008b84c3: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b84c6: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b84c9: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b84cc: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b84ce: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b84d1: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b84d4: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b84d6: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 008b84d9: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b84dc: mov byte ptr [ecx + 1], bl */ W8((u32)(r_ecx+0x1u), (u8)r_ebx);
    /* 008b84df: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b84e2: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b84e4: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b84e7: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b84ea: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 008b84ed: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b84f0: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b84f3: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b84f6: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b84f8: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b84fb: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008b84fd: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 008b8500: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b8503: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 008b8506: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8509: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b850b: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b850e: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b8511: mov byte ptr [esi + 2], dl */ W8((u32)(r_esi+0x2u), (u8)r_edx);
    /* 008b8514: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8517: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b851a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b851d: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b8520: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8522: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b8525: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8528: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b852b: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b852d: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008b852f: mov bl, byte ptr [edi + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008b8532: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8535: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8537: mov byte ptr [esi + 1], bl */ W8((u32)(r_esi+0x1u), (u8)r_ebx);
    /* 008b853a: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b853d: mov byte ptr [esi + 2], dl */ W8((u32)(r_esi+0x2u), (u8)r_edx);
    /* 008b8540: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8543: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b8546: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8549: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b854c: jne 0x8b845f */ if (!fZ) goto L_008b845f;
L_008b8552:; BB(0x008b8552);
    /* 008b8552: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b8555: test byte ptr [ebx + 0x5c], 1 */ {  u32 a = R8((u32)(r_ebx+0x5cu)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b8559: je 0x8b85d5 */ if (fZ) goto L_008b85d5;
L_008b855b:; BB(0x008b855b);
    /* 008b855b: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008b855e: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008b8561: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8564: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b8567: mov edi, dword ptr [edx + edi] */ r_edi = R32((u32)(r_edx+r_edi));
    /* 008b856a: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008b856d: mov edi, ebx */ r_edi = r_ebx;
    /* 008b856f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b8572: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b8575: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b8578: mov edi, dword ptr [edi + ebx] */ r_edi = R32((u32)(r_edi+r_ebx));
    /* 008b857b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b857e: add edi, dword ptr [edx + ebx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+r_ebx)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8581: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8584: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b8587: mov edx, dword ptr [edx + ebx] */ r_edx = R32((u32)(r_edx+r_ebx));
    /* 008b858a: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b858d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b8590: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b8593: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 008b8596: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8598: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b859b: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b859d: sar edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008b85a0: lea ebx, [edx + edi] */ r_ebx = (u32)(r_edx+r_edi);
    /* 008b85a3: mov bl, byte ptr [ebx + eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008b85a6: mov byte ptr [ecx + 1], bl */ W8((u32)(r_ecx+0x1u), (u8)r_ebx);
    /* 008b85a9: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b85ac: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b85ae: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b85b1: mov byte ptr [ecx + 2], dl */ W8((u32)(r_ecx+0x2u), (u8)r_edx);
    /* 008b85b4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b85b7: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008b85ba: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b85bd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b85bf: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b85c2: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 008b85c4: lea edx, [ecx + edi] */ r_edx = (u32)(r_ecx+r_edi);
    /* 008b85c7: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008b85ca: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b85cc: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 008b85cf: mov al, byte ptr [ecx + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008b85d2: mov byte ptr [esi + 2], al */ W8((u32)(r_esi+0x2u), (u8)r_eax);
L_008b85d5:; BB(0x008b85d5);
    /* 008b85d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b85d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b85d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b85d8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b85d9: ret  */ FN_RET(0x008b83f4); r_esp += 4; return;
}

void f_008b85da(void) /* sub_8B85DA */
{
    FN_ENTER(0x008b85da);
    /* 008b85da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b85db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b85dc: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008b85e0: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b85e3: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 008b85e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b85e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b85e8: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b85eau); call_ind(t); }
    /* 008b85ea: mov esi, eax */ r_esi = r_eax;
    /* 008b85ec: mov dword ptr [edi + 0x19c], esi */ W32((u32)(r_edi+0x19cu), r_esi);
    /* 008b85f2: and byte ptr [esi + 8], 0 */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b85f6: mov dword ptr [esi], 0x8b81b2 */ W32((u32)(r_esi), 0x8b81b2u);
    /* 008b85fc: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 008b85ff: imul eax, dword ptr [edi + 0x5c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi+0x5cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8603: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b8606: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 008b8609: cmp dword ptr [edi + 0x110], 2 */ {  u32 a = R32((u32)(r_edi+0x110u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8610: jne 0x8b8634 */ if (!fZ) goto L_008b8634;
L_008b8612:; BB(0x008b8612);
    /* 008b8612: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b8615: mov dword ptr [esi + 4], 0x8b81c7 */ W32((u32)(r_esi+0x4u), 0x8b81c7u);
    /* 008b861c: mov dword ptr [esi + 0xc], 0x8b83f4 */ W32((u32)(r_esi+0xcu), 0x8b83f4u);
    /* 008b8623: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b8626: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8628: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8629: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b862cu); call_ind(t); }
    /* 008b862c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b862f: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 008b8632: jmp 0x8b8646 */ goto L_008b8646;
L_008b8634:; BB(0x008b8634);
    /* 008b8634: and dword ptr [esi + 0x20], 0 */ { u32 ad = (u32)(r_esi+0x20u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8638: mov dword ptr [esi + 4], 0x8b826d */ W32((u32)(r_esi+0x4u), 0x8b826du);
    /* 008b863f: mov dword ptr [esi + 0xc], 0x8b829e */ W32((u32)(r_esi+0xcu), 0x8b829eu);
L_008b8646:; BB(0x008b8646);
    /* 008b8646: mov eax, edi */ r_eax = r_edi;
    /* 008b8648: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b8649: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b864a: jmp 0x8b8102 */ f_008b8102(); return;
}

void f_008b864f(void) /* sub_8B864F */
{
    FN_ENTER(0x008b864f);
    /* 008b864f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8650: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8652: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8655: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008b865b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b865c: mov ebx, dword ptr [eax + 0x5c] */ r_ebx = R32((u32)(r_eax+0x5cu));
    /* 008b865f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8660: mov esi, dword ptr [ecx + 0x18] */ r_esi = R32((u32)(r_ecx+0x18u));
    /* 008b8663: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8664: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b8666: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8669: jle 0x8b86b6 */ if ((fZ||fS!=fO)) goto L_008b86b6;
L_008b866b:; BB(0x008b866b);
    /* 008b866b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b866d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b8670: mov ecx, dword ptr [eax + edi*4] */ r_ecx = R32((u32)(r_eax+r_edi*4));
    /* 008b8673: jbe 0x8b86b0 */ if ((fC||fZ)) goto L_008b86b0;
L_008b8675:; BB(0x008b8675);
    /* 008b8675: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008b8678:; BB(0x008b8678);
    /* 008b8678: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 008b867c: movzx edx, byte ptr [ecx + 2] */ r_edx = (u32)R8((u32)(r_ecx+0x2u));
    /* 008b8680: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008b8683: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008b8686: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b8689: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b868b: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008b868e: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008b8691: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008b8694: lea eax, [edx + eax*2] */ r_eax = (u32)(r_edx+r_eax*2);
    /* 008b8697: inc word ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 008b869a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b869c: mov dx, word ptr [eax] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 008b869f: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fC = 0; }
    /* 008b86a2: ja 0x8b86a8 */ if ((!fC&&!fZ)) goto L_008b86a8;
L_008b86a4:; BB(0x008b86a4);
    /* 008b86a4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b86a5: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_008b86a8:; BB(0x008b86a8);
    /* 008b86a8: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b86ab: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b86ae: jne 0x8b8678 */ if (!fZ) goto L_008b8678;
L_008b86b0:; BB(0x008b86b0);
    /* 008b86b0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b86b1: cmp edi, dword ptr [ebp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b86b4: jl 0x8b866b */ if ((fS!=fO)) goto L_008b866b;
L_008b86b6:; BB(0x008b86b6);
    /* 008b86b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b86b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b86b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b86b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b86ba: ret  */ FN_RET(0x008b864f); r_esp += 4; return;
}

void f_008b86bb(void) /* sub_8B86BB */
{
    FN_ENTER(0x008b86bb);
    /* 008b86bb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b86bc: mov ebp, esp */ r_ebp = r_esp;
    /* 008b86be: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b86c1: mov eax, dword ptr [eax + 0x1a4] */ r_eax = R32((u32)(r_eax+0x1a4u));
    /* 008b86c7: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008b86ca: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 008b86cd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b86cf: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008b86d2: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 008b86d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b86d6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008b86d9: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b86dc: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b86de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b86df: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 008b86e2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008b86e5: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 008b86e8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b86eb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b86ee: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008b86f1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b86f4: jge 0x8b87c1 */ if ((fS==fO)) goto L_008b87c1;
L_008b86fa:; BB(0x008b86fa);
    /* 008b86fa: cmp edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b86fd: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b8700: jg 0x8b874c */ if ((!fZ&&fS==fO)) goto L_008b874c;
L_008b8702:; BB(0x008b8702);
    /* 008b8702: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b8705: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 008b8708: mov eax, edi */ r_eax = r_edi;
    /* 008b870a: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b870d: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8710: lea eax, [edx + eax*2] */ r_eax = (u32)(r_edx+r_eax*2);
L_008b8713:; BB(0x008b8713);
    /* 008b8713: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b8716: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b8719: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b871c: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b871f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b8722: jg 0x8b873e */ if ((!fZ&&fS==fO)) goto L_008b873e;
L_008b8724:; BB(0x008b8724);
    /* 008b8724: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b8727: mov dx, word ptr [edx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 008b872a: add dword ptr [ebp - 0x1c], 2 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b872e: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008b8731: jne 0x8b8754 */ if (!fZ) goto L_008b8754;
L_008b8733:; BB(0x008b8733);
    /* 008b8733: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8736: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8739: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b873c: jle 0x8b8724 */ if ((fZ||fS!=fO)) goto L_008b8724;
L_008b873e:; BB(0x008b873e);
    /* 008b873e: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8741: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8744: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8747: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b874a: jle 0x8b8713 */ if ((fZ||fS!=fO)) goto L_008b8713;
L_008b874c:; BB(0x008b874c);
    /* 008b874c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b874d: cmp ecx, dword ptr [ebp - 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8750: jle 0x8b86fa */ if ((fZ||fS!=fO)) goto L_008b86fa;
L_008b8752:; BB(0x008b8752);
    /* 008b8752: jmp 0x8b8759 */ goto L_008b8759;
L_008b8754:; BB(0x008b8754);
    /* 008b8754: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b8757: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
L_008b8759:; BB(0x008b8759);
    /* 008b8759: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b875c: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b875f: jle 0x8b87c1 */ if ((fZ||fS!=fO)) goto L_008b87c1;
L_008b8761:; BB(0x008b8761);
    /* 008b8761: cmp edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8764: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b8767: jg 0x8b87b3 */ if ((!fZ&&fS==fO)) goto L_008b87b3;
L_008b8769:; BB(0x008b8769);
    /* 008b8769: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b876c: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 008b876f: mov eax, edi */ r_eax = r_edi;
    /* 008b8771: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b8774: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8777: lea eax, [edx + eax*2] */ r_eax = (u32)(r_edx+r_eax*2);
L_008b877a:; BB(0x008b877a);
    /* 008b877a: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b877d: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b8780: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8783: cmp dword ptr [ebp - 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8786: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b8789: jg 0x8b87a5 */ if ((!fZ&&fS==fO)) goto L_008b87a5;
L_008b878b:; BB(0x008b878b);
    /* 008b878b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b878e: mov dx, word ptr [edx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 008b8791: add dword ptr [ebp - 0x1c], 2 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8795: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008b8798: jne 0x8b87bb */ if (!fZ) goto L_008b87bb;
L_008b879a:; BB(0x008b879a);
    /* 008b879a: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b879d: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b87a0: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87a3: jle 0x8b878b */ if ((fZ||fS!=fO)) goto L_008b878b;
L_008b87a5:; BB(0x008b87a5);
    /* 008b87a5: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b87a8: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b87ab: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b87ae: cmp edx, dword ptr [ebp - 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87b1: jle 0x8b877a */ if ((fZ||fS!=fO)) goto L_008b877a;
L_008b87b3:; BB(0x008b87b3);
    /* 008b87b3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b87b4: cmp ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87b7: jge 0x8b8761 */ if ((fS==fO)) goto L_008b8761;
L_008b87b9:; BB(0x008b87b9);
    /* 008b87b9: jmp 0x8b87c1 */ goto L_008b87c1;
L_008b87bb:; BB(0x008b87bb);
    /* 008b87bb: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b87be: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
L_008b87c1:; BB(0x008b87c1);
    /* 008b87c1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b87c4: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87c6: jge 0x8b889a */ if ((fS==fO)) goto L_008b889a;
L_008b87cc:; BB(0x008b87cc);
    /* 008b87cc: mov ecx, edi */ r_ecx = r_edi;
    /* 008b87ce: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b87d1: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b87d4: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b87d7: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
L_008b87d9:; BB(0x008b87d9);
    /* 008b87d9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b87dc: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b87df: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87e1: jg 0x8b8813 */ if ((!fZ&&fS==fO)) goto L_008b8813;
L_008b87e3:; BB(0x008b87e3);
    /* 008b87e3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b87e6: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 008b87e9: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b87ec: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b87ef: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b87f1: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b87f3: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b87f6: jg 0x8b880a */ if ((!fZ&&fS==fO)) goto L_008b880a;
L_008b87f8:; BB(0x008b87f8);
    /* 008b87f8: mov di, word ptr [eax] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 008b87fb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b87fc: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b87fd: test di, di */ {  u32 a = (u16)r_edi; u32 b = (u16)r_edi; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008b8800: jne 0x8b8823 */ if (!fZ) goto L_008b8823;
L_008b8802:; BB(0x008b8802);
    /* 008b8802: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8805: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8808: jle 0x8b87f8 */ if ((fZ||fS!=fO)) goto L_008b87f8;
L_008b880a:; BB(0x008b880a);
    /* 008b880a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b880b: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b880e: jle 0x8b87e3 */ if ((fZ||fS!=fO)) goto L_008b87e3;
L_008b8810:; BB(0x008b8810);
    /* 008b8810: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
L_008b8813:; BB(0x008b8813);
    /* 008b8813: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8816: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8819: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b881c: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b881f: jle 0x8b87d9 */ if ((fZ||fS!=fO)) goto L_008b87d9;
L_008b8821:; BB(0x008b8821);
    /* 008b8821: jmp 0x8b882e */ goto L_008b882e;
L_008b8823:; BB(0x008b8823);
    /* 008b8823: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8826: mov edi, eax */ r_edi = r_eax;
    /* 008b8828: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008b882b: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
L_008b882e:; BB(0x008b882e);
    /* 008b882e: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b8831: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8833: jle 0x8b889a */ if ((fZ||fS!=fO)) goto L_008b889a;
L_008b8835:; BB(0x008b8835);
    /* 008b8835: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b8837: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b883a: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b883d: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008b8840: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
L_008b8842:; BB(0x008b8842);
    /* 008b8842: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b8845: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8848: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b884a: jg 0x8b887c */ if ((!fZ&&fS==fO)) goto L_008b887c;
L_008b884c:; BB(0x008b884c);
    /* 008b884c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b884f: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 008b8852: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b8855: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8858: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b885a: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b885c: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b885f: jg 0x8b8873 */ if ((!fZ&&fS==fO)) goto L_008b8873;
L_008b8861:; BB(0x008b8861);
    /* 008b8861: mov di, word ptr [eax] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 008b8864: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8865: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8866: test di, di */ {  u32 a = (u16)r_edi; u32 b = (u16)r_edi; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008b8869: jne 0x8b888c */ if (!fZ) goto L_008b888c;
L_008b886b:; BB(0x008b886b);
    /* 008b886b: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b886e: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8871: jle 0x8b8861 */ if ((fZ||fS!=fO)) goto L_008b8861;
L_008b8873:; BB(0x008b8873);
    /* 008b8873: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8874: cmp edx, dword ptr [ebp - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8877: jle 0x8b884c */ if ((fZ||fS!=fO)) goto L_008b884c;
L_008b8879:; BB(0x008b8879);
    /* 008b8879: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
L_008b887c:; BB(0x008b887c);
    /* 008b887c: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b887f: sub ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8882: cmp dword ptr [ebp - 8], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8885: jge 0x8b8842 */ if ((fS==fO)) goto L_008b8842;
L_008b8887:; BB(0x008b8887);
    /* 008b8887: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b888a: jmp 0x8b889a */ goto L_008b889a;
L_008b888c:; BB(0x008b888c);
    /* 008b888c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b888f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b8892: mov ebx, eax */ r_ebx = r_eax;
    /* 008b8894: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 008b8897: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_008b889a:; BB(0x008b889a);
    /* 008b889a: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b889d: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88a0: jge 0x8b895e */ if ((fS==fO)) goto L_008b895e;
L_008b88a6:; BB(0x008b88a6);
    /* 008b88a6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b88a9:; BB(0x008b88a9);
    /* 008b88a9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b88ac: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88af: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b88b2: jg 0x8b88e8 */ if ((!fZ&&fS==fO)) goto L_008b88e8;
L_008b88b4:; BB(0x008b88b4);
    /* 008b88b4: mov ecx, edi */ r_ecx = r_edi;
    /* 008b88b6: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b88b9: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b88bc: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
L_008b88be:; BB(0x008b88be);
    /* 008b88be: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b88c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b88c4: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 008b88c7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b88c9: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88cb: mov edx, edi */ r_edx = r_edi;
    /* 008b88cd: jg 0x8b88dd */ if ((!fZ&&fS==fO)) goto L_008b88dd;
L_008b88cf:; BB(0x008b88cf);
    /* 008b88cf: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b88d3: jne 0x8b88f5 */ if (!fZ) goto L_008b88f5;
L_008b88d5:; BB(0x008b88d5);
    /* 008b88d5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b88d6: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b88d9: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88db: jle 0x8b88cf */ if ((fZ||fS!=fO)) goto L_008b88cf;
L_008b88dd:; BB(0x008b88dd);
    /* 008b88dd: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b88e0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b88e3: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88e6: jle 0x8b88be */ if ((fZ||fS!=fO)) goto L_008b88be;
L_008b88e8:; BB(0x008b88e8);
    /* 008b88e8: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b88eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b88ee: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b88f1: jle 0x8b88a9 */ if ((fZ||fS!=fO)) goto L_008b88a9;
L_008b88f3:; BB(0x008b88f3);
    /* 008b88f3: jmp 0x8b88fe */ goto L_008b88fe;
L_008b88f5:; BB(0x008b88f5);
    /* 008b88f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b88f8: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b88fb: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
L_008b88fe:; BB(0x008b88fe);
    /* 008b88fe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8901: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8904: jle 0x8b895e */ if ((fZ||fS!=fO)) goto L_008b895e;
L_008b8906:; BB(0x008b8906);
    /* 008b8906: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b8909:; BB(0x008b8909);
    /* 008b8909: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b890c: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b890f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b8912: jg 0x8b8948 */ if ((!fZ&&fS==fO)) goto L_008b8948;
L_008b8914:; BB(0x008b8914);
    /* 008b8914: mov ecx, edi */ r_ecx = r_edi;
    /* 008b8916: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8919: add ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b891c: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
L_008b891e:; BB(0x008b891e);
    /* 008b891e: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b8921: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b8924: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 008b8927: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8929: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b892b: mov edx, edi */ r_edx = r_edi;
    /* 008b892d: jg 0x8b893d */ if ((!fZ&&fS==fO)) goto L_008b893d;
L_008b892f:; BB(0x008b892f);
    /* 008b892f: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b8933: jne 0x8b8955 */ if (!fZ) goto L_008b8955;
L_008b8935:; BB(0x008b8935);
    /* 008b8935: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8936: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8939: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b893b: jle 0x8b892f */ if ((fZ||fS!=fO)) goto L_008b892f;
L_008b893d:; BB(0x008b893d);
    /* 008b893d: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8940: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b8943: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8946: jle 0x8b891e */ if ((fZ||fS!=fO)) goto L_008b891e;
L_008b8948:; BB(0x008b8948);
    /* 008b8948: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b894b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b894e: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8951: jge 0x8b8909 */ if ((fS==fO)) goto L_008b8909;
L_008b8953:; BB(0x008b8953);
    /* 008b8953: jmp 0x8b895e */ goto L_008b895e;
L_008b8955:; BB(0x008b8955);
    /* 008b8955: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8958: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b895b: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_008b895e:; BB(0x008b895e);
    /* 008b895e: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8961: sub ecx, dword ptr [ebp - 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8964: mov edx, ebx */ r_edx = r_ebx;
    /* 008b8966: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8968: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b896b: sub edi, dword ptr [ebp - 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b896e: lea eax, [edx + edx*2] */ r_eax = (u32)(r_edx+r_edx*2);
    /* 008b8971: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008b8974: shl edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b8977: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b897a: mov ebx, edi */ r_ebx = r_edi;
    /* 008b897c: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b897f: mov edi, eax */ r_edi = r_eax;
    /* 008b8981: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8984: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8987: mov eax, ecx */ r_eax = r_ecx;
    /* 008b8989: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b898c: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b898e: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8990: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8994: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b8997: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008b899a: jmp 0x8b89e4 */ goto L_008b89e4;
L_008b899c:; BB(0x008b899c);
    /* 008b899c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b899f: cmp ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b89a2: jg 0x8b89e3 */ if ((!fZ&&fS==fO)) goto L_008b89e3;
L_008b89a4:; BB(0x008b89a4);
    /* 008b89a4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b89a7: mov edi, dword ptr [edi + eax*4] */ r_edi = R32((u32)(r_edi+r_eax*4));
    /* 008b89aa: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b89ad: add ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b89b0: lea ecx, [edi + ecx*2] */ r_ecx = (u32)(r_edi+r_ecx*2);
    /* 008b89b3: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
L_008b89b6:; BB(0x008b89b6);
    /* 008b89b6: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b89b9: cmp ebx, dword ptr [ebp - 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b89bc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b89bf: jg 0x8b89dd */ if ((!fZ&&fS==fO)) goto L_008b89dd;
L_008b89c1:; BB(0x008b89c1);
    /* 008b89c1: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b89c4: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b89c5: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
L_008b89c8:; BB(0x008b89c8);
    /* 008b89c8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b89cb: cmp word ptr [ebx], 0 */ {  u32 a = R16((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b89cf: je 0x8b89d4 */ if (fZ) goto L_008b89d4;
L_008b89d1:; BB(0x008b89d1);
    /* 008b89d1: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b89d4:; BB(0x008b89d4);
    /* 008b89d4: add dword ptr [ebp - 0x1c], 2 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b89d8: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b89db: jne 0x8b89c8 */ if (!fZ) goto L_008b89c8;
L_008b89dd:; BB(0x008b89dd);
    /* 008b89dd: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b89e0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008b89e1: jne 0x8b89b6 */ if (!fZ) goto L_008b89b6;
L_008b89e3:; BB(0x008b89e3);
    /* 008b89e3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008b89e4:; BB(0x008b89e4);
    /* 008b89e4: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b89e7: jle 0x8b899c */ if ((fZ||fS!=fO)) goto L_008b899c;
L_008b89e9:; BB(0x008b89e9);
    /* 008b89e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b89ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b89ed: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 008b89f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b89f1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b89f2: ret  */ FN_RET(0x008b86bb); r_esp += 4; return;
}

void f_008b89f3(void) /* sub_8B89F3 */
{
    FN_ENTER(0x008b89f3);
    /* 008b89f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b89f4: mov ebp, esp */ r_ebp = r_esp;
    /* 008b89f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b89f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b89f8: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b89fb: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b89fe: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b8a01: jge 0x8b8b44 */ if ((fS==fO)) goto L_008b8b44;
L_008b8a07:; BB(0x008b8a07);
    /* 008b8a07: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008b8a0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8a0b: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b8a0e: mov edx, eax */ r_edx = r_eax;
    /* 008b8a10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8a11: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b8a14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8a15: lea edi, [edx + ecx + 0xc] */ r_edi = (u32)(r_edx+r_ecx+0xcu);
    /* 008b8a19: jmp 0x8b8a1e */ goto L_008b8a1e;
L_008b8a1b:; BB(0x008b8a1b);
    /* 008b8a1b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_008b8a1e:; BB(0x008b8a1e);
    /* 008b8a1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8a21: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b8a23: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8a25: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8a28: jg 0x8b8a4f */ if ((!fZ&&fS==fO)) goto L_008b8a4f;
L_008b8a2a:; BB(0x008b8a2a);
    /* 008b8a2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b8a2c: jle 0x8b8a6e */ if ((fZ||fS!=fO)) goto L_008b8a6e;
L_008b8a2e:; BB(0x008b8a2e);
    /* 008b8a2e: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8a31: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008b8a34:; BB(0x008b8a34);
    /* 008b8a34: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b8a36: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8a38: jle 0x8b8a45 */ if ((fZ||fS!=fO)) goto L_008b8a45;
L_008b8a3a:; BB(0x008b8a3a);
    /* 008b8a3a: cmp dword ptr [ecx - 4], 0 */ {  u32 a = R32((u32)(r_ecx+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8a3e: jle 0x8b8a45 */ if ((fZ||fS!=fO)) goto L_008b8a45;
L_008b8a40:; BB(0x008b8a40);
    /* 008b8a40: lea esi, [ecx - 0x1c] */ r_esi = (u32)(r_ecx+0xffffffe4u);
    /* 008b8a43: mov ebx, edx */ r_ebx = r_edx;
L_008b8a45:; BB(0x008b8a45);
    /* 008b8a45: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8a48: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8a4b: jne 0x8b8a34 */ if (!fZ) goto L_008b8a34;
L_008b8a4d:; BB(0x008b8a4d);
    /* 008b8a4d: jmp 0x8b8a6e */ goto L_008b8a6e;
L_008b8a4f:; BB(0x008b8a4f);
    /* 008b8a4f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8a53: jle 0x8b8a6e */ if ((fZ||fS!=fO)) goto L_008b8a6e;
L_008b8a55:; BB(0x008b8a55);
    /* 008b8a55: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8a58: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008b8a5b:; BB(0x008b8a5b);
    /* 008b8a5b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b8a5d: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8a5f: jle 0x8b8a66 */ if ((fZ||fS!=fO)) goto L_008b8a66;
L_008b8a61:; BB(0x008b8a61);
    /* 008b8a61: lea esi, [ecx - 0x18] */ r_esi = (u32)(r_ecx+0xffffffe8u);
    /* 008b8a64: mov ebx, edx */ r_ebx = r_edx;
L_008b8a66:; BB(0x008b8a66);
    /* 008b8a66: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8a69: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8a6c: jne 0x8b8a5b */ if (!fZ) goto L_008b8a5b;
L_008b8a6e:; BB(0x008b8a6e);
    /* 008b8a6e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b8a70: je 0x8b8b41 */ if (fZ) goto L_008b8b41;
L_008b8a76:; BB(0x008b8a76);
    /* 008b8a76: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b8a79: mov dword ptr [edi - 8], eax */ W32((u32)(r_edi+0xfffffff8u), r_eax);
    /* 008b8a7c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008b8a7f: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008b8a81: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b8a84: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008b8a87: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b8a89: mov dword ptr [edi - 0xc], eax */ W32((u32)(r_edi+0xfffffff4u), r_eax);
    /* 008b8a8c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008b8a8f: mov dword ptr [edi - 4], eax */ W32((u32)(r_edi+0xfffffffcu), r_eax);
    /* 008b8a92: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b8a95: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008b8a98: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b8a9a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008b8a9d: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 008b8aa0: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 008b8aa3: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8aa5: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b8aa8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8aaa: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008b8aad: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8aaf: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b8ab2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8ab4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8ab7: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b8aba: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b8abd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8abe: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8ac0: jle 0x8b8ac6 */ if ((fZ||fS!=fO)) goto L_008b8ac6;
L_008b8ac2:; BB(0x008b8ac2);
    /* 008b8ac2: mov eax, ecx */ r_eax = r_ecx;
    /* 008b8ac4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008b8ac6:; BB(0x008b8ac6);
    /* 008b8ac6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8ac8: jle 0x8b8acd */ if ((fZ||fS!=fO)) goto L_008b8acd;
L_008b8aca:; BB(0x008b8aca);
    /* 008b8aca: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8acc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b8acd:; BB(0x008b8acd);
    /* 008b8acd: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008b8ad0: je 0x8b8b04 */ if (fZ) goto L_008b8b04;
L_008b8ad2:; BB(0x008b8ad2);
    /* 008b8ad2: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008b8ad3: je 0x8b8aee */ if (fZ) goto L_008b8aee;
L_008b8ad5:; BB(0x008b8ad5);
    /* 008b8ad5: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008b8ad6: jne 0x8b8b17 */ if (!fZ) goto L_008b8b17;
L_008b8ad8:; BB(0x008b8ad8);
    /* 008b8ad8: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b8adb: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008b8ade: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8ae0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8ae1: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8ae3: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b8ae5: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008b8ae8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8ae9: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008b8aec: jmp 0x8b8b17 */ goto L_008b8b17;
L_008b8aee:; BB(0x008b8aee);
    /* 008b8aee: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008b8af1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008b8af4: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8af6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8af7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8af9: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b8afb: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008b8afe: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8aff: mov dword ptr [edi - 4], eax */ W32((u32)(r_edi+0xfffffffcu), r_eax);
    /* 008b8b02: jmp 0x8b8b17 */ goto L_008b8b17;
L_008b8b04:; BB(0x008b8b04);
    /* 008b8b04: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b8b07: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b8b09: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8b0b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8b0c: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8b0e: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b8b10: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008b8b13: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8b14: mov dword ptr [edi - 0xc], eax */ W32((u32)(r_edi+0xfffffff4u), r_eax);
L_008b8b17:; BB(0x008b8b17);
    /* 008b8b17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8b1a: call 0x8b86bb */ r_esp -= 4; W32(r_esp, 0x8b8b1fu); f_008b86bb();
    /* 008b8b1f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8b22: lea esi, [edi - 0xc] */ r_esi = (u32)(r_edi+0xfffffff4u);
    /* 008b8b25: call 0x8b86bb */ r_esp -= 4; W32(r_esp, 0x8b8b2au); f_008b86bb();
    /* 008b8b2a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b8b2d: add dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8b31: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8b32: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8b35: cmp eax, dword ptr [ebp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8b38: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008b8b3b: jl 0x8b8a1b */ if ((fS!=fO)) goto L_008b8a1b;
L_008b8b41:; BB(0x008b8b41);
    /* 008b8b41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b8b42: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8b43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b8b44:; BB(0x008b8b44);
    /* 008b8b44: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b8b45: ret  */ FN_RET(0x008b89f3); r_esp += 4; return;
}

void f_008b8b46(void) /* sub_8B8B46 */
{
    FN_ENTER(0x008b8b46);
    /* 008b8b46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8b47: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8b49: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b8b4c: mov ecx, dword ptr [esi + 0x1a4] */ r_ecx = R32((u32)(r_esi+0x1a4u));
    /* 008b8b52: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 008b8b55: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008b8b58: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 008b8b5b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8b5d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b8b60: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b8b63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b8b66: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008b8b69: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008b8b6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8b6d: mov ebx, dword ptr [eax + 0x14] */ r_ebx = R32((u32)(r_eax+0x14u));
    /* 008b8b70: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 008b8b73: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008b8b76: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 008b8b79: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008b8b7c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b8b7e: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8b81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8b82: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b8b85: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 008b8b88: jg 0x8b8c41 */ if ((!fZ&&fS==fO)) goto L_008b8c41;
L_008b8b8e:; BB(0x008b8b8e);
    /* 008b8b8e: lea ebx, [eax*8 + 4] */ r_ebx = (u32)(r_eax*8+0x4u);
    /* 008b8b95: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_008b8b98:; BB(0x008b8b98);
    /* 008b8b98: cmp ecx, dword ptr [ebp - 0x28] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8b9b: jg 0x8b8c33 */ if ((!fZ&&fS==fO)) goto L_008b8c33;
L_008b8ba1:; BB(0x008b8ba1);
    /* 008b8ba1: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b8ba4: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 008b8ba7: lea edi, [ecx*4 + 2] */ r_edi = (u32)(r_ecx*4+0x2u);
    /* 008b8bae: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b8bb1: mov edi, ecx */ r_edi = r_ecx;
    /* 008b8bb3: shl edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b8bb6: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8bb8: lea edi, [ebx + edi*2] */ r_edi = (u32)(r_ebx+r_edi*2);
    /* 008b8bbb: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008b8bbe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b8bc1: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b8bc3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8bc4: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
L_008b8bc7:; BB(0x008b8bc7);
    /* 008b8bc7: cmp edx, dword ptr [ebp - 0x2c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8bca: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b8bcd: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008b8bd0: jg 0x8b8c22 */ if ((!fZ&&fS==fO)) goto L_008b8c22;
L_008b8bd2:; BB(0x008b8bd2);
    /* 008b8bd2: lea edi, [edx*8 + 4] */ r_edi = (u32)(r_edx*8+0x4u);
    /* 008b8bd9: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b8bdc: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b8bdf: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b8be1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8be2: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
L_008b8be5:; BB(0x008b8be5);
    /* 008b8be5: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8be8: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 008b8beb: add dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8bef: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b8bf1: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 008b8bf4: je 0x8b8c16 */ if (fZ) goto L_008b8c16;
L_008b8bf6:; BB(0x008b8bf6);
    /* 008b8bf6: add dword ptr [ebp - 0x18], edi */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8bf9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8bfc: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8bff: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8c02: imul edi, dword ptr [ebp - 0x30] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffd0u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8c06: add dword ptr [ebp - 0x20], edi */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c09: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8c0c: imul edi, dword ptr [ebp - 0x30] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0xffffffd0u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8c10: add dword ptr [ebp - 0x1c], ebx */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c13: add dword ptr [ebp - 0x24], edi */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b8c16:; BB(0x008b8c16);
    /* 008b8c16: add dword ptr [ebp - 8], 8 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c1a: dec dword ptr [ebp - 0x34] */ { u32 ad = (u32)(r_ebp+0xffffffccu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8c1d: jne 0x8b8be5 */ if (!fZ) goto L_008b8be5;
L_008b8c1f:; BB(0x008b8c1f);
    /* 008b8c1f: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
L_008b8c22:; BB(0x008b8c22);
    /* 008b8c22: add dword ptr [ebp - 0xc], 0x40 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c26: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c2a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008b8c2b: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 008b8c2e: jne 0x8b8bc7 */ if (!fZ) goto L_008b8bc7;
L_008b8c30:; BB(0x008b8c30);
    /* 008b8c30: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_008b8c33:; BB(0x008b8c33);
    /* 008b8c33: add dword ptr [ebp - 0x14], 8 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8c37: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8c38: cmp eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8c3b: jle 0x8b8b98 */ if ((fZ||fS!=fO)) goto L_008b8b98;
L_008b8c41:; BB(0x008b8c41);
    /* 008b8c41: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b8c44: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b8c47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b8c49: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8c4b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8c4d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8c4e: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b8c4e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b8c4e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b8c50: mov edx, dword ptr [esi + 0x74] */ r_edx = R32((u32)(r_esi+0x74u));
    /* 008b8c53: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008b8c55: mov byte ptr [edi + edx], al */ W8((u32)(r_edi+r_edx), (u8)r_eax);
    /* 008b8c58: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b8c5b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8c5d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8c5e: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b8c5e, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b8c5e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b8c60: mov edx, dword ptr [esi + 0x74] */ r_edx = R32((u32)(r_esi+0x74u));
    /* 008b8c63: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 008b8c66: mov byte ptr [edi + edx], al */ W8((u32)(r_edi+r_edx), (u8)r_eax);
    /* 008b8c69: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b8c6c: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b8c6e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b8c6f: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b8c6f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b8c6f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b8c71: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 008b8c74: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 008b8c77: mov byte ptr [edi + ecx], al */ W8((u32)(r_edi+r_ecx), (u8)r_eax);
    /* 008b8c7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b8c7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b8c7c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b8c7d: ret  */ FN_RET(0x008b8b46); r_esp += 4; return;
}

void f_008b8c7e(void) /* sub_8B8C7E */
{
    FN_ENTER(0x008b8c7e);
    /* 008b8c7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c7f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8c81: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c82: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b8c85: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b8c88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c8a: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8c8d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c8e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c91: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b8c93u); call_ind(t); }
    /* 008b8c93: mov esi, eax */ r_esi = r_eax;
    /* 008b8c95: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 008b8c97: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008b8c98: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8c9a: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008b8c9d: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 008b8ca0: mov eax, edi */ r_eax = r_edi;
    /* 008b8ca2: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008b8ca4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 008b8ca7: mov dword ptr [esi + 0xc], 0x3f */ W32((u32)(r_esi+0xcu), 0x3fu);
    /* 008b8cae: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 008b8cb1: call 0x8b86bb */ r_esp -= 4; W32(r_esp, 0x8b8cb6u); f_008b86bb();
    /* 008b8cb6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b8cb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8cbb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8cbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8cbd: call 0x8b89f3 */ r_esp -= 4; W32(r_esp, 0x8b8cc2u); f_008b89f3();
    /* 008b8cc2: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 008b8cc8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b8ccb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b8ccd: jle 0x8b8cec */ if ((fZ||fS!=fO)) goto L_008b8cec;
L_008b8ccf:; BB(0x008b8ccf);
    /* 008b8ccf: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_008b8cd2:; BB(0x008b8cd2);
    /* 008b8cd2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b8cd5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8cd8: mov esi, edi */ r_esi = r_edi;
    /* 008b8cda: call 0x8b8b46 */ r_esp -= 4; W32(r_esp, 0x8b8cdfu); f_008b8b46();
    /* 008b8cdf: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8ce2: add dword ptr [ebp - 4], 0x20 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8ce6: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8ce9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b8cea: jl 0x8b8cd2 */ if ((fS!=fO)) goto L_008b8cd2;
L_008b8cec:; BB(0x008b8cec);
    /* 008b8cec: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b8cee: mov dword ptr [edi + 0x70], ebx */ W32((u32)(r_edi+0x70u), r_ebx);
    /* 008b8cf1: mov dword ptr [eax + 0x14], 0x5f */ W32((u32)(r_eax+0x14u), 0x5fu);
    /* 008b8cf8: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b8cfa: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008b8cfd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b8cff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b8d01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8d02: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b8d05u); call_ind(t); }
    /* 008b8d05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b8d06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b8d07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8d08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b8d09: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b8d0a: ret  */ FN_RET(0x008b8c7e); r_esp += 4; return;
}

void f_008b8d0b(void) /* sub_8B8D0B */
{
    FN_ENTER(0x008b8d0b);
    /* 008b8d0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8d0c: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8d0e: sub esp, 0x428 */ {  u32 a = r_esp; u32 b = 0x428u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b8d14: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b8d17: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8d1b: lea ecx, [edx + edx + 0x18] */ r_ecx = (u32)(r_edx+r_edx+0x18u);
    /* 008b8d1f: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8d21: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b8d24: lea ecx, [edi + edi + 0x1c] */ r_ecx = (u32)(r_edi+r_edi+0x1cu);
    /* 008b8d28: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8d2b: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8d2e: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b8d31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8d32: mov esi, dword ptr [eax + 0x70] */ r_esi = R32((u32)(r_eax+0x70u));
    /* 008b8d35: lea ecx, [ebx + ebx + 0x18] */ r_ecx = (u32)(r_ebx+r_ebx+0x18u);
    /* 008b8d39: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8d3b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b8d3d: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008b8d40: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008b8d43: mov dword ptr [ebp - 8], 0x7fffffff */ W32((u32)(r_ebp+0xfffffff8u), 0x7fffffffu);
    /* 008b8d4a: jle 0x8b8e5c */ if ((fZ||fS!=fO)) goto L_008b8e5c;
L_008b8d50:; BB(0x008b8d50);
    /* 008b8d50: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 008b8d53: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b8d55: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008b8d58: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008b8d5b: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008b8d5e: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b8d61: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_008b8d64:; BB(0x008b8d64);
    /* 008b8d64: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8d67: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b8d6a: movzx eax, byte ptr [eax + ecx] */ r_eax = (u32)R8((u32)(r_eax+r_ecx));
    /* 008b8d6e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8d70: lea ecx, [edx + 0x18] */ r_ecx = (u32)(r_edx+0x18u);
    /* 008b8d73: jge 0x8b8d80 */ if ((fS==fO)) goto L_008b8d80;
L_008b8d75:; BB(0x008b8d75);
    /* 008b8d75: mov esi, eax */ r_esi = r_eax;
    /* 008b8d77: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b8d79: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b8d7b: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8d7e: jmp 0x8b8dc3 */ goto L_008b8dc3;
L_008b8d80:; BB(0x008b8d80);
    /* 008b8d80: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8d82: jle 0x8b8dbc */ if ((fZ||fS!=fO)) goto L_008b8dbc;
L_008b8d84:; BB(0x008b8d84);
    /* 008b8d84: mov esi, eax */ r_esi = r_eax;
    /* 008b8d86: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b8d88: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b8d8a: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_008b8d8d:; BB(0x008b8d8d);
    /* 008b8d8d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b8d8f:; BB(0x008b8d8f);
    /* 008b8d8f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8d92: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b8d94: mov ecx, eax */ r_ecx = r_eax;
    /* 008b8d96: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8d99: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8d9c: movzx eax, byte ptr [eax + edx] */ r_eax = (u32)R8((u32)(r_eax+r_edx));
    /* 008b8da0: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8da2: jge 0x8b8dc7 */ if ((fS==fO)) goto L_008b8dc7;
L_008b8da4:; BB(0x008b8da4);
    /* 008b8da4: mov edx, eax */ r_edx = r_eax;
    /* 008b8da6: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8da8: lea edx, [edx + edx*2] */ r_edx = (u32)(r_edx+r_edx*2);
    /* 008b8dab: mov ebx, edx */ r_ebx = r_edx;
    /* 008b8dad: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8db0: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8db2: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8db5: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 008b8db8: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8dba: jmp 0x8b8de4 */ goto L_008b8de4;
L_008b8dbc:; BB(0x008b8dbc);
    /* 008b8dbc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b8dbe: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8dc1: jg 0x8b8d8d */ if ((!fZ&&fS==fO)) goto L_008b8d8d;
L_008b8dc3:; BB(0x008b8dc3);
    /* 008b8dc3: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8dc5: jmp 0x8b8d8f */ goto L_008b8d8f;
L_008b8dc7:; BB(0x008b8dc7);
    /* 008b8dc7: lea edx, [edi + 0x1c] */ r_edx = (u32)(r_edi+0x1cu);
    /* 008b8dca: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8dcc: jle 0x8b8e0f */ if ((fZ||fS!=fO)) goto L_008b8e0f;
L_008b8dce:; BB(0x008b8dce);
    /* 008b8dce: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
    /* 008b8dd1: mov edx, eax */ r_edx = r_eax;
    /* 008b8dd3: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8dd5: lea edx, [edx + edx*2] */ r_edx = (u32)(r_edx+r_edx*2);
    /* 008b8dd8: mov ebx, edx */ r_ebx = r_edx;
    /* 008b8dda: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8ddd: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8ddf: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_008b8de2:; BB(0x008b8de2);
    /* 008b8de2: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b8de4:; BB(0x008b8de4);
    /* 008b8de4: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b8de7: mov edx, eax */ r_edx = r_eax;
    /* 008b8de9: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8dec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b8def: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8df1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8df4: movzx eax, byte ptr [eax + edx] */ r_eax = (u32)R8((u32)(r_eax+r_edx));
    /* 008b8df8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8dfa: jge 0x8b8e18 */ if ((fS==fO)) goto L_008b8e18;
L_008b8dfc:; BB(0x008b8dfc);
    /* 008b8dfc: mov edx, eax */ r_edx = r_eax;
    /* 008b8dfe: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8e00: mov ebx, edx */ r_ebx = r_edx;
    /* 008b8e02: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8e05: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8e07: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8e0a: lea edx, [ebx + 0x18] */ r_edx = (u32)(r_ebx+0x18u);
    /* 008b8e0d: jmp 0x8b8e87 */ goto L_008b8e87;
L_008b8e0f:; BB(0x008b8e0f);
    /* 008b8e0f: cmp eax, dword ptr [ebp - 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e12: jg 0x8b8de2 */ if ((!fZ&&fS==fO)) goto L_008b8de2;
L_008b8e14:; BB(0x008b8e14);
    /* 008b8e14: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8e16: jmp 0x8b8de4 */ goto L_008b8de4;
L_008b8e18:; BB(0x008b8e18);
    /* 008b8e18: lea edx, [ebx + 0x18] */ r_edx = (u32)(r_ebx+0x18u);
    /* 008b8e1b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e1d: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008b8e20: jle 0x8b8e82 */ if ((fZ||fS!=fO)) goto L_008b8e82;
L_008b8e22:; BB(0x008b8e22);
    /* 008b8e22: mov edx, eax */ r_edx = r_eax;
    /* 008b8e24: sub edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8e27: mov ebx, edx */ r_ebx = r_edx;
    /* 008b8e29: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8e2c: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b8e2e: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_008b8e31:; BB(0x008b8e31);
    /* 008b8e31: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_008b8e33:; BB(0x008b8e33);
    /* 008b8e33: mov edx, eax */ r_edx = r_eax;
    /* 008b8e35: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8e38: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8e3b: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8e3d: cmp ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e40: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b8e43: mov dword ptr [ebp + eax*4 - 0x428], esi */ W32((u32)(r_ebp+r_eax*4+0xfffffbd8u), r_esi);
    /* 008b8e4a: jge 0x8b8e4f */ if ((fS==fO)) goto L_008b8e4f;
L_008b8e4c:; BB(0x008b8e4c);
    /* 008b8e4c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_008b8e4f:; BB(0x008b8e4f);
    /* 008b8e4f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8e50: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e53: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b8e56: jl 0x8b8d64 */ if ((fS!=fO)) goto L_008b8d64;
L_008b8e5c:; BB(0x008b8e5c);
    /* 008b8e5c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8e5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b8e60: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8e63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8e64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b8e65: jle 0x8b8e80 */ if ((fZ||fS!=fO)) goto L_008b8e80;
L_008b8e67:; BB(0x008b8e67);
    /* 008b8e67: mov edx, dword ptr [ebp + ecx*4 - 0x428] */ r_edx = R32((u32)(r_ebp+r_ecx*4+0xfffffbd8u));
    /* 008b8e6e: cmp edx, dword ptr [ebp - 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e71: jg 0x8b8e7a */ if ((!fZ&&fS==fO)) goto L_008b8e7a;
L_008b8e73:; BB(0x008b8e73);
    /* 008b8e73: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b8e76: mov byte ptr [eax + edx], cl */ W8((u32)(r_eax+r_edx), (u8)r_ecx);
    /* 008b8e79: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008b8e7a:; BB(0x008b8e7a);
    /* 008b8e7a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8e7b: cmp ecx, dword ptr [ebp - 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8e7e: jl 0x8b8e67 */ if ((fS!=fO)) goto L_008b8e67;
L_008b8e80:; BB(0x008b8e80);
    /* 008b8e80: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b8e81: ret  */ FN_RET(0x008b8d0b); r_esp += 4; return;
L_008b8e82:; BB(0x008b8e82);
    /* 008b8e82: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8e85: jg 0x8b8e31 */ if ((!fZ&&fS==fO)) goto L_008b8e31;
L_008b8e87:; BB(0x008b8e87);
    /* 008b8e87: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8e89: jmp 0x8b8e33 */ goto L_008b8e33;
}

void f_008b8e8b(void) /* sub_8B8E8B */
{
    FN_ENTER(0x008b8e8b);
    /* 008b8e8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8e8c: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8e8e: sub esp, 0x228 */ {  u32 a = r_esp; u32 b = 0x228u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b8e94: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8e98: cmp dword ptr [ebp + 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8e9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8e9d: mov ecx, 0x80 */ r_ecx = 0x80u;
    /* 008b8ea2: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 008b8ea7: lea edi, [ebp - 0x228] */ r_edi = (u32)(r_ebp+0xfffffdd8u);
    /* 008b8ead: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008b8eaf: jle 0x8b8fa2 */ if ((fZ||fS!=fO)) goto L_008b8fa2;
L_008b8eb5:; BB(0x008b8eb5);
    /* 008b8eb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8eb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008b8eb7:; BB(0x008b8eb7);
    /* 008b8eb7: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008b8eba: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8ebd: movzx ebx, byte ptr [ecx + eax] */ r_ebx = (u32)R8((u32)(r_ecx+r_eax));
    /* 008b8ec1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8ec4: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 008b8ec7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008b8ec9: movzx eax, byte ptr [ebx + eax] */ r_eax = (u32)R8((u32)(r_ebx+r_eax));
    /* 008b8ecd: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b8ed0: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8ed2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 008b8ed5: movzx esi, byte ptr [eax + ebx] */ r_esi = (u32)R8((u32)(r_eax+r_ebx));
    /* 008b8ed9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b8edc: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b8ede: lea esi, [eax + eax*2] */ r_esi = (u32)(r_eax+r_eax*2);
    /* 008b8ee1: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 008b8ee4: movzx eax, byte ptr [eax + ebx] */ r_eax = (u32)R8((u32)(r_eax+r_ebx));
    /* 008b8ee8: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b8eeb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b8eed: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008b8ef0: imul esi, esi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_esi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8ef3: mov eax, edx */ r_eax = r_edx;
    /* 008b8ef5: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8ef8: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8efa: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8efc: mov esi, ecx */ r_esi = r_ecx;
    /* 008b8efe: imul esi, ecx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ecx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b8f01: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8f03: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b8f06: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b8f09: lea edi, [ebp - 0x228] */ r_edi = (u32)(r_ebp+0xfffffdd8u);
    /* 008b8f0f: lea esi, [esi + esi*2 + 0x12] */ r_esi = (u32)(r_esi+r_esi*2+0x12u);
    /* 008b8f13: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8f16: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b8f19: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b8f1c: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b8f1f: mov edi, dword ptr [ebp + 0x20] */ r_edi = R32((u32)(r_ebp+0x20u));
    /* 008b8f22: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8f25: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008b8f28: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b8f2b: mov dword ptr [ebp - 0x24], 4 */ W32((u32)(r_ebp+0xffffffdcu), 0x4u);
L_008b8f32:; BB(0x008b8f32);
    /* 008b8f32: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b8f35: mov dword ptr [ebp - 0xc], esi */ W32((u32)(r_ebp+0xfffffff4u), r_esi);
    /* 008b8f38: mov dword ptr [ebp - 0x28], 8 */ W32((u32)(r_ebp+0xffffffd8u), 0x8u);
L_008b8f3f:; BB(0x008b8f3f);
    /* 008b8f3f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b8f42: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b8f45: mov dword ptr [ebp - 0x20], 4 */ W32((u32)(r_ebp+0xffffffe0u), 0x4u);
L_008b8f4c:; BB(0x008b8f4c);
    /* 008b8f4c: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b8f4f: cmp ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b8f51: jge 0x8b8f5a */ if ((fS==fO)) goto L_008b8f5a;
L_008b8f53:; BB(0x008b8f53);
    /* 008b8f53: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 008b8f55: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b8f58: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
L_008b8f5a:; BB(0x008b8f5a);
    /* 008b8f5a: add ecx, dword ptr [ebp - 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8f5d: add dword ptr [ebp - 0x14], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f64: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f68: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f6b: dec dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8f6e: jne 0x8b8f4c */ if (!fZ) goto L_008b8f4c;
L_008b8f70:; BB(0x008b8f70);
    /* 008b8f70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b8f73: add dword ptr [ebp - 0x18], ecx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f76: add dword ptr [ebp - 0xc], 0x120 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f7d: dec dword ptr [ebp - 0x28] */ { u32 ad = (u32)(r_ebp+0xffffffd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8f80: jne 0x8b8f3f */ if (!fZ) goto L_008b8f3f;
L_008b8f82:; BB(0x008b8f82);
    /* 008b8f82: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b8f85: add dword ptr [ebp - 4], 0x200 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f8c: dec dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b8f8f: jne 0x8b8f32 */ if (!fZ) goto L_008b8f32;
L_008b8f91:; BB(0x008b8f91);
    /* 008b8f91: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b8f94: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b8f97: cmp eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b8f9a: jl 0x8b8eb7 */ if ((fS!=fO)) goto L_008b8eb7;
L_008b8fa0:; BB(0x008b8fa0);
    /* 008b8fa0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b8fa1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b8fa2:; BB(0x008b8fa2);
    /* 008b8fa2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b8fa3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b8fa4: ret  */ FN_RET(0x008b8e8b); r_esp += 4; return;
}

void f_008b8fa5(void) /* sub_8B8FA5 */
{
    FN_ENTER(0x008b8fa5);
    /* 008b8fa5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fa6: mov ebp, esp */ r_ebp = r_esp;
    /* 008b8fa8: sub esp, 0x188 */ {  u32 a = r_esp; u32 b = 0x188u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b8fae: sar dword ptr [ebp + 0x10], 2 */ { u32 ad = (u32)(r_ebp+0x10u); u32 c = (2u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 008b8fb2: sar dword ptr [ebp + 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = (2u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 008b8fb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fb7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008b8fba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fbb: mov esi, eax */ r_esi = r_eax;
    /* 008b8fbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b8fc0: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008b8fc6: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 008b8fc9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fca: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b8fcd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b8fd0: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008b8fd3: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b8fd6: lea edx, [ebp - 0x188] */ r_edx = (u32)(r_ebp+0xfffffe78u);
    /* 008b8fdc: shl ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b8fdf: mov edi, esi */ r_edi = r_esi;
    /* 008b8fe1: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b8fe4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fe5: shl edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b8fe8: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b8feb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fec: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8fed: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b8fee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8fef: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b8ff2: call 0x8b8d0b */ r_esp -= 4; W32(r_esp, 0x8b8ff7u); f_008b8d0b();
    /* 008b8ff7: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008b8ffd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b8ffe: lea ecx, [ebp - 0x188] */ r_ecx = (u32)(r_ebp+0xfffffe78u);
    /* 008b9004: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9005: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b9006: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9009: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b900a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b900b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b900e: call 0x8b8e8b */ r_esp -= 4; W32(r_esp, 0x8b9013u); f_008b8e8b();
    /* 008b9013: shl dword ptr [ebp + 0x10], 2 */ { u32 ad = (u32)(r_ebp+0x10u); u32 c = (2u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 008b9017: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b901a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b901d: shl esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b9020: shl esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b9023: add esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9026: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b9029: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b902c: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b902e: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 008b9034: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008b9037: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
    /* 008b903a: mov dword ptr [ebp + 0xc], 4 */ W32((u32)(r_ebp+0xcu), 0x4u);
L_008b9041:; BB(0x008b9041);
    /* 008b9041: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b9044: mov dword ptr [ebp + 0x10], 8 */ W32((u32)(r_ebp+0x10u), 0x8u);
L_008b904b:; BB(0x008b904b);
    /* 008b904b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008b904d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008b904f: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9051: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008b9052:; BB(0x008b9052);
    /* 008b9052: movzx si, byte ptr [edx] */ r_esi = (r_esi & 0xffff0000u) | (((u32)R8((u32)(r_edx))) & 0xffffu);
    /* 008b9056: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9057: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 008b905a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b905b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b905c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b905d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008b905e: jne 0x8b9052 */ if (!fZ) goto L_008b9052;
L_008b9060:; BB(0x008b9060);
    /* 008b9060: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9063: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9066: jne 0x8b904b */ if (!fZ) goto L_008b904b;
L_008b9068:; BB(0x008b9068);
    /* 008b9068: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008b906b: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b906e: jne 0x8b9041 */ if (!fZ) goto L_008b9041;
L_008b9070:; BB(0x008b9070);
    /* 008b9070: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9071: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9072: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b9073: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9074: ret  */ FN_RET(0x008b8fa5); r_esp += 4; return;
}

