#include "protos.h"

void f_008a5153(void) /* sub_8A5153 */
{
    FN_ENTER(0x008a5153);
    /* 008a5153: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a5154: mov ebp, esp */ r_ebp = r_esp;
    /* 008a5156: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a5159: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a515c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a515d: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008a5160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5161: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a5164: mov cl, byte ptr [edi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x9u))) & 0xffu);
    /* 008a5167: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a516a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008a516c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008a516f: ja 0x8a5175 */ if ((!fC&&!fZ)) goto L_008a5175;
L_008a5171:; BB(0x008a5171);
    /* 008a5171: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5173: jne 0x8a5186 */ if (!fZ) goto L_008a5186;
L_008a5175:; BB(0x008a5175);
    /* 008a5175: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a5178: jne 0x8a549d */ if (!fZ) goto L_008a549d;
L_008a517e:; BB(0x008a517e);
    /* 008a517e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5180: je 0x8a549d */ if (fZ) goto L_008a549d;
L_008a5186:; BB(0x008a5186);
    /* 008a5186: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5187: movzx ebx, byte ptr [edi + 8] */ r_ebx = (u32)R8((u32)(r_edi+0x8u));
    /* 008a518b: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008a518e: je 0x8a533e */ if (fZ) goto L_008a533e;
L_008a5194:; BB(0x008a5194);
    /* 008a5194: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5196: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a5197: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008a5199: je 0x8a52a2 */ if (fZ) goto L_008a52a2;
L_008a519f:; BB(0x008a519f);
    /* 008a519f: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008a51a1: je 0x8a524d */ if (fZ) goto L_008a524d;
L_008a51a7:; BB(0x008a51a7);
    /* 008a51a7: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a51a9: jne 0x8a549c */ if (!fZ) goto L_008a549c;
L_008a51af:; BB(0x008a51af);
    /* 008a51af: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a51b2: jne 0x8a51e5 */ if (!fZ) goto L_008a51e5;
L_008a51b4:; BB(0x008a51b4);
    /* 008a51b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a51b6: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a51b9: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a51bf:; BB(0x008a51bf);
    /* 008a51bf: mov esi, edx */ r_esi = r_edx;
L_008a51c1:; BB(0x008a51c1);
    /* 008a51c1: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a51c4: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a51c7: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a51c9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a51ca: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a51cd: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a51d0: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a51d2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a51d3: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a51d6: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a51d9: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a51db: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008a51dd: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a51de: jne 0x8a51c1 */ if (!fZ) goto L_008a51c1;
L_008a51e0:; BB(0x008a51e0);
    /* 008a51e0: jmp 0x8a549c */ goto L_008a549c;
L_008a51e5:; BB(0x008a51e5);
    /* 008a51e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a51e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a51ea: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a51f0:; BB(0x008a51f0);
    /* 008a51f0: movzx ebx, byte ptr [ebp + 0x18] */ r_ebx = (u32)R8((u32)(r_ebp+0x18u));
    /* 008a51f4: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_008a51f7:; BB(0x008a51f7);
    /* 008a51f7: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a51fb: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a51fd: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a51ff: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a5202: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a5205: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a5209: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a520c: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a520e: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a5210: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a5214: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5216: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5218: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a521b: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a521e: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a5222: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5225: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a5227: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a5229: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a522d: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a522f: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5231: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a5234: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a5237: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a523b: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a523d: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5240: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a5243: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5246: jne 0x8a51f7 */ if (!fZ) goto L_008a51f7;
L_008a5248:; BB(0x008a5248);
    /* 008a5248: jmp 0x8a549c */ goto L_008a549c;
L_008a524d:; BB(0x008a524d);
    /* 008a524d: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5250: jne 0x8a5271 */ if (!fZ) goto L_008a5271;
L_008a5252:; BB(0x008a5252);
    /* 008a5252: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5254: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a5257: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a525d:; BB(0x008a525d);
    /* 008a525d: mov esi, edx */ r_esi = r_edx;
L_008a525f:; BB(0x008a525f);
    /* 008a525f: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a5262: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a5265: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a5267: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008a5269: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a526a: jne 0x8a525f */ if (!fZ) goto L_008a525f;
L_008a526c:; BB(0x008a526c);
    /* 008a526c: jmp 0x8a549c */ goto L_008a549c;
L_008a5271:; BB(0x008a5271);
    /* 008a5271: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5273: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a5276: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a527c:; BB(0x008a527c);
    /* 008a527c: movzx ebx, byte ptr [ebp + 0x18] */ r_ebx = (u32)R8((u32)(r_ebp+0x18u));
L_008a5280:; BB(0x008a5280);
    /* 008a5280: movzx edi, byte ptr [eax + 1] */ r_edi = (u32)R8((u32)(r_eax+0x1u));
    /* 008a5284: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5286: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008a5288: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a528b: mov edi, dword ptr [esi + edi*4] */ r_edi = R32((u32)(r_esi+r_edi*4));
    /* 008a528e: mov cx, word ptr [edi + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi+r_ecx*2))) & 0xffffu);
    /* 008a5292: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a5294: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5297: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a529a: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a529b: jne 0x8a5280 */ if (!fZ) goto L_008a5280;
L_008a529d:; BB(0x008a529d);
    /* 008a529d: jmp 0x8a549c */ goto L_008a549c;
L_008a52a2:; BB(0x008a52a2);
    /* 008a52a2: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a52a5: jne 0x8a52d7 */ if (!fZ) goto L_008a52d7;
L_008a52a7:; BB(0x008a52a7);
    /* 008a52a7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a52a9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a52ac: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a52b2:; BB(0x008a52b2);
    /* 008a52b2: mov esi, edx */ r_esi = r_edx;
L_008a52b4:; BB(0x008a52b4);
    /* 008a52b4: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a52b7: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a52ba: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a52bc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a52bd: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a52c0: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a52c3: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a52c5: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a52c6: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a52c9: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a52cc: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a52ce: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a52cf: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a52d0: jne 0x8a52b4 */ if (!fZ) goto L_008a52b4;
L_008a52d2:; BB(0x008a52d2);
    /* 008a52d2: jmp 0x8a549c */ goto L_008a549c;
L_008a52d7:; BB(0x008a52d7);
    /* 008a52d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a52d9: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a52dc: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a52e2:; BB(0x008a52e2);
    /* 008a52e2: movzx ebx, byte ptr [ebp + 0x18] */ r_ebx = (u32)R8((u32)(r_ebp+0x18u));
    /* 008a52e6: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_008a52e9:; BB(0x008a52e9);
    /* 008a52e9: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a52ed: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a52ef: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a52f1: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a52f4: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a52f7: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a52fb: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a52fe: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a5300: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a5302: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a5306: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5308: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a530a: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a530d: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a5310: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a5314: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5317: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a5319: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a531b: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 008a531f: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5321: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5323: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a5326: mov edx, dword ptr [esi + edx*4] */ r_edx = R32((u32)(r_esi+r_edx*4));
    /* 008a5329: mov cx, word ptr [edx + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edx+r_ecx*2))) & 0xffffu);
    /* 008a532d: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a532f: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5332: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a5334: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5337: jne 0x8a52e9 */ if (!fZ) goto L_008a52e9;
L_008a5339:; BB(0x008a5339);
    /* 008a5339: jmp 0x8a549c */ goto L_008a549c;
L_008a533e:; BB(0x008a533e);
    /* 008a533e: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5341: jne 0x8a5409 */ if (!fZ) goto L_008a5409;
L_008a5347:; BB(0x008a5347);
    /* 008a5347: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a5349: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a534c: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a534f: jbe 0x8a5409 */ if ((fC||fZ)) goto L_008a5409;
L_008a5355:; BB(0x008a5355);
    /* 008a5355: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 008a5358: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008a535b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a535c: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_008a535f:; BB(0x008a535f);
    /* 008a535f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5362: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 008a5365: mov edx, ecx */ r_edx = r_ecx;
    /* 008a5367: mov edi, ecx */ r_edi = r_ecx;
    /* 008a5369: and edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a536f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008a5372: mov edx, ecx */ r_edx = r_ecx;
    /* 008a5374: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5377: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008a537a: and edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a537d: mov ecx, edx */ r_ecx = r_edx;
    /* 008a537f: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a5382: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5384: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a5387: mov ebx, edx */ r_ebx = r_edx;
    /* 008a5389: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008a538c: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a538e: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5390: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008a5393: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a5396: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a5398: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a539b: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008a539d: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a53a0: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008a53a2: and edi, 0x30 */ {  u32 a = r_edi; u32 b = 0x30u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a53a5: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a53a8: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008a53aa: mov cl, byte ptr [ebx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008a53ad: shr cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a53b0: and dl, 0xcf */ {  u32 a = (u8)r_edx; u32 b = 0xcfu; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53b3: or dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53b5: mov ecx, edi */ r_ecx = r_edi;
    /* 008a53b7: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008a53ba: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a53bc: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008a53bf: mov ebx, edi */ r_ebx = r_edi;
    /* 008a53c1: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a53c4: or ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a53c6: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008a53c8: mov cl, byte ptr [ecx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008a53cb: and cl, 0xc3 */ {  u32 a = (u8)r_ecx; u32 b = 0xc3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53ce: shr dl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a53d1: or dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a53d6: mov edi, ecx */ r_edi = r_ecx;
    /* 008a53d8: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008a53db: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008a53dd: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008a53e0: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008a53e2: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008a53e5: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008a53e7: mov cl, byte ptr [edi + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 008a53ea: and cl, 0xc0 */ {  u32 a = (u8)r_ecx; u32 b = 0xc0u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53ed: shr dl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_edx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a53f0: or dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a53f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a53f5: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a53f8: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a53fb: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a53fd: jne 0x8a535f */ if (!fZ) goto L_008a535f;
L_008a5403:; BB(0x008a5403);
    /* 008a5403: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008a5406: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_008a5409:; BB(0x008a5409);
    /* 008a5409: mov cl, byte ptr [edi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x9u))) & 0xffu);
    /* 008a540c: cmp cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a540f: jne 0x8a5454 */ if (!fZ) goto L_008a5454;
L_008a5411:; BB(0x008a5411);
    /* 008a5411: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5413: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a5416: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a541c:; BB(0x008a541c);
    /* 008a541c: lea edi, [edx - 1] */ r_edi = (u32)(r_edx+0xffffffffu);
    /* 008a541f: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008a5421: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008a5422:; BB(0x008a5422);
    /* 008a5422: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 008a5425: mov edx, ecx */ r_edx = r_ecx;
    /* 008a5427: and edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a542d: mov ebx, edx */ r_ebx = r_edx;
    /* 008a542f: sar ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008a5432: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5434: mov dl, byte ptr [ebx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008a5437: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a543a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a543c: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a543f: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5441: mov cl, byte ptr [ebx + eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebx+r_eax))) & 0xffu);
    /* 008a5444: and dl, 0xf0 */ {  u32 a = (u8)r_edx; u32 b = 0xf0u; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a5447: shr cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a544a: or dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 008a544c: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 008a544e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a544f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5450: jne 0x8a5422 */ if (!fZ) goto L_008a5422;
L_008a5452:; BB(0x008a5452);
    /* 008a5452: jmp 0x8a549c */ goto L_008a549c;
L_008a5454:; BB(0x008a5454);
    /* 008a5454: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5457: jne 0x8a5470 */ if (!fZ) goto L_008a5470;
L_008a5459:; BB(0x008a5459);
    /* 008a5459: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a545b: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a545e: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a5460:; BB(0x008a5460);
    /* 008a5460: mov esi, edx */ r_esi = r_edx;
L_008a5462:; BB(0x008a5462);
    /* 008a5462: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a5465: mov dl, byte ptr [edx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_eax))) & 0xffu);
    /* 008a5468: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a546a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a546b: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a546c: jne 0x8a5462 */ if (!fZ) goto L_008a5462;
L_008a546e:; BB(0x008a546e);
    /* 008a546e: jmp 0x8a549c */ goto L_008a549c;
L_008a5470:; BB(0x008a5470);
    /* 008a5470: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a5473: jne 0x8a549c */ if (!fZ) goto L_008a549c;
L_008a5475:; BB(0x008a5475);
    /* 008a5475: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5477: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a547a: jbe 0x8a549c */ if ((fC||fZ)) goto L_008a549c;
L_008a547c:; BB(0x008a547c);
    /* 008a547c: movzx ebx, byte ptr [ebp + 0x18] */ r_ebx = (u32)R8((u32)(r_ebp+0x18u));
L_008a5480:; BB(0x008a5480);
    /* 008a5480: movzx edi, byte ptr [eax + 1] */ r_edi = (u32)R8((u32)(r_eax+0x1u));
    /* 008a5484: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5486: shr edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 008a5488: movzx ecx, byte ptr [eax] */ r_ecx = (u32)R8((u32)(r_eax));
    /* 008a548b: mov edi, dword ptr [esi + edi*4] */ r_edi = R32((u32)(r_esi+r_edi*4));
    /* 008a548e: mov cx, word ptr [edi + ecx*2] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_edi+r_ecx*2))) & 0xffffu);
    /* 008a5492: mov byte ptr [eax], ch */ W8((u32)(r_eax), (u8)(r_ecx>>8));
    /* 008a5494: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 008a5497: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5498: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5499: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a549a: jne 0x8a5480 */ if (!fZ) goto L_008a5480;
L_008a549c:; BB(0x008a549c);
    /* 008a549c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a549d:; BB(0x008a549d);
    /* 008a549d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a549e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a549f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a54a0: ret  */ FN_RET(0x008a5153); r_esp += 4; return;
}

void f_008a54a1(void) /* sub_8A54A1 */
{
    FN_ENTER(0x008a54a1);
    /* 008a54a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a54a2: mov ebp, esp */ r_ebp = r_esp;
    /* 008a54a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a54a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a54a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a54a7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a54aa: cmp byte ptr [esi + 8], 3 */ {  u32 a = R8((u32)(r_esi+0x8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a54ae: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a54b0: jne 0x8a56a6 */ if (!fZ) goto L_008a56a6;
L_008a54b6:; BB(0x008a54b6);
    /* 008a54b6: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a54b9: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a54bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a54bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a54be: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a54c1: jae 0x8a55ce */ if (!fC) goto L_008a55ce;
L_008a54c7:; BB(0x008a54c7);
    /* 008a54c7: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a54ca: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a54cb: je 0x8a557a */ if (fZ) goto L_008a557a;
L_008a54d1:; BB(0x008a54d1);
    /* 008a54d1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a54d2: je 0x8a552c */ if (fZ) goto L_008a552c;
L_008a54d4:; BB(0x008a54d4);
    /* 008a54d4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a54d5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a54d6: jne 0x8a55c3 */ if (!fZ) goto L_008a55c3;
L_008a54dc:; BB(0x008a54dc);
    /* 008a54dc: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a54e0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a54e3: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a54e6: mov ecx, eax */ r_ecx = r_eax;
    /* 008a54e8: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a54ea: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a54ed: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a54f0: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a54f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a54f4: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a54f7: jbe 0x8a55c3 */ if ((fC||fZ)) goto L_008a55c3;
L_008a54fd:; BB(0x008a54fd);
    /* 008a54fd: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a5500:; BB(0x008a5500);
    /* 008a5500: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a5502: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a5504: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5507: and bl, 0xf */ {  u32 a = (u8)r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a550a: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a550c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a550f: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5512: jne 0x8a5519 */ if (!fZ) goto L_008a5519;
L_008a5514:; BB(0x008a5514);
    /* 008a5514: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a5516: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a5517: jmp 0x8a551c */ goto L_008a551c;
L_008a5519:; BB(0x008a5519);
    /* 008a5519: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
L_008a551c:; BB(0x008a551c);
    /* 008a551c: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a551f: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5522: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a5525: jne 0x8a5500 */ if (!fZ) goto L_008a5500;
L_008a5527:; BB(0x008a5527);
    /* 008a5527: jmp 0x8a55c3 */ goto L_008a55c3;
L_008a552c:; BB(0x008a552c);
    /* 008a552c: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a5530: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a5533: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a5536: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5538: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a553b: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a553e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a553f: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5542: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5544: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a5546: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a554a: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a554d: jbe 0x8a55c3 */ if ((fC||fZ)) goto L_008a55c3;
L_008a554f:; BB(0x008a554f);
    /* 008a554f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a5552:; BB(0x008a5552);
    /* 008a5552: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a5554: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a5556: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5559: and bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a555c: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a555e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a5561: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a5564: jne 0x8a556b */ if (!fZ) goto L_008a556b;
L_008a5566:; BB(0x008a5566);
    /* 008a5566: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a5568: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a5569: jmp 0x8a556d */ goto L_008a556d;
L_008a556b:; BB(0x008a556b);
    /* 008a556b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a556c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008a556d:; BB(0x008a556d);
    /* 008a556d: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5570: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5573: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a5576: jne 0x8a5552 */ if (!fZ) goto L_008a5552;
L_008a5578:; BB(0x008a5578);
    /* 008a5578: jmp 0x8a55c3 */ goto L_008a55c3;
L_008a557a:; BB(0x008a557a);
    /* 008a557a: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a557e: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a5581: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a5584: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a5587: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5589: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a558c: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a558f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5590: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5592: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a5596: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a5599: jbe 0x8a55c3 */ if ((fC||fZ)) goto L_008a55c3;
L_008a559b:; BB(0x008a559b);
    /* 008a559b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008a559e:; BB(0x008a559e);
    /* 008a559e: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a55a0: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a55a2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a55a5: and bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a55a8: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a55aa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a55ad: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a55b0: jne 0x8a55b7 */ if (!fZ) goto L_008a55b7;
L_008a55b2:; BB(0x008a55b2);
    /* 008a55b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a55b4: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a55b5: jmp 0x8a55b8 */ goto L_008a55b8;
L_008a55b7:; BB(0x008a55b7);
    /* 008a55b7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008a55b8:; BB(0x008a55b8);
    /* 008a55b8: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a55bb: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a55be: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a55c1: jne 0x8a559e */ if (!fZ) goto L_008a559e;
L_008a55c3:; BB(0x008a55c3);
    /* 008a55c3: mov byte ptr [esi + 9], 8 */ W8((u32)(r_esi+0x9u), 0x8u);
    /* 008a55c7: mov byte ptr [esi + 0xb], 8 */ W8((u32)(r_esi+0xbu), 0x8u);
    /* 008a55cb: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008a55ce:; BB(0x008a55ce);
    /* 008a55ce: cmp byte ptr [esi + 9], 8 */ {  u32 a = R8((u32)(r_esi+0x9u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a55d2: jne 0x8a56a4 */ if (!fZ) goto L_008a56a4;
L_008a55d8:; BB(0x008a55d8);
    /* 008a55d8: cmp dword ptr [ebp + 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a55dc: lea edx, [eax + edi - 1] */ r_edx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a55e0: je 0x8a564e */ if (fZ) goto L_008a564e;
L_008a55e2:; BB(0x008a55e2);
    /* 008a55e2: mov ebx, eax */ r_ebx = r_eax;
    /* 008a55e4: shl ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a55e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a55e9: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a55ec: lea ecx, [ebx + edi - 1] */ r_ecx = (u32)(r_ebx+r_edi+0xffffffffu);
    /* 008a55f0: jbe 0x8a5640 */ if ((fC||fZ)) goto L_008a5640;
L_008a55f2:; BB(0x008a55f2);
    /* 008a55f2: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a55f5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_008a55f8:; BB(0x008a55f8);
    /* 008a55f8: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a55fb: cmp edi, dword ptr [ebp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a55fe: jl 0x8a5605 */ if ((fS!=fO)) goto L_008a5605;
L_008a5600:; BB(0x008a5600);
    /* 008a5600: or byte ptr [ecx], 0xff */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r); fC = 0; }
    /* 008a5603: jmp 0x8a5610 */ goto L_008a5610;
L_008a5605:; BB(0x008a5605);
    /* 008a5605: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a5608: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008a560b: mov bl, byte ptr [edi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx))) & 0xffu);
    /* 008a560e: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
L_008a5610:; BB(0x008a5610);
    /* 008a5610: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a5613: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5614: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5617: mov bl, byte ptr [edi + ebx + 2] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx+0x2u))) & 0xffu);
    /* 008a561b: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a561d: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a5620: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5621: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5624: mov bl, byte ptr [edi + ebx + 1] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx+0x1u))) & 0xffu);
    /* 008a5628: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a562a: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a562d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a562e: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5631: mov bl, byte ptr [edi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx))) & 0xffu);
    /* 008a5634: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5636: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5637: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a5638: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a563b: jne 0x8a55f8 */ if (!fZ) goto L_008a55f8;
L_008a563d:; BB(0x008a563d);
    /* 008a563d: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_008a5640:; BB(0x008a5640);
    /* 008a5640: mov byte ptr [esi + 0xb], 0x20 */ W8((u32)(r_esi+0xbu), 0x20u);
    /* 008a5644: mov byte ptr [esi + 8], 6 */ W8((u32)(r_esi+0x8u), 0x6u);
    /* 008a5648: mov byte ptr [esi + 0xa], 4 */ W8((u32)(r_esi+0xau), 0x4u);
    /* 008a564c: jmp 0x8a569d */ goto L_008a569d;
L_008a564e:; BB(0x008a564e);
    /* 008a564e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5650: lea ebx, [eax + eax*2] */ r_ebx = (u32)(r_eax+r_eax*2);
    /* 008a5653: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a5656: lea ecx, [ebx + edi - 1] */ r_ecx = (u32)(r_ebx+r_edi+0xffffffffu);
    /* 008a565a: jbe 0x8a5691 */ if ((fC||fZ)) goto L_008a5691;
L_008a565c:; BB(0x008a565c);
    /* 008a565c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a565f: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_008a5662:; BB(0x008a5662);
    /* 008a5662: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a5665: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5668: mov bl, byte ptr [edi + ebx + 2] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx+0x2u))) & 0xffu);
    /* 008a566c: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a566e: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a5671: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5672: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5675: mov bl, byte ptr [edi + ebx + 1] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx+0x1u))) & 0xffu);
    /* 008a5679: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a567b: movzx edi, byte ptr [edx] */ r_edi = (u32)R8((u32)(r_edx));
    /* 008a567e: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a567f: lea ebx, [eax + edi*2] */ r_ebx = (u32)(r_eax+r_edi*2);
    /* 008a5682: mov bl, byte ptr [edi + ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_ebx))) & 0xffu);
    /* 008a5685: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5687: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5688: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a5689: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a568c: jne 0x8a5662 */ if (!fZ) goto L_008a5662;
L_008a568e:; BB(0x008a568e);
    /* 008a568e: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_008a5691:; BB(0x008a5691);
    /* 008a5691: mov byte ptr [esi + 0xb], 0x18 */ W8((u32)(r_esi+0xbu), 0x18u);
    /* 008a5695: mov byte ptr [esi + 8], 2 */ W8((u32)(r_esi+0x8u), 0x2u);
    /* 008a5699: mov byte ptr [esi + 0xa], 3 */ W8((u32)(r_esi+0xau), 0x3u);
L_008a569d:; BB(0x008a569d);
    /* 008a569d: mov byte ptr [esi + 9], 8 */ W8((u32)(r_esi+0x9u), 0x8u);
    /* 008a56a1: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_008a56a4:; BB(0x008a56a4);
    /* 008a56a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a56a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a56a6:; BB(0x008a56a6);
    /* 008a56a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a56a7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a56a8: ret  */ FN_RET(0x008a54a1); r_esp += 4; return;
}

void f_008a56a9(void) /* sub_8A56A9 */
{
    FN_ENTER(0x008a56a9);
    /* 008a56a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a56aa: mov ebp, esp */ r_ebp = r_esp;
    /* 008a56ac: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a56af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a56b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a56b1: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a56b4: mov cl, byte ptr [esi + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x8u))) & 0xffu);
    /* 008a56b7: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a56b9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a56bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a56bc: jne 0x8a58cd */ if (!fZ) goto L_008a58cd;
L_008a56c2:; BB(0x008a56c2);
    /* 008a56c2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008a56c5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a56c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a56c9: je 0x8a56cf */ if (fZ) goto L_008a56cf;
L_008a56cb:; BB(0x008a56cb);
    /* 008a56cb: mov bx, word ptr [ecx + 8] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_ecx+0x8u))) & 0xffffu);
L_008a56cf:; BB(0x008a56cf);
    /* 008a56cf: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a56d2: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 008a56d5: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a56d8: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a56db: jae 0x8a582b */ if (!fC) goto L_008a582b;
L_008a56e1:; BB(0x008a56e1);
    /* 008a56e1: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a56e4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a56e5: je 0x8a57c1 */ if (fZ) goto L_008a57c1;
L_008a56eb:; BB(0x008a56eb);
    /* 008a56eb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a56ec: je 0x8a5757 */ if (fZ) goto L_008a5757;
L_008a56ee:; BB(0x008a56ee);
    /* 008a56ee: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a56ef: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a56f0: jne 0x8a581d */ if (!fZ) goto L_008a581d;
L_008a56f6:; BB(0x008a56f6);
    /* 008a56f6: imul ebx, ebx, 0x11 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x11u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a56f9: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a56fd: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a5700: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 008a5703: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5706: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a5709: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a570c: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a570f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008a5711: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5713: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5715: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5716: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5718: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a571a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a571c: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a571f: jbe 0x8a581d */ if ((fC||fZ)) goto L_008a581d;
L_008a5725:; BB(0x008a5725);
    /* 008a5725: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008a5728:; BB(0x008a5728);
    /* 008a5728: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008a572b: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a572d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a572f: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5732: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5734: shl cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a5737: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a5739: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a573c: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 008a573e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a573f: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a5742: jne 0x8a5747 */ if (!fZ) goto L_008a5747;
L_008a5744:; BB(0x008a5744);
    /* 008a5744: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a5746: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
L_008a5747:; BB(0x008a5747);
    /* 008a5747: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a574a: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a574d: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a5750: jne 0x8a5728 */ if (!fZ) goto L_008a5728;
L_008a5752:; BB(0x008a5752);
    /* 008a5752: jmp 0x8a581d */ goto L_008a581d;
L_008a5757:; BB(0x008a5757);
    /* 008a5757: imul ebx, ebx, 0x55 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x55u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a575a: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a575d: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a5761: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a5764: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a5767: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5769: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a576c: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a576f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5770: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a5773: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5775: shl ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a5777: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5779: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a577b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a577e: jbe 0x8a581d */ if ((fC||fZ)) goto L_008a581d;
L_008a5784:; BB(0x008a5784);
    /* 008a5784: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008a5787:; BB(0x008a5787);
    /* 008a5787: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008a578a: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a578c: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a578f: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5791: shl cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a5794: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a5796: shl cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a5799: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a579b: shl cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a579e: or cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a57a0: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a57a3: mov byte ptr [ebx], cl */ W8((u32)(r_ebx), (u8)r_ecx);
    /* 008a57a5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a57a8: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a57ab: jne 0x8a57b2 */ if (!fZ) goto L_008a57b2;
L_008a57ad:; BB(0x008a57ad);
    /* 008a57ad: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a57af: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a57b0: jmp 0x8a57b4 */ goto L_008a57b4;
L_008a57b2:; BB(0x008a57b2);
    /* 008a57b2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a57b3: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008a57b4:; BB(0x008a57b4);
    /* 008a57b4: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a57b7: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a57ba: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a57bd: jne 0x8a5787 */ if (!fZ) goto L_008a5787;
L_008a57bf:; BB(0x008a57bf);
    /* 008a57bf: jmp 0x8a581d */ goto L_008a581d;
L_008a57c1:; BB(0x008a57c1);
    /* 008a57c1: imul ebx, ebx, 0xff */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0xffu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a57c7: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008a57ca: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a57ce: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 008a57d1: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a57d4: lea ebx, [eax - 1] */ r_ebx = (u32)(r_eax+0xffffffffu);
    /* 008a57d7: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a57d9: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008a57dc: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a57df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a57e0: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a57e2: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a57e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a57e6: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a57e9: jbe 0x8a581d */ if ((fC||fZ)) goto L_008a581d;
L_008a57eb:; BB(0x008a57eb);
    /* 008a57eb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008a57ee:; BB(0x008a57ee);
    /* 008a57ee: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008a57f0: shr bl, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a57f2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a57f5: and bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a57f8: neg bl */ { u32 x = (u8)r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); fC = (b != 0); }
    /* 008a57fa: sbb bl, bl */ { u32 c = fC; u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a - b - c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a57fc: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5802: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008a5804: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a5807: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a580a: jne 0x8a5811 */ if (!fZ) goto L_008a5811;
L_008a580c:; BB(0x008a580c);
    /* 008a580c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008a580e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a580f: jmp 0x8a5812 */ goto L_008a5812;
L_008a5811:; BB(0x008a5811);
    /* 008a5811: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008a5812:; BB(0x008a5812);
    /* 008a5812: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5815: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5818: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008a581b: jne 0x8a57ee */ if (!fZ) goto L_008a57ee;
L_008a581d:; BB(0x008a581d);
    /* 008a581d: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a5820: mov byte ptr [esi + 9], 8 */ W8((u32)(r_esi+0x9u), 0x8u);
    /* 008a5824: mov byte ptr [esi + 0xb], 8 */ W8((u32)(r_esi+0xbu), 0x8u);
    /* 008a5828: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008a582b:; BB(0x008a582b);
    /* 008a582b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a582f: je 0x8a59f6 */ if (fZ) goto L_008a59f6;
L_008a5835:; BB(0x008a5835);
    /* 008a5835: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a5838: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a583b: jne 0x8a5869 */ if (!fZ) goto L_008a5869;
L_008a583d:; BB(0x008a583d);
    /* 008a583d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a583f: lea ecx, [eax + edi - 1] */ r_ecx = (u32)(r_eax+r_edi+0xffffffffu);
    /* 008a5843: lea edi, [edi + eax*2 - 1] */ r_edi = (u32)(r_edi+r_eax*2+0xffffffffu);
    /* 008a5847: jbe 0x8a58bb */ if ((fC||fZ)) goto L_008a58bb;
L_008a5849:; BB(0x008a5849);
    /* 008a5849: mov edx, eax */ r_edx = r_eax;
L_008a584b:; BB(0x008a584b);
    /* 008a584b: movzx bx, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 008a584f: cmp bx, word ptr [ebp - 8] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a5853: jne 0x8a585a */ if (!fZ) goto L_008a585a;
L_008a5855:; BB(0x008a5855);
    /* 008a5855: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a5858: jmp 0x8a585d */ goto L_008a585d;
L_008a585a:; BB(0x008a585a);
    /* 008a585a: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008a585d:; BB(0x008a585d);
    /* 008a585d: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a585f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5860: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a5862: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5863: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5864: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5865: jne 0x8a584b */ if (!fZ) goto L_008a584b;
L_008a5867:; BB(0x008a5867);
    /* 008a5867: jmp 0x8a58bb */ goto L_008a58bb;
L_008a5869:; BB(0x008a5869);
    /* 008a5869: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a586c: jne 0x8a58bb */ if (!fZ) goto L_008a58bb;
L_008a586e:; BB(0x008a586e);
    /* 008a586e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a5870: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008a5873: lea ecx, [edx + edi - 1] */ r_ecx = (u32)(r_edx+r_edi+0xffffffffu);
    /* 008a5877: lea edi, [edi + edx*2 - 1] */ r_edi = (u32)(r_edi+r_edx*2+0xffffffffu);
    /* 008a587b: jbe 0x8a58bb */ if ((fC||fZ)) goto L_008a58bb;
L_008a587d:; BB(0x008a587d);
    /* 008a587d: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 008a5880: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008a5883: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a5886:; BB(0x008a5886);
    /* 008a5886: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5888: lea edx, [ecx - 1] */ r_edx = (u32)(r_ecx+0xffffffffu);
    /* 008a588b: mov bh, byte ptr [edx] */ r_ebx = (r_ebx & 0xffff00ffu) | (((R8((u32)(r_edx))) & 0xffu) << 8);
    /* 008a588d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008a5890: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5892: cmp ebx, dword ptr [ebp - 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5895: jne 0x8a58a0 */ if (!fZ) goto L_008a58a0;
L_008a5897:; BB(0x008a5897);
    /* 008a5897: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a589a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a589b: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a589e: jmp 0x8a58a7 */ goto L_008a58a7;
L_008a58a0:; BB(0x008a58a0);
    /* 008a58a0: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a58a3: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a58a4: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008a58a7:; BB(0x008a58a7);
    /* 008a58a7: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a58a9: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a58aa: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008a58ac: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a58af: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a58b1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a58b2: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a58b4: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a58b5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a58b6: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a58b9: jne 0x8a5886 */ if (!fZ) goto L_008a5886;
L_008a58bb:; BB(0x008a58bb);
    /* 008a58bb: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a58be: mov byte ptr [esi + 8], 4 */ W8((u32)(r_esi+0x8u), 0x4u);
    /* 008a58c2: mov byte ptr [esi + 0xa], 2 */ W8((u32)(r_esi+0xau), 0x2u);
    /* 008a58c6: shl cl, 1 */ { u32 c = (1u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 008a58c8: jmp 0x8a59e7 */ goto L_008a59e7;
L_008a58cd:; BB(0x008a58cd);
    /* 008a58cd: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a58d0: jne 0x8a59f6 */ if (!fZ) goto L_008a59f6;
L_008a58d6:; BB(0x008a58d6);
    /* 008a58d6: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008a58d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a58db: je 0x8a59f6 */ if (fZ) goto L_008a59f6;
L_008a58e1:; BB(0x008a58e1);
    /* 008a58e1: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a58e4: cmp cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a58e7: jne 0x8a5947 */ if (!fZ) goto L_008a5947;
L_008a58e9:; BB(0x008a58e9);
    /* 008a58e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a58eb: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a58ee: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008a58f1: lea ecx, [ecx + edi - 1] */ r_ecx = (u32)(r_ecx+r_edi+0xffffffffu);
    /* 008a58f5: lea edi, [edi + eax*4 - 1] */ r_edi = (u32)(r_edi+r_eax*4+0xffffffffu);
    /* 008a58f9: jbe 0x8a59d9 */ if ((fC||fZ)) goto L_008a59d9;
L_008a58ff:; BB(0x008a58ff);
    /* 008a58ff: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a5902:; BB(0x008a5902);
    /* 008a5902: movzx bx, byte ptr [ecx - 2] */ r_ebx = (r_ebx & 0xffff0000u) | (((u32)R8((u32)(r_ecx+0xfffffffeu))) & 0xffffu);
    /* 008a5907: cmp bx, word ptr [edx + 2] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_edx+0x2u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a590b: jne 0x8a5927 */ if (!fZ) goto L_008a5927;
L_008a590d:; BB(0x008a590d);
    /* 008a590d: movzx bx, byte ptr [ecx - 1] */ r_ebx = (r_ebx & 0xffff0000u) | (((u32)R8((u32)(r_ecx+0xffffffffu))) & 0xffffu);
    /* 008a5912: cmp bx, word ptr [edx + 4] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a5916: jne 0x8a5927 */ if (!fZ) goto L_008a5927;
L_008a5918:; BB(0x008a5918);
    /* 008a5918: movzx bx, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 008a591c: cmp bx, word ptr [edx + 6] */ {  u32 a = (u16)r_ebx; u32 b = R16((u32)(r_edx+0x6u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a5920: jne 0x8a5927 */ if (!fZ) goto L_008a5927;
L_008a5922:; BB(0x008a5922);
    /* 008a5922: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a5925: jmp 0x8a592a */ goto L_008a592a;
L_008a5927:; BB(0x008a5927);
    /* 008a5927: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008a592a:; BB(0x008a592a);
    /* 008a592a: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a592c: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a592d: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a592f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5930: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5931: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5933: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a5935: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a5936: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5937: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a5939: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 008a593b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a593c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a593d: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5940: jne 0x8a5902 */ if (!fZ) goto L_008a5902;
L_008a5942:; BB(0x008a5942);
    /* 008a5942: jmp 0x8a59d9 */ goto L_008a59d9;
L_008a5947:; BB(0x008a5947);
    /* 008a5947: cmp cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a594a: jne 0x8a59d9 */ if (!fZ) goto L_008a59d9;
L_008a5950:; BB(0x008a5950);
    /* 008a5950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); fC = 0; }
    /* 008a5952: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008a5955: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008a5958: lea ecx, [ecx + edi - 1] */ r_ecx = (u32)(r_ecx+r_edi+0xffffffffu);
    /* 008a595c: lea edi, [edi + eax*8 - 1] */ r_edi = (u32)(r_edi+r_eax*8+0xffffffffu);
    /* 008a5960: jbe 0x8a59d9 */ if ((fC||fZ)) goto L_008a59d9;
L_008a5962:; BB(0x008a5962);
    /* 008a5962: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a5965: jmp 0x8a596a */ goto L_008a596a;
L_008a5967:; BB(0x008a5967);
    /* 008a5967: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
L_008a596a:; BB(0x008a596a);
    /* 008a596a: movzx edx, word ptr [edx + 2] */ r_edx = (u32)R16((u32)(r_edx+0x2u));
    /* 008a596e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5970: mov bh, byte ptr [ecx - 5] */ r_ebx = (r_ebx & 0xffff00ffu) | (((R8((u32)(r_ecx+0xfffffffbu))) & 0xffu) << 8);
    /* 008a5973: mov bl, byte ptr [ecx - 4] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx+0xfffffffcu))) & 0xffu);
    /* 008a5976: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5978: jne 0x8a59a8 */ if (!fZ) goto L_008a59a8;
L_008a597a:; BB(0x008a597a);
    /* 008a597a: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008a597d: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 008a5981: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a5983: mov dh, byte ptr [ecx - 3] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_ecx+0xfffffffdu))) & 0xffu) << 8);
    /* 008a5986: mov dl, byte ptr [ecx - 2] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+0xfffffffeu))) & 0xffu);
    /* 008a5989: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a598b: jne 0x8a59a8 */ if (!fZ) goto L_008a59a8;
L_008a598d:; BB(0x008a598d);
    /* 008a598d: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008a5990: movzx ebx, word ptr [ebx + 6] */ r_ebx = (u32)R16((u32)(r_ebx+0x6u));
    /* 008a5994: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a5996: mov dh, byte ptr [ecx - 1] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_ecx+0xffffffffu))) & 0xffu) << 8);
    /* 008a5999: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a599b: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a599d: jne 0x8a59a8 */ if (!fZ) goto L_008a59a8;
L_008a599f:; BB(0x008a599f);
    /* 008a599f: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a59a2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59a3: and byte ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a59a6: jmp 0x8a59af */ goto L_008a59af;
L_008a59a8:; BB(0x008a59a8);
    /* 008a59a8: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008a59ab: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59ac: or byte ptr [edi], 0xff */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0xffu; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_008a59af:; BB(0x008a59af);
    /* 008a59af: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59b1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59b2: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59b4: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59b5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59b6: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59b8: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59ba: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59bb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59bc: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59be: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59c0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59c1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59c2: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59c4: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59c6: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59c7: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59c8: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59ca: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59cc: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59cd: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59ce: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a59d0: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008a59d2: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a59d3: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a59d4: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a59d7: jne 0x8a5967 */ if (!fZ) goto L_008a5967;
L_008a59d9:; BB(0x008a59d9);
    /* 008a59d9: mov cl, byte ptr [esi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi+0x9u))) & 0xffu);
    /* 008a59dc: mov byte ptr [esi + 8], 6 */ W8((u32)(r_esi+0x8u), 0x6u);
    /* 008a59e0: mov byte ptr [esi + 0xa], 4 */ W8((u32)(r_esi+0xau), 0x4u);
    /* 008a59e4: shl cl, 2 */ { u32 c = (2u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
L_008a59e7:; BB(0x008a59e7);
    /* 008a59e7: mov byte ptr [esi + 0xb], cl */ W8((u32)(r_esi+0xbu), (u8)r_ecx);
    /* 008a59ea: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a59ed: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a59f0: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a59f3: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
L_008a59f6:; BB(0x008a59f6);
    /* 008a59f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a59f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a59f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a59f9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a59fa: ret  */ FN_RET(0x008a56a9); r_esp += 4; return;
}

void f_008a59fb(void) /* sub_8A59FB */
{
    FN_ENTER(0x008a59fb);
    /* 008a59fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a59fc: mov ebp, esp */ r_ebp = r_esp;
    /* 008a59fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a59ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5a00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5a01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5a02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5a03: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a5a06: mov cl, byte ptr [edi + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x8u))) & 0xffu);
    /* 008a5a09: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5a0c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a5a0e: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a5a11: jne 0x8a5a86 */ if (!fZ) goto L_008a5a86;
L_008a5a13:; BB(0x008a5a13);
    /* 008a5a13: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5a17: je 0x8a5a86 */ if (fZ) goto L_008a5a86;
L_008a5a19:; BB(0x008a5a19);
    /* 008a5a19: cmp byte ptr [edi + 9], 8 */ {  u32 a = R8((u32)(r_edi+0x9u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5a1d: jne 0x8a5a86 */ if (!fZ) goto L_008a5a86;
L_008a5a1f:; BB(0x008a5a1f);
    /* 008a5a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a5a21: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a5a24: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008a5a27: jbe 0x8a5a67 */ if ((fC||fZ)) goto L_008a5a67;
L_008a5a29:; BB(0x008a5a29);
    /* 008a5a29: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a5a2c: mov ecx, 0xf8 */ r_ecx = 0xf8u;
L_008a5a31:; BB(0x008a5a31);
    /* 008a5a31: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008a5a34: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5a35: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008a5a38: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a5a3a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5a3b: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 008a5a3e: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a5a41: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5a43: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a5a45: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008a5a48: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008a5a4b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a5a4e: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a5a50: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008a5a53: mov al, byte ptr [eax + esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_esi))) & 0xffu);
    /* 008a5a56: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a5a59: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5a5a: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5a5d: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a5a60: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008a5a62: jne 0x8a5a31 */ if (!fZ) goto L_008a5a31;
L_008a5a64:; BB(0x008a5a64);
    /* 008a5a64: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008a5a67:; BB(0x008a5a67);
    /* 008a5a67: mov cl, byte ptr [edi + 9] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x9u))) & 0xffu);
    /* 008a5a6a: mov byte ptr [edi + 0xb], cl */ W8((u32)(r_edi+0xbu), (u8)r_ecx);
    /* 008a5a6d: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 008a5a70: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a5a73: add ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008a5a76: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a5a79: mov byte ptr [edi + 8], 3 */ W8((u32)(r_edi+0x8u), 0x3u);
    /* 008a5a7d: mov byte ptr [edi + 0xa], 1 */ W8((u32)(r_edi+0xau), 0x1u);
    /* 008a5a81: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 008a5a84: jmp 0x8a5b04 */ goto L_008a5b04;
L_008a5a86:; BB(0x008a5a86);
    /* 008a5a86: cmp cl, 6 */ {  u32 a = (u8)r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5a89: jne 0x8a5adf */ if (!fZ) goto L_008a5adf;
L_008a5a8b:; BB(0x008a5a8b);
    /* 008a5a8b: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5a8f: je 0x8a5adf */ if (fZ) goto L_008a5adf;
L_008a5a91:; BB(0x008a5a91);
    /* 008a5a91: cmp byte ptr [edi + 9], 8 */ {  u32 a = R8((u32)(r_edi+0x9u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5a95: jne 0x8a5adf */ if (!fZ) goto L_008a5adf;
L_008a5a97:; BB(0x008a5a97);
    /* 008a5a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a5a99: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008a5a9c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008a5a9f: jbe 0x8a5a67 */ if ((fC||fZ)) goto L_008a5a67;
L_008a5aa1:; BB(0x008a5aa1);
    /* 008a5aa1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a5aa4: mov ecx, 0xf8 */ r_ecx = 0xf8u;
L_008a5aa9:; BB(0x008a5aa9);
    /* 008a5aa9: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008a5aac: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5aad: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 008a5ab0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5ab1: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 008a5ab4: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a5ab6: shl eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a5ab9: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5abb: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a5abd: sar esi, 3 */ { u32 c = (3u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008a5ac0: and esi, 0x1f */ {  u32 a = r_esi; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008a5ac3: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a5ac6: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008a5ac8: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008a5acb: mov al, byte ptr [eax + esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_esi))) & 0xffu);
    /* 008a5ace: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a5ad1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5ad2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a5ad3: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5ad6: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a5ad9: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 008a5adb: jne 0x8a5aa9 */ if (!fZ) goto L_008a5aa9;
L_008a5add:; BB(0x008a5add);
    /* 008a5add: jmp 0x8a5a64 */ goto L_008a5a64;
L_008a5adf:; BB(0x008a5adf);
    /* 008a5adf: cmp cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a5ae2: jne 0x8a5b04 */ if (!fZ) goto L_008a5b04;
L_008a5ae4:; BB(0x008a5ae4);
    /* 008a5ae4: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008a5ae7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5ae9: je 0x8a5b04 */ if (fZ) goto L_008a5b04;
L_008a5aeb:; BB(0x008a5aeb);
    /* 008a5aeb: cmp byte ptr [edi + 9], 8 */ {  u32 a = R8((u32)(r_edi+0x9u)); u32 b = 0x8u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a5aef: jne 0x8a5b04 */ if (!fZ) goto L_008a5b04;
L_008a5af1:; BB(0x008a5af1);
    /* 008a5af1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5af3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008a5af6: jbe 0x8a5b04 */ if ((fC||fZ)) goto L_008a5b04;
L_008a5af8:; BB(0x008a5af8);
    /* 008a5af8: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008a5afb: mov dl, byte ptr [edx + esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_esi))) & 0xffu);
    /* 008a5afe: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 008a5b00: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5b01: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5b02: jne 0x8a5af8 */ if (!fZ) goto L_008a5af8;
L_008a5b04:; BB(0x008a5b04);
    /* 008a5b04: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a5b05: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a5b06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a5b07: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a5b08: ret  */ FN_RET(0x008a59fb); r_esp += 4; return;
}

void f_008a5b09(void) /* sub_8A5B09 */
{
    FN_ENTER(0x008a5b09);
    /* 008a5b09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b0a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a5b0c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a5b0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b10: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a5b13: fld dword ptr [esi + 0x130] */ FPUSH(R_F32((u32)(r_esi+0x130u)));
    /* 008a5b19: fcomp qword ptr [0x998168] */ fx_compare(ST(0), R_F64((u32)(0x998168u))); FPOP();
    /* 008a5b1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a5b21: test ah, 0x44 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x44u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5b24: jnp 0x8a5e0f */ if (!fP) goto L_008a5e0f;
L_008a5b2a:; BB(0x008a5b2a);
    /* 008a5b2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b2c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5b2f: cmp byte ptr [esi + 0x117], cl */ {  u32 a = R8((u32)(r_esi+0x117u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a5b35: ja 0x8a5bb4 */ if ((!fC&&!fZ)) goto L_008a5bb4;
L_008a5b37:; BB(0x008a5b37);
    /* 008a5b37: lea ecx, [esi + 0x134] */ r_ecx = (u32)(r_esi+0x134u);
    /* 008a5b3d: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a5b3f: fcomp qword ptr [0x99ba50] */ fx_compare(ST(0), R_F64((u32)(0x99ba50u))); FPOP();
    /* 008a5b45: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a5b47: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5b4a: jne 0x8a5b5c */ if (!fZ) goto L_008a5b5c;
L_008a5b4c:; BB(0x008a5b4c);
    /* 008a5b4c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a5b4e: fmul dword ptr [esi + 0x130] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x130u));
    /* 008a5b54: fdivr qword ptr [0x998178] */ ST(0) = R_F64((u32)(0x998178u)) / ST(0);
    /* 008a5b5a: jmp 0x8a5b5e */ goto L_008a5b5e;
L_008a5b5c:; BB(0x008a5b5c);
    /* 008a5b5c: fld1  */ FPUSH(1.0);
L_008a5b5e:; BB(0x008a5b5e);
    /* 008a5b5e: mov edi, 0x100 */ r_edi = 0x100u;
    /* 008a5b63: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008a5b66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5b68: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a5b6du); f_008aa89f();
    /* 008a5b6d: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5b72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5b73: mov dword ptr [esi + 0x138], eax */ W32((u32)(r_esi+0x138u), r_eax);
L_008a5b79:; BB(0x008a5b79);
    /* 008a5b79: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 008a5b7c: fmul qword ptr [0x99ba48] */ ST(0) = ST(0) * R_F64((u32)(0x99ba48u));
    /* 008a5b82: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 008a5b85: call 0x8c9c00 */ r_esp -= 4; W32(r_esp, 0x8a5b8au); f_008c9c00();
    /* 008a5b8a: fmul qword ptr [0x99ba40] */ ST(0) = ST(0) * R_F64((u32)(0x99ba40u));
    /* 008a5b90: fadd qword ptr [0x99ba38] */ ST(0) = ST(0) + R_F64((u32)(0x99ba38u));
    /* 008a5b96: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8a5b9bu); f_008cb1e8();
    /* 008a5b9b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008a5b9e: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5ba1: cmp dword ptr [ebp + 8], edi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5ba4: mov ecx, dword ptr [esi + 0x138] */ r_ecx = R32((u32)(r_esi+0x138u));
    /* 008a5baa: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
    /* 008a5bad: jl 0x8a5b79 */ if ((fS!=fO)) goto L_008a5b79;
L_008a5baf:; BB(0x008a5baf);
    /* 008a5baf: jmp 0x8a5e0d */ goto L_008a5e0d;
L_008a5bb4:; BB(0x008a5bb4);
    /* 008a5bb4: test byte ptr [esi + 0x116], 2 */ {  u32 a = R8((u32)(r_esi+0x116u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5bbb: je 0x8a5be0 */ if (fZ) goto L_008a5be0;
L_008a5bbd:; BB(0x008a5bbd);
    /* 008a5bbd: movzx eax, byte ptr [esi + 0x150] */ r_eax = (u32)R8((u32)(r_esi+0x150u));
    /* 008a5bc4: movzx edx, byte ptr [esi + 0x151] */ r_edx = (u32)R8((u32)(r_esi+0x151u));
    /* 008a5bcb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5bcd: jle 0x8a5bd1 */ if ((fZ||fS!=fO)) goto L_008a5bd1;
L_008a5bcf:; BB(0x008a5bcf);
    /* 008a5bcf: mov eax, edx */ r_eax = r_edx;
L_008a5bd1:; BB(0x008a5bd1);
    /* 008a5bd1: movzx edx, byte ptr [esi + 0x152] */ r_edx = (u32)R8((u32)(r_esi+0x152u));
    /* 008a5bd8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5bda: jle 0x8a5be7 */ if ((fZ||fS!=fO)) goto L_008a5be7;
L_008a5bdc:; BB(0x008a5bdc);
    /* 008a5bdc: mov eax, edx */ r_eax = r_edx;
    /* 008a5bde: jmp 0x8a5be7 */ goto L_008a5be7;
L_008a5be0:; BB(0x008a5be0);
    /* 008a5be0: movzx eax, byte ptr [esi + 0x153] */ r_eax = (u32)R8((u32)(r_esi+0x153u));
L_008a5be7:; BB(0x008a5be7);
    /* 008a5be7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a5be9: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5beb: jle 0x8a5bf7 */ if ((fZ||fS!=fO)) goto L_008a5bf7;
L_008a5bed:; BB(0x008a5bed);
    /* 008a5bed: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5bef: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a5bf0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a5bf2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008a5bf5: jmp 0x8a5bfa */ goto L_008a5bfa;
L_008a5bf7:; BB(0x008a5bf7);
    /* 008a5bf7: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_008a5bfa:; BB(0x008a5bfa);
    /* 008a5bfa: test byte ptr [esi + 0x61], 4 */ {  u32 a = R8((u32)(r_esi+0x61u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5bfe: je 0x8a5c0b */ if (fZ) goto L_008a5c0b;
L_008a5c00:; BB(0x008a5c00);
    /* 008a5c00: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5c02: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a5c03: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5c06: jge 0x8a5c0b */ if ((fS==fO)) goto L_008a5c0b;
L_008a5c08:; BB(0x008a5c08);
    /* 008a5c08: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a5c0b:; BB(0x008a5c0b);
    /* 008a5c0b: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5c0e: jle 0x8a5c13 */ if ((fZ||fS!=fO)) goto L_008a5c13;
L_008a5c10:; BB(0x008a5c10);
    /* 008a5c10: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_008a5c13:; BB(0x008a5c13);
    /* 008a5c13: cmp dword ptr [ebp - 4], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5c16: jge 0x8a5c1b */ if ((fS==fO)) goto L_008a5c1b;
L_008a5c18:; BB(0x008a5c18);
    /* 008a5c18: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
L_008a5c1b:; BB(0x008a5c1b);
    /* 008a5c1b: sub ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5c1e: movzx eax, byte ptr [ebp - 4] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffffcu));
    /* 008a5c22: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fC = 0; }
    /* 008a5c24: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a5c25: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a5c27: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a5c2a: lea ecx, [esi + 0x134] */ r_ecx = (u32)(r_esi+0x134u);
    /* 008a5c30: mov dword ptr [esi + 0x12c], eax */ W32((u32)(r_esi+0x12cu), r_eax);
    /* 008a5c36: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008a5c39: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a5c3b: fcomp qword ptr [0x99ba50] */ fx_compare(ST(0), R_F64((u32)(0x99ba50u))); FPOP();
    /* 008a5c41: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008a5c43: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5c46: jne 0x8a5c58 */ if (!fZ) goto L_008a5c58;
L_008a5c48:; BB(0x008a5c48);
    /* 008a5c48: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008a5c4a: fmul dword ptr [esi + 0x130] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x130u));
    /* 008a5c50: fdivr qword ptr [0x998178] */ ST(0) = R_F64((u32)(0x998178u)) / ST(0);
    /* 008a5c56: jmp 0x8a5c5a */ goto L_008a5c5a;
L_008a5c58:; BB(0x008a5c58);
    /* 008a5c58: fld1  */ FPUSH(1.0);
L_008a5c5a:; BB(0x008a5c5a);
    /* 008a5c5a: mov eax, ebx */ r_eax = r_ebx;
    /* 008a5c5c: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008a5c5f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a5c62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5c63: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5c64: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a5c69u); f_008aa89f();
    /* 008a5c69: test word ptr [esi + 0x60], 0x480 */ {  u32 a = R16((u32)(r_esi+0x60u)); u32 b = 0x480u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008a5c6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5c71: mov dword ptr [esi + 0x144], eax */ W32((u32)(r_esi+0x144u), r_eax);
    /* 008a5c77: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008a5c7a: je 0x8a5d77 */ if (fZ) goto L_008a5d77;
L_008a5c80:; BB(0x008a5c80);
    /* 008a5c80: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5c82: jle 0x8a5ca8 */ if ((fZ||fS!=fO)) goto L_008a5ca8;
L_008a5c84:; BB(0x008a5c84);
    /* 008a5c84: mov edi, 0x200 */ r_edi = 0x200u;
L_008a5c89:; BB(0x008a5c89);
    /* 008a5c89: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5c8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5c8b: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a5c90u); f_008aa89f();
    /* 008a5c90: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008a5c93: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5c96: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5c99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5c9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5c9b: mov ecx, dword ptr [esi + 0x144] */ r_ecx = R32((u32)(r_esi+0x144u));
    /* 008a5ca1: mov dword ptr [ecx + edx*4], eax */ W32((u32)(r_ecx+r_edx*4), r_eax);
    /* 008a5ca4: jl 0x8a5c89 */ if ((fS!=fO)) goto L_008a5c89;
L_008a5ca6:; BB(0x008a5ca6);
    /* 008a5ca6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008a5ca8:; BB(0x008a5ca8);
    /* 008a5ca8: fld1  */ FPUSH(1.0);
    /* 008a5caa: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a5cad: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5caf: fdiv qword ptr [ebp - 0x20] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xffffffe0u));
    /* 008a5cb2: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008a5cb5: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008a5cb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008a5cbb: fstp qword ptr [ebp - 0x20] */ W_F64((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008a5cbe: fild dword ptr [ebp - 0x18] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffe8u)));
    /* 008a5cc1: jge 0x8a5cc9 */ if ((fS==fO)) goto L_008a5cc9;
L_008a5cc3:; BB(0x008a5cc3);
    /* 008a5cc3: fadd qword ptr [0x99d978] */ ST(0) = ST(0) + R_F64((u32)(0x99d978u));
L_008a5cc9:; BB(0x008a5cc9);
    /* 008a5cc9: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
L_008a5ccc:; BB(0x008a5ccc);
    /* 008a5ccc: fild dword ptr [ebp + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x8u)));
    /* 008a5ccf: fadd qword ptr [0x99ba38] */ ST(0) = ST(0) + R_F64((u32)(0x99ba38u));
    /* 008a5cd5: fmul qword ptr [0x99d970] */ ST(0) = ST(0) * R_F64((u32)(0x99d970u));
    /* 008a5cdb: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 008a5cde: call 0x8c9c00 */ r_esp -= 4; W32(r_esp, 0x8a5ce3u); f_008c9c00();
    /* 008a5ce3: fmul qword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xffffffd8u));
    /* 008a5ce6: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8a5cebu); f_008cb1e8();
    /* 008a5ceb: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a5ced: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008a5cf0: ja 0x8a5d2f */ if ((!fC&&!fZ)) goto L_008a5d2f;
L_008a5cf2:; BB(0x008a5cf2);
    /* 008a5cf2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a5cf5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5cf7: mov ch, al */ r_ecx = (r_ecx & 0xffff00ffu) | ((((u8)r_eax) & 0xffu) << 8);
    /* 008a5cf9: mov dword ptr [ebp - 8], 0xff */ W32((u32)(r_ebp+0xfffffff8u), 0xffu);
    /* 008a5d00: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008a5d03: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5d06: or dword ptr [ebp - 0xc], eax */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a5d09: sar dword ptr [ebp - 8], cl */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r); fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
L_008a5d0c:; BB(0x008a5d0c);
    /* 008a5d0c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a5d0f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a5d12: mov edx, dword ptr [esi + 0x144] */ r_edx = R32((u32)(r_esi+0x144u));
    /* 008a5d18: mov ebx, edi */ r_ebx = r_edi;
    /* 008a5d1a: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a5d1c: mov cx, word ptr [ebp - 0xc] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 008a5d20: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a5d22: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 008a5d25: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a5d26: cmp edi, dword ptr [ebp - 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5d29: mov word ptr [eax + ebx*2], cx */ W16((u32)(r_eax+r_ebx*2), (u16)r_ecx);
    /* 008a5d2d: jbe 0x8a5d0c */ if ((fC||fZ)) goto L_008a5d0c;
L_008a5d2f:; BB(0x008a5d2f);
    /* 008a5d2f: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5d32: cmp dword ptr [ebp + 8], 0x100 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5d39: jl 0x8a5ccc */ if ((fS!=fO)) goto L_008a5ccc;
L_008a5d3b:; BB(0x008a5d3b);
    /* 008a5d3b: cmp edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5d3e: jae 0x8a5e0d */ if (!fC) goto L_008a5e0d;
L_008a5d44:; BB(0x008a5d44);
    /* 008a5d44: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5d47: mov dword ptr [ebp - 8], 0xff */ W32((u32)(r_ebp+0xfffffff8u), 0xffu);
    /* 008a5d4e: sar dword ptr [ebp - 8], cl */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 c = ((u8)r_ecx) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r); fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
L_008a5d51:; BB(0x008a5d51);
    /* 008a5d51: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a5d54: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a5d57: mov edx, dword ptr [esi + 0x144] */ r_edx = R32((u32)(r_esi+0x144u));
    /* 008a5d5d: mov ebx, edi */ r_ebx = r_edi;
    /* 008a5d5f: shr ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008a5d61: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a5d63: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 008a5d66: or word ptr [eax + ebx*2], 0xffff */ { u32 ad = (u32)(r_eax+r_ebx*2);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 008a5d6c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a5d6d: cmp edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5d70: jb 0x8a5d51 */ if (fC) goto L_008a5d51;
L_008a5d72:; BB(0x008a5d72);
    /* 008a5d72: jmp 0x8a5e0d */ goto L_008a5e0d;
L_008a5d77:; BB(0x008a5d77);
    /* 008a5d77: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5d79: jle 0x8a5e0d */ if ((fZ||fS!=fO)) goto L_008a5e0d;
L_008a5d7f:; BB(0x008a5d7f);
    /* 008a5d7f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a5d82: lea eax, [eax*4 + 0xa34f78] */ r_eax = (u32)(r_eax*4+0xa34f78u);
    /* 008a5d89: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008a5d8c: mov edi, 0x200 */ r_edi = 0x200u;
L_008a5d91:; BB(0x008a5d91);
    /* 008a5d91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5d92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5d93: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a5d98u); f_008aa89f();
    /* 008a5d98: mov edx, dword ptr [esi + 0x144] */ r_edx = R32((u32)(r_esi+0x144u));
    /* 008a5d9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5d9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5da0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a5da3: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 008a5da6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a5da9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a5dab: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a5dae: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008a5db1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5db3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008a5db6:; BB(0x008a5db6);
    /* 008a5db6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a5db9: fild dword ptr [ebp - 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff4u)));
    /* 008a5dbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5dbe: jge 0x8a5dc6 */ if ((fS==fO)) goto L_008a5dc6;
L_008a5dc0:; BB(0x008a5dc0);
    /* 008a5dc0: fadd qword ptr [0x99d978] */ ST(0) = ST(0) + R_F64((u32)(0x99d978u));
L_008a5dc6:; BB(0x008a5dc6);
    /* 008a5dc6: fmul qword ptr [0x99d968] */ ST(0) = ST(0) * R_F64((u32)(0x99d968u));
    /* 008a5dcc: fld qword ptr [ebp - 0x20] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe0u)));
    /* 008a5dcf: call 0x8c9c00 */ r_esp -= 4; W32(r_esp, 0x8a5dd4u); f_008c9c00();
    /* 008a5dd4: fmul qword ptr [0x99d960] */ ST(0) = ST(0) * R_F64((u32)(0x99d960u));
    /* 008a5dda: fadd qword ptr [0x99ba38] */ ST(0) = ST(0) + R_F64((u32)(0x99ba38u));
    /* 008a5de0: call 0x8cb1e8 */ r_esp -= 4; W32(r_esp, 0x8a5de5u); f_008cb1e8();
    /* 008a5de5: mov ecx, dword ptr [esi + 0x144] */ r_ecx = R32((u32)(r_esi+0x144u));
    /* 008a5deb: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008a5dee: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 008a5df1: add dword ptr [ebp - 0xc], 0x100 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5df8: mov word ptr [ebx + ecx], ax */ W16((u32)(r_ebx+r_ecx), (u16)r_eax);
    /* 008a5dfc: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5dfd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5dfe: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5e00: jl 0x8a5db6 */ if ((fS!=fO)) goto L_008a5db6;
L_008a5e02:; BB(0x008a5e02);
    /* 008a5e02: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a5e05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a5e08: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5e0b: jl 0x8a5d91 */ if ((fS!=fO)) goto L_008a5d91;
L_008a5e0d:; BB(0x008a5e0d);
    /* 008a5e0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a5e0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008a5e0f:; BB(0x008a5e0f);
    /* 008a5e0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a5e10: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a5e11: ret  */ FN_RET(0x008a5b09); r_esp += 4; return;
}

void f_008a5e12(void) /* sub_8A5E12 */
{
    FN_ENTER(0x008a5e12);
    /* 008a5e12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e13: mov ebp, esp */ r_ebp = r_esp;
    /* 008a5e15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e16: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e18: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a5e1b: test dword ptr [esi + 0x60], 0x602000 */ {  u32 a = R32((u32)(r_esi+0x60u)); u32 b = 0x602000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5e22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e23: movzx edi, byte ptr [esi + 0x116] */ r_edi = (u32)R8((u32)(r_esi+0x116u));
    /* 008a5e2a: je 0x8a5e80 */ if (fZ) goto L_008a5e80;
L_008a5e2c:; BB(0x008a5e2c);
    /* 008a5e2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e2d: call 0x8a5b09 */ r_esp -= 4; W32(r_esp, 0x8a5e32u); f_008a5b09();
    /* 008a5e32: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5e36: jne 0x8a5e80 */ if (!fZ) goto L_008a5e80;
L_008a5e38:; BB(0x008a5e38);
    /* 008a5e38: movzx ecx, word ptr [esi + 0x108] */ r_ecx = (u32)R16((u32)(r_esi+0x108u));
    /* 008a5e3f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5e41: mov eax, dword ptr [esi + 0x104] */ r_eax = R32((u32)(r_esi+0x104u));
    /* 008a5e47: jle 0x8a5e80 */ if ((fZ||fS!=fO)) goto L_008a5e80;
L_008a5e49:; BB(0x008a5e49);
    /* 008a5e49: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a5e4c:; BB(0x008a5e4c);
    /* 008a5e4c: movzx edx, byte ptr [eax - 2] */ r_edx = (u32)R8((u32)(r_eax+0xfffffffeu));
    /* 008a5e50: mov ebx, dword ptr [esi + 0x138] */ r_ebx = R32((u32)(r_esi+0x138u));
    /* 008a5e56: mov dl, byte ptr [edx + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx))) & 0xffu);
    /* 008a5e59: mov byte ptr [eax - 2], dl */ W8((u32)(r_eax+0xfffffffeu), (u8)r_edx);
    /* 008a5e5c: movzx edx, byte ptr [eax - 1] */ r_edx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 008a5e60: mov ebx, dword ptr [esi + 0x138] */ r_ebx = R32((u32)(r_esi+0x138u));
    /* 008a5e66: mov dl, byte ptr [edx + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx))) & 0xffu);
    /* 008a5e69: mov byte ptr [eax - 1], dl */ W8((u32)(r_eax+0xffffffffu), (u8)r_edx);
    /* 008a5e6c: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008a5e6f: mov ebx, dword ptr [esi + 0x138] */ r_ebx = R32((u32)(r_esi+0x138u));
    /* 008a5e75: mov dl, byte ptr [edx + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx))) & 0xffu);
    /* 008a5e78: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008a5e7a: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5e7d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a5e7e: jne 0x8a5e4c */ if (!fZ) goto L_008a5e4c;
L_008a5e80:; BB(0x008a5e80);
    /* 008a5e80: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5e82: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a5e83: test byte ptr [esi + 0x60], dl */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5e86: je 0x8a5f20 */ if (fZ) goto L_008a5f20;
L_008a5e8c:; BB(0x008a5e8c);
    /* 008a5e8c: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a5e8f: jne 0x8a5f20 */ if (!fZ) goto L_008a5f20;
L_008a5e95:; BB(0x008a5e95);
    /* 008a5e95: movzx eax, byte ptr [esi + 0x150] */ r_eax = (u32)R8((u32)(r_esi+0x150u));
    /* 008a5e9c: movzx ecx, byte ptr [esi + 0x151] */ r_ecx = (u32)R8((u32)(r_esi+0x151u));
    /* 008a5ea3: movzx edi, byte ptr [esi + 0x152] */ r_edi = (u32)R8((u32)(r_esi+0x152u));
    /* 008a5eaa: mov ebx, edx */ r_ebx = r_edx;
    /* 008a5eac: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a5eae: mov eax, edx */ r_eax = r_edx;
    /* 008a5eb0: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a5eb2: mov ecx, edx */ r_ecx = r_edx;
    /* 008a5eb4: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a5eb6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5eb8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a5ebb: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a5ebe: jl 0x8a5ec4 */ if ((fS!=fO)) goto L_008a5ec4;
L_008a5ec0:; BB(0x008a5ec0);
    /* 008a5ec0: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5ec2: jle 0x8a5ec6 */ if ((fZ||fS!=fO)) goto L_008a5ec6;
L_008a5ec4:; BB(0x008a5ec4);
    /* 008a5ec4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_008a5ec6:; BB(0x008a5ec6);
    /* 008a5ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5ec8: jl 0x8a5ece */ if ((fS!=fO)) goto L_008a5ece;
L_008a5eca:; BB(0x008a5eca);
    /* 008a5eca: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5ecc: jle 0x8a5ed2 */ if ((fZ||fS!=fO)) goto L_008a5ed2;
L_008a5ece:; BB(0x008a5ece);
    /* 008a5ece: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a5ed2:; BB(0x008a5ed2);
    /* 008a5ed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a5ed4: jl 0x8a5eda */ if ((fS!=fO)) goto L_008a5eda;
L_008a5ed6:; BB(0x008a5ed6);
    /* 008a5ed6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5ed8: jle 0x8a5ede */ if ((fZ||fS!=fO)) goto L_008a5ede;
L_008a5eda:; BB(0x008a5eda);
    /* 008a5eda: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a5ede:; BB(0x008a5ede);
    /* 008a5ede: mov cx, word ptr [esi + 0x108] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esi+0x108u))) & 0xffffu);
    /* 008a5ee5: test cx, cx */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a5ee8: jbe 0x8a5f20 */ if ((fC||fZ)) goto L_008a5f20;
L_008a5eea:; BB(0x008a5eea);
    /* 008a5eea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008a5eec: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
L_008a5eef:; BB(0x008a5eef);
    /* 008a5eef: mov ecx, dword ptr [esi + 0x104] */ r_ecx = R32((u32)(r_esi+0x104u));
    /* 008a5ef5: lea edx, [eax + ecx] */ r_edx = (u32)(r_eax+r_ecx);
    /* 008a5ef8: mov cl, bl */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008a5efa: shr byte ptr [edx], cl */ { u32 ad = (u32)(r_edx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r); fC = (c <= 8) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 7) & 1; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a5efc: mov ecx, dword ptr [esi + 0x104] */ r_ecx = R32((u32)(r_esi+0x104u));
    /* 008a5f02: lea edx, [eax + ecx + 1] */ r_edx = (u32)(r_eax+r_ecx+0x1u);
    /* 008a5f06: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008a5f09: shr byte ptr [edx], cl */ { u32 ad = (u32)(r_edx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r); fC = (c <= 8) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 7) & 1; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008a5f0b: mov ecx, dword ptr [esi + 0x104] */ r_ecx = R32((u32)(r_esi+0x104u));
    /* 008a5f11: lea edx, [eax + ecx + 2] */ r_edx = (u32)(r_eax+r_ecx+0x2u);
    /* 008a5f15: mov cl, byte ptr [ebp - 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffffcu))) & 0xffu);
    /* 008a5f18: shr byte ptr [edx], cl */ { u32 ad = (u32)(r_edx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r);  } }
    /* 008a5f1a: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008a5f1d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a5f1e: jne 0x8a5eef */ if (!fZ) goto L_008a5eef;
L_008a5f20:; BB(0x008a5f20);
    /* 008a5f20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a5f21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a5f22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a5f23: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a5f24: ret  */ FN_RET(0x008a5e12); r_esp += 4; return;
}

void f_008a5f25(void) /* sub_8A5F25 */
{
    FN_ENTER(0x008a5f25);
    /* 008a5f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f26: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a5f2a: cmp dword ptr [esi + 0xdc], 0 */ {  u32 a = R32((u32)(r_esi+0xdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a5f31: jne 0x8a5f40 */ if (!fZ) goto L_008a5f40;
L_008a5f33:; BB(0x008a5f33);
    /* 008a5f33: push 0x99d9a4 */ { u32 v = 0x99d9a4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f39: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a5f3eu); f_008a3ef0();
    /* 008a5f3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5f3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a5f40:; BB(0x008a5f40);
    /* 008a5f40: test byte ptr [esi + 0x61], 0x10 */ {  u32 a = R8((u32)(r_esi+0x61u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5f44: je 0x8a5fa8 */ if (fZ) goto L_008a5fa8;
L_008a5f46:; BB(0x008a5f46);
    /* 008a5f46: cmp byte ptr [esi + 0xf8], 3 */ {  u32 a = R8((u32)(r_esi+0xf8u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5f4d: jne 0x8a5f7c */ if (!fZ) goto L_008a5f7c;
L_008a5f4f:; BB(0x008a5f4f);
    /* 008a5f4f: movzx eax, word ptr [esi + 0x10a] */ r_eax = (u32)R16((u32)(r_esi+0x10au));
    /* 008a5f56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f57: push dword ptr [esi + 0x15c] */ { u32 v = R32((u32)(r_esi+0x15cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a5f5d: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a5f63: push dword ptr [esi + 0x104] */ { u32 v = R32((u32)(r_esi+0x104u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a5f69: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5f6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f6b: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a5f71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f72: call 0x8a54a1 */ r_esp -= 4; W32(r_esp, 0x8a5f77u); f_008a54a1();
    /* 008a5f77: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a5f7a: jmp 0x8a5fa8 */ goto L_008a5fa8;
L_008a5f7c:; BB(0x008a5f7c);
    /* 008a5f7c: cmp word ptr [esi + 0x10a], 0 */ {  u32 a = R16((u32)(r_esi+0x10au)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008a5f84: je 0x8a5f8f */ if (fZ) goto L_008a5f8f;
L_008a5f86:; BB(0x008a5f86);
    /* 008a5f86: lea eax, [esi + 0x160] */ r_eax = (u32)(r_esi+0x160u);
    /* 008a5f8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f8d: jmp 0x8a5f91 */ goto L_008a5f91;
L_008a5f8f:; BB(0x008a5f8f);
    /* 008a5f8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
L_008a5f91:; BB(0x008a5f91);
    /* 008a5f91: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a5f97: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5f99: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a5f9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5fa0: call 0x8a56a9 */ r_esp -= 4; W32(r_esp, 0x8a5fa5u); f_008a56a9();
    /* 008a5fa5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a5fa8:; BB(0x008a5fa8);
    /* 008a5fa8: test byte ptr [esi + 0x61], 0x20 */ {  u32 a = R8((u32)(r_esi+0x61u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5fac: je 0x8a5fe0 */ if (fZ) goto L_008a5fe0;
L_008a5fae:; BB(0x008a5fae);
    /* 008a5fae: cmp byte ptr [esi + 0x116], 3 */ {  u32 a = R8((u32)(r_esi+0x116u)); u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a5fb5: je 0x8a5fe0 */ if (fZ) goto L_008a5fe0;
L_008a5fb7:; BB(0x008a5fb7);
    /* 008a5fb7: push dword ptr [esi + 0x12c] */ { u32 v = R32((u32)(r_esi+0x12cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a5fbd: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a5fc3: push dword ptr [esi + 0x144] */ { u32 v = R32((u32)(r_esi+0x144u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a5fc9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5fca: push dword ptr [esi + 0x138] */ { u32 v = R32((u32)(r_esi+0x138u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a5fd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5fd1: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a5fd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5fd8: call 0x8a5153 */ r_esp -= 4; W32(r_esp, 0x8a5fddu); f_008a5153();
    /* 008a5fdd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a5fe0:; BB(0x008a5fe0);
    /* 008a5fe0: test byte ptr [esi + 0x61], 4 */ {  u32 a = R8((u32)(r_esi+0x61u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a5fe4: je 0x8a5ffc */ if (fZ) goto L_008a5ffc;
L_008a5fe6:; BB(0x008a5fe6);
    /* 008a5fe6: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a5fec: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a5fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5fee: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a5ff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a5ff5: call 0x8a4ed7 */ r_esp -= 4; W32(r_esp, 0x8a5ffau); f_008a4ed7();
    /* 008a5ffa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a5ffb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a5ffc:; BB(0x008a5ffc);
    /* 008a5ffc: test byte ptr [esi + 0x60], 0x40 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6000: je 0x8a603b */ if (fZ) goto L_008a603b;
L_008a6002:; BB(0x008a6002);
    /* 008a6002: push dword ptr [esi + 0x178] */ { u32 v = R32((u32)(r_esi+0x178u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6008: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a600e: push dword ptr [esi + 0x174] */ { u32 v = R32((u32)(r_esi+0x174u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a6014: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6015: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6016: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a601c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a601d: call 0x8a59fb */ r_esp -= 4; W32(r_esp, 0x8a6022u); f_008a59fb();
    /* 008a6022: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a6025: cmp dword ptr [esi + 0xf4], 0 */ {  u32 a = R32((u32)(r_esi+0xf4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a602c: jne 0x8a603b */ if (!fZ) goto L_008a603b;
L_008a602e:; BB(0x008a602e);
    /* 008a602e: push 0x99d980 */ { u32 v = 0x99d980u; r_esp -= 4; W32(r_esp, v); }
    /* 008a6033: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a6034: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a6039u); f_008a3ef0();
    /* 008a6039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a603a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a603b:; BB(0x008a603b);
    /* 008a603b: test byte ptr [esi + 0x60], 8 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a603f: je 0x8a605f */ if (fZ) goto L_008a605f;
L_008a6041:; BB(0x008a6041);
    /* 008a6041: lea eax, [esi + 0x155] */ r_eax = (u32)(r_esi+0x155u);
    /* 008a6047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6048: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a604e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a604f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6050: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a6056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6057: call 0x8a4d60 */ r_esp -= 4; W32(r_esp, 0x8a605cu); f_008a4d60();
    /* 008a605c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a605f:; BB(0x008a605f);
    /* 008a605f: test byte ptr [esi + 0x60], 4 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a6063: je 0x8a607b */ if (fZ) goto L_008a607b;
L_008a6065:; BB(0x008a6065);
    /* 008a6065: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a606b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a606c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a606d: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a6073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6074: call 0x8a4c50 */ r_esp -= 4; W32(r_esp, 0x8a6079u); f_008a4c50();
    /* 008a6079: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a607a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a607b:; BB(0x008a607b);
    /* 008a607b: test byte ptr [esi + 0x60], 1 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a607f: je 0x8a6097 */ if (fZ) goto L_008a6097;
L_008a6081:; BB(0x008a6081);
    /* 008a6081: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a6087: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a6088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6089: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a608f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a6090: call 0x8a4a67 */ r_esp -= 4; W32(r_esp, 0x8a6095u); f_008a4a67();
    /* 008a6095: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a6096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a6097:; BB(0x008a6097);
    /* 008a6097: test byte ptr [esi + 0x61], 0x80 */ {  u32 a = R8((u32)(r_esi+0x61u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a609b: je 0x8a60bf */ if (fZ) goto L_008a60bf;
L_008a609d:; BB(0x008a609d);
    /* 008a609d: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a60a0: movzx eax, word ptr [esi + 0x11e] */ r_eax = (u32)R16((u32)(r_esi+0x11eu));
    /* 008a60a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a60a8: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a60ae: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a60af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a60b0: lea eax, [esi + 0xf0] */ r_eax = (u32)(r_esi+0xf0u);
    /* 008a60b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a60b7: call 0x8a4f1b */ r_esp -= 4; W32(r_esp, 0x8a60bcu); f_008a4f1b();
    /* 008a60bc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a60bf:; BB(0x008a60bf);
    /* 008a60bf: test byte ptr [esi + 0x60], 0x10 */ {  u32 a = R8((u32)(r_esi+0x60u)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a60c3: je 0x8a60db */ if (fZ) goto L_008a60db;
L_008a60c5:; BB(0x008a60c5);
    /* 008a60c5: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 008a60cb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a60cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a60cd: add esi, 0xf0 */ {  u32 a = r_esi; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a60d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a60d4: call 0x8a4a3a */ r_esp -= 4; W32(r_esp, 0x8a60d9u); f_008a4a3a();
    /* 008a60d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a60da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a60db:; BB(0x008a60db);
    /* 008a60db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a60dc: ret  */ FN_RET(0x008a5f25); r_esp += 4; return;
}

