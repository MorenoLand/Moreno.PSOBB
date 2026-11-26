#include "protos.h"

void f_0080f304(void) /* sub_80F304 */
{
    FN_ENTER(0x0080f304);
    /* 0080f304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f306: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f307: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f308: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080f30b: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0080f30f: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 0080f313: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0080f317: mov eax, dword ptr [0xaafdd0] */ r_eax = R32((u32)(0xaafdd0u));
    /* 0080f31c: mov ecx, dword ptr [eax + esi*8] */ r_ecx = R32((u32)(r_eax+r_esi*8));
    /* 0080f31f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f321: je 0x80f518 */ if (fZ) goto L_0080f518;
L_0080f327:; BB(0x0080f327);
    /* 0080f327: mov eax, dword ptr [eax + esi*8 + 4] */ r_eax = R32((u32)(r_eax+r_esi*8+0x4u));
    /* 0080f32b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f32e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f330: jl 0x80f518 */ if ((fS!=fO)) goto L_0080f518;
L_0080f336:; BB(0x0080f336);
    /* 0080f336: mov eax, dword ptr [ecx + ebx*8] */ r_eax = R32((u32)(r_ecx+r_ebx*8));
    /* 0080f339: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f33b: je 0x80f503 */ if (fZ) goto L_0080f503;
L_0080f341:; BB(0x0080f341);
    /* 0080f341: mov ecx, dword ptr [ecx + ebx*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 0080f345: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f348: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f34a: jl 0x80f503 */ if ((fS!=fO)) goto L_0080f503;
L_0080f350:; BB(0x0080f350);
    /* 0080f350: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f351: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0080f354: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080f356: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0080f359: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f35b: mov ebx, dword ptr [eax + ecx] */ r_ebx = R32((u32)(r_eax+r_ecx));
    /* 0080f35e: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x80f363u); f_00807e20();
    /* 0080f363: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080f364: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f366: je 0x80f3d4 */ if (fZ) goto L_0080f3d4;
L_0080f368:; BB(0x0080f368);
    /* 0080f368: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x80f36du); f_0078b1c4();
    /* 0080f36d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f36f: je 0x80f3a3 */ if (fZ) goto L_0080f3a3;
L_0080f371:; BB(0x0080f371);
    /* 0080f371: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f374: jne 0x80f38a */ if (!fZ) goto L_0080f38a;
L_0080f376:; BB(0x0080f376);
    /* 0080f376: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f379: push 0x9808ac */ { u32 v = 0x9808acu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f37e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f37f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f380: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f385u); f_0078e574();
    /* 0080f385: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f388: jmp 0x80f3e6 */ goto L_0080f3e6;
L_0080f38a:; BB(0x0080f38a);
    /* 0080f38a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f38d: jne 0x80f3e6 */ if (!fZ) goto L_0080f3e6;
L_0080f38f:; BB(0x0080f38f);
    /* 0080f38f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f392: push 0x9808b8 */ { u32 v = 0x9808b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f397: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f399: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f39eu); f_0078e574();
    /* 0080f39e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f3a1: jmp 0x80f3e6 */ goto L_0080f3e6;
L_0080f3a3:; BB(0x0080f3a3);
    /* 0080f3a3: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 0080f3a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f3aa: jne 0x80f3c0 */ if (!fZ) goto L_0080f3c0;
L_0080f3ac:; BB(0x0080f3ac);
    /* 0080f3ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f3af: push 0x98089c */ { u32 v = 0x98089cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3b6: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f3bbu); f_0078e574();
    /* 0080f3bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f3be: jmp 0x80f3e6 */ goto L_0080f3e6;
L_0080f3c0:; BB(0x0080f3c0);
    /* 0080f3c0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f3c3: push 0x9808a4 */ { u32 v = 0x9808a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3ca: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f3cfu); f_0078e574();
    /* 0080f3cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f3d2: jmp 0x80f3e6 */ goto L_0080f3e6;
L_0080f3d4:; BB(0x0080f3d4);
    /* 0080f3d4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f3d7: push 0x98089c */ { u32 v = 0x98089cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3de: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f3e3u); f_0078e574();
    /* 0080f3e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080f3e6:; BB(0x0080f3e6);
    /* 0080f3e6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f3e9: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f3ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f3f0: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80f3f5u); f_005b9910();
    /* 0080f3f5: mov ecx, eax */ r_ecx = r_eax;
    /* 0080f3f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f3fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f3fc: jl 0x80f50e */ if ((fS!=fO)) goto L_0080f50e;
L_0080f402:; BB(0x0080f402);
    /* 0080f402: cmp ecx, dword ptr [0xaafed4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f408: jg 0x80f50e */ if ((!fZ&&fS==fO)) goto L_0080f50e;
L_0080f40e:; BB(0x0080f40e);
    /* 0080f40e: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
    /* 0080f414: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 0080f419: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080f41b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f41d: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080f420: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f422: jle 0x80f44d */ if ((fZ||fS!=fO)) goto L_0080f44d;
L_0080f424:; BB(0x0080f424);
    /* 0080f424: mov esi, edx */ r_esi = r_edx;
    /* 0080f426: mov ebx, ecx */ r_ebx = r_ecx;
L_0080f428:; BB(0x0080f428);
    /* 0080f428: mov ecx, edi */ r_ecx = r_edi;
    /* 0080f42a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f42fu); f_0061cdb0();
    /* 0080f42f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f431: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 0080f435: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f438: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f43b: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f43d: jl 0x80f428 */ if ((fS!=fO)) goto L_0080f428;
L_0080f43f:; BB(0x0080f43f);
    /* 0080f43f: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
    /* 0080f445: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080f447: mov edx, esi */ r_edx = r_esi;
    /* 0080f449: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
L_0080f44d:; BB(0x0080f44d);
    /* 0080f44d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f44f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f451: jle 0x80f4eb */ if ((fZ||fS!=fO)) goto L_0080f4eb;
L_0080f457:; BB(0x0080f457);
    /* 0080f457: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0080f45b: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0080f45f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f461: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0080f464: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f466: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f468: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f46a: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f46c: lea eax, [edi + ebx + 4] */ r_eax = (u32)(r_edi+r_ebx+0x4u);
    /* 0080f470: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0080f474: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0080f478: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f47a: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0080f47d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f47f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f481: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f483: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f485: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f487: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0080f48b: mov esi, edx */ r_esi = r_edx;
L_0080f48d:; BB(0x0080f48d);
    /* 0080f48d: mov ecx, dword ptr [0xaafee0] */ r_ecx = R32((u32)(0xaafee0u));
    /* 0080f493: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f494: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0080f497: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f49d: mov word ptr [edi + 4], cx */ W16((u32)(r_edi+0x4u), (u16)r_ecx);
    /* 0080f4a1: mov ecx, dword ptr [0xaafee8] */ r_ecx = R32((u32)(0xaafee8u));
    /* 0080f4a7: mov dword ptr [0xaafee0], eax */ W32((u32)(0xaafee0u), r_eax);
    /* 0080f4ac: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0080f4af: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 0080f4b2: mov dword ptr [0xaafee8], eax */ W32((u32)(0xaafee8u), r_eax);
    /* 0080f4b7: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0080f4bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f4bc: call 0x812370 */ r_esp -= 4; W32(r_esp, 0x80f4c1u); f_00812370();
    /* 0080f4c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f4c6: jl 0x80f4d4 */ if ((fS!=fO)) goto L_0080f4d4;
L_0080f4c8:; BB(0x0080f4c8);
    /* 0080f4c8: add dword ptr [0xaafee8], eax */ { u32 ad = (u32)(0xaafee8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f4ce: add dword ptr [0xaafee0], eax */ { u32 ad = (u32)(0xaafee0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080f4d4:; BB(0x0080f4d4);
    /* 0080f4d4: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f4d7: add ebx, 0x44 */ {  u32 a = r_ebx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f4da: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f4dd: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f4df: jl 0x80f48d */ if ((fS!=fO)) goto L_0080f48d;
L_0080f4e1:; BB(0x0080f4e1);
    /* 0080f4e1: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0080f4e5: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
L_0080f4eb:; BB(0x0080f4eb);
    /* 0080f4eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f4ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f4ed: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f4f1: call 0x80fef8 */ r_esp -= 4; W32(r_esp, 0x80f4f6u); f_0080fef8();
    /* 0080f4f6: mov eax, 1 */ r_eax = 0x1u;
    /* 0080f4fb: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f4fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f4ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f500: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f501: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f502: ret  */ FN_RET(0x0080f304); r_esp += 4; return;
L_0080f503:; BB(0x0080f503);
    /* 0080f503: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f508: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f50du); f_0061cdb0();
    /* 0080f50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0080f50e:; BB(0x0080f50e);
    /* 0080f50e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f510: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f514: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f515: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f517: ret  */ FN_RET(0x0080f304); r_esp += 4; return;
L_0080f518:; BB(0x0080f518);
    /* 0080f518: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f51d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f522u); f_0061cdb0();
    /* 0080f522: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f524: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f527: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f528: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f529: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f52a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f52b: ret  */ FN_RET(0x0080f304); r_esp += 4; return;
}

void f_0080f52c(void) /* sub_80F52C */
{
    FN_ENTER(0x0080f52c);
    /* 0080f52c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f52d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f52e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f52f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f530: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080f533: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0080f537: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 0080f53b: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0080f53f: mov eax, dword ptr [0xaafdd0] */ r_eax = R32((u32)(0xaafdd0u));
    /* 0080f544: mov ecx, dword ptr [eax + ebx*8] */ r_ecx = R32((u32)(r_eax+r_ebx*8));
    /* 0080f547: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f549: je 0x80f76a */ if (fZ) goto L_0080f76a;
L_0080f54f:; BB(0x0080f54f);
    /* 0080f54f: mov eax, dword ptr [eax + ebx*8 + 4] */ r_eax = R32((u32)(r_eax+r_ebx*8+0x4u));
    /* 0080f553: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f556: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f558: jl 0x80f76a */ if ((fS!=fO)) goto L_0080f76a;
L_0080f55e:; BB(0x0080f55e);
    /* 0080f55e: mov eax, dword ptr [ecx + ebp*8] */ r_eax = R32((u32)(r_ecx+r_ebp*8));
    /* 0080f561: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f563: je 0x80f755 */ if (fZ) goto L_0080f755;
L_0080f569:; BB(0x0080f569);
    /* 0080f569: mov ecx, dword ptr [ecx + ebp*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_ebp*8+0x4u));
    /* 0080f56d: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f570: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f572: jl 0x80f755 */ if ((fS!=fO)) goto L_0080f755;
L_0080f578:; BB(0x0080f578);
    /* 0080f578: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f579: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0080f57c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080f57e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0080f581: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f583: mov ebp, dword ptr [eax + ecx + 4] */ r_ebp = R32((u32)(r_eax+r_ecx+0x4u));
    /* 0080f587: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x80f58cu); f_00807e20();
    /* 0080f58c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080f58d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f58f: je 0x80f5fd */ if (fZ) goto L_0080f5fd;
L_0080f591:; BB(0x0080f591);
    /* 0080f591: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x80f596u); f_0078b1c4();
    /* 0080f596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f598: je 0x80f5cc */ if (fZ) goto L_0080f5cc;
L_0080f59a:; BB(0x0080f59a);
    /* 0080f59a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f59d: jne 0x80f5b3 */ if (!fZ) goto L_0080f5b3;
L_0080f59f:; BB(0x0080f59f);
    /* 0080f59f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f5a2: push 0x9808d0 */ { u32 v = 0x9808d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5a9: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f5aeu); f_0078e574();
    /* 0080f5ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f5b1: jmp 0x80f60f */ goto L_0080f60f;
L_0080f5b3:; BB(0x0080f5b3);
    /* 0080f5b3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f5b6: jne 0x80f60f */ if (!fZ) goto L_0080f60f;
L_0080f5b8:; BB(0x0080f5b8);
    /* 0080f5b8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f5bb: push 0x9808dc */ { u32 v = 0x9808dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5c2: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f5c7u); f_0078e574();
    /* 0080f5c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f5ca: jmp 0x80f60f */ goto L_0080f60f;
L_0080f5cc:; BB(0x0080f5cc);
    /* 0080f5cc: mov eax, dword ptr [0xaab1cc] */ r_eax = R32((u32)(0xaab1ccu));
    /* 0080f5d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f5d3: jne 0x80f5e9 */ if (!fZ) goto L_0080f5e9;
L_0080f5d5:; BB(0x0080f5d5);
    /* 0080f5d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f5d8: push 0x9808c0 */ { u32 v = 0x9808c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5df: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f5e4u); f_0078e574();
    /* 0080f5e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f5e7: jmp 0x80f60f */ goto L_0080f60f;
L_0080f5e9:; BB(0x0080f5e9);
    /* 0080f5e9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f5ec: push 0x9808c8 */ { u32 v = 0x9808c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5f1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f5f3: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f5f8u); f_0078e574();
    /* 0080f5f8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f5fb: jmp 0x80f60f */ goto L_0080f60f;
L_0080f5fd:; BB(0x0080f5fd);
    /* 0080f5fd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f600: push 0x9808c0 */ { u32 v = 0x9808c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f605: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f607: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f60cu); f_0078e574();
    /* 0080f60c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080f60f:; BB(0x0080f60f);
    /* 0080f60f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080f612: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f619: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80f61eu); f_005b9910();
    /* 0080f61e: mov ecx, eax */ r_ecx = r_eax;
    /* 0080f620: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f623: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f625: jl 0x80f760 */ if ((fS!=fO)) goto L_0080f760;
L_0080f62b:; BB(0x0080f62b);
    /* 0080f62b: cmp ecx, dword ptr [0xaafed4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f631: jg 0x80f760 */ if ((!fZ&&fS==fO)) goto L_0080f760;
L_0080f637:; BB(0x0080f637);
    /* 0080f637: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
    /* 0080f63d: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0080f642: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080f644: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080f646: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080f649: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f64b: jle 0x80f676 */ if ((fZ||fS!=fO)) goto L_0080f676;
L_0080f64d:; BB(0x0080f64d);
    /* 0080f64d: mov ebx, edx */ r_ebx = r_edx;
    /* 0080f64f: mov ebp, ecx */ r_ebp = r_ecx;
L_0080f651:; BB(0x0080f651);
    /* 0080f651: mov ecx, edi */ r_ecx = r_edi;
    /* 0080f653: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f658u); f_0061cdb0();
    /* 0080f658: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f65a: mov word ptr [edi + 2], ax */ W16((u32)(r_edi+0x2u), (u16)r_eax);
    /* 0080f65e: add edi, 0x48 */ {  u32 a = r_edi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f661: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f664: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f666: jl 0x80f651 */ if ((fS!=fO)) goto L_0080f651;
L_0080f668:; BB(0x0080f668);
    /* 0080f668: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
    /* 0080f66e: mov edx, ebx */ r_edx = r_ebx;
    /* 0080f670: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 0080f674: mov ecx, ebp */ r_ecx = r_ebp;
L_0080f676:; BB(0x0080f676);
    /* 0080f676: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f678: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f67a: jle 0x80f709 */ if ((fZ||fS!=fO)) goto L_0080f709;
L_0080f680:; BB(0x0080f680);
    /* 0080f680: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0080f684: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0080f688: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0080f68c: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0080f690: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0080f693: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f695: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f697: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f699: lea ebp, [eax + eax*8] */ r_ebp = (u32)(r_eax+r_eax*8);
    /* 0080f69c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f69e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f6a0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f6a2: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0080f6a4:; BB(0x0080f6a4);
    /* 0080f6a4: mov edx, dword ptr [0xaafedc] */ r_edx = R32((u32)(0xaafedcu));
    /* 0080f6aa: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0080f6ae: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0080f6b1: lea ecx, [edx + 0x1000] */ r_ecx = (u32)(r_edx+0x1000u);
    /* 0080f6b7: mov word ptr [esi + edi + 0xa], cx */ W16((u32)(r_esi+r_edi+0xau), (u16)r_ecx);
    /* 0080f6bc: mov ecx, dword ptr [0xaafee4] */ r_ecx = R32((u32)(0xaafee4u));
    /* 0080f6c2: mov word ptr [esi + edi + 4], cx */ W16((u32)(r_esi+r_edi+0x4u), (u16)r_ecx);
    /* 0080f6c7: movsx edi, word ptr [esi + edi + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+r_edi+0x6u));
    /* 0080f6cc: lea ebx, [ecx + 1] */ r_ebx = (u32)(r_ecx+0x1u);
    /* 0080f6cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f6d1: jle 0x80f721 */ if ((fZ||fS!=fO)) goto L_0080f721;
L_0080f6d3:; BB(0x0080f6d3);
    /* 0080f6d3: lea eax, [edi + ecx + 1] */ r_eax = (u32)(r_edi+r_ecx+0x1u);
    /* 0080f6d7: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 0080f6dc: lea edx, [edi + edx + 1] */ r_edx = (u32)(r_edi+r_edx+0x1u);
    /* 0080f6e0: mov dword ptr [0xaafedc], edx */ W32((u32)(0xaafedcu), r_edx);
L_0080f6e6:; BB(0x0080f6e6);
    /* 0080f6e6: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0080f6ea: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0080f6ee: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f6f1: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f6f4: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080f6f7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f6f9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0080f6fd: jl 0x80f6a4 */ if ((fS!=fO)) goto L_0080f6a4;
L_0080f6ff:; BB(0x0080f6ff);
    /* 0080f6ff: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0080f703: mov edi, dword ptr [0xaafed8] */ r_edi = R32((u32)(0xaafed8u));
L_0080f709:; BB(0x0080f709);
    /* 0080f709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f70a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f70b: push dword ptr [esp + 0x4c] */ { u32 v = R32((u32)(r_esp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f70f: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x80f714u); f_00810030();
    /* 0080f714: mov eax, 1 */ r_eax = 0x1u;
    /* 0080f719: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f71c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f71d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f71e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f71f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f720: ret  */ FN_RET(0x0080f52c); r_esp += 4; return;
L_0080f721:; BB(0x0080f721);
    /* 0080f721: mov dword ptr [0xaafee4], ebx */ W32((u32)(0xaafee4u), r_ebx);
    /* 0080f727: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f728: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 0080f72d: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0080f731: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f732: call 0x8123a4 */ r_esp -= 4; W32(r_esp, 0x80f737u); f_008123a4();
    /* 0080f737: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f73a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f73c: jle 0x80f6e6 */ if ((fZ||fS!=fO)) goto L_0080f6e6;
L_0080f73e:; BB(0x0080f73e);
    /* 0080f73e: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0080f742: add dword ptr [0xaafee4], eax */ { u32 ad = (u32)(0xaafee4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f748: mov word ptr [esi + edx + 6], ax */ W16((u32)(r_esi+r_edx+0x6u), (u16)r_eax);
    /* 0080f74d: add dword ptr [0xaafedc], eax */ { u32 ad = (u32)(0xaafedcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080f753: jmp 0x80f6e6 */ goto L_0080f6e6;
L_0080f755:; BB(0x0080f755);
    /* 0080f755: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f75a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f75fu); f_0061cdb0();
    /* 0080f75f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0080f760:; BB(0x0080f760);
    /* 0080f760: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f762: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f765: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f766: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f767: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f768: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f769: ret  */ FN_RET(0x0080f52c); r_esp += 4; return;
L_0080f76a:; BB(0x0080f76a);
    /* 0080f76a: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f76f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f774u); f_0061cdb0();
    /* 0080f774: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f776: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f779: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f77a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f77b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f77c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f77d: ret  */ FN_RET(0x0080f52c); r_esp += 4; return;
}

void f_0080f780(void) /* sub_80F780 */
{
    FN_ENTER(0x0080f780);
    /* 0080f780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f781: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0080f785: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f786: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80f78bu); f_0082e940();
    /* 0080f78b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080f78c: mov dword ptr [0xaafed8], eax */ W32((u32)(0xaafed8u), r_eax);
    /* 0080f791: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080f793: je 0x80f7a2 */ if (fZ) goto L_0080f7a2;
L_0080f795:; BB(0x0080f795);
    /* 0080f795: mov dword ptr [0xaafed4], ebp */ W32((u32)(0xaafed4u), r_ebp);
    /* 0080f79b: mov eax, 1 */ r_eax = 0x1u;
    /* 0080f7a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f7a1: ret  */ FN_RET(0x0080f780); r_esp += 4; return;
L_0080f7a2:; BB(0x0080f7a2);
    /* 0080f7a2: mov dword ptr [0xaafed8], 0 */ W32((u32)(0xaafed8u), 0x0u);
    /* 0080f7ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080f7ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f7af: ret  */ FN_RET(0x0080f780); r_esp += 4; return;
}

void f_0080f7b0(void) /* sub_80F7B0 */
{
    FN_ENTER(0x0080f7b0);
    /* 0080f7b0: mov dword ptr [0xaafec8], 0x3f800000 */ W32((u32)(0xaafec8u), 0x3f800000u);
    /* 0080f7ba: mov dword ptr [0xaafecc], 0x41000000 */ W32((u32)(0xaafeccu), 0x41000000u);
    /* 0080f7c4: mov dword ptr [0xaafed0], 0x3fc00000 */ W32((u32)(0xaafed0u), 0x3fc00000u);
    /* 0080f7ce: ret  */ FN_RET(0x0080f7b0); r_esp += 4; return;
}

void f_0080f7d0(void) /* sub_80F7D0 */
{
    FN_ENTER(0x0080f7d0);
    /* 0080f7d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7d4: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080f7d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f7d9: mov ebx, eax */ r_ebx = r_eax;
L_0080f7db:; BB(0x0080f7db);
    /* 0080f7db: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0080f7df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7e1: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x80f7e6u); f_0080bf28();
    /* 0080f7e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f7e9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f7ec: je 0x80f820 */ if (fZ) goto L_0080f820;
L_0080f7ee:; BB(0x0080f7ee);
    /* 0080f7ee: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080f7f1: cmp ebx, 0x12 */ {  u32 a = r_ebx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f7f4: jl 0x80f7db */ if ((fS!=fO)) goto L_0080f7db;
L_0080f7f6:; BB(0x0080f7f6);
    /* 0080f7f6: movzx eax, word ptr [0xaafedc] */ r_eax = (u32)R16((u32)(0xaafedcu));
    /* 0080f7fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080f7fe: call 0x7ba3ec */ r_esp -= 4; W32(r_esp, 0x80f803u); f_007ba3ec();
    /* 0080f803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080f804: mov eax, dword ptr [0xaafee4] */ r_eax = R32((u32)(0xaafee4u));
    /* 0080f809: mov dword ptr [0xab02b0], eax */ W32((u32)(0xab02b0u), r_eax);
    /* 0080f80e: call 0x8102a4 */ r_esp -= 4; W32(r_esp, 0x80f813u); f_008102a4();
    /* 0080f813: mov eax, 1 */ r_eax = 0x1u;
    /* 0080f818: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080f81b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080f81c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080f81d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080f81e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080f81f: ret  */ FN_RET(0x0080f7d0); r_esp += 4; return;
L_0080f820:; BB(0x0080f820);
    /* 0080f820: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0080f824: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f826: jl 0x80f7ee */ if ((fS!=fO)) goto L_0080f7ee;
L_0080f828:; BB(0x0080f828);
    /* 0080f828: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x80f82du); f_005ba1f0();
    /* 0080f82d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f82f: jne 0x80fa8e */ if (!fZ) goto L_0080fa8e;
L_0080f835:; BB(0x0080f835);
    /* 0080f835: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0080f839: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0080f83d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0080f841: mov edi, dword ptr [0xaafdd0] */ r_edi = R32((u32)(0xaafdd0u));
    /* 0080f847: mov edx, dword ptr [edi + ebp*8] */ r_edx = R32((u32)(r_edi+r_ebp*8));
    /* 0080f84a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f84c: je 0x80fa7e */ if (fZ) goto L_0080fa7e;
L_0080f852:; BB(0x0080f852);
    /* 0080f852: mov edi, dword ptr [edi + ebp*8 + 4] */ r_edi = R32((u32)(r_edi+r_ebp*8+0x4u));
    /* 0080f856: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080f859: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f85b: jl 0x80fa7e */ if ((fS!=fO)) goto L_0080fa7e;
L_0080f861:; BB(0x0080f861);
    /* 0080f861: mov eax, dword ptr [edx + esi*8] */ r_eax = R32((u32)(r_edx+r_esi*8));
    /* 0080f864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f866: je 0x80fa6e */ if (fZ) goto L_0080fa6e;
L_0080f86c:; BB(0x0080f86c);
    /* 0080f86c: mov edx, dword ptr [edx + esi*8 + 4] */ r_edx = R32((u32)(r_edx+r_esi*8+0x4u));
    /* 0080f870: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080f873: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f875: jl 0x80fa6e */ if ((fS!=fO)) goto L_0080fa6e;
L_0080f87b:; BB(0x0080f87b);
    /* 0080f87b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080f87c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f87e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080f880: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0080f883: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080f885: mov esi, dword ptr [eax + edx + 4] */ r_esi = R32((u32)(r_eax+r_edx+0x4u));
    /* 0080f889: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x80f88eu); f_00807e20();
    /* 0080f88e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080f88f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f891: je 0x80f904 */ if (fZ) goto L_0080f904;
L_0080f893:; BB(0x0080f893);
    /* 0080f893: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x80f898u); f_0078b1c4();
    /* 0080f898: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f89a: je 0x80f8d0 */ if (fZ) goto L_0080f8d0;
L_0080f89c:; BB(0x0080f89c);
    /* 0080f89c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f89f: jne 0x80f8b6 */ if (!fZ) goto L_0080f8b6;
L_0080f8a1:; BB(0x0080f8a1);
    /* 0080f8a1: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f8a5: push 0x9808d0 */ { u32 v = 0x9808d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8ac: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f8b1u); f_0078e574();
    /* 0080f8b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f8b4: jmp 0x80f917 */ goto L_0080f917;
L_0080f8b6:; BB(0x0080f8b6);
    /* 0080f8b6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f8b9: jne 0x80f917 */ if (!fZ) goto L_0080f917;
L_0080f8bb:; BB(0x0080f8bb);
    /* 0080f8bb: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f8bf: push 0x9808dc */ { u32 v = 0x9808dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8c6: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f8cbu); f_0078e574();
    /* 0080f8cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f8ce: jmp 0x80f917 */ goto L_0080f917;
L_0080f8d0:; BB(0x0080f8d0);
    /* 0080f8d0: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0080f8d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080f8d8: jne 0x80f8ef */ if (!fZ) goto L_0080f8ef;
L_0080f8da:; BB(0x0080f8da);
    /* 0080f8da: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f8de: push 0x9808c0 */ { u32 v = 0x9808c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8e5: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f8eau); f_0078e574();
    /* 0080f8ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f8ed: jmp 0x80f917 */ goto L_0080f917;
L_0080f8ef:; BB(0x0080f8ef);
    /* 0080f8ef: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f8f3: push 0x9808c8 */ { u32 v = 0x9808c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f8fa: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f8ffu); f_0078e574();
    /* 0080f8ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f902: jmp 0x80f917 */ goto L_0080f917;
L_0080f904:; BB(0x0080f904);
    /* 0080f904: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f908: push 0x9808c0 */ { u32 v = 0x9808c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0080f90d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080f90e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f90f: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80f914u); f_0078e574();
    /* 0080f914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080f917:; BB(0x0080f917);
    /* 0080f917: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0080f91b: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080f921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080f922: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80f927u); f_005b9910();
    /* 0080f927: mov edi, eax */ r_edi = r_eax;
    /* 0080f929: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080f92c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f92e: jl 0x80f7ee */ if ((fS!=fO)) goto L_0080f7ee;
L_0080f934:; BB(0x0080f934);
    /* 0080f934: cmp edi, dword ptr [0xaafed4] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f93a: jg 0x80f7ee */ if ((!fZ&&fS==fO)) goto L_0080f7ee;
L_0080f940:; BB(0x0080f940);
    /* 0080f940: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080f946: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 0080f94b: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080f94d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080f94f: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080f952: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f954: jle 0x80f987 */ if ((fZ||fS!=fO)) goto L_0080f987;
L_0080f956:; BB(0x0080f956);
    /* 0080f956: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080f95a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080f95c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0080f95f: mov ebx, edx */ r_ebx = r_edx;
L_0080f961:; BB(0x0080f961);
    /* 0080f961: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080f963: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80f968u); f_0061cdb0();
    /* 0080f968: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f96a: mov word ptr [ebp + 2], ax */ W16((u32)(r_ebp+0x2u), (u16)r_eax);
    /* 0080f96e: add ebp, 0x48 */ {  u32 a = r_ebp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080f971: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f974: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080f976: jl 0x80f961 */ if ((fS!=fO)) goto L_0080f961;
L_0080f978:; BB(0x0080f978);
    /* 0080f978: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0080f97c: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080f982: mov edx, ebx */ r_edx = r_ebx;
    /* 0080f984: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0080f987:; BB(0x0080f987);
    /* 0080f987: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080f989: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f98b: jle 0x80fa2a */ if ((fZ||fS!=fO)) goto L_0080fa2a;
L_0080f991:; BB(0x0080f991);
    /* 0080f991: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0080f995: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0080f999: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0080f99d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0080f9a1: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080f9a5: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0080f9a8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0080f9ab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9ad: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9af: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9b1: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0080f9b5: mov ebx, esi */ r_ebx = r_esi;
    /* 0080f9b7: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0080f9ba: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9bc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9be: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080f9c0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0080f9c2:; BB(0x0080f9c2);
    /* 0080f9c2: mov edx, dword ptr [0xaafedc] */ r_edx = R32((u32)(0xaafedcu));
    /* 0080f9c8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0080f9cc: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0080f9cf: lea ecx, [edx + 0x1000] */ r_ecx = (u32)(r_edx+0x1000u);
    /* 0080f9d5: mov word ptr [ebx + edi + 0xa], cx */ W16((u32)(r_ebx+r_edi+0xau), (u16)r_ecx);
    /* 0080f9da: mov ecx, dword ptr [0xaafee4] */ r_ecx = R32((u32)(0xaafee4u));
    /* 0080f9e0: mov word ptr [ebx + edi + 4], cx */ W16((u32)(r_ebx+r_edi+0x4u), (u16)r_ecx);
    /* 0080f9e5: movsx edi, word ptr [ebx + edi + 6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_edi+0x6u));
    /* 0080f9ea: lea ebp, [ecx + 1] */ r_ebp = (u32)(r_ecx+0x1u);
    /* 0080f9ed: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080f9ef: jle 0x80fa3a */ if ((fZ||fS!=fO)) goto L_0080fa3a;
L_0080f9f1:; BB(0x0080f9f1);
    /* 0080f9f1: lea eax, [edi + ecx + 1] */ r_eax = (u32)(r_edi+r_ecx+0x1u);
    /* 0080f9f5: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 0080f9fa: lea edx, [edi + edx + 1] */ r_edx = (u32)(r_edi+r_edx+0x1u);
    /* 0080f9fe: mov dword ptr [0xaafedc], edx */ W32((u32)(0xaafedcu), r_edx);
L_0080fa04:; BB(0x0080fa04);
    /* 0080fa04: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0080fa08: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0080fa0c: add ebx, 0x48 */ {  u32 a = r_ebx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080fa0f: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fa12: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080fa15: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fa17: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0080fa1b: jl 0x80f9c2 */ if ((fS!=fO)) goto L_0080f9c2;
L_0080fa1d:; BB(0x0080fa1d);
    /* 0080fa1d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0080fa21: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0080fa24: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
L_0080fa2a:; BB(0x0080fa2a);
    /* 0080fa2a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa2b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa2d: call 0x810030 */ r_esp -= 4; W32(r_esp, 0x80fa32u); f_00810030();
    /* 0080fa32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fa35: jmp 0x80f7ee */ goto L_0080f7ee;
L_0080fa3a:; BB(0x0080fa3a);
    /* 0080fa3a: mov dword ptr [0xaafee4], ebp */ W32((u32)(0xaafee4u), r_ebp);
    /* 0080fa40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa41: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 0080fa46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080fa4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa4b: call 0x8123a4 */ r_esp -= 4; W32(r_esp, 0x80fa50u); f_008123a4();
    /* 0080fa50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fa53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fa55: jle 0x80fa04 */ if ((fZ||fS!=fO)) goto L_0080fa04;
L_0080fa57:; BB(0x0080fa57);
    /* 0080fa57: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080fa5b: add dword ptr [0xaafee4], eax */ { u32 ad = (u32)(0xaafee4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080fa61: mov word ptr [ebx + edx + 6], ax */ W16((u32)(r_ebx+r_edx+0x6u), (u16)r_eax);
    /* 0080fa66: add dword ptr [0xaafedc], eax */ { u32 ad = (u32)(0xaafedcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080fa6c: jmp 0x80fa04 */ goto L_0080fa04;
L_0080fa6e:; BB(0x0080fa6e);
    /* 0080fa6e: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa73: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fa78u); f_0061cdb0();
    /* 0080fa78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fa79: jmp 0x80f7ee */ goto L_0080f7ee;
L_0080fa7e:; BB(0x0080fa7e);
    /* 0080fa7e: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fa83: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fa88u); f_0061cdb0();
    /* 0080fa88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fa89: jmp 0x80f7ee */ goto L_0080f7ee;
L_0080fa8e:; BB(0x0080fa8e);
    /* 0080fa8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080fa90: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080fa93: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080fa94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080fa95: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080fa96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080fa97: ret  */ FN_RET(0x0080f7d0); r_esp += 4; return;
}

void f_0080fa98(void) /* sub_80FA98 */
{
    FN_ENTER(0x0080fa98);
    /* 0080fa98: mov eax, dword ptr [0xaafed8] */ r_eax = R32((u32)(0xaafed8u));
    /* 0080fa9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080fa9f: je 0x80fab4 */ if (fZ) goto L_0080fab4;
L_0080faa1:; BB(0x0080faa1);
    /* 0080faa1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080faa2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x80faa7u); f_0082e960();
    /* 0080faa7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080faa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080faaa: mov dword ptr [0xaafed8], eax */ W32((u32)(0xaafed8u), r_eax);
    /* 0080faaf: mov dword ptr [0xaafed4], eax */ W32((u32)(0xaafed4u), r_eax);
L_0080fab4:; BB(0x0080fab4);
    /* 0080fab4: ret  */ FN_RET(0x0080fa98); r_esp += 4; return;
}

void f_0080fab8(void) /* sub_80FAB8 */
{
    FN_ENTER(0x0080fab8);
    /* 0080fab8: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080fabb: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0080fac0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080fac2: mov dword ptr [0xaafef0], eax */ W32((u32)(0xaafef0u), r_eax);
    /* 0080fac7: mov dword ptr [0xaafeec], eax */ W32((u32)(0xaafeecu), r_eax);
    /* 0080facc: mov dword ptr [0xaafee8], eax */ W32((u32)(0xaafee8u), r_eax);
    /* 0080fad1: mov dword ptr [0xaafee4], eax */ W32((u32)(0xaafee4u), r_eax);
    /* 0080fad6: mov dword ptr [0xaafee0], eax */ W32((u32)(0xaafee0u), r_eax);
    /* 0080fadb: mov dword ptr [0xaafedc], eax */ W32((u32)(0xaafedcu), r_eax);
    /* 0080fae0: mov dword ptr [0xaafed4], eax */ W32((u32)(0xaafed4u), r_eax);
    /* 0080fae5: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 0080faeb: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x80faf0u); f_0082e940();
    /* 0080faf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080faf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080faf3: je 0x80fe4e */ if (fZ) goto L_0080fe4e;
L_0080faf9:; BB(0x0080faf9);
    /* 0080faf9: mov dword ptr [0xaafed4], 0x10000 */ W32((u32)(0xaafed4u), 0x10000u);
    /* 0080fb03: mov dword ptr [0xaafed8], eax */ W32((u32)(0xaafed8u), r_eax);
    /* 0080fb08: push 0x969b98 */ { u32 v = 0x969b98u; r_esp -= 4; W32(r_esp, v); }
    /* 0080fb0d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fb12u); f_0061cdb0();
    /* 0080fb12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fb13: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0080fb17: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0080fb1b: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0080fb1f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0080fb23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080fb25: mov edi, eax */ r_edi = r_eax;
L_0080fb27:; BB(0x0080fb27);
    /* 0080fb27: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0080fb2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fb2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fb2d: call 0x80bf28 */ r_esp -= 4; W32(r_esp, 0x80fb32u); f_0080bf28();
    /* 0080fb32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fb35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fb38: je 0x80fbf5 */ if (fZ) goto L_0080fbf5;
L_0080fb3e:; BB(0x0080fb3e);
    /* 0080fb3e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080fb41: cmp edi, 0x12 */ {  u32 a = r_edi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fb44: jl 0x80fb27 */ if ((fS!=fO)) goto L_0080fb27;
L_0080fb46:; BB(0x0080fb46);
    /* 0080fb46: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0080fb4a: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080fb4e: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0080fb52: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0080fb56: movzx eax, word ptr [0xaafee0] */ r_eax = (u32)R16((u32)(0xaafee0u));
    /* 0080fb5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080fb5e: call 0x7ba3cc */ r_esp -= 4; W32(r_esp, 0x80fb63u); f_007ba3cc();
    /* 0080fb63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fb64: mov eax, dword ptr [0xaafee8] */ r_eax = R32((u32)(0xaafee8u));
    /* 0080fb69: mov dword ptr [0xab02b4], eax */ W32((u32)(0xab02b4u), r_eax);
    /* 0080fb6e: call 0x810238 */ r_esp -= 4; W32(r_esp, 0x80fb73u); f_00810238();
    /* 0080fb73: mov eax, 1 */ r_eax = 0x1u;
L_0080fb78:; BB(0x0080fb78);
    /* 0080fb78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fb7a: jne 0x80fb9c */ if (!fZ) goto L_0080fb9c;
L_0080fb7c:; BB(0x0080fb7c);
    /* 0080fb7c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fb81u); f_0061cdb0();
    /* 0080fb81: call 0x80fa98 */ r_esp -= 4; W32(r_esp, 0x80fb86u); f_0080fa98();
    /* 0080fb86: movzx eax, word ptr [0xab02c0] */ r_eax = (u32)R16((u32)(0xab02c0u));
    /* 0080fb8d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080fb92: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 0080fb98: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080fb9b: ret  */ FN_RET(0x0080fab8); r_esp += 4; return;
L_0080fb9c:; BB(0x0080fb9c);
    /* 0080fb9c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fba1u); f_0061cdb0();
    /* 0080fba1: push 0x969bac */ { u32 v = 0x969bacu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fba6: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fbabu); f_0061cdb0();
    /* 0080fbab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fbac: call 0x80f7d0 */ r_esp -= 4; W32(r_esp, 0x80fbb1u); f_0080f7d0();
    /* 0080fbb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fbb3: jne 0x80fbd5 */ if (!fZ) goto L_0080fbd5;
L_0080fbb5:; BB(0x0080fbb5);
    /* 0080fbb5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fbbau); f_0061cdb0();
    /* 0080fbba: call 0x80fa98 */ r_esp -= 4; W32(r_esp, 0x80fbbfu); f_0080fa98();
    /* 0080fbbf: movzx eax, word ptr [0xab02c0] */ r_eax = (u32)R16((u32)(0xab02c0u));
    /* 0080fbc6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080fbcb: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
    /* 0080fbd1: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080fbd4: ret  */ FN_RET(0x0080fab8); r_esp += 4; return;
L_0080fbd5:; BB(0x0080fbd5);
    /* 0080fbd5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fbdau); f_0061cdb0();
    /* 0080fbda: call 0x80fa98 */ r_esp -= 4; W32(r_esp, 0x80fbdfu); f_0080fa98();
    /* 0080fbdf: movzx eax, word ptr [0xab02c0] */ r_eax = (u32)R16((u32)(0xab02c0u));
    /* 0080fbe6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0080fbeb: mov word ptr [0xab02c0], ax */ W16((u32)(0xab02c0u), (u16)r_eax);
L_0080fbf1:; BB(0x0080fbf1);
    /* 0080fbf1: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080fbf4: ret  */ FN_RET(0x0080fab8); r_esp += 4; return;
L_0080fbf5:; BB(0x0080fbf5);
    /* 0080fbf5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0080fbf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fbfb: jl 0x80fb3e */ if ((fS!=fO)) goto L_0080fb3e;
L_0080fc01:; BB(0x0080fc01);
    /* 0080fc01: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x80fc06u); f_005ba1f0();
    /* 0080fc06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc08: jne 0x80fe37 */ if (!fZ) goto L_0080fe37;
L_0080fc0e:; BB(0x0080fc0e);
    /* 0080fc0e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0080fc12: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0080fc16: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0080fc1a: mov esi, dword ptr [0xaafdd0] */ r_esi = R32((u32)(0xaafdd0u));
    /* 0080fc20: mov edx, dword ptr [esi + ebp*8] */ r_edx = R32((u32)(r_esi+r_ebp*8));
    /* 0080fc23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc25: je 0x80fe27 */ if (fZ) goto L_0080fe27;
L_0080fc2b:; BB(0x0080fc2b);
    /* 0080fc2b: mov esi, dword ptr [esi + ebp*8 + 4] */ r_esi = R32((u32)(r_esi+r_ebp*8+0x4u));
    /* 0080fc2f: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fc32: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fc34: jl 0x80fe27 */ if ((fS!=fO)) goto L_0080fe27;
L_0080fc3a:; BB(0x0080fc3a);
    /* 0080fc3a: mov eax, dword ptr [edx + ebx*8] */ r_eax = R32((u32)(r_edx+r_ebx*8));
    /* 0080fc3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc3f: je 0x80fe17 */ if (fZ) goto L_0080fe17;
L_0080fc45:; BB(0x0080fc45);
    /* 0080fc45: mov edx, dword ptr [edx + ebx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ebx*8+0x4u));
    /* 0080fc49: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fc4c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fc4e: jl 0x80fe17 */ if ((fS!=fO)) goto L_0080fe17;
L_0080fc54:; BB(0x0080fc54);
    /* 0080fc54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080fc57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080fc59: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0080fc5c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fc5e: mov ebx, dword ptr [eax + edx] */ r_ebx = R32((u32)(r_eax+r_edx));
    /* 0080fc61: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x80fc66u); f_00807e20();
    /* 0080fc66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fc67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc69: je 0x80fcdc */ if (fZ) goto L_0080fcdc;
L_0080fc6b:; BB(0x0080fc6b);
    /* 0080fc6b: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x80fc70u); f_0078b1c4();
    /* 0080fc70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc72: je 0x80fca8 */ if (fZ) goto L_0080fca8;
L_0080fc74:; BB(0x0080fc74);
    /* 0080fc74: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc77: jne 0x80fc8e */ if (!fZ) goto L_0080fc8e;
L_0080fc79:; BB(0x0080fc79);
    /* 0080fc79: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fc7d: push 0x9808ac */ { u32 v = 0x9808acu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc84: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80fc89u); f_0078e574();
    /* 0080fc89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fc8c: jmp 0x80fcef */ goto L_0080fcef;
L_0080fc8e:; BB(0x0080fc8e);
    /* 0080fc8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fc91: jne 0x80fcef */ if (!fZ) goto L_0080fcef;
L_0080fc93:; BB(0x0080fc93);
    /* 0080fc93: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fc97: push 0x9808b8 */ { u32 v = 0x9808b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc9d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fc9e: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80fca3u); f_0078e574();
    /* 0080fca3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fca6: jmp 0x80fcef */ goto L_0080fcef;
L_0080fca8:; BB(0x0080fca8);
    /* 0080fca8: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 0080fcae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080fcb0: jne 0x80fcc7 */ if (!fZ) goto L_0080fcc7;
L_0080fcb2:; BB(0x0080fcb2);
    /* 0080fcb2: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fcb6: push 0x98089c */ { u32 v = 0x98089cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcbc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcbd: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80fcc2u); f_0078e574();
    /* 0080fcc2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fcc5: jmp 0x80fcef */ goto L_0080fcef;
L_0080fcc7:; BB(0x0080fcc7);
    /* 0080fcc7: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fccb: push 0x9808a4 */ { u32 v = 0x9808a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcd2: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80fcd7u); f_0078e574();
    /* 0080fcd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fcda: jmp 0x80fcef */ goto L_0080fcef;
L_0080fcdc:; BB(0x0080fcdc);
    /* 0080fcdc: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fce0: push 0x98089c */ { u32 v = 0x98089cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fce5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fce7: call 0x78e574 */ r_esp -= 4; W32(r_esp, 0x80fcecu); f_0078e574();
    /* 0080fcec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0080fcef:; BB(0x0080fcef);
    /* 0080fcef: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 0080fcf3: push dword ptr [0xaafed8] */ { u32 v = R32((u32)(0xaafed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080fcf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fcfa: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x80fcffu); f_005b9910();
    /* 0080fcff: mov ebx, eax */ r_ebx = r_eax;
    /* 0080fd01: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fd04: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fd06: jl 0x80fb3e */ if ((fS!=fO)) goto L_0080fb3e;
L_0080fd0c:; BB(0x0080fd0c);
    /* 0080fd0c: cmp ebx, dword ptr [0xaafed4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaafed4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fd12: jg 0x80fb3e */ if ((!fZ&&fS==fO)) goto L_0080fb3e;
L_0080fd18:; BB(0x0080fd18);
    /* 0080fd18: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
    /* 0080fd1e: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 0080fd23: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080fd25: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0080fd27: shr edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0080fd2a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0080fd2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fd30: jle 0x80fd61 */ if ((fZ||fS!=fO)) goto L_0080fd61;
L_0080fd32:; BB(0x0080fd32);
    /* 0080fd32: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0080fd36: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080fd38: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0080fd3b: mov edi, edx */ r_edi = r_edx;
L_0080fd3d:; BB(0x0080fd3d);
    /* 0080fd3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080fd3f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fd44u); f_0061cdb0();
    /* 0080fd44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd46: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 0080fd4a: add ebp, 0x44 */ {  u32 a = r_ebp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0080fd4d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fd50: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fd52: jl 0x80fd3d */ if ((fS!=fO)) goto L_0080fd3d;
L_0080fd54:; BB(0x0080fd54);
    /* 0080fd54: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0080fd58: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0080fd5b: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
L_0080fd61:; BB(0x0080fd61);
    /* 0080fd61: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0080fd65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080fd67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fd69: jle 0x80fe07 */ if ((fZ||fS!=fO)) goto L_0080fe07;
L_0080fd6f:; BB(0x0080fd6f);
    /* 0080fd6f: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 0080fd73: mov ebx, eax */ r_ebx = r_eax;
    /* 0080fd75: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0080fd78: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0080fd7b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fd7d: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0080fd80: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd82: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd84: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd86: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd88: lea edx, [ecx + edx + 4] */ r_edx = (u32)(r_ecx+r_edx+0x4u);
    /* 0080fd8c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0080fd90: mov edi, edx */ r_edi = r_edx;
    /* 0080fd92: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0080fd95: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fd97: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0080fd9a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fd9c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fd9e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fda0: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fda2: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0080fda4:; BB(0x0080fda4);
    /* 0080fda4: mov ecx, dword ptr [0xaafee0] */ r_ecx = R32((u32)(0xaafee0u));
    /* 0080fdaa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fdab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080fdac: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080fdaf: mov dword ptr [0xaafee0], edx */ W32((u32)(0xaafee0u), r_edx);
    /* 0080fdb5: add ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080fdbb: mov word ptr [edi + 4], cx */ W16((u32)(r_edi+0x4u), (u16)r_ecx);
    /* 0080fdbf: mov ecx, dword ptr [0xaafee8] */ r_ecx = R32((u32)(0xaafee8u));
    /* 0080fdc5: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0080fdc8: mov dword ptr [0xaafee8], edx */ W32((u32)(0xaafee8u), r_edx);
    /* 0080fdce: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 0080fdd1: call 0x812370 */ r_esp -= 4; W32(r_esp, 0x80fdd6u); f_00812370();
    /* 0080fdd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fdd9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0080fddb: jl 0x80fde9 */ if ((fS!=fO)) goto L_0080fde9;
L_0080fddd:; BB(0x0080fddd);
    /* 0080fddd: add dword ptr [0xaafee8], eax */ { u32 ad = (u32)(0xaafee8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0080fde3: add dword ptr [0xaafee0], eax */ { u32 ad = (u32)(0xaafee0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0080fde9:; BB(0x0080fde9);
    /* 0080fde9: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0080fded: add edi, 0x44 */ {  u32 a = r_edi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080fdf0: add esi, 0x44 */ {  u32 a = r_esi; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0080fdf3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080fdf6: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080fdf8: jl 0x80fda4 */ if ((fS!=fO)) goto L_0080fda4;
L_0080fdfa:; BB(0x0080fdfa);
    /* 0080fdfa: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0080fdfe: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0080fe01: mov ecx, dword ptr [0xaafed8] */ r_ecx = R32((u32)(0xaafed8u));
L_0080fe07:; BB(0x0080fe07);
    /* 0080fe07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe0a: call 0x80fef8 */ r_esp -= 4; W32(r_esp, 0x80fe0fu); f_0080fef8();
    /* 0080fe0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080fe12: jmp 0x80fb3e */ goto L_0080fb3e;
L_0080fe17:; BB(0x0080fe17);
    /* 0080fe17: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe1c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fe21u); f_0061cdb0();
    /* 0080fe21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fe22: jmp 0x80fb3e */ goto L_0080fb3e;
L_0080fe27:; BB(0x0080fe27);
    /* 0080fe27: push 0x98088c */ { u32 v = 0x98088cu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe2c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x80fe31u); f_0061cdb0();
    /* 0080fe31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fe32: jmp 0x80fb3e */ goto L_0080fb3e;
L_0080fe37:; BB(0x0080fe37);
    /* 0080fe37: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0080fe3b: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0080fe3f: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0080fe43: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0080fe47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080fe49: jmp 0x80fb78 */ goto L_0080fb78;
L_0080fe4e:; BB(0x0080fe4e);
    /* 0080fe4e: mov dword ptr [0xaafed8], 0 */ W32((u32)(0xaafed8u), 0x0u);
    /* 0080fe58: jmp 0x80fbf1 */ goto L_0080fbf1;
}

void f_0080fe60(void) /* sub_80FE60 */
{
    FN_ENTER(0x0080fe60);
    /* 0080fe60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe61: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080fe63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080fe65: call 0x77a284 */ r_esp -= 4; W32(r_esp, 0x80fe6au); f_0077a284();
    /* 0080fe6a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080fe6e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080fe70: jne 0x80fe76 */ if (!fZ) goto L_0080fe76;
L_0080fe72:; BB(0x0080fe72);
    /* 0080fe72: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080fe73: ret 4 */ FN_RET(0x0080fe60); r_esp += 8; return;
L_0080fe76:; BB(0x0080fe76);
    /* 0080fe76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe77: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x80fe7cu); f_00857e98();
    /* 0080fe7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fe7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080fe7e: ret 4 */ FN_RET(0x0080fe60); r_esp += 8; return;
}

void f_0080fe84(void) /* sub_80FE84 */
{
    FN_ENTER(0x0080fe84);
    /* 0080fe84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe85: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080fe87: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080fe89: call 0x80fea8 */ r_esp -= 4; W32(r_esp, 0x80fe8eu); f_0080fea8();
    /* 0080fe8e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080fe92: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080fe94: jne 0x80fe9a */ if (!fZ) goto L_0080fe9a;
L_0080fe96:; BB(0x0080fe96);
    /* 0080fe96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080fe97: ret 4 */ FN_RET(0x0080fe84); r_esp += 8; return;
L_0080fe9a:; BB(0x0080fe9a);
    /* 0080fe9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080fe9b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x80fea0u); f_005c2f74();
    /* 0080fea0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080fea1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080fea2: ret 4 */ FN_RET(0x0080fe84); r_esp += 8; return;
}

void f_0080fea8(void) /* sub_80FEA8 */
{
    FN_ENTER(0x0080fea8);
    /* 0080fea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080fea9: mov ebp, esp */ r_ebp = r_esp;
    /* 0080feab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0080fead: push 0x8f7428 */ { u32 v = 0x8f7428u; r_esp -= 4; W32(r_esp, v); }
    /* 0080feb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0080feb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080feb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0080fec0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080fec3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0080fec6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0080fec9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0080fecc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0080fecf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0080fed2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0080fed5: mov dword ptr [ecx], 0xb47890 */ W32((u32)(r_ecx), 0xb47890u);
    /* 0080fedb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0080fee2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x80fee7u); f_008171e8();
    /* 0080fee7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0080feea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0080fef1: mov esp, ebp */ r_esp = r_ebp;
    /* 0080fef3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0080fef4: ret  */ FN_RET(0x0080fea8); r_esp += 4; return;
}

void f_0080fef8(void) /* sub_80FEF8 */
{
    FN_ENTER(0x0080fef8);
    /* 0080fef8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0080fef9: mov ecx, dword ptr [0xaaff00] */ r_ecx = R32((u32)(0xaaff00u));
    /* 0080feff: mov eax, 0xf0f0f0f1 */ r_eax = 0xf0f0f0f1u;
    /* 0080ff04: add ecx, dword ptr [0xaaff04] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff0a: add ecx, dword ptr [0xaaff08] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff10: add ecx, dword ptr [0xaaff0c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff16: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0080ff1a: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0080ff1c: mov esi, edx */ r_esi = r_edx;
    /* 0080ff1e: shr esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0080ff21: add ecx, dword ptr [0xaaff10] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff27: add ecx, dword ptr [0xaaff14] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff2d: add ecx, dword ptr [0xaaff18] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff33: add ecx, dword ptr [0xaaff1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff1cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff39: add ecx, dword ptr [0xaaff20] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff20u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff3f: add ecx, dword ptr [0xaaff24] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff24u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff45: add ecx, dword ptr [0xaaff28] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff28u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff4b: add ecx, dword ptr [0xaaff2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff51: add ecx, dword ptr [0xaaff30] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff30u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff57: add ecx, dword ptr [0xaaff34] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff34u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff5d: add ecx, dword ptr [0xaaff38] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff63: add ecx, dword ptr [0xaaff3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff69: add ecx, dword ptr [0xaaff40] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff40u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff6f: add ecx, dword ptr [0xaaff44] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaaff44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff75: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0080ff77: cmp ecx, 0xba0 */ {  u32 a = r_ecx; u32 b = 0xba0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0080ff7d: jbe 0x80ff83 */ if ((fC||fZ)) goto L_0080ff83;
L_0080ff7f:; BB(0x0080ff7f);
    /* 0080ff7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080ff81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ff82: ret  */ FN_RET(0x0080fef8); r_esp += 4; return;
L_0080ff83:; BB(0x0080ff83);
    /* 0080ff83: call 0x80ffac */ r_esp -= 4; W32(r_esp, 0x80ff88u); f_0080ffac();
    /* 0080ff88: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0080ff8c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0080ff8d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080ff91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0080ff92: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x80ff97u); f_0086b6b8();
    /* 0080ff97: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0080ff9b: mov dword ptr [ecx*4 + 0xaaff00], esi */ W32((u32)(r_ecx*4+0xaaff00u), r_esi);
    /* 0080ffa2: mov eax, 1 */ r_eax = 0x1u;
    /* 0080ffa7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0080ffaa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0080ffab: ret  */ FN_RET(0x0080fef8); r_esp += 4; return;
}

void f_0080ffac(void) /* sub_80FFAC */
{
    FN_ENTER(0x0080ffac);
    /* 0080ffac: mov edx, dword ptr [0xaaff00] */ r_edx = R32((u32)(0xaaff00u));
    /* 0080ffb2: add edx, dword ptr [0xaaff04] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff04u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffb8: add edx, dword ptr [0xaaff08] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff08u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffbe: add edx, dword ptr [0xaaff0c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff0cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffc4: add edx, dword ptr [0xaaff10] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffca: add edx, dword ptr [0xaaff14] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff14u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffd0: add edx, dword ptr [0xaaff18] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffd6: add edx, dword ptr [0xaaff1c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffdc: add edx, dword ptr [0xaaff20] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffe2: add edx, dword ptr [0xaaff24] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffe8: add edx, dword ptr [0xaaff28] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff28u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080ffee: add edx, dword ptr [0xaaff2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff2cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fff4: add edx, dword ptr [0xaaff30] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff30u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0080fffa: add edx, dword ptr [0xaaff34] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff34u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810000: add edx, dword ptr [0xaaff38] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff38u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810006: add edx, dword ptr [0xaaff3c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081000c: add edx, dword ptr [0xaaff40] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810012: add edx, dword ptr [0xaaff44] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaaff44u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00810018: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081001c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081001f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810021: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810025: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00810027: add eax, dword ptr [0xab0210] */ {  u32 a = r_eax; u32 b = R32((u32)(0xab0210u)); u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081002d: ret  */ FN_RET(0x0080ffac); r_esp += 4; return;
}

