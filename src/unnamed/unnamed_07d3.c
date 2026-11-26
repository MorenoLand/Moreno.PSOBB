#include "protos.h"

void f_007d3244(void) /* sub_7D3244 */
{
    FN_ENTER(0x007d3244);
    /* 007d3244: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3245: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3246: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3249: mov edi, ecx */ r_edi = r_ecx;
    /* 007d324b: movsx eax, byte ptr [edi + 0x10074] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x10074u));
    /* 007d3252: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3254: jne 0x7d33d1 */ if (!fZ) goto L_007d33d1;
L_007d325a:; BB(0x007d325a);
    /* 007d325a: movsx eax, byte ptr [edi + 0x10075] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x10075u));
    /* 007d3261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3263: jne 0x7d33cb */ if (!fZ) goto L_007d33cb;
L_007d3269:; BB(0x007d3269);
    /* 007d3269: lea ebp, [edi + 0x16424] */ r_ebp = (u32)(r_edi+0x16424u);
    /* 007d326f: mov dword ptr [0xaaecc8], ebp */ W32((u32)(0xaaecc8u), r_ebp);
    /* 007d3275: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3277: call 0x77f94c */ r_esp -= 4; W32(r_esp, 0x7d327cu); f_0077f94c();
    /* 007d327c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d327e: jne 0x7d33c4 */ if (!fZ) goto L_007d33c4;
L_007d3284:; BB(0x007d3284);
    /* 007d3284: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3286: call 0x77f918 */ r_esp -= 4; W32(r_esp, 0x7d328bu); f_0077f918();
    /* 007d328b: mov ecx, dword ptr [edi + 0x1641c] */ r_ecx = R32((u32)(r_edi+0x1641cu));
    /* 007d3291: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 007d3294: mov dword ptr [edi + 0x1641c], edx */ W32((u32)(r_edi+0x1641cu), r_edx);
    /* 007d329a: mov byte ptr [edi + ecx + 0x16424], al */ W8((u32)(r_edi+r_ecx+0x16424u), (u8)r_eax);
    /* 007d32a1: mov eax, dword ptr [edi + 0x1641c] */ r_eax = R32((u32)(r_edi+0x1641cu));
    /* 007d32a7: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d32aa: jne 0x7d3300 */ if (!fZ) goto L_007d3300;
L_007d32ac:; BB(0x007d32ac);
    /* 007d32ac: mov eax, dword ptr [edi + 0x1211c] */ r_eax = R32((u32)(r_edi+0x1211cu));
    /* 007d32b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d32b4: je 0x7d32c4 */ if (fZ) goto L_007d32c4;
L_007d32b6:; BB(0x007d32b6);
    /* 007d32b6: lea ecx, [edi + 0x110d4] */ r_ecx = (u32)(r_edi+0x110d4u);
    /* 007d32bc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d32be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d32bf: call 0x763e70 */ r_esp -= 4; W32(r_esp, 0x7d32c4u); f_00763e70();
L_007d32c4:; BB(0x007d32c4);
    /* 007d32c4: movzx eax, word ptr [edi + 0x16424] */ r_eax = (u32)R16((u32)(r_edi+0x16424u));
    /* 007d32cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d32cc: call 0x77f548 */ r_esp -= 4; W32(r_esp, 0x7d32d1u); f_0077f548();
    /* 007d32d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d32d2: mov edx, dword ptr [edi + 0x1211c] */ r_edx = R32((u32)(r_edi+0x1211cu));
    /* 007d32d8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007d32db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d32dd: je 0x7d32e5 */ if (fZ) goto L_007d32e5;
L_007d32df:; BB(0x007d32df);
    /* 007d32df: add eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d32e2: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_007d32e5:; BB(0x007d32e5);
    /* 007d32e5: cmp eax, 0x7c00 */ {  u32 a = r_eax; u32 b = 0x7c00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007d32ea: jg 0x7d33f8 */ if ((!fZ&&fS==fO)) goto L_007d33f8;
L_007d32f0:; BB(0x007d32f0);
    /* 007d32f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d32f2: je 0x7d33f8 */ if (fZ) goto L_007d33f8;
L_007d32f8:; BB(0x007d32f8);
    /* 007d32f8: mov dword ptr [edi + 0x16420], eax */ W32((u32)(r_edi+0x16420u), r_eax);
    /* 007d32fe: jmp 0x7d3306 */ goto L_007d3306;
L_007d3300:; BB(0x007d3300);
    /* 007d3300: mov eax, dword ptr [edi + 0x16420] */ r_eax = R32((u32)(r_edi+0x16420u));
L_007d3306:; BB(0x007d3306);
    /* 007d3306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007d3308: jle 0x7d33b5 */ if ((fZ||fS!=fO)) goto L_007d33b5;
L_007d330e:; BB(0x007d330e);
    /* 007d330e: cmp eax, dword ptr [edi + 0x1641c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x1641cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007d3314: jg 0x7d33b5 */ if ((!fZ&&fS==fO)) goto L_007d33b5;
L_007d331a:; BB(0x007d331a);
    /* 007d331a: mov edx, dword ptr [edi + 0x1211c] */ r_edx = R32((u32)(r_edi+0x1211cu));
    /* 007d3320: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3322: je 0x7d333a */ if (fZ) goto L_007d333a;
L_007d3324:; BB(0x007d3324);
    /* 007d3324: lea ecx, [edi + 0x110d4] */ r_ecx = (u32)(r_edi+0x110d4u);
    /* 007d332a: lea edx, [edi + 0x1642c] */ r_edx = (u32)(r_edi+0x1642cu);
    /* 007d3330: add eax, -8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d3333: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3334: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3335: call 0x763e70 */ r_esp -= 4; W32(r_esp, 0x7d333au); f_00763e70();
L_007d333a:; BB(0x007d333a);
    /* 007d333a: mov edx, dword ptr [edi + 0x1213c] */ r_edx = R32((u32)(r_edi+0x1213cu));
    /* 007d3340: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3342: mov dword ptr [edi + 0x16420], eax */ W32((u32)(r_edi+0x16420u), r_eax);
    /* 007d3348: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d334a: mov dword ptr [edi + 0x1641c], eax */ W32((u32)(r_edi+0x1641cu), r_eax);
    /* 007d3350: je 0x7d336b */ if (fZ) goto L_007d336b;
L_007d3352:; BB(0x007d3352);
    /* 007d3352: movzx eax, byte ptr [edi + 0x16426] */ r_eax = (u32)R8((u32)(r_edi+0x16426u));
    /* 007d3359: cmp eax, 0x1d */ {  u32 a = r_eax; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d335c: je 0x7d340f */ if (fZ) goto L_007d340f;
L_007d3362:; BB(0x007d3362);
    /* 007d3362: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3363: call 0x7be320 */ r_esp -= 4; W32(r_esp, 0x7d3368u); f_007be320();
    /* 007d3368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d3369: jmp 0x7d33b5 */ goto L_007d33b5;
L_007d336b:; BB(0x007d336b);
    /* 007d336b: movzx eax, byte ptr [edi + 0x16426] */ r_eax = (u32)R8((u32)(r_edi+0x16426u));
    /* 007d3372: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
    /* 007d3378: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d337a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d337c: je 0x7d339a */ if (fZ) goto L_007d339a;
L_007d337e:; BB(0x007d337e);
    /* 007d337e: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
L_007d3384:; BB(0x007d3384);
    /* 007d3384: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3386: je 0x7d3460 */ if (fZ) goto L_007d3460;
L_007d338c:; BB(0x007d338c);
    /* 007d338c: mov ecx, dword ptr [edx*8 + 0xa0f928] */ r_ecx = R32((u32)(r_edx*8+0xa0f928u));
    /* 007d3393: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d3396: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3398: jne 0x7d3384 */ if (!fZ) goto L_007d3384;
L_007d339a:; BB(0x007d339a);
    /* 007d339a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d339d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d339e: push 0x97e830 */ { u32 v = 0x97e830u; r_esp -= 4; W32(r_esp, v); }
    /* 007d33a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d33a4: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d33a9u); f_00858bf5();
    /* 007d33a9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d33ac: mov byte ptr [edi + 0x10074], 1 */ W8((u32)(r_edi+0x10074u), 0x1u);
    /* 007d33b3: jmp 0x7d33c4 */ goto L_007d33c4;
L_007d33b5:; BB(0x007d33b5);
    /* 007d33b5: mov ecx, edi */ r_ecx = r_edi;
    /* 007d33b7: call 0x77f94c */ r_esp -= 4; W32(r_esp, 0x7d33bcu); f_0077f94c();
    /* 007d33bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d33be: je 0x7d3284 */ if (fZ) goto L_007d3284;
L_007d33c4:; BB(0x007d33c4);
    /* 007d33c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007d33c6: mov ecx, edi */ r_ecx = r_edi;
    /* 007d33c8: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x7d33cbu); call_ind(t); }
L_007d33cb:; BB(0x007d33cb);
    /* 007d33cb: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d33ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d33cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d33d0: ret  */ FN_RET(0x007d3244); r_esp += 4; return;
L_007d33d1:; BB(0x007d33d1);
    /* 007d33d1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 007d33d3: mov ecx, edi */ r_ecx = r_edi;
    /* 007d33d5: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x7d33d8u); call_ind(t); }
    /* 007d33d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d33da: mov dword ptr [edi + 0x1211c], eax */ W32((u32)(r_edi+0x1211cu), r_eax);
    /* 007d33e0: mov dword ptr [edi + 0x12130], eax */ W32((u32)(r_edi+0x12130u), r_eax);
    /* 007d33e6: mov dword ptr [edi + 0x1641c], eax */ W32((u32)(r_edi+0x1641cu), r_eax);
    /* 007d33ec: mov dword ptr [edi + 0x16420], eax */ W32((u32)(r_edi+0x16420u), r_eax);
    /* 007d33f2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d33f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d33f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d33f7: ret  */ FN_RET(0x007d3244); r_esp += 4; return;
L_007d33f8:; BB(0x007d33f8);
    /* 007d33f8: mov byte ptr [edi + 0x10074], 1 */ W8((u32)(r_edi+0x10074u), 0x1u);
    /* 007d33ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3401: mov dword ptr [edi + 0x16420], eax */ W32((u32)(r_edi+0x16420u), r_eax);
    /* 007d3407: mov dword ptr [edi + 0x1641c], eax */ W32((u32)(r_edi+0x1641cu), r_eax);
    /* 007d340d: jmp 0x7d33c4 */ goto L_007d33c4;
L_007d340f:; BB(0x007d340f);
    /* 007d340f: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
    /* 007d3415: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d3417: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3419: je 0x7d3433 */ if (fZ) goto L_007d3433;
L_007d341b:; BB(0x007d341b);
    /* 007d341b: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
L_007d3421:; BB(0x007d3421);
    /* 007d3421: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3423: je 0x7d3451 */ if (fZ) goto L_007d3451;
L_007d3425:; BB(0x007d3425);
    /* 007d3425: mov ecx, dword ptr [edx*8 + 0xa0f928] */ r_ecx = R32((u32)(r_edx*8+0xa0f928u));
    /* 007d342c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d342f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3431: jne 0x7d3421 */ if (!fZ) goto L_007d3421;
L_007d3433:; BB(0x007d3433);
    /* 007d3433: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d3436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3437: push 0x97e830 */ { u32 v = 0x97e830u; r_esp -= 4; W32(r_esp, v); }
    /* 007d343c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d343d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d3442u); f_00858bf5();
    /* 007d3442: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3445: mov byte ptr [edi + 0x10074], 1 */ W8((u32)(r_edi+0x10074u), 0x1u);
    /* 007d344c: jmp 0x7d33c4 */ goto L_007d33c4;
L_007d3451:; BB(0x007d3451);
    /* 007d3451: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3452: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3454: call dword ptr [edx*8 + 0xa0f924] */ { u32 t = R32((u32)(r_edx*8+0xa0f924u)); r_esp -= 4; W32(r_esp, 0x7d345bu); call_ind(t); }
    /* 007d345b: jmp 0x7d33b5 */ goto L_007d33b5;
L_007d3460:; BB(0x007d3460);
    /* 007d3460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3461: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3463: call dword ptr [edx*8 + 0xa0f924] */ { u32 t = R32((u32)(r_edx*8+0xa0f924u)); r_esp -= 4; W32(r_esp, 0x7d346au); call_ind(t); }
    /* 007d346a: jmp 0x7d33b5 */ goto L_007d33b5;
}

void f_007d3470(void) /* sub_7D3470 */
{
    FN_ENTER(0x007d3470);
    /* 007d3470: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3471: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3472: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3475: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007d3477: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007d347b: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
    /* 007d3481: movzx eax, byte ptr [edx + 2] */ r_eax = (u32)R8((u32)(r_edx+0x2u));
    /* 007d3485: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007d3487: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3489: je 0x7d34a3 */ if (fZ) goto L_007d34a3;
L_007d348b:; BB(0x007d348b);
    /* 007d348b: mov ecx, dword ptr [0xa0f920] */ r_ecx = R32((u32)(0xa0f920u));
L_007d3491:; BB(0x007d3491);
    /* 007d3491: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3493: je 0x7d34c6 */ if (fZ) goto L_007d34c6;
L_007d3495:; BB(0x007d3495);
    /* 007d3495: mov ecx, dword ptr [edi*8 + 0xa0f928] */ r_ecx = R32((u32)(r_edi*8+0xa0f928u));
    /* 007d349c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007d349f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d34a1: jne 0x7d3491 */ if (!fZ) goto L_007d3491;
L_007d34a3:; BB(0x007d34a3);
    /* 007d34a3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d34a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d34a7: push 0x97e830 */ { u32 v = 0x97e830u; r_esp -= 4; W32(r_esp, v); }
    /* 007d34ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d34ad: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d34b2u); f_00858bf5();
    /* 007d34b2: mov byte ptr [ebp + 0x10074], 1 */ W8((u32)(r_ebp+0x10074u), 0x1u);
    /* 007d34b9: mov eax, 1 */ r_eax = 0x1u;
    /* 007d34be: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d34c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d34c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d34c3: ret 4 */ FN_RET(0x007d3470); r_esp += 8; return;
L_007d34c6:; BB(0x007d34c6);
    /* 007d34c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d34c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007d34c9: call dword ptr [edi*8 + 0xa0f924] */ { u32 t = R32((u32)(r_edi*8+0xa0f924u)); r_esp -= 4; W32(r_esp, 0x7d34d0u); call_ind(t); }
    /* 007d34d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d34d2: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d34d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d34d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d34d7: ret 4 */ FN_RET(0x007d3470); r_esp += 8; return;
}

void f_007d34dc(void) /* sub_7D34DC */
{
    FN_ENTER(0x007d34dc);
    /* 007d34dc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d34e0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007d34e4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d34e9u); f_0077fd10();
    /* 007d34e9: ret 8 */ FN_RET(0x007d34dc); r_esp += 12; return;
}

void f_007d34ec(void) /* sub_7D34EC */
{
    FN_ENTER(0x007d34ec);
    /* 007d34ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d34ed: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d34f0: mov edi, ecx */ r_edi = r_ecx;
    /* 007d34f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d34f4: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 007d34f8: mov dword ptr [edi + 0x12150], eax */ W32((u32)(r_edi+0x12150u), r_eax);
    /* 007d34fe: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d3502: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3504: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d3508: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007d350b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007d350f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007d3513: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d3517: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007d351b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007d351f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007d3523: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007d3527: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007d352b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007d352f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007d3533: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007d3537: mov eax, dword ptr [edi + 0x12150] */ r_eax = R32((u32)(r_edi+0x12150u));
    /* 007d353d: mov byte ptr [esp + 2], 4 */ W8((u32)(r_esp+0x2u), 0x4u);
    /* 007d3542: mov edx, 0x30 */ r_edx = 0x30u;
    /* 007d3547: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007d354b: movzx eax, word ptr [edi + 0x12128] */ r_eax = (u32)R16((u32)(r_edi+0x12128u));
    /* 007d3552: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d3556: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007d355a: mov eax, dword ptr [edi + 0x12154] */ r_eax = R32((u32)(r_edi+0x12154u));
    /* 007d3560: mov byte ptr [esp + 0xd], al */ W8((u32)(r_esp+0xdu), (u8)r_eax);
    /* 007d3564: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007d3568: lea eax, [edi + 0x16322] */ r_eax = (u32)(r_edi+0x16322u);
    /* 007d356e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3572: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7d3577u); f_00858900();
    /* 007d3577: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 007d357b: lea eax, [edi + 0x16352] */ r_eax = (u32)(r_edi+0x16352u);
    /* 007d3581: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3584: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3585: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x7d358au); f_00858900();
    /* 007d358a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d358d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d3590: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3591: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3593: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7d3598u); f_007c4fb4();
    /* 007d3598: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d359a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d359d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d359e: ret 4 */ FN_RET(0x007d34ec); r_esp += 8; return;
}

void f_007d35a4(void) /* sub_7D35A4 */
{
    FN_ENTER(0x007d35a4);
    /* 007d35a4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d35a7: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d35ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d35af: je 0x7d3609 */ if (fZ) goto L_007d3609;
L_007d35b1:; BB(0x007d35b1);
    /* 007d35b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d35b3: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007d35b7: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007d35bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d35bd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d35c0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d35c4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d35c8: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d35cc: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d35d0: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d35d4: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d35d8: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007d35dc: mov edx, dword ptr [ecx + 0x12120] */ r_edx = R32((u32)(r_ecx+0x12120u));
    /* 007d35e2: mov byte ptr [esp + 2], 0xa0 */ W8((u32)(r_esp+0x2u), 0xa0u);
    /* 007d35e7: mov eax, 0x20 */ r_eax = 0x20u;
    /* 007d35ec: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d35f0: mov eax, dword ptr [ecx + 0x12124] */ r_eax = R32((u32)(r_ecx+0x12124u));
    /* 007d35f6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d35fa: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d35fe: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d3601: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3604: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3609u); f_0077fd10();
L_007d3609:; BB(0x007d3609);
    /* 007d3609: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d360c: ret  */ FN_RET(0x007d35a4); r_esp += 4; return;
}

void f_007d3610(void) /* sub_7D3610 */
{
    FN_ENTER(0x007d3610);
    /* 007d3610: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3613: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d3619: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d361b: je 0x7d3675 */ if (fZ) goto L_007d3675;
L_007d361d:; BB(0x007d361d);
    /* 007d361d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d361f: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007d3623: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007d3627: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d3629: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007d362c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d3630: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d3634: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007d3638: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007d363c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007d3640: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007d3644: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007d3648: mov edx, dword ptr [ecx + 0x12120] */ r_edx = R32((u32)(r_ecx+0x12120u));
    /* 007d364e: mov byte ptr [esp + 2], 0xa1 */ W8((u32)(r_esp+0x2u), 0xa1u);
    /* 007d3653: mov eax, 0x20 */ r_eax = 0x20u;
    /* 007d3658: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d365c: mov eax, dword ptr [ecx + 0x12124] */ r_eax = R32((u32)(r_ecx+0x12124u));
    /* 007d3662: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007d3666: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d366a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d366d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007d366f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3670: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3675u); f_0077fd10();
L_007d3675:; BB(0x007d3675);
    /* 007d3675: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3678: ret  */ FN_RET(0x007d3610); r_esp += 4; return;
}

void f_007d367c(void) /* sub_7D367C */
{
    FN_ENTER(0x007d367c);
    /* 007d367c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d367d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3680: mov esi, ecx */ r_esi = r_ecx;
    /* 007d3682: mov ecx, esi */ r_ecx = r_esi;
    /* 007d3684: call 0x7d36b4 */ r_esp -= 4; W32(r_esp, 0x7d3689u); f_007d36b4();
    /* 007d3689: mov byte ptr [esp + 2], 5 */ W8((u32)(r_esp+0x2u), 0x5u);
    /* 007d368e: mov eax, 8 */ r_eax = 0x8u;
    /* 007d3693: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d3697: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d369a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d369c: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d36a0: mov ecx, esi */ r_ecx = r_esi;
    /* 007d36a2: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d36a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d36a7: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x7d36acu); f_007c4fb4();
    /* 007d36ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d36af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d36b0: ret  */ FN_RET(0x007d367c); r_esp += 4; return;
}

void f_007d36b4(void) /* sub_7D36B4 */
{
    FN_ENTER(0x007d36b4);
    /* 007d36b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d36b5: mov ebp, esp */ r_ebp = r_esp;
    /* 007d36b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d36b9: push 0x8f6ad4 */ { u32 v = 0x8f6ad4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d36be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007d36c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d36c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007d36cc: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d36cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007d36d2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007d36d5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007d36d8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007d36db: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 007d36de: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d36e3: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7d36e8u); f_006c1bcc();
    /* 007d36e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d36e9: call 0x6aa8fc */ r_esp -= 4; W32(r_esp, 0x7d36eeu); f_006aa8fc();
    /* 007d36ee: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007d36f5: push 0x399c */ { u32 v = 0x399cu; r_esp -= 4; W32(r_esp, v); }
    /* 007d36fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007d36fc: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x7d3701u); f_008587c7();
    /* 007d3701: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007d3704: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3707: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007d370a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d370c: je 0x7d3943 */ if (fZ) goto L_007d3943;
L_007d3712:; BB(0x007d3712);
    /* 007d3712: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007d3719: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007d3720: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3725: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d372a: mov ebx, eax */ r_ebx = r_eax;
    /* 007d372c: mov dword ptr [ebp - 0x50], ebx */ W32((u32)(r_ebp+0xffffffb0u), r_ebx);
    /* 007d372f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d3731: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3733: mov esi, 8 */ r_esi = 0x8u;
    /* 007d3738: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 007d373b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d373d: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 007d3740: mov byte ptr [ebx + 3], al */ W8((u32)(r_ebx+0x3u), (u8)r_eax);
    /* 007d3743: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 007d3746: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 007d3749: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 007d374c: lea ecx, [ebx + 0x3e8] */ r_ecx = (u32)(r_ebx+0x3e8u);
    /* 007d3752: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 007d3755: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 007d3758: lea edi, [ebx + 0x3ec] */ r_edi = (u32)(r_ebx+0x3ecu);
    /* 007d375e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d375f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d3764u); f_00858736();
    /* 007d3764: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007d376b: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3770: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3775: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 007d3778: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d377a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d377d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d377f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3780: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d3785u); f_00858736();
    /* 007d3785: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 007d3788: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007d378e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007d3795: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d379a: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d379f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 007d37a2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d37a4: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 007d37a7: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d37aa: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007d37ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d37af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d37b0: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d37b5u); f_00858736();
    /* 007d37b5: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007d37bc: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d37c1: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 007d37c6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007d37c9: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007d37cb: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007d37ce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007d37d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d37d1: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7d37d6u); f_00858736();
    /* 007d37d6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 007d37d9: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007d37df: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007d37e6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007d37e8:; BB(0x007d37e8);
    /* 007d37e8: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 007d37eb: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 007d37ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007d37f0: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007d37f3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d37f5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007d37f7: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007d37f9: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 007d37fe: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 007d3802: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3804: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 007d3808: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 007d380c: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 007d3810: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 007d3814: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x7d3819u); f_005d6a3c();
    /* 007d3819: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d381c: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007d381f: jl 0x7d37e8 */ if ((fS!=fO)) goto L_007d37e8;
L_007d3821:; BB(0x007d3821);
    /* 007d3821: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 007d3828: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007d382b: lea ebx, [eax + 0x708] */ r_ebx = (u32)(r_eax+0x708u);
    /* 007d3831: mov esi, 0xc8 */ r_esi = 0xc8u;
L_007d3836:; BB(0x007d3836);
    /* 007d3836: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3838: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x7d383du); f_006c8960();
    /* 007d383d: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007d3840: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 007d3843: jne 0x7d3836 */ if (!fZ) goto L_007d3836;
L_007d3845:; BB(0x007d3845);
    /* 007d3845: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 007d3848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d384a: mov dword ptr [esi + 0x3164], eax */ W32((u32)(r_esi+0x3164u), r_eax);
    /* 007d3850: mov dword ptr [esi + 0x3168], eax */ W32((u32)(r_esi+0x3168u), r_eax);
    /* 007d3856: mov dword ptr [esi + 0x316c], eax */ W32((u32)(r_esi+0x316cu), r_eax);
    /* 007d385c: mov dword ptr [esi + 0x3170], eax */ W32((u32)(r_esi+0x3170u), r_eax);
    /* 007d3862: mov byte ptr [esi + 0x3174], al */ W8((u32)(r_esi+0x3174u), (u8)r_eax);
    /* 007d3868: mov byte ptr [esi + 0x3175], al */ W8((u32)(r_esi+0x3175u), (u8)r_eax);
    /* 007d386e: mov byte ptr [esi + 0x3176], al */ W8((u32)(r_esi+0x3176u), (u8)r_eax);
    /* 007d3874: mov byte ptr [esi + 0x3177], al */ W8((u32)(r_esi+0x3177u), (u8)r_eax);
    /* 007d387a: mov word ptr [esi + 0x3178], ax */ W16((u32)(r_esi+0x3178u), (u16)r_eax);
    /* 007d3881: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_007d3884:; BB(0x007d3884);
    /* 007d3884: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007d388b: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d3890: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d3893: mov eax, 0x399c */ r_eax = 0x399cu;
    /* 007d3898: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007d389b: mov byte ptr [edx + 2], 0xe7 */ W8((u32)(r_edx+0x2u), 0xe7u);
    /* 007d389f: mov dword ptr [edx + 4], 0 */ W32((u32)(r_edx+0x4u), 0x0u);
    /* 007d38a6: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x7d38abu); f_006c1bcc();
    /* 007d38ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d38ac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d38af: lea edi, [edx + 8] */ r_edi = (u32)(r_edx+0x8u);
    /* 007d38b2: mov esi, eax */ r_esi = r_eax;
    /* 007d38b4: mov ecx, 0x4dc */ r_ecx = 0x4dcu;
    /* 007d38b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d38ba: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007d38bd: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007d38bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d38c0: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007d38c3: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007d38c5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d38ca: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x7d38cfu); f_006c1bd4();
    /* 007d38cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d38d0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d38d3: lea edi, [edx + 0x4e4] */ r_edi = (u32)(r_edx+0x4e4u);
    /* 007d38d9: mov esi, eax */ r_esi = r_eax;
    /* 007d38db: mov ecx, 0x29c8 */ r_ecx = 0x29c8u;
    /* 007d38e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d38e1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007d38e4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007d38e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d38e7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007d38ea: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007d38ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007d38ef: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 007d38f5: lea edi, [eax + 0x2eac] */ r_edi = (u32)(r_eax+0x2eacu);
    /* 007d38fb: mov ecx, 0xaf0 */ r_ecx = 0xaf0u;
    /* 007d3900: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3901: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007d3904: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 007d3906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007d3907: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007d390a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 007d390c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007d390f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007d3912: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 007d3915: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3916: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3917: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d391cu); f_0077fd10();
    /* 007d391c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007d391f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007d3921: je 0x7d392c */ if (fZ) goto L_007d392c;
L_007d3923:; BB(0x007d3923);
    /* 007d3923: mov ecx, eax */ r_ecx = r_eax;
    /* 007d3925: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3927: call 0x7c17c4 */ r_esp -= 4; W32(r_esp, 0x7d392cu); f_007c17c4();
L_007d392c:; BB(0x007d392c);
    /* 007d392c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007d392f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007d3932: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007d3935: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007d3938: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007d393f: mov esp, ebp */ r_esp = r_ebp;
    /* 007d3941: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d3942: ret  */ FN_RET(0x007d36b4); r_esp += 4; return;
L_007d3943:; BB(0x007d3943);
    /* 007d3943: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3945: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007d3948: jmp 0x7d3884 */ goto L_007d3884;
}

void f_007d3950(void) /* sub_7D3950 */
{
    FN_ENTER(0x007d3950);
    /* 007d3950: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3951: sub esp, 0x444 */ {  u32 a = r_esp; u32 b = 0x444u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3957: mov edi, ecx */ r_edi = r_ecx;
    /* 007d3959: mov eax, dword ptr [edi + 0x12130] */ r_eax = R32((u32)(r_edi+0x12130u));
    /* 007d395f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3961: je 0x7d3a1c */ if (fZ) goto L_007d3a1c;
L_007d3967:; BB(0x007d3967);
    /* 007d3967: mov eax, dword ptr [0xaaecb4] */ r_eax = R32((u32)(0xaaecb4u));
    /* 007d396c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d396e: je 0x7d3a6c */ if (fZ) goto L_007d3a6c;
L_007d3974:; BB(0x007d3974);
    /* 007d3974: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3977: je 0x7d3a49 */ if (fZ) goto L_007d3a49;
L_007d397d:; BB(0x007d397d);
    /* 007d397d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3980: je 0x7d3a26 */ if (fZ) goto L_007d3a26;
L_007d3986:; BB(0x007d3986);
    /* 007d3986: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3989: je 0x7d39e9 */ if (fZ) goto L_007d39e9;
L_007d398b:; BB(0x007d398b);
    /* 007d398b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d398e: jne 0x7d39bb */ if (!fZ) goto L_007d39bb;
L_007d3990:; BB(0x007d3990);
    /* 007d3990: mov eax, dword ptr [esp + 0x454] */ r_eax = R32((u32)(r_esp+0x454u));
    /* 007d3997: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007d399b: mov dword ptr [esp + 0xc], 0x97e868 */ W32((u32)(r_esp+0xcu), 0x97e868u);
    /* 007d39a3: mov dword ptr [esp + 0x10], 0x979620 */ W32((u32)(r_esp+0x10u), 0x979620u);
    /* 007d39ab: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007d39af: mov ecx, edi */ r_ecx = r_edi;
    /* 007d39b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d39b2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007d39b4: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7d39b9u); f_00618a44();
    /* 007d39b9: jmp 0x7d3a12 */ goto L_007d3a12;
L_007d39bb:; BB(0x007d39bb);
    /* 007d39bb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d39be: jne 0x7d3a12 */ if (!fZ) goto L_007d3a12;
L_007d39c0:; BB(0x007d39c0);
    /* 007d39c0: mov eax, dword ptr [esp + 0x454] */ r_eax = R32((u32)(r_esp+0x454u));
    /* 007d39c7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007d39cb: mov dword ptr [esp], 0x97e868 */ W32((u32)(r_esp), 0x97e868u);
    /* 007d39d2: mov dword ptr [esp + 4], 0x9795e0 */ W32((u32)(r_esp+0x4u), 0x9795e0u);
    /* 007d39da: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d39dd: mov ecx, edi */ r_ecx = r_edi;
    /* 007d39df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d39e0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007d39e2: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7d39e7u); f_00618a44();
    /* 007d39e7: jmp 0x7d3a12 */ goto L_007d3a12;
L_007d39e9:; BB(0x007d39e9);
    /* 007d39e9: mov eax, dword ptr [esp + 0x454] */ r_eax = R32((u32)(r_esp+0x454u));
    /* 007d39f0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007d39f4: mov dword ptr [esp + 0x18], 0x97e868 */ W32((u32)(r_esp+0x18u), 0x97e868u);
    /* 007d39fc: mov dword ptr [esp + 0x1c], 0x97962c */ W32((u32)(r_esp+0x1cu), 0x97962cu);
    /* 007d3a04: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007d3a08: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3a0a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a0b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a0d: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7d3a12u); f_00618a44();
L_007d3a12:; BB(0x007d3a12);
    /* 007d3a12: mov dword ptr [0xaaecb4], 0 */ W32((u32)(0xaaecb4u), 0x0u);
L_007d3a1c:; BB(0x007d3a1c);
    /* 007d3a1c: add esp, 0x444 */ {  u32 a = r_esp; u32 b = 0x444u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3a22: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d3a23: ret 0xc */ FN_RET(0x007d3950); r_esp += 16; return;
L_007d3a26:; BB(0x007d3a26);
    /* 007d3a26: mov eax, dword ptr [esp + 0x454] */ r_eax = R32((u32)(r_esp+0x454u));
    /* 007d3a2d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007d3a31: mov dword ptr [esp + 0x24], 0x97e850 */ W32((u32)(r_esp+0x24u), 0x97e850u);
    /* 007d3a39: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007d3a3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a3e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a40: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3a42: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7d3a47u); f_00618a44();
    /* 007d3a47: jmp 0x7d3a12 */ goto L_007d3a12;
L_007d3a49:; BB(0x007d3a49);
    /* 007d3a49: mov eax, dword ptr [esp + 0x454] */ r_eax = R32((u32)(r_esp+0x454u));
    /* 007d3a50: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007d3a54: mov dword ptr [esp + 0x2c], 0x97e840 */ W32((u32)(r_esp+0x2cu), 0x97e840u);
    /* 007d3a5c: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 007d3a60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a61: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a63: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3a65: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x7d3a6au); f_00618a44();
    /* 007d3a6a: jmp 0x7d3a12 */ goto L_007d3a12;
L_007d3a6c:; BB(0x007d3a6c);
    /* 007d3a6c: mov eax, 8 */ r_eax = 0x8u;
    /* 007d3a71: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 007d3a76: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007d3a7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d3a7c: mov byte ptr [esp + 0x36], dl */ W8((u32)(r_esp+0x36u), (u8)r_edx);
    /* 007d3a80: mov byte ptr [esp + 0x37], dl */ W8((u32)(r_esp+0x37u), (u8)r_edx);
    /* 007d3a84: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007d3a88: push 0x410 */ { u32 v = 0x410u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a8d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3a90: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x7d3a95u); f_0086b688();
    /* 007d3a95: mov eax, dword ptr [esp + 0x458] */ r_eax = R32((u32)(r_esp+0x458u));
    /* 007d3a9c: mov edx, dword ptr [esp + 0x45c] */ r_edx = R32((u32)(r_esp+0x45cu));
    /* 007d3aa3: mov byte ptr [esp + 0x42], 6 */ W8((u32)(r_esp+0x42u), 0x6u);
    /* 007d3aa8: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007d3aac: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 007d3ab0: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 007d3ab4: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ab9: mov eax, dword ptr [esp + 0x464] */ r_eax = R32((u32)(r_esp+0x464u));
    /* 007d3ac0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ac1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ac2: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3ac7u); f_00857dec();
    /* 007d3ac7: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 007d3acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3acc: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x7d3ad1u); f_00858009();
    /* 007d3ad1: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3ad4: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007d3ad8: lea eax, [eax + eax + 0x15] */ r_eax = (u32)(r_eax+r_eax+0x15u);
    /* 007d3adc: and eax, 0xfffc */ {  u32 a = r_eax; u32 b = 0xfffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007d3ae1: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3ae3: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 007d3ae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ae9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3aea: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3aefu); f_0077fd10();
    /* 007d3aef: jmp 0x7d3a12 */ goto L_007d3a12;
}

void f_007d3af4(void) /* sub_7D3AF4 */
{
    FN_ENTER(0x007d3af4);
    /* 007d3af4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3af7: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d3afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3aff: je 0x7d3b23 */ if (fZ) goto L_007d3b23;
L_007d3b01:; BB(0x007d3b01);
    /* 007d3b01: mov eax, 8 */ r_eax = 0x8u;
    /* 007d3b06: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 007d3b0a: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 007d3b0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d3b10: mov byte ptr [esp + 3], dl */ W8((u32)(r_esp+0x3u), (u8)r_edx);
    /* 007d3b14: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007d3b18: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d3b1b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b1e: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3b23u); f_0077fd10();
L_007d3b23:; BB(0x007d3b23);
    /* 007d3b23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3b26: ret  */ FN_RET(0x007d3af4); r_esp += 4; return;
}

void f_007d3b28(void) /* sub_7D3B28 */
{
    FN_ENTER(0x007d3b28);
    /* 007d3b28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b29: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3b2f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007d3b31: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 007d3b38: mov edx, dword ptr [ebx + 0x12130] */ r_edx = R32((u32)(r_ebx+0x12130u));
    /* 007d3b3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3b40: je 0x7d3ca9 */ if (fZ) goto L_007d3ca9;
L_007d3b46:; BB(0x007d3b46);
    /* 007d3b46: movzx edx, byte ptr [eax + 0x2b] */ r_edx = (u32)R8((u32)(r_eax+0x2bu));
    /* 007d3b4a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007d3b4d: je 0x7d3cb3 */ if (fZ) goto L_007d3cb3;
L_007d3b53:; BB(0x007d3b53);
    /* 007d3b53: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3b56: je 0x7d3c39 */ if (fZ) goto L_007d3c39;
L_007d3b5c:; BB(0x007d3b5c);
    /* 007d3b5c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3b5f: jne 0x7d3bc0 */ if (!fZ) goto L_007d3bc0;
L_007d3b61:; BB(0x007d3b61);
    /* 007d3b61: mov byte ptr [esp + 0x53], 0 */ W8((u32)(r_esp+0x53u), 0x0u);
    /* 007d3b66: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3b6b: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 007d3b70: mov byte ptr [esp + 0x52], dl */ W8((u32)(r_esp+0x52u), (u8)r_edx);
    /* 007d3b74: mov dword ptr [esp + 0x54], 2 */ W32((u32)(r_esp+0x54u), 0x2u);
    /* 007d3b7c: mov word ptr [esp + 0x50], cx */ W16((u32)(r_esp+0x50u), (u16)r_ecx);
    /* 007d3b81: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3b83: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3b86: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 007d3b8a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007d3b8e: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 007d3b92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b93: mov eax, dword ptr [esp + 0xd4] */ r_eax = R32((u32)(r_esp+0xd4u));
    /* 007d3b9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b9b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3b9c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3ba1u); f_00857dec();
    /* 007d3ba1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3ba4: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 007d3ba9: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 007d3bad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3bae: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3bb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3bb1: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3bb6u); f_0077fd10();
    /* 007d3bb6: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3bbc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3bbd: ret 0xc */ FN_RET(0x007d3b28); r_esp += 16; return;
L_007d3bc0:; BB(0x007d3bc0);
    /* 007d3bc0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3bc3: jne 0x7d3ca9 */ if (!fZ) goto L_007d3ca9;
L_007d3bc9:; BB(0x007d3bc9);
    /* 007d3bc9: mov byte ptr [esp + 3], 0 */ W8((u32)(r_esp+0x3u), 0x0u);
    /* 007d3bce: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3bd3: mov ecx, 0x50 */ r_ecx = 0x50u;
    /* 007d3bd8: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d3bdc: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 007d3be4: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 007d3be8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3bea: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3bed: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007d3bf1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d3bf5: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007d3bf9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3bfa: mov eax, dword ptr [esp + 0xd0] */ r_eax = R32((u32)(r_esp+0xd0u));
    /* 007d3c01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c03: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3c08u); f_00857dec();
    /* 007d3c08: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 007d3c0c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c0e: mov eax, dword ptr [esp + 0xe0] */ r_eax = R32((u32)(r_esp+0xe0u));
    /* 007d3c15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c16: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c17: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3c1cu); f_00857dec();
    /* 007d3c1c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3c1f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007d3c23: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d3c26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c2a: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3c2fu); f_0077fd10();
    /* 007d3c2f: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3c35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3c36: ret 0xc */ FN_RET(0x007d3b28); r_esp += 16; return;
L_007d3c39:; BB(0x007d3c39);
    /* 007d3c39: mov byte ptr [esp + 0x83], 0 */ W8((u32)(r_esp+0x83u), 0x0u);
    /* 007d3c41: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3c46: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 007d3c4b: mov byte ptr [esp + 0x82], dl */ W8((u32)(r_esp+0x82u), (u8)r_edx);
    /* 007d3c52: mov dword ptr [esp + 0x84], 1 */ W32((u32)(r_esp+0x84u), 0x1u);
    /* 007d3c5d: mov word ptr [esp + 0x80], cx */ W16((u32)(r_esp+0x80u), (u16)r_ecx);
    /* 007d3c65: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3c67: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3c6a: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
    /* 007d3c71: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 007d3c78: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 007d3c7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c80: mov eax, dword ptr [esp + 0xd0] */ r_eax = R32((u32)(r_esp+0xd0u));
    /* 007d3c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c88: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3c89: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3c8eu); f_00857dec();
    /* 007d3c8e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3c91: movzx eax, word ptr [esp + 0x80] */ r_eax = (u32)R16((u32)(r_esp+0x80u));
    /* 007d3c99: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 007d3ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ca1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ca4: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3ca9u); f_0077fd10();
L_007d3ca9:; BB(0x007d3ca9);
    /* 007d3ca9: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3caf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3cb0: ret 0xc */ FN_RET(0x007d3b28); r_esp += 16; return;
L_007d3cb3:; BB(0x007d3cb3);
    /* 007d3cb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007d3cb5: mov byte ptr [esp + 0xb3], dl */ W8((u32)(r_esp+0xb3u), (u8)r_edx);
    /* 007d3cbc: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 007d3cc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d3cc5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3cc8: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 007d3ccf: mov dword ptr [esp + 0xbc], eax */ W32((u32)(r_esp+0xbcu), r_eax);
    /* 007d3cd6: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 007d3cdb: mov byte ptr [esp + 0xb2], cl */ W8((u32)(r_esp+0xb2u), (u8)r_ecx);
    /* 007d3ce2: mov word ptr [esp + 0xb0], cx */ W16((u32)(r_esp+0xb0u), (u16)r_ecx);
    /* 007d3cea: lea eax, [esp + 0xb0] */ r_eax = (u32)(r_esp+0xb0u);
    /* 007d3cf1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3cf4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3cf6: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3cfbu); f_0077fd10();
    /* 007d3cfb: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3d01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3d02: ret 0xc */ FN_RET(0x007d3b28); r_esp += 16; return;
}

void f_007d3d08(void) /* sub_7D3D08 */
{
    FN_ENTER(0x007d3d08);
    /* 007d3d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d09: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3d0f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007d3d11: mov eax, dword ptr [esp + 0xc8] */ r_eax = R32((u32)(r_esp+0xc8u));
    /* 007d3d18: mov edx, dword ptr [ebx + 0x12130] */ r_edx = R32((u32)(r_ebx+0x12130u));
    /* 007d3d1e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3d20: je 0x7d3e89 */ if (fZ) goto L_007d3e89;
L_007d3d26:; BB(0x007d3d26);
    /* 007d3d26: movzx edx, byte ptr [eax + 0x2b] */ r_edx = (u32)R8((u32)(r_eax+0x2bu));
    /* 007d3d2a: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007d3d2d: je 0x7d3e93 */ if (fZ) goto L_007d3e93;
L_007d3d33:; BB(0x007d3d33);
    /* 007d3d33: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3d36: je 0x7d3e19 */ if (fZ) goto L_007d3e19;
L_007d3d3c:; BB(0x007d3d3c);
    /* 007d3d3c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3d3f: jne 0x7d3da0 */ if (!fZ) goto L_007d3da0;
L_007d3d41:; BB(0x007d3d41);
    /* 007d3d41: mov byte ptr [esp + 0x53], 0 */ W8((u32)(r_esp+0x53u), 0x0u);
    /* 007d3d46: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3d4b: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 007d3d50: mov byte ptr [esp + 0x52], dl */ W8((u32)(r_esp+0x52u), (u8)r_edx);
    /* 007d3d54: mov dword ptr [esp + 0x54], 2 */ W32((u32)(r_esp+0x54u), 0x2u);
    /* 007d3d5c: mov word ptr [esp + 0x50], cx */ W16((u32)(r_esp+0x50u), (u16)r_ecx);
    /* 007d3d61: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3d63: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3d66: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 007d3d6a: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 007d3d6e: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 007d3d72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d73: mov eax, dword ptr [esp + 0xd8] */ r_eax = R32((u32)(r_esp+0xd8u));
    /* 007d3d7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d7b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d7c: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3d81u); f_00857dec();
    /* 007d3d81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3d84: movzx eax, word ptr [esp + 0x50] */ r_eax = (u32)R16((u32)(r_esp+0x50u));
    /* 007d3d89: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 007d3d8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3d90: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3d91: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3d96u); f_0077fd10();
    /* 007d3d96: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3d9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3d9d: ret 0x10 */ FN_RET(0x007d3d08); r_esp += 20; return;
L_007d3da0:; BB(0x007d3da0);
    /* 007d3da0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3da3: jne 0x7d3e89 */ if (!fZ) goto L_007d3e89;
L_007d3da9:; BB(0x007d3da9);
    /* 007d3da9: mov byte ptr [esp + 3], 0 */ W8((u32)(r_esp+0x3u), 0x0u);
    /* 007d3dae: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3db3: mov ecx, 0x50 */ r_ecx = 0x50u;
    /* 007d3db8: mov byte ptr [esp + 2], dl */ W8((u32)(r_esp+0x2u), (u8)r_edx);
    /* 007d3dbc: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 007d3dc4: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 007d3dc8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3dca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3dcd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007d3dd1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d3dd5: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 007d3dd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3dda: mov eax, dword ptr [esp + 0xd4] */ r_eax = R32((u32)(r_esp+0xd4u));
    /* 007d3de1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3de2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3de3: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3de8u); f_00857dec();
    /* 007d3de8: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 007d3dec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3dee: mov eax, dword ptr [esp + 0xe4] */ r_eax = R32((u32)(r_esp+0xe4u));
    /* 007d3df5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3df6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3df7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3dfcu); f_00857dec();
    /* 007d3dfc: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3dff: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007d3e03: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d3e06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3e09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e0a: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3e0fu); f_0077fd10();
    /* 007d3e0f: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3e15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3e16: ret 0x10 */ FN_RET(0x007d3d08); r_esp += 20; return;
L_007d3e19:; BB(0x007d3e19);
    /* 007d3e19: mov byte ptr [esp + 0x83], 0 */ W8((u32)(r_esp+0x83u), 0x0u);
    /* 007d3e21: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3e26: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 007d3e2b: mov byte ptr [esp + 0x82], dl */ W8((u32)(r_esp+0x82u), (u8)r_edx);
    /* 007d3e32: mov dword ptr [esp + 0x84], 1 */ W32((u32)(r_esp+0x84u), 0x1u);
    /* 007d3e3d: mov word ptr [esp + 0x80], cx */ W16((u32)(r_esp+0x80u), (u16)r_ecx);
    /* 007d3e45: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007d3e47: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3e4a: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
    /* 007d3e51: mov dword ptr [esp + 0x8c], eax */ W32((u32)(r_esp+0x8cu), r_eax);
    /* 007d3e58: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 007d3e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e60: mov eax, dword ptr [esp + 0xd4] */ r_eax = R32((u32)(r_esp+0xd4u));
    /* 007d3e67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e68: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e69: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x7d3e6eu); f_00857dec();
    /* 007d3e6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3e71: movzx eax, word ptr [esp + 0x80] */ r_eax = (u32)R16((u32)(r_esp+0x80u));
    /* 007d3e79: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 007d3e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e81: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3e83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3e84: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3e89u); f_0077fd10();
L_007d3e89:; BB(0x007d3e89);
    /* 007d3e89: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3e8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3e90: ret 0x10 */ FN_RET(0x007d3d08); r_esp += 20; return;
L_007d3e93:; BB(0x007d3e93);
    /* 007d3e93: movzx edx, byte ptr [esp + 0xcc] */ r_edx = (u32)R8((u32)(r_esp+0xccu));
    /* 007d3e9b: mov byte ptr [esp + 0xb3], 0 */ W8((u32)(r_esp+0xb3u), 0x0u);
    /* 007d3ea3: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 007d3ea8: mov byte ptr [esp + 0xb2], cl */ W8((u32)(r_esp+0xb2u), (u8)r_ecx);
    /* 007d3eaf: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 007d3eb6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007d3eb8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3ebb: mov word ptr [esp + 0xb0], cx */ W16((u32)(r_esp+0xb0u), (u16)r_ecx);
    /* 007d3ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007d3ec5: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 007d3ecc: mov dword ptr [esp + 0xbc], eax */ W32((u32)(r_esp+0xbcu), r_eax);
    /* 007d3ed3: lea eax, [esp + 0xb0] */ r_eax = (u32)(r_esp+0xb0u);
    /* 007d3eda: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3edc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3edd: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3ee2u); f_0077fd10();
    /* 007d3ee2: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3ee8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3ee9: ret 0x10 */ FN_RET(0x007d3d08); r_esp += 20; return;
}

void f_007d3eec(void) /* sub_7D3EEC */
{
    FN_ENTER(0x007d3eec);
    /* 007d3eec: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3eef: mov eax, dword ptr [ecx + 0x12130] */ r_eax = R32((u32)(r_ecx+0x12130u));
    /* 007d3ef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3ef7: je 0x7d3f31 */ if (fZ) goto L_007d3f31;
L_007d3ef9:; BB(0x007d3ef9);
    /* 007d3ef9: mov byte ptr [esp + 2], 9 */ W8((u32)(r_esp+0x2u), 0x9u);
    /* 007d3efe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3f00: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007d3f05: mov byte ptr [esp + 3], al */ W8((u32)(r_esp+0x3u), (u8)r_eax);
    /* 007d3f09: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007d3f0d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007d3f11: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007d3f13: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007d3f17: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007d3f1b: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007d3f1f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007d3f22: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007d3f26: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007d3f29: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f2c: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3f31u); f_0077fd10();
L_007d3f31:; BB(0x007d3f31);
    /* 007d3f31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3f34: ret 4 */ FN_RET(0x007d3eec); r_esp += 8; return;
}

void f_007d3f38(void) /* sub_7D3F38 */
{
    FN_ENTER(0x007d3f38);
    /* 007d3f38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f3b: sub esp, 0x488 */ {  u32 a = r_esp; u32 b = 0x488u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3f41: mov edi, ecx */ r_edi = r_ecx;
    /* 007d3f43: mov ebp, dword ptr [esp + 0x498] */ r_ebp = R32((u32)(r_esp+0x498u));
    /* 007d3f4a: mov ebx, dword ptr [esp + 0x49c] */ r_ebx = R32((u32)(r_esp+0x49cu));
    /* 007d3f51: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 007d3f55: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d3f58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f5a: push 0x97e87c */ { u32 v = 0x97e87cu; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f60: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d3f65u); f_00858bf5();
    /* 007d3f65: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3f68: mov eax, dword ptr [edi + 0x12130] */ r_eax = R32((u32)(r_edi+0x12130u));
    /* 007d3f6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d3f70: je 0x7d3fbf */ if (fZ) goto L_007d3fbf;
L_007d3f72:; BB(0x007d3f72);
    /* 007d3f72: mov byte ptr [esp + 0x82], 0x60 */ W8((u32)(r_esp+0x82u), 0x60u);
    /* 007d3f7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007d3f7c: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 007d3f7f: mov byte ptr [esp + 0x83], al */ W8((u32)(r_esp+0x83u), (u8)r_eax);
    /* 007d3f86: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 007d3f8d: mov word ptr [esp + 0x80], dx */ W16((u32)(r_esp+0x80u), (u16)r_edx);
    /* 007d3f95: lea eax, [esp + 0x88] */ r_eax = (u32)(r_esp+0x88u);
    /* 007d3f9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3f9f: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7d3fa4u); f_0086b6b8();
    /* 007d3fa4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d3fa7: movzx eax, word ptr [esp + 0x80] */ r_eax = (u32)R16((u32)(r_esp+0x80u));
    /* 007d3faf: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 007d3fb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fb7: mov ecx, edi */ r_ecx = r_edi;
    /* 007d3fb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fba: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d3fbfu); f_0077fd10();
L_007d3fbf:; BB(0x007d3fbf);
    /* 007d3fbf: add esp, 0x488 */ {  u32 a = r_esp; u32 b = 0x488u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d3fc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d3fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d3fc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d3fc8: ret 8 */ FN_RET(0x007d3f38); r_esp += 12; return;
}

void f_007d3fcc(void) /* sub_7D3FCC */
{
    FN_ENTER(0x007d3fcc);
    /* 007d3fcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fcf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3fd0: sub esp, 0x488 */ {  u32 a = r_esp; u32 b = 0x488u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007d3fd6: mov edi, ecx */ r_edi = r_ecx;
    /* 007d3fd8: mov esi, dword ptr [esp + 0x49c] */ r_esi = R32((u32)(r_esp+0x49cu));
    /* 007d3fdf: mov ebp, dword ptr [esp + 0x4a0] */ r_ebp = R32((u32)(r_esp+0x4a0u));
    /* 007d3fe6: mov ebx, dword ptr [esp + 0x4a4] */ r_ebx = R32((u32)(r_esp+0x4a4u));
    /* 007d3fed: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007d3ff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ff1: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 007d3ff5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ff7: push 0x97e890 */ { u32 v = 0x97e890u; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ffc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d3ffd: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7d4002u); f_00858bf5();
    /* 007d4002: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d4005: mov eax, dword ptr [edi + 0x12130] */ r_eax = R32((u32)(r_edi+0x12130u));
    /* 007d400b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007d400d: je 0x7d405b */ if (fZ) goto L_007d405b;
L_007d400f:; BB(0x007d400f);
    /* 007d400f: mov byte ptr [esp + 0x83], 0 */ W8((u32)(r_esp+0x83u), 0x0u);
    /* 007d4017: mov dword ptr [esp + 0x84], esi */ W32((u32)(r_esp+0x84u), r_esi);
    /* 007d401e: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 007d4021: mov byte ptr [esp + 0x82], 0x62 */ W8((u32)(r_esp+0x82u), 0x62u);
    /* 007d4029: mov word ptr [esp + 0x80], ax */ W16((u32)(r_esp+0x80u), (u16)r_eax);
    /* 007d4031: lea edx, [esp + 0x88] */ r_edx = (u32)(r_esp+0x88u);
    /* 007d4038: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007d4039: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007d403a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d403b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7d4040u); f_0086b6b8();
    /* 007d4040: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007d4043: movzx eax, word ptr [esp + 0x80] */ r_eax = (u32)R16((u32)(r_esp+0x80u));
    /* 007d404b: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 007d4052: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007d4053: mov ecx, edi */ r_ecx = r_edi;
    /* 007d4055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007d4056: call 0x77fd10 */ r_esp -= 4; W32(r_esp, 0x7d405bu); f_0077fd10();
L_007d405b:; BB(0x007d405b);
    /* 007d405b: add esp, 0x488 */ {  u32 a = r_esp; u32 b = 0x488u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007d4061: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007d4062: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007d4063: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007d4064: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007d4065: ret 0xc */ FN_RET(0x007d3fcc); r_esp += 16; return;
}

