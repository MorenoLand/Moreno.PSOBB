#include "protos.h"

void f_005c9118(void) /* sub_5C9118 */
{
    FN_ENTER(0x005c9118);
    /* 005c9118: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c9122: ret  */ FN_RET(0x005c9118); r_esp += 4; return;
}

void f_005c9124(void) /* sub_5C9124 */
{
    FN_ENTER(0x005c9124);
    /* 005c9124: mov dword ptr [0xa8d88c], 0 */ W32((u32)(0xa8d88cu), 0x0u);
    /* 005c912e: ret  */ FN_RET(0x005c9124); r_esp += 4; return;
}

void f_005c9130(void) /* sub_5C9130 */
{
    FN_ENTER(0x005c9130);
    /* 005c9130: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9131: mov ebp, esp */ r_ebp = r_esp;
    /* 005c9133: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005c9135: push 0x8d99ca */ { u32 v = 0x8d99cau; r_esp -= 4; W32(r_esp, v); }
    /* 005c913a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005c9140: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9141: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005c9148: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c914b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005c914e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005c9151: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005c9154: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005c9157: push 0x1e600 */ { u32 v = 0x1e600u; r_esp -= 4; W32(r_esp, v); }
    /* 005c915c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c9161u); f_008581c5();
    /* 005c9161: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c9164: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9167: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005c916a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c916c: je 0x5c970b */ if (fZ) goto L_005c970b;
L_005c9172:; BB(0x005c9172);
    /* 005c9172: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005c9179: mov esi, eax */ r_esi = r_eax;
    /* 005c917b: mov ebx, 0xd80 */ r_ebx = 0xd80u;
L_005c9180:; BB(0x005c9180);
    /* 005c9180: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 005c9187: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9189: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 005c918c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005c9191: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 005c9198: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 005c919a: mov word ptr [esi + 2], ax */ W16((u32)(r_esi+0x2u), (u16)r_eax);
    /* 005c919e: mov word ptr [esi + 0xc], ax */ W16((u32)(r_esi+0xcu), (u16)r_eax);
    /* 005c91a2: mov word ptr [esi + 0xe], dx */ W16((u32)(r_esi+0xeu), (u16)r_edx);
    /* 005c91a6: lea ecx, [esi + 0x10] */ r_ecx = (u32)(r_esi+0x10u);
    /* 005c91a9: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c91aeu); f_005d6a3c();
    /* 005c91ae: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c91b1: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005c91b4: jne 0x5c9180 */ if (!fZ) goto L_005c9180;
L_005c91b6:; BB(0x005c91b6);
    /* 005c91b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005c91b9: mov dword ptr [0xa8d8a4], eax */ W32((u32)(0xa8d8a4u), r_eax);
    /* 005c91be: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005c91c5: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005c91c7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c91ccu); f_008581c5();
    /* 005c91cc: mov dword ptr [0xa8d8a0], eax */ W32((u32)(0xa8d8a0u), r_eax);
    /* 005c91d1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005c91d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c91d8u); f_008581c5();
    /* 005c91d8: mov dword ptr [0xa8d89c], eax */ W32((u32)(0xa8d89cu), r_eax);
    /* 005c91dd: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005c91df: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c91e4u); f_008581c5();
    /* 005c91e4: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c91ee: mov dword ptr [0xa8d898], eax */ W32((u32)(0xa8d898u), r_eax);
    /* 005c91f3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005c91f5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5c91fau); f_008581c5();
    /* 005c91fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c91fd: mov dword ptr [0xa8d88c], 0 */ W32((u32)(0xa8d88cu), 0x0u);
    /* 005c9207: mov dword ptr [0xa8d890], eax */ W32((u32)(0xa8d890u), r_eax);
    /* 005c920c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005c920e:; BB(0x005c920e);
    /* 005c920e: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9214: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9216: je 0x5c9256 */ if (fZ) goto L_005c9256;
L_005c9218:; BB(0x005c9218);
    /* 005c9218: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005c921b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c921d: lea edi, [esi + esi*8] */ r_edi = (u32)(r_esi+r_esi*8);
    /* 005c9220: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9222: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005c9227: mov byte ptr [edi + ecx + 1], al */ W8((u32)(r_edi+r_ecx+0x1u), (u8)r_eax);
    /* 005c922b: mov dword ptr [edi + ecx + 4], 0 */ W32((u32)(r_edi+r_ecx+0x4u), 0x0u);
    /* 005c9233: mov byte ptr [edi + ecx], dl */ W8((u32)(r_edi+r_ecx), (u8)r_edx);
    /* 005c9236: mov dword ptr [edi + ecx + 8], 0 */ W32((u32)(r_edi+r_ecx+0x8u), 0x0u);
    /* 005c923e: mov word ptr [edi + ecx + 2], dx */ W16((u32)(r_edi+r_ecx+0x2u), (u16)r_edx);
    /* 005c9243: mov word ptr [edi + ecx + 0xc], dx */ W16((u32)(r_edi+r_ecx+0xcu), (u16)r_edx);
    /* 005c9248: mov word ptr [edi + ecx + 0xe], ax */ W16((u32)(r_edi+r_ecx+0xeu), (u16)r_eax);
    /* 005c924d: lea ecx, [ecx + edi + 0x10] */ r_ecx = (u32)(r_ecx+r_edi+0x10u);
    /* 005c9251: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9256u); f_005d6a3c();
L_005c9256:; BB(0x005c9256);
    /* 005c9256: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005c9259: cmp ebx, 0xd80 */ {  u32 a = r_ebx; u32 b = 0xd80u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c925f: jl 0x5c920e */ if ((fS!=fO)) goto L_005c920e;
L_005c9261:; BB(0x005c9261);
    /* 005c9261: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
    /* 005c9266: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9268: je 0x5c9274 */ if (fZ) goto L_005c9274;
L_005c926a:; BB(0x005c926a);
    /* 005c926a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c926c: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 005c926f: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9274:; BB(0x005c9274);
    /* 005c9274: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9276: je 0x5c9283 */ if (fZ) goto L_005c9283;
L_005c9278:; BB(0x005c9278);
    /* 005c9278: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c927a: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 005c927e: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9283:; BB(0x005c9283);
    /* 005c9283: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9285: je 0x5c9292 */ if (fZ) goto L_005c9292;
L_005c9287:; BB(0x005c9287);
    /* 005c9287: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9289: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005c928d: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9292:; BB(0x005c9292);
    /* 005c9292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9294: je 0x5c92a1 */ if (fZ) goto L_005c92a1;
L_005c9296:; BB(0x005c9296);
    /* 005c9296: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9298: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 005c929c: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92a1:; BB(0x005c92a1);
    /* 005c92a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92a3: je 0x5c92b0 */ if (fZ) goto L_005c92b0;
L_005c92a5:; BB(0x005c92a5);
    /* 005c92a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92a7: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005c92ab: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92b0:; BB(0x005c92b0);
    /* 005c92b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92b2: je 0x5c92bf */ if (fZ) goto L_005c92bf;
L_005c92b4:; BB(0x005c92b4);
    /* 005c92b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92b6: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 005c92ba: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92bf:; BB(0x005c92bf);
    /* 005c92bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92c1: je 0x5c92ce */ if (fZ) goto L_005c92ce;
L_005c92c3:; BB(0x005c92c3);
    /* 005c92c3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92c5: mov word ptr [eax + 0xc], dx */ W16((u32)(r_eax+0xcu), (u16)r_edx);
    /* 005c92c9: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92ce:; BB(0x005c92ce);
    /* 005c92ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92d0: je 0x5c92dd */ if (fZ) goto L_005c92dd;
L_005c92d2:; BB(0x005c92d2);
    /* 005c92d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92d4: mov word ptr [eax + 0xe], dx */ W16((u32)(r_eax+0xeu), (u16)r_edx);
    /* 005c92d8: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92dd:; BB(0x005c92dd);
    /* 005c92dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92df: je 0x5c92ec */ if (fZ) goto L_005c92ec;
L_005c92e1:; BB(0x005c92e1);
    /* 005c92e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92e3: mov word ptr [eax + 0x10], dx */ W16((u32)(r_eax+0x10u), (u16)r_edx);
    /* 005c92e7: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92ec:; BB(0x005c92ec);
    /* 005c92ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92ee: je 0x5c92fb */ if (fZ) goto L_005c92fb;
L_005c92f0:; BB(0x005c92f0);
    /* 005c92f0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c92f2: mov word ptr [eax + 0x12], dx */ W16((u32)(r_eax+0x12u), (u16)r_edx);
    /* 005c92f6: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c92fb:; BB(0x005c92fb);
    /* 005c92fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c92fd: je 0x5c930a */ if (fZ) goto L_005c930a;
L_005c92ff:; BB(0x005c92ff);
    /* 005c92ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9301: mov word ptr [eax + 0x14], dx */ W16((u32)(r_eax+0x14u), (u16)r_edx);
    /* 005c9305: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c930a:; BB(0x005c930a);
    /* 005c930a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c930c: je 0x5c9319 */ if (fZ) goto L_005c9319;
L_005c930e:; BB(0x005c930e);
    /* 005c930e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9310: mov word ptr [eax + 0x16], dx */ W16((u32)(r_eax+0x16u), (u16)r_edx);
    /* 005c9314: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9319:; BB(0x005c9319);
    /* 005c9319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c931b: je 0x5c9328 */ if (fZ) goto L_005c9328;
L_005c931d:; BB(0x005c931d);
    /* 005c931d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c931f: mov word ptr [eax + 0x18], dx */ W16((u32)(r_eax+0x18u), (u16)r_edx);
    /* 005c9323: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9328:; BB(0x005c9328);
    /* 005c9328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c932a: je 0x5c9337 */ if (fZ) goto L_005c9337;
L_005c932c:; BB(0x005c932c);
    /* 005c932c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c932e: mov word ptr [eax + 0x1a], dx */ W16((u32)(r_eax+0x1au), (u16)r_edx);
    /* 005c9332: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9337:; BB(0x005c9337);
    /* 005c9337: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9339: je 0x5c9346 */ if (fZ) goto L_005c9346;
L_005c933b:; BB(0x005c933b);
    /* 005c933b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c933d: mov word ptr [eax + 0x1c], dx */ W16((u32)(r_eax+0x1cu), (u16)r_edx);
    /* 005c9341: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9346:; BB(0x005c9346);
    /* 005c9346: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9348: je 0x5c9355 */ if (fZ) goto L_005c9355;
L_005c934a:; BB(0x005c934a);
    /* 005c934a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c934c: mov word ptr [eax + 0x1e], dx */ W16((u32)(r_eax+0x1eu), (u16)r_edx);
    /* 005c9350: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9355:; BB(0x005c9355);
    /* 005c9355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9357: je 0x5c9364 */ if (fZ) goto L_005c9364;
L_005c9359:; BB(0x005c9359);
    /* 005c9359: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c935b: mov word ptr [eax + 0x20], dx */ W16((u32)(r_eax+0x20u), (u16)r_edx);
    /* 005c935f: mov eax, dword ptr [0xa8d890] */ r_eax = R32((u32)(0xa8d890u));
L_005c9364:; BB(0x005c9364);
    /* 005c9364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9366: je 0x5c936e */ if (fZ) goto L_005c936e;
L_005c9368:; BB(0x005c9368);
    /* 005c9368: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c936a: mov word ptr [eax + 0x22], dx */ W16((u32)(r_eax+0x22u), (u16)r_edx);
L_005c936e:; BB(0x005c936e);
    /* 005c936e: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
    /* 005c9373: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9375: je 0x5c939d */ if (fZ) goto L_005c939d;
L_005c9377:; BB(0x005c9377);
    /* 005c9377: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c937d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c937f: je 0x5c939d */ if (fZ) goto L_005c939d;
L_005c9381:; BB(0x005c9381);
    /* 005c9381: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9387: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9389: je 0x5c939d */ if (fZ) goto L_005c939d;
L_005c938b:; BB(0x005c938b);
    /* 005c938b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005c938d: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9392: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 005c9398: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c939d:; BB(0x005c939d);
    /* 005c939d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c939f: je 0x5c93cf */ if (fZ) goto L_005c93cf;
L_005c93a1:; BB(0x005c93a1);
    /* 005c93a1: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c93a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c93a9: je 0x5c93cf */ if (fZ) goto L_005c93cf;
L_005c93ab:; BB(0x005c93ab);
    /* 005c93ab: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c93b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c93b3: je 0x5c93cf */ if (fZ) goto L_005c93cf;
L_005c93b5:; BB(0x005c93b5);
    /* 005c93b5: add ecx, 0x1b00 */ {  u32 a = r_ecx; u32 b = 0x1b00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c93bb: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005c93be: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c93c3: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 005c93ca: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c93cf:; BB(0x005c93cf);
    /* 005c93cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c93d1: je 0x5c9401 */ if (fZ) goto L_005c9401;
L_005c93d3:; BB(0x005c93d3);
    /* 005c93d3: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c93d9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c93db: je 0x5c9401 */ if (fZ) goto L_005c9401;
L_005c93dd:; BB(0x005c93dd);
    /* 005c93dd: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c93e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c93e5: je 0x5c9401 */ if (fZ) goto L_005c9401;
L_005c93e7:; BB(0x005c93e7);
    /* 005c93e7: add ecx, 0x3600 */ {  u32 a = r_ecx; u32 b = 0x3600u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c93ed: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 005c93f0: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c93f5: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 005c93fc: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9401:; BB(0x005c9401);
    /* 005c9401: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9403: je 0x5c9433 */ if (fZ) goto L_005c9433;
L_005c9405:; BB(0x005c9405);
    /* 005c9405: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c940b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c940d: je 0x5c9433 */ if (fZ) goto L_005c9433;
L_005c940f:; BB(0x005c940f);
    /* 005c940f: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9415: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9417: je 0x5c9433 */ if (fZ) goto L_005c9433;
L_005c9419:; BB(0x005c9419);
    /* 005c9419: add ecx, 0x5100 */ {  u32 a = r_ecx; u32 b = 0x5100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c941f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005c9422: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9427: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 005c942e: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9433:; BB(0x005c9433);
    /* 005c9433: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9435: je 0x5c9465 */ if (fZ) goto L_005c9465;
L_005c9437:; BB(0x005c9437);
    /* 005c9437: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c943d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c943f: je 0x5c9465 */ if (fZ) goto L_005c9465;
L_005c9441:; BB(0x005c9441);
    /* 005c9441: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9447: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9449: je 0x5c9465 */ if (fZ) goto L_005c9465;
L_005c944b:; BB(0x005c944b);
    /* 005c944b: add ecx, 0x6c00 */ {  u32 a = r_ecx; u32 b = 0x6c00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9451: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005c9454: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9459: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 005c9460: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9465:; BB(0x005c9465);
    /* 005c9465: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9467: je 0x5c9497 */ if (fZ) goto L_005c9497;
L_005c9469:; BB(0x005c9469);
    /* 005c9469: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c946f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9471: je 0x5c9497 */ if (fZ) goto L_005c9497;
L_005c9473:; BB(0x005c9473);
    /* 005c9473: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9479: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c947b: je 0x5c9497 */ if (fZ) goto L_005c9497;
L_005c947d:; BB(0x005c947d);
    /* 005c947d: add ecx, 0x8700 */ {  u32 a = r_ecx; u32 b = 0x8700u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9483: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005c9486: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c948b: mov dword ptr [eax + 0x14], 0 */ W32((u32)(r_eax+0x14u), 0x0u);
    /* 005c9492: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9497:; BB(0x005c9497);
    /* 005c9497: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9499: je 0x5c94c9 */ if (fZ) goto L_005c94c9;
L_005c949b:; BB(0x005c949b);
    /* 005c949b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c94a1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94a3: je 0x5c94c9 */ if (fZ) goto L_005c94c9;
L_005c94a5:; BB(0x005c94a5);
    /* 005c94a5: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c94ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94ad: je 0x5c94c9 */ if (fZ) goto L_005c94c9;
L_005c94af:; BB(0x005c94af);
    /* 005c94af: add ecx, 0xa200 */ {  u32 a = r_ecx; u32 b = 0xa200u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c94b5: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 005c94b8: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c94bd: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 005c94c4: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c94c9:; BB(0x005c94c9);
    /* 005c94c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94cb: je 0x5c94fb */ if (fZ) goto L_005c94fb;
L_005c94cd:; BB(0x005c94cd);
    /* 005c94cd: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c94d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94d5: je 0x5c94fb */ if (fZ) goto L_005c94fb;
L_005c94d7:; BB(0x005c94d7);
    /* 005c94d7: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c94dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94df: je 0x5c94fb */ if (fZ) goto L_005c94fb;
L_005c94e1:; BB(0x005c94e1);
    /* 005c94e1: add ecx, 0xbd00 */ {  u32 a = r_ecx; u32 b = 0xbd00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c94e7: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 005c94ea: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c94ef: mov dword ptr [eax + 0x1c], 0 */ W32((u32)(r_eax+0x1cu), 0x0u);
    /* 005c94f6: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c94fb:; BB(0x005c94fb);
    /* 005c94fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c94fd: je 0x5c952d */ if (fZ) goto L_005c952d;
L_005c94ff:; BB(0x005c94ff);
    /* 005c94ff: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9505: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9507: je 0x5c952d */ if (fZ) goto L_005c952d;
L_005c9509:; BB(0x005c9509);
    /* 005c9509: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c950f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9511: je 0x5c952d */ if (fZ) goto L_005c952d;
L_005c9513:; BB(0x005c9513);
    /* 005c9513: add ecx, 0xd800 */ {  u32 a = r_ecx; u32 b = 0xd800u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9519: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 005c951c: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9521: mov dword ptr [eax + 0x20], 0 */ W32((u32)(r_eax+0x20u), 0x0u);
    /* 005c9528: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c952d:; BB(0x005c952d);
    /* 005c952d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c952f: je 0x5c955f */ if (fZ) goto L_005c955f;
L_005c9531:; BB(0x005c9531);
    /* 005c9531: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9537: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9539: je 0x5c955f */ if (fZ) goto L_005c955f;
L_005c953b:; BB(0x005c953b);
    /* 005c953b: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9541: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9543: je 0x5c955f */ if (fZ) goto L_005c955f;
L_005c9545:; BB(0x005c9545);
    /* 005c9545: add ecx, 0xf300 */ {  u32 a = r_ecx; u32 b = 0xf300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c954b: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005c954e: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9553: mov dword ptr [eax + 0x24], 0 */ W32((u32)(r_eax+0x24u), 0x0u);
    /* 005c955a: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c955f:; BB(0x005c955f);
    /* 005c955f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9561: je 0x5c9591 */ if (fZ) goto L_005c9591;
L_005c9563:; BB(0x005c9563);
    /* 005c9563: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9569: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c956b: je 0x5c9591 */ if (fZ) goto L_005c9591;
L_005c956d:; BB(0x005c956d);
    /* 005c956d: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9575: je 0x5c9591 */ if (fZ) goto L_005c9591;
L_005c9577:; BB(0x005c9577);
    /* 005c9577: add ecx, 0x10e00 */ {  u32 a = r_ecx; u32 b = 0x10e00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c957d: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005c9580: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c9585: mov dword ptr [eax + 0x28], 0 */ W32((u32)(r_eax+0x28u), 0x0u);
    /* 005c958c: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9591:; BB(0x005c9591);
    /* 005c9591: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9593: je 0x5c95c3 */ if (fZ) goto L_005c95c3;
L_005c9595:; BB(0x005c9595);
    /* 005c9595: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c959b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c959d: je 0x5c95c3 */ if (fZ) goto L_005c95c3;
L_005c959f:; BB(0x005c959f);
    /* 005c959f: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c95a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95a7: je 0x5c95c3 */ if (fZ) goto L_005c95c3;
L_005c95a9:; BB(0x005c95a9);
    /* 005c95a9: add ecx, 0x12900 */ {  u32 a = r_ecx; u32 b = 0x12900u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c95af: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005c95b2: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c95b7: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 005c95be: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c95c3:; BB(0x005c95c3);
    /* 005c95c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95c5: je 0x5c95f5 */ if (fZ) goto L_005c95f5;
L_005c95c7:; BB(0x005c95c7);
    /* 005c95c7: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c95cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95cf: je 0x5c95f5 */ if (fZ) goto L_005c95f5;
L_005c95d1:; BB(0x005c95d1);
    /* 005c95d1: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c95d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95d9: je 0x5c95f5 */ if (fZ) goto L_005c95f5;
L_005c95db:; BB(0x005c95db);
    /* 005c95db: add ecx, 0x14400 */ {  u32 a = r_ecx; u32 b = 0x14400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c95e1: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005c95e4: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c95e9: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 005c95f0: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c95f5:; BB(0x005c95f5);
    /* 005c95f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c95f7: je 0x5c9627 */ if (fZ) goto L_005c9627;
L_005c95f9:; BB(0x005c95f9);
    /* 005c95f9: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c95ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9601: je 0x5c9627 */ if (fZ) goto L_005c9627;
L_005c9603:; BB(0x005c9603);
    /* 005c9603: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c9609: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c960b: je 0x5c9627 */ if (fZ) goto L_005c9627;
L_005c960d:; BB(0x005c960d);
    /* 005c960d: add ecx, 0x15f00 */ {  u32 a = r_ecx; u32 b = 0x15f00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9613: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 005c9616: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c961b: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 005c9622: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9627:; BB(0x005c9627);
    /* 005c9627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9629: je 0x5c9659 */ if (fZ) goto L_005c9659;
L_005c962b:; BB(0x005c962b);
    /* 005c962b: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9631: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9633: je 0x5c9659 */ if (fZ) goto L_005c9659;
L_005c9635:; BB(0x005c9635);
    /* 005c9635: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c963b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c963d: je 0x5c9659 */ if (fZ) goto L_005c9659;
L_005c963f:; BB(0x005c963f);
    /* 005c963f: add ecx, 0x17a00 */ {  u32 a = r_ecx; u32 b = 0x17a00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9645: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005c9648: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c964d: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005c9654: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c9659:; BB(0x005c9659);
    /* 005c9659: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c965b: je 0x5c968b */ if (fZ) goto L_005c968b;
L_005c965d:; BB(0x005c965d);
    /* 005c965d: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9663: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9665: je 0x5c968b */ if (fZ) goto L_005c968b;
L_005c9667:; BB(0x005c9667);
    /* 005c9667: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c966d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c966f: je 0x5c968b */ if (fZ) goto L_005c968b;
L_005c9671:; BB(0x005c9671);
    /* 005c9671: add ecx, 0x19500 */ {  u32 a = r_ecx; u32 b = 0x19500u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9677: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 005c967a: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c967f: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005c9686: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c968b:; BB(0x005c968b);
    /* 005c968b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c968d: je 0x5c96bd */ if (fZ) goto L_005c96bd;
L_005c968f:; BB(0x005c968f);
    /* 005c968f: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c9695: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9697: je 0x5c96bd */ if (fZ) goto L_005c96bd;
L_005c9699:; BB(0x005c9699);
    /* 005c9699: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c969f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c96a1: je 0x5c96bd */ if (fZ) goto L_005c96bd;
L_005c96a3:; BB(0x005c96a3);
    /* 005c96a3: add ecx, 0x1b000 */ {  u32 a = r_ecx; u32 b = 0x1b000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c96a9: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 005c96ac: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c96b1: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005c96b8: mov eax, dword ptr [0xa8d8a0] */ r_eax = R32((u32)(0xa8d8a0u));
L_005c96bd:; BB(0x005c96bd);
    /* 005c96bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c96bf: je 0x5c96ea */ if (fZ) goto L_005c96ea;
L_005c96c1:; BB(0x005c96c1);
    /* 005c96c1: mov ecx, dword ptr [0xa8d8a4] */ r_ecx = R32((u32)(0xa8d8a4u));
    /* 005c96c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c96c9: je 0x5c96ea */ if (fZ) goto L_005c96ea;
L_005c96cb:; BB(0x005c96cb);
    /* 005c96cb: mov edx, dword ptr [0xa8d89c] */ r_edx = R32((u32)(0xa8d89cu));
    /* 005c96d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c96d3: je 0x5c96ea */ if (fZ) goto L_005c96ea;
L_005c96d5:; BB(0x005c96d5);
    /* 005c96d5: add ecx, 0x1cb00 */ {  u32 a = r_ecx; u32 b = 0x1cb00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c96db: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 005c96de: mov eax, dword ptr [0xa8d89c] */ r_eax = R32((u32)(0xa8d89cu));
    /* 005c96e3: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_005c96ea:; BB(0x005c96ea);
    /* 005c96ea: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005c96ed: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005c96f0: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005c96f3: mov dword ptr [0xa8d894], 0 */ W32((u32)(0xa8d894u), 0x0u);
    /* 005c96fd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005c9700: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005c9707: mov esp, ebp */ r_esp = r_ebp;
    /* 005c9709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c970a: ret  */ FN_RET(0x005c9130); r_esp += 4; return;
L_005c970b:; BB(0x005c970b);
    /* 005c970b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c970d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005c9710: jmp 0x5c91b6 */ goto L_005c91b6;
}

void f_005c9718(void) /* sub_5C9718 */
{
    FN_ENTER(0x005c9718);
    /* 005c9718: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005c971c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c971e: je 0x5c9739 */ if (fZ) goto L_005c9739;
L_005c9720:; BB(0x005c9720);
    /* 005c9720: movzx eax, byte ptr [edx + 1] */ r_eax = (u32)R8((u32)(r_edx+0x1u));
    /* 005c9724: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c9727: jae 0x5c9739 */ if (!fC) goto L_005c9739;
L_005c9729:; BB(0x005c9729);
    /* 005c9729: mov eax, dword ptr [eax*4 + 0x9c2120] */ r_eax = R32((u32)(r_eax*4+0x9c2120u));
    /* 005c9730: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9732: je 0x5c9739 */ if (fZ) goto L_005c9739;
L_005c9734:; BB(0x005c9734);
    /* 005c9734: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9735: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5c9737u); call_ind(t); }
    /* 005c9737: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9738: ret  */ FN_RET(0x005c9718); r_esp += 4; return;
L_005c9739:; BB(0x005c9739);
    /* 005c9739: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c973b: ret  */ FN_RET(0x005c9718); r_esp += 4; return;
}

void f_005c973c(void) /* sub_5C973C */
{
    FN_ENTER(0x005c973c);
    /* 005c973c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c973d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c973e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c973f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9740: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9743: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
    /* 005c9747: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9749: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c974f:; BB(0x005c974f);
    /* 005c974f: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9755: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c975au); f_0068d5a8();
    /* 005c975a: mov edi, eax */ r_edi = r_eax;
    /* 005c975c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9762: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c9767u); f_0068d5a8();
    /* 005c9767: mov esi, eax */ r_esi = r_eax;
    /* 005c9769: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c976c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c976e: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c9774:; BB(0x005c9774);
    /* 005c9774: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9776: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c977c:; BB(0x005c977c);
    /* 005c977c: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 005c9782: mov eax, ebx */ r_eax = r_ebx;
    /* 005c9784: call 0x5c9860 */ r_esp -= 4; W32(r_esp, 0x5c9789u); f_005c9860();
    /* 005c9789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c978b: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c9791:; BB(0x005c9791);
    /* 005c9791: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 005c9797: cmp edx, dword ptr [esi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c979d: jne 0x5c97b1 */ if (!fZ) goto L_005c97b1;
L_005c979f:; BB(0x005c979f);
    /* 005c979f: mov edx, dword ptr [0xa9c4dc] */ r_edx = R32((u32)(0xa9c4dcu));
    /* 005c97a5: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c97ab: jne 0x5c9853 */ if (!fZ) goto L_005c9853;
L_005c97b1:; BB(0x005c97b1);
    /* 005c97b1: movsx edx, word ptr [ebp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2cu));
    /* 005c97b5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c97b8: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c97be:; BB(0x005c97be);
    /* 005c97be: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 005c97c4: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005c97c7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c97c9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005c97cc: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c97ce: movzx ecx, word ptr [esi + edi + 4] */ r_ecx = (u32)R16((u32)(r_esi+r_edi+0x4u));
    /* 005c97d3: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c97d9: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c97db:; BB(0x005c97db);
    /* 005c97db: mov eax, dword ptr [ebp + 0x378] */ r_eax = R32((u32)(r_ebp+0x378u));
    /* 005c97e1: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 005c97e4: mov byte ptr [esp + 4], 0x60 */ W8((u32)(r_esp+0x4u), 0x60u);
    /* 005c97e9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005c97eb: mov byte ptr [esp + 5], 6 */ W8((u32)(r_esp+0x5u), 0x6u);
    /* 005c97f0: mov word ptr [esp + 0x16], si */ W16((u32)(r_esp+0x16u), (u16)r_esi);
    /* 005c97f5: mov byte ptr [esp + 8], bl */ W8((u32)(r_esp+0x8u), (u8)r_ebx);
    /* 005c97f9: movzx ebx, word ptr [ebp + 0x28] */ r_ebx = (u32)R16((u32)(r_ebp+0x28u));
    /* 005c97fd: mov byte ptr [esp + 9], al */ W8((u32)(r_esp+0x9u), (u8)r_eax);
    /* 005c9801: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 005c9806: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 005c9809: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c980d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005c9811: mov word ptr [esp + 0x14], bx */ W16((u32)(r_esp+0x14u), (u16)r_ebx);
    /* 005c9816: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5c981bu); f_00807ac0();
    /* 005c981b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005c981f: mov dword ptr [esp + 0x20], 0x447a0000 */ W32((u32)(r_esp+0x20u), 0x447a0000u);
    /* 005c9827: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 005c982b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005c982f: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005c9833: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 005c9837: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 005c983b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c983d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005c983e: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x5c9843u); f_00780630();
    /* 005c9843: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9846: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9848: je 0x5c9853 */ if (fZ) goto L_005c9853;
L_005c984a:; BB(0x005c984a);
    /* 005c984a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005c984e: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x5c9853u); f_00800518();
L_005c9853:; BB(0x005c9853);
    /* 005c9853: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9856: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9857: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9859: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c985a: ret  */ FN_RET(0x005c973c); r_esp += 4; return;
}

void f_005c9860(void) /* sub_5C9860 */
{
    FN_ENTER(0x005c9860);
    /* 005c9860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c9862: jl 0x5c9869 */ if ((fS!=fO)) goto L_005c9869;
L_005c9864:; BB(0x005c9864);
    /* 005c9864: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c9867: jl 0x5c986c */ if ((fS!=fO)) goto L_005c986c;
L_005c9869:; BB(0x005c9869);
    /* 005c9869: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c986b: ret  */ FN_RET(0x005c9860); r_esp += 4; return;
L_005c986c:; BB(0x005c986c);
    /* 005c986c: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9871: ret  */ FN_RET(0x005c9860); r_esp += 4; return;
}

void f_005c9874(void) /* sub_5C9874 */
{
    FN_ENTER(0x005c9874);
    /* 005c9874: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9875: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9876: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9877: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c987a: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 005c987e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9880: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c9886:; BB(0x005c9886);
    /* 005c9886: push dword ptr [0xa9c4dc] */ { u32 v = R32((u32)(0xa9c4dcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005c988c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c9891u); f_0068d5a8();
    /* 005c9891: mov edi, eax */ r_edi = r_eax;
    /* 005c9893: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9899: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c989eu); f_0068d5a8();
    /* 005c989e: mov ebp, eax */ r_ebp = r_eax;
    /* 005c98a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c98a3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98a5: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c98ab:; BB(0x005c98ab);
    /* 005c98ab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98ad: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c98b3:; BB(0x005c98b3);
    /* 005c98b3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5c98b8u); f_00807ac0();
    /* 005c98b8: call 0x5c9984 */ r_esp -= 4; W32(r_esp, 0x5c98bdu); f_005c9984();
    /* 005c98bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98bf: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c98c5:; BB(0x005c98c5);
    /* 005c98c5: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 005c98cb: cmp edx, dword ptr [ebp + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98d1: jne 0x5c98e4 */ if (!fZ) goto L_005c98e4;
L_005c98d3:; BB(0x005c98d3);
    /* 005c98d3: mov eax, dword ptr [0xa9c4dc] */ r_eax = R32((u32)(0xa9c4dcu));
    /* 005c98d8: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98de: jne 0x5c9979 */ if (!fZ) goto L_005c9979;
L_005c98e4:; BB(0x005c98e4);
    /* 005c98e4: movsx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cu));
    /* 005c98e8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c98eb: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c98f1:; BB(0x005c98f1);
    /* 005c98f1: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 005c98f7: movzx ecx, word ptr [edx + eax*4 + 2] */ r_ecx = (u32)R16((u32)(r_edx+r_eax*4+0x2u));
    /* 005c98fc: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9902: je 0x5c9979 */ if (fZ) goto L_005c9979;
L_005c9904:; BB(0x005c9904);
    /* 005c9904: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005c990a: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 005c990d: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 005c9910: movzx edi, word ptr [ebx + 0x28] */ r_edi = (u32)R16((u32)(r_ebx+0x28u));
    /* 005c9914: mov byte ptr [esp + 8], dl */ W8((u32)(r_esp+0x8u), (u8)r_edx);
    /* 005c9918: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 005c991c: mov byte ptr [esp + 4], 0xa2 */ W8((u32)(r_esp+0x4u), 0xa2u);
    /* 005c9921: mov byte ptr [esp + 5], 0xa */ W8((u32)(r_esp+0x5u), 0xau);
    /* 005c9926: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005c992a: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 005c992e: mov byte ptr [esp + 9], 0x30 */ W8((u32)(r_esp+0x9u), 0x30u);
    /* 005c9933: mov word ptr [esp + 0x14], di */ W16((u32)(r_esp+0x14u), (u16)r_edi);
    /* 005c9938: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 005c993d: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 005c9942: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5c9947u); f_00807ac0();
    /* 005c9947: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 005c994b: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 005c994f: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 005c9952: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005c9956: mov edx, dword ptr [ebx + 0x84] */ r_edx = R32((u32)(r_ebx+0x84u));
    /* 005c995c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 005c9960: mov ebp, dword ptr [ebx + 0x88] */ r_ebp = R32((u32)(r_ebx+0x88u));
    /* 005c9966: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 005c996a: mov ebx, dword ptr [ebx + 0x8c] */ r_ebx = R32((u32)(r_ebx+0x8cu));
    /* 005c9970: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 005c9974: call 0x800518 */ r_esp -= 4; W32(r_esp, 0x5c9979u); f_00800518();
L_005c9979:; BB(0x005c9979);
    /* 005c9979: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c997c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c997d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c997e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c997f: ret  */ FN_RET(0x005c9874); r_esp += 4; return;
}

void f_005c9984(void) /* sub_5C9984 */
{
    FN_ENTER(0x005c9984);
    /* 005c9984: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c9986: jl 0x5c998d */ if ((fS!=fO)) goto L_005c998d;
L_005c9988:; BB(0x005c9988);
    /* 005c9988: cmp eax, 0x2f */ {  u32 a = r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c998b: jl 0x5c9990 */ if ((fS!=fO)) goto L_005c9990;
L_005c998d:; BB(0x005c998d);
    /* 005c998d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c998f: ret  */ FN_RET(0x005c9984); r_esp += 4; return;
L_005c9990:; BB(0x005c9990);
    /* 005c9990: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9995: ret  */ FN_RET(0x005c9984); r_esp += 4; return;
}

void f_005c9998(void) /* sub_5C9998 */
{
    FN_ENTER(0x005c9998);
    /* 005c9998: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9999: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c999a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c999b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c999c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005c99a0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c99a2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c99a4: je 0x5c9a10 */ if (fZ) goto L_005c9a10;
L_005c99a6:; BB(0x005c99a6);
    /* 005c99a6: mov bl, byte ptr [0xaafca0] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(0xaafca0u))) & 0xffu);
    /* 005c99ac: call 0x5c9a18 */ r_esp -= 4; W32(r_esp, 0x5c99b1u); f_005c9a18();
    /* 005c99b1: cmp bl, byte ptr [esi] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 005c99b3: jne 0x5c99ed */ if (!fZ) goto L_005c99ed;
L_005c99b5:; BB(0x005c99b5);
    /* 005c99b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c99b8: je 0x5c99ed */ if (fZ) goto L_005c99ed;
L_005c99ba:; BB(0x005c99ba);
    /* 005c99ba: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 005c99bd: call 0x5c9a44 */ r_esp -= 4; W32(r_esp, 0x5c99c2u); f_005c9a44();
    /* 005c99c2: mov ebp, eax */ r_ebp = r_eax;
    /* 005c99c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c99c6: je 0x5c99ed */ if (fZ) goto L_005c99ed;
L_005c99c8:; BB(0x005c99c8);
    /* 005c99c8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c99ca: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005c99cd: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 005c99d0: mov ebx, dword ptr [esi + 8] */ r_ebx = R32((u32)(r_esi+0x8u));
    /* 005c99d3: mov dword ptr [ebp + 0x40], ebx */ W32((u32)(r_ebp+0x40u), r_ebx);
    /* 005c99d6: movzx edx, word ptr [esi + 0xc] */ r_edx = (u32)R16((u32)(r_esi+0xcu));
    /* 005c99da: mov word ptr [ebp + 0x28], dx */ W16((u32)(r_ebp+0x28u), (u16)r_edx);
    /* 005c99de: movsx ebx, byte ptr [esi] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 005c99e1: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005c99e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c99e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c99e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c99e8: call 0x5c4874 */ r_esp -= 4; W32(r_esp, 0x5c99edu); f_005c4874();
L_005c99ed:; BB(0x005c99ed);
    /* 005c99ed: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005c99f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c99f3: jne 0x5c9a10 */ if (!fZ) goto L_005c9a10;
L_005c99f5:; BB(0x005c99f5);
    /* 005c99f5: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 005c99f8: movsx ebx, word ptr [esi + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 005c99fc: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 005c99ff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a00: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a01: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9a04: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9a07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a08: call 0x5e3ae4 */ r_esp -= 4; W32(r_esp, 0x5c9a0du); f_005e3ae4();
    /* 005c9a0d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005c9a10:; BB(0x005c9a10);
    /* 005c9a10: mov eax, ebp */ r_eax = r_ebp;
    /* 005c9a12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9a13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9a14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9a15: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9a16: ret  */ FN_RET(0x005c9998); r_esp += 4; return;
}

void f_005c9a18(void) /* sub_5C9A18 */
{
    FN_ENTER(0x005c9a18);
    /* 005c9a18: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9a1e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5c9a23u); f_0068d5a8();
    /* 005c9a23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005c9a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9a26: je 0x5c9a36 */ if (fZ) goto L_005c9a36;
L_005c9a28:; BB(0x005c9a28);
    /* 005c9a28: mov eax, dword ptr [eax + 0x3f0] */ r_eax = R32((u32)(r_eax+0x3f0u));
    /* 005c9a2e: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005c9a34: jne 0x5c9a39 */ if (!fZ) goto L_005c9a39;
L_005c9a36:; BB(0x005c9a36);
    /* 005c9a36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c9a38: ret  */ FN_RET(0x005c9a18); r_esp += 4; return;
L_005c9a39:; BB(0x005c9a39);
    /* 005c9a39: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9a3e: ret  */ FN_RET(0x005c9a18); r_esp += 4; return;
}

void f_005c9a40(void) /* sub_5C9A40 */
{
    FN_ENTER(0x005c9a40);
    /* 005c9a40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c9a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a45: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9a48: mov ebp, eax */ r_ebp = r_eax;
    /* 005c9a4a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9a4c: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9a52:; BB(0x005c9a52);
    /* 005c9a52: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 005c9a56: mov byte ptr [esp + 8], dl */ W8((u32)(r_esp+0x8u), (u8)r_edx);
    /* 005c9a5a: movzx ecx, byte ptr [ebp + 1] */ r_ecx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9a5e: mov byte ptr [esp + 9], cl */ W8((u32)(r_esp+0x9u), (u8)r_ecx);
    /* 005c9a62: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c9a66: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 005c9a6a: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x5c9a6fu); f_0077e4ec();
    /* 005c9a6f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005c9a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a74: mov ecx, eax */ r_ecx = r_eax;
    /* 005c9a76: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x5c9a7bu); f_0077e57c();
    /* 005c9a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9a7d: je 0x5c9a9b */ if (fZ) goto L_005c9a9b;
L_005c9a7f:; BB(0x005c9a7f);
    /* 005c9a7f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005c9a83: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005c9a86: mov eax, ebp */ r_eax = r_ebp;
    /* 005c9a88: call 0x5c9b08 */ r_esp -= 4; W32(r_esp, 0x5c9a8du); f_005c9b08();
    /* 005c9a8d: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005c9a91: call 0x5c9a44 */ r_esp -= 4; W32(r_esp, 0x5c9a96u); f_005c9a44();
    /* 005c9a96: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9a9a: ret  */ FN_RET(0x005c9a40); r_esp += 4; return;
L_005c9a9b:; BB(0x005c9a9b);
    /* 005c9a9b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9a9f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005c9aa2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c9aa6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005c9aa9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005c9aad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c9ab0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005c9ab4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c9ab7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005c9abb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c9abe: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005c9ac2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c9ac7u); f_0061cdb0();
    /* 005c9ac7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9acb: call 0x5d66c0 */ r_esp -= 4; W32(r_esp, 0x5c9ad0u); f_005d66c0();
    /* 005c9ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ad2: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9ad4:; BB(0x005c9ad4);
    /* 005c9ad4: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005c9ad8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c9adb: jae 0x5c9afd */ if (!fC) goto L_005c9afd;
L_005c9add:; BB(0x005c9add);
    /* 005c9add: mov ebp, dword ptr [eax*4 + 0x9c2130] */ r_ebp = R32((u32)(r_eax*4+0x9c2130u));
    /* 005c9ae4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ae6: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9ae8:; BB(0x005c9ae8);
    /* 005c9ae8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9aec: call 0x5e3b80 */ r_esp -= 4; W32(r_esp, 0x5c9af1u); f_005e3b80();
    /* 005c9af1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005c9af5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9af6: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x5c9af8u); call_ind(t); }
    /* 005c9af8: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9afc: ret  */ FN_RET(0x005c9a40); r_esp += 4; return;
L_005c9afd:; BB(0x005c9afd);
    /* 005c9afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9aff: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9b02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9b03: ret  */ FN_RET(0x005c9a40); r_esp += 4; return;
}

void f_005c9a44(void) /* sub_5C9A44 */
{
    FN_ENTER(0x005c9a44);
    /* 005c9a44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a45: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9a48: mov ebp, eax */ r_ebp = r_eax;
    /* 005c9a4a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9a4c: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9a52:; BB(0x005c9a52);
    /* 005c9a52: movzx edx, byte ptr [ebp] */ r_edx = (u32)R8((u32)(r_ebp));
    /* 005c9a56: mov byte ptr [esp + 8], dl */ W8((u32)(r_esp+0x8u), (u8)r_edx);
    /* 005c9a5a: movzx ecx, byte ptr [ebp + 1] */ r_ecx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9a5e: mov byte ptr [esp + 9], cl */ W8((u32)(r_esp+0x9u), (u8)r_ecx);
    /* 005c9a62: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c9a66: mov byte ptr [esp + 0xa], dl */ W8((u32)(r_esp+0xau), (u8)r_edx);
    /* 005c9a6a: call 0x77e4ec */ r_esp -= 4; W32(r_esp, 0x5c9a6fu); f_0077e4ec();
    /* 005c9a6f: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 005c9a73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9a74: mov ecx, eax */ r_ecx = r_eax;
    /* 005c9a76: call 0x77e57c */ r_esp -= 4; W32(r_esp, 0x5c9a7bu); f_0077e57c();
    /* 005c9a7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9a7d: je 0x5c9a9b */ if (fZ) goto L_005c9a9b;
L_005c9a7f:; BB(0x005c9a7f);
    /* 005c9a7f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005c9a83: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005c9a86: mov eax, ebp */ r_eax = r_ebp;
    /* 005c9a88: call 0x5c9b08 */ r_esp -= 4; W32(r_esp, 0x5c9a8du); f_005c9b08();
    /* 005c9a8d: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 005c9a91: call 0x5c9a44 */ r_esp -= 4; W32(r_esp, 0x5c9a96u); f_005c9a44();
    /* 005c9a96: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9a99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9a9a: ret  */ FN_RET(0x005c9a44); r_esp += 4; return;
L_005c9a9b:; BB(0x005c9a9b);
    /* 005c9a9b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9a9f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005c9aa2: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c9aa6: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 005c9aa9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005c9aad: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005c9ab0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005c9ab4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005c9ab7: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005c9abb: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005c9abe: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005c9ac2: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5c9ac7u); f_0061cdb0();
    /* 005c9ac7: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9acb: call 0x5d66c0 */ r_esp -= 4; W32(r_esp, 0x5c9ad0u); f_005d66c0();
    /* 005c9ad0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ad2: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9ad4:; BB(0x005c9ad4);
    /* 005c9ad4: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005c9ad8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c9adb: jae 0x5c9afd */ if (!fC) goto L_005c9afd;
L_005c9add:; BB(0x005c9add);
    /* 005c9add: mov ebp, dword ptr [eax*4 + 0x9c2130] */ r_ebp = R32((u32)(r_eax*4+0x9c2130u));
    /* 005c9ae4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ae6: je 0x5c9afd */ if (fZ) goto L_005c9afd;
L_005c9ae8:; BB(0x005c9ae8);
    /* 005c9ae8: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9aec: call 0x5e3b80 */ r_esp -= 4; W32(r_esp, 0x5c9af1u); f_005e3b80();
    /* 005c9af1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005c9af5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9af6: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x5c9af8u); call_ind(t); }
    /* 005c9af8: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9afb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9afc: ret  */ FN_RET(0x005c9a44); r_esp += 4; return;
L_005c9afd:; BB(0x005c9afd);
    /* 005c9afd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9aff: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9b02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9b03: ret  */ FN_RET(0x005c9a44); r_esp += 4; return;
}

void f_005c9b04(void) /* sub_5C9B04 */
{
    FN_ENTER(0x005c9b04);
    /* 005c9b04: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c9b08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b0a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9b0d: mov edi, eax */ r_edi = r_eax;
    /* 005c9b0f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005c9b13: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c9b16: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9b1bu); f_005d6a3c();
    /* 005c9b1b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 005c9b1e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c9b22: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 005c9b25: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 005c9b28: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 005c9b2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b2d: je 0x5c9b76 */ if (fZ) goto L_005c9b76;
L_005c9b2f:; BB(0x005c9b2f);
    /* 005c9b2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b32: je 0x5c9b45 */ if (fZ) goto L_005c9b45;
L_005c9b34:; BB(0x005c9b34);
    /* 005c9b34: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b37: je 0x5c9b4d */ if (fZ) goto L_005c9b4d;
L_005c9b39:; BB(0x005c9b39);
    /* 005c9b39: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b3c: jne 0x5c9b4d */ if (!fZ) goto L_005c9b4d;
L_005c9b3e:; BB(0x005c9b3e);
    /* 005c9b3e: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 005c9b43: jmp 0x5c9b4d */ goto L_005c9b4d;
L_005c9b45:; BB(0x005c9b45);
    /* 005c9b45: movzx eax, byte ptr [edi + 1] */ r_eax = (u32)R8((u32)(r_edi+0x1u));
    /* 005c9b49: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
L_005c9b4d:; BB(0x005c9b4d);
    /* 005c9b4d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005c9b50: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c9b54: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c9b58: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005c9b5c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 005c9b5e: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 005c9b61: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 005c9b64: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c9b68: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 005c9b6b: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 005c9b6e: mov eax, esi */ r_eax = r_esi;
    /* 005c9b70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9b73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9b74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9b75: ret  */ FN_RET(0x005c9b04); r_esp += 4; return;
L_005c9b76:; BB(0x005c9b76);
    /* 005c9b76: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 005c9b7b: jmp 0x5c9b4d */ goto L_005c9b4d;
}

void f_005c9b08(void) /* sub_5C9B08 */
{
    FN_ENTER(0x005c9b08);
    /* 005c9b08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9b0a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9b0d: mov edi, eax */ r_edi = r_eax;
    /* 005c9b0f: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005c9b13: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c9b16: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9b1bu); f_005d6a3c();
    /* 005c9b1b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 005c9b1e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005c9b22: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 005c9b25: mov byte ptr [esp], cl */ W8((u32)(r_esp), (u8)r_ecx);
    /* 005c9b28: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 005c9b2b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b2d: je 0x5c9b76 */ if (fZ) goto L_005c9b76;
L_005c9b2f:; BB(0x005c9b2f);
    /* 005c9b2f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b32: je 0x5c9b45 */ if (fZ) goto L_005c9b45;
L_005c9b34:; BB(0x005c9b34);
    /* 005c9b34: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b37: je 0x5c9b4d */ if (fZ) goto L_005c9b4d;
L_005c9b39:; BB(0x005c9b39);
    /* 005c9b39: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b3c: jne 0x5c9b4d */ if (!fZ) goto L_005c9b4d;
L_005c9b3e:; BB(0x005c9b3e);
    /* 005c9b3e: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 005c9b43: jmp 0x5c9b4d */ goto L_005c9b4d;
L_005c9b45:; BB(0x005c9b45);
    /* 005c9b45: movzx eax, byte ptr [edi + 1] */ r_eax = (u32)R8((u32)(r_edi+0x1u));
    /* 005c9b49: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
L_005c9b4d:; BB(0x005c9b4d);
    /* 005c9b4d: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005c9b50: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c9b54: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005c9b58: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005c9b5c: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 005c9b5e: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 005c9b61: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 005c9b64: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005c9b68: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 005c9b6b: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 005c9b6e: mov eax, esi */ r_eax = r_esi;
    /* 005c9b70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9b73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9b74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9b75: ret  */ FN_RET(0x005c9b08); r_esp += 4; return;
L_005c9b76:; BB(0x005c9b76);
    /* 005c9b76: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 005c9b7b: jmp 0x5c9b4d */ goto L_005c9b4d;
}

void f_005c9b80(void) /* sub_5C9B80 */
{
    FN_ENTER(0x005c9b80);
    /* 005c9b80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005c9b84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b86: je 0x5c9b8e */ if (fZ) goto L_005c9b8e;
L_005c9b88:; BB(0x005c9b88);
    /* 005c9b88: call 0x5d24dc */ r_esp -= 4; W32(r_esp, 0x5c9b8du); f_005d24dc();
    /* 005c9b8d: ret  */ FN_RET(0x005c9b80); r_esp += 4; return;
L_005c9b8e:; BB(0x005c9b8e);
    /* 005c9b8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c9b90: ret  */ FN_RET(0x005c9b80); r_esp += 4; return;
}

void f_005c9b94(void) /* sub_5C9B94 */
{
    FN_ENTER(0x005c9b94);
    /* 005c9b94: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9b97: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005c9b9b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9b9d: je 0x5c9bb4 */ if (fZ) goto L_005c9bb4;
L_005c9b9f:; BB(0x005c9b9f);
    /* 005c9b9f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005c9ba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9ba3: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c9ba8u); f_005c425c();
    /* 005c9ba8: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005c9bab: call 0x5d24dc */ r_esp -= 4; W32(r_esp, 0x5c9bb0u); f_005d24dc();
    /* 005c9bb0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9bb3: ret  */ FN_RET(0x005c9b94); r_esp += 4; return;
L_005c9bb4:; BB(0x005c9bb4);
    /* 005c9bb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9bb6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9bb9: ret  */ FN_RET(0x005c9b94); r_esp += 4; return;
}

void f_005c9bbc(void) /* sub_5C9BBC */
{
    FN_ENTER(0x005c9bbc);
    /* 005c9bbc: mov ecx, dword ptr [0xa8d8ac] */ r_ecx = R32((u32)(0xa8d8acu));
    /* 005c9bc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9bc4: je 0x5c9bcd */ if (fZ) goto L_005c9bcd;
L_005c9bc6:; BB(0x005c9bc6);
    /* 005c9bc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9bc8: call 0x5cab08 */ r_esp -= 4; W32(r_esp, 0x5c9bcdu); f_005cab08();
L_005c9bcd:; BB(0x005c9bcd);
    /* 005c9bcd: mov dword ptr [0xa8d8ac], 0 */ W32((u32)(0xa8d8acu), 0x0u);
    /* 005c9bd7: call 0x5d7740 */ r_esp -= 4; W32(r_esp, 0x5c9bdcu); f_005d7740();
    /* 005c9bdc: call 0x5c743c */ r_esp -= 4; W32(r_esp, 0x5c9be1u); f_005c743c();
    /* 005c9be1: ret  */ FN_RET(0x005c9bbc); r_esp += 4; return;
}

void f_005c9be4(void) /* sub_5C9BE4 */
{
    FN_ENTER(0x005c9be4);
    /* 005c9be4: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005c9be8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005c9bea: je 0x5c9bf5 */ if (fZ) goto L_005c9bf5;
L_005c9bec:; BB(0x005c9bec);
    /* 005c9bec: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005c9bf0: call 0x5d2aac */ r_esp -= 4; W32(r_esp, 0x5c9bf5u); f_005d2aac();
L_005c9bf5:; BB(0x005c9bf5);
    /* 005c9bf5: ret  */ FN_RET(0x005c9be4); r_esp += 4; return;
}

void f_005c9bf8(void) /* sub_5C9BF8 */
{
    FN_ENTER(0x005c9bf8);
    /* 005c9bf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9bf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9bfa: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9bfd: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005c9c01: mov ecx, edi */ r_ecx = r_edi;
    /* 005c9c03: call 0x5d281c */ r_esp -= 4; W32(r_esp, 0x5c9c08u); f_005d281c();
    /* 005c9c08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c0a: jne 0x5c9c32 */ if (!fZ) goto L_005c9c32;
L_005c9c0c:; BB(0x005c9c0c);
    /* 005c9c0c: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 005c9c0f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9c11: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c14: je 0x5c9c41 */ if (fZ) goto L_005c9c41;
L_005c9c16:; BB(0x005c9c16);
    /* 005c9c16: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005c9c1a: mov edx, edi */ r_edx = r_edi;
    /* 005c9c1c: call 0x5c9cb4 */ r_esp -= 4; W32(r_esp, 0x5c9c21u); f_005c9cb4();
    /* 005c9c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c23: je 0x5c9c3d */ if (fZ) goto L_005c9c3d;
L_005c9c25:; BB(0x005c9c25);
    /* 005c9c25: mov ebp, 1 */ r_ebp = 0x1u;
L_005c9c2a:; BB(0x005c9c2a);
    /* 005c9c2a: mov eax, ebp */ r_eax = r_ebp;
    /* 005c9c2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9c2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9c30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9c31: ret  */ FN_RET(0x005c9bf8); r_esp += 4; return;
L_005c9c32:; BB(0x005c9c32);
    /* 005c9c32: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9c37: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9c3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9c3c: ret  */ FN_RET(0x005c9bf8); r_esp += 4; return;
L_005c9c3d:; BB(0x005c9c3d);
    /* 005c9c3d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9c3f: jmp 0x5c9c2a */ goto L_005c9c2a;
L_005c9c41:; BB(0x005c9c41);
    /* 005c9c41: mov ecx, edi */ r_ecx = r_edi;
    /* 005c9c43: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5c9c48u); f_005d2890();
    /* 005c9c48: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 005c9c4b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9c4d: je 0x5c9c5f */ if (fZ) goto L_005c9c5f;
L_005c9c4f:; BB(0x005c9c4f);
    /* 005c9c4f: movzx edx, byte ptr [edi + 1] */ r_edx = (u32)R8((u32)(r_edi+0x1u));
    /* 005c9c53: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c56: je 0x5c9c75 */ if (fZ) goto L_005c9c75;
L_005c9c58:; BB(0x005c9c58);
    /* 005c9c58: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005c9c5d: jmp 0x5c9c2a */ goto L_005c9c2a;
L_005c9c5f:; BB(0x005c9c5f);
    /* 005c9c5f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005c9c63: mov edx, edi */ r_edx = r_edi;
    /* 005c9c65: call 0x5c9cb4 */ r_esp -= 4; W32(r_esp, 0x5c9c6au); f_005c9cb4();
    /* 005c9c6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c6c: je 0x5c9ca5 */ if (fZ) goto L_005c9ca5;
L_005c9c6e:; BB(0x005c9c6e);
    /* 005c9c6e: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005c9c73: jmp 0x5c9c2a */ goto L_005c9c2a;
L_005c9c75:; BB(0x005c9c75);
    /* 005c9c75: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c9c79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c7b: je 0x5c9c2a */ if (fZ) goto L_005c9c2a;
L_005c9c7d:; BB(0x005c9c7d);
    /* 005c9c7d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005c9c81: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005c9c83: lea ecx, [edx + 0xdf8] */ r_ecx = (u32)(r_edx+0xdf8u);
    /* 005c9c89: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c9c8eu); f_0069792c();
    /* 005c9c8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9c90: je 0x5c9c2a */ if (fZ) goto L_005c9c2a;
L_005c9c92:; BB(0x005c9c92);
    /* 005c9c92: mov ecx, eax */ r_ecx = r_eax;
    /* 005c9c94: call 0x5db164 */ r_esp -= 4; W32(r_esp, 0x5c9c99u); f_005db164();
    /* 005c9c99: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9c9c: jge 0x5c9c2a */ if ((fS==fO)) goto L_005c9c2a;
L_005c9c9e:; BB(0x005c9c9e);
    /* 005c9c9e: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005c9ca3: jmp 0x5c9c2a */ goto L_005c9c2a;
L_005c9ca5:; BB(0x005c9ca5);
    /* 005c9ca5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9ca7: jmp 0x5c9c2a */ goto L_005c9c2a;
}

void f_005c9cac(void) /* sub_5C9CAC */
{
    FN_ENTER(0x005c9cac);
    /* 005c9cac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c9cb0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005c9cb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb7: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9cba: mov ebp, edx */ r_ebp = r_edx;
    /* 005c9cbc: mov esi, eax */ r_esi = r_eax;
    /* 005c9cbe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c9cc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9cc2: je 0x5c9e34 */ if (fZ) goto L_005c9e34;
L_005c9cc8:; BB(0x005c9cc8);
    /* 005c9cc8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9cca: je 0x5c9e34 */ if (fZ) goto L_005c9e34;
L_005c9cd0:; BB(0x005c9cd0);
    /* 005c9cd0: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 005c9cd4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 005c9cd8: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 005c9cdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9cde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9ce0: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005c9ce6: mov ebp, eax */ r_ebp = r_eax;
    /* 005c9ce8: mov esi, edx */ r_esi = r_edx;
    /* 005c9cea: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
L_005c9cee:; BB(0x005c9cee);
    /* 005c9cee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cef: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 005c9cf3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c9cf8u); f_0069792c();
    /* 005c9cf8: mov ebx, eax */ r_ebx = r_eax;
    /* 005c9cfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cfb: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005c9cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d00: call 0x5e5284 */ r_esp -= 4; W32(r_esp, 0x5c9d05u); f_005e5284();
    /* 005c9d05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d0a: je 0x5c9d11 */ if (fZ) goto L_005c9d11;
L_005c9d0c:; BB(0x005c9d0c);
    /* 005c9d0c: mov edi, ebx */ r_edi = r_ebx;
    /* 005c9d0e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005c9d11:; BB(0x005c9d11);
    /* 005c9d11: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9d14: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9d17: jl 0x5c9cee */ if ((fS!=fO)) goto L_005c9cee;
L_005c9d19:; BB(0x005c9d19);
    /* 005c9d19: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 005c9d1d: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 005c9d21: mov edx, esi */ r_edx = r_esi;
    /* 005c9d23: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 005c9d27: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d2a: je 0x5c9d2e */ if (fZ) goto L_005c9d2e;
L_005c9d2c:; BB(0x005c9d2c);
    /* 005c9d2c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9d2e:; BB(0x005c9d2e);
    /* 005c9d2e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d30: je 0x5c9df9 */ if (fZ) goto L_005c9df9;
L_005c9d36:; BB(0x005c9d36);
    /* 005c9d36: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9d3a: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9d3fu); f_005d6a3c();
    /* 005c9d3f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c9d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d44: mov ecx, edi */ r_ecx = r_edi;
    /* 005c9d46: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c9d4bu); f_005c425c();
    /* 005c9d4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d4d: call 0x5e5284 */ r_esp -= 4; W32(r_esp, 0x5c9d52u); f_005e5284();
    /* 005c9d52: mov edi, eax */ r_edi = r_eax;
    /* 005c9d54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d57: movzx edx, byte ptr [edi + 9] */ r_edx = (u32)R8((u32)(r_edi+0x9u));
    /* 005c9d5b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d61: je 0x5c9da1 */ if (fZ) goto L_005c9da1;
L_005c9d63:; BB(0x005c9d63);
    /* 005c9d63: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 005c9d68: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d6b: je 0x5c9d76 */ if (fZ) goto L_005c9d76;
L_005c9d6d:; BB(0x005c9d6d);
    /* 005c9d6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9d6f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9d73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9d74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9d75: ret  */ FN_RET(0x005c9cac); r_esp += 4; return;
L_005c9d76:; BB(0x005c9d76);
    /* 005c9d76: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005c9d7a: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x5c9d7fu); f_005dc1e0();
    /* 005c9d7f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005c9d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d84: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005c9d88: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x5c9d8du); f_005d4108();
    /* 005c9d8d: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005c9d91: movzx ebp, byte ptr [edi + 9] */ r_ebp = (u32)R8((u32)(r_edi+0x9u));
    /* 005c9d95: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5c9d9au); f_005dbdb8();
    /* 005c9d9a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005c9d9d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9d9f: jl 0x5c9df9 */ if ((fS!=fO)) goto L_005c9df9;
L_005c9da1:; BB(0x005c9da1);
    /* 005c9da1: movzx ebp, byte ptr [edi + 0xa] */ r_ebp = (u32)R8((u32)(r_edi+0xau));
    /* 005c9da5: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dab: je 0x5c9dbf */ if (fZ) goto L_005c9dbf;
L_005c9dad:; BB(0x005c9dad);
    /* 005c9dad: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 005c9db2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9db4: jne 0x5c9df9 */ if (!fZ) goto L_005c9df9;
L_005c9db6:; BB(0x005c9db6);
    /* 005c9db6: movzx edx, byte ptr [esp + 0xf] */ r_edx = (u32)R8((u32)(r_esp+0xfu));
    /* 005c9dbb: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9dbd: jl 0x5c9df9 */ if ((fS!=fO)) goto L_005c9df9;
L_005c9dbf:; BB(0x005c9dbf);
    /* 005c9dbf: movzx ebp, byte ptr [edi + 0xb] */ r_ebp = (u32)R8((u32)(r_edi+0xbu));
    /* 005c9dc3: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dc9: je 0x5c9de2 */ if (fZ) goto L_005c9de2;
L_005c9dcb:; BB(0x005c9dcb);
    /* 005c9dcb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005c9dcd: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9dd0: mov ecx, esi */ r_ecx = r_esi;
    /* 005c9dd2: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5c9dd5u); call_ind(t); }
    /* 005c9dd5: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9dd7: jge 0x5c9de2 */ if ((fS==fO)) goto L_005c9de2;
L_005c9dd9:; BB(0x005c9dd9);
    /* 005c9dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9ddb: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9dde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9ddf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9de0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9de1: ret  */ FN_RET(0x005c9cac); r_esp += 4; return;
L_005c9de2:; BB(0x005c9de2);
    /* 005c9de2: movzx edx, byte ptr [edi + 0xc] */ r_edx = (u32)R8((u32)(r_edi+0xcu));
    /* 005c9de6: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dec: je 0x5c9e02 */ if (fZ) goto L_005c9e02;
L_005c9dee:; BB(0x005c9dee);
    /* 005c9dee: movsx ebp, byte ptr [esi + 0x960] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+0x960u));
    /* 005c9df5: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9df7: je 0x5c9e02 */ if (fZ) goto L_005c9e02;
L_005c9df9:; BB(0x005c9df9);
    /* 005c9df9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9dfb: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9dff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9e00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9e01: ret  */ FN_RET(0x005c9cac); r_esp += 4; return;
L_005c9e02:; BB(0x005c9e02);
    /* 005c9e02: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 005c9e06: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9e0bu); f_005d6a3c();
    /* 005c9e0b: movzx edx, byte ptr [edi + 6] */ r_edx = (u32)R8((u32)(r_edi+0x6u));
    /* 005c9e0f: mov byte ptr [esp + 0x30], dl */ W8((u32)(r_esp+0x30u), (u8)r_edx);
    /* 005c9e13: movzx edx, byte ptr [edi + 7] */ r_edx = (u32)R8((u32)(r_edi+0x7u));
    /* 005c9e17: mov eax, esi */ r_eax = r_esi;
    /* 005c9e19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9e1b: mov byte ptr [esp + 0x31], dl */ W8((u32)(r_esp+0x31u), (u8)r_edx);
    /* 005c9e1f: movzx edx, byte ptr [edi + 8] */ r_edx = (u32)R8((u32)(r_edi+0x8u));
    /* 005c9e23: mov byte ptr [esp + 0x32], dl */ W8((u32)(r_esp+0x32u), (u8)r_edx);
    /* 005c9e27: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005c9e2b: call 0x5c9e4c */ r_esp -= 4; W32(r_esp, 0x5c9e30u); f_005c9e4c();
    /* 005c9e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e32: je 0x5c9df9 */ if (fZ) goto L_005c9df9;
L_005c9e34:; BB(0x005c9e34);
    /* 005c9e34: mov eax, edi */ r_eax = r_edi;
    /* 005c9e36: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9e3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9e3c: ret  */ FN_RET(0x005c9cac); r_esp += 4; return;
}

void f_005c9cb4(void) /* sub_5C9CB4 */
{
    FN_ENTER(0x005c9cb4);
    /* 005c9cb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cb7: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9cba: mov ebp, edx */ r_ebp = r_edx;
    /* 005c9cbc: mov esi, eax */ r_esi = r_eax;
    /* 005c9cbe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c9cc0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9cc2: je 0x5c9e34 */ if (fZ) goto L_005c9e34;
L_005c9cc8:; BB(0x005c9cc8);
    /* 005c9cc8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9cca: je 0x5c9e34 */ if (fZ) goto L_005c9e34;
L_005c9cd0:; BB(0x005c9cd0);
    /* 005c9cd0: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 005c9cd4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 005c9cd8: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 005c9cdc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c9cde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9ce0: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005c9ce6: mov ebp, eax */ r_ebp = r_eax;
    /* 005c9ce8: mov esi, edx */ r_esi = r_edx;
    /* 005c9cea: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
L_005c9cee:; BB(0x005c9cee);
    /* 005c9cee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cef: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 005c9cf3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5c9cf8u); f_0069792c();
    /* 005c9cf8: mov ebx, eax */ r_ebx = r_eax;
    /* 005c9cfa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9cfb: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005c9cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d00: call 0x5e5284 */ r_esp -= 4; W32(r_esp, 0x5c9d05u); f_005e5284();
    /* 005c9d05: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d0a: je 0x5c9d11 */ if (fZ) goto L_005c9d11;
L_005c9d0c:; BB(0x005c9d0c);
    /* 005c9d0c: mov edi, ebx */ r_edi = r_ebx;
    /* 005c9d0e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_005c9d11:; BB(0x005c9d11);
    /* 005c9d11: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9d14: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9d17: jl 0x5c9cee */ if ((fS!=fO)) goto L_005c9cee;
L_005c9d19:; BB(0x005c9d19);
    /* 005c9d19: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 005c9d1d: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 005c9d21: mov edx, esi */ r_edx = r_esi;
    /* 005c9d23: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 005c9d27: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d2a: je 0x5c9d2e */ if (fZ) goto L_005c9d2e;
L_005c9d2c:; BB(0x005c9d2c);
    /* 005c9d2c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9d2e:; BB(0x005c9d2e);
    /* 005c9d2e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d30: je 0x5c9df9 */ if (fZ) goto L_005c9df9;
L_005c9d36:; BB(0x005c9d36);
    /* 005c9d36: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005c9d3a: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9d3fu); f_005d6a3c();
    /* 005c9d3f: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005c9d43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d44: mov ecx, edi */ r_ecx = r_edi;
    /* 005c9d46: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5c9d4bu); f_005c425c();
    /* 005c9d4b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d4d: call 0x5e5284 */ r_esp -= 4; W32(r_esp, 0x5c9d52u); f_005e5284();
    /* 005c9d52: mov edi, eax */ r_edi = r_eax;
    /* 005c9d54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9d57: movzx edx, byte ptr [edi + 9] */ r_edx = (u32)R8((u32)(r_edi+0x9u));
    /* 005c9d5b: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d61: je 0x5c9da1 */ if (fZ) goto L_005c9da1;
L_005c9d63:; BB(0x005c9d63);
    /* 005c9d63: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 005c9d68: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9d6b: je 0x5c9d76 */ if (fZ) goto L_005c9d76;
L_005c9d6d:; BB(0x005c9d6d);
    /* 005c9d6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9d6f: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9d72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9d73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9d74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9d75: ret  */ FN_RET(0x005c9cb4); r_esp += 4; return;
L_005c9d76:; BB(0x005c9d76);
    /* 005c9d76: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005c9d7a: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x5c9d7fu); f_005dc1e0();
    /* 005c9d7f: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 005c9d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9d84: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005c9d88: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x5c9d8du); f_005d4108();
    /* 005c9d8d: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 005c9d91: movzx ebp, byte ptr [edi + 9] */ r_ebp = (u32)R8((u32)(r_edi+0x9u));
    /* 005c9d95: call 0x5dbdb8 */ r_esp -= 4; W32(r_esp, 0x5c9d9au); f_005dbdb8();
    /* 005c9d9a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 005c9d9d: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9d9f: jl 0x5c9df9 */ if ((fS!=fO)) goto L_005c9df9;
L_005c9da1:; BB(0x005c9da1);
    /* 005c9da1: movzx ebp, byte ptr [edi + 0xa] */ r_ebp = (u32)R8((u32)(r_edi+0xau));
    /* 005c9da5: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dab: je 0x5c9dbf */ if (fZ) goto L_005c9dbf;
L_005c9dad:; BB(0x005c9dad);
    /* 005c9dad: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 005c9db2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9db4: jne 0x5c9df9 */ if (!fZ) goto L_005c9df9;
L_005c9db6:; BB(0x005c9db6);
    /* 005c9db6: movzx edx, byte ptr [esp + 0xf] */ r_edx = (u32)R8((u32)(r_esp+0xfu));
    /* 005c9dbb: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9dbd: jl 0x5c9df9 */ if ((fS!=fO)) goto L_005c9df9;
L_005c9dbf:; BB(0x005c9dbf);
    /* 005c9dbf: movzx ebp, byte ptr [edi + 0xb] */ r_ebp = (u32)R8((u32)(r_edi+0xbu));
    /* 005c9dc3: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dc9: je 0x5c9de2 */ if (fZ) goto L_005c9de2;
L_005c9dcb:; BB(0x005c9dcb);
    /* 005c9dcb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005c9dcd: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c9dd0: mov ecx, esi */ r_ecx = r_esi;
    /* 005c9dd2: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5c9dd5u); call_ind(t); }
    /* 005c9dd5: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9dd7: jge 0x5c9de2 */ if ((fS==fO)) goto L_005c9de2;
L_005c9dd9:; BB(0x005c9dd9);
    /* 005c9dd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9ddb: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9dde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9ddf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9de0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9de1: ret  */ FN_RET(0x005c9cb4); r_esp += 4; return;
L_005c9de2:; BB(0x005c9de2);
    /* 005c9de2: movzx edx, byte ptr [edi + 0xc] */ r_edx = (u32)R8((u32)(r_edi+0xcu));
    /* 005c9de6: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9dec: je 0x5c9e02 */ if (fZ) goto L_005c9e02;
L_005c9dee:; BB(0x005c9dee);
    /* 005c9dee: movsx ebp, byte ptr [esi + 0x960] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esi+0x960u));
    /* 005c9df5: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9df7: je 0x5c9e02 */ if (fZ) goto L_005c9e02;
L_005c9df9:; BB(0x005c9df9);
    /* 005c9df9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c9dfb: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9dfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9dff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9e00: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9e01: ret  */ FN_RET(0x005c9cb4); r_esp += 4; return;
L_005c9e02:; BB(0x005c9e02);
    /* 005c9e02: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 005c9e06: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5c9e0bu); f_005d6a3c();
    /* 005c9e0b: movzx edx, byte ptr [edi + 6] */ r_edx = (u32)R8((u32)(r_edi+0x6u));
    /* 005c9e0f: mov byte ptr [esp + 0x30], dl */ W8((u32)(r_esp+0x30u), (u8)r_edx);
    /* 005c9e13: movzx edx, byte ptr [edi + 7] */ r_edx = (u32)R8((u32)(r_edi+0x7u));
    /* 005c9e17: mov eax, esi */ r_eax = r_esi;
    /* 005c9e19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005c9e1b: mov byte ptr [esp + 0x31], dl */ W8((u32)(r_esp+0x31u), (u8)r_edx);
    /* 005c9e1f: movzx edx, byte ptr [edi + 8] */ r_edx = (u32)R8((u32)(r_edi+0x8u));
    /* 005c9e23: mov byte ptr [esp + 0x32], dl */ W8((u32)(r_esp+0x32u), (u8)r_edx);
    /* 005c9e27: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 005c9e2b: call 0x5c9e4c */ r_esp -= 4; W32(r_esp, 0x5c9e30u); f_005c9e4c();
    /* 005c9e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e32: je 0x5c9df9 */ if (fZ) goto L_005c9df9;
L_005c9e34:; BB(0x005c9e34);
    /* 005c9e34: mov eax, edi */ r_eax = r_edi;
    /* 005c9e36: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9e39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9e3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9e3b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9e3c: ret  */ FN_RET(0x005c9cb4); r_esp += 4; return;
}

void f_005c9e40(void) /* sub_5C9E40 */
{
    FN_ENTER(0x005c9e40);
    /* 005c9e40: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005c9e44: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005c9e48: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005c9e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e50: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9e56: mov esi, ecx */ r_esi = r_ecx;
    /* 005c9e58: mov ebp, edx */ r_ebp = r_edx;
    /* 005c9e5a: mov ebx, eax */ r_ebx = r_eax;
    /* 005c9e5c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e5e: je 0x5c9ff7 */ if (fZ) goto L_005c9ff7;
L_005c9e64:; BB(0x005c9e64);
    /* 005c9e64: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e66: je 0x5c9ff7 */ if (fZ) goto L_005c9ff7;
L_005c9e6c:; BB(0x005c9e6c);
    /* 005c9e6c: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005c9e73: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e76: jne 0x5c9e7f */ if (!fZ) goto L_005c9e7f;
L_005c9e78:; BB(0x005c9e78);
    /* 005c9e78: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9e7d: jmp 0x5c9e81 */ goto L_005c9e81;
L_005c9e7f:; BB(0x005c9e7f);
    /* 005c9e7f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9e81:; BB(0x005c9e81);
    /* 005c9e81: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e83: jne 0x5c9e97 */ if (!fZ) goto L_005c9e97;
L_005c9e85:; BB(0x005c9e85);
    /* 005c9e85: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e88: jne 0x5c9e91 */ if (!fZ) goto L_005c9e91;
L_005c9e8a:; BB(0x005c9e8a);
    /* 005c9e8a: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9e8f: jmp 0x5c9e93 */ goto L_005c9e93;
L_005c9e91:; BB(0x005c9e91);
    /* 005c9e91: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9e93:; BB(0x005c9e93);
    /* 005c9e93: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e95: je 0x5c9eb1 */ if (fZ) goto L_005c9eb1;
L_005c9e97:; BB(0x005c9e97);
    /* 005c9e97: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e99: je 0x5c9ea1 */ if (fZ) goto L_005c9ea1;
L_005c9e9b:; BB(0x005c9e9b);
    /* 005c9e9b: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005c9ea1:; BB(0x005c9ea1);
    /* 005c9ea1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9ea6: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9eac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9eae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9eaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9eb0: ret  */ FN_RET(0x005c9e40); r_esp += 4; return;
L_005c9eb1:; BB(0x005c9eb1);
    /* 005c9eb1: mov edi, dword ptr [0xa95624] */ r_edi = R32((u32)(0xa95624u));
    /* 005c9eb7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9eb9: je 0x5c9f2b */ if (fZ) goto L_005c9f2b;
L_005c9ebb:; BB(0x005c9ebb);
    /* 005c9ebb: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005c9ebf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ec1: je 0x5c9efc */ if (fZ) goto L_005c9efc;
L_005c9ec3:; BB(0x005c9ec3);
    /* 005c9ec3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ec6: jne 0x5c9ef0 */ if (!fZ) goto L_005c9ef0;
L_005c9ec8:; BB(0x005c9ec8);
    /* 005c9ec8: movzx edi, byte ptr [ebp + 1] */ r_edi = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9ecc: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ecf: je 0x5c9ee9 */ if (fZ) goto L_005c9ee9;
L_005c9ed1:; BB(0x005c9ed1);
    /* 005c9ed1: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ed4: jne 0x5c9edd */ if (!fZ) goto L_005c9edd;
L_005c9ed6:; BB(0x005c9ed6);
    /* 005c9ed6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005c9edb: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9edd:; BB(0x005c9edd);
    /* 005c9edd: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ee0: jne 0x5c9f2f */ if (!fZ) goto L_005c9f2f;
L_005c9ee2:; BB(0x005c9ee2);
    /* 005c9ee2: mov ecx, 4 */ r_ecx = 0x4u;
    /* 005c9ee7: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9ee9:; BB(0x005c9ee9);
    /* 005c9ee9: mov ecx, 2 */ r_ecx = 0x2u;
    /* 005c9eee: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9ef0:; BB(0x005c9ef0);
    /* 005c9ef0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ef3: jne 0x5c9f2f */ if (!fZ) goto L_005c9f2f;
L_005c9ef5:; BB(0x005c9ef5);
    /* 005c9ef5: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005c9efa: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9efc:; BB(0x005c9efc);
    /* 005c9efc: mov ecx, 1 */ r_ecx = 0x1u;
L_005c9f01:; BB(0x005c9f01);
    /* 005c9f01: mov edi, dword ptr [0xa8dafc] */ r_edi = R32((u32)(0xa8dafcu));
    /* 005c9f07: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005c9f09: je 0x5c9f2f */ if (fZ) goto L_005c9f2f;
L_005c9f0b:; BB(0x005c9f0b);
    /* 005c9f0b: mov edx, 1 */ r_edx = 0x1u;
    /* 005c9f10: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c9f12: test dword ptr [edi + 0x1c], edx */ {  u32 a = R32((u32)(r_edi+0x1cu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f15: je 0x5c9f1e */ if (fZ) goto L_005c9f1e;
L_005c9f17:; BB(0x005c9f17);
    /* 005c9f17: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f1c: jmp 0x5c9f20 */ goto L_005c9f20;
L_005c9f1e:; BB(0x005c9f1e);
    /* 005c9f1e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9f20:; BB(0x005c9f20);
    /* 005c9f20: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f23: je 0x5c9ffe */ if (fZ) goto L_005c9ffe;
L_005c9f29:; BB(0x005c9f29);
    /* 005c9f29: jmp 0x5c9f2f */ goto L_005c9f2f;
L_005c9f2b:; BB(0x005c9f2b);
    /* 005c9f2b: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
L_005c9f2f:; BB(0x005c9f2f);
    /* 005c9f2f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c9f31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f33: je 0x5ca135 */ if (fZ) goto L_005ca135;
L_005c9f39:; BB(0x005c9f39);
    /* 005c9f39: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f3c: je 0x5ca00b */ if (fZ) goto L_005ca00b;
L_005c9f42:; BB(0x005c9f42);
    /* 005c9f42: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f45: je 0x5c9fb7 */ if (fZ) goto L_005c9fb7;
L_005c9f47:; BB(0x005c9f47);
    /* 005c9f47: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f4a: jne 0x5c9fa1 */ if (!fZ) goto L_005c9fa1;
L_005c9f4c:; BB(0x005c9f4c);
    /* 005c9f4c: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9f50: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f53: jne 0x5c9f83 */ if (!fZ) goto L_005c9f83;
L_005c9f55:; BB(0x005c9f55);
    /* 005c9f55: movsx ebx, byte ptr [ebx + 0x961] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebx+0x961u));
    /* 005c9f5c: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 005c9f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f62: call 0x5e5260 */ r_esp -= 4; W32(r_esp, 0x5c9f67u); f_005e5260();
    /* 005c9f67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9f6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c9f6d: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f72: je 0x5c9f7c */ if (fZ) goto L_005c9f7c;
L_005c9f74:; BB(0x005c9f74);
    /* 005c9f74: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c9f78: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9f7a: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005c9f7c:; BB(0x005c9f7c);
    /* 005c9f7c: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f81: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9f83:; BB(0x005c9f83);
    /* 005c9f83: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f86: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f88:; BB(0x005c9f88);
    /* 005c9f88: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 005c9f8e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f90: jne 0x5c9f9a */ if (!fZ) goto L_005c9f9a;
L_005c9f92:; BB(0x005c9f92);
    /* 005c9f92: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f94: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f96:; BB(0x005c9f96);
    /* 005c9f96: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f98: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f9a:; BB(0x005c9f9a);
    /* 005c9f9a: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f9f: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fa1:; BB(0x005c9fa1);
    /* 005c9fa1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fa4: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9fa6:; BB(0x005c9fa6);
    /* 005c9fa6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c9fa9: cmp eax, 0xf423f */ {  u32 a = r_eax; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9fae: jle 0x5c9fdd */ if ((fZ||fS!=fO)) goto L_005c9fdd;
L_005c9fb0:; BB(0x005c9fb0);
    /* 005c9fb0: mov edi, 0x20 */ r_edi = 0x20u;
    /* 005c9fb5: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fb7:; BB(0x005c9fb7);
    /* 005c9fb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c9fb9: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5c9fbeu); f_005d2890();
    /* 005c9fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fc0: je 0x5c9fd8 */ if (fZ) goto L_005c9fd8;
L_005c9fc2:; BB(0x005c9fc2);
    /* 005c9fc2: movsx edx, word ptr [eax + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 005c9fc6: mov eax, ebx */ r_eax = r_ebx;
    /* 005c9fc8: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5c9fcdu); f_005ca3d9();
    /* 005c9fcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fcf: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9fd1:; BB(0x005c9fd1);
    /* 005c9fd1: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9fd6: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fd8:; BB(0x005c9fd8);
    /* 005c9fd8: mov edi, 0x20 */ r_edi = 0x20u;
L_005c9fdd:; BB(0x005c9fdd);
    /* 005c9fdd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fdf: je 0x5c9fe3 */ if (fZ) goto L_005c9fe3;
L_005c9fe1:; BB(0x005c9fe1);
    /* 005c9fe1: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_005c9fe3:; BB(0x005c9fe3);
    /* 005c9fe3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fe5: jne 0x5c9ffe */ if (!fZ) goto L_005c9ffe;
L_005c9fe7:; BB(0x005c9fe7);
    /* 005c9fe7: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9fec: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9ff2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9ff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9ff4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9ff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9ff6: ret  */ FN_RET(0x005c9e40); r_esp += 4; return;
L_005c9ff7:; BB(0x005c9ff7);
    /* 005c9ff7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ff9: je 0x5c9ffe */ if (fZ) goto L_005c9ffe;
L_005c9ffb:; BB(0x005c9ffb);
    /* 005c9ffb: or dword ptr [esi], 0x20 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_005c9ffe:; BB(0x005c9ffe);
    /* 005c9ffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca000: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca006: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca008: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca009: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca00a: ret  */ FN_RET(0x005c9e40); r_esp += 4; return;
L_005ca00b:; BB(0x005ca00b);
    /* 005ca00b: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005ca00f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca012: je 0x5ca0bc */ if (fZ) goto L_005ca0bc;
L_005ca018:; BB(0x005ca018);
    /* 005ca018: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca01b: je 0x5ca055 */ if (fZ) goto L_005ca055;
L_005ca01d:; BB(0x005ca01d);
    /* 005ca01d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca01f: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca024u); f_005d2890();
    /* 005ca024: mov ebp, eax */ r_ebp = r_eax;
    /* 005ca026: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca028: je 0x5ca050 */ if (fZ) goto L_005ca050;
L_005ca02a:; BB(0x005ca02a);
    /* 005ca02a: movsx edx, word ptr [ebp + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x12u));
    /* 005ca02e: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca030: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5ca035u); f_005ca3d9();
    /* 005ca035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca037: jne 0x5ca03c */ if (!fZ) goto L_005ca03c;
L_005ca039:; BB(0x005ca039);
    /* 005ca039: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca03c:; BB(0x005ca03c);
    /* 005ca03c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ca03e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ca040: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5ca043u); call_ind(t); }
    /* 005ca043: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005ca047: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca049: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca04b:; BB(0x005ca04b);
    /* 005ca04b: or edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca04e: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca050:; BB(0x005ca050);
    /* 005ca050: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca053: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca055:; BB(0x005ca055);
    /* 005ca055: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 005ca05b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca05d: jne 0x5ca06f */ if (!fZ) goto L_005ca06f;
L_005ca05f:; BB(0x005ca05f);
    /* 005ca05f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca061: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca067:; BB(0x005ca067);
    /* 005ca067: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca069: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca06f:; BB(0x005ca06f);
    /* 005ca06f: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca073: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca076: jne 0x5ca080 */ if (!fZ) goto L_005ca080;
L_005ca078:; BB(0x005ca078);
    /* 005ca078: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca07b: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca080:; BB(0x005ca080);
    /* 005ca080: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca082: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca087u); f_005d2890();
    /* 005ca087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca089: je 0x5ca0b4 */ if (fZ) goto L_005ca0b4;
L_005ca08b:; BB(0x005ca08b);
    /* 005ca08b: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005ca08f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca092: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca094:; BB(0x005ca094);
    /* 005ca094: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca097: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca099:; BB(0x005ca099);
    /* 005ca099: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca09c: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca09e:; BB(0x005ca09e);
    /* 005ca09e: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0a1: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca0a3:; BB(0x005ca0a3);
    /* 005ca0a3: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0a6: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca0ac:; BB(0x005ca0ac);
    /* 005ca0ac: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca0af: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca0b4:; BB(0x005ca0b4);
    /* 005ca0b4: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca0b7: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca0bc:; BB(0x005ca0bc);
    /* 005ca0bc: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca0c0: cmp edx, 0x4f */ {  u32 a = r_edx; u32 b = 0x4fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca0c3: jge 0x5ca0ec */ if ((fS==fO)) goto L_005ca0ec;
L_005ca0c5:; BB(0x005ca0c5);
    /* 005ca0c5: cmp edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0c8: jne 0x5ca0f1 */ if (!fZ) goto L_005ca0f1;
L_005ca0ca:; BB(0x005ca0ca);
    /* 005ca0ca: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca0d0: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca0d3: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0d9:; BB(0x005ca0d9);
    /* 005ca0d9: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca0dc: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0e2:; BB(0x005ca0e2);
    /* 005ca0e2: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca0e7: jmp 0x5ca018 */ goto L_005ca018;
L_005ca0ec:; BB(0x005ca0ec);
    /* 005ca0ec: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca0ef: jle 0x5ca11c */ if ((fZ||fS!=fO)) goto L_005ca11c;
L_005ca0f1:; BB(0x005ca0f1);
    /* 005ca0f1: cmp edx, 0x51 */ {  u32 a = r_edx; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0f4: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0fa:; BB(0x005ca0fa);
    /* 005ca0fa: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca100: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca103: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca109:; BB(0x005ca109);
    /* 005ca109: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca10c: je 0x5ca018 */ if (fZ) goto L_005ca018;
L_005ca112:; BB(0x005ca112);
    /* 005ca112: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca117: jmp 0x5ca018 */ goto L_005ca018;
L_005ca11c:; BB(0x005ca11c);
    /* 005ca11c: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca122: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca125: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca12b:; BB(0x005ca12b);
    /* 005ca12b: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca130: jmp 0x5ca018 */ goto L_005ca018;
L_005ca135:; BB(0x005ca135);
    /* 005ca135: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca137: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca13cu); f_005d2890();
    /* 005ca13c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005ca140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca142: je 0x5ca36a */ if (fZ) goto L_005ca36a;
L_005ca148:; BB(0x005ca148);
    /* 005ca148: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca14a: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 005ca150: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca155u); f_0069792c();
    /* 005ca155: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005ca159: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ca15d: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005ca161: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca163: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5ca168u); f_005ca3d9();
    /* 005ca168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca16a: jne 0x5ca171 */ if (!fZ) goto L_005ca171;
L_005ca16c:; BB(0x005ca16c);
    /* 005ca16c: mov edi, 1 */ r_edi = 0x1u;
L_005ca171:; BB(0x005ca171);
    /* 005ca171: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005ca175: cmp edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca17b: je 0x5ca374 */ if (fZ) goto L_005ca374;
L_005ca181:; BB(0x005ca181);
    /* 005ca181: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 005ca185: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca187: mov word ptr [esp + 0x1a], dx */ W16((u32)(r_esp+0x1au), (u16)r_edx);
    /* 005ca18c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ca18e: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 005ca193: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 005ca198: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 005ca19d: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005ca1a2: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005ca1a7: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 005ca1ac: mov word ptr [esp + 0x22], dx */ W16((u32)(r_esp+0x22u), (u16)r_edx);
    /* 005ca1b1: mov word ptr [esp + 0x20], dx */ W16((u32)(r_esp+0x20u), (u16)r_edx);
    /* 005ca1b6: mov word ptr [esp + 0x1e], dx */ W16((u32)(r_esp+0x1eu), (u16)r_edx);
    /* 005ca1bb: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 005ca1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca1c1: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x5ca1c6u); f_00695340();
    /* 005ca1c6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005ca1ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca1cc: je 0x5ca32d */ if (fZ) goto L_005ca32d;
L_005ca1d2:; BB(0x005ca1d2);
    /* 005ca1d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca1d4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005ca1d8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005ca1dc: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005ca1e0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005ca1e4: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005ca1e8: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005ca1ec: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005ca1f0: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 005ca1f4: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 005ca1f8: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 005ca1fc: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005ca200: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 005ca204: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca206: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 005ca20a: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 005ca20e: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005ca212: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 005ca216: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 005ca21a: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 005ca21e: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 005ca222: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 005ca226: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca228: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 005ca22c: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 005ca230: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 005ca237: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 005ca23e: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 005ca245: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 005ca24c: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 005ca253: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 005ca25a: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 005ca261: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca263: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 005ca26a: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 005ca271: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 005ca278: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 005ca27f: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 005ca286: lea edx, [esp + 0xb0] */ r_edx = (u32)(r_esp+0xb0u);
    /* 005ca28d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca28e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005ca292: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5ca297u); f_005c425c();
    /* 005ca297: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 005ca29b: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 005ca29f: lea ebp, [esp + 0x78] */ r_ebp = (u32)(r_esp+0x78u);
    /* 005ca2a3: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 005ca2aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2af: lea ecx, [esp + 0xc4] */ r_ecx = (u32)(r_esp+0xc4u);
    /* 005ca2b6: call 0x5d330c */ r_esp -= 4; W32(r_esp, 0x5ca2bbu); f_005d330c();
    /* 005ca2bb: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005ca2c0: movzx edx, word ptr [esp + 0x78] */ r_edx = (u32)R16((u32)(r_esp+0x78u));
    /* 005ca2c5: movzx ebp, word ptr [esp + 0x16] */ r_ebp = (u32)R16((u32)(r_esp+0x16u));
    /* 005ca2ca: movzx ebx, word ptr [esp + 0x82] */ r_ebx = (u32)R16((u32)(r_esp+0x82u));
    /* 005ca2d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ca2d4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005ca2d7: movzx eax, word ptr [esp + 0x7a] */ r_eax = (u32)R16((u32)(r_esp+0x7au));
    /* 005ca2dc: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005ca2de: movzx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+0x14u));
    /* 005ca2e3: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 005ca2e6: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca2e8: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005ca2eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2ed: jge 0x5ca2f1 */ if ((fS==fO)) goto L_005ca2f1;
L_005ca2ef:; BB(0x005ca2ef);
    /* 005ca2ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005ca2f1:; BB(0x005ca2f1);
    /* 005ca2f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2f3: jge 0x5ca2f7 */ if ((fS==fO)) goto L_005ca2f7;
L_005ca2f5:; BB(0x005ca2f5);
    /* 005ca2f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005ca2f7:; BB(0x005ca2f7);
    /* 005ca2f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2f9: jge 0x5ca2fd */ if ((fS==fO)) goto L_005ca2fd;
L_005ca2fb:; BB(0x005ca2fb);
    /* 005ca2fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ca2fd:; BB(0x005ca2fd);
    /* 005ca2fd: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005ca301: movzx ebp, word ptr [ebx + 0x12] */ r_ebp = (u32)R16((u32)(r_ebx+0x12u));
    /* 005ca305: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca307: jge 0x5ca30c */ if ((fS==fO)) goto L_005ca30c;
L_005ca309:; BB(0x005ca309);
    /* 005ca309: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca30c:; BB(0x005ca30c);
    /* 005ca30c: movzx ebp, word ptr [ebx + 0x16] */ r_ebp = (u32)R16((u32)(r_ebx+0x16u));
    /* 005ca310: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca312: jge 0x5ca317 */ if ((fS==fO)) goto L_005ca317;
L_005ca314:; BB(0x005ca314);
    /* 005ca314: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca317:; BB(0x005ca317);
    /* 005ca317: mov edx, ebx */ r_edx = r_ebx;
    /* 005ca319: movzx ebx, word ptr [edx + 0x14] */ r_ebx = (u32)R16((u32)(r_edx+0x14u));
    /* 005ca31d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca31f: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca325:; BB(0x005ca325);
    /* 005ca325: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca328: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca32d:; BB(0x005ca32d);
    /* 005ca32d: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 005ca332: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ca336: movzx ebx, word ptr [eax + 0x12] */ r_ebx = (u32)R16((u32)(r_eax+0x12u));
    /* 005ca33a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca33c: jge 0x5ca341 */ if ((fS==fO)) goto L_005ca341;
L_005ca33e:; BB(0x005ca33e);
    /* 005ca33e: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca341:; BB(0x005ca341);
    /* 005ca341: movsx edx, word ptr [esp + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x16u));
    /* 005ca346: movzx ebx, word ptr [eax + 0x16] */ r_ebx = (u32)R16((u32)(r_eax+0x16u));
    /* 005ca34a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca34c: jge 0x5ca351 */ if ((fS==fO)) goto L_005ca351;
L_005ca34e:; BB(0x005ca34e);
    /* 005ca34e: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca351:; BB(0x005ca351);
    /* 005ca351: movsx edx, word ptr [esp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005ca356: movzx ebx, word ptr [eax + 0x14] */ r_ebx = (u32)R16((u32)(r_eax+0x14u));
    /* 005ca35a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca35c: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca362:; BB(0x005ca362);
    /* 005ca362: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca365: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca36a:; BB(0x005ca36a);
    /* 005ca36a: mov edi, 0x20 */ r_edi = 0x20u;
    /* 005ca36f: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca374:; BB(0x005ca374);
    /* 005ca374: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 005ca37a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca37c: je 0x5ca181 */ if (fZ) goto L_005ca181;
L_005ca382:; BB(0x005ca382);
    /* 005ca382: mov ebp, dword ptr [edx + 0x2b8] */ r_ebp = R32((u32)(r_edx+0x2b8u));
    /* 005ca388: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca38a: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca38c:; BB(0x005ca38c);
    /* 005ca38c: mov ebp, dword ptr [edx + 0x2bc] */ r_ebp = R32((u32)(r_edx+0x2bcu));
    /* 005ca392: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca394: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca396:; BB(0x005ca396);
    /* 005ca396: mov ebp, dword ptr [edx + 0x2c0] */ r_ebp = R32((u32)(r_edx+0x2c0u));
    /* 005ca39c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca39e: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca3a0:; BB(0x005ca3a0);
    /* 005ca3a0: mov ebp, dword ptr [edx + 0x2c4] */ r_ebp = R32((u32)(r_edx+0x2c4u));
    /* 005ca3a6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3a8: je 0x5ca3b1 */ if (fZ) goto L_005ca3b1;
L_005ca3aa:; BB(0x005ca3aa);
    /* 005ca3aa: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005ca3af: jmp 0x5ca3b3 */ goto L_005ca3b3;
L_005ca3b1:; BB(0x005ca3b1);
    /* 005ca3b1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005ca3b3:; BB(0x005ca3b3);
    /* 005ca3b3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3b5: je 0x5ca3c7 */ if (fZ) goto L_005ca3c7;
L_005ca3b7:; BB(0x005ca3b7);
    /* 005ca3b7: movzx edx, byte ptr [edx + 0x2c8] */ r_edx = (u32)R8((u32)(r_edx+0x2c8u));
    /* 005ca3be: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3c1: je 0x5ca181 */ if (fZ) goto L_005ca181;
L_005ca3c7:; BB(0x005ca3c7);
    /* 005ca3c7: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca3ca: jmp 0x5ca181 */ goto L_005ca181;
}

void f_005c9e4c(void) /* sub_5C9E4C */
{
    FN_ENTER(0x005c9e4c);
    /* 005c9e4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9e50: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005c9e56: mov esi, ecx */ r_esi = r_ecx;
    /* 005c9e58: mov ebp, edx */ r_ebp = r_edx;
    /* 005c9e5a: mov ebx, eax */ r_ebx = r_eax;
    /* 005c9e5c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e5e: je 0x5c9ff7 */ if (fZ) goto L_005c9ff7;
L_005c9e64:; BB(0x005c9e64);
    /* 005c9e64: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e66: je 0x5c9ff7 */ if (fZ) goto L_005c9ff7;
L_005c9e6c:; BB(0x005c9e6c);
    /* 005c9e6c: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005c9e73: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e76: jne 0x5c9e7f */ if (!fZ) goto L_005c9e7f;
L_005c9e78:; BB(0x005c9e78);
    /* 005c9e78: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9e7d: jmp 0x5c9e81 */ goto L_005c9e81;
L_005c9e7f:; BB(0x005c9e7f);
    /* 005c9e7f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9e81:; BB(0x005c9e81);
    /* 005c9e81: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e83: jne 0x5c9e97 */ if (!fZ) goto L_005c9e97;
L_005c9e85:; BB(0x005c9e85);
    /* 005c9e85: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e88: jne 0x5c9e91 */ if (!fZ) goto L_005c9e91;
L_005c9e8a:; BB(0x005c9e8a);
    /* 005c9e8a: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9e8f: jmp 0x5c9e93 */ goto L_005c9e93;
L_005c9e91:; BB(0x005c9e91);
    /* 005c9e91: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9e93:; BB(0x005c9e93);
    /* 005c9e93: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e95: je 0x5c9eb1 */ if (fZ) goto L_005c9eb1;
L_005c9e97:; BB(0x005c9e97);
    /* 005c9e97: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9e99: je 0x5c9ea1 */ if (fZ) goto L_005c9ea1;
L_005c9e9b:; BB(0x005c9e9b);
    /* 005c9e9b: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_005c9ea1:; BB(0x005c9ea1);
    /* 005c9ea1: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9ea6: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9eac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9eae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9eaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9eb0: ret  */ FN_RET(0x005c9e4c); r_esp += 4; return;
L_005c9eb1:; BB(0x005c9eb1);
    /* 005c9eb1: mov edi, dword ptr [0xa95624] */ r_edi = R32((u32)(0xa95624u));
    /* 005c9eb7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9eb9: je 0x5c9f2b */ if (fZ) goto L_005c9f2b;
L_005c9ebb:; BB(0x005c9ebb);
    /* 005c9ebb: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005c9ebf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ec1: je 0x5c9efc */ if (fZ) goto L_005c9efc;
L_005c9ec3:; BB(0x005c9ec3);
    /* 005c9ec3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ec6: jne 0x5c9ef0 */ if (!fZ) goto L_005c9ef0;
L_005c9ec8:; BB(0x005c9ec8);
    /* 005c9ec8: movzx edi, byte ptr [ebp + 1] */ r_edi = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9ecc: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ecf: je 0x5c9ee9 */ if (fZ) goto L_005c9ee9;
L_005c9ed1:; BB(0x005c9ed1);
    /* 005c9ed1: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ed4: jne 0x5c9edd */ if (!fZ) goto L_005c9edd;
L_005c9ed6:; BB(0x005c9ed6);
    /* 005c9ed6: mov ecx, 3 */ r_ecx = 0x3u;
    /* 005c9edb: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9edd:; BB(0x005c9edd);
    /* 005c9edd: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ee0: jne 0x5c9f2f */ if (!fZ) goto L_005c9f2f;
L_005c9ee2:; BB(0x005c9ee2);
    /* 005c9ee2: mov ecx, 4 */ r_ecx = 0x4u;
    /* 005c9ee7: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9ee9:; BB(0x005c9ee9);
    /* 005c9ee9: mov ecx, 2 */ r_ecx = 0x2u;
    /* 005c9eee: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9ef0:; BB(0x005c9ef0);
    /* 005c9ef0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ef3: jne 0x5c9f2f */ if (!fZ) goto L_005c9f2f;
L_005c9ef5:; BB(0x005c9ef5);
    /* 005c9ef5: mov ecx, 5 */ r_ecx = 0x5u;
    /* 005c9efa: jmp 0x5c9f01 */ goto L_005c9f01;
L_005c9efc:; BB(0x005c9efc);
    /* 005c9efc: mov ecx, 1 */ r_ecx = 0x1u;
L_005c9f01:; BB(0x005c9f01);
    /* 005c9f01: mov edi, dword ptr [0xa8dafc] */ r_edi = R32((u32)(0xa8dafcu));
    /* 005c9f07: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005c9f09: je 0x5c9f2f */ if (fZ) goto L_005c9f2f;
L_005c9f0b:; BB(0x005c9f0b);
    /* 005c9f0b: mov edx, 1 */ r_edx = 0x1u;
    /* 005c9f10: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005c9f12: test dword ptr [edi + 0x1c], edx */ {  u32 a = R32((u32)(r_edi+0x1cu)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f15: je 0x5c9f1e */ if (fZ) goto L_005c9f1e;
L_005c9f17:; BB(0x005c9f17);
    /* 005c9f17: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f1c: jmp 0x5c9f20 */ goto L_005c9f20;
L_005c9f1e:; BB(0x005c9f1e);
    /* 005c9f1e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_005c9f20:; BB(0x005c9f20);
    /* 005c9f20: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f23: je 0x5c9ffe */ if (fZ) goto L_005c9ffe;
L_005c9f29:; BB(0x005c9f29);
    /* 005c9f29: jmp 0x5c9f2f */ goto L_005c9f2f;
L_005c9f2b:; BB(0x005c9f2b);
    /* 005c9f2b: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
L_005c9f2f:; BB(0x005c9f2f);
    /* 005c9f2f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c9f31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f33: je 0x5ca135 */ if (fZ) goto L_005ca135;
L_005c9f39:; BB(0x005c9f39);
    /* 005c9f39: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f3c: je 0x5ca00b */ if (fZ) goto L_005ca00b;
L_005c9f42:; BB(0x005c9f42);
    /* 005c9f42: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f45: je 0x5c9fb7 */ if (fZ) goto L_005c9fb7;
L_005c9f47:; BB(0x005c9f47);
    /* 005c9f47: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f4a: jne 0x5c9fa1 */ if (!fZ) goto L_005c9fa1;
L_005c9f4c:; BB(0x005c9f4c);
    /* 005c9f4c: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005c9f50: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f53: jne 0x5c9f83 */ if (!fZ) goto L_005c9f83;
L_005c9f55:; BB(0x005c9f55);
    /* 005c9f55: movsx ebx, byte ptr [ebx + 0x961] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebx+0x961u));
    /* 005c9f5c: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 005c9f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c9f62: call 0x5e5260 */ r_esp -= 4; W32(r_esp, 0x5c9f67u); f_005e5260();
    /* 005c9f67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005c9f6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005c9f6d: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f72: je 0x5c9f7c */ if (fZ) goto L_005c9f7c;
L_005c9f74:; BB(0x005c9f74);
    /* 005c9f74: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005c9f78: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9f7a: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005c9f7c:; BB(0x005c9f7c);
    /* 005c9f7c: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f81: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9f83:; BB(0x005c9f83);
    /* 005c9f83: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9f86: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f88:; BB(0x005c9f88);
    /* 005c9f88: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 005c9f8e: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f90: jne 0x5c9f9a */ if (!fZ) goto L_005c9f9a;
L_005c9f92:; BB(0x005c9f92);
    /* 005c9f92: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f94: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f96:; BB(0x005c9f96);
    /* 005c9f96: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c9f98: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9f9a:; BB(0x005c9f9a);
    /* 005c9f9a: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9f9f: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fa1:; BB(0x005c9fa1);
    /* 005c9fa1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fa4: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9fa6:; BB(0x005c9fa6);
    /* 005c9fa6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005c9fa9: cmp eax, 0xf423f */ {  u32 a = r_eax; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c9fae: jle 0x5c9fdd */ if ((fZ||fS!=fO)) goto L_005c9fdd;
L_005c9fb0:; BB(0x005c9fb0);
    /* 005c9fb0: mov edi, 0x20 */ r_edi = 0x20u;
    /* 005c9fb5: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fb7:; BB(0x005c9fb7);
    /* 005c9fb7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005c9fb9: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5c9fbeu); f_005d2890();
    /* 005c9fbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fc0: je 0x5c9fd8 */ if (fZ) goto L_005c9fd8;
L_005c9fc2:; BB(0x005c9fc2);
    /* 005c9fc2: movsx edx, word ptr [eax + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x18u));
    /* 005c9fc6: mov eax, ebx */ r_eax = r_ebx;
    /* 005c9fc8: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5c9fcdu); f_005ca3d9();
    /* 005c9fcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fcf: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005c9fd1:; BB(0x005c9fd1);
    /* 005c9fd1: mov edi, 1 */ r_edi = 0x1u;
    /* 005c9fd6: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005c9fd8:; BB(0x005c9fd8);
    /* 005c9fd8: mov edi, 0x20 */ r_edi = 0x20u;
L_005c9fdd:; BB(0x005c9fdd);
    /* 005c9fdd: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fdf: je 0x5c9fe3 */ if (fZ) goto L_005c9fe3;
L_005c9fe1:; BB(0x005c9fe1);
    /* 005c9fe1: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
L_005c9fe3:; BB(0x005c9fe3);
    /* 005c9fe3: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9fe5: jne 0x5c9ffe */ if (!fZ) goto L_005c9ffe;
L_005c9fe7:; BB(0x005c9fe7);
    /* 005c9fe7: mov eax, 1 */ r_eax = 0x1u;
    /* 005c9fec: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c9ff2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c9ff3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c9ff4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c9ff5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c9ff6: ret  */ FN_RET(0x005c9e4c); r_esp += 4; return;
L_005c9ff7:; BB(0x005c9ff7);
    /* 005c9ff7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c9ff9: je 0x5c9ffe */ if (fZ) goto L_005c9ffe;
L_005c9ffb:; BB(0x005c9ffb);
    /* 005c9ffb: or dword ptr [esi], 0x20 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_005c9ffe:; BB(0x005c9ffe);
    /* 005c9ffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca000: add esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca006: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca007: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca008: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca009: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca00a: ret  */ FN_RET(0x005c9e4c); r_esp += 4; return;
L_005ca00b:; BB(0x005ca00b);
    /* 005ca00b: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005ca00f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca012: je 0x5ca0bc */ if (fZ) goto L_005ca0bc;
L_005ca018:; BB(0x005ca018);
    /* 005ca018: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca01b: je 0x5ca055 */ if (fZ) goto L_005ca055;
L_005ca01d:; BB(0x005ca01d);
    /* 005ca01d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca01f: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca024u); f_005d2890();
    /* 005ca024: mov ebp, eax */ r_ebp = r_eax;
    /* 005ca026: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca028: je 0x5ca050 */ if (fZ) goto L_005ca050;
L_005ca02a:; BB(0x005ca02a);
    /* 005ca02a: movsx edx, word ptr [ebp + 0x12] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x12u));
    /* 005ca02e: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca030: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5ca035u); f_005ca3d9();
    /* 005ca035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca037: jne 0x5ca03c */ if (!fZ) goto L_005ca03c;
L_005ca039:; BB(0x005ca039);
    /* 005ca039: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca03c:; BB(0x005ca03c);
    /* 005ca03c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005ca03e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ca040: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x5ca043u); call_ind(t); }
    /* 005ca043: movzx edx, byte ptr [ebp + 0x14] */ r_edx = (u32)R8((u32)(r_ebp+0x14u));
    /* 005ca047: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca049: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca04b:; BB(0x005ca04b);
    /* 005ca04b: or edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca04e: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca050:; BB(0x005ca050);
    /* 005ca050: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca053: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca055:; BB(0x005ca055);
    /* 005ca055: mov eax, dword ptr [ebx + 0x964] */ r_eax = R32((u32)(r_ebx+0x964u));
    /* 005ca05b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca05d: jne 0x5ca06f */ if (!fZ) goto L_005ca06f;
L_005ca05f:; BB(0x005ca05f);
    /* 005ca05f: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca061: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca067:; BB(0x005ca067);
    /* 005ca067: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca069: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca06f:; BB(0x005ca06f);
    /* 005ca06f: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca073: cmp eax, 0x4c */ {  u32 a = r_eax; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca076: jne 0x5ca080 */ if (!fZ) goto L_005ca080;
L_005ca078:; BB(0x005ca078);
    /* 005ca078: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca07b: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca080:; BB(0x005ca080);
    /* 005ca080: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca082: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca087u); f_005d2890();
    /* 005ca087: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca089: je 0x5ca0b4 */ if (fZ) goto L_005ca0b4;
L_005ca08b:; BB(0x005ca08b);
    /* 005ca08b: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005ca08f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca092: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca094:; BB(0x005ca094);
    /* 005ca094: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca097: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca099:; BB(0x005ca099);
    /* 005ca099: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca09c: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca09e:; BB(0x005ca09e);
    /* 005ca09e: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0a1: je 0x5ca0ac */ if (fZ) goto L_005ca0ac;
L_005ca0a3:; BB(0x005ca0a3);
    /* 005ca0a3: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0a6: jne 0x5c9fdd */ if (!fZ) goto L_005c9fdd;
L_005ca0ac:; BB(0x005ca0ac);
    /* 005ca0ac: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca0af: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca0b4:; BB(0x005ca0b4);
    /* 005ca0b4: or edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca0b7: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca0bc:; BB(0x005ca0bc);
    /* 005ca0bc: movzx edx, byte ptr [ebp + 2] */ r_edx = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca0c0: cmp edx, 0x4f */ {  u32 a = r_edx; u32 b = 0x4fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca0c3: jge 0x5ca0ec */ if ((fS==fO)) goto L_005ca0ec;
L_005ca0c5:; BB(0x005ca0c5);
    /* 005ca0c5: cmp edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0c8: jne 0x5ca0f1 */ if (!fZ) goto L_005ca0f1;
L_005ca0ca:; BB(0x005ca0ca);
    /* 005ca0ca: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca0d0: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca0d3: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0d9:; BB(0x005ca0d9);
    /* 005ca0d9: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca0dc: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0e2:; BB(0x005ca0e2);
    /* 005ca0e2: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca0e7: jmp 0x5ca018 */ goto L_005ca018;
L_005ca0ec:; BB(0x005ca0ec);
    /* 005ca0ec: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca0ef: jle 0x5ca11c */ if ((fZ||fS!=fO)) goto L_005ca11c;
L_005ca0f1:; BB(0x005ca0f1);
    /* 005ca0f1: cmp edx, 0x51 */ {  u32 a = r_edx; u32 b = 0x51u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca0f4: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca0fa:; BB(0x005ca0fa);
    /* 005ca0fa: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca100: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca103: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca109:; BB(0x005ca109);
    /* 005ca109: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca10c: je 0x5ca018 */ if (fZ) goto L_005ca018;
L_005ca112:; BB(0x005ca112);
    /* 005ca112: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca117: jmp 0x5ca018 */ goto L_005ca018;
L_005ca11c:; BB(0x005ca11c);
    /* 005ca11c: mov edx, dword ptr [ebx + 0x964] */ r_edx = R32((u32)(r_ebx+0x964u));
    /* 005ca122: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca125: jne 0x5ca018 */ if (!fZ) goto L_005ca018;
L_005ca12b:; BB(0x005ca12b);
    /* 005ca12b: mov edi, 1 */ r_edi = 0x1u;
    /* 005ca130: jmp 0x5ca018 */ goto L_005ca018;
L_005ca135:; BB(0x005ca135);
    /* 005ca135: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ca137: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5ca13cu); f_005d2890();
    /* 005ca13c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005ca140: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca142: je 0x5ca36a */ if (fZ) goto L_005ca36a;
L_005ca148:; BB(0x005ca148);
    /* 005ca148: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca14a: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 005ca150: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca155u); f_0069792c();
    /* 005ca155: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005ca159: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ca15d: movsx edx, word ptr [eax + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 005ca161: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca163: call 0x5ca3d9 */ r_esp -= 4; W32(r_esp, 0x5ca168u); f_005ca3d9();
    /* 005ca168: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca16a: jne 0x5ca171 */ if (!fZ) goto L_005ca171;
L_005ca16c:; BB(0x005ca16c);
    /* 005ca16c: mov edi, 1 */ r_edi = 0x1u;
L_005ca171:; BB(0x005ca171);
    /* 005ca171: movzx edx, byte ptr [ebp + 1] */ r_edx = (u32)R8((u32)(r_ebp+0x1u));
    /* 005ca175: cmp edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca17b: je 0x5ca374 */ if (fZ) goto L_005ca374;
L_005ca181:; BB(0x005ca181);
    /* 005ca181: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 005ca185: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca187: mov word ptr [esp + 0x1a], dx */ W16((u32)(r_esp+0x1au), (u16)r_edx);
    /* 005ca18c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ca18e: mov word ptr [esp + 0x18], dx */ W16((u32)(r_esp+0x18u), (u16)r_edx);
    /* 005ca193: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 005ca198: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 005ca19d: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005ca1a2: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005ca1a7: mov word ptr [esp + 0x24], dx */ W16((u32)(r_esp+0x24u), (u16)r_edx);
    /* 005ca1ac: mov word ptr [esp + 0x22], dx */ W16((u32)(r_esp+0x22u), (u16)r_edx);
    /* 005ca1b1: mov word ptr [esp + 0x20], dx */ W16((u32)(r_esp+0x20u), (u16)r_edx);
    /* 005ca1b6: mov word ptr [esp + 0x1e], dx */ W16((u32)(r_esp+0x1eu), (u16)r_edx);
    /* 005ca1bb: mov word ptr [esp + 0x1c], dx */ W16((u32)(r_esp+0x1cu), (u16)r_edx);
    /* 005ca1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca1c1: call 0x695340 */ r_esp -= 4; W32(r_esp, 0x5ca1c6u); f_00695340();
    /* 005ca1c6: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005ca1ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca1cc: je 0x5ca32d */ if (fZ) goto L_005ca32d;
L_005ca1d2:; BB(0x005ca1d2);
    /* 005ca1d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca1d4: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005ca1d8: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005ca1dc: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005ca1e0: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005ca1e4: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005ca1e8: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 005ca1ec: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005ca1f0: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 005ca1f4: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 005ca1f8: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 005ca1fc: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 005ca200: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 005ca204: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca206: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 005ca20a: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 005ca20e: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 005ca212: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 005ca216: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 005ca21a: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 005ca21e: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 005ca222: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 005ca226: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca228: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 005ca22c: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 005ca230: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 005ca237: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 005ca23e: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 005ca245: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 005ca24c: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 005ca253: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 005ca25a: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 005ca261: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca263: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 005ca26a: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 005ca271: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 005ca278: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 005ca27f: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 005ca286: lea edx, [esp + 0xb0] */ r_edx = (u32)(r_esp+0xb0u);
    /* 005ca28d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca28e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 005ca292: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5ca297u); f_005c425c();
    /* 005ca297: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 005ca29b: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 005ca29f: lea ebp, [esp + 0x78] */ r_ebp = (u32)(r_esp+0x78u);
    /* 005ca2a3: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 005ca2aa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca2af: lea ecx, [esp + 0xc4] */ r_ecx = (u32)(r_esp+0xc4u);
    /* 005ca2b6: call 0x5d330c */ r_esp -= 4; W32(r_esp, 0x5ca2bbu); f_005d330c();
    /* 005ca2bb: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005ca2c0: movzx edx, word ptr [esp + 0x78] */ r_edx = (u32)R16((u32)(r_esp+0x78u));
    /* 005ca2c5: movzx ebp, word ptr [esp + 0x16] */ r_ebp = (u32)R16((u32)(r_esp+0x16u));
    /* 005ca2ca: movzx ebx, word ptr [esp + 0x82] */ r_ebx = (u32)R16((u32)(r_esp+0x82u));
    /* 005ca2d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005ca2d4: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 005ca2d7: movzx eax, word ptr [esp + 0x7a] */ r_eax = (u32)R16((u32)(r_esp+0x7au));
    /* 005ca2dc: sub ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005ca2de: movzx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)R16((u32)(r_esp+0x14u));
    /* 005ca2e3: movsx edx, bp */ r_edx = (u32)(i32)(i16)(u16)r_ebp;
    /* 005ca2e6: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca2e8: movsx eax, bx */ r_eax = (u32)(i32)(i16)(u16)r_ebx;
    /* 005ca2eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2ed: jge 0x5ca2f1 */ if ((fS==fO)) goto L_005ca2f1;
L_005ca2ef:; BB(0x005ca2ef);
    /* 005ca2ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005ca2f1:; BB(0x005ca2f1);
    /* 005ca2f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2f3: jge 0x5ca2f7 */ if ((fS==fO)) goto L_005ca2f7;
L_005ca2f5:; BB(0x005ca2f5);
    /* 005ca2f5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005ca2f7:; BB(0x005ca2f7);
    /* 005ca2f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005ca2f9: jge 0x5ca2fd */ if ((fS==fO)) goto L_005ca2fd;
L_005ca2fb:; BB(0x005ca2fb);
    /* 005ca2fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ca2fd:; BB(0x005ca2fd);
    /* 005ca2fd: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005ca301: movzx ebp, word ptr [ebx + 0x12] */ r_ebp = (u32)R16((u32)(r_ebx+0x12u));
    /* 005ca305: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca307: jge 0x5ca30c */ if ((fS==fO)) goto L_005ca30c;
L_005ca309:; BB(0x005ca309);
    /* 005ca309: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca30c:; BB(0x005ca30c);
    /* 005ca30c: movzx ebp, word ptr [ebx + 0x16] */ r_ebp = (u32)R16((u32)(r_ebx+0x16u));
    /* 005ca310: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca312: jge 0x5ca317 */ if ((fS==fO)) goto L_005ca317;
L_005ca314:; BB(0x005ca314);
    /* 005ca314: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca317:; BB(0x005ca317);
    /* 005ca317: mov edx, ebx */ r_edx = r_ebx;
    /* 005ca319: movzx ebx, word ptr [edx + 0x14] */ r_ebx = (u32)R16((u32)(r_edx+0x14u));
    /* 005ca31d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca31f: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca325:; BB(0x005ca325);
    /* 005ca325: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca328: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca32d:; BB(0x005ca32d);
    /* 005ca32d: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 005ca332: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ca336: movzx ebx, word ptr [eax + 0x12] */ r_ebx = (u32)R16((u32)(r_eax+0x12u));
    /* 005ca33a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca33c: jge 0x5ca341 */ if ((fS==fO)) goto L_005ca341;
L_005ca33e:; BB(0x005ca33e);
    /* 005ca33e: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca341:; BB(0x005ca341);
    /* 005ca341: movsx edx, word ptr [esp + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x16u));
    /* 005ca346: movzx ebx, word ptr [eax + 0x16] */ r_ebx = (u32)R16((u32)(r_eax+0x16u));
    /* 005ca34a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca34c: jge 0x5ca351 */ if ((fS==fO)) goto L_005ca351;
L_005ca34e:; BB(0x005ca34e);
    /* 005ca34e: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_005ca351:; BB(0x005ca351);
    /* 005ca351: movsx edx, word ptr [esp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 005ca356: movzx ebx, word ptr [eax + 0x14] */ r_ebx = (u32)R16((u32)(r_eax+0x14u));
    /* 005ca35a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca35c: jge 0x5c9fdd */ if ((fS==fO)) goto L_005c9fdd;
L_005ca362:; BB(0x005ca362);
    /* 005ca362: or edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca365: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca36a:; BB(0x005ca36a);
    /* 005ca36a: mov edi, 0x20 */ r_edi = 0x20u;
    /* 005ca36f: jmp 0x5c9fdd */ goto L_005c9fdd;
L_005ca374:; BB(0x005ca374);
    /* 005ca374: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 005ca37a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca37c: je 0x5ca181 */ if (fZ) goto L_005ca181;
L_005ca382:; BB(0x005ca382);
    /* 005ca382: mov ebp, dword ptr [edx + 0x2b8] */ r_ebp = R32((u32)(r_edx+0x2b8u));
    /* 005ca388: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca38a: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca38c:; BB(0x005ca38c);
    /* 005ca38c: mov ebp, dword ptr [edx + 0x2bc] */ r_ebp = R32((u32)(r_edx+0x2bcu));
    /* 005ca392: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca394: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca396:; BB(0x005ca396);
    /* 005ca396: mov ebp, dword ptr [edx + 0x2c0] */ r_ebp = R32((u32)(r_edx+0x2c0u));
    /* 005ca39c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca39e: jne 0x5ca3aa */ if (!fZ) goto L_005ca3aa;
L_005ca3a0:; BB(0x005ca3a0);
    /* 005ca3a0: mov ebp, dword ptr [edx + 0x2c4] */ r_ebp = R32((u32)(r_edx+0x2c4u));
    /* 005ca3a6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3a8: je 0x5ca3b1 */ if (fZ) goto L_005ca3b1;
L_005ca3aa:; BB(0x005ca3aa);
    /* 005ca3aa: mov ebp, 1 */ r_ebp = 0x1u;
    /* 005ca3af: jmp 0x5ca3b3 */ goto L_005ca3b3;
L_005ca3b1:; BB(0x005ca3b1);
    /* 005ca3b1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005ca3b3:; BB(0x005ca3b3);
    /* 005ca3b3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3b5: je 0x5ca3c7 */ if (fZ) goto L_005ca3c7;
L_005ca3b7:; BB(0x005ca3b7);
    /* 005ca3b7: movzx edx, byte ptr [edx + 0x2c8] */ r_edx = (u32)R8((u32)(r_edx+0x2c8u));
    /* 005ca3be: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca3c1: je 0x5ca181 */ if (fZ) goto L_005ca181;
L_005ca3c7:; BB(0x005ca3c7);
    /* 005ca3c7: or edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005ca3ca: jmp 0x5ca181 */ goto L_005ca181;
}

