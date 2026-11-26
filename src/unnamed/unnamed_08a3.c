#include "protos.h"

void f_008a3153(void) /* sub_8A3153 */
{
    FN_ENTER(0x008a3153);
    /* 008a3153: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3154: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3156: sub esp, 0x130 */ {  u32 a = r_esp; u32 b = 0x130u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a315c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a315d: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 008a3160: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a3163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3165: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3166: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a3168: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 008a316b: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a316e: jne 0x8a318b */ if (!fZ) goto L_008a318b;
L_008a3170:; BB(0x008a3170);
    /* 008a3170: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3171: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3174u); call_ind(t); }
    /* 008a3174: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3177: je 0x8a33e3 */ if (fZ) goto L_008a33e3;
L_008a317d:; BB(0x008a317d);
    /* 008a317d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a317f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a3182: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a3185: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a3188: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a318b:; BB(0x008a318b);
    /* 008a318b: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a318e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a3190: mov ah, byte ptr [edi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a3192: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3193: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3197: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a319a: jne 0x8a31b7 */ if (!fZ) goto L_008a31b7;
L_008a319c:; BB(0x008a319c);
    /* 008a319c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a319d: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a31a0u); call_ind(t); }
    /* 008a31a0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a31a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a31a3: je 0x8a33e3 */ if (fZ) goto L_008a33e3;
L_008a31a9:; BB(0x008a31a9);
    /* 008a31a9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a31ab: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a31ae: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a31b1: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a31b4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a31b7:; BB(0x008a31b7);
    /* 008a31b7: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a31ba: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a31bd: add dword ptr [ebp - 0xc], eax */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a31c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a31c1: sub dword ptr [ebp - 0xc], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a31c5: jmp 0x8a33cb */ goto L_008a33cb;
L_008a31ca:; BB(0x008a31ca);
    /* 008a31ca: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a31ce: jne 0x8a31eb */ if (!fZ) goto L_008a31eb;
L_008a31d0:; BB(0x008a31d0);
    /* 008a31d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a31d1: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a31d4u); call_ind(t); }
    /* 008a31d4: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a31d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a31d7: je 0x8a33e3 */ if (fZ) goto L_008a33e3;
L_008a31dd:; BB(0x008a31dd);
    /* 008a31dd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a31df: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a31e2: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a31e5: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a31e8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a31eb:; BB(0x008a31eb);
    /* 008a31eb: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008a31ee: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a31f0: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a31f3: mov dword ptr [ecx + 0x14], 0x4f */ W32((u32)(r_ecx+0x14u), 0x4fu);
    /* 008a31fa: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a31fc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008a31ff: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a3202: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3204: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3206: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3207: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3208: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a320bu); call_ind(t); }
    /* 008a320b: and byte ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a320f: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3213: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3215: mov dword ptr [ebp - 0x10], 1 */ W32((u32)(r_ebp+0xfffffff0u), 0x1u);
L_008a321c:; BB(0x008a321c);
    /* 008a321c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3220: jne 0x8a323d */ if (!fZ) goto L_008a323d;
L_008a3222:; BB(0x008a3222);
    /* 008a3222: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3223: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3226u); call_ind(t); }
    /* 008a3226: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3228: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3229: je 0x8a33e3 */ if (fZ) goto L_008a33e3;
L_008a322f:; BB(0x008a322f);
    /* 008a322f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3231: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a3234: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a3237: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a323a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a323d:; BB(0x008a323d);
    /* 008a323d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a3240: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008a3242: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3245: lea eax, [ebp + eax - 0x28] */ r_eax = (u32)(r_ebp+r_eax+0xffffffd8u);
    /* 008a3249: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008a324b: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 008a324e: add dword ptr [ebp - 0x14], eax */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3251: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3252: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3255: cmp dword ptr [ebp - 0x10], 0x10 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3259: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008a325c: jle 0x8a321c */ if ((fZ||fS!=fO)) goto L_008a321c;
L_008a325e:; BB(0x008a325e);
    /* 008a325e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3260: movzx ecx, byte ptr [ebp - 0x27] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffd9u));
    /* 008a3264: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3267: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a3269: movzx ecx, byte ptr [ebp - 0x26] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdau));
    /* 008a326d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a3270: movzx ecx, byte ptr [ebp - 0x25] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdbu));
    /* 008a3274: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a3277: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 008a327b: sub dword ptr [ebp - 0xc], 0x11 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a327f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a3282: movzx ecx, byte ptr [ebp - 0x23] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffddu));
    /* 008a3286: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008a3289: movzx ecx, byte ptr [ebp - 0x22] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdeu));
    /* 008a328d: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008a3290: movzx ecx, byte ptr [ebp - 0x21] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdfu));
    /* 008a3294: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a3297: movzx ecx, byte ptr [ebp - 0x20] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe0u));
    /* 008a329b: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 008a329d: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a32a0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a32a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a32a3: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 008a32a6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a32a8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a32aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a32ab: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a32aeu); call_ind(t); }
    /* 008a32ae: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a32b0: movzx ecx, byte ptr [ebp - 0x1f] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe1u));
    /* 008a32b4: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a32b7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008a32b9: movzx ecx, byte ptr [ebp - 0x1e] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe2u));
    /* 008a32bd: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a32c0: movzx ecx, byte ptr [ebp - 0x1d] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe3u));
    /* 008a32c4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a32c7: movzx ecx, byte ptr [ebp - 0x1c] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe4u));
    /* 008a32cb: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a32ce: movzx ecx, byte ptr [ebp - 0x1b] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe5u));
    /* 008a32d2: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 008a32d5: movzx ecx, byte ptr [ebp - 0x1a] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe6u));
    /* 008a32d9: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008a32dc: movzx ecx, byte ptr [ebp - 0x19] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe7u));
    /* 008a32e0: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a32e3: movzx ecx, byte ptr [ebp - 0x18] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffe8u));
    /* 008a32e7: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a32ea: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a32ec: mov dword ptr [eax + 0x14], edi */ W32((u32)(r_eax+0x14u), r_edi);
    /* 008a32ef: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a32f1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a32f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a32f4: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a32f7u); call_ind(t); }
    /* 008a32f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008a32fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a32fd: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3302: jg 0x8a3309 */ if ((!fZ&&fS==fO)) goto L_008a3309;
L_008a3304:; BB(0x008a3304);
    /* 008a3304: cmp eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3307: jle 0x8a3318 */ if ((fZ||fS!=fO)) goto L_008a3318;
L_008a3309:; BB(0x008a3309);
    /* 008a3309: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a330b: mov dword ptr [eax + 0x14], 0x1c */ W32((u32)(r_eax+0x14u), 0x1cu);
    /* 008a3312: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3314: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3315: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a3317u); call_ind(t); }
    /* 008a3317: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3318:; BB(0x008a3318);
    /* 008a3318: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a331a: cmp dword ptr [ebp - 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a331d: jle 0x8a3355 */ if ((fZ||fS!=fO)) goto L_008a3355;
L_008a331f:; BB(0x008a331f);
    /* 008a331f: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3323: jne 0x8a333d */ if (!fZ) goto L_008a333d;
L_008a3325:; BB(0x008a3325);
    /* 008a3325: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3326: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3329u); call_ind(t); }
    /* 008a3329: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a332b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a332c: je 0x8a33e3 */ if (fZ) goto L_008a33e3;
L_008a3332:; BB(0x008a3332);
    /* 008a3332: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3334: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a3337: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a333a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a333d:; BB(0x008a333d);
    /* 008a333d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a3340: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3343: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008a3345: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3348: mov byte ptr [ebp + edi - 0x130], al */ W8((u32)(r_ebp+r_edi+0xfffffed0u), (u8)r_eax);
    /* 008a334f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3350: cmp edi, dword ptr [ebp - 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3353: jl 0x8a331f */ if ((fS!=fO)) goto L_008a331f;
L_008a3355:; BB(0x008a3355);
    /* 008a3355: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008a3358: sub dword ptr [ebp - 0xc], eax */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a335b: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 008a335e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3360: je 0x8a3371 */ if (fZ) goto L_008a3371;
L_008a3362:; BB(0x008a3362);
    /* 008a3362: sub eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a3365: lea edi, [ebx + eax*4 + 0xb0] */ r_edi = (u32)(r_ebx+r_eax*4+0xb0u);
    /* 008a336c: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008a336f: jmp 0x8a337d */ goto L_008a337d;
L_008a3371:; BB(0x008a3371);
    /* 008a3371: lea ecx, [ebx + eax*4 + 0xa0] */ r_ecx = (u32)(r_ebx+r_eax*4+0xa0u);
    /* 008a3378: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a337b: mov edi, ecx */ r_edi = r_ecx;
L_008a337d:; BB(0x008a337d);
    /* 008a337d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a337f: jl 0x8a3386 */ if ((fS!=fO)) goto L_008a3386;
L_008a3381:; BB(0x008a3381);
    /* 008a3381: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3384: jl 0x8a339a */ if ((fS!=fO)) goto L_008a339a;
L_008a3386:; BB(0x008a3386);
    /* 008a3386: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a3388: mov dword ptr [ecx + 0x14], 0x1d */ W32((u32)(r_ecx+0x14u), 0x1du);
    /* 008a338f: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a3391: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a3394: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3396: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3397: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a3399u); call_ind(t); }
    /* 008a3399: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a339a:; BB(0x008a339a);
    /* 008a339a: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a339d: jne 0x8a33a8 */ if (!fZ) goto L_008a33a8;
L_008a339f:; BB(0x008a339f);
    /* 008a339f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a33a0: call 0x8a9d5a */ r_esp -= 4; W32(r_esp, 0x8a33a5u); f_008a9d5a();
    /* 008a33a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a33a6: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_008a33a8:; BB(0x008a33a8);
    /* 008a33a8: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 008a33aa: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a33ad: lea esi, [ebp - 0x28] */ r_esi = (u32)(r_ebp+0xffffffd8u);
    /* 008a33b0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a33b1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a33b2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a33b3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008a33b4: movsb byte ptr es:[edi], byte ptr [esi] */ W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1;
    /* 008a33b5: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 008a33b7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008a33b9: add edi, 0x11 */ {  u32 a = r_edi; u32 b = 0x11u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a33bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a33bd: lea esi, [ebp - 0x130] */ r_esi = (u32)(r_ebp+0xfffffed0u);
    /* 008a33c3: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a33c5: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a33c8: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
L_008a33cb:; BB(0x008a33cb);
    /* 008a33cb: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a33cf: jg 0x8a31ca */ if ((!fZ&&fS==fO)) goto L_008a31ca;
L_008a33d5:; BB(0x008a33d5);
    /* 008a33d5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a33d8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008a33db: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a33dd: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a33df:; BB(0x008a33df);
    /* 008a33df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a33e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a33e1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a33e2: ret  */ FN_RET(0x008a3153); r_esp += 4; return;
L_008a33e3:; BB(0x008a33e3);
    /* 008a33e3: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a33e5: jmp 0x8a33df */ goto L_008a33df;
}

void f_008a33e7(void) /* sub_8A33E7 */
{
    FN_ENTER(0x008a33e7);
    /* 008a33e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a33e8: mov ebp, esp */ r_ebp = r_esp;
    /* 008a33ea: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a33ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a33ee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a33ef: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 008a33f2: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a33f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a33f7: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a33f9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a33fc: jne 0x8a3413 */ if (!fZ) goto L_008a3413;
L_008a33fe:; BB(0x008a33fe);
    /* 008a33fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a33ff: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3402u); call_ind(t); }
    /* 008a3402: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3405: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a340b:; BB(0x008a340b);
    /* 008a340b: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a340e: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a3410: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3413:; BB(0x008a3413);
    /* 008a3413: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3416: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a3418: mov ah, byte ptr [esi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esi))) & 0xffu) << 8);
    /* 008a341a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a341b: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a341f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a3422: jne 0x8a3439 */ if (!fZ) goto L_008a3439;
L_008a3424:; BB(0x008a3424);
    /* 008a3424: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3425: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3428u); call_ind(t); }
    /* 008a3428: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a342a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a342b: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a3431:; BB(0x008a3431);
    /* 008a3431: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a3434: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a3436: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3439:; BB(0x008a3439);
    /* 008a3439: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008a343c: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a343f: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3442: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a3443: sub dword ptr [ebp - 8], 2 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3447: jmp 0x8a35f4 */ goto L_008a35f4;
L_008a344c:; BB(0x008a344c);
    /* 008a344c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3450: jne 0x8a3467 */ if (!fZ) goto L_008a3467;
L_008a3452:; BB(0x008a3452);
    /* 008a3452: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3453: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3456u); call_ind(t); }
    /* 008a3456: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3458: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3459: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a345f:; BB(0x008a345f);
    /* 008a345f: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a3462: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a3464: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3467:; BB(0x008a3467);
    /* 008a3467: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 008a346a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008a346c: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a346f: mov dword ptr [edx + 0x14], 0x50 */ W32((u32)(r_edx+0x14u), 0x50u);
    /* 008a3476: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008a3478: mov eax, ecx */ r_eax = r_ecx;
    /* 008a347a: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a347d: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008a3480: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008a3483: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a3486: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a3488: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008a348b: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 008a348e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3490: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3492: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3493: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a3494: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3497u); call_ind(t); }
    /* 008a3497: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a349a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a349d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a349e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a349f: jl 0x8a34b8 */ if ((fS!=fO)) goto L_008a34b8;
L_008a34a1:; BB(0x008a34a1);
    /* 008a34a1: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a34a3: mov dword ptr [ecx + 0x14], 0x1e */ W32((u32)(r_ecx+0x14u), 0x1eu);
    /* 008a34aa: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008a34ac: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a34af: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a34b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a34b2: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a34b4u); call_ind(t); }
    /* 008a34b4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a34b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a34b8:; BB(0x008a34b8);
    /* 008a34b8: lea eax, [ebx + eax*4 + 0x90] */ r_eax = (u32)(r_ebx+r_eax*4+0x90u);
    /* 008a34bf: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a34c2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008a34c5: jne 0x8a34d5 */ if (!fZ) goto L_008a34d5;
L_008a34c7:; BB(0x008a34c7);
    /* 008a34c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a34c8: call 0x8a9d3e */ r_esp -= 4; W32(r_esp, 0x8a34cdu); f_008a9d3e();
    /* 008a34cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a34ce: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a34d1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a34d3: mov eax, ecx */ r_eax = r_ecx;
L_008a34d5:; BB(0x008a34d5);
    /* 008a34d5: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a34d7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008a34da: mov dword ptr [ebp - 0x10], 0x99de60 */ W32((u32)(r_ebp+0xfffffff0u), 0x99de60u);
L_008a34e1:; BB(0x008a34e1);
    /* 008a34e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a34e3: cmp dword ptr [ebp - 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a34e6: je 0x8a3530 */ if (fZ) goto L_008a3530;
L_008a34e8:; BB(0x008a34e8);
    /* 008a34e8: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a34eb: jne 0x8a3502 */ if (!fZ) goto L_008a3502;
L_008a34ed:; BB(0x008a34ed);
    /* 008a34ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a34ee: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a34f1u); call_ind(t); }
    /* 008a34f1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a34f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a34f4: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a34fa:; BB(0x008a34fa);
    /* 008a34fa: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a34fd: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a34ff: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3502:; BB(0x008a3502);
    /* 008a3502: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3505: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a3507: mov ah, byte ptr [esi] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_esi))) & 0xffu) << 8);
    /* 008a3509: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a350a: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a350e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a3511: jne 0x8a3528 */ if (!fZ) goto L_008a3528;
L_008a3513:; BB(0x008a3513);
    /* 008a3513: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3514: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3517u); call_ind(t); }
    /* 008a3517: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3519: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a351a: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a3520:; BB(0x008a3520);
    /* 008a3520: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a3523: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a3525: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a3528:; BB(0x008a3528);
    /* 008a3528: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008a352b: add dword ptr [ebp - 0xc], eax */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a352e: jmp 0x8a3550 */ goto L_008a3550;
L_008a3530:; BB(0x008a3530);
    /* 008a3530: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3533: jne 0x8a354a */ if (!fZ) goto L_008a354a;
L_008a3535:; BB(0x008a3535);
    /* 008a3535: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3536: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3539u); call_ind(t); }
    /* 008a3539: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a353b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a353c: je 0x8a360c */ if (fZ) goto L_008a360c;
L_008a3542:; BB(0x008a3542);
    /* 008a3542: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a3545: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 008a3547: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008a354a:; BB(0x008a354a);
    /* 008a354a: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 008a354d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
L_008a3550:; BB(0x008a3550);
    /* 008a3550: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008a3553: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3556: add dword ptr [ebp - 0x10], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a355a: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a355c: mov dx, word ptr [ebp - 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff4u))) & 0xffffu);
    /* 008a3560: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008a3563: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a3564: cmp dword ptr [ebp - 0x10], 0x99df60 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x99df60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a356b: mov word ptr [ecx + eax*2], dx */ W16((u32)(r_ecx+r_eax*2), (u16)r_edx);
    /* 008a356f: jl 0x8a34e1 */ if ((fS!=fO)) goto L_008a34e1;
L_008a3575:; BB(0x008a3575);
    /* 008a3575: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3577: cmp dword ptr [eax + 0x68], 2 */ {  u32 a = R32((u32)(r_eax+0x68u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a357b: jl 0x8a35e6 */ if ((fS!=fO)) goto L_008a35e6;
L_008a357d:; BB(0x008a357d);
    /* 008a357d: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3580: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008a3583: mov dword ptr [ebp - 0xc], 8 */ W32((u32)(r_ebp+0xfffffff4u), 0x8u);
    /* 008a358a: jmp 0x8a358f */ goto L_008a358f;
L_008a358c:; BB(0x008a358c);
    /* 008a358c: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
L_008a358f:; BB(0x008a358f);
    /* 008a358f: movzx edx, word ptr [ecx - 4] */ r_edx = (u32)R16((u32)(r_ecx+0xfffffffcu));
    /* 008a3593: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a3595: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3598: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 008a359a: movzx edx, word ptr [ecx - 2] */ r_edx = (u32)R16((u32)(r_ecx+0xfffffffeu));
    /* 008a359e: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 008a35a1: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 008a35a4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008a35a7: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 008a35ab: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 008a35ae: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 008a35b2: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 008a35b5: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 008a35b9: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008a35bc: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 008a35c0: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008a35c3: movzx ecx, word ptr [ecx + 0xa] */ r_ecx = (u32)R16((u32)(r_ecx+0xau));
    /* 008a35c7: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a35ca: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a35cc: mov dword ptr [eax + 0x14], 0x5c */ W32((u32)(r_eax+0x14u), 0x5cu);
    /* 008a35d3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a35d5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a35d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a35d8: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a35dbu); call_ind(t); }
    /* 008a35db: add dword ptr [ebp - 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a35df: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008a35e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a35e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a35e4: jne 0x8a358c */ if (!fZ) goto L_008a358c;
L_008a35e6:; BB(0x008a35e6);
    /* 008a35e6: sub dword ptr [ebp - 8], 0x41 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a35ea: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a35ee: je 0x8a35f4 */ if (fZ) goto L_008a35f4;
L_008a35f0:; BB(0x008a35f0);
    /* 008a35f0: sub dword ptr [ebp - 8], 0x40 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_008a35f4:; BB(0x008a35f4);
    /* 008a35f4: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a35f8: jg 0x8a344c */ if ((!fZ&&fS==fO)) goto L_008a344c;
L_008a35fe:; BB(0x008a35fe);
    /* 008a35fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3601: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008a3604: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 008a3606: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a3608:; BB(0x008a3608);
    /* 008a3608: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a3609: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a360a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a360b: ret  */ FN_RET(0x008a33e7); r_esp += 4; return;
L_008a360c:; BB(0x008a360c);
    /* 008a360c: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a360e: jmp 0x8a3608 */ goto L_008a3608;
}

void f_008a3610(void) /* sub_8A3610 */
{
    FN_ENTER(0x008a3610);
    /* 008a3610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3611: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3613: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3614: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3617: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3618: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3619: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008a361c: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a361f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3621: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3622: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a3624: jne 0x8a3637 */ if (!fZ) goto L_008a3637;
L_008a3626:; BB(0x008a3626);
    /* 008a3626: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3627: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a362au); call_ind(t); }
    /* 008a362a: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a362c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a362d: je 0x8a36a0 */ if (fZ) goto L_008a36a0;
L_008a362f:; BB(0x008a362f);
    /* 008a362f: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a3631: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a3634: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a3637:; BB(0x008a3637);
    /* 008a3637: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3639: mov ch, byte ptr [edi] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a363b: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a363c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a363d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a363f: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a3642: jne 0x8a3655 */ if (!fZ) goto L_008a3655;
L_008a3644:; BB(0x008a3644);
    /* 008a3644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3645: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3648u); call_ind(t); }
    /* 008a3648: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a364a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a364b: je 0x8a36a0 */ if (fZ) goto L_008a36a0;
L_008a364d:; BB(0x008a364d);
    /* 008a364d: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a364f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a3652: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a3655:; BB(0x008a3655);
    /* 008a3655: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a3658: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a365b: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a365c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a365d: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3661: je 0x8a3675 */ if (fZ) goto L_008a3675;
L_008a3663:; BB(0x008a3663);
    /* 008a3663: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a3665: mov dword ptr [ecx + 0x14], 9 */ W32((u32)(r_ecx+0x14u), 0x9u);
    /* 008a366c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a366e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a366f: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a3671u); call_ind(t); }
    /* 008a3671: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3675:; BB(0x008a3675);
    /* 008a3675: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3677: jne 0x8a368a */ if (!fZ) goto L_008a368a;
L_008a3679:; BB(0x008a3679);
    /* 008a3679: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a367a: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a367du); call_ind(t); }
    /* 008a367d: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a367f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3680: je 0x8a36a0 */ if (fZ) goto L_008a36a0;
L_008a3682:; BB(0x008a3682);
    /* 008a3682: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a3684: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a3687: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a368a:; BB(0x008a368a);
    /* 008a368a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a368c: mov ch, byte ptr [edi] */ r_ecx = (r_ecx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 008a368e: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a368f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3690: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3692: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a3695: jne 0x8a36ac */ if (!fZ) goto L_008a36ac;
L_008a3697:; BB(0x008a3697);
    /* 008a3697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3698: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a369bu); call_ind(t); }
    /* 008a369b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a369d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a369e: jne 0x8a36a4 */ if (!fZ) goto L_008a36a4;
L_008a36a0:; BB(0x008a36a0);
    /* 008a36a0: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a36a2: jmp 0x8a36e2 */ goto L_008a36e2;
L_008a36a4:; BB(0x008a36a4);
    /* 008a36a4: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a36a6: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a36a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a36ac:; BB(0x008a36ac);
    /* 008a36ac: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a36af: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a36b2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a36b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a36b7: mov dword ptr [ecx + 0x14], 0x51 */ W32((u32)(r_ecx+0x14u), 0x51u);
    /* 008a36be: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a36c0: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 008a36c3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a36c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a36c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a36c8: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8a36cbu); call_ind(t); }
    /* 008a36cb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a36ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a36cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a36d0: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a36d3: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a36d4: mov dword ptr [ecx + 0xfc], eax */ W32((u32)(r_ecx+0xfcu), r_eax);
    /* 008a36da: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a36db: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a36dd: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008a36e0: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a36e2:; BB(0x008a36e2);
    /* 008a36e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a36e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a36e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a36e5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a36e6: ret  */ FN_RET(0x008a3610); r_esp += 4; return;
}

void f_008a36e7(void) /* sub_8A36E7 */
{
    FN_ENTER(0x008a36e7);
    /* 008a36e7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a36e8: mov ebp, esp */ r_ebp = r_esp;
    /* 008a36ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a36eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a36ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a36ed: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a36f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a36f1: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 008a36f4: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a36f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a36f9: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a36fb: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008a36fe: jne 0x8a3711 */ if (!fZ) goto L_008a3711;
L_008a3700:; BB(0x008a3700);
    /* 008a3700: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3701: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3704u); call_ind(t); }
    /* 008a3704: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3706: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3707: je 0x8a372b */ if (fZ) goto L_008a372b;
L_008a3709:; BB(0x008a3709);
    /* 008a3709: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a370c: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a370e: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a3711:; BB(0x008a3711);
    /* 008a3711: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3714: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a3716: mov ah, byte ptr [ebx] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_ebx))) & 0xffu) << 8);
    /* 008a3718: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a3719: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a371d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a3720: jne 0x8a3737 */ if (!fZ) goto L_008a3737;
L_008a3722:; BB(0x008a3722);
    /* 008a3722: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3723: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3726u); call_ind(t); }
    /* 008a3726: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3728: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3729: jne 0x8a372f */ if (!fZ) goto L_008a372f;
L_008a372b:; BB(0x008a372b);
    /* 008a372b: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a372d: jmp 0x8a377e */ goto L_008a377e;
L_008a372f:; BB(0x008a372f);
    /* 008a372f: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a3732: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 008a3734: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_008a3737:; BB(0x008a3737);
    /* 008a3737: movzx eax, byte ptr [ebx] */ r_eax = (u32)R8((u32)(r_ebx));
    /* 008a373a: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a373d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a373f: mov dword ptr [eax + 0x14], 0x5a */ W32((u32)(r_eax+0x14u), 0x5au);
    /* 008a3746: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3748: mov ecx, dword ptr [esi + 0x178] */ r_ecx = R32((u32)(r_esi+0x178u));
    /* 008a374e: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a3751: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3753: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3756: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a3759: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a375b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a375d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a375e: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3761u); call_ind(t); }
    /* 008a3761: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3764: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3767: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a3768: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a3769: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a376c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a376d: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008a376f: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008a3772: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008a3775: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3776: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x8a3779u); call_ind(t); }
    /* 008a3779: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a377c: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a377e:; BB(0x008a377e);
    /* 008a377e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a377f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3780: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a3781: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3782: ret  */ FN_RET(0x008a36e7); r_esp += 4; return;
}

void f_008a3783(void) /* sub_8A3783 */
{
    FN_ENTER(0x008a3783);
    /* 008a3783: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3784: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3786: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3787: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a378a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a378b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a378c: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008a378f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a3792: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3793: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a3795: jmp 0x8a37a5 */ goto L_008a37a5;
L_008a3797:; BB(0x008a3797);
    /* 008a3797: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 008a379d: inc dword ptr [ecx + 0x58] */ { u32 ad = (u32)(r_ecx+0x58u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008a37a0:; BB(0x008a37a0);
    /* 008a37a0: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a37a2: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
L_008a37a5:; BB(0x008a37a5);
    /* 008a37a5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a37a7: jne 0x8a37ba */ if (!fZ) goto L_008a37ba;
L_008a37a9:; BB(0x008a37a9);
    /* 008a37a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a37aa: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a37adu); call_ind(t); }
    /* 008a37ad: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a37af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a37b0: je 0x8a37fc */ if (fZ) goto L_008a37fc;
L_008a37b2:; BB(0x008a37b2);
    /* 008a37b2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a37b5: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a37b7: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
L_008a37ba:; BB(0x008a37ba);
    /* 008a37ba: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a37bd: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a37be: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a37bf: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a37c5: jne 0x8a3797 */ if (!fZ) goto L_008a3797;
L_008a37c7:; BB(0x008a37c7);
    /* 008a37c7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a37c9: jne 0x8a37dc */ if (!fZ) goto L_008a37dc;
L_008a37cb:; BB(0x008a37cb);
    /* 008a37cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a37cc: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a37cfu); call_ind(t); }
    /* 008a37cf: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a37d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a37d2: je 0x8a37fc */ if (fZ) goto L_008a37fc;
L_008a37d4:; BB(0x008a37d4);
    /* 008a37d4: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a37d6: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a37d9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a37dc:; BB(0x008a37dc);
    /* 008a37dc: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a37df: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a37e0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a37e1: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a37e7: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a37ea: je 0x8a37c7 */ if (fZ) goto L_008a37c7;
L_008a37ec:; BB(0x008a37ec);
    /* 008a37ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a37ee: jne 0x8a3800 */ if (!fZ) goto L_008a3800;
L_008a37f0:; BB(0x008a37f0);
    /* 008a37f0: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 008a37f6: add dword ptr [ecx + 0x58], 2 */ { u32 ad = (u32)(r_ecx+0x58u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a37fa: jmp 0x8a37a0 */ goto L_008a37a0;
L_008a37fc:; BB(0x008a37fc);
    /* 008a37fc: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a37fe: jmp 0x8a3855 */ goto L_008a3855;
L_008a3800:; BB(0x008a3800);
    /* 008a3800: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 008a3806: cmp dword ptr [edx + 0x58], 0 */ {  u32 a = R32((u32)(r_edx+0x58u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a380a: je 0x8a3848 */ if (fZ) goto L_008a3848;
L_008a380c:; BB(0x008a380c);
    /* 008a380c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a380e: mov dword ptr [ecx + 0x14], 0x70 */ W32((u32)(r_ecx+0x14u), 0x70u);
    /* 008a3815: mov ecx, dword ptr [eax + 0x190] */ r_ecx = R32((u32)(r_eax+0x190u));
    /* 008a381b: mov ecx, dword ptr [ecx + 0x58] */ r_ecx = R32((u32)(r_ecx+0x58u));
    /* 008a381e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008a3820: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008a3823: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a3825: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3828: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 008a382b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a382d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a382f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3830: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3833u); call_ind(t); }
    /* 008a3833: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3836: mov eax, dword ptr [eax + 0x190] */ r_eax = R32((u32)(r_eax+0x190u));
    /* 008a383c: and dword ptr [eax + 0x58], 0 */ { u32 ad = (u32)(r_eax+0x58u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3840: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3844: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3845: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
L_008a3848:; BB(0x008a3848);
    /* 008a3848: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 008a384e: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a3850: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008a3853: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a3855:; BB(0x008a3855);
    /* 008a3855: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a3856: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3857: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a3858: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3859: ret  */ FN_RET(0x008a3783); r_esp += 4; return;
}

void f_008a385a(void) /* sub_8A385A */
{
    FN_ENTER(0x008a385a);
    /* 008a385a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a385b: mov ebp, esp */ r_ebp = r_esp;
    /* 008a385d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a385e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3861: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3862: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3863: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 008a3866: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a3869: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a386b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a386c: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a386e: jne 0x8a3881 */ if (!fZ) goto L_008a3881;
L_008a3870:; BB(0x008a3870);
    /* 008a3870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3871: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3874u); call_ind(t); }
    /* 008a3874: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3876: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3877: je 0x8a3896 */ if (fZ) goto L_008a3896;
L_008a3879:; BB(0x008a3879);
    /* 008a3879: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a387b: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a387e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008a3881:; BB(0x008a3881);
    /* 008a3881: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 008a3884: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a3885: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a3886: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3888: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008a388b: jne 0x8a38a5 */ if (!fZ) goto L_008a38a5;
L_008a388d:; BB(0x008a388d);
    /* 008a388d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a388e: call dword ptr [esi + 0xc] */ { u32 t = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3891u); call_ind(t); }
    /* 008a3891: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3893: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3894: jne 0x8a389a */ if (!fZ) goto L_008a389a;
L_008a3896:; BB(0x008a3896);
    /* 008a3896: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3898: jmp 0x8a38ec */ goto L_008a38ec;
L_008a389a:; BB(0x008a389a);
    /* 008a389a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 008a389c: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a389f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a38a2: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
L_008a38a5:; BB(0x008a38a5);
    /* 008a38a5: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 008a38a8: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a38a9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a38aa: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a38b0: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a38b3: jne 0x8a38bd */ if (!fZ) goto L_008a38bd;
L_008a38b5:; BB(0x008a38b5);
    /* 008a38b5: cmp ecx, 0xd8 */ {  u32 a = r_ecx; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a38bb: je 0x8a38df */ if (fZ) goto L_008a38df;
L_008a38bd:; BB(0x008a38bd);
    /* 008a38bd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a38bf: mov dword ptr [ecx + 0x14], 0x34 */ W32((u32)(r_ecx+0x14u), 0x34u);
    /* 008a38c6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a38c8: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 008a38cb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a38cd: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a38d0: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 008a38d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a38d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a38d6: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a38d8u); call_ind(t); }
    /* 008a38d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a38db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a38dc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
L_008a38df:; BB(0x008a38df);
    /* 008a38df: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 008a38e5: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008a38e7: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008a38ea: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a38ec:; BB(0x008a38ec);
    /* 008a38ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a38ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a38ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a38ef: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a38f0: ret  */ FN_RET(0x008a385a); r_esp += 4; return;
}

void f_008a38f1(void) /* sub_8A38F1 */
{
    FN_ENTER(0x008a38f1);
    /* 008a38f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a38f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a38f3: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a38f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a38f8: mov edi, 0xdb */ r_edi = 0xdbu;
L_008a38fd:; BB(0x008a38fd);
    /* 008a38fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a38ff: cmp dword ptr [esi + 0x178], ebx */ {  u32 a = R32((u32)(r_esi+0x178u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3905: jne 0x8a3928 */ if (!fZ) goto L_008a3928;
L_008a3907:; BB(0x008a3907);
    /* 008a3907: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a390d: cmp byte ptr [eax + 0x50], bl */ {  u32 a = R8((u32)(r_eax+0x50u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a3910: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3911: jne 0x8a391a */ if (!fZ) goto L_008a391a;
L_008a3913:; BB(0x008a3913);
    /* 008a3913: call 0x8a385a */ r_esp -= 4; W32(r_esp, 0x8a3918u); f_008a385a();
    /* 008a3918: jmp 0x8a391f */ goto L_008a391f;
L_008a391a:; BB(0x008a391a);
    /* 008a391a: call 0x8a3783 */ r_esp -= 4; W32(r_esp, 0x8a391fu); f_008a3783();
L_008a391f:; BB(0x008a391f);
    /* 008a391f: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3921: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3922: je 0x8a3ad8 */ if (fZ) goto L_008a3ad8;
L_008a3928:; BB(0x008a3928);
    /* 008a3928: mov eax, dword ptr [esi + 0x178] */ r_eax = R32((u32)(r_esi+0x178u));
    /* 008a392e: cmp eax, 0xcf */ {  u32 a = r_eax; u32 b = 0xcfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3933: jg 0x8a39cf */ if ((!fZ&&fS==fO)) goto L_008a39cf;
L_008a3939:; BB(0x008a3939);
    /* 008a3939: cmp eax, 0xcd */ {  u32 a = r_eax; u32 b = 0xcdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a393e: jge 0x8a39c4 */ if ((fS==fO)) goto L_008a39c4;
L_008a3944:; BB(0x008a3944);
    /* 008a3944: cmp eax, 0xc8 */ {  u32 a = r_eax; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3949: jg 0x8a3996 */ if ((!fZ&&fS==fO)) goto L_008a3996;
L_008a394b:; BB(0x008a394b);
    /* 008a394b: cmp eax, 0xc5 */ {  u32 a = r_eax; u32 b = 0xc5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3950: jge 0x8a39c4 */ if ((fS==fO)) goto L_008a39c4;
L_008a3952:; BB(0x008a3952);
    /* 008a3952: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3954: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3955: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3957: je 0x8a3a26 */ if (fZ) goto L_008a3a26;
L_008a395d:; BB(0x008a395d);
    /* 008a395d: cmp eax, 0xbf */ {  u32 a = r_eax; u32 b = 0xbfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3962: jle 0x8a3a00 */ if ((fZ||fS!=fO)) goto L_008a3a00;
L_008a3968:; BB(0x008a3968);
    /* 008a3968: cmp eax, 0xc1 */ {  u32 a = r_eax; u32 b = 0xc1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a396d: jle 0x8a3993 */ if ((fZ||fS!=fO)) goto L_008a3993;
L_008a396f:; BB(0x008a396f);
    /* 008a396f: cmp eax, 0xc2 */ {  u32 a = r_eax; u32 b = 0xc2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3974: je 0x8a3990 */ if (fZ) goto L_008a3990;
L_008a3976:; BB(0x008a3976);
    /* 008a3976: cmp eax, 0xc3 */ {  u32 a = r_eax; u32 b = 0xc3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a397b: je 0x8a39c4 */ if (fZ) goto L_008a39c4;
L_008a397d:; BB(0x008a397d);
    /* 008a397d: cmp eax, 0xc4 */ {  u32 a = r_eax; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3982: jne 0x8a3a00 */ if (!fZ) goto L_008a3a00;
L_008a3984:; BB(0x008a3984);
    /* 008a3984: mov ebx, esi */ r_ebx = r_esi;
    /* 008a3986: call 0x8a3153 */ r_esp -= 4; W32(r_esp, 0x8a398bu); f_008a3153();
    /* 008a398b: jmp 0x8a3a9c */ goto L_008a3a9c;
L_008a3990:; BB(0x008a3990);
    /* 008a3990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3991: jmp 0x8a39ba */ goto L_008a39ba;
L_008a3993:; BB(0x008a3993);
    /* 008a3993: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3994: jmp 0x8a39b8 */ goto L_008a39b8;
L_008a3996:; BB(0x008a3996);
    /* 008a3996: sub eax, 0xc9 */ {  u32 a = r_eax; u32 b = 0xc9u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a399b: je 0x8a39b6 */ if (fZ) goto L_008a39b6;
L_008a399d:; BB(0x008a399d);
    /* 008a399d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a399e: je 0x8a39b0 */ if (fZ) goto L_008a39b0;
L_008a39a0:; BB(0x008a39a0);
    /* 008a39a0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a39a1: je 0x8a39c4 */ if (fZ) goto L_008a39c4;
L_008a39a3:; BB(0x008a39a3);
    /* 008a39a3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a39a4: jne 0x8a3a00 */ if (!fZ) goto L_008a3a00;
L_008a39a6:; BB(0x008a39a6);
    /* 008a39a6: call 0x8a2ffc */ r_esp -= 4; W32(r_esp, 0x8a39abu); f_008a2ffc();
    /* 008a39ab: jmp 0x8a3a9c */ goto L_008a3a9c;
L_008a39b0:; BB(0x008a39b0);
    /* 008a39b0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a39b2: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a39b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a39b4: jmp 0x8a39ba */ goto L_008a39ba;
L_008a39b6:; BB(0x008a39b6);
    /* 008a39b6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
L_008a39b8:; BB(0x008a39b8);
    /* 008a39b8: xor cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_008a39ba:; BB(0x008a39ba);
    /* 008a39ba: call 0x8a2699 */ r_esp -= 4; W32(r_esp, 0x8a39bfu); f_008a2699();
    /* 008a39bf: jmp 0x8a3a9b */ goto L_008a3a9b;
L_008a39c4:; BB(0x008a39c4);
    /* 008a39c4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a39c6: mov dword ptr [eax + 0x14], 0x3b */ W32((u32)(r_eax+0x14u), 0x3bu);
    /* 008a39cd: jmp 0x8a3a09 */ goto L_008a3a09;
L_008a39cf:; BB(0x008a39cf);
    /* 008a39cf: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a39d1: jg 0x8a3a4e */ if ((!fZ&&fS==fO)) goto L_008a3a4e;
L_008a39d3:; BB(0x008a39d3);
    /* 008a39d3: je 0x8a3a45 */ if (fZ) goto L_008a3a45;
L_008a39d5:; BB(0x008a39d5);
    /* 008a39d5: cmp eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a39da: jl 0x8a3a00 */ if ((fS!=fO)) goto L_008a3a00;
L_008a39dc:; BB(0x008a39dc);
    /* 008a39dc: cmp eax, 0xd7 */ {  u32 a = r_eax; u32 b = 0xd7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a39e1: jle 0x8a3a26 */ if ((fZ||fS!=fO)) goto L_008a3a26;
L_008a39e3:; BB(0x008a39e3);
    /* 008a39e3: cmp eax, 0xd8 */ {  u32 a = r_eax; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a39e8: je 0x8a3a1f */ if (fZ) goto L_008a3a1f;
L_008a39ea:; BB(0x008a39ea);
    /* 008a39ea: cmp eax, 0xd9 */ {  u32 a = r_eax; u32 b = 0xd9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a39ef: je 0x8a3ac0 */ if (fZ) goto L_008a3ac0;
L_008a39f5:; BB(0x008a39f5);
    /* 008a39f5: cmp eax, 0xda */ {  u32 a = r_eax; u32 b = 0xdau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a39fa: je 0x8a3aac */ if (fZ) goto L_008a3aac;
L_008a3a00:; BB(0x008a3a00);
    /* 008a3a00: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a02: mov dword ptr [eax + 0x14], 0x43 */ W32((u32)(r_eax+0x14u), 0x43u);
L_008a3a09:; BB(0x008a3a09);
    /* 008a3a09: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a0b: mov ecx, dword ptr [esi + 0x178] */ r_ecx = R32((u32)(r_esi+0x178u));
    /* 008a3a11: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a3a14: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a17: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a3a19u); call_ind(t); }
L_008a3a19:; BB(0x008a3a19);
    /* 008a3a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3a1a: jmp 0x8a3aa0 */ goto L_008a3aa0;
L_008a3a1f:; BB(0x008a3a1f);
    /* 008a3a1f: call 0x8a260b */ r_esp -= 4; W32(r_esp, 0x8a3a24u); f_008a260b();
    /* 008a3a24: jmp 0x8a3a9c */ goto L_008a3a9c;
L_008a3a26:; BB(0x008a3a26);
    /* 008a3a26: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a28: mov dword ptr [eax + 0x14], 0x5b */ W32((u32)(r_eax+0x14u), 0x5bu);
    /* 008a3a2f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a31: mov ecx, dword ptr [esi + 0x178] */ r_ecx = R32((u32)(r_esi+0x178u));
    /* 008a3a37: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a3a3a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3a3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a3e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a3f: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3a42u); call_ind(t); }
    /* 008a3a42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3a43: jmp 0x8a3a19 */ goto L_008a3a19;
L_008a3a45:; BB(0x008a3a45);
    /* 008a3a45: mov ebx, esi */ r_ebx = r_esi;
    /* 008a3a47: call 0x8a33e7 */ r_esp -= 4; W32(r_esp, 0x8a3a4cu); f_008a33e7();
    /* 008a3a4c: jmp 0x8a3a9c */ goto L_008a3a9c;
L_008a3a4e:; BB(0x008a3a4e);
    /* 008a3a4e: cmp eax, 0xdc */ {  u32 a = r_eax; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3a53: je 0x8a3a95 */ if (fZ) goto L_008a3a95;
L_008a3a55:; BB(0x008a3a55);
    /* 008a3a55: cmp eax, 0xdd */ {  u32 a = r_eax; u32 b = 0xddu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3a5a: je 0x8a3a8d */ if (fZ) goto L_008a3a8d;
L_008a3a5c:; BB(0x008a3a5c);
    /* 008a3a5c: cmp eax, 0xdf */ {  u32 a = r_eax; u32 b = 0xdfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3a61: jle 0x8a3a00 */ if ((fZ||fS!=fO)) goto L_008a3a00;
L_008a3a63:; BB(0x008a3a63);
    /* 008a3a63: cmp eax, 0xef */ {  u32 a = r_eax; u32 b = 0xefu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3a68: jle 0x8a3a7d */ if ((fZ||fS!=fO)) goto L_008a3a7d;
L_008a3a6a:; BB(0x008a3a6a);
    /* 008a3a6a: cmp eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3a6f: jne 0x8a3a00 */ if (!fZ) goto L_008a3a00;
L_008a3a71:; BB(0x008a3a71);
    /* 008a3a71: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3a77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a78: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3a7bu); call_ind(t); }
    /* 008a3a7b: jmp 0x8a3a9b */ goto L_008a3a9b;
L_008a3a7d:; BB(0x008a3a7d);
    /* 008a3a7d: mov ecx, dword ptr [esi + 0x190] */ r_ecx = R32((u32)(r_esi+0x190u));
    /* 008a3a83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a84: call dword ptr [ecx + eax*4 - 0x370] */ { u32 t = R32((u32)(r_ecx+r_eax*4+0xfffffc90u)); r_esp -= 4; W32(r_esp, 0x8a3a8bu); call_ind(t); }
    /* 008a3a8b: jmp 0x8a3a9b */ goto L_008a3a9b;
L_008a3a8d:; BB(0x008a3a8d);
    /* 008a3a8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a8e: call 0x8a3610 */ r_esp -= 4; W32(r_esp, 0x8a3a93u); f_008a3610();
    /* 008a3a93: jmp 0x8a3a9b */ goto L_008a3a9b;
L_008a3a95:; BB(0x008a3a95);
    /* 008a3a95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3a96: call 0x8a36e7 */ r_esp -= 4; W32(r_esp, 0x8a3a9bu); f_008a36e7();
L_008a3a9b:; BB(0x008a3a9b);
    /* 008a3a9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3a9c:; BB(0x008a3a9c);
    /* 008a3a9c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3a9e: je 0x8a3ad8 */ if (fZ) goto L_008a3ad8;
L_008a3aa0:; BB(0x008a3aa0);
    /* 008a3aa0: and dword ptr [esi + 0x178], 0 */ { u32 ad = (u32)(r_esi+0x178u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3aa7: jmp 0x8a38fd */ goto L_008a38fd;
L_008a3aac:; BB(0x008a3aac);
    /* 008a3aac: call 0x8a2994 */ r_esp -= 4; W32(r_esp, 0x8a3ab1u); f_008a2994();
    /* 008a3ab1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3ab3: je 0x8a3ad8 */ if (fZ) goto L_008a3ad8;
L_008a3ab5:; BB(0x008a3ab5);
    /* 008a3ab5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008a3ab7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_008a3ab8:; BB(0x008a3ab8);
    /* 008a3ab8: mov dword ptr [esi + 0x178], ebx */ W32((u32)(r_esi+0x178u), r_ebx);
    /* 008a3abe: jmp 0x8a3ada */ goto L_008a3ada;
L_008a3ac0:; BB(0x008a3ac0);
    /* 008a3ac0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3ac2: mov dword ptr [eax + 0x14], 0x54 */ W32((u32)(r_eax+0x14u), 0x54u);
    /* 008a3ac9: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3acb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3acd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ace: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3ad1u); call_ind(t); }
    /* 008a3ad1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3ad3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ad5: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a3ad6: jmp 0x8a3ab8 */ goto L_008a3ab8;
L_008a3ad8:; BB(0x008a3ad8);
    /* 008a3ad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a3ada:; BB(0x008a3ada);
    /* 008a3ada: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a3adb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3adc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a3add: ret  */ FN_RET(0x008a38f1); r_esp += 4; return;
}

void f_008a3ade(void) /* sub_8A3ADE */
{
    FN_ENTER(0x008a3ade);
    /* 008a3ade: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3adf: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a3ae3: cmp dword ptr [esi + 0x178], 0 */ {  u32 a = R32((u32)(r_esi+0x178u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3aea: jne 0x8a3af7 */ if (!fZ) goto L_008a3af7;
L_008a3aec:; BB(0x008a3aec);
    /* 008a3aec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3aed: call 0x8a3783 */ r_esp -= 4; W32(r_esp, 0x8a3af2u); f_008a3783();
    /* 008a3af2: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3af4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3af5: je 0x8a3b58 */ if (fZ) goto L_008a3b58;
L_008a3af7:; BB(0x008a3af7);
    /* 008a3af7: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3afd: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 008a3b00: lea ecx, [eax + 0xd0] */ r_ecx = (u32)(r_eax+0xd0u);
    /* 008a3b06: cmp dword ptr [esi + 0x178], ecx */ {  u32 a = R32((u32)(r_esi+0x178u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3b0c: jne 0x8a3b4a */ if (!fZ) goto L_008a3b4a;
L_008a3b0e:; BB(0x008a3b0e);
    /* 008a3b0e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b10: mov dword ptr [eax + 0x14], 0x61 */ W32((u32)(r_eax+0x14u), 0x61u);
    /* 008a3b17: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3b1d: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 008a3b20: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a3b22: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a3b25: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b27: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b2a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3b2du); call_ind(t); }
    /* 008a3b2d: and dword ptr [esi + 0x178], 0 */ { u32 ad = (u32)(r_esi+0x178u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3b34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3b35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3b36:; BB(0x008a3b36);
    /* 008a3b36: mov esi, dword ptr [esi + 0x190] */ r_esi = R32((u32)(r_esi+0x190u));
    /* 008a3b3c: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 008a3b3f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3b40: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3b43: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 008a3b46: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 008a3b48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3b49: ret  */ FN_RET(0x008a3ade); r_esp += 4; return;
L_008a3b4a:; BB(0x008a3b4a);
    /* 008a3b4a: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008a3b4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b4f: call dword ptr [ecx + 0x14] */ { u32 t = R32((u32)(r_ecx+0x14u)); r_esp -= 4; W32(r_esp, 0x8a3b52u); call_ind(t); }
    /* 008a3b52: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3b54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3b55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3b56: jne 0x8a3b36 */ if (!fZ) goto L_008a3b36;
L_008a3b58:; BB(0x008a3b58);
    /* 008a3b58: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3b5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3b5b: ret  */ FN_RET(0x008a3ade); r_esp += 4; return;
}

void f_008a3b5c(void) /* sub_8A3B5C */
{
    FN_ENTER(0x008a3b5c);
    /* 008a3b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b5d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b5e: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008a3b62: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b63: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008a3b67: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b69: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b6a: mov edi, dword ptr [esi + 0x178] */ r_edi = R32((u32)(r_esi+0x178u));
    /* 008a3b70: mov dword ptr [eax + 0x14], 0x75 */ W32((u32)(r_eax+0x14u), 0x75u);
    /* 008a3b77: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b79: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 008a3b7c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b7e: mov dword ptr [eax + 0x1c], ebp */ W32((u32)(r_eax+0x1cu), r_ebp);
    /* 008a3b81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3b86: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3b89u); call_ind(t); }
    /* 008a3b89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3b8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3b8b: mov ebx, 0xd0 */ r_ebx = 0xd0u;
L_008a3b90:; BB(0x008a3b90);
    /* 008a3b90: cmp edi, 0xc0 */ {  u32 a = r_edi; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3b96: jge 0x8a3ba2 */ if ((fS==fO)) goto L_008a3ba2;
L_008a3b98:; BB(0x008a3b98);
    /* 008a3b98: mov dword ptr [esp + 0x14], 2 */ W32((u32)(r_esp+0x14u), 0x2u);
    /* 008a3ba0: jmp 0x8a3bef */ goto L_008a3bef;
L_008a3ba2:; BB(0x008a3ba2);
    /* 008a3ba2: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3ba4: jl 0x8a3be7 */ if ((fS!=fO)) goto L_008a3be7;
L_008a3ba6:; BB(0x008a3ba6);
    /* 008a3ba6: cmp edi, 0xd7 */ {  u32 a = r_edi; u32 b = 0xd7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3bac: jg 0x8a3be7 */ if ((!fZ&&fS==fO)) goto L_008a3be7;
L_008a3bae:; BB(0x008a3bae);
    /* 008a3bae: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3bb0: lea ecx, [ebp + 1] */ r_ecx = (u32)(r_ebp+0x1u);
    /* 008a3bb3: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a3bb4: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bb6: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bb8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3bba: je 0x8a3be7 */ if (fZ) goto L_008a3be7;
L_008a3bbc:; BB(0x008a3bbc);
    /* 008a3bbc: lea ecx, [ebp + 2] */ r_ecx = (u32)(r_ebp+0x2u);
    /* 008a3bbf: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bc1: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bc3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3bc5: je 0x8a3be7 */ if (fZ) goto L_008a3be7;
L_008a3bc7:; BB(0x008a3bc7);
    /* 008a3bc7: lea ecx, [ebp - 1] */ r_ecx = (u32)(r_ebp+0xffffffffu);
    /* 008a3bca: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bcc: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bce: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3bd0: je 0x8a3b98 */ if (fZ) goto L_008a3b98;
L_008a3bd2:; BB(0x008a3bd2);
    /* 008a3bd2: lea ecx, [ebp - 2] */ r_ecx = (u32)(r_ebp+0xfffffffeu);
    /* 008a3bd5: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bd7: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3bd9: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3bdb: je 0x8a3b98 */ if (fZ) goto L_008a3b98;
L_008a3bdd:; BB(0x008a3bdd);
    /* 008a3bdd: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 008a3be5: jmp 0x8a3bef */ goto L_008a3bef;
L_008a3be7:; BB(0x008a3be7);
    /* 008a3be7: mov dword ptr [esp + 0x14], 3 */ W32((u32)(r_esp+0x14u), 0x3u);
L_008a3bef:; BB(0x008a3bef);
    /* 008a3bef: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3bf1: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008a3bf5: mov dword ptr [eax + 0x14], 0x60 */ W32((u32)(r_eax+0x14u), 0x60u);
    /* 008a3bfc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3bfe: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 008a3c01: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3c03: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 008a3c06: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3c08: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c0a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c0b: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a3c0eu); call_ind(t); }
    /* 008a3c0e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008a3c12: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a3c13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3c14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3c15: je 0x8a3c3d */ if (fZ) goto L_008a3c3d;
L_008a3c17:; BB(0x008a3c17);
    /* 008a3c17: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a3c18: je 0x8a3c23 */ if (fZ) goto L_008a3c23;
L_008a3c1a:; BB(0x008a3c1a);
    /* 008a3c1a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3c1b: jne 0x8a3b90 */ if (!fZ) goto L_008a3b90;
L_008a3c21:; BB(0x008a3c21);
    /* 008a3c21: jmp 0x8a3c44 */ goto L_008a3c44;
L_008a3c23:; BB(0x008a3c23);
    /* 008a3c23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c24: call 0x8a3783 */ r_esp -= 4; W32(r_esp, 0x8a3c29u); f_008a3783();
    /* 008a3c29: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3c2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3c2c: je 0x8a3c39 */ if (fZ) goto L_008a3c39;
L_008a3c2e:; BB(0x008a3c2e);
    /* 008a3c2e: mov edi, dword ptr [esi + 0x178] */ r_edi = R32((u32)(r_esi+0x178u));
    /* 008a3c34: jmp 0x8a3b90 */ goto L_008a3b90;
L_008a3c39:; BB(0x008a3c39);
    /* 008a3c39: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3c3b: jmp 0x8a3c46 */ goto L_008a3c46;
L_008a3c3d:; BB(0x008a3c3d);
    /* 008a3c3d: and dword ptr [esi + 0x178], 0 */ { u32 ad = (u32)(r_esi+0x178u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008a3c44:; BB(0x008a3c44);
    /* 008a3c44: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
L_008a3c46:; BB(0x008a3c46);
    /* 008a3c46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a3c47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3c48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a3c49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a3c4a: ret  */ FN_RET(0x008a3b5c); r_esp += 4; return;
}

void f_008a3c4b(void) /* sub_8A3C4B */
{
    FN_ENTER(0x008a3c4b);
    /* 008a3c4b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3c4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a3c51: mov dword ptr [eax + 0xc4], ecx */ W32((u32)(r_eax+0xc4u), r_ecx);
    /* 008a3c57: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 008a3c5a: mov dword ptr [eax + 0x178], ecx */ W32((u32)(r_eax+0x178u), r_ecx);
    /* 008a3c60: add eax, 0x190 */ {  u32 a = r_eax; u32 b = 0x190u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a3c65: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008a3c67: mov byte ptr [edx + 0x50], cl */ W8((u32)(r_edx+0x50u), (u8)r_ecx);
    /* 008a3c6a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008a3c6c: mov byte ptr [edx + 0x51], cl */ W8((u32)(r_edx+0x51u), (u8)r_ecx);
    /* 008a3c6f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a3c71: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 008a3c74: ret  */ FN_RET(0x008a3c4b); r_esp += 4; return;
}

void f_008a3c75(void) /* sub_8A3C75 */
{
    FN_ENTER(0x008a3c75);
    /* 008a3c75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c76: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a3c7a: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a3c7d: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3c82: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a3c84u); call_ind(t); }
    /* 008a3c84: mov dword ptr [esi + 0x190], eax */ W32((u32)(r_esi+0x190u), r_eax);
    /* 008a3c8a: mov dword ptr [eax], 0x8a3c4b */ W32((u32)(r_eax), 0x8a3c4bu);
    /* 008a3c90: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3c96: mov dword ptr [eax + 4], 0x8a38f1 */ W32((u32)(r_eax+0x4u), 0x8a38f1u);
    /* 008a3c9d: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3ca3: mov dword ptr [eax + 8], 0x8a3ade */ W32((u32)(r_eax+0x8u), 0x8a3adeu);
    /* 008a3caa: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3cb0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a3cb3: mov ecx, 0x8a36e7 */ r_ecx = 0x8a36e7u;
    /* 008a3cb8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3cba: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a3cbd: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008a3cbe:; BB(0x008a3cbe);
    /* 008a3cbe: mov edx, dword ptr [esi + 0x190] */ r_edx = R32((u32)(r_esi+0x190u));
    /* 008a3cc4: mov dword ptr [eax + edx], ecx */ W32((u32)(r_eax+r_edx), r_ecx);
    /* 008a3cc7: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3cca: cmp eax, 0x50 */ {  u32 a = r_eax; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3ccd: jl 0x8a3cbe */ if ((fS!=fO)) goto L_008a3cbe;
L_008a3ccf:; BB(0x008a3ccf);
    /* 008a3ccf: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3cd5: mov dword ptr [eax + 0x10], 0x8a2c46 */ W32((u32)(r_eax+0x10u), 0x8a2c46u);
    /* 008a3cdc: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a3ce2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ce3: mov dword ptr [eax + 0x48], 0x8a2e82 */ W32((u32)(r_eax+0x48u), 0x8a2e82u);
    /* 008a3cea: call 0x8a3c4b */ r_esp -= 4; W32(r_esp, 0x8a3cefu); f_008a3c4b();
    /* 008a3cef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3cf0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3cf1: ret  */ FN_RET(0x008a3c75); r_esp += 4; return;
}

void f_008a3cf2(void) /* sub_8A3CF2 */
{
    FN_ENTER(0x008a3cf2);
    /* 008a3cf2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3cf3: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a3cf7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a3cf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3cfa: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8a3cfdu); call_ind(t); }
    /* 008a3cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3cfe: call 0x8a9d23 */ r_esp -= 4; W32(r_esp, 0x8a3d03u); f_008a9d23();
    /* 008a3d03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d07: call 0x85a032 */ r_esp -= 4; W32(r_esp, 0x8a3d0cu); f_0085a032();
    /* 008a3d0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3d0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d0e: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3d10: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a3d16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3d19: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a3d1b: lea edx, [ebp - 0xc8] */ r_edx = (u32)(r_ebp+0xffffff38u);
    /* 008a3d21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d23: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3d26u); call_ind(t); }
    /* 008a3d26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d28: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3d29: ret  */ FN_RET(0x008a3cf2); r_esp += 4; return;
}

void f_008a3d0d(void) /* sub_8A3D0D */
{
    FN_ENTER(0x008a3d0d);
    /* 008a3d0d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d0e: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3d10: sub esp, 0xc8 */ {  u32 a = r_esp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a3d16: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3d19: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a3d1b: lea edx, [ebp - 0xc8] */ r_edx = (u32)(r_ebp+0xffffff38u);
    /* 008a3d21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d23: call dword ptr [ecx + 0xc] */ { u32 t = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, 0x8a3d26u); call_ind(t); }
    /* 008a3d26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3d28: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3d29: ret  */ FN_RET(0x008a3d0d); r_esp += 4; return;
}

void f_008a3d2a(void) /* sub_8A3D2A */
{
    FN_ENTER(0x008a3d2a);
    /* 008a3d2a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a3d2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a3d30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3d34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d35: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008a3d37: jge 0x8a3d4f */ if ((fS==fO)) goto L_008a3d4f;
L_008a3d39:; BB(0x008a3d39);
    /* 008a3d39: cmp dword ptr [esi + 0x6c], 0 */ {  u32 a = R32((u32)(r_esi+0x6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3d3d: je 0x8a3d45 */ if (fZ) goto L_008a3d45;
L_008a3d3f:; BB(0x008a3d3f);
    /* 008a3d3f: cmp dword ptr [esi + 0x68], 3 */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a3d43: jl 0x8a3d4a */ if ((fS!=fO)) goto L_008a3d4a;
L_008a3d45:; BB(0x008a3d45);
    /* 008a3d45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d46: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x8a3d49u); call_ind(t); }
    /* 008a3d49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3d4a:; BB(0x008a3d4a);
    /* 008a3d4a: inc dword ptr [esi + 0x6c] */ { u32 ad = (u32)(r_esi+0x6cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a3d4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3d4e: ret  */ FN_RET(0x008a3d2a); r_esp += 4; return;
L_008a3d4f:; BB(0x008a3d4f);
    /* 008a3d4f: cmp dword ptr [esi + 0x68], ecx */ {  u32 a = R32((u32)(r_esi+0x68u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a3d52: jl 0x8a3d59 */ if ((fS!=fO)) goto L_008a3d59;
L_008a3d54:; BB(0x008a3d54);
    /* 008a3d54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d55: call dword ptr [esi + 8] */ { u32 t = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, 0x8a3d58u); call_ind(t); }
    /* 008a3d58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3d59:; BB(0x008a3d59);
    /* 008a3d59: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3d5a: ret  */ FN_RET(0x008a3d2a); r_esp += 4; return;
}

void f_008a3d5b(void) /* sub_8A3D5B */
{
    FN_ENTER(0x008a3d5b);
    /* 008a3d5b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3d5f: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a3d61: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 008a3d64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a3d66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d67: jle 0x8a3d76 */ if ((fZ||fS!=fO)) goto L_008a3d76;
L_008a3d69:; BB(0x008a3d69);
    /* 008a3d69: cmp edx, dword ptr [eax + 0x74] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x74u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3d6c: jg 0x8a3d76 */ if ((!fZ&&fS==fO)) goto L_008a3d76;
L_008a3d6e:; BB(0x008a3d6e);
    /* 008a3d6e: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 008a3d71: mov ecx, dword ptr [ecx + edx*4] */ r_ecx = R32((u32)(r_ecx+r_edx*4));
    /* 008a3d74: jmp 0x8a3d95 */ goto L_008a3d95;
L_008a3d76:; BB(0x008a3d76);
    /* 008a3d76: mov ecx, dword ptr [eax + 0x78] */ r_ecx = R32((u32)(r_eax+0x78u));
    /* 008a3d79: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3d7b: je 0x8a3d99 */ if (fZ) goto L_008a3d99;
L_008a3d7d:; BB(0x008a3d7d);
    /* 008a3d7d: mov esi, dword ptr [eax + 0x7c] */ r_esi = R32((u32)(r_eax+0x7cu));
    /* 008a3d80: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3d82: jl 0x8a3d99 */ if ((fS!=fO)) goto L_008a3d99;
L_008a3d84:; BB(0x008a3d84);
    /* 008a3d84: cmp edx, dword ptr [eax + 0x80] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3d8a: jg 0x8a3d99 */ if ((!fZ&&fS==fO)) goto L_008a3d99;
L_008a3d8c:; BB(0x008a3d8c);
    /* 008a3d8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3d8d: mov edi, edx */ r_edi = r_edx;
    /* 008a3d8f: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a3d91: mov ecx, dword ptr [ecx + edi*4] */ r_ecx = R32((u32)(r_ecx+r_edi*4));
    /* 008a3d94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008a3d95:; BB(0x008a3d95);
    /* 008a3d95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3d97: jne 0x8a3da1 */ if (!fZ) goto L_008a3da1;
L_008a3d99:; BB(0x008a3d99);
    /* 008a3d99: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 008a3d9c: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008a3d9f: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
L_008a3da1:; BB(0x008a3da1);
    /* 008a3da1: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008a3da3: mov esi, ecx */ r_esi = r_ecx;
    /* 008a3da5: jmp 0x8a3daf */ goto L_008a3daf;
L_008a3da7:; BB(0x008a3da7);
    /* 008a3da7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a3da8: cmp dl, 0x25 */ {  u32 a = (u8)r_edx; u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a3dab: je 0x8a3dda */ if (fZ) goto L_008a3dda;
L_008a3dad:; BB(0x008a3dad);
    /* 008a3dad: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
L_008a3daf:; BB(0x008a3daf);
    /* 008a3daf: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008a3db1: jne 0x8a3da7 */ if (!fZ) goto L_008a3da7;
L_008a3db3:; BB(0x008a3db3);
    /* 008a3db3: push dword ptr [eax + 0x34] */ { u32 v = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3db6: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3db9: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dbc: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dbf: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dc2: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dc5: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dc8: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dcb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3dcc: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3dd0: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8a3dd5u); f_00858bf5();
    /* 008a3dd5: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a3dd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3dd9: ret  */ FN_RET(0x008a3d5b); r_esp += 4; return;
L_008a3dda:; BB(0x008a3dda);
    /* 008a3dda: cmp byte ptr [esi], 0x73 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x73u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a3ddd: jne 0x8a3db3 */ if (!fZ) goto L_008a3db3;
L_008a3ddf:; BB(0x008a3ddf);
    /* 008a3ddf: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3de2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3de3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3de4: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3de8: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8a3dedu); f_00858bf5();
    /* 008a3ded: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a3df0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3df1: ret  */ FN_RET(0x008a3d5b); r_esp += 4; return;
}

void f_008a3df2(void) /* sub_8A3DF2 */
{
    FN_ENTER(0x008a3df2);
    /* 008a3df2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3df6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a3df8: and dword ptr [ecx + 0x6c], 0 */ { u32 ad = (u32)(r_ecx+0x6cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a3dfc: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a3dfe: and dword ptr [eax + 0x14], 0 */ { u32 ad = (u32)(r_eax+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3e02: ret  */ FN_RET(0x008a3df2); r_esp += 4; return;
}

void f_008a3e03(void) /* sub_8A3E03 */
{
    FN_ENTER(0x008a3e03);
    /* 008a3e03: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3e07: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3e09: mov dword ptr [eax], 0x8a3cf2 */ W32((u32)(r_eax), 0x8a3cf2u);
    /* 008a3e0f: mov dword ptr [eax + 4], 0x8a3d2a */ W32((u32)(r_eax+0x4u), 0x8a3d2au);
    /* 008a3e16: mov dword ptr [eax + 8], 0x8a3d0d */ W32((u32)(r_eax+0x8u), 0x8a3d0du);
    /* 008a3e1d: mov dword ptr [eax + 0xc], 0x8a3d5b */ W32((u32)(r_eax+0xcu), 0x8a3d5bu);
    /* 008a3e24: mov dword ptr [eax + 0x10], 0x8a3df2 */ W32((u32)(r_eax+0x10u), 0x8a3df2u);
    /* 008a3e2b: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 008a3e2e: mov dword ptr [eax + 0x6c], ecx */ W32((u32)(r_eax+0x6cu), r_ecx);
    /* 008a3e31: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 008a3e34: mov dword ptr [eax + 0x70], 0x99c3c8 */ W32((u32)(r_eax+0x70u), 0x99c3c8u);
    /* 008a3e3b: mov dword ptr [eax + 0x74], 0x77 */ W32((u32)(r_eax+0x74u), 0x77u);
    /* 008a3e42: mov dword ptr [eax + 0x78], ecx */ W32((u32)(r_eax+0x78u), r_ecx);
    /* 008a3e45: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 008a3e48: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 008a3e4e: ret  */ FN_RET(0x008a3e03); r_esp += 4; return;
}

void f_008a3e4f(void) /* sub_8A3E4F */
{
    FN_ENTER(0x008a3e4f);
    /* 008a3e4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3e51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a3e53: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a3e55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008a3e56:; BB(0x008a3e56);
    /* 008a3e56: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008a3e5a: movzx edx, byte ptr [edx + esi + 0x10c] */ r_edx = (u32)R8((u32)(r_edx+r_esi+0x10cu));
    /* 008a3e62: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a3e63: cmp edx, 0x29 */ {  u32 a = r_edx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3e66: jl 0x8a3e7c */ if ((fS!=fO)) goto L_008a3e7c;
L_008a3e68:; BB(0x008a3e68);
    /* 008a3e68: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3e6b: jg 0x8a3e7c */ if ((!fZ&&fS==fO)) goto L_008a3e7c;
L_008a3e6d:; BB(0x008a3e6d);
    /* 008a3e6d: cmp edx, 0x5a */ {  u32 a = r_edx; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3e70: jle 0x8a3e77 */ if ((fZ||fS!=fO)) goto L_008a3e77;
L_008a3e72:; BB(0x008a3e72);
    /* 008a3e72: cmp edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3e75: jl 0x8a3e7c */ if ((fS!=fO)) goto L_008a3e7c;
L_008a3e77:; BB(0x008a3e77);
    /* 008a3e77: mov byte ptr [eax + ecx], dl */ W8((u32)(r_eax+r_ecx), (u8)r_edx);
    /* 008a3e7a: jmp 0x8a3ea4 */ goto L_008a3ea4;
L_008a3e7c:; BB(0x008a3e7c);
    /* 008a3e7c: mov byte ptr [eax + ecx], 0x5b */ W8((u32)(r_eax+r_ecx), 0x5bu);
    /* 008a3e80: mov edi, edx */ r_edi = r_edx;
    /* 008a3e82: sar edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008a3e85: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008a3e88: mov bl, byte ptr [edi + 0x99d740] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+0x99d740u))) & 0xffu);
    /* 008a3e8e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3e8f: mov byte ptr [eax + ecx], bl */ W8((u32)(r_eax+r_ecx), (u8)r_ebx);
    /* 008a3e92: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008a3e95: mov dl, byte ptr [edx + 0x99d740] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0x99d740u))) & 0xffu);
    /* 008a3e9b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3e9c: mov byte ptr [eax + ecx], dl */ W8((u32)(r_eax+r_ecx), (u8)r_edx);
    /* 008a3e9f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3ea0: mov byte ptr [eax + ecx], 0x5d */ W8((u32)(r_eax+r_ecx), 0x5du);
L_008a3ea4:; BB(0x008a3ea4);
    /* 008a3ea4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a3ea5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a3ea8: jl 0x8a3e56 */ if ((fS!=fO)) goto L_008a3e56;
L_008a3eaa:; BB(0x008a3eaa);
    /* 008a3eaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a3eac: cmp dword ptr [esp + 0x14], edx */ {  u32 a = R32((u32)(r_esp+0x14u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a3eb0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a3eb1: jne 0x8a3eb8 */ if (!fZ) goto L_008a3eb8;
L_008a3eb3:; BB(0x008a3eb3);
    /* 008a3eb3: mov byte ptr [eax + ecx], dl */ W8((u32)(r_eax+r_ecx), (u8)r_edx);
    /* 008a3eb6: jmp 0x8a3ed3 */ goto L_008a3ed3;
L_008a3eb8:; BB(0x008a3eb8);
    /* 008a3eb8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008a3ebc: mov byte ptr [eax + ecx], 0x3a */ W8((u32)(r_eax+r_ecx), 0x3au);
    /* 008a3ec0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008a3ec1: mov byte ptr [eax + ecx], 0x20 */ W8((u32)(r_eax+r_ecx), 0x20u);
    /* 008a3ec5: lea eax, [eax + ecx + 1] */ r_eax = (u32)(r_eax+r_ecx+0x1u);
    /* 008a3ec9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ecb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3ecc: mov edi, eax */ r_edi = r_eax;
    /* 008a3ece: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a3ed0: mov byte ptr [eax + 0x3f], dl */ W8((u32)(r_eax+0x3fu), (u8)r_edx);
L_008a3ed3:; BB(0x008a3ed3);
    /* 008a3ed3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a3ed4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3ed5: ret  */ FN_RET(0x008a3e4f); r_esp += 4; return;
}

void f_008a3ed6(void) /* sub_8A3ED6 */
{
    FN_ENTER(0x008a3ed6);
    /* 008a3ed6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a3eda: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008a3ede: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 008a3ee1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008a3ee5: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 008a3ee8: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008a3eec: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 008a3eef: ret  */ FN_RET(0x008a3ed6); r_esp += 4; return;
}

void f_008a3ef0(void) /* sub_8A3EF0 */
{
    FN_ENTER(0x008a3ef0);
    /* 008a3ef0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ef1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a3ef5: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 008a3ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3efa: je 0x8a3f05 */ if (fZ) goto L_008a3f05;
L_008a3efc:; BB(0x008a3efc);
    /* 008a3efc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f01: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8a3f03u); call_ind(t); }
    /* 008a3f03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3f05:; BB(0x008a3f05);
    /* 008a3f05: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f07: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f08: call 0x8cb0f0 */ r_esp -= 4; W32(r_esp, 0x8a3f0du); f_008cb0f0();
    /* 008a3f0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a3f0e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a3f12: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 008a3f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3f17: je 0x8a3f22 */ if (fZ) goto L_008a3f22;
L_008a3f19:; BB(0x008a3f19);
    /* 008a3f19: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8a3f20u); call_ind(t); }
    /* 008a3f20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3f22:; BB(0x008a3f22);
    /* 008a3f22: ret  */ FN_RET(0x008a3ef0); r_esp += 4; return;
}

void f_008a3f0e(void) /* sub_8A3F0E */
{
    FN_ENTER(0x008a3f0e);
    /* 008a3f0e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008a3f12: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 008a3f15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3f17: je 0x8a3f22 */ if (fZ) goto L_008a3f22;
L_008a3f19:; BB(0x008a3f19);
    /* 008a3f19: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8a3f20u); call_ind(t); }
    /* 008a3f20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3f22:; BB(0x008a3f22);
    /* 008a3f22: ret  */ FN_RET(0x008a3f0e); r_esp += 4; return;
}

void f_008a3f23(void) /* sub_8A3F23 */
{
    FN_ENTER(0x008a3f23);
    /* 008a3f23: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f24: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3f26: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a3f29: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f2c: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 008a3f2f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f32: call 0x8a3e4f */ r_esp -= 4; W32(r_esp, 0x8a3f37u); f_008a3e4f();
    /* 008a3f37: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 008a3f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f3b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f3e: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a3f43u); f_008a3ef0();
    /* 008a3f43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a3f46: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3f47: ret  */ FN_RET(0x008a3f23); r_esp += 4; return;
}

void f_008a3f48(void) /* sub_8A3F48 */
{
    FN_ENTER(0x008a3f48);
    /* 008a3f48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f49: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3f4b: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a3f4e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f51: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 008a3f54: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f57: call 0x8a3e4f */ r_esp -= 4; W32(r_esp, 0x8a3f5cu); f_008a3e4f();
    /* 008a3f5c: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 008a3f5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f60: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f63: call 0x8a3f0e */ r_esp -= 4; W32(r_esp, 0x8a3f68u); f_008a3f0e();
    /* 008a3f68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a3f6b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a3f6c: ret  */ FN_RET(0x008a3f48); r_esp += 4; return;
}

void f_008a3f6d(void) /* sub_8A3F6D */
{
    FN_ENTER(0x008a3f6d);
    /* 008a3f6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f6e: mov ebp, esp */ r_ebp = r_esp;
    /* 008a3f70: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f74: call 0x8aa850 */ r_esp -= 4; W32(r_esp, 0x8a3f79u); f_008aa850();
    /* 008a3f79: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3f7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f7c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a3f7f: je 0x8a3fa7 */ if (fZ) goto L_008a3fa7;
L_008a3f81:; BB(0x008a3f81);
    /* 008a3f81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f84: call 0x8cb16c */ r_esp -= 4; W32(r_esp, 0x8a3f89u); f_008cb16c();
    /* 008a3f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3f8b: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a3f8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f8f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3f90: je 0x8a3fae */ if (fZ) goto L_008a3fae;
L_008a3f92:; BB(0x008a3f92);
    /* 008a3f92: push dword ptr [esi + 0x9c] */ { u32 v = R32((u32)(r_esi+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3f98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f99: call 0x8aa8d5 */ r_esp -= 4; W32(r_esp, 0x8a3f9eu); f_008aa8d5();
    /* 008a3f9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3f9f: call 0x8aa892 */ r_esp -= 4; W32(r_esp, 0x8a3fa4u); f_008aa892();
    /* 008a3fa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008a3fa7:; BB(0x008a3fa7);
    /* 008a3fa7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a3fa9: jmp 0x8a406d */ goto L_008a406d;
L_008a3fae:; BB(0x008a3fae);
    /* 008a3fae: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3fb1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3fb4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a3fb7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3fb8: call 0x8a3ed6 */ r_esp -= 4; W32(r_esp, 0x8a3fbdu); f_008a3ed6();
    /* 008a3fbd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a3fc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a3fc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a3fc5: je 0x8a3fcc */ if (fZ) goto L_008a3fcc;
L_008a3fc7:; BB(0x008a3fc7);
    /* 008a3fc7: cmp byte ptr [eax], 0x31 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a3fca: je 0x8a3fd9 */ if (fZ) goto L_008a3fd9;
L_008a3fcc:; BB(0x008a3fcc);
    /* 008a3fcc: push 0x99d810 */ { u32 v = 0x99d810u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3fd1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3fd2: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a3fd7u); f_008a3ef0();
    /* 008a3fd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a3fd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a3fd9:; BB(0x008a3fd9);
    /* 008a3fd9: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 008a3fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a3fdf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a3fe0: mov dword ptr [esi + 0xa0], eax */ W32((u32)(r_esi+0xa0u), r_eax);
    /* 008a3fe6: call 0x8aa89f */ r_esp -= 4; W32(r_esp, 0x8a3febu); f_008aa89f();
    /* 008a3feb: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 008a3ff1: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 008a3ff3: mov dword ptr [esi + 0x84], 0x8a6307 */ W32((u32)(r_esi+0x84u), 0x8a6307u);
    /* 008a3ffd: lea eax, [esi + 0x64] */ r_eax = (u32)(r_esi+0x64u);
    /* 008a4000: push 0x99d808 */ { u32 v = 0x99d808u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4005: mov dword ptr [esi + 0x88], 0x8a635a */ W32((u32)(r_esi+0x88u), 0x8a635au);
    /* 008a400f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a4010: mov dword ptr [esi + 0x8c], esi */ W32((u32)(r_esi+0x8cu), r_esi);
    /* 008a4016: call 0x8aa4d2 */ r_esp -= 4; W32(r_esp, 0x8a401bu); f_008aa4d2();
    /* 008a401b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a401e: cmp eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4021: je 0x8a403f */ if (fZ) goto L_008a403f;
L_008a4023:; BB(0x008a4023);
    /* 008a4023: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a4026: je 0x8a4038 */ if (fZ) goto L_008a4038;
L_008a4028:; BB(0x008a4028);
    /* 008a4028: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a402b: je 0x8a4038 */ if (fZ) goto L_008a4038;
L_008a402d:; BB(0x008a402d);
    /* 008a402d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a402f: je 0x8a404c */ if (fZ) goto L_008a404c;
L_008a4031:; BB(0x008a4031);
    /* 008a4031: push 0x99d7f4 */ { u32 v = 0x99d7f4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4036: jmp 0x8a4044 */ goto L_008a4044;
L_008a4038:; BB(0x008a4038);
    /* 008a4038: push 0x99d7e0 */ { u32 v = 0x99d7e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a403d: jmp 0x8a4044 */ goto L_008a4044;
L_008a403f:; BB(0x008a403f);
    /* 008a403f: push 0x99d7cc */ { u32 v = 0x99d7ccu; r_esp -= 4; W32(r_esp, v); }
L_008a4044:; BB(0x008a4044);
    /* 008a4044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4045: call 0x8a3ef0 */ r_esp -= 4; W32(r_esp, 0x8a404au); f_008a3ef0();
    /* 008a404a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a404b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a404c:; BB(0x008a404c);
    /* 008a404c: mov eax, dword ptr [esi + 0x9c] */ r_eax = R32((u32)(r_esi+0x9cu));
    /* 008a4052: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a4054: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 008a4057: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 008a405d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a405f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a4060: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 008a4063: call 0x8a6280 */ r_esp -= 4; W32(r_esp, 0x8a4068u); f_008a6280();
    /* 008a4068: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a406b: mov eax, esi */ r_eax = r_esi;
L_008a406d:; BB(0x008a406d);
    /* 008a406d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a406e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a406f: ret  */ FN_RET(0x008a3f6d); r_esp += 4; return;
}

