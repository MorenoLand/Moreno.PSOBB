#include "protos.h"

void f_0085b329(void) /* __make_time_t */
{
    FN_ENTER(0x0085b329);
    /* 0085b329: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b32a: mov ebp, esp */ r_ebp = r_esp;
    /* 0085b32c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b32d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b32e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b32f: mov edi, eax */ r_edi = r_eax;
    /* 0085b331: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 0085b334: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b337: jl 0x85b3ab */ if ((fS!=fO)) goto L_0085b3ab;
L_0085b339:; BB(0x0085b339);
    /* 0085b339: mov esi, 0x8b */ r_esi = 0x8bu;
    /* 0085b33e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b340: jg 0x85b3ab */ if ((!fZ&&fS==fO)) goto L_0085b3ab;
L_0085b342:; BB(0x0085b342);
    /* 0085b342: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0085b345: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b347: jl 0x85b34e */ if ((fS!=fO)) goto L_0085b34e;
L_0085b349:; BB(0x0085b349);
    /* 0085b349: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b34c: jle 0x85b36f */ if ((fZ||fS!=fO)) goto L_0085b36f;
L_0085b34e:; BB(0x0085b34e);
    /* 0085b34e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b34f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085b351: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b352: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b353: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x0085b353, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b353, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b355: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b356: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085b358: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b35a: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0085b35d: jge 0x85b366 */ if ((fS==fO)) goto L_0085b366;
L_0085b35f:; BB(0x0085b35f);
    /* 0085b35f: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b362: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 0085b365: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0085b366:; BB(0x0085b366);
    /* 0085b366: cmp ecx, 0x45 */ {  u32 a = r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b369: jl 0x85b3ab */ if ((fS!=fO)) goto L_0085b3ab;
L_0085b36b:; BB(0x0085b36b);
    /* 0085b36b: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b36d: jg 0x85b3ab */ if ((!fZ&&fS==fO)) goto L_0085b3ab;
L_0085b36f:; BB(0x0085b36f);
    /* 0085b36f: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085b372: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0085b375: mov edx, dword ptr [eax*4 + 0xa2429c] */ r_edx = R32((u32)(r_eax*4+0xa2429cu));
    /* 0085b37c: jne 0x85b384 */ if (!fZ) goto L_0085b384;
L_0085b37e:; BB(0x0085b37e);
    /* 0085b37e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b381: jle 0x85b384 */ if ((fZ||fS!=fO)) goto L_0085b384;
L_0085b383:; BB(0x0085b383);
    /* 0085b383: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0085b384:; BB(0x0085b384);
    /* 0085b384: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 0085b387: imul ecx, ecx, 0x16d */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x16du; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b38d: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085b390: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b392: lea eax, [ecx + eax - 0x63df] */ r_eax = (u32)(r_ecx+r_eax+0xffff9c21u);
    /* 0085b399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b39b: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0085b39e: lea esi, [eax + ecx] */ r_esi = (u32)(r_eax+r_ecx);
    /* 0085b3a1: jl 0x85b3b2 */ if ((fS!=fO)) goto L_0085b3b2;
L_0085b3a3:; BB(0x0085b3a3);
    /* 0085b3a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3a5: jl 0x85b3ba */ if ((fS!=fO)) goto L_0085b3ba;
L_0085b3a7:; BB(0x0085b3a7);
    /* 0085b3a7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3a9: jge 0x85b3ba */ if ((fS==fO)) goto L_0085b3ba;
L_0085b3ab:; BB(0x0085b3ab);
    /* 0085b3ab: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085b3ae:; BB(0x0085b3ae);
    /* 0085b3ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b3af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b3b0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085b3b1: ret  */ FN_RET(0x0085b329); r_esp += 4; return;
L_0085b3b2:; BB(0x0085b3b2);
    /* 0085b3b2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3b4: jge 0x85b3ba */ if ((fS==fO)) goto L_0085b3ba;
L_0085b3b6:; BB(0x0085b3b6);
    /* 0085b3b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3b8: jge 0x85b3ab */ if ((fS==fO)) goto L_0085b3ab;
L_0085b3ba:; BB(0x0085b3ba);
    /* 0085b3ba: lea ecx, [esi + esi*2] */ r_ecx = (u32)(r_esi+r_esi*2);
    /* 0085b3bd: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0085b3c0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b3c2: je 0x85b3d5 */ if (fZ) goto L_0085b3d5;
L_0085b3c4:; BB(0x0085b3c4);
    /* 0085b3c4: mov eax, ecx */ r_eax = r_ecx;
    /* 0085b3c6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b3c7: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085b3c7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b3c7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b3c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b3cb: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b3ce: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085b3d1: mov eax, edx */ r_eax = r_edx;
    /* 0085b3d3: jmp 0x85b3d7 */ goto L_0085b3d7;
L_0085b3d5:; BB(0x0085b3d5);
    /* 0085b3d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085b3d7:; BB(0x0085b3d7);
    /* 0085b3d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b3d9: jne 0x85b3ab */ if (!fZ) goto L_0085b3ab;
L_0085b3db:; BB(0x0085b3db);
    /* 0085b3db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3dd: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0085b3e0: lea esi, [eax + ecx] */ r_esi = (u32)(r_eax+r_ecx);
    /* 0085b3e3: jl 0x85b3ef */ if ((fS!=fO)) goto L_0085b3ef;
L_0085b3e5:; BB(0x0085b3e5);
    /* 0085b3e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3e7: jl 0x85b3f7 */ if ((fS!=fO)) goto L_0085b3f7;
L_0085b3e9:; BB(0x0085b3e9);
    /* 0085b3e9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3eb: jl 0x85b3ab */ if ((fS!=fO)) goto L_0085b3ab;
L_0085b3ed:; BB(0x0085b3ed);
    /* 0085b3ed: jmp 0x85b3f7 */ goto L_0085b3f7;
L_0085b3ef:; BB(0x0085b3ef);
    /* 0085b3ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3f1: jge 0x85b3f7 */ if ((fS==fO)) goto L_0085b3f7;
L_0085b3f3:; BB(0x0085b3f3);
    /* 0085b3f3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b3f5: jge 0x85b3ab */ if ((fS==fO)) goto L_0085b3ab;
L_0085b3f7:; BB(0x0085b3f7);
    /* 0085b3f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0085b3f9: imul ecx, ecx, 0x3c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b3fc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b3fe: je 0x85b411 */ if (fZ) goto L_0085b411;
L_0085b400:; BB(0x0085b400);
    /* 0085b400: mov eax, ecx */ r_eax = r_ecx;
    /* 0085b402: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b403: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085b403, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b403, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b405: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b407: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b40a: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085b40d: mov eax, edx */ r_eax = r_edx;
    /* 0085b40f: jmp 0x85b413 */ goto L_0085b413;
L_0085b411:; BB(0x0085b411);
    /* 0085b411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085b413:; BB(0x0085b413);
    /* 0085b413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b415: jne 0x85b3ab */ if (!fZ) goto L_0085b3ab;
L_0085b417:; BB(0x0085b417);
    /* 0085b417: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b419: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0085b41c: lea esi, [eax + ecx] */ r_esi = (u32)(r_eax+r_ecx);
    /* 0085b41f: jl 0x85b42b */ if ((fS!=fO)) goto L_0085b42b;
L_0085b421:; BB(0x0085b421);
    /* 0085b421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b423: jl 0x85b437 */ if ((fS!=fO)) goto L_0085b437;
L_0085b425:; BB(0x0085b425);
    /* 0085b425: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b427: jl 0x85b3ab */ if ((fS!=fO)) goto L_0085b3ab;
L_0085b429:; BB(0x0085b429);
    /* 0085b429: jmp 0x85b437 */ goto L_0085b437;
L_0085b42b:; BB(0x0085b42b);
    /* 0085b42b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b42d: jge 0x85b437 */ if ((fS==fO)) goto L_0085b437;
L_0085b42f:; BB(0x0085b42f);
    /* 0085b42f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b431: jge 0x85b3ab */ if ((fS==fO)) goto L_0085b3ab;
L_0085b437:; BB(0x0085b437);
    /* 0085b437: mov ecx, esi */ r_ecx = r_esi;
    /* 0085b439: imul ecx, ecx, 0x3c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x3cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b43c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b43e: je 0x85b451 */ if (fZ) goto L_0085b451;
L_0085b440:; BB(0x0085b440);
    /* 0085b440: mov eax, ecx */ r_eax = r_ecx;
    /* 0085b442: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b443: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085b443, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b443, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b445: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b447: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b44a: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085b44d: mov eax, edx */ r_eax = r_edx;
    /* 0085b44f: jmp 0x85b453 */ goto L_0085b453;
L_0085b451:; BB(0x0085b451);
    /* 0085b451: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085b453:; BB(0x0085b453);
    /* 0085b453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b455: jne 0x85b3ab */ if (!fZ) goto L_0085b3ab;
L_0085b45b:; BB(0x0085b45b);
    /* 0085b45b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b45d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0085b45f: lea edx, [eax + ecx] */ r_edx = (u32)(r_eax+r_ecx);
    /* 0085b462: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0085b465: jl 0x85b475 */ if ((fS!=fO)) goto L_0085b475;
L_0085b467:; BB(0x0085b467);
    /* 0085b467: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b469: jl 0x85b481 */ if ((fS!=fO)) goto L_0085b481;
L_0085b46b:; BB(0x0085b46b);
    /* 0085b46b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b46d: jl 0x85b3ab */ if ((fS!=fO)) goto L_0085b3ab;
L_0085b473:; BB(0x0085b473);
    /* 0085b473: jmp 0x85b481 */ goto L_0085b481;
L_0085b475:; BB(0x0085b475);
    /* 0085b475: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b477: jge 0x85b481 */ if ((fS==fO)) goto L_0085b481;
L_0085b479:; BB(0x0085b479);
    /* 0085b479: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b47b: jge 0x85b3ab */ if ((fS==fO)) goto L_0085b3ab;
L_0085b481:; BB(0x0085b481);
    /* 0085b481: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b485: je 0x85b4c8 */ if (fZ) goto L_0085b4c8;
L_0085b487:; BB(0x0085b487);
    /* 0085b487: call 0x864428 */ r_esp -= 4; W32(r_esp, 0x85b48cu); f_00864428();
    /* 0085b48c: mov eax, dword ptr [0xa24070] */ r_eax = R32((u32)(0xa24070u));
    /* 0085b491: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b494: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085b497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b498: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x85b49du); f_0085a27d();
    /* 0085b49d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b49f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b4a0: je 0x85b3ab */ if (fZ) goto L_0085b3ab;
L_0085b4a6:; BB(0x0085b4a6);
    /* 0085b4a6: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0085b4a9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b4ab: jg 0x85b4b5 */ if ((!fZ&&fS==fO)) goto L_0085b4b5;
L_0085b4ad:; BB(0x0085b4ad);
    /* 0085b4ad: jge 0x85b4da */ if ((fS==fO)) goto L_0085b4da;
L_0085b4af:; BB(0x0085b4af);
    /* 0085b4af: cmp dword ptr [eax + 0x20], 0 */ {  u32 a = R32((u32)(r_eax+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085b4b3: jle 0x85b4da */ if ((fZ||fS!=fO)) goto L_0085b4da;
L_0085b4b5:; BB(0x0085b4b5);
    /* 0085b4b5: mov eax, dword ptr [0xa24078] */ r_eax = R32((u32)(0xa24078u));
    /* 0085b4ba: add dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b4bd: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085b4c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4c1: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x85b4c6u); f_0085a27d();
    /* 0085b4c6: jmp 0x85b4d1 */ goto L_0085b4d1;
L_0085b4c8:; BB(0x0085b4c8);
    /* 0085b4c8: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085b4cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4cc: call 0x85b4f6 */ r_esp -= 4; W32(r_esp, 0x85b4d1u); f_0085b4f6();
L_0085b4d1:; BB(0x0085b4d1);
    /* 0085b4d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b4d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b4d4: je 0x85b3ab */ if (fZ) goto L_0085b3ab;
L_0085b4da:; BB(0x0085b4da);
    /* 0085b4da: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4dc: mov esi, eax */ r_esi = r_eax;
    /* 0085b4de: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085b4e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b4e2: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0085b4e4: jmp 0x85b3ae */ goto L_0085b3ae;
}

