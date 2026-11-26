#include "protos.h"

void f_008b9075(void) /* sub_8B9075 */
{
    FN_ENTER(0x008b9075);
    /* 008b9075: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9076: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9078: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b907b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b907e: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008b9084: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 008b9087: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b908a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b908c: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b908f: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 008b9092: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b9095: jle 0x8b911c */ if ((fZ||fS!=fO)) goto L_008b911c;
L_008b909b:; BB(0x008b909b);
    /* 008b909b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b909e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b909f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b90a0: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008b90a3: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b90a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b90a6: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008b90a9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b90ac: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_008b90af:; BB(0x008b90af);
    /* 008b90af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b90b1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b90b4: mov esi, dword ptr [eax + edx] */ r_esi = R32((u32)(r_eax+r_edx));
    /* 008b90b7: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008b90b9: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 008b90bc: jbe 0x8b9110 */ if ((fC||fZ)) goto L_008b9110;
L_008b90be:; BB(0x008b90be);
    /* 008b90be: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_008b90c1:; BB(0x008b90c1);
    /* 008b90c1: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 008b90c4: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b90c7: shr ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008b90ca: mov ebx, dword ptr [ebx + ecx*4] */ r_ebx = R32((u32)(r_ebx+r_ecx*4));
    /* 008b90cd: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b90ce: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008b90d1: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008b90d4: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b90d5: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 008b90d8: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008b90db: mov edi, eax */ r_edi = r_eax;
    /* 008b90dd: shl edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b90e0: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b90e2: lea edi, [ebx + edi*2] */ r_edi = (u32)(r_ebx+r_edi*2);
    /* 008b90e5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b90e6: cmp word ptr [edi], 0 */ {  u32 a = R16((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b90ea: jne 0x8b90f9 */ if (!fZ) goto L_008b90f9;
L_008b90ec:; BB(0x008b90ec);
    /* 008b90ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008b90ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b90ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b90f1: call 0x8b8fa5 */ r_esp -= 4; W32(r_esp, 0x8b90f6u); f_008b8fa5();
    /* 008b90f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008b90f9:; BB(0x008b90f9);
    /* 008b90f9: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008b90fb: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b90fe: dec al */ { u32 x = (u8)r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008b9100: inc dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9103: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9106: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 008b9108: jne 0x8b90c1 */ if (!fZ) goto L_008b90c1;
L_008b910a:; BB(0x008b910a);
    /* 008b910a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b910d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_008b9110:; BB(0x008b9110);
    /* 008b9110: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008b9114: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9117: jne 0x8b90af */ if (!fZ) goto L_008b90af;
L_008b9119:; BB(0x008b9119);
    /* 008b9119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b911a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b911b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b911c:; BB(0x008b911c);
    /* 008b911c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b911d: ret  */ FN_RET(0x008b9075); r_esp += 4; return;
}

void f_008b911e(void) /* sub_8B911E */
{
    FN_ENTER(0x008b911e);
    /* 008b911e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b911f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9121: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9124: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9127: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008b912d: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 008b9130: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9131: mov esi, dword ptr [eax + 0x11c] */ r_esi = R32((u32)(r_eax+0x11cu));
    /* 008b9137: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008b913a: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 008b913d: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 008b9140: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 008b9143: mov eax, dword ptr [eax + 0x74] */ r_eax = R32((u32)(r_eax+0x74u));
    /* 008b9146: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 008b9149: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008b914b: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 008b914e: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 008b9151: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008b9154: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 008b9157: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b915a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b915c: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 008b915f: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 008b9162: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 008b9165: jle 0x8b9389 */ if ((fZ||fS!=fO)) goto L_008b9389;
L_008b916b:; BB(0x008b916b);
    /* 008b916b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b916e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b916f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9170: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008b9173: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b9175: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 008b9178: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 008b917b: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 008b917e: jmp 0x8b9183 */ goto L_008b9183;
L_008b9180:; BB(0x008b9180);
    /* 008b9180: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
L_008b9183:; BB(0x008b9183);
    /* 008b9183: cmp byte ptr [ecx + 0x24], 0 */ {  u32 a = R8((u32)(r_ecx+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b9187: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b918a: mov eax, dword ptr [esi + edi] */ r_eax = R32((u32)(r_esi+r_edi));
    /* 008b918d: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008b918f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b9192: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 008b9195: je 0x8b91c5 */ if (fZ) goto L_008b91c5;
L_008b9197:; BB(0x008b9197);
    /* 008b9197: or dword ptr [ebp - 0x38], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008b919b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b919d: and byte ptr [ecx + 0x24], 0 */ { u32 ad = (u32)(r_ecx+0x24u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b91a1: lea eax, [eax + edx*2 - 3] */ r_eax = (u32)(r_eax+r_edx*2+0xfffffffdu);
    /* 008b91a5: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b91a8: lea eax, [esi + edx - 1] */ r_eax = (u32)(r_esi+r_edx+0xffffffffu);
    /* 008b91ac: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b91af: lea eax, [edx + edx*2 + 3] */ r_eax = (u32)(r_edx+r_edx*2+0x3u);
    /* 008b91b3: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 008b91b6: lea esi, [edx + eax*2] */ r_esi = (u32)(r_edx+r_eax*2);
    /* 008b91b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b91bc: mov dword ptr [ebp - 4], 0xfffffffd */ W32((u32)(r_ebp+0xfffffffcu), 0xfffffffdu);
    /* 008b91c3: jmp 0x8b91da */ goto L_008b91da;
L_008b91c5:; BB(0x008b91c5);
    /* 008b91c5: mov esi, dword ptr [ecx + 0x20] */ r_esi = R32((u32)(r_ecx+0x20u));
    /* 008b91c8: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 008b91cf: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 008b91d6: mov byte ptr [ecx + 0x24], 1 */ W8((u32)(r_ecx+0x24u), 0x1u);
L_008b91da:; BB(0x008b91da);
    /* 008b91da: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 008b91dd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b91df: and dword ptr [ebp - 0x20], ebx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b91e2: and dword ptr [ebp - 0x1c], ebx */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b91e5: and dword ptr [ebp - 0x18], ebx */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b91e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b91ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b91ec: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008b91ef: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 008b91f2: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 008b91f5: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 008b91f8: jbe 0x8b9363 */ if ((fC||fZ)) goto L_008b9363;
L_008b91fe:; BB(0x008b91fe);
    /* 008b91fe: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 008b9201: jmp 0x8b9206 */ goto L_008b9206;
L_008b9203:; BB(0x008b9203);
    /* 008b9203: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
L_008b9206:; BB(0x008b9206);
    /* 008b9206: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9209: lea ecx, [esi + ecx*2] */ r_ecx = (u32)(r_esi+r_ecx*2);
    /* 008b920c: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
    /* 008b920f: movsx ecx, word ptr [ecx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx));
    /* 008b9212: lea edx, [ecx + edi + 8] */ r_edx = (u32)(r_ecx+r_edi+0x8u);
    /* 008b9216: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 008b9219: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b921c: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b921f: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 008b9222: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9224: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b9227: movzx edi, byte ptr [edx + edi] */ r_edi = (u32)R8((u32)(r_edx+r_edi));
    /* 008b922b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b922e: movsx edx, word ptr [esi + edx*2 + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+r_edx*2+0x2u));
    /* 008b9233: lea edx, [edx + ebx + 8] */ r_edx = (u32)(r_edx+r_ebx+0x8u);
    /* 008b9237: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 008b923b: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 008b923f: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008b9242: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 008b9245: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b9248: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b924a: movzx ebx, byte ptr [ecx + edx] */ r_ebx = (u32)R8((u32)(r_ecx+r_edx));
    /* 008b924e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9251: movsx ecx, word ptr [esi + ecx*2 + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+r_ecx*2+0x4u));
    /* 008b9256: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b9259: lea ecx, [ecx + edx + 8] */ r_ecx = (u32)(r_ecx+r_edx+0x8u);
    /* 008b925d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9260: sar ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b9263: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 008b9266: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9268: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b926b: movzx eax, byte ptr [ecx + eax] */ r_eax = (u32)R8((u32)(r_ecx+r_eax));
    /* 008b926f: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 008b9272: sar dword ptr [ebp - 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 c = (2u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 008b9276: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9279: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008b927c: sar eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b927f: shl edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008b9282: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9284: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 008b9287: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 008b928a: mov ecx, edi */ r_ecx = r_edi;
    /* 008b928c: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008b928f: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 008b9292: lea eax, [eax + edx*2] */ r_eax = (u32)(r_eax+r_edx*2);
    /* 008b9295: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008b9299: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 008b929c: jne 0x8b92b3 */ if (!fZ) goto L_008b92b3;
L_008b929e:; BB(0x008b929e);
    /* 008b929e: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b92a1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b92a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b92a5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b92a8: call 0x8b8fa5 */ r_esp -= 4; W32(r_esp, 0x8b92adu); f_008b8fa5();
    /* 008b92ad: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 008b92b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008b92b3:; BB(0x008b92b3);
    /* 008b92b3: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 008b92b6: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b92b9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b92ba: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 008b92bc: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 008b92bf: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 008b92c3: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b92c6: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b92c8: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 008b92cb: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 008b92cf: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b92d1: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 008b92d4: movzx ecx, byte ptr [eax + ecx] */ r_ecx = (u32)R8((u32)(r_eax+r_ecx));
    /* 008b92d8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b92db: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b92dd: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008b92e0: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 008b92e3: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b92e5: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b92e7: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 008b92ea: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b92ed: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b92ef: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b92f1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008b92f4: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b92f7: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008b92fa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b92fd: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b92ff: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 008b9302: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 008b9305: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9307: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9309: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 008b930d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b9310: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9312: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9314: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008b9317: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b931a: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008b931d: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008b9320: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b9323: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9325: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008b9328: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b932a: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b932c: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 008b9330: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 008b9333: mov esi, dword ptr [ebp - 0x64] */ r_esi = R32((u32)(r_ebp+0xffffff9cu));
    /* 008b9336: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9338: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b933a: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b933c: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008b933f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b9342: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008b9345: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9348: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b934b: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008b934e: add dword ptr [ebp - 0x10], eax */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9351: dec dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9354: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 008b9357: jne 0x8b9203 */ if (!fZ) goto L_008b9203;
L_008b935d:; BB(0x008b935d);
    /* 008b935d: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
    /* 008b9360: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
L_008b9363:; BB(0x008b9363);
    /* 008b9363: mov ax, word ptr [ebp - 0x18] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe8u))) & 0xffffu);
    /* 008b9367: add dword ptr [ebp - 0x24], 4 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008b936b: dec dword ptr [ebp - 0x44] */ { u32 ad = (u32)(r_ebp+0xffffffbcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b936e: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 008b9371: mov ax, word ptr [ebp - 0x1c] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe4u))) & 0xffffu);
    /* 008b9375: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 008b9379: mov ax, word ptr [ebp - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffe0u))) & 0xffffu);
    /* 008b937d: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 008b9381: jne 0x8b9180 */ if (!fZ) goto L_008b9180;
L_008b9387:; BB(0x008b9387);
    /* 008b9387: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9388: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9389:; BB(0x008b9389);
    /* 008b9389: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b938a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b938b: ret  */ FN_RET(0x008b911e); r_esp += 4; return;
}

void f_008b941c(void) /* sub_8B941C */
{
    FN_ENTER(0x008b941c);
    /* 008b941c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b941d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b941e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008b9422: mov esi, dword ptr [edi + 0x1a4] */ r_esi = R32((u32)(r_edi+0x1a4u));
    /* 008b9428: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008b942b: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 008b942e: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9431: call 0x8b8c7e */ r_esp -= 4; W32(r_esp, 0x8b9436u); f_008b8c7e();
    /* 008b9436: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9437: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9438: mov byte ptr [esi + 0x1c], 1 */ W8((u32)(r_esi+0x1cu), 0x1u);
    /* 008b943c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b943d: ret  */ FN_RET(0x008b941c); r_esp += 4; return;
}

void f_008b943e(void) /* sub_8B943E */
{
    FN_ENTER(0x008b943e);
    /* 008b943e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b943f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9441: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9442: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b9445: cmp dword ptr [esi + 0x4c], 0 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9449: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b944a: mov edi, dword ptr [esi + 0x1a4] */ r_edi = R32((u32)(r_esi+0x1a4u));
    /* 008b9450: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008b9453: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b9456: je 0x8b945f */ if (fZ) goto L_008b945f;
L_008b9458:; BB(0x008b9458);
    /* 008b9458: mov dword ptr [esi + 0x4c], 2 */ W32((u32)(r_esi+0x4cu), 0x2u);
L_008b945f:; BB(0x008b945f);
    /* 008b945f: cmp byte ptr [ebp + 0xc], 0 */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b9463: je 0x8b947c */ if (fZ) goto L_008b947c;
L_008b9465:; BB(0x008b9465);
    /* 008b9465: mov dword ptr [edi + 4], 0x8b864f */ W32((u32)(r_edi+0x4u), 0x8b864fu);
    /* 008b946c: mov dword ptr [edi + 8], 0x8b941c */ W32((u32)(r_edi+0x8u), 0x8b941cu);
    /* 008b9473: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 008b9477: jmp 0x8b9518 */ goto L_008b9518;
L_008b947c:; BB(0x008b947c);
    /* 008b947c: cmp dword ptr [esi + 0x4c], 2 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9480: jne 0x8b948b */ if (!fZ) goto L_008b948b;
L_008b9482:; BB(0x008b9482);
    /* 008b9482: mov dword ptr [edi + 4], 0x8b911e */ W32((u32)(r_edi+0x4u), 0x8b911eu);
    /* 008b9489: jmp 0x8b9492 */ goto L_008b9492;
L_008b948b:; BB(0x008b948b);
    /* 008b948b: mov dword ptr [edi + 4], 0x8b9075 */ W32((u32)(r_edi+0x4u), 0x8b9075u);
L_008b9492:; BB(0x008b9492);
    /* 008b9492: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b9494: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9495: mov dword ptr [edi + 8], 0x857d95 */ W32((u32)(r_edi+0x8u), 0x857d95u);
    /* 008b949c: mov ebx, dword ptr [esi + 0x70] */ r_ebx = R32((u32)(r_esi+0x70u));
    /* 008b949f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b94a0: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b94a2: jge 0x8b94b8 */ if ((fS==fO)) goto L_008b94b8;
L_008b94a4:; BB(0x008b94a4);
    /* 008b94a4: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b94a6: mov dword ptr [ecx + 0x14], 0x37 */ W32((u32)(r_ecx+0x14u), 0x37u);
    /* 008b94ad: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b94af: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b94b2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b94b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b94b5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b94b7u); call_ind(t); }
    /* 008b94b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b94b8:; BB(0x008b94b8);
    /* 008b94b8: mov eax, 0x100 */ r_eax = 0x100u;
    /* 008b94bd: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b94bf: jle 0x8b94d5 */ if ((fZ||fS!=fO)) goto L_008b94d5;
L_008b94c1:; BB(0x008b94c1);
    /* 008b94c1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b94c3: mov dword ptr [ecx + 0x14], 0x38 */ W32((u32)(r_ecx+0x14u), 0x38u);
    /* 008b94ca: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b94cc: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b94cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b94d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b94d2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b94d4u); call_ind(t); }
    /* 008b94d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b94d5:; BB(0x008b94d5);
    /* 008b94d5: cmp dword ptr [esi + 0x4c], 2 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b94d9: jne 0x8b9517 */ if (!fZ) goto L_008b9517;
L_008b94db:; BB(0x008b94db);
    /* 008b94db: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 008b94de: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b94df: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b94e0: lea ebx, [eax + eax*2] */ r_ebx = (u32)(r_eax+r_eax*2);
    /* 008b94e3: shl ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008b94e5: cmp dword ptr [edi + 0x20], 0 */ {  u32 a = R32((u32)(r_edi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b94e9: jne 0x8b94fb */ if (!fZ) goto L_008b94fb;
L_008b94eb:; BB(0x008b94eb);
    /* 008b94eb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b94ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b94ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b94f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b94f2: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b94f5u); call_ind(t); }
    /* 008b94f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b94f8: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_008b94fb:; BB(0x008b94fb);
    /* 008b94fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b94fc: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b94ff: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b9504u); f_008a8d72();
    /* 008b9504: cmp dword ptr [edi + 0x28], 0 */ {  u32 a = R32((u32)(r_edi+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9508: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9509: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b950a: jne 0x8b9513 */ if (!fZ) goto L_008b9513;
L_008b950c:; BB(0x008b950c);
    /* 008b950c: mov eax, esi */ r_eax = r_esi;
    /* 008b950e: call 0x8b938c */ r_esp -= 4; W32(r_esp, 0x8b9513u); f_008b938c();
L_008b9513:; BB(0x008b9513);
    /* 008b9513: and byte ptr [edi + 0x24], 0 */ { u32 ad = (u32)(r_edi+0x24u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_008b9517:; BB(0x008b9517);
    /* 008b9517: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9518:; BB(0x008b9518);
    /* 008b9518: cmp byte ptr [edi + 0x1c], 0 */ {  u32 a = R8((u32)(r_edi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b951c: je 0x8b953c */ if (fZ) goto L_008b953c;
L_008b951e:; BB(0x008b951e);
    /* 008b951e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008b9520:; BB(0x008b9520);
    /* 008b9520: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9523: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9528: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008b952b: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b9530u); f_008a8d72();
    /* 008b9530: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9531: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9534: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9535: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9536: jl 0x8b9520 */ if ((fS!=fO)) goto L_008b9520;
L_008b9538:; BB(0x008b9538);
    /* 008b9538: and byte ptr [edi + 0x1c], 0 */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008b953c:; BB(0x008b953c);
    /* 008b953c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b953d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b953e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b953f: ret  */ FN_RET(0x008b943e); r_esp += 4; return;
}

void f_008b9540(void) /* sub_8B9540 */
{
    FN_ENTER(0x008b9540);
    /* 008b9540: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b9544: mov eax, dword ptr [eax + 0x1a4] */ r_eax = R32((u32)(r_eax+0x1a4u));
    /* 008b954a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 008b954e: ret  */ FN_RET(0x008b9540); r_esp += 4; return;
}

void f_008b954f(void) /* sub_8B954F */
{
    FN_ENTER(0x008b954f);
    /* 008b954f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9550: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9551: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008b9555: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b9558: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9559: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 008b955b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b955d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b955e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b9560u); call_ind(t); }
    /* 008b9560: mov edi, eax */ r_edi = r_eax;
    /* 008b9562: mov dword ptr [esi + 0x1a4], edi */ W32((u32)(r_esi+0x1a4u), r_edi);
    /* 008b9568: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008b956a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b956d: mov dword ptr [edi], 0x8b943e */ W32((u32)(r_edi), 0x8b943eu);
    /* 008b9573: mov dword ptr [edi + 0xc], 0x8b9540 */ W32((u32)(r_edi+0xcu), 0x8b9540u);
    /* 008b957a: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 008b957d: mov dword ptr [edi + 0x28], ebp */ W32((u32)(r_edi+0x28u), r_ebp);
    /* 008b9580: cmp dword ptr [esi + 0x64], 3 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9584: je 0x8b9595 */ if (fZ) goto L_008b9595;
L_008b9586:; BB(0x008b9586);
    /* 008b9586: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9588: mov dword ptr [eax + 0x14], 0x2e */ W32((u32)(r_eax+0x14u), 0x2eu);
    /* 008b958f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9591: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9592: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b9594u); call_ind(t); }
    /* 008b9594: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b9595:; BB(0x008b9595);
    /* 008b9595: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b9598: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9599: mov ebx, 0x80 */ r_ebx = 0x80u;
    /* 008b959e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b959f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b95a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b95a2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b95a4u); call_ind(t); }
    /* 008b95a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b95a7: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
L_008b95aa:; BB(0x008b95aa);
    /* 008b95aa: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b95ad: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 008b95b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b95b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b95b5: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b95b8u); call_ind(t); }
    /* 008b95b8: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008b95bb: mov dword ptr [ecx + ebp], eax */ W32((u32)(r_ecx+r_ebp), r_eax);
    /* 008b95be: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008b95c1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b95c4: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b95c6: jl 0x8b95aa */ if ((fS!=fO)) goto L_008b95aa;
L_008b95c8:; BB(0x008b95c8);
    /* 008b95c8: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 008b95cc: cmp byte ptr [esi + 0x5a], 0 */ {  u32 a = R8((u32)(r_esi+0x5au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b95d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b95d1: je 0x8b9625 */ if (fZ) goto L_008b9625;
L_008b95d3:; BB(0x008b95d3);
    /* 008b95d3: mov ebp, dword ptr [esi + 0x54] */ r_ebp = R32((u32)(r_esi+0x54u));
    /* 008b95d6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008b95d8: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008b95d9: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b95db: jge 0x8b95f1 */ if ((fS==fO)) goto L_008b95f1;
L_008b95dd:; BB(0x008b95dd);
    /* 008b95dd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b95df: mov dword ptr [ecx + 0x14], 0x37 */ W32((u32)(r_ecx+0x14u), 0x37u);
    /* 008b95e6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b95e8: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b95eb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b95ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b95ee: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b95f0u); call_ind(t); }
    /* 008b95f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b95f1:; BB(0x008b95f1);
    /* 008b95f1: mov eax, 0x100 */ r_eax = 0x100u;
    /* 008b95f6: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b95f8: jle 0x8b960e */ if ((fZ||fS!=fO)) goto L_008b960e;
L_008b95fa:; BB(0x008b95fa);
    /* 008b95fa: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b95fc: mov dword ptr [ecx + 0x14], 0x38 */ W32((u32)(r_ecx+0x14u), 0x38u);
    /* 008b9603: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b9605: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b9608: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b960a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b960b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b960du); call_ind(t); }
    /* 008b960d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b960e:; BB(0x008b960e);
    /* 008b960e: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b9611: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9613: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9614: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9616: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9617: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8b961au); call_ind(t); }
    /* 008b961a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b961d: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008b9620: mov dword ptr [edi + 0x14], ebp */ W32((u32)(r_edi+0x14u), r_ebp);
    /* 008b9623: jmp 0x8b9629 */ goto L_008b9629;
L_008b9625:; BB(0x008b9625);
    /* 008b9625: and dword ptr [edi + 0x10], 0 */ { u32 ad = (u32)(r_edi+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008b9629:; BB(0x008b9629);
    /* 008b9629: cmp dword ptr [esi + 0x4c], 0 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b962d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008b962f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9630: je 0x8b9635 */ if (fZ) goto L_008b9635;
L_008b9632:; BB(0x008b9632);
    /* 008b9632: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
L_008b9635:; BB(0x008b9635);
    /* 008b9635: cmp dword ptr [esi + 0x4c], ecx */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9638: jne 0x8b965e */ if (!fZ) goto L_008b965e;
L_008b963a:; BB(0x008b963a);
    /* 008b963a: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 008b963d: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008b9640: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9642: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008b9645: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b9647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b9648: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b964a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b964b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b964eu); call_ind(t); }
    /* 008b964e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b9651: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 008b9654: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9655: mov eax, esi */ r_eax = r_esi;
    /* 008b9657: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b9659: jmp 0x8b938c */ f_008b938c(); return;
L_008b965e:; BB(0x008b965e);
    /* 008b965e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b965f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9660: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b9661: ret  */ FN_RET(0x008b954f); r_esp += 4; return;
}

void f_008b9662(void) /* sub_8B9662 */
{
    FN_ENTER(0x008b9662);
    /* 008b9662: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9663: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9665: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9668: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9669: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b966a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b966d: mov edx, dword ptr [esi + 0x54] */ r_edx = R32((u32)(r_esi+0x54u));
    /* 008b9670: mov ebx, dword ptr [esi + 0x64] */ r_ebx = R32((u32)(r_esi+0x64u));
    /* 008b9673: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9674: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b9676: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b9679: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008b967a:; BB(0x008b967a);
    /* 008b967a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b967b: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b967e: mov eax, edi */ r_eax = r_edi;
    /* 008b9680: jle 0x8b968b */ if ((fZ||fS!=fO)) goto L_008b968b;
L_008b9682:; BB(0x008b9682);
    /* 008b9682: lea ecx, [ebx - 1] */ r_ecx = (u32)(r_ebx+0xffffffffu);
L_008b9685:; BB(0x008b9685);
    /* 008b9685: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b9688: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008b9689: jne 0x8b9685 */ if (!fZ) goto L_008b9685;
L_008b968b:; BB(0x008b968b);
    /* 008b968b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b968d: jle 0x8b967a */ if ((fZ||fS!=fO)) goto L_008b967a;
L_008b968f:; BB(0x008b968f);
    /* 008b968f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b9690: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9693: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008b9696: jge 0x8b96ac */ if ((fS==fO)) goto L_008b96ac;
L_008b9698:; BB(0x008b9698);
    /* 008b9698: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b969a: mov dword ptr [ecx + 0x14], 0x37 */ W32((u32)(r_ecx+0x14u), 0x37u);
    /* 008b96a1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008b96a3: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008b96a6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b96a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b96a9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b96abu); call_ind(t); }
    /* 008b96ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b96ac:; BB(0x008b96ac);
    /* 008b96ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b96ae: mov dword ptr [ebp - 0xc], 1 */ W32((u32)(r_ebp+0xfffffff4u), 0x1u);
    /* 008b96b5: jle 0x8b96d4 */ if ((fZ||fS!=fO)) goto L_008b96d4;
L_008b96b7:; BB(0x008b96b7);
    /* 008b96b7: mov eax, edi */ r_eax = r_edi;
    /* 008b96b9: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008b96bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008b96be: mov edx, ebx */ r_edx = r_ebx;
    /* 008b96c0: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_008b96c2:; BB(0x008b96c2);
    /* 008b96c2: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b96c5: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b96c9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008b96ca: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b96cd: jne 0x8b96c2 */ if (!fZ) goto L_008b96c2;
L_008b96cf:; BB(0x008b96cf);
    /* 008b96cf: jmp 0x8b96d4 */ goto L_008b96d4;
L_008b96d1:; BB(0x008b96d1);
    /* 008b96d1: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_008b96d4:; BB(0x008b96d4);
    /* 008b96d4: and byte ptr [ebp - 1], 0 */ { u32 ad = (u32)(r_ebp+0xffffffffu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b96d8: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b96dc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b96de: jle 0x8b9725 */ if ((fZ||fS!=fO)) goto L_008b9725;
L_008b96e0:; BB(0x008b96e0);
    /* 008b96e0: jmp 0x8b96e5 */ goto L_008b96e5;
L_008b96e2:; BB(0x008b96e2);
    /* 008b96e2: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
L_008b96e5:; BB(0x008b96e5);
    /* 008b96e5: cmp dword ptr [esi + 0x28], 2 */ {  u32 a = R32((u32)(r_esi+0x28u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b96e9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b96ec: jne 0x8b96f5 */ if (!fZ) goto L_008b96f5;
L_008b96ee:; BB(0x008b96ee);
    /* 008b96ee: mov eax, dword ptr [eax*4 + 0x99ec70] */ r_eax = R32((u32)(r_eax*4+0x99ec70u));
L_008b96f5:; BB(0x008b96f5);
    /* 008b96f5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b96f8: lea ecx, [ecx + eax*4] */ r_ecx = (u32)(r_ecx+r_eax*4);
    /* 008b96fb: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b96fe: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008b9700: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b9701: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x008b9701, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b9701, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b9703: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 008b9706: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b9709: cmp eax, dword ptr [ebp - 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b970c: jg 0x8b971f */ if ((!fZ&&fS==fO)) goto L_008b971f;
L_008b970e:; BB(0x008b970e);
    /* 008b970e: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9711: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9714: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 008b9716: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b9719: mov byte ptr [ebp - 1], 1 */ W8((u32)(r_ebp+0xffffffffu), 0x1u);
    /* 008b971d: jl 0x8b96e2 */ if ((fS!=fO)) goto L_008b96e2;
L_008b971f:; BB(0x008b971f);
    /* 008b971f: cmp byte ptr [ebp - 1], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b9723: jne 0x8b96d1 */ if (!fZ) goto L_008b96d1;
L_008b9725:; BB(0x008b9725);
    /* 008b9725: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9728: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9729: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b972a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b972b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b972c: ret  */ FN_RET(0x008b9662); r_esp += 4; return;
}

void f_008b972d(void) /* sub_8B972D */
{
    FN_ENTER(0x008b972d);
    /* 008b972d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b972e: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9730: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9733: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9734: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9735: mov edi, dword ptr [esi + 0x1a4] */ r_edi = R32((u32)(r_esi+0x1a4u));
    /* 008b973b: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008b973e: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9741: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9742: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9743: call 0x8b9662 */ r_esp -= 4; W32(r_esp, 0x8b9748u); f_008b9662();
    /* 008b9748: cmp dword ptr [esi + 0x64], 3 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b974c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b974d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b974e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9750: mov ebx, eax */ r_ebx = r_eax;
    /* 008b9752: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9754: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9755: jne 0x8b977b */ if (!fZ) goto L_008b977b;
L_008b9757:; BB(0x008b9757);
    /* 008b9757: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b975a: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 008b975c: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 008b975e: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008b9761: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9764: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 008b9767: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008b976a: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 008b976d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008b9770: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9772: mov dword ptr [eax + 0x14], 0x5d */ W32((u32)(r_eax+0x14u), 0x5du);
    /* 008b9779: jmp 0x8b9787 */ goto L_008b9787;
L_008b977b:; BB(0x008b977b);
    /* 008b977b: mov dword ptr [eax + 0x14], 0x5e */ W32((u32)(r_eax+0x14u), 0x5eu);
    /* 008b9782: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9784: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
L_008b9787:; BB(0x008b9787);
    /* 008b9787: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9789: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b978cu); call_ind(t); }
    /* 008b978c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b978f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9790: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9791: push dword ptr [esi + 0x64] */ { u32 v = R32((u32)(r_esi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9794: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9795: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9797: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9798: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8b979bu); call_ind(t); }
    /* 008b979b: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b979f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b97a2: cmp dword ptr [esi + 0x64], 0 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b97a6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008b97a9: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008b97ac: jle 0x8b984d */ if ((fZ||fS!=fO)) goto L_008b984d;
L_008b97b2:; BB(0x008b97b2);
    /* 008b97b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b97b5: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
L_008b97b8:; BB(0x008b97b8);
    /* 008b97b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b97bb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b97bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b97c0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b97c1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b97c1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b97c1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b97c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b97c5: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b97c7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008b97ca: jle 0x8b982d */ if ((fZ||fS!=fO)) goto L_008b982d;
L_008b97cc:; BB(0x008b97cc);
    /* 008b97cc: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 008b97cf: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008b97d2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b97d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b97d5: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b97d8: sar dword ptr [ebp - 0xc], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 008b97db: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008b97de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_008b97e1:; BB(0x008b97e1);
    /* 008b97e1: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b97e4: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b97e6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b97e7: idiv dword ptr [ebp - 0x2c] */ { i32 d = (i32)R32((u32)(r_ebp+0xffffffd4u)); if (!d) UNSUP(0x008b97e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b97e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b97ea: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b97ed: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008b97f0: jmp 0x8b9818 */ goto L_008b9818;
L_008b97f2:; BB(0x008b97f2);
    /* 008b97f2: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b97f6: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b97fa: jle 0x8b9815 */ if ((fZ||fS!=fO)) goto L_008b9815;
L_008b97fc:; BB(0x008b97fc);
    /* 008b97fc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b97ff: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b9801: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9804: mov cl, byte ptr [ebp - 0x30] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffd0u))) & 0xffu);
    /* 008b9807: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b980a: mov byte ptr [eax + edx], cl */ W8((u32)(r_eax+r_edx), (u8)r_ecx);
    /* 008b980d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9810: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9813: jl 0x8b97fc */ if ((fS!=fO)) goto L_008b97fc;
L_008b9815:; BB(0x008b9815);
    /* 008b9815: add edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008b9818:; BB(0x008b9818);
    /* 008b9818: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b981a: jl 0x8b97f2 */ if ((fS!=fO)) goto L_008b97f2;
L_008b981c:; BB(0x008b981c);
    /* 008b981c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b981f: add dword ptr [ebp - 0x10], eax */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9822: add edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9828: dec dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b982b: jne 0x8b97e1 */ if (!fZ) goto L_008b97e1;
L_008b982d:; BB(0x008b982d);
    /* 008b982d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9830: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9833: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9837: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b983b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b983e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b9841: cmp eax, dword ptr [esi + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9844: jl 0x8b97b8 */ if ((fS!=fO)) goto L_008b97b8;
L_008b984a:; BB(0x008b984a);
    /* 008b984a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_008b984d:; BB(0x008b984d);
    /* 008b984d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9850: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9851: mov dword ptr [ecx + 0x14], ebx */ W32((u32)(r_ecx+0x14u), r_ebx);
    /* 008b9854: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 008b9857: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b9858: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9859: ret  */ FN_RET(0x008b972d); r_esp += 4; return;
}

void f_008b985a(void) /* sub_8B985A */
{
    FN_ENTER(0x008b985a);
    /* 008b985a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b985b: mov ebp, esp */ r_ebp = r_esp;
    /* 008b985d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9860: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9861: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9862: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9863: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b9866: cmp dword ptr [edi + 0x4c], 1 */ {  u32 a = R32((u32)(r_edi+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b986a: mov esi, dword ptr [edi + 0x1a4] */ r_esi = R32((u32)(r_edi+0x1a4u));
    /* 008b9870: jne 0x8b987f */ if (!fZ) goto L_008b987f;
L_008b9872:; BB(0x008b9872);
    /* 008b9872: mov dword ptr [ebp - 0xc], 0x1fe */ W32((u32)(r_ebp+0xfffffff4u), 0x1feu);
    /* 008b9879: mov byte ptr [esi + 0x1c], 1 */ W8((u32)(r_esi+0x1cu), 0x1u);
    /* 008b987d: jmp 0x8b9887 */ goto L_008b9887;
L_008b987f:; BB(0x008b987f);
    /* 008b987f: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9883: and byte ptr [esi + 0x1c], 0 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_008b9887:; BB(0x008b9887);
    /* 008b9887: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b988a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b988d: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b9890: add ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9896: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9897: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9899: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b989a: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8b989du); call_ind(t); }
    /* 008b989d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b989f: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008b98a2: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008b98a5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b98a8: cmp dword ptr [edi + 0x64], ebx */ {  u32 a = R32((u32)(r_edi+0x64u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b98ab: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008b98ae: jle 0x8b9980 */ if ((fZ||fS!=fO)) goto L_008b9980;
L_008b98b4:; BB(0x008b98b4);
    /* 008b98b4: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 008b98b7: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b98ba: jmp 0x8b98bf */ goto L_008b98bf;
L_008b98bc:; BB(0x008b98bc);
    /* 008b98bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_008b98bf:; BB(0x008b98bf);
    /* 008b98bf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b98c2: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b98c4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b98c5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008b98c5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b98c5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b98c7: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b98cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b98ce: je 0x8b98dc */ if (fZ) goto L_008b98dc;
L_008b98d0:; BB(0x008b98d0);
    /* 008b98d0: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008b98d3: lea eax, [eax + ebx*4] */ r_eax = (u32)(r_eax+r_ebx*4);
    /* 008b98d6: add dword ptr [eax], 0xff */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008b98dc:; BB(0x008b98dc);
    /* 008b98dc: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008b98df: mov edi, dword ptr [eax + ebx*4] */ r_edi = R32((u32)(r_eax+r_ebx*4));
    /* 008b98e2: lea eax, [ecx + 0xfe] */ r_eax = (u32)(r_ecx+0xfeu);
    /* 008b98e8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b98e9: lea ebx, [ecx + ecx - 2] */ r_ebx = (u32)(r_ecx+r_ecx+0xfffffffeu);
    /* 008b98ed: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b98ed, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b98ed, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b98ef: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b98f3: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b98f7: mov edx, eax */ r_edx = r_eax;
L_008b98f9:; BB(0x008b98f9);
    /* 008b98f9: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b98fc: jle 0x8b992c */ if ((fZ||fS!=fO)) goto L_008b992c;
L_008b98fe:; BB(0x008b98fe);
    /* 008b98fe: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9901: lea ebx, [ecx + ecx - 2] */ r_ebx = (u32)(r_ecx+r_ecx+0xfffffffeu);
    /* 008b9905: imul eax, eax, 0x1fe */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x1feu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b990b: jmp 0x8b9910 */ goto L_008b9910;
L_008b990d:; BB(0x008b990d);
    /* 008b990d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_008b9910:; BB(0x008b9910);
    /* 008b9910: add eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9915: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b9918: lea eax, [eax + ecx + 0xfe] */ r_eax = (u32)(r_eax+r_ecx+0xfeu);
    /* 008b991f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b9920: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b9920, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b9920, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b9922: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9925: mov edx, eax */ r_edx = r_eax;
    /* 008b9927: cmp dword ptr [ebp - 4], edx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b992a: jg 0x8b990d */ if ((!fZ&&fS==fO)) goto L_008b990d;
L_008b992c:; BB(0x008b992c);
    /* 008b992c: mov al, byte ptr [ebp - 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff8u))) & 0xffu);
    /* 008b992f: imul byte ptr [ebp - 0x14] */ { i32 t = (i32)(i8)r_eax * (i32)(i8)R8((u32)(r_ebp+0xffffffecu)); r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); fC = fO = (t != (i32)(i8)t); }
    /* 008b9932: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9935: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9938: cmp dword ptr [ebp - 4], 0xff */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b993f: mov byte ptr [ebx + edi], al */ W8((u32)(r_ebx+r_edi), (u8)r_eax);
    /* 008b9942: jle 0x8b98f9 */ if ((fZ||fS!=fO)) goto L_008b98f9;
L_008b9944:; BB(0x008b9944);
    /* 008b9944: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9948: je 0x8b9969 */ if (fZ) goto L_008b9969;
L_008b994a:; BB(0x008b994a);
    /* 008b994a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b994c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b994d: lea eax, [edi + 0xff] */ r_eax = (u32)(r_edi+0xffu);
    /* 008b9953: lea ecx, [edi - 1] */ r_ecx = (u32)(r_edi+0xffffffffu);
L_008b9956:; BB(0x008b9956);
    /* 008b9956: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008b9958: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 008b995a: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008b995c: mov byte ptr [eax + edx], bl */ W8((u32)(r_eax+r_edx), (u8)r_ebx);
    /* 008b995f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9960: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9961: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9967: jle 0x8b9956 */ if ((fZ||fS!=fO)) goto L_008b9956;
L_008b9969:; BB(0x008b9969);
    /* 008b9969: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b996c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b996f: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9973: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9974: cmp ebx, dword ptr [eax + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9977: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008b997a: jl 0x8b98bc */ if ((fS!=fO)) goto L_008b98bc;
L_008b9980:; BB(0x008b9980);
    /* 008b9980: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9981: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9982: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b9983: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9984: ret  */ FN_RET(0x008b985a); r_esp += 4; return;
}

void f_008b9985(void) /* sub_8B9985 */
{
    FN_ENTER(0x008b9985);
    /* 008b9985: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9986: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9988: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b998b: mov edx, dword ptr [edi + 0x1a4] */ r_edx = R32((u32)(r_edi+0x1a4u));
    /* 008b9991: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9995: cmp dword ptr [edi + 0x64], 0 */ {  u32 a = R32((u32)(r_edi+0x64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9999: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b999c: jle 0x8b9a48 */ if ((fZ||fS!=fO)) goto L_008b9a48;
L_008b99a2:; BB(0x008b99a2);
    /* 008b99a2: lea ecx, [edx + 0x34] */ r_ecx = (u32)(r_edx+0x34u);
    /* 008b99a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b99a6: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b99a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008b99aa:; BB(0x008b99aa);
    /* 008b99aa: mov esi, dword ptr [ecx - 0x14] */ r_esi = R32((u32)(r_ecx+0xffffffecu));
    /* 008b99ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b99af: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b99b2: jle 0x8b99ce */ if ((fZ||fS!=fO)) goto L_008b99ce;
L_008b99b4:; BB(0x008b99b4);
    /* 008b99b4: lea ebx, [edx + 0x20] */ r_ebx = (u32)(r_edx+0x20u);
L_008b99b7:; BB(0x008b99b7);
    /* 008b99b7: cmp esi, dword ptr [ebx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b99b9: je 0x8b99c6 */ if (fZ) goto L_008b99c6;
L_008b99bb:; BB(0x008b99bb);
    /* 008b99bb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b99bc: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b99bf: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b99c2: jl 0x8b99b7 */ if ((fS!=fO)) goto L_008b99b7;
L_008b99c4:; BB(0x008b99c4);
    /* 008b99c4: jmp 0x8b99ce */ goto L_008b99ce;
L_008b99c6:; BB(0x008b99c6);
    /* 008b99c6: mov eax, dword ptr [edx + eax*4 + 0x34] */ r_eax = R32((u32)(r_edx+r_eax*4+0x34u));
    /* 008b99ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b99cc: jne 0x8b9a2f */ if (!fZ) goto L_008b9a2f;
L_008b99ce:; BB(0x008b99ce);
    /* 008b99ce: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008b99d1: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 008b99d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b99d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b99d9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b99dbu); call_ind(t); }
    /* 008b99db: shl esi, 9 */ { u32 c = (9u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008b99de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b99e1: sub esi, 0x200 */ {  u32 a = r_esi; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b99e7: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b99ea: mov ebx, esi */ r_ebx = r_esi;
    /* 008b99ec: mov dword ptr [ebp - 8], 0x99eb70 */ W32((u32)(r_ebp+0xfffffff8u), 0x99eb70u);
    /* 008b99f3: mov ecx, eax */ r_ecx = r_eax;
L_008b99f5:; BB(0x008b99f5);
    /* 008b99f5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008b99f7:; BB(0x008b99f7);
    /* 008b99f7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b99fa: movzx edx, byte ptr [eax + esi] */ r_edx = (u32)R8((u32)(r_eax+r_esi));
    /* 008b99fe: imul edx, edx, 0x1fe */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1feu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b9a04: mov eax, 0xfe01 */ r_eax = 0xfe01u;
    /* 008b9a09: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b9a0b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b9a0c: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x008b9a0c, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b9a0c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b9a0e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9a0f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008b9a11: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9a14: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9a17: jl 0x8b99f7 */ if ((fS!=fO)) goto L_008b99f7;
L_008b9a19:; BB(0x008b9a19);
    /* 008b9a19: add dword ptr [ebp - 8], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9a1d: cmp dword ptr [ebp - 8], 0x99ec70 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x99ec70u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9a24: jl 0x8b99f5 */ if ((fS!=fO)) goto L_008b99f5;
L_008b9a26:; BB(0x008b9a26);
    /* 008b9a26: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b9a29: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b9a2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
L_008b9a2f:; BB(0x008b9a2f);
    /* 008b9a2f: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9a32: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008b9a34: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9a37: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9a3a: cmp eax, dword ptr [edi + 0x64] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9a3d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b9a40: jl 0x8b99aa */ if ((fS!=fO)) goto L_008b99aa;
L_008b9a46:; BB(0x008b9a46);
    /* 008b9a46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9a47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9a48:; BB(0x008b9a48);
    /* 008b9a48: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9a49: ret  */ FN_RET(0x008b9985); r_esp += 4; return;
}

void f_008b9a4a(void) /* sub_8B9A4A */
{
    FN_ENTER(0x008b9a4a);
    /* 008b9a4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9a4b: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9a4d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9a50: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9a53: mov ecx, dword ptr [eax + 0x1a4] */ r_ecx = R32((u32)(r_eax+0x1a4u));
    /* 008b9a59: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b9a5c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b9a5e: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 008b9a61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9a62: mov esi, dword ptr [eax + 0x5c] */ r_esi = R32((u32)(r_eax+0x5cu));
    /* 008b9a65: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 008b9a68: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b9a6b: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008b9a6e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b9a71: jle 0x8b9acf */ if ((fZ||fS!=fO)) goto L_008b9acf;
L_008b9a73:; BB(0x008b9a73);
    /* 008b9a73: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b9a76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9a77: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9a78: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008b9a7b: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b9a7d: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
L_008b9a80:; BB(0x008b9a80);
    /* 008b9a80: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b9a82: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008b9a84: mov edx, dword ptr [edi + ecx] */ r_edx = R32((u32)(r_edi+r_ecx));
    /* 008b9a87: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
    /* 008b9a8a: jbe 0x8b9ac5 */ if ((fC||fZ)) goto L_008b9ac5;
L_008b9a8c:; BB(0x008b9a8c);
    /* 008b9a8c: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
L_008b9a8f:; BB(0x008b9a8f);
    /* 008b9a8f: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9a93: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b9a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b9a97: jle 0x8b9ab2 */ if ((fZ||fS!=fO)) goto L_008b9ab2;
L_008b9a99:; BB(0x008b9a99);
    /* 008b9a99: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 008b9a9c: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9a9f: mov ebx, dword ptr [ebx + esi*4] */ r_ebx = R32((u32)(r_ebx+r_esi*4));
    /* 008b9aa2: movzx eax, byte ptr [ebx + eax] */ r_eax = (u32)R8((u32)(r_ebx+r_eax));
    /* 008b9aa6: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9aa9: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b9aac: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9aad: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9aae: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9ab0: jl 0x8b9a99 */ if ((fS!=fO)) goto L_008b9a99;
L_008b9ab2:; BB(0x008b9ab2);
    /* 008b9ab2: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 008b9ab5: mov bl, byte ptr [ebp + 8] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 008b9ab8: inc dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9abb: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9abe: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 008b9ac0: jne 0x8b9a8f */ if (!fZ) goto L_008b9a8f;
L_008b9ac2:; BB(0x008b9ac2);
    /* 008b9ac2: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
L_008b9ac5:; BB(0x008b9ac5);
    /* 008b9ac5: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 008b9ac8: dec dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9acb: jne 0x8b9a80 */ if (!fZ) goto L_008b9a80;
L_008b9acd:; BB(0x008b9acd);
    /* 008b9acd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9ace: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9acf:; BB(0x008b9acf);
    /* 008b9acf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9ad0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9ad1: ret  */ FN_RET(0x008b9a4a); r_esp += 4; return;
}

void f_008b9ad2(void) /* sub_8B9AD2 */
{
    FN_ENTER(0x008b9ad2);
    /* 008b9ad2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9ad3: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9ad5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9ad8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b9adb: mov eax, dword ptr [ecx + 0x1a4] */ r_eax = R32((u32)(r_ecx+0x1a4u));
    /* 008b9ae1: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 008b9ae4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b9ae6: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b9ae9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008b9aec: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008b9aef: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008b9af2: mov edx, dword ptr [ecx + 0x5c] */ r_edx = R32((u32)(r_ecx+0x5cu));
    /* 008b9af5: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b9af8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b9afa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b9afd: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b9b00: jle 0x8b9b5d */ if ((fZ||fS!=fO)) goto L_008b9b5d;
L_008b9b02:; BB(0x008b9b02);
    /* 008b9b02: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b9b05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b08: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008b9b0b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b9b0d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b9b10: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
L_008b9b13:; BB(0x008b9b13);
    /* 008b9b13: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b9b15: mov ecx, dword ptr [eax + edi] */ r_ecx = R32((u32)(r_eax+r_edi));
    /* 008b9b18: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008b9b1a: jbe 0x8b9b52 */ if ((fC||fZ)) goto L_008b9b52;
L_008b9b1c:; BB(0x008b9b1c);
    /* 008b9b1c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_008b9b1f:; BB(0x008b9b1f);
    /* 008b9b1f: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008b9b22: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9b25: movzx edx, byte ptr [eax + edx] */ r_edx = (u32)R8((u32)(r_eax+r_edx));
    /* 008b9b29: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9b2c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9b2d: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008b9b30: movzx eax, byte ptr [eax + ebx] */ r_eax = (u32)R8((u32)(r_eax+r_ebx));
    /* 008b9b34: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9b37: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9b39: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9b3a: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008b9b3d: movzx eax, byte ptr [eax + ebx] */ r_eax = (u32)R8((u32)(r_eax+r_ebx));
    /* 008b9b41: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9b43: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9b44: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 008b9b46: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9b47: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9b4a: jne 0x8b9b1f */ if (!fZ) goto L_008b9b1f;
L_008b9b4c:; BB(0x008b9b4c);
    /* 008b9b4c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b9b4f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_008b9b52:; BB(0x008b9b52);
    /* 008b9b52: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008b9b55: dec dword ptr [ebp + 0x14] */ { u32 ad = (u32)(r_ebp+0x14u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9b58: jne 0x8b9b13 */ if (!fZ) goto L_008b9b13;
L_008b9b5a:; BB(0x008b9b5a);
    /* 008b9b5a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9b5b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9b5c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9b5d:; BB(0x008b9b5d);
    /* 008b9b5d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9b5e: ret  */ FN_RET(0x008b9ad2); r_esp += 4; return;
}

void f_008b9b5f(void) /* sub_8B9B5F */
{
    FN_ENTER(0x008b9b5f);
    /* 008b9b5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b60: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9b62: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9b65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9b68: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 008b9b6b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b6c: mov esi, dword ptr [eax + 0x1a4] */ r_esi = R32((u32)(r_eax+0x1a4u));
    /* 008b9b72: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 008b9b75: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b9b78: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b9b7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b9b7d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b9b80: jle 0x8b9c47 */ if ((fZ||fS!=fO)) goto L_008b9c47;
L_008b9b86:; BB(0x008b9b86);
    /* 008b9b86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b87: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008b9b8a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9b8b: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 008b9b8e: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008b9b90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008b9b93: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008b9b96: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_008b9b99:; BB(0x008b9b99);
    /* 008b9b99: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9b9c: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9b9e: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b9ba3u); f_008a8d72();
    /* 008b9ba3: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 008b9ba6: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9baa: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9bae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9bb0: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008b9bb3: jle 0x8b9c2f */ if ((fZ||fS!=fO)) goto L_008b9c2f;
L_008b9bb5:; BB(0x008b9bb5);
    /* 008b9bb5: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9bb7: shl eax, 6 */ { u32 c = (6u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b9bba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008b9bbd: lea eax, [esi + 0x34] */ r_eax = (u32)(r_esi+0x34u);
    /* 008b9bc0: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008b9bc3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008b9bc6:; BB(0x008b9bc6);
    /* 008b9bc6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b9bc9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008b9bcc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b9bce: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 008b9bd1: and dword ptr [ebp + 0x14], 0 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9bd5: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008b9bd7: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9bd9: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 008b9bdc: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9bdf: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008b9be2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9be5: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008b9be7: add ecx, dword ptr [ebp - 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9bea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b9bec: jbe 0x8b9c1a */ if ((fC||fZ)) goto L_008b9c1a;
L_008b9bee:; BB(0x008b9bee);
    /* 008b9bee: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_008b9bf1:; BB(0x008b9bf1);
    /* 008b9bf1: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 008b9bf4: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b9bf7: mov ebx, dword ptr [ecx + ebx*4] */ r_ebx = R32((u32)(r_ecx+r_ebx*4));
    /* 008b9bfa: add eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9bfd: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9bff: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b9c02: mov dl, byte ptr [ebx + edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebx+r_edx))) & 0xffu);
    /* 008b9c05: add byte ptr [edi], dl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b9c07: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b9c0a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9c0b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9c0c: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b9c0f: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9c12: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 008b9c15: jne 0x8b9bf1 */ if (!fZ) goto L_008b9bf1;
L_008b9c17:; BB(0x008b9c17);
    /* 008b9c17: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
L_008b9c1a:; BB(0x008b9c1a);
    /* 008b9c1a: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9c1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9c20: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9c24: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9c27: jl 0x8b9bc6 */ if ((fS!=fO)) goto L_008b9bc6;
L_008b9c29:; BB(0x008b9c29);
    /* 008b9c29: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9c2c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
L_008b9c2f:; BB(0x008b9c2f);
    /* 008b9c2f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9c30: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008b9c33: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fC = (r < a); }
    /* 008b9c36: dec dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9c39: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 008b9c3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008b9c3f: jne 0x8b9b99 */ if (!fZ) goto L_008b9b99;
L_008b9c45:; BB(0x008b9c45);
    /* 008b9c45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9c46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9c47:; BB(0x008b9c47);
    /* 008b9c47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9c48: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9c49: ret  */ FN_RET(0x008b9b5f); r_esp += 4; return;
}

void f_008b9c4a(void) /* sub_8B9C4A */
{
    FN_ENTER(0x008b9c4a);
    /* 008b9c4a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9c4b: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9c4d: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9c50: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b9c53: mov eax, dword ptr [edx + 0x1a4] */ r_eax = R32((u32)(r_edx+0x1a4u));
    /* 008b9c59: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 008b9c5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9c5d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008b9c5f: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008b9c62: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 008b9c65: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 008b9c68: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008b9c6b: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 008b9c6e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b9c71: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b9c74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b9c76: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 008b9c79: jle 0x8b9d46 */ if ((fZ||fS!=fO)) goto L_008b9d46;
L_008b9c7f:; BB(0x008b9c7f);
    /* 008b9c7f: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008b9c82: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b9c85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9c86: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b9c88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9c89: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 008b9c8c: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b9c8f: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008b9c92: jmp 0x8b9c97 */ goto L_008b9c97;
L_008b9c94:; BB(0x008b9c94);
    /* 008b9c94: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
L_008b9c97:; BB(0x008b9c97);
    /* 008b9c97: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9c9a: mov ecx, dword ptr [edx + esi] */ r_ecx = R32((u32)(r_edx+r_esi));
    /* 008b9c9d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 008b9c9f: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 008b9ca2: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 008b9ca5: mov ebx, dword ptr [eax + 0x3c] */ r_ebx = R32((u32)(r_eax+0x3cu));
    /* 008b9ca8: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9cac: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 008b9caf: shl edi, 6 */ { u32 c = (6u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008b9cb2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b9cb5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 008b9cb8: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9cba: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9cbc: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9cbe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b9cc1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b9cc3: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 008b9cc6: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 008b9cc9: jbe 0x8b9d2d */ if ((fC||fZ)) goto L_008b9d2d;
L_008b9ccb:; BB(0x008b9ccb);
    /* 008b9ccb: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008b9cce: jmp 0x8b9cd3 */ goto L_008b9cd3;
L_008b9cd0:; BB(0x008b9cd0);
    /* 008b9cd0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
L_008b9cd3:; BB(0x008b9cd3);
    /* 008b9cd3: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 008b9cd6: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b9cd9: mov ebx, dword ptr [esi + ebx*4] */ r_ebx = R32((u32)(r_esi+r_ebx*4));
    /* 008b9cdc: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9cde: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b9ce1: movzx edi, byte ptr [ebx + edi] */ r_edi = (u32)R8((u32)(r_ebx+r_edi));
    /* 008b9ce5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008b9ce8: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 008b9ceb: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008b9cee: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9cef: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 008b9cf2: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9cf4: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b9cf7: movzx edx, byte ptr [edx + edi] */ r_edx = (u32)R8((u32)(r_edx+r_edi));
    /* 008b9cfb: add dword ptr [ebp + 0x14], edx */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9cfe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9d01: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 008b9d04: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9d05: movzx edx, byte ptr [ecx] */ r_edx = (u32)R8((u32)(r_ecx));
    /* 008b9d08: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9d0a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b9d0d: movzx edi, byte ptr [edi + edx] */ r_edi = (u32)R8((u32)(r_edi+r_edx));
    /* 008b9d11: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b9d14: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9d16: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9d19: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008b9d1b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9d1c: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9d1f: mov edx, ebx */ r_edx = r_ebx;
    /* 008b9d21: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b9d22: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008b9d25: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9d28: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008b9d2b: jne 0x8b9cd0 */ if (!fZ) goto L_008b9cd0;
L_008b9d2d:; BB(0x008b9d2d);
    /* 008b9d2d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b9d30: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9d34: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9d35: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fC = 0; }
    /* 008b9d38: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9d3b: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 008b9d3e: jne 0x8b9c94 */ if (!fZ) goto L_008b9c94;
L_008b9d44:; BB(0x008b9d44);
    /* 008b9d44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9d45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9d46:; BB(0x008b9d46);
    /* 008b9d46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9d47: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9d48: ret  */ FN_RET(0x008b9c4a); r_esp += 4; return;
}

void f_008b9d49(void) /* sub_8B9D49 */
{
    FN_ENTER(0x008b9d49);
    /* 008b9d49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9d4a: mov ebp, esp */ r_ebp = r_esp;
    /* 008b9d4c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b9d4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9d52: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 008b9d55: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008b9d58: mov ecx, dword ptr [eax + 0x5c] */ r_ecx = R32((u32)(r_eax+0x5cu));
    /* 008b9d5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9d5c: mov ebx, dword ptr [eax + 0x1a4] */ r_ebx = R32((u32)(r_eax+0x1a4u));
    /* 008b9d62: mov eax, dword ptr [eax + 0x11c] */ r_eax = R32((u32)(r_eax+0x11cu));
    /* 008b9d68: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008b9d6b: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008b9d6e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b9d70: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 008b9d73: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008b9d76: jle 0x8b9eca */ if ((fZ||fS!=fO)) goto L_008b9eca;
L_008b9d7c:; BB(0x008b9d7c);
    /* 008b9d7c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b9d7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9d80: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008b9d83: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b9d85: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9d86: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008b9d89: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 008b9d8c: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_008b9d8f:; BB(0x008b9d8f);
    /* 008b9d8f: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9d92: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b9d95: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9d97: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b9d9cu); f_008a8d72();
    /* 008b9d9c: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9da0: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9da4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9da5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9da6: jle 0x8b9eb1 */ if ((fZ||fS!=fO)) goto L_008b9eb1;
L_008b9dac:; BB(0x008b9dac);
    /* 008b9dac: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b9daf: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9db1: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 008b9db4: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 008b9db7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008b9dba:; BB(0x008b9dba);
    /* 008b9dba: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b9dbd: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008b9dbf: add edi, dword ptr [ebp + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9dc2: cmp byte ptr [ebx + 0x54], 0 */ {  u32 a = R8((u32)(r_ebx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b9dc6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b9dc9: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008b9dcb: je 0x8b9df4 */ if (fZ) goto L_008b9df4;
L_008b9dcd:; BB(0x008b9dcd);
    /* 008b9dcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9dd0: or dword ptr [ebp - 0x10], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9dd4: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 008b9dd7: mov edx, eax */ r_edx = r_eax;
    /* 008b9dd9: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b9ddd: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9ddf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9de2: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9de4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b9de6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b9de9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9dec: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b9dee: lea ecx, [eax + ecx*2 + 2] */ r_ecx = (u32)(r_eax+r_ecx*2+0x2u);
    /* 008b9df2: jmp 0x8b9e06 */ goto L_008b9e06;
L_008b9df4:; BB(0x008b9df4);
    /* 008b9df4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b9df7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b9dfa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b9dfd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b9dff: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_008b9e06:; BB(0x008b9e06);
    /* 008b9e06: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9e09: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 008b9e0c: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b9e0f: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 008b9e12: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008b9e15: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008b9e18: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 008b9e1b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b9e1e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008b9e21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b9e23: and dword ptr [ebp - 0x14], eax */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9e26: and dword ptr [ebp - 0x18], eax */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9e29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008b9e2b: jbe 0x8b9e94 */ if ((fC||fZ)) goto L_008b9e94;
L_008b9e2d:; BB(0x008b9e2d);
    /* 008b9e2d: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
L_008b9e30:; BB(0x008b9e30);
    /* 008b9e30: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b9e33: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008b9e36: lea edx, [ecx + edx*2] */ r_edx = (u32)(r_ecx+r_edx*2);
    /* 008b9e39: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 008b9e3c: movsx edx, word ptr [edx] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 008b9e3f: lea eax, [edx + eax + 8] */ r_eax = (u32)(r_edx+r_eax+0x8u);
    /* 008b9e43: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008b9e46: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008b9e49: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9e4b: movzx eax, byte ptr [edx + ebx] */ r_eax = (u32)R8((u32)(r_edx+r_ebx));
    /* 008b9e4f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b9e52: movzx edx, byte ptr [eax + edx] */ r_edx = (u32)R8((u32)(r_eax+r_edx));
    /* 008b9e56: add byte ptr [esi], dl */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b9e58: mov ebx, dword ptr [ebp - 0x34] */ r_ebx = R32((u32)(r_ebp+0xffffffccu));
    /* 008b9e5b: movzx edx, byte ptr [edx + ebx] */ r_edx = (u32)R8((u32)(r_edx+r_ebx));
    /* 008b9e5f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b9e62: add edi, dword ptr [ebp - 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9e65: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b9e68: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b9e6a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 008b9e6d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008b9e70: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9e72: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9e74: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 008b9e77: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b9e7a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9e7c: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b9e7e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008b9e81: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 008b9e84: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b9e86: dec dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b9e89: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b9e8c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008b9e8f: jne 0x8b9e30 */ if (!fZ) goto L_008b9e30;
L_008b9e91:; BB(0x008b9e91);
    /* 008b9e91: mov ebx, dword ptr [ebp - 0x40] */ r_ebx = R32((u32)(r_ebp+0xffffffc0u));
L_008b9e94:; BB(0x008b9e94);
    /* 008b9e94: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 008b9e98: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9e9b: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9e9f: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008b9ea2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b9ea5: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9ea8: jl 0x8b9dba */ if ((fS!=fO)) goto L_008b9dba;
L_008b9eae:; BB(0x008b9eae);
    /* 008b9eae: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
L_008b9eb1:; BB(0x008b9eb1);
    /* 008b9eb1: cmp byte ptr [ebx + 0x54], 0 */ {  u32 a = R8((u32)(r_ebx+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b9eb5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 008b9eb8: add dword ptr [ebp + 0x14], 4 */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fC = (r < a); }
    /* 008b9ebc: dec dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b9ebf: mov byte ptr [ebx + 0x54], al */ W8((u32)(r_ebx+0x54u), (u8)r_eax);
    /* 008b9ec2: jne 0x8b9d8f */ if (!fZ) goto L_008b9d8f;
L_008b9ec8:; BB(0x008b9ec8);
    /* 008b9ec8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9ec9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b9eca:; BB(0x008b9eca);
    /* 008b9eca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b9ecb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b9ecc: ret  */ FN_RET(0x008b9d49); r_esp += 4; return;
}

void f_008b9ecd(void) /* sub_8B9ECD */
{
    FN_ENTER(0x008b9ecd);
    /* 008b9ecd: mov eax, dword ptr [esi + 0x1a4] */ r_eax = R32((u32)(r_esi+0x1a4u));
    /* 008b9ed3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9ed4: mov ebp, dword ptr [esi + 0x5c] */ r_ebp = R32((u32)(r_esi+0x5cu));
    /* 008b9ed7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9ed8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b9eda: cmp dword ptr [esi + 0x64], edi */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9edd: lea ebp, [ebp + ebp + 4] */ r_ebp = (u32)(r_ebp+r_ebp+0x4u);
    /* 008b9ee1: jle 0x8b9f00 */ if ((fZ||fS!=fO)) goto L_008b9f00;
L_008b9ee3:; BB(0x008b9ee3);
    /* 008b9ee3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9ee4: lea ebx, [eax + 0x44] */ r_ebx = (u32)(r_eax+0x44u);
L_008b9ee7:; BB(0x008b9ee7);
    /* 008b9ee7: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b9eea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9eeb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9eed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9eee: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b9ef1u); call_ind(t); }
    /* 008b9ef1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b9ef4: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008b9ef6: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9ef7: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9efa: cmp edi, dword ptr [esi + 0x64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9efd: jl 0x8b9ee7 */ if ((fS!=fO)) goto L_008b9ee7;
L_008b9eff:; BB(0x008b9eff);
    /* 008b9eff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b9f00:; BB(0x008b9f00);
    /* 008b9f00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9f01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b9f02: ret  */ FN_RET(0x008b9ecd); r_esp += 4; return;
}

void f_008b9f03(void) /* sub_8B9F03 */
{
    FN_ENTER(0x008b9f03);
    /* 008b9f03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f06: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008b9f0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f0b: mov edi, dword ptr [esi + 0x1a4] */ r_edi = R32((u32)(r_esi+0x1a4u));
    /* 008b9f11: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 008b9f14: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 008b9f17: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 008b9f1a: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 008b9f1d: mov eax, dword ptr [esi + 0x4c] */ r_eax = R32((u32)(r_esi+0x4cu));
    /* 008b9f20: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 008b9f22: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b9f24: je 0x8b9fb2 */ if (fZ) goto L_008b9fb2;
L_008b9f2a:; BB(0x008b9f2a);
    /* 008b9f2a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b9f2b: je 0x8b9f7e */ if (fZ) goto L_008b9f7e;
L_008b9f2d:; BB(0x008b9f2d);
    /* 008b9f2d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b9f2e: je 0x8b9f44 */ if (fZ) goto L_008b9f44;
L_008b9f30:; BB(0x008b9f30);
    /* 008b9f30: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9f32: mov dword ptr [eax + 0x14], 0x2f */ W32((u32)(r_eax+0x14u), 0x2fu);
    /* 008b9f39: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b9f3b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f3c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b9f3eu); call_ind(t); }
    /* 008b9f3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9f3f: jmp 0x8b9fc8 */ goto L_008b9fc8;
L_008b9f44:; BB(0x008b9f44);
    /* 008b9f44: and byte ptr [edi + 0x54], 0 */ { u32 ad = (u32)(r_edi+0x54u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b9f48: lea ebx, [edi + 0x44] */ r_ebx = (u32)(r_edi+0x44u);
    /* 008b9f4b: cmp dword ptr [ebx], ebp */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9f4d: mov dword ptr [edi + 4], 0x8b9d49 */ W32((u32)(r_edi+0x4u), 0x8b9d49u);
    /* 008b9f54: jne 0x8b9f5b */ if (!fZ) goto L_008b9f5b;
L_008b9f56:; BB(0x008b9f56);
    /* 008b9f56: call 0x8b9ecd */ r_esp -= 4; W32(r_esp, 0x8b9f5bu); f_008b9ecd();
L_008b9f5b:; BB(0x008b9f5b);
    /* 008b9f5b: mov ebp, dword ptr [esi + 0x5c] */ r_ebp = R32((u32)(r_esi+0x5cu));
    /* 008b9f5e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008b9f60: cmp dword ptr [esi + 0x64], edi */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9f63: lea ebp, [ebp + ebp + 4] */ r_ebp = (u32)(r_ebp+r_ebp+0x4u);
    /* 008b9f67: jle 0x8b9fc8 */ if ((fZ||fS!=fO)) goto L_008b9fc8;
L_008b9f69:; BB(0x008b9f69);
    /* 008b9f69: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f6a: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 008b9f6c: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b9f71u); f_008a8d72();
    /* 008b9f71: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b9f72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9f73: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b9f76: cmp edi, dword ptr [esi + 0x64] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x64u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9f79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9f7a: jl 0x8b9f69 */ if ((fS!=fO)) goto L_008b9f69;
L_008b9f7c:; BB(0x008b9f7c);
    /* 008b9f7c: jmp 0x8b9fc8 */ goto L_008b9fc8;
L_008b9f7e:; BB(0x008b9f7e);
    /* 008b9f7e: cmp dword ptr [esi + 0x64], 3 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b9f82: jne 0x8b9f8d */ if (!fZ) goto L_008b9f8d;
L_008b9f84:; BB(0x008b9f84);
    /* 008b9f84: mov dword ptr [edi + 4], 0x8b9c4a */ W32((u32)(r_edi+0x4u), 0x8b9c4au);
    /* 008b9f8b: jmp 0x8b9f94 */ goto L_008b9f94;
L_008b9f8d:; BB(0x008b9f8d);
    /* 008b9f8d: mov dword ptr [edi + 4], 0x8b9b5f */ W32((u32)(r_edi+0x4u), 0x8b9b5fu);
L_008b9f94:; BB(0x008b9f94);
    /* 008b9f94: cmp byte ptr [edi + 0x1c], 0 */ {  u32 a = R8((u32)(r_edi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b9f98: mov dword ptr [edi + 0x30], ebp */ W32((u32)(r_edi+0x30u), r_ebp);
    /* 008b9f9b: jne 0x8b9fa4 */ if (!fZ) goto L_008b9fa4;
L_008b9f9d:; BB(0x008b9f9d);
    /* 008b9f9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9f9e: call 0x8b985a */ r_esp -= 4; W32(r_esp, 0x8b9fa3u); f_008b985a();
    /* 008b9fa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b9fa4:; BB(0x008b9fa4);
    /* 008b9fa4: cmp dword ptr [edi + 0x34], ebp */ {  u32 a = R32((u32)(r_edi+0x34u)); u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9fa7: jne 0x8b9fc8 */ if (!fZ) goto L_008b9fc8;
L_008b9fa9:; BB(0x008b9fa9);
    /* 008b9fa9: mov edi, esi */ r_edi = r_esi;
    /* 008b9fab: call 0x8b9985 */ r_esp -= 4; W32(r_esp, 0x8b9fb0u); f_008b9985();
    /* 008b9fb0: jmp 0x8b9fc8 */ goto L_008b9fc8;
L_008b9fb2:; BB(0x008b9fb2);
    /* 008b9fb2: cmp dword ptr [esi + 0x64], 3 */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b9fb6: jne 0x8b9fc1 */ if (!fZ) goto L_008b9fc1;
L_008b9fb8:; BB(0x008b9fb8);
    /* 008b9fb8: mov dword ptr [edi + 4], 0x8b9ad2 */ W32((u32)(r_edi+0x4u), 0x8b9ad2u);
    /* 008b9fbf: jmp 0x8b9fc8 */ goto L_008b9fc8;
L_008b9fc1:; BB(0x008b9fc1);
    /* 008b9fc1: mov dword ptr [edi + 4], 0x8b9a4a */ W32((u32)(r_edi+0x4u), 0x8b9a4au);
L_008b9fc8:; BB(0x008b9fc8);
    /* 008b9fc8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b9fc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b9fca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b9fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b9fcc: ret  */ FN_RET(0x008b9f03); r_esp += 4; return;
}

void f_008b9fcd(void) /* sub_8B9FCD */
{
    FN_ENTER(0x008b9fcd);
    /* 008b9fcd: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b9fd1: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b9fd3: mov dword ptr [ecx + 0x14], 0x2d */ W32((u32)(r_ecx+0x14u), 0x2du);
    /* 008b9fda: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b9fdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b9fdd: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b9fdfu); call_ind(t); }
    /* 008b9fdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b9fe0: ret  */ FN_RET(0x008b9fcd); r_esp += 4; return;
}

void f_008b9fe1(void) /* sub_8B9FE1 */
{
    FN_ENTER(0x008b9fe1);
    /* 008b9fe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9fe2: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008b9fe6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b9fe9: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9feb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b9fed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b9fee: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b9ff0u); call_ind(t); }
    /* 008b9ff0: mov dword ptr [esi + 0x1a4], eax */ W32((u32)(r_esi+0x1a4u), r_eax);
    /* 008b9ff6: and dword ptr [eax + 0x44], 0 */ { u32 ad = (u32)(r_eax+0x44u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9ffa: and dword ptr [eax + 0x34], 0 */ { u32 ad = (u32)(r_eax+0x34u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b9ffe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ba001: mov dword ptr [eax], 0x8b9f03 */ W32((u32)(r_eax), 0x8b9f03u);
    /* 008ba007: mov dword ptr [eax + 8], 0x857d95 */ W32((u32)(r_eax+0x8u), 0x857d95u);
    /* 008ba00e: mov dword ptr [eax + 0xc], 0x8b9fcd */ W32((u32)(r_eax+0xcu), 0x8b9fcdu);
    /* 008ba015: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008ba017: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008ba018: cmp dword ptr [esi + 0x64], eax */ {  u32 a = R32((u32)(r_esi+0x64u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba01b: jle 0x8ba031 */ if ((fZ||fS!=fO)) goto L_008ba031;
L_008ba01d:; BB(0x008ba01d);
    /* 008ba01d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008ba01f: mov dword ptr [ecx + 0x14], 0x36 */ W32((u32)(r_ecx+0x14u), 0x36u);
    /* 008ba026: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008ba028: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008ba02b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008ba02d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba02e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8ba030u); call_ind(t); }
    /* 008ba030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ba031:; BB(0x008ba031);
    /* 008ba031: mov eax, 0x100 */ r_eax = 0x100u;
    /* 008ba036: cmp dword ptr [esi + 0x54], eax */ {  u32 a = R32((u32)(r_esi+0x54u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba039: jle 0x8ba04f */ if ((fZ||fS!=fO)) goto L_008ba04f;
L_008ba03b:; BB(0x008ba03b);
    /* 008ba03b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008ba03d: mov dword ptr [ecx + 0x14], 0x38 */ W32((u32)(r_ecx+0x14u), 0x38u);
    /* 008ba044: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008ba046: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008ba049: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008ba04b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba04c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8ba04eu); call_ind(t); }
    /* 008ba04e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008ba04f:; BB(0x008ba04f);
    /* 008ba04f: call 0x8b972d */ r_esp -= 4; W32(r_esp, 0x8ba054u); f_008b972d();
    /* 008ba054: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ba055: call 0x8b985a */ r_esp -= 4; W32(r_esp, 0x8ba05au); f_008b985a();
    /* 008ba05a: cmp dword ptr [esi + 0x4c], 2 */ {  u32 a = R32((u32)(r_esi+0x4cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ba05e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008ba05f: jne 0x8ba066 */ if (!fZ) goto L_008ba066;
L_008ba061:; BB(0x008ba061);
    /* 008ba061: call 0x8b9ecd */ r_esp -= 4; W32(r_esp, 0x8ba066u); f_008b9ecd();
L_008ba066:; BB(0x008ba066);
    /* 008ba066: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ba067: ret  */ FN_RET(0x008b9fe1); r_esp += 4; return;
}

