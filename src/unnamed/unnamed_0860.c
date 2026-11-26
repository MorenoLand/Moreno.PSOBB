#include "protos.h"

void f_00860103(void) /* ___crtLCMapStringA */
{
    FN_ENTER(0x00860103);
    /* 00860103: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00860105: push 0x9983e0 */ { u32 v = 0x9983e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086010a: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86010fu); f_0085e5ac();
    /* 0086010f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00860111: cmp dword ptr [0xae7c00], ebx */ {  u32 a = R32((u32)(0xae7c00u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860117: jne 0x860151 */ if (!fZ) goto L_00860151;
L_00860119:; BB(0x00860119);
    /* 00860119: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086011a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086011b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086011d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086011e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086011f: push 0x9983dc */ { u32 v = 0x9983dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00860124: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00860129: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086012a: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860130u); call_ind(t); }
    /* 00860130: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860132: je 0x86013c */ if (fZ) goto L_0086013c;
L_00860134:; BB(0x00860134);
    /* 00860134: mov dword ptr [0xae7c00], esi */ W32((u32)(0xae7c00u), r_esi);
    /* 0086013a: jmp 0x860151 */ goto L_00860151;
L_0086013c:; BB(0x0086013c);
    /* 0086013c: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x860142u); call_ind(t); }
    /* 00860142: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860145: jne 0x860151 */ if (!fZ) goto L_00860151;
L_00860147:; BB(0x00860147);
    /* 00860147: mov dword ptr [0xae7c00], 2 */ W32((u32)(0xae7c00u), 0x2u);
L_00860151:; BB(0x00860151);
    /* 00860151: cmp dword ptr [ebp + 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860154: jle 0x860171 */ if ((fZ||fS!=fO)) goto L_00860171;
L_00860156:; BB(0x00860156);
    /* 00860156: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00860159: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
L_0086015c:; BB(0x0086015c);
    /* 0086015c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086015d: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086015f: je 0x860169 */ if (fZ) goto L_00860169;
L_00860161:; BB(0x00860161);
    /* 00860161: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860162: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860164: jne 0x86015c */ if (!fZ) goto L_0086015c;
L_00860166:; BB(0x00860166);
    /* 00860166: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_00860169:; BB(0x00860169);
    /* 00860169: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086016c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086016e: add dword ptr [ebp + 0x14], eax */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00860171:; BB(0x00860171);
    /* 00860171: mov eax, dword ptr [0xae7c00] */ r_eax = R32((u32)(0xae7c00u));
    /* 00860176: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860179: je 0x86035b */ if (fZ) goto L_0086035b;
L_0086017f:; BB(0x0086017f);
    /* 0086017f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860181: je 0x86035b */ if (fZ) goto L_0086035b;
L_00860187:; BB(0x00860187);
    /* 00860187: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086018a: jne 0x86038e */ if (!fZ) goto L_0086038e;
L_00860190:; BB(0x00860190);
    /* 00860190: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00860192: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00860195: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 00860198: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0086019b: cmp dword ptr [ebp + 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086019e: jne 0x8601a8 */ if (!fZ) goto L_008601a8;
L_008601a0:; BB(0x008601a0);
    /* 008601a0: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 008601a5: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_008601a8:; BB(0x008601a8);
    /* 008601a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008601a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008601aa: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008601ad: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008601b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008601b2: cmp dword ptr [ebp + 0x24], ebx */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008601b5: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008601b8: lea eax, [eax*8 + 1] */ r_eax = (u32)(r_eax*8+0x1u);
    /* 008601bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008601c0: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008601c3: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x8601c9u); call_ind(t); }
    /* 008601c9: mov esi, eax */ r_esi = r_eax;
    /* 008601cb: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 008601ce: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008601d0: je 0x86038e */ if (fZ) goto L_0086038e;
L_008601d6:; BB(0x008601d6);
    /* 008601d6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008601dd: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 008601e0: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008601e3: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008601e6: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8601ebu); f_00858020();
    /* 008601eb: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008601ee: mov eax, esp */ r_eax = r_esp;
    /* 008601f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008601f3: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008601f7: jmp 0x860214 */ goto L_00860214;
L_00860214:; BB(0x00860214);
    /* 00860214: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860217: jne 0x860235 */ if (!fZ) goto L_00860235;
L_00860219:; BB(0x00860219);
    /* 00860219: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086021c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086021d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860222u); f_00859c55();
    /* 00860222: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860223: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00860226: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860228: je 0x86038e */ if (fZ) goto L_0086038e;
L_0086022e:; BB(0x0086022e);
    /* 0086022e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00860235:; BB(0x00860235);
    /* 00860235: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860236: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860239: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086023c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086023f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00860241: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860244: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86024au); call_ind(t); }
    /* 0086024a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086024c: je 0x860338 */ if (fZ) goto L_00860338;
L_00860252:; BB(0x00860252);
    /* 00860252: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860253: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860255: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860258: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086025b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086025e: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860264u); call_ind(t); }
    /* 00860264: mov edi, eax */ r_edi = r_eax;
    /* 00860266: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00860269: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086026b: je 0x860338 */ if (fZ) goto L_00860338;
L_00860271:; BB(0x00860271);
    /* 00860271: test byte ptr [ebp + 0xd], 4 */ {  u32 a = R8((u32)(r_ebp+0xdu)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860275: je 0x8602a4 */ if (fZ) goto L_008602a4;
L_00860277:; BB(0x00860277);
    /* 00860277: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086027a: je 0x860338 */ if (fZ) goto L_00860338;
L_00860280:; BB(0x00860280);
    /* 00860280: cmp edi, dword ptr [ebp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860283: jg 0x860338 */ if ((!fZ&&fS==fO)) goto L_00860338;
L_00860289:; BB(0x00860289);
    /* 00860289: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086028c: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086028f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860290: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860293: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860296: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860299: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x86029fu); call_ind(t); }
    /* 0086029f: jmp 0x860338 */ goto L_00860338;
L_008602a4:; BB(0x008602a4);
    /* 008602a4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 008602ab: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008602ae: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008602b1: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008602b4: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8602b9u); f_00858020();
    /* 008602b9: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008602bc: mov eax, esp */ r_eax = r_esp;
    /* 008602be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008602c1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008602c5: jmp 0x8602e2 */ goto L_008602e2;
L_008602e2:; BB(0x008602e2);
    /* 008602e2: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602e5: jne 0x8602ff */ if (!fZ) goto L_008602ff;
L_008602e7:; BB(0x008602e7);
    /* 008602e7: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008602ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008602eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8602f0u); f_00859c55();
    /* 008602f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008602f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008602f4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602f6: je 0x860338 */ if (fZ) goto L_00860338;
L_008602f8:; BB(0x008602f8);
    /* 008602f8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_008602ff:; BB(0x008602ff);
    /* 008602ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860300: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860303: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860304: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860307: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030d: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860313u); call_ind(t); }
    /* 00860313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860315: je 0x860338 */ if (fZ) goto L_00860338;
L_00860317:; BB(0x00860317);
    /* 00860317: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860319: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086031c: jne 0x860322 */ if (!fZ) goto L_00860322;
L_0086031e:; BB(0x0086031e);
    /* 0086031e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086031f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860320: jmp 0x860328 */ goto L_00860328;
L_00860322:; BB(0x00860322);
    /* 00860322: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860325: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_00860328:; BB(0x00860328);
    /* 00860328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860329: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086032c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086032d: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860330: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x860336u); call_ind(t); }
    /* 00860336: mov edi, eax */ r_edi = r_eax;
L_00860338:; BB(0x00860338);
    /* 00860338: cmp dword ptr [ebp - 0x34], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086033b: je 0x860346 */ if (fZ) goto L_00860346;
L_0086033d:; BB(0x0086033d);
    /* 0086033d: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860340: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860345u); f_00858882();
    /* 00860345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860346:; BB(0x00860346);
    /* 00860346: cmp dword ptr [ebp - 0x38], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860349: je 0x860354 */ if (fZ) goto L_00860354;
L_0086034b:; BB(0x0086034b);
    /* 0086034b: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086034e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860353u); f_00858882();
    /* 00860353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860354:; BB(0x00860354);
    /* 00860354: mov eax, edi */ r_eax = r_edi;
    /* 00860356: jmp 0x8604b6 */ goto L_008604b6;
L_0086035b:; BB(0x0086035b);
    /* 0086035b: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 0086035e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00860360: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00860363: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860366: jne 0x860370 */ if (!fZ) goto L_00860370;
L_00860368:; BB(0x00860368);
    /* 00860368: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 0086036d: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_00860370:; BB(0x00860370);
    /* 00860370: cmp dword ptr [ebp + 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860373: jne 0x86037d */ if (!fZ) goto L_0086037d;
L_00860375:; BB(0x00860375);
    /* 00860375: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 0086037a: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
L_0086037d:; BB(0x0086037d);
    /* 0086037d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860380: call 0x868c37 */ r_esp -= 4; W32(r_esp, 0x860385u); f_00868c37();
    /* 00860385: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860386: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00860389: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086038c: jne 0x860395 */ if (!fZ) goto L_00860395;
L_0086038e:; BB(0x0086038e);
    /* 0086038e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860390: jmp 0x8604b6 */ goto L_008604b6;
L_00860395:; BB(0x00860395);
    /* 00860395: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860398: je 0x86048c */ if (fZ) goto L_0086048c;
L_0086039e:; BB(0x0086039e);
    /* 0086039e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086039f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008603a0: lea ecx, [ebp + 0x14] */ r_ecx = (u32)(r_ebp+0x14u);
    /* 008603a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008603a4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008603a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008603a8: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008603ab: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x8603b0u); f_00868c7a();
    /* 008603b0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008603b3: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008603b6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008603b8: je 0x86038e */ if (fZ) goto L_0086038e;
L_008603ba:; BB(0x008603ba);
    /* 008603ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008603bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008603bc: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008603bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008603c0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008603c3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008603c6: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x8603ccu); call_ind(t); }
    /* 008603cc: mov esi, eax */ r_esi = r_eax;
    /* 008603ce: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 008603d1: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008603d3: je 0x86047b */ if (fZ) goto L_0086047b;
L_008603d9:; BB(0x008603d9);
    /* 008603d9: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008603dc: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008603df: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008603e2: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8603e7u); f_00858020();
    /* 008603e7: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008603ea: mov edi, esp */ r_edi = r_esp;
    /* 008603ec: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 008603ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008603f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008603f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008603f2: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x8603f7u); f_0085f580();
    /* 008603f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008603fa: jmp 0x86040c */ goto L_0086040c;
L_0086040c:; BB(0x0086040c);
    /* 0086040c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860410: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860412: jne 0x860437 */ if (!fZ) goto L_00860437;
L_00860414:; BB(0x00860414);
    /* 00860414: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860417: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86041cu); f_00859c55();
    /* 0086041c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086041d: mov edi, eax */ r_edi = r_eax;
    /* 0086041f: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860421: je 0x860454 */ if (fZ) goto L_00860454;
L_00860423:; BB(0x00860423);
    /* 00860423: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860427: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860428: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x86042du); f_0085f580();
    /* 0086042d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860430: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_00860437:; BB(0x00860437);
    /* 00860437: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086043a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086043b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086043e: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860441: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860444: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860447: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x86044du); call_ind(t); }
    /* 0086044d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00860450: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860452: jne 0x860458 */ if (!fZ) goto L_00860458;
L_00860454:; BB(0x00860454);
    /* 00860454: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00860456: jmp 0x86047e */ goto L_0086047e;
L_00860458:; BB(0x00860458);
    /* 00860458: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086045b: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086045e: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00860461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860462: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860463: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860466: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860469: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x86046eu); f_00868c7a();
    /* 0086046e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860471: mov esi, eax */ r_esi = r_eax;
    /* 00860473: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); fC = (b != 0); }
    /* 00860475: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00860477: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00860479: jmp 0x86047e */ goto L_0086047e;
L_0086047b:; BB(0x0086047b);
    /* 0086047b: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
L_0086047e:; BB(0x0086047e);
    /* 0086047e: cmp dword ptr [ebp - 0x3c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860481: je 0x8604a6 */ if (fZ) goto L_008604a6;
L_00860483:; BB(0x00860483);
    /* 00860483: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860484: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860489u); f_00858882();
    /* 00860489: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086048a: jmp 0x8604a6 */ goto L_008604a6;
L_0086048c:; BB(0x0086048c);
    /* 0086048c: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086048f: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860492: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860495: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860498: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086049b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086049e: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x8604a4u); call_ind(t); }
    /* 008604a4: mov esi, eax */ r_esi = r_eax;
L_008604a6:; BB(0x008604a6);
    /* 008604a6: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008604a9: je 0x8604b4 */ if (fZ) goto L_008604b4;
L_008604ab:; BB(0x008604ab);
    /* 008604ab: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008604ae: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8604b3u); f_00858882();
    /* 008604b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008604b4:; BB(0x008604b4);
    /* 008604b4: mov eax, esi */ r_eax = r_esi;
L_008604b6:; BB(0x008604b6);
    /* 008604b6: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 008604b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8604beu); f_0085e5e7();
    /* 008604be: ret  */ FN_RET(0x00860103); r_esp += 4; return;
}

void f_008601f9(void)
{
    FN_ENTER(0x008601f9);
    /* 008601f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008601fb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008601fc: ret  */ FN_RET(0x008601f9); r_esp += 4; return;
}

void f_008601fd(void)
{
    FN_ENTER(0x008601fd);
    /* 008601fd: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00860200: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x860205u); f_00865365();
    /* 00860205: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00860207: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0086020a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086020e: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00860211: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00860214: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860217: jne 0x860235 */ if (!fZ) goto L_00860235;
L_00860219:; BB(0x00860219);
    /* 00860219: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086021c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086021d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860222u); f_00859c55();
    /* 00860222: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860223: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00860226: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860228: je 0x86038e */ if (fZ) goto L_0086038e;
L_0086022e:; BB(0x0086022e);
    /* 0086022e: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
L_00860235:; BB(0x00860235);
    /* 00860235: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860236: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860239: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086023c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086023f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00860241: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860244: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86024au); call_ind(t); }
    /* 0086024a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086024c: je 0x860338 */ if (fZ) goto L_00860338;
L_00860252:; BB(0x00860252);
    /* 00860252: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860253: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860254: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860255: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860258: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086025b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086025e: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860264u); call_ind(t); }
    /* 00860264: mov edi, eax */ r_edi = r_eax;
    /* 00860266: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00860269: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086026b: je 0x860338 */ if (fZ) goto L_00860338;
L_00860271:; BB(0x00860271);
    /* 00860271: test byte ptr [ebp + 0xd], 4 */ {  u32 a = R8((u32)(r_ebp+0xdu)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860275: je 0x8602a4 */ if (fZ) goto L_008602a4;
L_00860277:; BB(0x00860277);
    /* 00860277: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086027a: je 0x860338 */ if (fZ) goto L_00860338;
L_00860280:; BB(0x00860280);
    /* 00860280: cmp edi, dword ptr [ebp + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860283: jg 0x860338 */ if ((!fZ&&fS==fO)) goto L_00860338;
L_00860289:; BB(0x00860289);
    /* 00860289: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086028c: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086028f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860290: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860293: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860296: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860299: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x86029fu); call_ind(t); }
    /* 0086029f: jmp 0x860338 */ goto L_00860338;
L_008602a4:; BB(0x008602a4);
    /* 008602a4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 008602ab: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008602ae: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008602b1: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008602b4: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8602b9u); f_00858020();
    /* 008602b9: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008602bc: mov eax, esp */ r_eax = r_esp;
    /* 008602be: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008602c1: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008602c5: jmp 0x8602e2 */ goto L_008602e2;
L_008602e2:; BB(0x008602e2);
    /* 008602e2: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602e5: jne 0x8602ff */ if (!fZ) goto L_008602ff;
L_008602e7:; BB(0x008602e7);
    /* 008602e7: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008602ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008602eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8602f0u); f_00859c55();
    /* 008602f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008602f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008602f4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602f6: je 0x860338 */ if (fZ) goto L_00860338;
L_008602f8:; BB(0x008602f8);
    /* 008602f8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_008602ff:; BB(0x008602ff);
    /* 008602ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860300: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860303: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860304: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860307: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030d: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860313u); call_ind(t); }
    /* 00860313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860315: je 0x860338 */ if (fZ) goto L_00860338;
L_00860317:; BB(0x00860317);
    /* 00860317: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860319: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086031c: jne 0x860322 */ if (!fZ) goto L_00860322;
L_0086031e:; BB(0x0086031e);
    /* 0086031e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086031f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860320: jmp 0x860328 */ goto L_00860328;
L_00860322:; BB(0x00860322);
    /* 00860322: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860325: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_00860328:; BB(0x00860328);
    /* 00860328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860329: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086032c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086032d: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860330: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x860336u); call_ind(t); }
    /* 00860336: mov edi, eax */ r_edi = r_eax;
L_00860338:; BB(0x00860338);
    /* 00860338: cmp dword ptr [ebp - 0x34], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086033b: je 0x860346 */ if (fZ) goto L_00860346;
L_0086033d:; BB(0x0086033d);
    /* 0086033d: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860340: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860345u); f_00858882();
    /* 00860345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860346:; BB(0x00860346);
    /* 00860346: cmp dword ptr [ebp - 0x38], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860349: je 0x860354 */ if (fZ) goto L_00860354;
L_0086034b:; BB(0x0086034b);
    /* 0086034b: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086034e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860353u); f_00858882();
    /* 00860353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860354:; BB(0x00860354);
    /* 00860354: mov eax, edi */ r_eax = r_edi;
    /* 00860356: jmp 0x8604b6 */ goto L_008604b6;
L_0086038e:; BB(0x0086038e);
    /* 0086038e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860390: jmp 0x8604b6 */ goto L_008604b6;
L_008604b6:; BB(0x008604b6);
    /* 008604b6: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 008604b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8604beu); f_0085e5e7();
    /* 008604be: ret  */ FN_RET(0x008601fd); r_esp += 4; return;
}

void f_008602c7(void)
{
    FN_ENTER(0x008602c7);
    /* 008602c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008602c9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008602ca: ret  */ FN_RET(0x008602c7); r_esp += 4; return;
}

void f_008602cb(void)
{
    FN_ENTER(0x008602cb);
    /* 008602cb: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008602ce: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x8602d3u); f_00865365();
    /* 008602d3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008602d5: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 008602d8: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008602dc: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 008602df: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008602e2: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602e5: jne 0x8602ff */ if (!fZ) goto L_008602ff;
L_008602e7:; BB(0x008602e7);
    /* 008602e7: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008602ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008602eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8602f0u); f_00859c55();
    /* 008602f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008602f1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008602f4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008602f6: je 0x860338 */ if (fZ) goto L_00860338;
L_008602f8:; BB(0x008602f8);
    /* 008602f8: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_008602ff:; BB(0x008602ff);
    /* 008602ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860300: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860303: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860304: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860307: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086030d: call dword ptr [0x8f824c] */ { u32 t = R32((u32)(0x8f824cu)); r_esp -= 4; W32(r_esp, 0x860313u); call_ind(t); }
    /* 00860313: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860315: je 0x860338 */ if (fZ) goto L_00860338;
L_00860317:; BB(0x00860317);
    /* 00860317: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860318: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860319: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086031c: jne 0x860322 */ if (!fZ) goto L_00860322;
L_0086031e:; BB(0x0086031e);
    /* 0086031e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086031f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860320: jmp 0x860328 */ goto L_00860328;
L_00860322:; BB(0x00860322);
    /* 00860322: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860325: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
L_00860328:; BB(0x00860328);
    /* 00860328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860329: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086032c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086032d: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860330: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x860336u); call_ind(t); }
    /* 00860336: mov edi, eax */ r_edi = r_eax;
L_00860338:; BB(0x00860338);
    /* 00860338: cmp dword ptr [ebp - 0x34], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086033b: je 0x860346 */ if (fZ) goto L_00860346;
L_0086033d:; BB(0x0086033d);
    /* 0086033d: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860340: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860345u); f_00858882();
    /* 00860345: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860346:; BB(0x00860346);
    /* 00860346: cmp dword ptr [ebp - 0x38], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860349: je 0x860354 */ if (fZ) goto L_00860354;
L_0086034b:; BB(0x0086034b);
    /* 0086034b: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086034e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860353u); f_00858882();
    /* 00860353: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860354:; BB(0x00860354);
    /* 00860354: mov eax, edi */ r_eax = r_edi;
    /* 00860356: jmp 0x8604b6 */ goto L_008604b6;
L_008604b6:; BB(0x008604b6);
    /* 008604b6: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 008604b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8604beu); f_0085e5e7();
    /* 008604be: ret  */ FN_RET(0x008602cb); r_esp += 4; return;
}

void f_008603fc(void)
{
    FN_ENTER(0x008603fc);
    /* 008603fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008603fe: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008603ff: ret  */ FN_RET(0x008603fc); r_esp += 4; return;
}

void f_00860400(void)
{
    FN_ENTER(0x00860400);
    /* 00860400: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00860403: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x860408u); f_00865365();
    /* 00860408: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086040a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086040c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860410: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860412: jne 0x860437 */ if (!fZ) goto L_00860437;
L_00860414:; BB(0x00860414);
    /* 00860414: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860417: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86041cu); f_00859c55();
    /* 0086041c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086041d: mov edi, eax */ r_edi = r_eax;
    /* 0086041f: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860421: je 0x860454 */ if (fZ) goto L_00860454;
L_00860423:; BB(0x00860423);
    /* 00860423: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860426: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860427: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860428: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x86042du); f_0085f580();
    /* 0086042d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860430: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
L_00860437:; BB(0x00860437);
    /* 00860437: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086043a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086043b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086043e: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860441: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860444: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860447: call dword ptr [0x8f8248] */ { u32 t = R32((u32)(0x8f8248u)); r_esp -= 4; W32(r_esp, 0x86044du); call_ind(t); }
    /* 0086044d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00860450: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860452: jne 0x860458 */ if (!fZ) goto L_00860458;
L_00860454:; BB(0x00860454);
    /* 00860454: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00860456: jmp 0x86047e */ goto L_0086047e;
L_00860458:; BB(0x00860458);
    /* 00860458: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086045b: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086045e: lea eax, [ebp - 0x24] */ r_eax = (u32)(r_ebp+0xffffffdcu);
    /* 00860461: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860462: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860463: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860466: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860469: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x86046eu); f_00868c7a();
    /* 0086046e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860471: mov esi, eax */ r_esi = r_eax;
    /* 00860473: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r; fC = (a < b); fC = (b != 0); }
    /* 00860475: sbb esi, esi */ { u32 c = fC; u32 a = r_esi; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 00860477: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00860479: jmp 0x86047e */ goto L_0086047e;
L_0086047e:; BB(0x0086047e);
    /* 0086047e: cmp dword ptr [ebp - 0x3c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860481: je 0x8604a6 */ if (fZ) goto L_008604a6;
L_00860483:; BB(0x00860483);
    /* 00860483: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860484: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860489u); f_00858882();
    /* 00860489: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086048a: jmp 0x8604a6 */ goto L_008604a6;
L_008604a6:; BB(0x008604a6);
    /* 008604a6: cmp dword ptr [ebp - 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008604a9: je 0x8604b4 */ if (fZ) goto L_008604b4;
L_008604ab:; BB(0x008604ab);
    /* 008604ab: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008604ae: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8604b3u); f_00858882();
    /* 008604b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008604b4:; BB(0x008604b4);
    /* 008604b4: mov eax, esi */ r_eax = r_esi;
    /* 008604b6: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 008604b9: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8604beu); f_0085e5e7();
    /* 008604be: ret  */ FN_RET(0x00860400); r_esp += 4; return;
}

void f_008604bf(void) /* ___crtGetStringTypeW */
{
    FN_ENTER(0x008604bf);
    /* 008604bf: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008604c1: push 0x998408 */ { u32 v = 0x998408u; r_esp -= 4; W32(r_esp, v); }
    /* 008604c6: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8604cbu); f_0085e5ac();
    /* 008604cb: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008604cd: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008604cf: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008604d0: cmp dword ptr [0xae7c04], esi */ {  u32 a = R32((u32)(0xae7c04u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008604d6: jne 0x86050a */ if (!fZ) goto L_0086050a;
L_008604d8:; BB(0x008604d8);
    /* 008604d8: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008604db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008604dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008604dd: push 0x9983dc */ { u32 v = 0x9983dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008604e2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008604e3: call dword ptr [0x8f8254] */ { u32 t = R32((u32)(0x8f8254u)); r_esp -= 4; W32(r_esp, 0x8604e9u); call_ind(t); }
    /* 008604e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008604eb: je 0x8604f5 */ if (fZ) goto L_008604f5;
L_008604ed:; BB(0x008604ed);
    /* 008604ed: mov dword ptr [0xae7c04], edi */ W32((u32)(0xae7c04u), r_edi);
    /* 008604f3: jmp 0x86050a */ goto L_0086050a;
L_008604f5:; BB(0x008604f5);
    /* 008604f5: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8604fbu); call_ind(t); }
    /* 008604fb: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008604fe: jne 0x86050a */ if (!fZ) goto L_0086050a;
L_00860500:; BB(0x00860500);
    /* 00860500: mov dword ptr [0xae7c04], 2 */ W32((u32)(0xae7c04u), 0x2u);
L_0086050a:; BB(0x0086050a);
    /* 0086050a: mov eax, dword ptr [0xae7c04] */ r_eax = R32((u32)(0xae7c04u));
    /* 0086050f: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860511: jne 0x86052a */ if (!fZ) goto L_0086052a;
L_00860513:; BB(0x00860513);
    /* 00860513: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860516: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860519: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086051c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086051f: call dword ptr [0x8f8254] */ { u32 t = R32((u32)(0x8f8254u)); r_esp -= 4; W32(r_esp, 0x860525u); call_ind(t); }
    /* 00860525: jmp 0x8606db */ goto L_008606db;
L_0086052a:; BB(0x0086052a);
    /* 0086052a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086052d: je 0x860533 */ if (fZ) goto L_00860533;
L_0086052f:; BB(0x0086052f);
    /* 0086052f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860531: jne 0x860586 */ if (!fZ) goto L_00860586;
L_00860533:; BB(0x00860533);
    /* 00860533: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00860536: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00860539: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086053c: jne 0x860546 */ if (!fZ) goto L_00860546;
L_0086053e:; BB(0x0086053e);
    /* 0086053e: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 00860543: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_00860546:; BB(0x00860546);
    /* 00860546: cmp dword ptr [ebp + 0x18], esi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860549: jne 0x860553 */ if (!fZ) goto L_00860553;
L_0086054b:; BB(0x0086054b);
    /* 0086054b: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 00860550: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_00860553:; BB(0x00860553);
    /* 00860553: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860556: call 0x868c37 */ r_esp -= 4; W32(r_esp, 0x86055bu); f_00868c37();
    /* 0086055b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086055c: cmp dword ptr [ebp + 0x18], eax */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086055f: je 0x860569 */ if (fZ) goto L_00860569;
L_00860561:; BB(0x00860561);
    /* 00860561: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860564: je 0x860569 */ if (fZ) goto L_00860569;
L_00860566:; BB(0x00860566);
    /* 00860566: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_00860569:; BB(0x00860569);
    /* 00860569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086056a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086056b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086056c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086056d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860570: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860573: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860574: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860577: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86057du); call_ind(t); }
    /* 0086057d: mov ebx, eax */ r_ebx = r_eax;
    /* 0086057f: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00860582: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860584: jne 0x86058d */ if (!fZ) goto L_0086058d;
L_00860586:; BB(0x00860586);
    /* 00860586: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860588: jmp 0x8606db */ goto L_008606db;
L_0086058d:; BB(0x0086058d);
    /* 0086058d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00860590: mov eax, ebx */ r_eax = r_ebx;
    /* 00860592: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860595: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00860598: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86059du); f_00858020();
    /* 0086059d: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008605a0: mov eax, esp */ r_eax = r_esp;
    /* 008605a2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008605a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008605a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008605a8: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x8605adu); f_0085f580();
    /* 008605ad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008605b0: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008605b4: jmp 0x8605d2 */ goto L_008605d2;
L_008605d2:; BB(0x008605d2);
    /* 008605d2: cmp dword ptr [ebp - 0x24], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008605d5: jne 0x8605ea */ if (!fZ) goto L_008605ea;
L_008605d7:; BB(0x008605d7);
    /* 008605d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008605d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008605d9: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8605deu); f_008587c7();
    /* 008605de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008605df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008605e0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008605e3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008605e5: je 0x860586 */ if (fZ) goto L_00860586;
L_008605e7:; BB(0x008605e7);
    /* 008605e7: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
L_008605ea:; BB(0x008605ea);
    /* 008605ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008605ed: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605f7: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008605fa: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x860600u); call_ind(t); }
    /* 00860600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860602: je 0x8606ca */ if (fZ) goto L_008606ca;
L_00860608:; BB(0x00860608);
    /* 00860608: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086060b: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0086060f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860612: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00860615: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86061au); f_00858020();
    /* 0086061a: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086061d: mov eax, esp */ r_eax = r_esp;
    /* 0086061f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860622: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860626: jmp 0x860644 */ goto L_00860644;
L_00860644:; BB(0x00860644);
    /* 00860644: cmp dword ptr [ebp - 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860647: jne 0x86065e */ if (!fZ) goto L_0086065e;
L_00860649:; BB(0x00860649);
    /* 00860649: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0086064d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086064e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860653u); f_00859c55();
    /* 00860653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860654: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860657: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860659: je 0x8606ca */ if (fZ) goto L_008606ca;
L_0086065b:; BB(0x0086065b);
    /* 0086065b: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
L_0086065e:; BB(0x0086065e);
    /* 0086065e: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860661: jne 0x86066b */ if (!fZ) goto L_0086066b;
L_00860663:; BB(0x00860663);
    /* 00860663: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 00860668: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_0086066b:; BB(0x0086066b);
    /* 0086066b: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0086066e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00860670: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00860673: lea esi, [edi + eax] */ r_esi = (u32)(r_edi+r_eax);
    /* 00860676: or word ptr [esi], 0xffff */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0086067b: or word ptr [esi - 2], 0xffff */ { u32 ad = (u32)(r_esi+0xfffffffeu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 00860681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860682: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860683: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860686: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860689: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086068c: call dword ptr [0x8f8250] */ { u32 t = R32((u32)(0x8f8250u)); r_esp -= 4; W32(r_esp, 0x860692u); call_ind(t); }
    /* 00860692: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00860695: cmp word ptr [esi - 2], 0xffff */ {  u32 a = R16((u32)(r_esi+0xfffffffeu)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086069b: je 0x8606b5 */ if (fZ) goto L_008606b5;
L_0086069d:; BB(0x0086069d);
    /* 0086069d: cmp word ptr [esi], 0xffff */ {  u32 a = R16((u32)(r_esi)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008606a2: jne 0x8606b5 */ if (!fZ) goto L_008606b5;
L_008606a4:; BB(0x008606a4);
    /* 008606a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008606a5: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606a8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606ab: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x8606b0u); f_00858c80();
    /* 008606b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008606b3: jmp 0x8606b9 */ goto L_008606b9;
L_008606b5:; BB(0x008606b5);
    /* 008606b5: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008606b9:; BB(0x008606b9);
    /* 008606b9: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606bd: je 0x8606c8 */ if (fZ) goto L_008606c8;
L_008606bf:; BB(0x008606bf);
    /* 008606bf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606c2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606c7u); f_00858882();
    /* 008606c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606c8:; BB(0x008606c8);
    /* 008606c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008606ca:; BB(0x008606ca);
    /* 008606ca: cmp dword ptr [ebp - 0x30], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606cd: je 0x8606d8 */ if (fZ) goto L_008606d8;
L_008606cf:; BB(0x008606cf);
    /* 008606cf: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008606d2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606d7u); f_00858882();
    /* 008606d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606d8:; BB(0x008606d8);
    /* 008606d8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_008606db:; BB(0x008606db);
    /* 008606db: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 008606de: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8606e3u); f_0085e5e7();
    /* 008606e3: ret  */ FN_RET(0x008604bf); r_esp += 4; return;
}

void f_008605b6(void)
{
    FN_ENTER(0x008605b6);
    /* 008605b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008605b8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008605b9: ret  */ FN_RET(0x008605b6); r_esp += 4; return;
}

void f_008605ba(void)
{
    FN_ENTER(0x008605ba);
    goto L_008605ba;
L_00860586:; BB(0x00860586);
    /* 00860586: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860588: jmp 0x8606db */ goto L_008606db;
L_008605ba:; BB(0x008605ba);
    /* 008605ba: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008605bd: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x8605c2u); f_00865365();
    /* 008605c2: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008605c6: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008605ca: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008605cc: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008605cd: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008605d0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008605d2: cmp dword ptr [ebp - 0x24], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008605d5: jne 0x8605ea */ if (!fZ) goto L_008605ea;
L_008605d7:; BB(0x008605d7);
    /* 008605d7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008605d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008605d9: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8605deu); f_008587c7();
    /* 008605de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008605df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008605e0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008605e3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008605e5: je 0x860586 */ if (fZ) goto L_00860586;
L_008605e7:; BB(0x008605e7);
    /* 008605e7: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
L_008605ea:; BB(0x008605ea);
    /* 008605ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008605ed: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008605f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008605f7: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008605fa: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x860600u); call_ind(t); }
    /* 00860600: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860602: je 0x8606ca */ if (fZ) goto L_008606ca;
L_00860608:; BB(0x00860608);
    /* 00860608: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086060b: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0086060f: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860612: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00860615: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86061au); f_00858020();
    /* 0086061a: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086061d: mov eax, esp */ r_eax = r_esp;
    /* 0086061f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860622: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860626: jmp 0x860644 */ goto L_00860644;
L_00860644:; BB(0x00860644);
    /* 00860644: cmp dword ptr [ebp - 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860647: jne 0x86065e */ if (!fZ) goto L_0086065e;
L_00860649:; BB(0x00860649);
    /* 00860649: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0086064d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086064e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860653u); f_00859c55();
    /* 00860653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860654: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860657: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860659: je 0x8606ca */ if (fZ) goto L_008606ca;
L_0086065b:; BB(0x0086065b);
    /* 0086065b: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
L_0086065e:; BB(0x0086065e);
    /* 0086065e: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860661: jne 0x86066b */ if (!fZ) goto L_0086066b;
L_00860663:; BB(0x00860663);
    /* 00860663: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 00860668: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_0086066b:; BB(0x0086066b);
    /* 0086066b: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0086066e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00860670: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00860673: lea esi, [edi + eax] */ r_esi = (u32)(r_edi+r_eax);
    /* 00860676: or word ptr [esi], 0xffff */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0086067b: or word ptr [esi - 2], 0xffff */ { u32 ad = (u32)(r_esi+0xfffffffeu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 00860681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860682: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860683: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860686: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860689: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086068c: call dword ptr [0x8f8250] */ { u32 t = R32((u32)(0x8f8250u)); r_esp -= 4; W32(r_esp, 0x860692u); call_ind(t); }
    /* 00860692: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00860695: cmp word ptr [esi - 2], 0xffff */ {  u32 a = R16((u32)(r_esi+0xfffffffeu)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086069b: je 0x8606b5 */ if (fZ) goto L_008606b5;
L_0086069d:; BB(0x0086069d);
    /* 0086069d: cmp word ptr [esi], 0xffff */ {  u32 a = R16((u32)(r_esi)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008606a2: jne 0x8606b5 */ if (!fZ) goto L_008606b5;
L_008606a4:; BB(0x008606a4);
    /* 008606a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008606a5: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606a8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606ab: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x8606b0u); f_00858c80();
    /* 008606b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008606b3: jmp 0x8606b9 */ goto L_008606b9;
L_008606b5:; BB(0x008606b5);
    /* 008606b5: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008606b9:; BB(0x008606b9);
    /* 008606b9: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606bd: je 0x8606c8 */ if (fZ) goto L_008606c8;
L_008606bf:; BB(0x008606bf);
    /* 008606bf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606c2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606c7u); f_00858882();
    /* 008606c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606c8:; BB(0x008606c8);
    /* 008606c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008606ca:; BB(0x008606ca);
    /* 008606ca: cmp dword ptr [ebp - 0x30], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606cd: je 0x8606d8 */ if (fZ) goto L_008606d8;
L_008606cf:; BB(0x008606cf);
    /* 008606cf: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008606d2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606d7u); f_00858882();
    /* 008606d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606d8:; BB(0x008606d8);
    /* 008606d8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_008606db:; BB(0x008606db);
    /* 008606db: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 008606de: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8606e3u); f_0085e5e7();
    /* 008606e3: ret  */ FN_RET(0x008605ba); r_esp += 4; return;
}

void f_00860628(void)
{
    FN_ENTER(0x00860628);
    /* 00860628: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086062a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086062b: ret  */ FN_RET(0x00860628); r_esp += 4; return;
}

void f_0086062c(void)
{
    FN_ENTER(0x0086062c);
    /* 0086062c: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086062f: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x860634u); f_00865365();
    /* 00860634: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00860638: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086063c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086063e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086063f: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00860642: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00860644: cmp dword ptr [ebp - 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860647: jne 0x86065e */ if (!fZ) goto L_0086065e;
L_00860649:; BB(0x00860649);
    /* 00860649: lea eax, [ebx + ebx + 2] */ r_eax = (u32)(r_ebx+r_ebx+0x2u);
    /* 0086064d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086064e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860653u); f_00859c55();
    /* 00860653: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860654: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860657: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860659: je 0x8606ca */ if (fZ) goto L_008606ca;
L_0086065b:; BB(0x0086065b);
    /* 0086065b: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
L_0086065e:; BB(0x0086065e);
    /* 0086065e: cmp dword ptr [ebp + 0x1c], esi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860661: jne 0x86066b */ if (!fZ) goto L_0086066b;
L_00860663:; BB(0x00860663);
    /* 00860663: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 00860668: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_0086066b:; BB(0x0086066b);
    /* 0086066b: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0086066e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00860670: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00860673: lea esi, [edi + eax] */ r_esi = (u32)(r_edi+r_eax);
    /* 00860676: or word ptr [esi], 0xffff */ { u32 ad = (u32)(r_esi);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 0086067b: or word ptr [esi - 2], 0xffff */ { u32 ad = (u32)(r_esi+0xfffffffeu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 00860681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860682: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860683: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860686: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860689: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086068c: call dword ptr [0x8f8250] */ { u32 t = R32((u32)(0x8f8250u)); r_esp -= 4; W32(r_esp, 0x860692u); call_ind(t); }
    /* 00860692: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00860695: cmp word ptr [esi - 2], 0xffff */ {  u32 a = R16((u32)(r_esi+0xfffffffeu)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086069b: je 0x8606b5 */ if (fZ) goto L_008606b5;
L_0086069d:; BB(0x0086069d);
    /* 0086069d: cmp word ptr [esi], 0xffff */ {  u32 a = R16((u32)(r_esi)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008606a2: jne 0x8606b5 */ if (!fZ) goto L_008606b5;
L_008606a4:; BB(0x008606a4);
    /* 008606a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008606a5: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606a8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606ab: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x8606b0u); f_00858c80();
    /* 008606b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008606b3: jmp 0x8606b9 */ goto L_008606b9;
L_008606b5:; BB(0x008606b5);
    /* 008606b5: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008606b9:; BB(0x008606b9);
    /* 008606b9: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606bd: je 0x8606c8 */ if (fZ) goto L_008606c8;
L_008606bf:; BB(0x008606bf);
    /* 008606bf: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008606c2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606c7u); f_00858882();
    /* 008606c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606c8:; BB(0x008606c8);
    /* 008606c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008606ca:; BB(0x008606ca);
    /* 008606ca: cmp dword ptr [ebp - 0x30], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008606cd: je 0x8606d8 */ if (fZ) goto L_008606d8;
L_008606cf:; BB(0x008606cf);
    /* 008606cf: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008606d2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8606d7u); f_00858882();
    /* 008606d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008606d8:; BB(0x008606d8);
    /* 008606d8: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 008606db: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 008606de: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8606e3u); f_0085e5e7();
    /* 008606e3: ret  */ FN_RET(0x0086062c); r_esp += 4; return;
}

void f_00860772(void) /* __output */
{
    FN_ENTER(0x00860772);
    /* 00860772: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00860773: lea ebp, [esp - 0x1d4] */ r_ebp = (u32)(r_esp+0xfffffe2cu);
    /* 0086077a: sub esp, 0x254 */ {  u32 a = r_esp; u32 b = 0x254u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00860780: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00860785: mov dword ptr [ebp + 0x1d0], eax */ W32((u32)(r_ebp+0x1d0u), r_eax);
    /* 0086078b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086078d: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00860790: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00860793: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00860796: mov eax, dword ptr [ebp + 0x1e0] */ r_eax = R32((u32)(r_ebp+0x1e0u));
    /* 0086079c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086079d: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0086079f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008607a1: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008607a3: je 0x860f35 */ if (fZ) goto L_00860f35;
L_008607a9:; BB(0x008607a9);
    /* 008607a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008607aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008607ab: mov edi, eax */ r_edi = r_eax;
    /* 008607ad: jmp 0x8607b2 */ goto L_008607b2;
L_008607af:; BB(0x008607af);
    /* 008607af: mov ecx, dword ptr [ebp - 0x70] */ r_ecx = R32((u32)(r_ebp+0xffffff90u));
L_008607b2:; BB(0x008607b2);
    /* 008607b2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008607b3: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008607b7: mov dword ptr [ebp + 0x1e0], edi */ W32((u32)(r_ebp+0x1e0u), r_edi);
    /* 008607bd: jl 0x860f33 */ if ((fS!=fO)) goto L_00860f33;
L_008607c3:; BB(0x008607c3);
    /* 008607c3: cmp bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 008607c6: jl 0x8607dc */ if ((fS!=fO)) goto L_008607dc;
L_008607c8:; BB(0x008607c8);
    /* 008607c8: cmp bl, 0x78 */ {  u32 a = (u8)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 008607cb: jg 0x8607dc */ if ((!fZ&&fS==fO)) goto L_008607dc;
L_008607cd:; BB(0x008607cd);
    /* 008607cd: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 008607d0: movsx eax, byte ptr [eax + 0x998908] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x998908u));
    /* 008607d7: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008607da: jmp 0x8607de */ goto L_008607de;
L_008607dc:; BB(0x008607dc);
    /* 008607dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008607de:; BB(0x008607de);
    /* 008607de: movsx eax, byte ptr [ecx + eax*8 + 0x998928] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*8+0x998928u));
    /* 008607e6: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 008607e8: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008607eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008607ec: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008607ee: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 008607f1: ja 0x860f23 */ if ((!fC&&!fZ)) goto L_00860f23;
L_008607f7:; BB(0x008607f7);
    /* 008607f7: jmp dword ptr [eax*4 + 0x860f4c] */ { u32 t = R32((u32)(r_eax*4+0x860f4cu)); switch (t) { case 0x86098eu: goto L_0086098e; case 0x8607feu: goto L_008607fe; case 0x86081bu: goto L_0086081b; case 0x860867u: goto L_00860867; case 0x8608a8u: goto L_008608a8; case 0x8608b1u: goto L_008608b1; case 0x8608efu: goto L_008608ef; case 0x8609d0u: goto L_008609d0; default: UNSUP(0x008607f7, "jump table entry is not a known target"); } }
L_008607fe:; BB(0x008607fe);
    /* 008607fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860800: or dword ptr [ebp - 0x40], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffc0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860804: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00860807: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0086080a: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0086080d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00860810: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00860813: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00860816: jmp 0x860f23 */ goto L_00860f23;
L_0086081b:; BB(0x0086081b);
    /* 0086081b: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0086081e: sub eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860821: je 0x86085e */ if (fZ) goto L_0086085e;
L_00860823:; BB(0x00860823);
    /* 00860823: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860826: je 0x860855 */ if (fZ) goto L_00860855;
L_00860828:; BB(0x00860828);
    /* 00860828: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086082b: je 0x86084c */ if (fZ) goto L_0086084c;
L_0086082d:; BB(0x0086082d);
    /* 0086082d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086082e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086082f: je 0x860843 */ if (fZ) goto L_00860843;
L_00860831:; BB(0x00860831);
    /* 00860831: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860834: jne 0x860f23 */ if (!fZ) goto L_00860f23;
L_0086083a:; BB(0x0086083a);
    /* 0086083a: or dword ptr [ebp - 0x3c], 8 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086083e: jmp 0x860f23 */ goto L_00860f23;
L_00860843:; BB(0x00860843);
    /* 00860843: or dword ptr [ebp - 0x3c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860847: jmp 0x860f23 */ goto L_00860f23;
L_0086084c:; BB(0x0086084c);
    /* 0086084c: or dword ptr [ebp - 0x3c], 1 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860850: jmp 0x860f23 */ goto L_00860f23;
L_00860855:; BB(0x00860855);
    /* 00860855: or byte ptr [ebp - 0x3c], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00860859: jmp 0x860f23 */ goto L_00860f23;
L_0086085e:; BB(0x0086085e);
    /* 0086085e: or dword ptr [ebp - 0x3c], 2 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860862: jmp 0x860f23 */ goto L_00860f23;
L_00860867:; BB(0x00860867);
    /* 00860867: cmp bl, 0x2a */ {  u32 a = (u8)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086086a: jne 0x860893 */ if (!fZ) goto L_00860893;
L_0086086c:; BB(0x0086086c);
    /* 0086086c: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860873: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860879: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0086087c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086087e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00860881: jge 0x860f23 */ if ((fS==fO)) goto L_00860f23;
L_00860887:; BB(0x00860887);
    /* 00860887: or dword ptr [ebp - 0x3c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086088b: neg dword ptr [ebp - 0x58] */ { u32 ad = (u32)(r_ebp+0xffffffa8u); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086088e: jmp 0x860f23 */ goto L_00860f23;
L_00860893:; BB(0x00860893);
    /* 00860893: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00860896: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00860899: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0086089c: lea eax, [ecx + eax*2 - 0x30] */ r_eax = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 008608a0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 008608a3: jmp 0x860f23 */ goto L_00860f23;
L_008608a8:; BB(0x008608a8);
    /* 008608a8: and dword ptr [ebp - 0x40], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008608ac: jmp 0x860f23 */ goto L_00860f23;
L_008608b1:; BB(0x008608b1);
    /* 008608b1: cmp bl, 0x2a */ {  u32 a = (u8)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008608b4: jne 0x8608da */ if (!fZ) goto L_008608da;
L_008608b6:; BB(0x008608b6);
    /* 008608b6: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008608bd: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 008608c3: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 008608c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008608c8: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 008608cb: jge 0x860f23 */ if ((fS==fO)) goto L_00860f23;
L_008608d1:; BB(0x008608d1);
    /* 008608d1: or dword ptr [ebp - 0x40], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffc0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008608d5: jmp 0x860f23 */ goto L_00860f23;
L_008608da:; BB(0x008608da);
    /* 008608da: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008608dd: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 008608e0: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008608e3: lea eax, [ecx + eax*2 - 0x30] */ r_eax = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 008608e7: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 008608ea: jmp 0x860f23 */ goto L_00860f23;
L_008608ef:; BB(0x008608ef);
    /* 008608ef: cmp bl, 0x49 */ {  u32 a = (u8)r_ebx; u32 b = 0x49u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008608f2: je 0x860922 */ if (fZ) goto L_00860922;
L_008608f4:; BB(0x008608f4);
    /* 008608f4: cmp bl, 0x68 */ {  u32 a = (u8)r_ebx; u32 b = 0x68u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008608f7: je 0x860919 */ if (fZ) goto L_00860919;
L_008608f9:; BB(0x008608f9);
    /* 008608f9: cmp bl, 0x6c */ {  u32 a = (u8)r_ebx; u32 b = 0x6cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008608fc: je 0x860910 */ if (fZ) goto L_00860910;
L_008608fe:; BB(0x008608fe);
    /* 008608fe: cmp bl, 0x77 */ {  u32 a = (u8)r_ebx; u32 b = 0x77u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860901: jne 0x860f23 */ if (!fZ) goto L_00860f23;
L_00860907:; BB(0x00860907);
    /* 00860907: or byte ptr [ebp - 0x3b], 8 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0086090b: jmp 0x860f23 */ goto L_00860f23;
L_00860910:; BB(0x00860910);
    /* 00860910: or dword ptr [ebp - 0x3c], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860914: jmp 0x860f23 */ goto L_00860f23;
L_00860919:; BB(0x00860919);
    /* 00860919: or dword ptr [ebp - 0x3c], 0x20 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086091d: jmp 0x860f23 */ goto L_00860f23;
L_00860922:; BB(0x00860922);
    /* 00860922: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00860924: cmp al, 0x36 */ {  u32 a = (u8)r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860926: jne 0x86093f */ if (!fZ) goto L_0086093f;
L_00860928:; BB(0x00860928);
    /* 00860928: cmp byte ptr [edi + 1], 0x34 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x34u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086092c: jne 0x86093f */ if (!fZ) goto L_0086093f;
L_0086092e:; BB(0x0086092e);
    /* 0086092e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086092f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00860930: or byte ptr [ebp - 0x3b], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00860934: mov dword ptr [ebp + 0x1e0], edi */ W32((u32)(r_ebp+0x1e0u), r_edi);
    /* 0086093a: jmp 0x860f23 */ goto L_00860f23;
L_0086093f:; BB(0x0086093f);
    /* 0086093f: cmp al, 0x33 */ {  u32 a = (u8)r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860941: jne 0x86095a */ if (!fZ) goto L_0086095a;
L_00860943:; BB(0x00860943);
    /* 00860943: cmp byte ptr [edi + 1], 0x32 */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x32u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860947: jne 0x86095a */ if (!fZ) goto L_0086095a;
L_00860949:; BB(0x00860949);
    /* 00860949: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086094a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086094b: and byte ptr [ebp - 0x3b], 0x7f */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x7fu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0086094f: mov dword ptr [ebp + 0x1e0], edi */ W32((u32)(r_ebp+0x1e0u), r_edi);
    /* 00860955: jmp 0x860f23 */ goto L_00860f23;
L_0086095a:; BB(0x0086095a);
    /* 0086095a: cmp al, 0x64 */ {  u32 a = (u8)r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086095c: je 0x860f23 */ if (fZ) goto L_00860f23;
L_00860962:; BB(0x00860962);
    /* 00860962: cmp al, 0x69 */ {  u32 a = (u8)r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860964: je 0x860f23 */ if (fZ) goto L_00860f23;
L_0086096a:; BB(0x0086096a);
    /* 0086096a: cmp al, 0x6f */ {  u32 a = (u8)r_eax; u32 b = 0x6fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086096c: je 0x860f23 */ if (fZ) goto L_00860f23;
L_00860972:; BB(0x00860972);
    /* 00860972: cmp al, 0x75 */ {  u32 a = (u8)r_eax; u32 b = 0x75u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860974: je 0x860f23 */ if (fZ) goto L_00860f23;
L_0086097a:; BB(0x0086097a);
    /* 0086097a: cmp al, 0x78 */ {  u32 a = (u8)r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086097c: je 0x860f23 */ if (fZ) goto L_00860f23;
L_00860982:; BB(0x00860982);
    /* 00860982: cmp al, 0x58 */ {  u32 a = (u8)r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860984: je 0x860f23 */ if (fZ) goto L_00860f23;
L_0086098a:; BB(0x0086098a);
    /* 0086098a: and dword ptr [ebp - 0x70], 0 */ { u32 ad = (u32)(r_ebp+0xffffff90u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0086098e:; BB(0x0086098e);
    /* 0086098e: mov ecx, dword ptr [0xa23fa0] */ r_ecx = R32((u32)(0xa23fa0u));
    /* 00860994: and dword ptr [ebp - 0x5c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffa4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00860998: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0086099b: test byte ptr [ecx + eax*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_eax*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008609a0: je 0x8609bb */ if (fZ) goto L_008609bb;
L_008609a2:; BB(0x008609a2);
    /* 008609a2: mov ecx, dword ptr [ebp + 0x1dc] */ r_ecx = R32((u32)(r_ebp+0x1dcu));
    /* 008609a8: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 008609ab: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008609ad: call 0x8606e4 */ r_esp -= 4; W32(r_esp, 0x8609b2u); f_008606e4();
    /* 008609b2: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008609b4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008609b5: mov dword ptr [ebp + 0x1e0], edi */ W32((u32)(r_ebp+0x1e0u), r_edi);
L_008609bb:; BB(0x008609bb);
    /* 008609bb: mov ecx, dword ptr [ebp + 0x1dc] */ r_ecx = R32((u32)(r_ebp+0x1dcu));
    /* 008609c1: lea esi, [ebp - 0x4c] */ r_esi = (u32)(r_ebp+0xffffffb4u);
    /* 008609c4: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008609c6: call 0x8606e4 */ r_esp -= 4; W32(r_esp, 0x8609cbu); f_008606e4();
    /* 008609cb: jmp 0x860f23 */ goto L_00860f23;
L_008609d0:; BB(0x008609d0);
    /* 008609d0: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 008609d3: cmp eax, 0x67 */ {  u32 a = r_eax; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008609d6: jg 0x860c34 */ if ((!fZ&&fS==fO)) goto L_00860c34;
L_008609dc:; BB(0x008609dc);
    /* 008609dc: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008609df: jge 0x860a6b */ if ((fS==fO)) goto L_00860a6b;
L_008609e5:; BB(0x008609e5);
    /* 008609e5: cmp eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008609e8: jg 0x860acc */ if ((!fZ&&fS==fO)) goto L_00860acc;
L_008609ee:; BB(0x008609ee);
    /* 008609ee: je 0x860cb5 */ if (fZ) goto L_00860cb5;
L_008609f4:; BB(0x008609f4);
    /* 008609f4: sub eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008609f7: je 0x860a8b */ if (fZ) goto L_00860a8b;
L_008609fd:; BB(0x008609fd);
    /* 008609fd: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008609fe: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008609ff: je 0x860a61 */ if (fZ) goto L_00860a61;
L_00860a01:; BB(0x00860a01);
    /* 00860a01: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860a02: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860a03: je 0x860a61 */ if (fZ) goto L_00860a61;
L_00860a05:; BB(0x00860a05);
    /* 00860a05: sub eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860a08: jne 0x860e0f */ if (!fZ) goto L_00860e0f;
L_00860a0e:; BB(0x00860a0e);
    /* 00860a0e: test word ptr [ebp - 0x3c], 0x830 */ {  u32 a = R16((u32)(r_ebp+0xffffffc4u)); u32 b = 0x830u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00860a14: jne 0x860a1a */ if (!fZ) goto L_00860a1a;
L_00860a16:; BB(0x00860a16);
    /* 00860a16: or byte ptr [ebp - 0x3b], 8 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00860a1a:; BB(0x00860a1a);
    /* 00860a1a: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00860a1d: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860a20: jne 0x860a27 */ if (!fZ) goto L_00860a27;
L_00860a22:; BB(0x00860a22);
    /* 00860a22: mov ecx, 0x7fffffff */ r_ecx = 0x7fffffffu;
L_00860a27:; BB(0x00860a27);
    /* 00860a27: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860a2e: test word ptr [ebp - 0x3c], 0x810 */ {  u32 a = R16((u32)(r_ebp+0xffffffc4u)); u32 b = 0x810u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00860a34: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860a3a: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00860a3d: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00860a40: je 0x860c8a */ if (fZ) goto L_00860c8a;
L_00860a46:; BB(0x00860a46);
    /* 00860a46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860a48: jne 0x860a52 */ if (!fZ) goto L_00860a52;
L_00860a4a:; BB(0x00860a4a);
    /* 00860a4a: mov eax, dword ptr [0xa23fac] */ r_eax = R32((u32)(0xa23facu));
    /* 00860a4f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_00860a52:; BB(0x00860a52);
    /* 00860a52: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00860a55: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00860a5c: jmp 0x860c7c */ goto L_00860c7c;
L_00860a61:; BB(0x00860a61);
    /* 00860a61: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 00860a68: add bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
L_00860a6b:; BB(0x00860a6b);
    /* 00860a6b: or dword ptr [ebp - 0x3c], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00860a6f: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860a73: lea esi, [ebp - 0x38] */ r_esi = (u32)(r_ebp+0xffffffc8u);
    /* 00860a76: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00860a79: jge 0x860b78 */ if ((fS==fO)) goto L_00860b78;
L_00860a7f:; BB(0x00860a7f);
    /* 00860a7f: mov dword ptr [ebp - 0x40], 6 */ W32((u32)(r_ebp+0xffffffc0u), 0x6u);
    /* 00860a86: jmp 0x860bbf */ goto L_00860bbf;
L_00860a8b:; BB(0x00860a8b);
    /* 00860a8b: test word ptr [ebp - 0x3c], 0x830 */ {  u32 a = R16((u32)(r_ebp+0xffffffc4u)); u32 b = 0x830u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00860a91: jne 0x860a97 */ if (!fZ) goto L_00860a97;
L_00860a93:; BB(0x00860a93);
    /* 00860a93: or byte ptr [ebp - 0x3b], 8 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00860a97:; BB(0x00860a97);
    /* 00860a97: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860a9e: test word ptr [ebp - 0x3c], 0x810 */ {  u32 a = R16((u32)(r_ebp+0xffffffc4u)); u32 b = 0x810u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00860aa4: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860aaa: je 0x860b11 */ if (fZ) goto L_00860b11;
L_00860aac:; BB(0x00860aac);
    /* 00860aac: movsx eax, word ptr [eax - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xfffffffcu));
    /* 00860ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860ab1: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00860ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860ab5: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x860abau); f_0085ad71();
    /* 00860aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00860abc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860abd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860abe: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00860ac1: jge 0x860b1e */ if ((fS==fO)) goto L_00860b1e;
L_00860ac3:; BB(0x00860ac3);
    /* 00860ac3: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00860aca: jmp 0x860b1e */ goto L_00860b1e;
L_00860acc:; BB(0x00860acc);
    /* 00860acc: sub eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860acf: je 0x860b29 */ if (fZ) goto L_00860b29;
L_00860ad1:; BB(0x00860ad1);
    /* 00860ad1: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860ad4: je 0x860a97 */ if (fZ) goto L_00860a97;
L_00860ad6:; BB(0x00860ad6);
    /* 00860ad6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860ad7: jne 0x860e0f */ if (!fZ) goto L_00860e0f;
L_00860add:; BB(0x00860add);
    /* 00860add: or dword ptr [ebp - 0x3c], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00860ae1:; BB(0x00860ae1);
    /* 00860ae1: mov dword ptr [ebp - 0x48], 0xa */ W32((u32)(r_ebp+0xffffffb8u), 0xau);
L_00860ae8:; BB(0x00860ae8);
    /* 00860ae8: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00860aeb: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 00860af0: test esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860af2: je 0x860d2b */ if (fZ) goto L_00860d2b;
L_00860af8:; BB(0x00860af8);
    /* 00860af8: mov ecx, dword ptr [ebp + 0x1e4] */ r_ecx = R32((u32)(r_ebp+0x1e4u));
    /* 00860afe: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00860b00: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00860b03: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00860b06: mov dword ptr [ebp + 0x1e4], ecx */ W32((u32)(r_ebp+0x1e4u), r_ecx);
    /* 00860b0c: jmp 0x860d59 */ goto L_00860d59;
L_00860b11:; BB(0x00860b11);
    /* 00860b11: mov al, byte ptr [eax - 4] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+0xfffffffcu))) & 0xffu);
    /* 00860b14: mov byte ptr [ebp - 0x38], al */ W8((u32)(r_ebp+0xffffffc8u), (u8)r_eax);
    /* 00860b17: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_00860b1e:; BB(0x00860b1e);
    /* 00860b1e: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 00860b21: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00860b24: jmp 0x860e0f */ goto L_00860e0f;
L_00860b29:; BB(0x00860b29);
    /* 00860b29: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860b30: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860b36: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00860b39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860b3b: je 0x860b6a */ if (fZ) goto L_00860b6a;
L_00860b3d:; BB(0x00860b3d);
    /* 00860b3d: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00860b40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860b42: je 0x860b6a */ if (fZ) goto L_00860b6a;
L_00860b44:; BB(0x00860b44);
    /* 00860b44: test byte ptr [ebp - 0x3b], 8 */ {  u32 a = R8((u32)(r_ebp+0xffffffc5u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860b48: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00860b4b: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 00860b4e: je 0x860b61 */ if (fZ) goto L_00860b61;
L_00860b50:; BB(0x00860b50);
    /* 00860b50: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00860b51: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860b53: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00860b55: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00860b5c: jmp 0x860e0c */ goto L_00860e0c;
L_00860b61:; BB(0x00860b61);
    /* 00860b61: and dword ptr [ebp - 0x5c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffa4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00860b65: jmp 0x860e0c */ goto L_00860e0c;
L_00860b6a:; BB(0x00860b6a);
    /* 00860b6a: mov eax, dword ptr [0xa23fa8] */ r_eax = R32((u32)(0xa23fa8u));
    /* 00860b6f: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00860b72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860b73: jmp 0x860c29 */ goto L_00860c29;
L_00860b78:; BB(0x00860b78);
    /* 00860b78: jne 0x860b88 */ if (!fZ) goto L_00860b88;
L_00860b7a:; BB(0x00860b7a);
    /* 00860b7a: cmp bl, 0x67 */ {  u32 a = (u8)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860b7d: jne 0x860bbf */ if (!fZ) goto L_00860bbf;
L_00860b7f:; BB(0x00860b7f);
    /* 00860b7f: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00860b86: jmp 0x860bbf */ goto L_00860bbf;
L_00860b88:; BB(0x00860b88);
    /* 00860b88: mov eax, 0x200 */ r_eax = 0x200u;
    /* 00860b8d: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860b90: jle 0x860b95 */ if ((fZ||fS!=fO)) goto L_00860b95;
L_00860b92:; BB(0x00860b92);
    /* 00860b92: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00860b95:; BB(0x00860b95);
    /* 00860b95: mov edi, 0xa3 */ r_edi = 0xa3u;
    /* 00860b9a: cmp dword ptr [ebp - 0x40], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860b9d: jle 0x860bbf */ if ((fZ||fS!=fO)) goto L_00860bbf;
L_00860b9f:; BB(0x00860b9f);
    /* 00860b9f: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00860ba2: add eax, 0x15d */ {  u32 a = r_eax; u32 b = 0x15du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860ba8: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860badu); f_00859c55();
    /* 00860bad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860bb0: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 00860bb3: je 0x860bbc */ if (fZ) goto L_00860bbc;
L_00860bb5:; BB(0x00860bb5);
    /* 00860bb5: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00860bb8: mov esi, eax */ r_esi = r_eax;
    /* 00860bba: jmp 0x860bbf */ goto L_00860bbf;
L_00860bbc:; BB(0x00860bbc);
    /* 00860bbc: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
L_00860bbf:; BB(0x00860bbf);
    /* 00860bbf: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860bc5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00860bc7: push dword ptr [ebp - 0x6c] */ { u32 v = R32((u32)(r_ebp+0xffffff94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860bca: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860bcd: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860bd0: mov dword ptr [ebp + 0x1e4], eax */ W32((u32)(r_ebp+0x1e4u), r_eax);
    /* 00860bd6: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00860bd9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 00860bdc: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00860bdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860be0: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00860be3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860be4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860be5: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 00860be8: call dword ptr [0xa23c70] */ { u32 t = R32((u32)(0xa23c70u)); r_esp -= 4; W32(r_esp, 0x860beeu); call_ind(t); }
    /* 00860bee: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00860bf1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860bf4: and edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00860bfa: je 0x860c0a */ if (fZ) goto L_00860c0a;
L_00860bfc:; BB(0x00860bfc);
    /* 00860bfc: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860c00: jne 0x860c0a */ if (!fZ) goto L_00860c0a;
L_00860c02:; BB(0x00860c02);
    /* 00860c02: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860c03: call dword ptr [0xa23c7c] */ { u32 t = R32((u32)(0xa23c7cu)); r_esp -= 4; W32(r_esp, 0x860c09u); call_ind(t); }
    /* 00860c09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860c0a:; BB(0x00860c0a);
    /* 00860c0a: cmp bl, 0x67 */ {  u32 a = (u8)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860c0d: jne 0x860c1b */ if (!fZ) goto L_00860c1b;
L_00860c0f:; BB(0x00860c0f);
    /* 00860c0f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860c11: jne 0x860c1b */ if (!fZ) goto L_00860c1b;
L_00860c13:; BB(0x00860c13);
    /* 00860c13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860c14: call dword ptr [0xa23c74] */ { u32 t = R32((u32)(0xa23c74u)); r_esp -= 4; W32(r_esp, 0x860c1au); call_ind(t); }
    /* 00860c1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860c1b:; BB(0x00860c1b);
    /* 00860c1b: cmp byte ptr [esi], 0x2d */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860c1e: jne 0x860c28 */ if (!fZ) goto L_00860c28;
L_00860c20:; BB(0x00860c20);
    /* 00860c20: or byte ptr [ebp - 0x3b], 1 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00860c24: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00860c25: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
L_00860c28:; BB(0x00860c28);
    /* 00860c28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_00860c29:; BB(0x00860c29);
    /* 00860c29: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x860c2eu); f_0085d760();
    /* 00860c2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860c2f: jmp 0x860e0c */ goto L_00860e0c;
L_00860c34:; BB(0x00860c34);
    /* 00860c34: sub eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c37: je 0x860add */ if (fZ) goto L_00860add;
L_00860c3d:; BB(0x00860c3d);
    /* 00860c3d: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c40: je 0x860cfb */ if (fZ) goto L_00860cfb;
L_00860c46:; BB(0x00860c46);
    /* 00860c46: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c47: je 0x860ce1 */ if (fZ) goto L_00860ce1;
L_00860c4d:; BB(0x00860c4d);
    /* 00860c4d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c4e: je 0x860cae */ if (fZ) goto L_00860cae;
L_00860c50:; BB(0x00860c50);
    /* 00860c50: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c53: je 0x860a1a */ if (fZ) goto L_00860a1a;
L_00860c59:; BB(0x00860c59);
    /* 00860c59: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860c5a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c5b: je 0x860ae1 */ if (fZ) goto L_00860ae1;
L_00860c61:; BB(0x00860c61);
    /* 00860c61: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860c64: jne 0x860e0f */ if (!fZ) goto L_00860e0f;
L_00860c6a:; BB(0x00860c6a);
    /* 00860c6a: mov dword ptr [ebp - 0x68], 0x27 */ W32((u32)(r_ebp+0xffffff98u), 0x27u);
    /* 00860c71: jmp 0x860cb8 */ goto L_00860cb8;
L_00860c73:; BB(0x00860c73);
    /* 00860c73: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00860c74: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00860c78: je 0x860c80 */ if (fZ) goto L_00860c80;
L_00860c7a:; BB(0x00860c7a);
    /* 00860c7a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00860c7b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00860c7c:; BB(0x00860c7c);
    /* 00860c7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860c7e: jne 0x860c73 */ if (!fZ) goto L_00860c73;
L_00860c80:; BB(0x00860c80);
    /* 00860c80: sub eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860c83: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00860c85: jmp 0x860e0c */ goto L_00860e0c;
L_00860c8a:; BB(0x00860c8a);
    /* 00860c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860c8c: jne 0x860c96 */ if (!fZ) goto L_00860c96;
L_00860c8e:; BB(0x00860c8e);
    /* 00860c8e: mov eax, dword ptr [0xa23fa8] */ r_eax = R32((u32)(0xa23fa8u));
    /* 00860c93: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_00860c96:; BB(0x00860c96);
    /* 00860c96: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00860c99: jmp 0x860ca2 */ goto L_00860ca2;
L_00860c9b:; BB(0x00860c9b);
    /* 00860c9b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00860c9c: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860c9f: je 0x860ca6 */ if (fZ) goto L_00860ca6;
L_00860ca1:; BB(0x00860ca1);
    /* 00860ca1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00860ca2:; BB(0x00860ca2);
    /* 00860ca2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860ca4: jne 0x860c9b */ if (!fZ) goto L_00860c9b;
L_00860ca6:; BB(0x00860ca6);
    /* 00860ca6: sub eax, dword ptr [ebp - 0x44] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860ca9: jmp 0x860e0c */ goto L_00860e0c;
L_00860cae:; BB(0x00860cae);
    /* 00860cae: mov dword ptr [ebp - 0x40], 8 */ W32((u32)(r_ebp+0xffffffc0u), 0x8u);
L_00860cb5:; BB(0x00860cb5);
    /* 00860cb5: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
L_00860cb8:; BB(0x00860cb8);
    /* 00860cb8: test byte ptr [ebp - 0x3c], 0x80 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860cbc: mov dword ptr [ebp - 0x48], 0x10 */ W32((u32)(r_ebp+0xffffffb8u), 0x10u);
    /* 00860cc3: je 0x860ae8 */ if (fZ) goto L_00860ae8;
L_00860cc9:; BB(0x00860cc9);
    /* 00860cc9: mov al, byte ptr [ebp - 0x68] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffff98u))) & 0xffu);
    /* 00860ccc: add al, 0x51 */ {  u32 a = (u8)r_eax; u32 b = 0x51u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00860cce: mov byte ptr [ebp - 0x50], 0x30 */ W8((u32)(r_ebp+0xffffffb0u), 0x30u);
    /* 00860cd2: mov byte ptr [ebp - 0x4f], al */ W8((u32)(r_ebp+0xffffffb1u), (u8)r_eax);
    /* 00860cd5: mov dword ptr [ebp - 0x54], 2 */ W32((u32)(r_ebp+0xffffffacu), 0x2u);
    /* 00860cdc: jmp 0x860ae8 */ goto L_00860ae8;
L_00860ce1:; BB(0x00860ce1);
    /* 00860ce1: test byte ptr [ebp - 0x3c], 0x80 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860ce5: mov dword ptr [ebp - 0x48], 8 */ W32((u32)(r_ebp+0xffffffb8u), 0x8u);
    /* 00860cec: je 0x860ae8 */ if (fZ) goto L_00860ae8;
L_00860cf2:; BB(0x00860cf2);
    /* 00860cf2: or byte ptr [ebp - 0x3b], 2 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00860cf6: jmp 0x860ae8 */ goto L_00860ae8;
L_00860cfb:; BB(0x00860cfb);
    /* 00860cfb: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860d02: test byte ptr [ebp - 0x3c], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860d06: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860d0c: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00860d0f: je 0x860d1a */ if (fZ) goto L_00860d1a;
L_00860d11:; BB(0x00860d11);
    /* 00860d11: mov cx, word ptr [ebp - 0x4c] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffb4u))) & 0xffffu);
    /* 00860d15: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00860d18: jmp 0x860d1f */ goto L_00860d1f;
L_00860d1a:; BB(0x00860d1a);
    /* 00860d1a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00860d1d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_00860d1f:; BB(0x00860d1f);
    /* 00860d1f: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 00860d26: jmp 0x860f10 */ goto L_00860f10;
L_00860d2b:; BB(0x00860d2b);
    /* 00860d2b: add dword ptr [ebp + 0x1e4], 4 */ { u32 ad = (u32)(r_ebp+0x1e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00860d32: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860d35: mov eax, dword ptr [ebp + 0x1e4] */ r_eax = R32((u32)(r_ebp+0x1e4u));
    /* 00860d3b: je 0x860d4f */ if (fZ) goto L_00860d4f;
L_00860d3d:; BB(0x00860d3d);
    /* 00860d3d: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860d40: je 0x860d49 */ if (fZ) goto L_00860d49;
L_00860d42:; BB(0x00860d42);
    /* 00860d42: movsx eax, word ptr [eax - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xfffffffcu));
L_00860d46:; BB(0x00860d46);
    /* 00860d46: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00860d47: jmp 0x860d59 */ goto L_00860d59;
L_00860d49:; BB(0x00860d49);
    /* 00860d49: movzx eax, word ptr [eax - 4] */ r_eax = (u32)R16((u32)(r_eax+0xfffffffcu));
    /* 00860d4d: jmp 0x860d46 */ goto L_00860d46;
L_00860d4f:; BB(0x00860d4f);
    /* 00860d4f: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860d52: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 00860d55: jne 0x860d46 */ if (!fZ) goto L_00860d46;
L_00860d57:; BB(0x00860d57);
    /* 00860d57: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00860d59:; BB(0x00860d59);
    /* 00860d59: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860d5c: je 0x860d73 */ if (fZ) goto L_00860d73;
L_00860d5e:; BB(0x00860d5e);
    /* 00860d5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00860d60: jg 0x860d73 */ if ((!fZ&&fS==fO)) goto L_00860d73;
L_00860d62:; BB(0x00860d62);
    /* 00860d62: jl 0x860d68 */ if ((fS!=fO)) goto L_00860d68;
L_00860d64:; BB(0x00860d64);
    /* 00860d64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00860d66: jae 0x860d73 */ if (!fC) goto L_00860d73;
L_00860d68:; BB(0x00860d68);
    /* 00860d68: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00860d6a: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00860d6d: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00860d6f: or byte ptr [ebp - 0x3b], 1 */ { u32 ad = (u32)(r_ebp+0xffffffc5u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00860d73:; BB(0x00860d73);
    /* 00860d73: test dword ptr [ebp - 0x3c], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860d76: mov ebx, eax */ r_ebx = r_eax;
    /* 00860d78: mov edi, edx */ r_edi = r_edx;
    /* 00860d7a: jne 0x860d7e */ if (!fZ) goto L_00860d7e;
L_00860d7c:; BB(0x00860d7c);
    /* 00860d7c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00860d7e:; BB(0x00860d7e);
    /* 00860d7e: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860d82: jge 0x860d8d */ if ((fS==fO)) goto L_00860d8d;
L_00860d84:; BB(0x00860d84);
    /* 00860d84: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00860d8b: jmp 0x860d9e */ goto L_00860d9e;
L_00860d8d:; BB(0x00860d8d);
    /* 00860d8d: and dword ptr [ebp - 0x3c], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00860d91: mov eax, 0x200 */ r_eax = 0x200u;
    /* 00860d96: cmp dword ptr [ebp - 0x40], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860d99: jle 0x860d9e */ if ((fZ||fS!=fO)) goto L_00860d9e;
L_00860d9b:; BB(0x00860d9b);
    /* 00860d9b: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_00860d9e:; BB(0x00860d9e);
    /* 00860d9e: mov eax, ebx */ r_eax = r_ebx;
    /* 00860da0: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860da2: jne 0x860da8 */ if (!fZ) goto L_00860da8;
L_00860da4:; BB(0x00860da4);
    /* 00860da4: and dword ptr [ebp - 0x54], 0 */ { u32 ad = (u32)(r_ebp+0xffffffacu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00860da8:; BB(0x00860da8);
    /* 00860da8: lea esi, [ebp + 0x1c7] */ r_esi = (u32)(r_ebp+0x1c7u);
L_00860dae:; BB(0x00860dae);
    /* 00860dae: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00860db1: dec dword ptr [ebp - 0x40] */ { u32 ad = (u32)(r_ebp+0xffffffc0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00860db4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00860db6: jg 0x860dbe */ if ((!fZ&&fS==fO)) goto L_00860dbe;
L_00860db8:; BB(0x00860db8);
    /* 00860db8: mov eax, ebx */ r_eax = r_ebx;
    /* 00860dba: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00860dbc: je 0x860de2 */ if (fZ) goto L_00860de2;
L_00860dbe:; BB(0x00860dbe);
    /* 00860dbe: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00860dc1: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00860dc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00860dc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860dc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860dc5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860dc6: call 0x866fb0 */ r_esp -= 4; W32(r_esp, 0x860dcbu); f_00866fb0();
    /* 00860dcb: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00860dce: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860dd1: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 00860dd4: mov ebx, eax */ r_ebx = r_eax;
    /* 00860dd6: mov edi, edx */ r_edi = r_edx;
    /* 00860dd8: jle 0x860ddd */ if ((fZ||fS!=fO)) goto L_00860ddd;
L_00860dda:; BB(0x00860dda);
    /* 00860dda: add ecx, dword ptr [ebp - 0x68] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff98u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00860ddd:; BB(0x00860ddd);
    /* 00860ddd: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 00860ddf: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00860de0: jmp 0x860dae */ goto L_00860dae;
L_00860de2:; BB(0x00860de2);
    /* 00860de2: lea eax, [ebp + 0x1c7] */ r_eax = (u32)(r_ebp+0x1c7u);
    /* 00860de8: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00860dea: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00860deb: test byte ptr [ebp - 0x3b], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffc5u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860def: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00860df2: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 00860df5: je 0x860e0f */ if (fZ) goto L_00860e0f;
L_00860df7:; BB(0x00860df7);
    /* 00860df7: mov ecx, esi */ r_ecx = r_esi;
    /* 00860df9: cmp byte ptr [ecx], 0x30 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00860dfc: jne 0x860e02 */ if (!fZ) goto L_00860e02;
L_00860dfe:; BB(0x00860dfe);
    /* 00860dfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860e00: jne 0x860e0f */ if (!fZ) goto L_00860e0f;
L_00860e02:; BB(0x00860e02);
    /* 00860e02: dec dword ptr [ebp - 0x44] */ { u32 ad = (u32)(r_ebp+0xffffffbcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00860e05: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00860e08: mov byte ptr [ecx], 0x30 */ W8((u32)(r_ecx), 0x30u);
    /* 00860e0b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00860e0c:; BB(0x00860e0c);
    /* 00860e0c: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
L_00860e0f:; BB(0x00860e0f);
    /* 00860e0f: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860e13: jne 0x860f10 */ if (!fZ) goto L_00860f10;
L_00860e19:; BB(0x00860e19);
    /* 00860e19: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00860e1c: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e1f: je 0x860e47 */ if (fZ) goto L_00860e47;
L_00860e21:; BB(0x00860e21);
    /* 00860e21: test bh, 1 */ {  u32 a = (u8)(r_ebx>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e24: je 0x860e2c */ if (fZ) goto L_00860e2c;
L_00860e26:; BB(0x00860e26);
    /* 00860e26: mov byte ptr [ebp - 0x50], 0x2d */ W8((u32)(r_ebp+0xffffffb0u), 0x2du);
    /* 00860e2a: jmp 0x860e40 */ goto L_00860e40;
L_00860e2c:; BB(0x00860e2c);
    /* 00860e2c: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e2f: je 0x860e37 */ if (fZ) goto L_00860e37;
L_00860e31:; BB(0x00860e31);
    /* 00860e31: mov byte ptr [ebp - 0x50], 0x2b */ W8((u32)(r_ebp+0xffffffb0u), 0x2bu);
    /* 00860e35: jmp 0x860e40 */ goto L_00860e40;
L_00860e37:; BB(0x00860e37);
    /* 00860e37: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e3a: je 0x860e47 */ if (fZ) goto L_00860e47;
L_00860e3c:; BB(0x00860e3c);
    /* 00860e3c: mov byte ptr [ebp - 0x50], 0x20 */ W8((u32)(r_ebp+0xffffffb0u), 0x20u);
L_00860e40:; BB(0x00860e40);
    /* 00860e40: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
L_00860e47:; BB(0x00860e47);
    /* 00860e47: mov esi, dword ptr [ebp - 0x58] */ r_esi = R32((u32)(r_ebp+0xffffffa8u));
    /* 00860e4a: sub esi, dword ptr [ebp - 0x54] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffacu)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00860e4d: sub esi, dword ptr [ebp - 0x48] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00860e50: test bl, 0xc */ {  u32 a = (u8)r_ebx; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e53: jne 0x860e69 */ if (!fZ) goto L_00860e69;
L_00860e55:; BB(0x00860e55);
    /* 00860e55: push dword ptr [ebp + 0x1dc] */ { u32 v = R32((u32)(r_ebp+0x1dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860e5b: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860e5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860e5f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00860e61: call 0x860717 */ r_esp -= 4; W32(r_esp, 0x860e66u); f_00860717();
    /* 00860e66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00860e69:; BB(0x00860e69);
    /* 00860e69: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860e6c: mov edi, dword ptr [ebp + 0x1dc] */ r_edi = R32((u32)(r_ebp+0x1dcu));
    /* 00860e72: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860e75: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 00860e78: call 0x86073b */ r_esp -= 4; W32(r_esp, 0x860e7du); f_0086073b();
    /* 00860e7d: test bl, 8 */ {  u32 a = (u8)r_ebx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860e81: je 0x860e97 */ if (fZ) goto L_00860e97;
L_00860e83:; BB(0x00860e83);
    /* 00860e83: test bl, 4 */ {  u32 a = (u8)r_ebx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860e86: jne 0x860e97 */ if (!fZ) goto L_00860e97;
L_00860e88:; BB(0x00860e88);
    /* 00860e88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860e89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860e8a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00860e8c: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860e8f: call 0x860717 */ r_esp -= 4; W32(r_esp, 0x860e94u); f_00860717();
    /* 00860e94: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00860e97:; BB(0x00860e97);
    /* 00860e97: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860e9b: je 0x860ee7 */ if (fZ) goto L_00860ee7;
L_00860e9d:; BB(0x00860e9d);
    /* 00860e9d: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00860ea1: jle 0x860ee7 */ if ((fZ||fS!=fO)) goto L_00860ee7;
L_00860ea3:; BB(0x00860ea3);
    /* 00860ea3: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00860ea6: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00860ea9: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
L_00860eac:; BB(0x00860eac);
    /* 00860eac: dec dword ptr [ebp - 0x74] */ { u32 ad = (u32)(r_ebp+0xffffff8cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00860eaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00860eb1: mov ax, word ptr [ebx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx))) & 0xffffu);
    /* 00860eb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860eb5: lea eax, [ebp + 0x1c8] */ r_eax = (u32)(r_ebp+0x1c8u);
    /* 00860ebb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860ebc: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x860ec1u); f_0085ad71();
    /* 00860ec1: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00860ec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860ec3: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00860ec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00860ec6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860ec7: jle 0x860ef6 */ if ((fZ||fS!=fO)) goto L_00860ef6;
L_00860ec9:; BB(0x00860ec9);
    /* 00860ec9: mov edi, dword ptr [ebp + 0x1dc] */ r_edi = R32((u32)(r_ebp+0x1dcu));
    /* 00860ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860ed0: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860ed3: lea ecx, [ebp + 0x1c8] */ r_ecx = (u32)(r_ebp+0x1c8u);
    /* 00860ed9: call 0x86073b */ r_esp -= 4; W32(r_esp, 0x860edeu); f_0086073b();
    /* 00860ede: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860ee2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860ee3: jne 0x860eac */ if (!fZ) goto L_00860eac;
L_00860ee5:; BB(0x00860ee5);
    /* 00860ee5: jmp 0x860ef6 */ goto L_00860ef6;
L_00860ee7:; BB(0x00860ee7);
    /* 00860ee7: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860eea: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00860eed: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860ef0: call 0x86073b */ r_esp -= 4; W32(r_esp, 0x860ef5u); f_0086073b();
    /* 00860ef5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860ef6:; BB(0x00860ef6);
    /* 00860ef6: test byte ptr [ebp - 0x3c], 4 */ {  u32 a = R8((u32)(r_ebp+0xffffffc4u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860efa: je 0x860f10 */ if (fZ) goto L_00860f10;
L_00860efc:; BB(0x00860efc);
    /* 00860efc: push dword ptr [ebp + 0x1dc] */ { u32 v = R32((u32)(r_ebp+0x1dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860f02: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 00860f05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860f06: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00860f08: call 0x860717 */ r_esp -= 4; W32(r_esp, 0x860f0du); f_00860717();
    /* 00860f0d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00860f10:; BB(0x00860f10);
    /* 00860f10: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860f14: je 0x860f23 */ if (fZ) goto L_00860f23;
L_00860f16:; BB(0x00860f16);
    /* 00860f16: push dword ptr [ebp - 0x60] */ { u32 v = R32((u32)(r_ebp+0xffffffa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00860f19: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860f1eu); f_00858882();
    /* 00860f1e: and dword ptr [ebp - 0x60], 0 */ { u32 ad = (u32)(r_ebp+0xffffffa0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00860f22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00860f23:; BB(0x00860f23);
    /* 00860f23: mov edi, dword ptr [ebp + 0x1e0] */ r_edi = R32((u32)(r_ebp+0x1e0u));
    /* 00860f29: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00860f2b: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00860f2d: jne 0x8607af */ if (!fZ) goto L_008607af;
L_00860f33:; BB(0x00860f33);
    /* 00860f33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00860f34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00860f35:; BB(0x00860f35);
    /* 00860f35: mov ecx, dword ptr [ebp + 0x1d0] */ r_ecx = R32((u32)(r_ebp+0x1d0u));
    /* 00860f3b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00860f3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00860f3f: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x860f44u); f_0085e419();
    /* 00860f44: add ebp, 0x1d4 */ {  u32 a = r_ebp; u32 b = 0x1d4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00860f4a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00860f4b: ret  */ FN_RET(0x00860772); r_esp += 4; return;
}

void f_00860f6c(void) /* _realloc */
{
    FN_ENTER(0x00860f6c);
    /* 00860f6c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00860f6e: push 0x9989a0 */ { u32 v = 0x9989a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00860f73: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x860f78u); f_0085e5ac();
    /* 00860f78: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00860f7b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00860f7d: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860f7f: jne 0x860f8f */ if (!fZ) goto L_00860f8f;
L_00860f81:; BB(0x00860f81);
    /* 00860f81: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00860f84: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x860f89u); f_00859c55();
    /* 00860f89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860f8a: jmp 0x861113 */ goto L_00861113;
L_00860f8f:; BB(0x00860f8f);
    /* 00860f8f: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00860f92: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860f94: jne 0x860fa2 */ if (!fZ) goto L_00860fa2;
L_00860f96:; BB(0x00860f96);
    /* 00860f96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860f97: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x860f9cu); f_00858882();
    /* 00860f9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860f9d: jmp 0x861111 */ goto L_00861111;
L_00860fa2:; BB(0x00860fa2);
    /* 00860fa2: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860fa9: jne 0x8610dd */ if (!fZ) goto L_008610dd;
L_00860faf:; BB(0x00860faf);
    /* 00860faf: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00860fb2: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00860fb5: ja 0x8610ac */ if ((!fC&&!fZ)) goto L_008610ac;
L_00860fbb:; BB(0x00860fbb);
    /* 00860fbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00860fbd: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x860fc2u); f_0085e57a();
    /* 00860fc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860fc3: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00860fc6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860fc7: call 0x85f628 */ r_esp -= 4; W32(r_esp, 0x860fccu); f_0085f628();
    /* 00860fcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860fcd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00860fd0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860fd2: je 0x86107c */ if (fZ) goto L_0086107c;
L_00860fd8:; BB(0x00860fd8);
    /* 00860fd8: cmp esi, dword ptr [0xaf0b8c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0b8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00860fde: ja 0x86102c */ if ((!fC&&!fZ)) goto L_0086102c;
L_00860fe0:; BB(0x00860fe0);
    /* 00860fe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860fe1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00860fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860fe3: call 0x85fb28 */ r_esp -= 4; W32(r_esp, 0x860fe8u); f_0085fb28();
    /* 00860fe8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00860feb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00860fed: je 0x860ff4 */ if (fZ) goto L_00860ff4;
L_00860fef:; BB(0x00860fef);
    /* 00860fef: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00860ff2: jmp 0x86102c */ goto L_0086102c;
L_00860ff4:; BB(0x00860ff4);
    /* 00860ff4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860ff5: call 0x85fe07 */ r_esp -= 4; W32(r_esp, 0x860ffau); f_0085fe07();
    /* 00860ffa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00860ffb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00860ffe: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861000: je 0x86102c */ if (fZ) goto L_0086102c;
L_00861002:; BB(0x00861002);
    /* 00861002: mov eax, dword ptr [edi - 4] */ r_eax = R32((u32)(r_edi+0xfffffffcu));
    /* 00861005: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00861006: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00861009: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086100b: jb 0x86100f */ if (fC) goto L_0086100f;
L_0086100d:; BB(0x0086100d);
    /* 0086100d: mov eax, esi */ r_eax = r_esi;
L_0086100f:; BB(0x0086100f);
    /* 0086100f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861010: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861011: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861014: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x861019u); f_00861d00();
    /* 00861019: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086101a: call 0x85f628 */ r_esp -= 4; W32(r_esp, 0x86101fu); f_0085f628();
    /* 0086101f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00861022: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861023: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861024: call 0x85f653 */ r_esp -= 4; W32(r_esp, 0x861029u); f_0085f653();
    /* 00861029: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0086102c:; BB(0x0086102c);
    /* 0086102c: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086102f: jne 0x86107c */ if (!fZ) goto L_0086107c;
L_00861031:; BB(0x00861031);
    /* 00861031: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861033: jne 0x86103b */ if (!fZ) goto L_0086103b;
L_00861035:; BB(0x00861035);
    /* 00861035: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00861037: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861038: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
L_0086103b:; BB(0x0086103b);
    /* 0086103b: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086103e: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00861041: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00861044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861045: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861046: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086104c: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x861052u); call_ind(t); }
    /* 00861052: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00861055: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861057: je 0x86107c */ if (fZ) goto L_0086107c;
L_00861059:; BB(0x00861059);
    /* 00861059: mov eax, dword ptr [edi - 4] */ r_eax = R32((u32)(r_edi+0xfffffffcu));
    /* 0086105c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086105d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00861060: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861062: jb 0x861066 */ if (fC) goto L_00861066;
L_00861064:; BB(0x00861064);
    /* 00861064: mov eax, esi */ r_eax = r_esi;
L_00861066:; BB(0x00861066);
    /* 00861066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861067: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861068: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086106b: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x861070u); f_00861d00();
    /* 00861070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861071: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861074: call 0x85f653 */ r_esp -= 4; W32(r_esp, 0x861079u); f_0085f653();
    /* 00861079: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0086107c:; BB(0x0086107c);
    /* 0086107c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00861080: call 0x8610d4 */ r_esp -= 4; W32(r_esp, 0x861085u); f_008610d4();
    /* 00861085: cmp dword ptr [ebp - 0x20], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861088: jne 0x8610ac */ if (!fZ) goto L_008610ac;
L_0086108a:; BB(0x0086108a);
    /* 0086108a: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086108c: jne 0x861091 */ if (!fZ) goto L_00861091;
L_0086108e:; BB(0x0086108e);
    /* 0086108e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00861090: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00861091:; BB(0x00861091);
    /* 00861091: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861094: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00861097: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 0086109a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086109b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086109c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086109d: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008610a3: call dword ptr [0x8f8240] */ { u32 t = R32((u32)(0x8f8240u)); r_esp -= 4; W32(r_esp, 0x8610a9u); call_ind(t); }
    /* 008610a9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_008610ac:; BB(0x008610ac);
    /* 008610ac: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008610af: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008610b1: jne 0x861113 */ if (!fZ) goto L_00861113;
L_008610b3:; BB(0x008610b3);
    /* 008610b3: cmp dword ptr [0xae7bfc], ebx */ {  u32 a = R32((u32)(0xae7bfcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008610b9: je 0x861113 */ if (fZ) goto L_00861113;
L_008610bb:; BB(0x008610bb);
    /* 008610bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008610bc: call 0x85f4f4 */ r_esp -= 4; W32(r_esp, 0x8610c1u); f_0085f4f4();
    /* 008610c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008610c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008610c4: jne 0x860faf */ if (!fZ) goto L_00860faf;
L_008610ca:; BB(0x008610ca);
    /* 008610ca: jmp 0x861111 */ goto L_00861111;
L_008610dd:; BB(0x008610dd);
    /* 008610dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008610df: cmp esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008610e2: ja 0x8610fa */ if ((!fC&&!fZ)) goto L_008610fa;
L_008610e4:; BB(0x008610e4);
    /* 008610e4: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008610e6: jne 0x8610eb */ if (!fZ) goto L_008610eb;
L_008610e8:; BB(0x008610e8);
    /* 008610e8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008610ea: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_008610eb:; BB(0x008610eb);
    /* 008610eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008610ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008610ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008610ee: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008610f4: call dword ptr [0x8f8240] */ { u32 t = R32((u32)(0x8f8240u)); r_esp -= 4; W32(r_esp, 0x8610fau); call_ind(t); }
L_008610fa:; BB(0x008610fa);
    /* 008610fa: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008610fc: jne 0x861113 */ if (!fZ) goto L_00861113;
L_008610fe:; BB(0x008610fe);
    /* 008610fe: cmp dword ptr [0xae7bfc], ebx */ {  u32 a = R32((u32)(0xae7bfcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861104: je 0x861113 */ if (fZ) goto L_00861113;
L_00861106:; BB(0x00861106);
    /* 00861106: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861107: call 0x85f4f4 */ r_esp -= 4; W32(r_esp, 0x86110cu); f_0085f4f4();
    /* 0086110c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086110d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086110f: jne 0x8610dd */ if (!fZ) goto L_008610dd;
L_00861111:; BB(0x00861111);
    /* 00861111: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00861113:; BB(0x00861113);
    /* 00861113: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x861118u); f_0085e5e7();
    /* 00861118: ret  */ FN_RET(0x00860f6c); r_esp += 4; return;
}

