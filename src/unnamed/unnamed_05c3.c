#include "protos.h"

void f_005c30f0(void) /* sub_5C30F0 */
{
    FN_ENTER(0x005c30f0);
    /* 005c30f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c30f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c30f5: je 0x5c321a */ if (fZ) goto L_005c321a;
L_005c30fb:; BB(0x005c30fb);
    /* 005c30fb: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c30ff: mov ebx, eax */ r_ebx = r_eax;
    /* 005c3101: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005c3105:; BB(0x005c3105);
    /* 005c3105: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005c3107: mov edx, esi */ r_edx = r_esi;
    /* 005c3109: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c310c: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c310f: jne 0x5c3174 */ if (!fZ) goto L_005c3174;
L_005c3111:; BB(0x005c3111);
    /* 005c3111: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c3116u); f_0082d7b0();
    /* 005c3116: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c311c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c311e: je 0x5c3134 */ if (fZ) goto L_005c3134;
L_005c3120:; BB(0x005c3120);
    /* 005c3120: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c3125u); f_00831650();
    /* 005c3125: mov edx, dword ptr [0xa8d828] */ r_edx = R32((u32)(0xa8d828u));
    /* 005c312b: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c312e: mov dword ptr [0xa8d828], edx */ W32((u32)(0xa8d828u), r_edx);
L_005c3134:; BB(0x005c3134);
    /* 005c3134: mov edx, dword ptr [0xa8d824] */ r_edx = R32((u32)(0xa8d824u));
    /* 005c313a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c313c: je 0x5c3142 */ if (fZ) goto L_005c3142;
L_005c313e:; BB(0x005c313e);
    /* 005c313e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c313f: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c3141u); call_ind(t); }
    /* 005c3141: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3142:; BB(0x005c3142);
    /* 005c3142: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3148: jne 0x5c315a */ if (!fZ) goto L_005c315a;
L_005c314a:; BB(0x005c314a);
    /* 005c314a: mov edx, dword ptr [0xa8d82c] */ r_edx = R32((u32)(0xa8d82cu));
    /* 005c3150: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3152: je 0x5c315a */ if (fZ) goto L_005c315a;
L_005c3154:; BB(0x005c3154);
    /* 005c3154: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3157: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c3159u); call_ind(t); }
    /* 005c3159: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c315a:; BB(0x005c315a);
    /* 005c315a: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3160: jne 0x5c316a */ if (!fZ) goto L_005c316a;
L_005c3162:; BB(0x005c3162);
    /* 005c3162: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c3165: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c316au); f_005c30f0();
L_005c316a:; BB(0x005c316a);
    /* 005c316a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c316fu); f_0082da80();
    /* 005c316f: jmp 0x5c3207 */ goto L_005c3207;
L_005c3174:; BB(0x005c3174);
    /* 005c3174: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c3179u); f_0082d7b0();
    /* 005c3179: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c317f: jne 0x5c3189 */ if (!fZ) goto L_005c3189;
L_005c3181:; BB(0x005c3181);
    /* 005c3181: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 005c3184: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c3189u); f_0082d838();
L_005c3189:; BB(0x005c3189);
    /* 005c3189: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c318f: jne 0x5c319e */ if (!fZ) goto L_005c319e;
L_005c3191:; BB(0x005c3191);
    /* 005c3191: mov edx, esi */ r_edx = r_esi;
    /* 005c3193: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c3196: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005c3199: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c319eu); f_00830df8();
L_005c319e:; BB(0x005c319e);
    /* 005c319e: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31a4: jne 0x5c31ae */ if (!fZ) goto L_005c31ae;
L_005c31a6:; BB(0x005c31a6);
    /* 005c31a6: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 005c31a9: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c31aeu); f_00831290();
L_005c31ae:; BB(0x005c31ae);
    /* 005c31ae: mov edx, dword ptr [0xa8d824] */ r_edx = R32((u32)(0xa8d824u));
    /* 005c31b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31b6: je 0x5c31bc */ if (fZ) goto L_005c31bc;
L_005c31b8:; BB(0x005c31b8);
    /* 005c31b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c31b9: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c31bbu); call_ind(t); }
    /* 005c31bb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c31bc:; BB(0x005c31bc);
    /* 005c31bc: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c31c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31c4: je 0x5c31da */ if (fZ) goto L_005c31da;
L_005c31c6:; BB(0x005c31c6);
    /* 005c31c6: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c31cbu); f_00831650();
    /* 005c31cb: mov edx, dword ptr [0xa8d828] */ r_edx = R32((u32)(0xa8d828u));
    /* 005c31d1: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c31d4: mov dword ptr [0xa8d828], edx */ W32((u32)(0xa8d828u), r_edx);
L_005c31da:; BB(0x005c31da);
    /* 005c31da: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31e0: jne 0x5c31f2 */ if (!fZ) goto L_005c31f2;
L_005c31e2:; BB(0x005c31e2);
    /* 005c31e2: mov edx, dword ptr [0xa8d82c] */ r_edx = R32((u32)(0xa8d82cu));
    /* 005c31e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31ea: je 0x5c31f2 */ if (fZ) goto L_005c31f2;
L_005c31ec:; BB(0x005c31ec);
    /* 005c31ec: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c31ef: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x5c31f1u); call_ind(t); }
    /* 005c31f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c31f2:; BB(0x005c31f2);
    /* 005c31f2: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c31f8: jne 0x5c3202 */ if (!fZ) goto L_005c3202;
L_005c31fa:; BB(0x005c31fa);
    /* 005c31fa: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c31fd: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c3202u); f_005c30f0();
L_005c3202:; BB(0x005c3202);
    /* 005c3202: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3207u); f_0082da80();
L_005c3207:; BB(0x005c3207);
    /* 005c3207: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 005c320a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c320c: jne 0x5c3105 */ if (!fZ) goto L_005c3105;
L_005c3212:; BB(0x005c3212);
    /* 005c3212: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c3216: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_005c321a:; BB(0x005c321a);
    /* 005c321a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c321d: ret  */ FN_RET(0x005c30f0); r_esp += 4; return;
}

void f_005c3220(void) /* sub_5C3220 */
{
    FN_ENTER(0x005c3220);
    /* 005c3220: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3223: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 005c3229: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 005c322f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3231: je 0x5c3367 */ if (fZ) goto L_005c3367;
L_005c3237:; BB(0x005c3237);
    /* 005c3237: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005c323b: mov dword ptr [0xa8d82c], 0x8321d8 */ W32((u32)(0xa8d82cu), 0x8321d8u);
    /* 005c3245: mov dword ptr [0xa8d828], ecx */ W32((u32)(0xa8d828u), r_ecx);
    /* 005c324b: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c3250: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c3254: mov ebx, edx */ r_ebx = r_edx;
    /* 005c3256: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005c325a:; BB(0x005c325a);
    /* 005c325a: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005c325c: mov eax, esi */ r_eax = r_esi;
    /* 005c325e: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c3261: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3264: jne 0x5c32c5 */ if (!fZ) goto L_005c32c5;
L_005c3266:; BB(0x005c3266);
    /* 005c3266: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c326bu); f_0082d7b0();
    /* 005c326b: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c3271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3273: je 0x5c3287 */ if (fZ) goto L_005c3287;
L_005c3275:; BB(0x005c3275);
    /* 005c3275: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c327au); f_00831650();
    /* 005c327a: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c327f: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3282: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c3287:; BB(0x005c3287);
    /* 005c3287: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c328c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c328e: je 0x5c3294 */ if (fZ) goto L_005c3294;
L_005c3290:; BB(0x005c3290);
    /* 005c3290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3291: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3293u); call_ind(t); }
    /* 005c3293: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3294:; BB(0x005c3294);
    /* 005c3294: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c329a: jne 0x5c32ab */ if (!fZ) goto L_005c32ab;
L_005c329c:; BB(0x005c329c);
    /* 005c329c: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c32a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c32a3: je 0x5c32ab */ if (fZ) goto L_005c32ab;
L_005c32a5:; BB(0x005c32a5);
    /* 005c32a5: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c32a8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c32aau); call_ind(t); }
    /* 005c32aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c32ab:; BB(0x005c32ab);
    /* 005c32ab: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c32b1: jne 0x5c32bb */ if (!fZ) goto L_005c32bb;
L_005c32b3:; BB(0x005c32b3);
    /* 005c32b3: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c32b6: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c32bbu); f_005c30f0();
L_005c32bb:; BB(0x005c32bb);
    /* 005c32bb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c32c0u); f_0082da80();
    /* 005c32c0: jmp 0x5c3354 */ goto L_005c3354;
L_005c32c5:; BB(0x005c32c5);
    /* 005c32c5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c32cau); f_0082d7b0();
    /* 005c32ca: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c32d0: jne 0x5c32da */ if (!fZ) goto L_005c32da;
L_005c32d2:; BB(0x005c32d2);
    /* 005c32d2: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 005c32d5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c32dau); f_0082d838();
L_005c32da:; BB(0x005c32da);
    /* 005c32da: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c32e0: jne 0x5c32ef */ if (!fZ) goto L_005c32ef;
L_005c32e2:; BB(0x005c32e2);
    /* 005c32e2: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005c32e5: mov edx, esi */ r_edx = r_esi;
    /* 005c32e7: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c32ea: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c32efu); f_00830df8();
L_005c32ef:; BB(0x005c32ef);
    /* 005c32ef: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c32f5: jne 0x5c32ff */ if (!fZ) goto L_005c32ff;
L_005c32f7:; BB(0x005c32f7);
    /* 005c32f7: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 005c32fa: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c32ffu); f_00831290();
L_005c32ff:; BB(0x005c32ff);
    /* 005c32ff: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c3304: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3306: je 0x5c330c */ if (fZ) goto L_005c330c;
L_005c3308:; BB(0x005c3308);
    /* 005c3308: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3309: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c330bu); call_ind(t); }
    /* 005c330b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c330c:; BB(0x005c330c);
    /* 005c330c: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c3312: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3314: je 0x5c3328 */ if (fZ) goto L_005c3328;
L_005c3316:; BB(0x005c3316);
    /* 005c3316: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c331bu); f_00831650();
    /* 005c331b: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c3320: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3323: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c3328:; BB(0x005c3328);
    /* 005c3328: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c332e: jne 0x5c333f */ if (!fZ) goto L_005c333f;
L_005c3330:; BB(0x005c3330);
    /* 005c3330: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c3335: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3337: je 0x5c333f */ if (fZ) goto L_005c333f;
L_005c3339:; BB(0x005c3339);
    /* 005c3339: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c333c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c333eu); call_ind(t); }
    /* 005c333e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c333f:; BB(0x005c333f);
    /* 005c333f: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3345: jne 0x5c334f */ if (!fZ) goto L_005c334f;
L_005c3347:; BB(0x005c3347);
    /* 005c3347: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c334a: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c334fu); f_005c30f0();
L_005c334f:; BB(0x005c334f);
    /* 005c334f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3354u); f_0082da80();
L_005c3354:; BB(0x005c3354);
    /* 005c3354: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 005c3357: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3359: jne 0x5c325a */ if (!fZ) goto L_005c325a;
L_005c335f:; BB(0x005c335f);
    /* 005c335f: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c3363: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_005c3367:; BB(0x005c3367);
    /* 005c3367: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c3369: mov dword ptr [0xa8d82c], eax */ W32((u32)(0xa8d82cu), r_eax);
    /* 005c336e: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
    /* 005c3373: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c3378: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c337du); f_007a9044();
    /* 005c337d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c3380: ret 4 */ FN_RET(0x005c3220); r_esp += 8; return;
}

void f_005c3384(void) /* sub_5C3384 */
{
    FN_ENTER(0x005c3384);
    /* 005c3384: mov ecx, dword ptr [ecx + 0xfc] */ r_ecx = R32((u32)(r_ecx+0xfcu));
    /* 005c338a: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5c338fu); f_00831758();
    /* 005c338f: ret  */ FN_RET(0x005c3384); r_esp += 4; return;
}

void f_005c3390(void) /* sub_5C3390 */
{
    FN_ENTER(0x005c3390);
    /* 005c3390: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c3394: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3396: je 0x5c33c5 */ if (fZ) goto L_005c33c5;
L_005c3398:; BB(0x005c3398);
    /* 005c3398: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c339d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c339f: jne 0x5c33c5 */ if (!fZ) goto L_005c33c5;
L_005c33a1:; BB(0x005c33a1);
    /* 005c33a1: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005c33a6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c33a7: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c33aa: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c33ad: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005c33b2: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c33b7u); f_0082d710();
    /* 005c33b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c33b8: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c33bd: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c33c0: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c33c5:; BB(0x005c33c5);
    /* 005c33c5: ret  */ FN_RET(0x005c3390); r_esp += 4; return;
}

void f_005c33c8(void) /* sub_5C33C8 */
{
    FN_ENTER(0x005c33c8);
    /* 005c33c8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c33cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c33ce: je 0x5c33fd */ if (fZ) goto L_005c33fd;
L_005c33d0:; BB(0x005c33d0);
    /* 005c33d0: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c33d5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c33d7: jne 0x5c33fd */ if (!fZ) goto L_005c33fd;
L_005c33d9:; BB(0x005c33d9);
    /* 005c33d9: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005c33de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c33df: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c33e2: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c33e5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005c33ea: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c33efu); f_0082d710();
    /* 005c33ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c33f0: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c33f5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c33f8: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c33fd:; BB(0x005c33fd);
    /* 005c33fd: ret  */ FN_RET(0x005c33c8); r_esp += 4; return;
}

void f_005c3400(void) /* sub_5C3400 */
{
    FN_ENTER(0x005c3400);
    /* 005c3400: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c3405: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3407: je 0x5c344d */ if (fZ) goto L_005c344d;
L_005c3409:; BB(0x005c3409);
    /* 005c3409: mov edx, dword ptr [0xaab508] */ r_edx = R32((u32)(0xaab508u));
    /* 005c340f: mov ecx, dword ptr [0xaab50c] */ r_ecx = R32((u32)(0xaab50cu));
    /* 005c3415: mov dword ptr [0xaf0370], edx */ W32((u32)(0xaf0370u), r_edx);
    /* 005c341b: mov edx, dword ptr [0xaab510] */ r_edx = R32((u32)(0xaab510u));
    /* 005c3421: mov dword ptr [0xaf0374], ecx */ W32((u32)(0xaf0374u), r_ecx);
    /* 005c3427: mov dword ptr [0xaf0378], edx */ W32((u32)(0xaf0378u), r_edx);
    /* 005c342d: mov edx, dword ptr [0xaab514] */ r_edx = R32((u32)(0xaab514u));
    /* 005c3433: mov dword ptr [0xaf037c], edx */ W32((u32)(0xaf037cu), r_edx);
    /* 005c3439: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 005c343f: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005c3445: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3448: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c344d:; BB(0x005c344d);
    /* 005c344d: ret  */ FN_RET(0x005c3400); r_esp += 4; return;
}

void f_005c3450(void) /* sub_5C3450 */
{
    FN_ENTER(0x005c3450);
    /* 005c3450: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c3455: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3457: je 0x5c346b */ if (fZ) goto L_005c346b;
L_005c3459:; BB(0x005c3459);
    /* 005c3459: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5c345eu); f_0082dab0();
    /* 005c345e: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c3463: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3466: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c346b:; BB(0x005c346b);
    /* 005c346b: ret  */ FN_RET(0x005c3450); r_esp += 4; return;
}

void f_005c346c(void) /* sub_5C346C */
{
    FN_ENTER(0x005c346c);
    /* 005c346c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c346d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c346f: call 0x5c34a0 */ r_esp -= 4; W32(r_esp, 0x5c3474u); f_005c34a0();
    /* 005c3474: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c3479: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c347b: jne 0x5c349c */ if (!fZ) goto L_005c349c;
L_005c347d:; BB(0x005c347d);
    /* 005c347d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c347f: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x5c3484u); f_00501fb8();
    /* 005c3484: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3487: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c348cu); f_0081a9b8();
    /* 005c348c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c348f: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c3494: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3497: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c349c:; BB(0x005c349c);
    /* 005c349c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c349d: ret  */ FN_RET(0x005c346c); r_esp += 4; return;
}

void f_005c34a0(void) /* sub_5C34A0 */
{
    FN_ENTER(0x005c34a0);
    /* 005c34a0: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c34a5: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c34a7: jne 0x5c34bb */ if (!fZ) goto L_005c34bb;
L_005c34a9:; BB(0x005c34a9);
    /* 005c34a9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5c34aeu); f_0082dbac();
    /* 005c34ae: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c34b3: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c34b6: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c34bb:; BB(0x005c34bb);
    /* 005c34bb: ret  */ FN_RET(0x005c34a0); r_esp += 4; return;
}

void f_005c34bc(void) /* sub_5C34BC */
{
    FN_ENTER(0x005c34bc);
    /* 005c34bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c34bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c34bf: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c34c4: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c34c6: je 0x5c34e3 */ if (fZ) goto L_005c34e3;
L_005c34c8:; BB(0x005c34c8);
    /* 005c34c8: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x5c34cdu); f_005022a0();
    /* 005c34cd: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c34d0: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c34d5u); f_0081a9b8();
    /* 005c34d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c34d6: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c34db: and eax, 0xfffffff7 */ {  u32 a = r_eax; u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c34de: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c34e3:; BB(0x005c34e3);
    /* 005c34e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c34e4: ret  */ FN_RET(0x005c34bc); r_esp += 4; return;
}

void f_005c34f8(void) /* sub_5C34F8 */
{
    FN_ENTER(0x005c34f8);
    /* 005c34f8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 005c34fa: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x5c34ffu); f_00505918();
    /* 005c34ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3500: ret  */ FN_RET(0x005c34f8); r_esp += 4; return;
}

void f_005c3504(void) /* sub_5C3504 */
{
    FN_ENTER(0x005c3504);
    /* 005c3504: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3505: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c3507: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c350c: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c350e: je 0x5c3534 */ if (fZ) goto L_005c3534;
L_005c3510:; BB(0x005c3510);
    /* 005c3510: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x5c3515u); f_005022a0();
    /* 005c3515: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3517: call 0x505928 */ r_esp -= 4; W32(r_esp, 0x5c351cu); f_00505928();
    /* 005c351c: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c351f: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c3524u); f_0081a9b8();
    /* 005c3524: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3527: mov eax, dword ptr [0xa8d848] */ r_eax = R32((u32)(0xa8d848u));
    /* 005c352c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c352f: mov dword ptr [0xa8d848], eax */ W32((u32)(0xa8d848u), r_eax);
L_005c3534:; BB(0x005c3534);
    /* 005c3534: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3535: ret  */ FN_RET(0x005c3504); r_esp += 4; return;
}

void f_005c3538(void) /* sub_5C3538 */
{
    FN_ENTER(0x005c3538);
    /* 005c3538: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005c353e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3540: je 0x5c3549 */ if (fZ) goto L_005c3549;
L_005c3542:; BB(0x005c3542);
    /* 005c3542: fld dword ptr [eax + 0x6fc] */ FPUSH(R_F32((u32)(r_eax+0x6fcu)));
    /* 005c3548: ret  */ FN_RET(0x005c3538); r_esp += 4; return;
L_005c3549:; BB(0x005c3549);
    /* 005c3549: fld dword ptr [0x92bb90] */ FPUSH(R_F32((u32)(0x92bb90u)));
    /* 005c354f: ret  */ FN_RET(0x005c3538); r_esp += 4; return;
}

void f_005c3550(void) /* sub_5C3550 */
{
    FN_ENTER(0x005c3550);
    /* 005c3550: movzx eax, word ptr [ecx + 0xe4] */ r_eax = (u32)R16((u32)(r_ecx+0xe4u));
    /* 005c3557: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c355d: jne 0x5c3564 */ if (!fZ) goto L_005c3564;
L_005c355f:; BB(0x005c355f);
    /* 005c355f: call 0x5ca8f4 */ r_esp -= 4; W32(r_esp, 0x5c3564u); f_005ca8f4();
L_005c3564:; BB(0x005c3564);
    /* 005c3564: ret  */ FN_RET(0x005c3550); r_esp += 4; return;
}

void f_005c3568(void) /* sub_5C3568 */
{
    FN_ENTER(0x005c3568);
    /* 005c3568: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c356b: mov eax, dword ptr [ecx + 0xe0] */ r_eax = R32((u32)(r_ecx+0xe0u));
    /* 005c3571: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 005c3577: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3579: je 0x5c36af */ if (fZ) goto L_005c36af;
L_005c357f:; BB(0x005c357f);
    /* 005c357f: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005c3583: mov dword ptr [0xa8d82c], 0 */ W32((u32)(0xa8d82cu), 0x0u);
    /* 005c358d: mov dword ptr [0xa8d828], ecx */ W32((u32)(0xa8d828u), r_ecx);
    /* 005c3593: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c3598: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005c359c: mov ebx, edx */ r_ebx = r_edx;
    /* 005c359e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_005c35a2:; BB(0x005c35a2);
    /* 005c35a2: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005c35a4: mov eax, esi */ r_eax = r_esi;
    /* 005c35a6: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c35a9: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35ac: jne 0x5c360d */ if (!fZ) goto L_005c360d;
L_005c35ae:; BB(0x005c35ae);
    /* 005c35ae: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c35b3u); f_0082d7b0();
    /* 005c35b3: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c35b9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35bb: je 0x5c35cf */ if (fZ) goto L_005c35cf;
L_005c35bd:; BB(0x005c35bd);
    /* 005c35bd: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c35c2u); f_00831650();
    /* 005c35c2: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c35c7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c35ca: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c35cf:; BB(0x005c35cf);
    /* 005c35cf: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c35d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35d6: je 0x5c35dc */ if (fZ) goto L_005c35dc;
L_005c35d8:; BB(0x005c35d8);
    /* 005c35d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c35d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c35dbu); call_ind(t); }
    /* 005c35db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c35dc:; BB(0x005c35dc);
    /* 005c35dc: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35e2: jne 0x5c35f3 */ if (!fZ) goto L_005c35f3;
L_005c35e4:; BB(0x005c35e4);
    /* 005c35e4: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c35e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35eb: je 0x5c35f3 */ if (fZ) goto L_005c35f3;
L_005c35ed:; BB(0x005c35ed);
    /* 005c35ed: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c35f0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c35f2u); call_ind(t); }
    /* 005c35f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c35f3:; BB(0x005c35f3);
    /* 005c35f3: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c35f9: jne 0x5c3603 */ if (!fZ) goto L_005c3603;
L_005c35fb:; BB(0x005c35fb);
    /* 005c35fb: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c35fe: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c3603u); f_005c30f0();
L_005c3603:; BB(0x005c3603);
    /* 005c3603: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3608u); f_0082da80();
    /* 005c3608: jmp 0x5c369c */ goto L_005c369c;
L_005c360d:; BB(0x005c360d);
    /* 005c360d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c3612u); f_0082d7b0();
    /* 005c3612: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3618: jne 0x5c3622 */ if (!fZ) goto L_005c3622;
L_005c361a:; BB(0x005c361a);
    /* 005c361a: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 005c361d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c3622u); f_0082d838();
L_005c3622:; BB(0x005c3622);
    /* 005c3622: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3628: jne 0x5c3637 */ if (!fZ) goto L_005c3637;
L_005c362a:; BB(0x005c362a);
    /* 005c362a: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 005c362d: mov edx, esi */ r_edx = r_esi;
    /* 005c362f: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005c3632: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x5c3637u); f_00830df8();
L_005c3637:; BB(0x005c3637);
    /* 005c3637: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c363d: jne 0x5c3647 */ if (!fZ) goto L_005c3647;
L_005c363f:; BB(0x005c363f);
    /* 005c363f: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 005c3642: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x5c3647u); f_00831290();
L_005c3647:; BB(0x005c3647);
    /* 005c3647: mov eax, dword ptr [0xa8d824] */ r_eax = R32((u32)(0xa8d824u));
    /* 005c364c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c364e: je 0x5c3654 */ if (fZ) goto L_005c3654;
L_005c3650:; BB(0x005c3650);
    /* 005c3650: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3651: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3653u); call_ind(t); }
    /* 005c3653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3654:; BB(0x005c3654);
    /* 005c3654: mov ecx, dword ptr [0xa8d828] */ r_ecx = R32((u32)(0xa8d828u));
    /* 005c365a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c365c: je 0x5c3670 */ if (fZ) goto L_005c3670;
L_005c365e:; BB(0x005c365e);
    /* 005c365e: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5c3663u); f_00831650();
    /* 005c3663: mov eax, dword ptr [0xa8d828] */ r_eax = R32((u32)(0xa8d828u));
    /* 005c3668: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c366b: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
L_005c3670:; BB(0x005c3670);
    /* 005c3670: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3676: jne 0x5c3687 */ if (!fZ) goto L_005c3687;
L_005c3678:; BB(0x005c3678);
    /* 005c3678: mov eax, dword ptr [0xa8d82c] */ r_eax = R32((u32)(0xa8d82cu));
    /* 005c367d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c367f: je 0x5c3687 */ if (fZ) goto L_005c3687;
L_005c3681:; BB(0x005c3681);
    /* 005c3681: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3684: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c3686u); call_ind(t); }
    /* 005c3686: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005c3687:; BB(0x005c3687);
    /* 005c3687: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c368d: jne 0x5c3697 */ if (!fZ) goto L_005c3697;
L_005c368f:; BB(0x005c368f);
    /* 005c368f: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 005c3692: call 0x5c30f0 */ r_esp -= 4; W32(r_esp, 0x5c3697u); f_005c30f0();
L_005c3697:; BB(0x005c3697);
    /* 005c3697: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c369cu); f_0082da80();
L_005c369c:; BB(0x005c369c);
    /* 005c369c: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 005c369f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c36a1: jne 0x5c35a2 */ if (!fZ) goto L_005c35a2;
L_005c36a7:; BB(0x005c36a7);
    /* 005c36a7: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005c36ab: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_005c36af:; BB(0x005c36af);
    /* 005c36af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c36b1: mov dword ptr [0xa8d82c], eax */ W32((u32)(0xa8d82cu), r_eax);
    /* 005c36b6: mov dword ptr [0xa8d828], eax */ W32((u32)(0xa8d828u), r_eax);
    /* 005c36bb: mov dword ptr [0xa8d824], eax */ W32((u32)(0xa8d824u), r_eax);
    /* 005c36c0: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c36c5u); f_007a9044();
    /* 005c36c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c36c8: ret 4 */ FN_RET(0x005c3568); r_esp += 8; return;
}

void f_005c36cc(void) /* sub_5C36CC */
{
    FN_ENTER(0x005c36cc);
    /* 005c36cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c36cd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c36d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c36d2: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005c36d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c36da: je 0x5c371a */ if (fZ) goto L_005c371a;
L_005c36dc:; BB(0x005c36dc);
    /* 005c36dc: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5c36e1u); f_0080a640();
    /* 005c36e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c36e3: jne 0x5c371a */ if (!fZ) goto L_005c371a;
L_005c36e5:; BB(0x005c36e5);
    /* 005c36e5: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005c36eb: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 005c36f2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c36f5: je 0x5c371a */ if (fZ) goto L_005c371a;
L_005c36f7:; BB(0x005c36f7);
    /* 005c36f7: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c36fb: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 005c3701: mov byte ptr [esp], 0x61 */ W8((u32)(r_esp), 0x61u);
    /* 005c3705: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 005c370a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005c370e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005c3712: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c3715: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x5c371au); f_008003e0();
L_005c371a:; BB(0x005c371a);
    /* 005c371a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c371d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c371e: ret 4 */ FN_RET(0x005c36cc); r_esp += 8; return;
}

void f_005c3724(void) /* sub_5C3724 */
{
    FN_ENTER(0x005c3724);
    /* 005c3724: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3725: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c3727: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005c372d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c372f: je 0x5c3767 */ if (fZ) goto L_005c3767;
L_005c3731:; BB(0x005c3731);
    /* 005c3731: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5c3736u); f_00689b44();
    /* 005c3736: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3738: jne 0x5c3767 */ if (!fZ) goto L_005c3767;
L_005c373a:; BB(0x005c373a);
    /* 005c373a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005c373c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3740: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005c3746: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c374b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c374c: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5c3751u); f_0050b7a4();
    /* 005c3751: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3756: je 0x5c3767 */ if (fZ) goto L_005c3767;
L_005c3758:; BB(0x005c3758);
    /* 005c3758: movzx edx, word ptr [ebx + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c375f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3760: mov ecx, eax */ r_ecx = r_eax;
    /* 005c3762: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5c3767u); f_00508f14();
L_005c3767:; BB(0x005c3767);
    /* 005c3767: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3768: ret 4 */ FN_RET(0x005c3724); r_esp += 8; return;
}

void f_005c376c(void) /* sub_5C376C */
{
    FN_ENTER(0x005c376c);
    /* 005c376c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c376d: mov esi, ecx */ r_esi = r_ecx;
    /* 005c376f: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005c3775: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3777: je 0x5c379c */ if (fZ) goto L_005c379c;
L_005c3779:; BB(0x005c3779);
    /* 005c3779: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5c377eu); f_00689b44();
    /* 005c377e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3780: jne 0x5c379c */ if (!fZ) goto L_005c379c;
L_005c3782:; BB(0x005c3782);
    /* 005c3782: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005c3788: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c378b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c378d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c378e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c378f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3790: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3794: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5c3799u); f_00814298();
    /* 005c3799: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005c379c:; BB(0x005c379c);
    /* 005c379c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c379d: ret 4 */ FN_RET(0x005c376c); r_esp += 8; return;
}

void f_005c37a0(void) /* sub_5C37A0 */
{
    FN_ENTER(0x005c37a0);
    /* 005c37a0: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005c37a6: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c37ab: je 0x5c37b9 */ if (fZ) goto L_005c37b9;
L_005c37ad:; BB(0x005c37ad);
    /* 005c37ad: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005c37b2: mov word ptr [ecx + 0xe8], ax */ W16((u32)(r_ecx+0xe8u), (u16)r_eax);
L_005c37b9:; BB(0x005c37b9);
    /* 005c37b9: ret 4 */ FN_RET(0x005c37a0); r_esp += 8; return;
}

void f_005c37bc(void) /* sub_5C37BC */
{
    FN_ENTER(0x005c37bc);
    /* 005c37bc: movzx eax, word ptr [ecx + 0xe8] */ r_eax = (u32)R16((u32)(r_ecx+0xe8u));
    /* 005c37c3: ret  */ FN_RET(0x005c37bc); r_esp += 4; return;
}

void f_005c37c4(void) /* sub_5C37C4 */
{
    FN_ENTER(0x005c37c4);
    /* 005c37c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c37c5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c37c8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c37ca: movzx ecx, byte ptr [ebp + 0xf5] */ r_ecx = (u32)R8((u32)(r_ebp+0xf5u));
    /* 005c37d1: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c37d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c37d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c37d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c37db: call 0x5d7a2c */ r_esp -= 4; W32(r_esp, 0x5c37e0u); f_005d7a2c();
    /* 005c37e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c37e3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c37e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c37e9: je 0x5c3835 */ if (fZ) goto L_005c3835;
L_005c37eb:; BB(0x005c37eb);
    /* 005c37eb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c37ed: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5c37f2u); f_007a94a0();
    /* 005c37f2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c37f3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5c37f8u); f_0082dbac();
    /* 005c37f8: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 005c37fb: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c3800u); f_0081a9b8();
    /* 005c3800: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3801: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c3806u); f_0082d7b0();
    /* 005c3806: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005c3809: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c380eu); f_0082d838();
    /* 005c380e: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005c3811: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3813: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5c3818u); f_0082d8bc();
    /* 005c3818: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c381c: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5c3821u); f_00831758();
    /* 005c3821: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3826u); f_0082da80();
    /* 005c3826: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5c382bu); f_0082dab0();
    /* 005c382b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c3830u); f_007a9044();
    /* 005c3830: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x5c3835u); f_007a94b0();
L_005c3835:; BB(0x005c3835);
    /* 005c3835: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c3838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3839: ret  */ FN_RET(0x005c37c4); r_esp += 4; return;
}

void f_005c383c(void) /* sub_5C383C */
{
    FN_ENTER(0x005c383c);
    /* 005c383c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c383d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3840: mov edi, ecx */ r_edi = r_ecx;
    /* 005c3842: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c3846: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c3849: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c384a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c384b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005c384d: call 0x5d7a2c */ r_esp -= 4; W32(r_esp, 0x5c3852u); f_005d7a2c();
    /* 005c3852: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3855: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c3859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c385b: je 0x5c399a */ if (fZ) goto L_005c399a;
L_005c3861:; BB(0x005c3861);
    /* 005c3861: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005c3866: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 005c386c: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005c3871: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 005c3877: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 005c387d: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 005c3883: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 005c3889: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 005c388f: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 005c3895: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 005c389b: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c389e: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 005c38a4: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 005c38aa: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 005c38b0: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 005c38b6: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005c38bb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c38bd: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5c38c2u); f_007a94a0();
    /* 005c38c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c38c3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5c38c8u); f_0082dbac();
    /* 005c38c8: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 005c38cb: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c38d0u); f_0081a9b8();
    /* 005c38d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c38d1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c38d6u); f_0082d7b0();
    /* 005c38d6: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005c38d9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c38deu); f_0082d838();
    /* 005c38de: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005c38e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c38e3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5c38e8u); f_0082d8bc();
    /* 005c38e8: movsx eax, byte ptr [edi + 0xf0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xf0u));
    /* 005c38ef: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c38f1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c38f3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c38f5: lea edx, [eax + eax + 0x9c2000] */ r_edx = (u32)(r_eax+r_eax+0x9c2000u);
    /* 005c38fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c38fd: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c3902u); f_0082d710();
    /* 005c3902: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c3906: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3909: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x5c390eu); f_008321d8();
    /* 005c390e: movsx eax, byte ptr [edi + 0xf0] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xf0u));
    /* 005c3915: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3917: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3919: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c391b: lea edx, [eax + eax + 0x9c2060] */ r_edx = (u32)(r_eax+r_eax+0x9c2060u);
    /* 005c3922: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3923: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5c3928u); f_0082d710();
    /* 005c3928: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c392c: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005c392f: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3932: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x5c3937u); f_008321d8();
    /* 005c3937: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c393a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c393fu); f_0082da80();
    /* 005c393f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5c3944u); f_0082dab0();
    /* 005c3944: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c3949u); f_007a9044();
    /* 005c3949: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x5c394eu); f_007a94b0();
    /* 005c394e: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005c3953: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 005c3959: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005c395f: mov edi, dword ptr [0xaab514] */ r_edi = R32((u32)(0xaab514u));
    /* 005c3965: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005c396a: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005c396f: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 005c3975: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005c397b: mov dword ptr [0xaf037c], edi */ W32((u32)(0xaf037cu), r_edi);
    /* 005c3981: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005c3986: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 005c398b: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 005c3990: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005c3995: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_005c399a:; BB(0x005c399a);
    /* 005c399a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c399d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c399e: ret  */ FN_RET(0x005c383c); r_esp += 4; return;
}

void f_005c39a0(void) /* sub_5C39A0 */
{
    FN_ENTER(0x005c39a0);
    /* 005c39a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c39a1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c39a4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c39a6: movzx ecx, byte ptr [ebp + 0xf5] */ r_ecx = (u32)R8((u32)(r_ebp+0xf5u));
    /* 005c39ad: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005c39b1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c39b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c39b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c39b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c39b7: call 0x5d7a2c */ r_esp -= 4; W32(r_esp, 0x5c39bcu); f_005d7a2c();
    /* 005c39bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c39bf: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c39c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c39c5: je 0x5c3a26 */ if (fZ) goto L_005c3a26;
L_005c39c7:; BB(0x005c39c7);
    /* 005c39c7: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005c39c9: mov eax, 1 */ r_eax = 0x1u;
    /* 005c39ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c39cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c39d0: call 0x5cb350 */ r_esp -= 4; W32(r_esp, 0x5c39d5u); f_005cb350();
    /* 005c39d5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005c39d7: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5c39dcu); f_007a94a0();
    /* 005c39dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c39df: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5c39e4u); f_0082dbac();
    /* 005c39e4: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 005c39e7: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5c39ecu); f_0081a9b8();
    /* 005c39ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c39ed: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5c39f2u); f_0082d7b0();
    /* 005c39f2: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005c39f5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5c39fau); f_0082d838();
    /* 005c39fa: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005c39fd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c39ff: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5c3a04u); f_0082d8bc();
    /* 005c3a04: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c3a08: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5c3a0du); f_00831758();
    /* 005c3a0d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5c3a12u); f_0082da80();
    /* 005c3a12: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5c3a17u); f_0082dab0();
    /* 005c3a17: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5c3a1cu); f_007a9044();
    /* 005c3a1c: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x5c3a21u); f_007a94b0();
    /* 005c3a21: call 0x66fab8 */ r_esp -= 4; W32(r_esp, 0x5c3a26u); f_0066fab8();
L_005c3a26:; BB(0x005c3a26);
    /* 005c3a26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c3a29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3a2a: ret  */ FN_RET(0x005c39a0); r_esp += 4; return;
}

void f_005c3a2c(void) /* sub_5C3A2C */
{
    FN_ENTER(0x005c3a2c);
    /* 005c3a2c: call 0x5c9bbc */ r_esp -= 4; W32(r_esp, 0x5c3a31u); f_005c9bbc();
    /* 005c3a31: call 0x5cb494 */ r_esp -= 4; W32(r_esp, 0x5c3a36u); f_005cb494();
    /* 005c3a36: call 0x5caf28 */ r_esp -= 4; W32(r_esp, 0x5c3a3bu); f_005caf28();
    /* 005c3a3b: mov ecx, dword ptr [0xa8d830] */ r_ecx = R32((u32)(0xa8d830u));
    /* 005c3a41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3a43: je 0x5c3a58 */ if (fZ) goto L_005c3a58;
L_005c3a45:; BB(0x005c3a45);
    /* 005c3a45: je 0x5c3a4e */ if (fZ) goto L_005c3a4e;
L_005c3a47:; BB(0x005c3a47);
    /* 005c3a47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a49: call 0x5c2e08 */ r_esp -= 4; W32(r_esp, 0x5c3a4eu); f_005c2e08();
L_005c3a4e:; BB(0x005c3a4e);
    /* 005c3a4e: mov dword ptr [0xa8d830], 0 */ W32((u32)(0xa8d830u), 0x0u);
L_005c3a58:; BB(0x005c3a58);
    /* 005c3a58: mov eax, dword ptr [0xa8d81c] */ r_eax = R32((u32)(0xa8d81cu));
    /* 005c3a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3a5f: je 0x5c3a72 */ if (fZ) goto L_005c3a72;
L_005c3a61:; BB(0x005c3a61);
    /* 005c3a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a62: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5c3a67u); f_00857e98();
    /* 005c3a67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3a68: mov dword ptr [0xa8d81c], 0 */ W32((u32)(0xa8d81cu), 0x0u);
L_005c3a72:; BB(0x005c3a72);
    /* 005c3a72: mov dword ptr [0xa8d820], 0 */ W32((u32)(0xa8d820u), 0x0u);
    /* 005c3a7c: ret  */ FN_RET(0x005c3a2c); r_esp += 4; return;
}

void f_005c3a80(void) /* sub_5C3A80 */
{
    FN_ENTER(0x005c3a80);
    /* 005c3a80: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3a84: call 0x5c9a40 */ r_esp -= 4; W32(r_esp, 0x5c3a89u); f_005c9a40();
    /* 005c3a89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3a8a: ret  */ FN_RET(0x005c3a80); r_esp += 4; return;
}

void f_005c3a8c(void) /* sub_5C3A8C */
{
    FN_ENTER(0x005c3a8c);
    /* 005c3a8c: mov eax, dword ptr [0xa8d834] */ r_eax = R32((u32)(0xa8d834u));
    /* 005c3a91: ret  */ FN_RET(0x005c3a8c); r_esp += 4; return;
}

void f_005c3a94(void) /* sub_5C3A94 */
{
    FN_ENTER(0x005c3a94);
    /* 005c3a94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a95: mov ebp, esp */ r_ebp = r_esp;
    /* 005c3a97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a99: push 0x8d9874 */ { u32 v = 0x8d9874u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3a9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c3aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3aa5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c3aac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c3aaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c3ab2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005c3ab5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005c3ab8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005c3abb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005c3abe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3ac1: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005c3ac4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c3ac7: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x5c3accu); f_007b4b48();
    /* 005c3acc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c3ad3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3ad6: mov ebx, dword ptr [eax + 0x30] */ r_ebx = R32((u32)(r_eax+0x30u));
    /* 005c3ad9: mov dword ptr [eax], 0xb0c020 */ W32((u32)(r_eax), 0xb0c020u);
    /* 005c3adf: or ebx, 0x80000000 */ {  u32 a = r_ebx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005c3ae5: mov edx, dword ptr [0x9c20c0] */ r_edx = R32((u32)(0x9c20c0u));
    /* 005c3aeb: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005c3aee: mov esi, dword ptr [0x9c20c4] */ r_esi = R32((u32)(0x9c20c4u));
    /* 005c3af4: mov edi, dword ptr [0x9c20c8] */ r_edi = R32((u32)(0x9c20c8u));
    /* 005c3afa: mov ecx, dword ptr [0x9c20cc] */ r_ecx = R32((u32)(0x9c20ccu));
    /* 005c3b00: mov edx, dword ptr [0x9c20d0] */ r_edx = R32((u32)(0x9c20d0u));
    /* 005c3b06: mov dword ptr [eax + 0x30], ebx */ W32((u32)(r_eax+0x30u), r_ebx);
    /* 005c3b09: mov dword ptr [eax + 0xac], esi */ W32((u32)(r_eax+0xacu), r_esi);
    /* 005c3b0f: mov dword ptr [eax + 0xb0], edi */ W32((u32)(r_eax+0xb0u), r_edi);
    /* 005c3b15: mov dword ptr [eax + 0xb4], ecx */ W32((u32)(r_eax+0xb4u), r_ecx);
    /* 005c3b1b: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3b1e: mov dword ptr [eax + 0xb8], edx */ W32((u32)(r_eax+0xb8u), r_edx);
    /* 005c3b24: mov edx, dword ptr [0x9c20d4] */ r_edx = R32((u32)(0x9c20d4u));
    /* 005c3b2a: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 005c3b30: mov edx, dword ptr [0x9c20d8] */ r_edx = R32((u32)(0x9c20d8u));
    /* 005c3b36: mov dword ptr [eax + 0xc0], edx */ W32((u32)(r_eax+0xc0u), r_edx);
    /* 005c3b3c: mov edx, dword ptr [0x9c20dc] */ r_edx = R32((u32)(0x9c20dcu));
    /* 005c3b42: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 005c3b48: mov edx, dword ptr [0x9c20e0] */ r_edx = R32((u32)(0x9c20e0u));
    /* 005c3b4e: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 005c3b54: mov edx, dword ptr [0x9c20e4] */ r_edx = R32((u32)(0x9c20e4u));
    /* 005c3b5a: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 005c3b60: mov edx, dword ptr [0x9c20e8] */ r_edx = R32((u32)(0x9c20e8u));
    /* 005c3b66: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 005c3b6c: mov edx, dword ptr [0x9c20ec] */ r_edx = R32((u32)(0x9c20ecu));
    /* 005c3b72: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 005c3b78: mov dword ptr [ecx + 0x98], 4 */ W32((u32)(r_ecx+0x98u), 0x4u);
    /* 005c3b82: lea eax, [ecx + 0xac] */ r_eax = (u32)(r_ecx+0xacu);
    /* 005c3b88: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b89: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x5c3b8eu); f_007b9ccc();
    /* 005c3b8e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3b91: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3b94: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005c3b99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c3b9a: mov word ptr [ecx + 0xe4], di */ W16((u32)(r_ecx+0xe4u), (u16)r_edi);
    /* 005c3ba1: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 005c3ba4: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 005c3baa: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c3bac: mov dword ptr [ecx + 0xdc], edi */ W32((u32)(r_ecx+0xdcu), r_edi);
    /* 005c3bb2: mov word ptr [ecx + 0xe6], di */ W16((u32)(r_ecx+0xe6u), (u16)r_edi);
    /* 005c3bb9: mov dword ptr [ecx + 0xe0], edi */ W32((u32)(r_ecx+0xe0u), r_edi);
    /* 005c3bbf: movzx edx, byte ptr [esi] */ r_edx = (u32)R8((u32)(r_esi));
    /* 005c3bc2: mov byte ptr [ecx + 0xf2], dl */ W8((u32)(r_ecx+0xf2u), (u8)r_edx);
    /* 005c3bc8: movzx ebx, byte ptr [esi + 1] */ r_ebx = (u32)R8((u32)(r_esi+0x1u));
    /* 005c3bcc: mov byte ptr [ecx + 0xf3], bl */ W8((u32)(r_ecx+0xf3u), (u8)r_ebx);
    /* 005c3bd2: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005c3bd6: mov byte ptr [ecx + 0xf4], al */ W8((u32)(r_ecx+0xf4u), (u8)r_eax);
    /* 005c3bdc: mov dword ptr [ecx + 0xf8], edi */ W32((u32)(r_ecx+0xf8u), r_edi);
    /* 005c3be2: mov dword ptr [ecx + 0xfc], edi */ W32((u32)(r_ecx+0xfcu), r_edi);
    /* 005c3be8: mov word ptr [ecx + 0xe8], di */ W16((u32)(r_ecx+0xe8u), (u16)r_edi);
    /* 005c3bef: call 0x5c3de8 */ r_esp -= 4; W32(r_esp, 0x5c3bf4u); f_005c3de8();
    /* 005c3bf4: mov ecx, esi */ r_ecx = r_esi;
    /* 005c3bf6: call 0x5d68b4 */ r_esp -= 4; W32(r_esp, 0x5c3bfbu); f_005d68b4();
    /* 005c3bfb: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3bfe: mov ecx, esi */ r_ecx = r_esi;
    /* 005c3c00: mov byte ptr [edx + 0xf0], al */ W8((u32)(r_edx+0xf0u), (u8)r_eax);
    /* 005c3c06: call 0x5d6990 */ r_esp -= 4; W32(r_esp, 0x5c3c0bu); f_005d6990();
    /* 005c3c0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3c0d: je 0x5c3c1b */ if (fZ) goto L_005c3c1b;
L_005c3c0f:; BB(0x005c3c0f);
    /* 005c3c0f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c12: mov byte ptr [ecx + 0xf5], 4 */ W8((u32)(r_ecx+0xf5u), 0x4u);
    /* 005c3c19: jmp 0x5c3c45 */ goto L_005c3c45;
L_005c3c1b:; BB(0x005c3c1b);
    /* 005c3c1b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c1e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c22: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005c3c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c2a: call 0x7a8f0c */ r_esp -= 4; W32(r_esp, 0x5c3c2fu); f_007a8f0c();
    /* 005c3c2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3c32: movzx eax, byte ptr [eax + 0x92bb88] */ r_eax = (u32)R8((u32)(r_eax+0x92bb88u));
    /* 005c3c39: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c3d: call 0x5c3e3c */ r_esp -= 4; W32(r_esp, 0x5c3c42u); f_005c3e3c();
    /* 005c3c42: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_005c3c45:; BB(0x005c3c45);
    /* 005c3c45: mov eax, dword ptr [0xa8d8c0] */ r_eax = R32((u32)(0xa8d8c0u));
    /* 005c3c4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3c4c: je 0x5c3d92 */ if (fZ) goto L_005c3d92;
L_005c3c52:; BB(0x005c3c52);
    /* 005c3c52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3c53: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005c3c55: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5c3c58u); call_ind(t); }
    /* 005c3c58: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c5b: mov dword ptr [edx + 0xf8], 0 */ W32((u32)(r_edx+0xf8u), 0x0u);
    /* 005c3c65: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c3c6a: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 005c3c6e: call 0x5c8498 */ r_esp -= 4; W32(r_esp, 0x5c3c73u); f_005c8498();
    /* 005c3c73: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c76: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 005c3c7a: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5c3c7fu); f_007b4f54();
    /* 005c3c7f: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c82: mov byte ptr [ecx + 0xf1], 0 */ W8((u32)(r_ecx+0xf1u), 0x0u);
L_005c3c89:; BB(0x005c3c89);
    /* 005c3c89: call 0x5c3e6c */ r_esp -= 4; W32(r_esp, 0x5c3c8eu); f_005c3e6c();
    /* 005c3c8e: mov ebx, dword ptr [0xa8d820] */ r_ebx = R32((u32)(0xa8d820u));
    /* 005c3c94: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3c97: mov ecx, dword ptr [eax + 0xd8] */ r_ecx = R32((u32)(r_eax+0xd8u));
    /* 005c3c9d: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005c3ca0: lea ebx, [ebx - 1] */ r_ebx = (u32)(r_ebx+0xffffffffu);
    /* 005c3ca3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c3ca6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3ca9: je 0x5c3d86 */ if (fZ) goto L_005c3d86;
L_005c3caf:; BB(0x005c3caf);
    /* 005c3caf: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c3cb1: jl 0x5c3ce7 */ if ((fS!=fO)) goto L_005c3ce7;
L_005c3cb3:; BB(0x005c3cb3);
    /* 005c3cb3: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c3cb9: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 005c3cbc: cmp ecx, dword ptr [eax + 0xd8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3cc2: jge 0x5c3ced */ if ((fS==fO)) goto L_005c3ced;
L_005c3cc4:; BB(0x005c3cc4);
    /* 005c3cc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c3cc6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005c3cc8: jle 0x5c3d2f */ if ((fZ||fS!=fO)) goto L_005c3d2f;
L_005c3cca:; BB(0x005c3cca);
    /* 005c3cca: lea edi, [ebx + eax] */ r_edi = (u32)(r_ebx+r_eax);
    /* 005c3ccd: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 005c3ccf: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 005c3cd2: cmp ecx, dword ptr [esi + 0xd8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3cd8: jle 0x5c3cdf */ if ((fZ||fS!=fO)) goto L_005c3cdf;
L_005c3cda:; BB(0x005c3cda);
    /* 005c3cda: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 005c3cdd: jmp 0x5c3ce1 */ goto L_005c3ce1;
L_005c3cdf:; BB(0x005c3cdf);
    /* 005c3cdf: mov ebx, edi */ r_ebx = r_edi;
L_005c3ce1:; BB(0x005c3ce1);
    /* 005c3ce1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c3ce3: jl 0x5c3cca */ if ((fS!=fO)) goto L_005c3cca;
L_005c3ce5:; BB(0x005c3ce5);
    /* 005c3ce5: jmp 0x5c3d2f */ goto L_005c3d2f;
L_005c3ce7:; BB(0x005c3ce7);
    /* 005c3ce7: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
L_005c3ced:; BB(0x005c3ced);
    /* 005c3ced: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3cf0: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005c3cf3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3cf5: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_005c3cf8:; BB(0x005c3cf8);
    /* 005c3cf8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c3cfb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c3cfe: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
    /* 005c3d01: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3d04: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3d07: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c3d0a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c3d0d: mov dword ptr [0xa8d820], edx */ W32((u32)(0xa8d820u), r_edx);
L_005c3d13:; BB(0x005c3d13);
    /* 005c3d13: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c3d16: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005c3d19: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005c3d1c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c3d1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c3d22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c3d29: mov esp, ebp */ r_esp = r_ebp;
    /* 005c3d2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3d2c: ret 8 */ FN_RET(0x005c3a94); r_esp += 12; return;
L_005c3d2f:; BB(0x005c3d2f);
    /* 005c3d2f: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 005c3d32: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c3d34: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005c3d37: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c3d39: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 005c3d3b: cmp ecx, dword ptr [esi + 0xd8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xd8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3d41: jne 0x5c3d4f */ if (!fZ) goto L_005c3d4f;
L_005c3d43:; BB(0x005c3d43);
    /* 005c3d43: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c3d4d: jmp 0x5c3d13 */ goto L_005c3d13;
L_005c3d4f:; BB(0x005c3d4f);
    /* 005c3d4f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005c3d52: lea ebx, [edx + 4] */ r_ebx = (u32)(r_edx+0x4u);
    /* 005c3d55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3d57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3d59: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005c3d5b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3d5d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c3d5f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c3d61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3d64: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5c3d69u); f_00858c80();
    /* 005c3d69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3d6c: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3d6f: mov edx, dword ptr [0xa8d820] */ r_edx = R32((u32)(0xa8d820u));
    /* 005c3d75: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005c3d78: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005c3d7b: mov edx, dword ptr [0xa8d81c] */ r_edx = R32((u32)(0xa8d81cu));
    /* 005c3d81: jmp 0x5c3cf8 */ goto L_005c3cf8;
L_005c3d86:; BB(0x005c3d86);
    /* 005c3d86: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c3d90: jmp 0x5c3d13 */ goto L_005c3d13;
L_005c3d92:; BB(0x005c3d92);
    /* 005c3d92: mov dword ptr [ecx + 0xf8], 0 */ W32((u32)(r_ecx+0xf8u), 0x0u);
    /* 005c3d9c: call 0x5c3db0 */ r_esp -= 4; W32(r_esp, 0x5c3da1u); f_005c3db0();
    /* 005c3da1: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005c3da4: mov byte ptr [ecx + 0xf1], 3 */ W8((u32)(r_ecx+0xf1u), 0x3u);
    /* 005c3dab: jmp 0x5c3c89 */ goto L_005c3c89;
}

void f_005c3db0(void) /* sub_5C3DB0 */
{
    FN_ENTER(0x005c3db0);
    /* 005c3db0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c3db1: mov esi, ecx */ r_esi = r_ecx;
    /* 005c3db3: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 005c3db7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3dbc: je 0x5c3de5 */ if (fZ) goto L_005c3de5;
L_005c3dbe:; BB(0x005c3dbe);
    /* 005c3dbe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c3dbf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x5c3dc4u); f_007b4e84();
    /* 005c3dc4: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 005c3dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3dc9: call 0x5c8464 */ r_esp -= 4; W32(r_esp, 0x5c3dceu); f_005c8464();
    /* 005c3dce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c3dd1: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005c3dd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3dd8: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 005c3ddc: mov ecx, esi */ r_ecx = r_esi;
    /* 005c3dde: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005c3de0: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5c3de5u); f_007b52c4();
L_005c3de5:; BB(0x005c3de5);
    /* 005c3de5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c3de6: ret  */ FN_RET(0x005c3db0); r_esp += 4; return;
}

void f_005c3de8(void) /* sub_5C3DE8 */
{
    FN_ENTER(0x005c3de8);
    /* 005c3de8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c3de9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3dea: mov esi, ecx */ r_esi = r_ecx;
    /* 005c3dec: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005c3df0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c3df2: call 0x5d31d4 */ r_esp -= 4; W32(r_esp, 0x5c3df7u); f_005d31d4();
    /* 005c3df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3df9: je 0x5c3e1a */ if (fZ) goto L_005c3e1a;
L_005c3dfb:; BB(0x005c3dfb);
    /* 005c3dfb: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 005c3e01: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c3e06: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
    /* 005c3e0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c3e0e: call 0x5d31ac */ r_esp -= 4; W32(r_esp, 0x5c3e13u); f_005d31ac();
    /* 005c3e13: mov word ptr [esi + 0xe8], ax */ W16((u32)(r_esi+0xe8u), (u16)r_eax);
L_005c3e1a:; BB(0x005c3e1a);
    /* 005c3e1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c3e1c: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5c3e21u); f_005d281c();
    /* 005c3e21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3e23: je 0x5c3e36 */ if (fZ) goto L_005c3e36;
L_005c3e25:; BB(0x005c3e25);
    /* 005c3e25: mov eax, dword ptr [esi + 0xdc] */ r_eax = R32((u32)(r_esi+0xdcu));
    /* 005c3e2b: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3e30: mov dword ptr [esi + 0xdc], eax */ W32((u32)(r_esi+0xdcu), r_eax);
L_005c3e36:; BB(0x005c3e36);
    /* 005c3e36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3e37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c3e38: ret 4 */ FN_RET(0x005c3de8); r_esp += 8; return;
}

void f_005c3e3c(void) /* sub_5C3E3C */
{
    FN_ENTER(0x005c3e3c);
    /* 005c3e3c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005c3e41: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3e44: jge 0x5c3e5b */ if ((fS==fO)) goto L_005c3e5b;
L_005c3e46:; BB(0x005c3e46);
    /* 005c3e46: mov byte ptr [ecx + 0xf5], al */ W8((u32)(r_ecx+0xf5u), (u8)r_eax);
    /* 005c3e4c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3e4f: jne 0x5c3e69 */ if (!fZ) goto L_005c3e69;
L_005c3e51:; BB(0x005c3e51);
    /* 005c3e51: mov byte ptr [ecx + 0xf0], 5 */ W8((u32)(r_ecx+0xf0u), 0x5u);
    /* 005c3e58: ret 4 */ FN_RET(0x005c3e3c); r_esp += 8; return;
L_005c3e5b:; BB(0x005c3e5b);
    /* 005c3e5b: mov byte ptr [ecx + 0xf5], 2 */ W8((u32)(r_ecx+0xf5u), 0x2u);
    /* 005c3e62: mov byte ptr [ecx + 0xf0], 0 */ W8((u32)(r_ecx+0xf0u), 0x0u);
L_005c3e69:; BB(0x005c3e69);
    /* 005c3e69: ret 4 */ FN_RET(0x005c3e3c); r_esp += 8; return;
}

void f_005c3e6c(void) /* sub_5C3E6C */
{
    FN_ENTER(0x005c3e6c);
    /* 005c3e6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e6d: mov esi, ecx */ r_esi = r_ecx;
    /* 005c3e6f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5c3e74u); f_007a61a4();
    /* 005c3e74: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3e77: je 0x5c3ea6 */ if (fZ) goto L_005c3ea6;
L_005c3e79:; BB(0x005c3e79);
    /* 005c3e79: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005c3e7f: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3e82: je 0x5c3e86 */ if (fZ) goto L_005c3e86;
L_005c3e84:; BB(0x005c3e84);
    /* 005c3e84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c3e85: ret  */ FN_RET(0x005c3e6c); r_esp += 4; return;
L_005c3e86:; BB(0x005c3e86);
    /* 005c3e86: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 005c3e8d: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c3e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3e98: call 0x5e3aac */ r_esp -= 4; W32(r_esp, 0x5c3e9du); f_005e3aac();
    /* 005c3e9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3e9e: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 005c3ea4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c3ea5: ret  */ FN_RET(0x005c3e6c); r_esp += 4; return;
L_005c3ea6:; BB(0x005c3ea6);
    /* 005c3ea6: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005c3eac: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3eaf: jne 0x5c3e84 */ if (!fZ) goto L_005c3e84;
L_005c3eb1:; BB(0x005c3eb1);
    /* 005c3eb1: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 005c3eb6: movsx edx, word ptr [esi + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2cu));
    /* 005c3eba: mov dword ptr [0xa8d8d4], 1 */ W32((u32)(0xa8d8d4u), 0x1u);
    /* 005c3ec4: movzx eax, word ptr [eax + edx*4 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*4+0x2u));
    /* 005c3ec9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3eca: call 0x5e3dd0 */ r_esp -= 4; W32(r_esp, 0x5c3ecfu); f_005e3dd0();
    /* 005c3ecf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3ed0: mov dword ptr [esi + 0xd8], eax */ W32((u32)(r_esi+0xd8u), r_eax);
    /* 005c3ed6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c3ed7: ret  */ FN_RET(0x005c3e6c); r_esp += 4; return;
}

void f_005c3ed8(void) /* sub_5C3ED8 */
{
    FN_ENTER(0x005c3ed8);
    /* 005c3ed8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ed9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005c3edb: movsx eax, byte ptr [ebx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0xf1u));
    /* 005c3ee2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3ee4: je 0x5c3f70 */ if (fZ) goto L_005c3f70;
L_005c3eea:; BB(0x005c3eea);
    /* 005c3eea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3eed: jne 0x5c3f1e */ if (!fZ) goto L_005c3f1e;
L_005c3eef:; BB(0x005c3eef);
    /* 005c3eef: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c3ef6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3ef7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c3efcu); f_0068d5a8();
    /* 005c3efc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3efd: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 005c3f03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3f05: je 0x5c3f77 */ if (fZ) goto L_005c3f77;
L_005c3f07:; BB(0x005c3f07);
    /* 005c3f07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f09: call 0x5c3f7c */ r_esp -= 4; W32(r_esp, 0x5c3f0eu); f_005c3f7c();
    /* 005c3f0e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f10: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f12: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5c3f15u); call_ind(t); }
    /* 005c3f15: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f19: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x5c3f1cu); call_ind(t); }
    /* 005c3f1c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3f1d: ret  */ FN_RET(0x005c3ed8); r_esp += 4; return;
L_005c3f1e:; BB(0x005c3f1e);
    /* 005c3f1e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c3f21: jne 0x5c3f77 */ if (!fZ) goto L_005c3f77;
L_005c3f23:; BB(0x005c3f23);
    /* 005c3f23: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c3f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f2b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c3f30u); f_0068d5a8();
    /* 005c3f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3f31: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 005c3f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3f39: je 0x5c3f77 */ if (fZ) goto L_005c3f77;
L_005c3f3b:; BB(0x005c3f3b);
    /* 005c3f3b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005c3f3e: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005c3f41: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005c3f44: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 005c3f47: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005c3f4a: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005c3f4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f4f: call 0x5c3f7c */ r_esp -= 4; W32(r_esp, 0x5c3f54u); f_005c3f7c();
    /* 005c3f54: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f58: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5c3f5bu); call_ind(t); }
    /* 005c3f5b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f5f: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5c3f62u); call_ind(t); }
    /* 005c3f62: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3f68: call 0x5cb788 */ r_esp -= 4; W32(r_esp, 0x5c3f6du); f_005cb788();
    /* 005c3f6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3f6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3f6f: ret  */ FN_RET(0x005c3ed8); r_esp += 4; return;
L_005c3f70:; BB(0x005c3f70);
    /* 005c3f70: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f72: call 0x5c4010 */ r_esp -= 4; W32(r_esp, 0x5c3f77u); f_005c4010();
L_005c3f77:; BB(0x005c3f77);
    /* 005c3f77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3f78: ret  */ FN_RET(0x005c3ed8); r_esp += 4; return;
}

void f_005c3f20(void)
{
    FN_ENTER(0x005c3f20);
    /* 005c3f20: add dh, byte ptr [ebp + 0x54] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_ebp+0x54u)); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 005c3f23: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005c3f2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f2b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c3f30u); f_0068d5a8();
    /* 005c3f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3f31: mov dword ptr [ebx + 0xf8], eax */ W32((u32)(r_ebx+0xf8u), r_eax);
    /* 005c3f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3f39: je 0x5c3f77 */ if (fZ) goto L_005c3f77;
L_005c3f3b:; BB(0x005c3f3b);
    /* 005c3f3b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005c3f3e: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 005c3f41: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 005c3f44: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 005c3f47: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 005c3f4a: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005c3f4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f4f: call 0x5c3f7c */ r_esp -= 4; W32(r_esp, 0x5c3f54u); f_005c3f7c();
    /* 005c3f54: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f56: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f58: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x5c3f5bu); call_ind(t); }
    /* 005c3f5b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005c3f5d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005c3f5f: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x5c3f62u); call_ind(t); }
    /* 005c3f62: push dword ptr [ebx + 0xd8] */ { u32 v = R32((u32)(r_ebx+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c3f68: call 0x5cb788 */ r_esp -= 4; W32(r_esp, 0x5c3f6du); f_005cb788();
    /* 005c3f6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c3f6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3f6f: ret  */ FN_RET(0x005c3f20); r_esp += 4; return;
L_005c3f77:; BB(0x005c3f77);
    /* 005c3f77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c3f78: ret  */ FN_RET(0x005c3f20); r_esp += 4; return;
}

void f_005c3f7c(void) /* sub_5C3F7C */
{
    FN_ENTER(0x005c3f7c);
    /* 005c3f7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c3f7d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005c3f7f: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005c3f85: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3f87: je 0x5c3ffd */ if (fZ) goto L_005c3ffd;
L_005c3f89:; BB(0x005c3f89);
    /* 005c3f89: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5c3f8eu); f_00689b44();
    /* 005c3f8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3f90: jne 0x5c3fec */ if (!fZ) goto L_005c3fec;
L_005c3f92:; BB(0x005c3f92);
    /* 005c3f92: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5c3f97u); f_00807d60();
    /* 005c3f97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3f99: je 0x5c3fec */ if (fZ) goto L_005c3fec;
L_005c3f9b:; BB(0x005c3f9b);
    /* 005c3f9b: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005c3fa1: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 005c3fa7: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3fac: je 0x5c3fb5 */ if (fZ) goto L_005c3fb5;
L_005c3fae:; BB(0x005c3fae);
    /* 005c3fae: mov eax, 1 */ r_eax = 0x1u;
    /* 005c3fb3: jmp 0x5c3fb7 */ goto L_005c3fb7;
L_005c3fb5:; BB(0x005c3fb5);
    /* 005c3fb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005c3fb7:; BB(0x005c3fb7);
    /* 005c3fb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3fb9: jne 0x5c3fec */ if (!fZ) goto L_005c3fec;
L_005c3fbb:; BB(0x005c3fbb);
    /* 005c3fbb: call 0x688e9c */ r_esp -= 4; W32(r_esp, 0x5c3fc0u); f_00688e9c();
    /* 005c3fc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c3fc2: jne 0x5c3fd5 */ if (!fZ) goto L_005c3fd5;
L_005c3fc4:; BB(0x005c3fc4);
    /* 005c3fc4: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005c3fca: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3fcd: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 005c3fd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3fd4: ret  */ FN_RET(0x005c3f7c); r_esp += 4; return;
L_005c3fd5:; BB(0x005c3fd5);
    /* 005c3fd5: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005c3fdb: fld dword ptr [edx + 0x6fc] */ FPUSH(R_F32((u32)(r_edx+0x6fcu)));
    /* 005c3fe1: fcomp dword ptr [0x92bb84] */ fx_compare(ST(0), R_F32((u32)(0x92bb84u))); FPOP();
    /* 005c3fe7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005c3fe9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005c3fea: je 0x5c3fc4 */ if (fZ) goto L_005c3fc4;
L_005c3fec:; BB(0x005c3fec);
    /* 005c3fec: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005c3ff2: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c3ff5: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 005c3ffb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c3ffc: ret  */ FN_RET(0x005c3f7c); r_esp += 4; return;
L_005c3ffd:; BB(0x005c3ffd);
    /* 005c3ffd: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005c4003: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c4006: mov dword ptr [ebp + 0xdc], eax */ W32((u32)(r_ebp+0xdcu), r_eax);
    /* 005c400c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c400d: ret  */ FN_RET(0x005c3f7c); r_esp += 4; return;
}

