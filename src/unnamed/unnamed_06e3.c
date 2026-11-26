#include "protos.h"

void f_006e31e8(void) /* sub_6E31E8 */
{
    FN_ENTER(0x006e31e8);
    /* 006e31e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e31e9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e31ec: mov edi, ecx */ r_edi = r_ecx;
    /* 006e31ee: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e31f5: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e31fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e31fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e31fd: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e3202u); f_006ded14();
    /* 006e3202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3205: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e3207: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 006e320d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e3210: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 006e3216: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e3219: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 006e321f: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e3222: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 006e3228: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e322b: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 006e3231: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e3234: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 006e323a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e323d: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 006e3243: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e3246: mov dword ptr [edi + 0xe8], edx */ W32((u32)(r_edi+0xe8u), r_edx);
    /* 006e324c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e324f: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 006e3255: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e3258: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 006e325e: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e3261: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006e3267: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e326e: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e3271: jl 0x6e32ab */ if ((fS!=fO)) goto L_006e32ab;
L_006e3273:; BB(0x006e3273);
    /* 006e3273: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e3278u); f_00687c48();
    /* 006e3278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e327a: jne 0x6e32a4 */ if (!fZ) goto L_006e32a4;
L_006e327c:; BB(0x006e327c);
    /* 006e327c: movsx edx, word ptr [0x9cf720] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf720u));
    /* 006e3283: movsx eax, word ptr [0x9cf722] */ r_eax = (u32)(i32)(i16)R16((u32)(0x9cf722u));
    /* 006e328a: movsx ecx, word ptr [edi + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e3291: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e3294: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3296: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006e3299: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e329c: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e32a2: jmp 0x6e32f4 */ goto L_006e32f4;
L_006e32a4:; BB(0x006e32a4);
    /* 006e32a4: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
L_006e32ab:; BB(0x006e32ab);
    /* 006e32ab: movsx edx, word ptr [edi + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xf0u));
    /* 006e32b2: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e32b5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e32b9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e32bd: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 006e32c3: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e32c9: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e32ceu); f_00687c48();
    /* 006e32ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e32d0: je 0x6e32ed */ if (fZ) goto L_006e32ed;
L_006e32d2:; BB(0x006e32d2);
    /* 006e32d2: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 006e32d8: fmul dword ptr [0x9cf780] */ ST(0) = ST(0) * R_F32((u32)(0x9cf780u));
    /* 006e32de: movsx ecx, word ptr [edi + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e32e5: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e32eb: jmp 0x6e32f4 */ goto L_006e32f4;
L_006e32ed:; BB(0x006e32ed);
    /* 006e32ed: movsx ecx, word ptr [edi + 0xc4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
L_006e32f4:; BB(0x006e32f4);
    /* 006e32f4: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e32f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e32f8: call 0x6e06cc */ r_esp -= 4; W32(r_esp, 0x6e32fdu); f_006e06cc();
    /* 006e32fd: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006e3301: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 006e3305: fadd dword ptr [edi + 0xd0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xd0u));
    /* 006e330b: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 006e3311: fstp dword ptr [edi + 0x64] */ W_F32((u32)(r_edi+0x64u), ST(0)); FPOP();
    /* 006e3314: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 006e3317: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e331a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e331b: ret  */ FN_RET(0x006e31e8); r_esp += 4; return;
}

void f_006e331c(void) /* sub_6E331C */
{
    FN_ENTER(0x006e331c);
    /* 006e331c: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e3323: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3325: je 0x6e33da */ if (fZ) goto L_006e33da;
L_006e332b:; BB(0x006e332b);
    /* 006e332b: jg 0x6e332e */ if ((!fZ&&fS==fO)) goto L_006e332e;
L_006e332d:; BB(0x006e332d);
    /* 006e332d: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
L_006e332e:; BB(0x006e332e);
    /* 006e332e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e3331: jg 0x6e3349 */ if ((!fZ&&fS==fO)) goto L_006e3349;
L_006e3333:; BB(0x006e3333);
    /* 006e3333: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3336: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3338: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3339: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e333a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e333b: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3340: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3345u); f_00814298();
    /* 006e3345: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3348: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
L_006e3349:; BB(0x006e3349);
    /* 006e3349: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e334c: je 0x6e33ac */ if (fZ) goto L_006e33ac;
L_006e334e:; BB(0x006e334e);
    /* 006e334e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3351: jne 0x6e337d */ if (!fZ) goto L_006e337d;
L_006e3353:; BB(0x006e3353);
    /* 006e3353: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3356: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3359: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e335a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e335b: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3360: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3365u); f_00814298();
    /* 006e3365: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3368: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e336a: jl 0x6e332d */ if ((fS!=fO)) goto L_006e332d;
L_006e336c:; BB(0x006e336c);
    /* 006e336c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e336e: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3373: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3374: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e3379u); f_00814664();
    /* 006e3379: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e337c: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
L_006e337d:; BB(0x006e337d);
    /* 006e337d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e3380: jne 0x6e332d */ if (!fZ) goto L_006e332d;
L_006e3382:; BB(0x006e3382);
    /* 006e3382: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3385: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3389: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e338a: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 006e338f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3394u); f_00814298();
    /* 006e3394: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3397: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3399: jl 0x6e332d */ if ((fS!=fO)) goto L_006e332d;
L_006e339b:; BB(0x006e339b);
    /* 006e339b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e339d: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33a3: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e33a8u); f_00814664();
    /* 006e33a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e33ab: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
L_006e33ac:; BB(0x006e33ac);
    /* 006e33ac: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e33af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e33b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e33b4: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33b9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e33beu); f_00814298();
    /* 006e33be: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e33c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e33c3: jl 0x6e332d */ if ((fS!=fO)) goto L_006e332d;
L_006e33c9:; BB(0x006e33c9);
    /* 006e33c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33cb: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33d1: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e33d6u); f_00814664();
    /* 006e33d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e33d9: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
L_006e33da:; BB(0x006e33da);
    /* 006e33da: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e33dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e33df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e33e2: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33e7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e33ecu); f_00814298();
    /* 006e33ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e33ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e33f1: jl 0x6e332d */ if ((fS!=fO)) goto L_006e332d;
L_006e33f7:; BB(0x006e33f7);
    /* 006e33f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33f9: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e33fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e33ff: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e3404u); f_00814664();
    /* 006e3404: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3407: ret  */ FN_RET(0x006e331c); r_esp += 4; return;
}

void f_006e3408(void) /* sub_6E3408 */
{
    FN_ENTER(0x006e3408);
    /* 006e3408: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e3409: mov ebp, esp */ r_ebp = r_esp;
    /* 006e340b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e340d: push 0x8eeacc */ { u32 v = 0x8eeaccu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3412: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e3418: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3419: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e3420: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e3423: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e3426: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e3429: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e342c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e342f: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3434: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e343b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e3440u); f_005caba4();
    /* 006e3440: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3441: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e3444: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3446: je 0x6e3471 */ if (fZ) goto L_006e3471;
L_006e3448:; BB(0x006e3448);
    /* 006e3448: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e344f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e3456: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3459: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e345c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e345f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3462: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3465: call 0x6e3480 */ r_esp -= 4; W32(r_esp, 0x6e346au); f_006e3480();
    /* 006e346a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e3471:; BB(0x006e3471);
    /* 006e3471: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e3474: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e347b: mov esp, ebp */ r_esp = r_ebp;
    /* 006e347d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e347e: ret  */ FN_RET(0x006e3408); r_esp += 4; return;
}

void f_006e3480(void) /* sub_6E3480 */
{
    FN_ENTER(0x006e3480);
    /* 006e3480: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e3481: mov ebp, esp */ r_ebp = r_esp;
    /* 006e3483: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3485: push 0x8eeae8 */ { u32 v = 0x8eeae8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e348a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e3490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3491: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e3498: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e349b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e349e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e34a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e34a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e34a7: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e34aa: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e34ad: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e34b0: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e34b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e34b6: call 0x6f0138 */ r_esp -= 4; W32(r_esp, 0x6e34bbu); f_006f0138();
    /* 006e34bb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e34c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e34c5: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e34c8: mov dword ptr [ecx], 0xb3d280 */ W32((u32)(r_ecx), 0xb3d280u);
    /* 006e34ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e34d0: je 0x6e34dd */ if (fZ) goto L_006e34dd;
L_006e34d2:; BB(0x006e34d2);
    /* 006e34d2: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e34d6: mov word ptr [ecx + 0xc8], ax */ W16((u32)(r_ecx+0xc8u), (u16)r_eax);
L_006e34dd:; BB(0x006e34dd);
    /* 006e34dd: call 0x6e31e8 */ r_esp -= 4; W32(r_esp, 0x6e34e2u); f_006e31e8();
    /* 006e34e2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e34e5: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 006e34e8: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 006e34eb: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006e34ee: add ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e34f1: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e34f8: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 006e34fb: lea ecx, [ebp - 0x38] */ r_ecx = (u32)(r_ebp+0xffffffc8u);
    /* 006e34fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3500: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3501: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3502: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x6e3507u); f_0050bab4();
    /* 006e3507: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e350a: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006e3511: mov ecx, dword ptr [edx*8 + 0x96d1cc] */ r_ecx = R32((u32)(r_edx*8+0x96d1ccu));
    /* 006e3518: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e351a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e351c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e351d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e3522u); f_008581c5();
    /* 006e3522: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3525: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3528: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e352f: mov dword ptr [ecx + 0x130], eax */ W32((u32)(r_ecx+0x130u), r_eax);
    /* 006e3535: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 006e3537: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3539: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e353b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e353d: mov eax, dword ptr [edx + 0x96d1cc] */ r_eax = R32((u32)(r_edx+0x96d1ccu));
    /* 006e3543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e3545: jbe 0x6e36a7 */ if ((fC||fZ)) goto L_006e36a7;
L_006e354b:; BB(0x006e354b);
    /* 006e354b: mov edx, dword ptr [edx + 0x96d1c8] */ r_edx = R32((u32)(r_edx+0x96d1c8u));
    /* 006e3551: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 006e3554: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3556: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006e3559: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e355b: mov ebx, dword ptr [esi + edx + 4] */ r_ebx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006e355f: test ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3565: je 0x6e356e */ if (fZ) goto L_006e356e;
L_006e3567:; BB(0x006e3567);
    /* 006e3567: mov eax, 0x2000 */ r_eax = 0x2000u;
    /* 006e356c: jmp 0x6e3570 */ goto L_006e3570;
L_006e356e:; BB(0x006e356e);
    /* 006e356e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e3570:; BB(0x006e3570);
    /* 006e3570: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3573: jne 0x6e35c4 */ if (!fZ) goto L_006e35c4;
L_006e3575:; BB(0x006e3575);
    /* 006e3575: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3578: je 0x6e35a1 */ if (fZ) goto L_006e35a1;
L_006e357a:; BB(0x006e357a);
    /* 006e357a: lea ebx, [ebp - 0x38] */ r_ebx = (u32)(r_ebp+0xffffffc8u);
    /* 006e357d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e357e: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3581: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3584: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3585: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3586: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e358bu); f_00509dc4();
    /* 006e358b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e358e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3591: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e3597: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e359a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e359c: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006e359f: jmp 0x6e3602 */ goto L_006e3602;
L_006e35a1:; BB(0x006e35a1);
    /* 006e35a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e35a2: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e35a5: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e35a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e35a9: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e35aeu); f_0050981c();
    /* 006e35ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e35b1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e35b4: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e35ba: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e35bd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e35bf: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
    /* 006e35c2: jmp 0x6e3602 */ goto L_006e3602;
L_006e35c4:; BB(0x006e35c4);
    /* 006e35c4: mov ebx, dword ptr [ecx + 0x54] */ r_ebx = R32((u32)(r_ecx+0x54u));
    /* 006e35c7: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e35ce: add ebx, 0x8000 */ {  u32 a = r_ebx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e35d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e35d5: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 006e35d8: mov ebx, dword ptr [ecx + 0x5c] */ r_ebx = R32((u32)(r_ecx+0x5cu));
    /* 006e35db: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e35de: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006e35e1: push dword ptr [esi + edx] */ { u32 v = R32((u32)(r_esi+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e35e4: lea ebx, [ebp - 0x2c] */ r_ebx = (u32)(r_ebp+0xffffffd4u);
    /* 006e35e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e35e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e35e9: call 0x509dc4 */ r_esp -= 4; W32(r_esp, 0x6e35eeu); f_00509dc4();
    /* 006e35ee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e35f1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e35f4: mov ecx, dword ptr [edx + 0x130] */ r_ecx = R32((u32)(r_edx+0x130u));
    /* 006e35fa: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 006e35fd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e35ff: mov dword ptr [ecx + ebx], eax */ W32((u32)(r_ecx+r_ebx), r_eax);
L_006e3602:; BB(0x006e3602);
    /* 006e3602: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3605: mov eax, dword ptr [ecx + 0x130] */ r_eax = R32((u32)(r_ecx+0x130u));
    /* 006e360b: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
    /* 006e360e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3610: je 0x6e368b */ if (fZ) goto L_006e368b;
L_006e3612:; BB(0x006e3612);
    /* 006e3612: movzx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)R16((u32)(r_ecx+0xc6u));
    /* 006e3619: mov edx, dword ptr [edx*8 + 0x96d1c8] */ r_edx = R32((u32)(r_edx*8+0x96d1c8u));
    /* 006e3620: mov ecx, dword ptr [esi + edx + 4] */ r_ecx = R32((u32)(r_esi+r_edx+0x4u));
    /* 006e3624: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3627: je 0x6e367e */ if (fZ) goto L_006e367e;
L_006e3629:; BB(0x006e3629);
    /* 006e3629: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e362b: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x6e3630u); f_0050c094();
    /* 006e3630: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3631: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3634: mov edx, dword ptr [ecx + 0x130] */ r_edx = R32((u32)(r_ecx+0x130u));
    /* 006e363a: mov ecx, dword ptr [0xa96680] */ r_ecx = R32((u32)(0xa96680u));
    /* 006e3640: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 006e3643: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 006e3646: movzx eax, word ptr [edx + 0x2c] */ r_eax = (u32)R16((u32)(r_edx+0x2cu));
    /* 006e364a: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
    /* 006e3651: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 006e3654: or eax, 0xffff0600 */ {  u32 a = r_eax; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e3659: mov word ptr [edx + 0x2c], ax */ W16((u32)(r_edx+0x2cu), (u16)r_eax);
    /* 006e365d: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 006e3664: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3667: mov eax, dword ptr [edx + 0x130] */ r_eax = R32((u32)(r_edx+0x130u));
    /* 006e366d: movzx edx, word ptr [edx + 0xc6] */ r_edx = (u32)R16((u32)(r_edx+0xc6u));
    /* 006e3674: mov edx, dword ptr [edx*8 + 0x96d1c8] */ r_edx = R32((u32)(r_edx*8+0x96d1c8u));
    /* 006e367b: mov eax, dword ptr [ebx + eax] */ r_eax = R32((u32)(r_ebx+r_eax));
L_006e367e:; BB(0x006e367e);
    /* 006e367e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e3681: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 006e3685: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 006e3688: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
L_006e368b:; BB(0x006e368b);
    /* 006e368b: movsx edx, word ptr [ecx + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e3692: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006e3695: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3697: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3699: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e369b: cmp edi, dword ptr [edx + 0x96d1cc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx+0x96d1ccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e36a1: jb 0x6e354b */ if (fC) goto L_006e354b;
L_006e36a7:; BB(0x006e36a7);
    /* 006e36a7: call 0x6e331c */ r_esp -= 4; W32(r_esp, 0x6e36acu); f_006e331c();
    /* 006e36ac: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e36af: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e36b2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e36b5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e36b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e36bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e36c2: mov esp, ebp */ r_esp = r_ebp;
    /* 006e36c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e36c5: ret 0x10 */ FN_RET(0x006e3480); r_esp += 20; return;
}

void f_006e36c8(void) /* sub_6E36C8 */
{
    FN_ENTER(0x006e36c8);
    /* 006e36c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e36c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e36ca: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e36cc: movzx eax, word ptr [ebx + 0xc8] */ r_eax = (u32)R16((u32)(r_ebx+0xc8u));
    /* 006e36d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e36d4: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e36d9u); f_007b4d18();
    /* 006e36d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e36da: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006e36dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e36df: je 0x6e3742 */ if (fZ) goto L_006e3742;
L_006e36e1:; BB(0x006e36e1);
    /* 006e36e1: movzx eax, word ptr [ebx + 0xc6] */ r_eax = (u32)R16((u32)(r_ebx+0xc6u));
    /* 006e36e8: mov eax, dword ptr [eax*8 + 0x96d1cc] */ r_eax = R32((u32)(r_eax*8+0x96d1ccu));
    /* 006e36ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e36f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e36f3: jbe 0x6e3728 */ if ((fC||fZ)) goto L_006e3728;
L_006e36f5:; BB(0x006e36f5);
    /* 006e36f5: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e36f8: mov esi, edx */ r_esi = r_edx;
L_006e36fa:; BB(0x006e36fa);
    /* 006e36fa: mov ecx, dword ptr [ebx + 0x130] */ r_ecx = R32((u32)(r_ebx+0x130u));
    /* 006e3700: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 006e3703: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3705: je 0x6e371e */ if (fZ) goto L_006e371e;
L_006e3707:; BB(0x006e3707);
    /* 006e3707: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 006e370a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e370b: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x6e3710u); f_00508db8();
    /* 006e3710: movzx eax, word ptr [ebx + 0xc6] */ r_eax = (u32)R16((u32)(r_ebx+0xc6u));
    /* 006e3717: mov eax, dword ptr [eax*8 + 0x96d1cc] */ r_eax = R32((u32)(r_eax*8+0x96d1ccu));
L_006e371e:; BB(0x006e371e);
    /* 006e371e: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e3721: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e3723: jb 0x6e36fa */ if (fC) goto L_006e36fa;
L_006e3725:; BB(0x006e3725);
    /* 006e3725: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006e3728:; BB(0x006e3728);
    /* 006e3728: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e372a: call 0x6f0474 */ r_esp -= 4; W32(r_esp, 0x6e372fu); f_006f0474();
    /* 006e372f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e3731: call 0x6f053c */ r_esp -= 4; W32(r_esp, 0x6e3736u); f_006f053c();
    /* 006e3736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3738: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e373a: call 0x6f0798 */ r_esp -= 4; W32(r_esp, 0x6e373fu); f_006f0798();
    /* 006e373f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3740: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e3741: ret  */ FN_RET(0x006e36c8); r_esp += 4; return;
L_006e3742:; BB(0x006e3742);
    /* 006e3742: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e3746: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e374b: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e374f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3750: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e3751: ret  */ FN_RET(0x006e36c8); r_esp += 4; return;
}

void f_006e3754(void) /* sub_6E3754 */
{
    FN_ENTER(0x006e3754);
    /* 006e3754: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3755: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3756: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e3759: mov edi, ecx */ r_edi = r_ecx;
    /* 006e375b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006e375f: mov edx, dword ptr [edi + 0xcc] */ r_edx = R32((u32)(r_edi+0xccu));
    /* 006e3765: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006e3767: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006e376b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e376d: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 006e3774: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3776: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3778: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e377e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e377f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3781: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3784: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x6e3787u); call_ind(t); }
    /* 006e3787: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e3789: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006e378c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e378e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e378f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3790: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3791: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3796: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e379bu); f_00814298();
    /* 006e379b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e379f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e37a4: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e37a8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e37ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e37ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e37ad: ret 4 */ FN_RET(0x006e3754); r_esp += 8; return;
}

void f_006e37b0(void) /* sub_6E37B0 */
{
    FN_ENTER(0x006e37b0);
    /* 006e37b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e37b1: mov esi, ecx */ r_esi = r_ecx;
    /* 006e37b3: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e37b6: push 0x1dc */ { u32 v = 0x1dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006e37bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e37bc: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e37c1u); f_0050b510();
    /* 006e37c1: push 0x1dd */ { u32 v = 0x1ddu; r_esp -= 4; W32(r_esp, v); }
    /* 006e37c6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e37c7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e37ccu); f_0050b510();
    /* 006e37cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e37cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e37d0: ret  */ FN_RET(0x006e37b0); r_esp += 4; return;
}

void f_006e37d4(void) /* sub_6E37D4 */
{
    FN_ENTER(0x006e37d4);
    /* 006e37d4: mov dword ptr [0xa966c8], 0x3f800000 */ W32((u32)(0xa966c8u), 0x3f800000u);
    /* 006e37de: mov dword ptr [0xa966cc], 0x41000000 */ W32((u32)(0xa966ccu), 0x41000000u);
    /* 006e37e8: mov dword ptr [0xa966d0], 0x3fc00000 */ W32((u32)(0xa966d0u), 0x3fc00000u);
    /* 006e37f2: ret  */ FN_RET(0x006e37d4); r_esp += 4; return;
}

void f_006e37f4(void) /* sub_6E37F4 */
{
    FN_ENTER(0x006e37f4);
    /* 006e37f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e37f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e37f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e37f9: push 0x8eeb04 */ { u32 v = 0x8eeb04u; r_esp -= 4; W32(r_esp, v); }
    /* 006e37fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e3804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3805: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e380c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e380f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e3812: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e3815: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e3818: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e381b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e381e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e3821: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e3828: mov eax, ecx */ r_eax = r_ecx;
    /* 006e382a: movzx edx, word ptr [eax + 0xc6] */ r_edx = (u32)R16((u32)(r_eax+0xc6u));
    /* 006e3831: mov dword ptr [eax], 0xb3d328 */ W32((u32)(r_eax), 0xb3d328u);
    /* 006e3837: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3839: mov eax, dword ptr [edx*8 + 0x96d2f4] */ r_eax = R32((u32)(r_edx*8+0x96d2f4u));
    /* 006e3840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e3842: jbe 0x6e38d5 */ if ((fC||fZ)) goto L_006e38d5;
L_006e3848:; BB(0x006e3848);
    /* 006e3848: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e384b: mov esi, dword ptr [edx + 0x130] */ r_esi = R32((u32)(r_edx+0x130u));
L_006e3851:; BB(0x006e3851);
    /* 006e3851: mov ebx, dword ptr [esi + ecx*4] */ r_ebx = R32((u32)(r_esi+r_ecx*4));
    /* 006e3854: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 006e3857: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3859: je 0x6e388c */ if (fZ) goto L_006e388c;
L_006e385b:; BB(0x006e385b);
    /* 006e385b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e385e: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e3862: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e3867: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e386b: mov ebx, dword ptr [esi + 0x130] */ r_ebx = R32((u32)(r_esi+0x130u));
    /* 006e3871: mov dword ptr [ebx + edx*2], 0 */ W32((u32)(r_ebx+r_edx*2), 0x0u);
    /* 006e3878: movzx edx, word ptr [esi + 0xc6] */ r_edx = (u32)R16((u32)(r_esi+0xc6u));
    /* 006e387f: mov esi, dword ptr [esi + 0x130] */ r_esi = R32((u32)(r_esi+0x130u));
    /* 006e3885: mov eax, dword ptr [edx*8 + 0x96d2f4] */ r_eax = R32((u32)(r_edx*8+0x96d2f4u));
L_006e388c:; BB(0x006e388c);
    /* 006e388c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e388f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e3891: jb 0x6e3851 */ if (fC) goto L_006e3851;
L_006e3893:; BB(0x006e3893);
    /* 006e3893: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3894: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6e3899u); f_00857e98();
    /* 006e3899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e389a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e38a1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e38a4: call 0x6efddc */ r_esp -= 4; W32(r_esp, 0x6e38a9u); f_006efddc();
    /* 006e38a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e38ac: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e38ae: jne 0x6e38c9 */ if (!fZ) goto L_006e38c9;
L_006e38b0:; BB(0x006e38b0);
    /* 006e38b0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e38b3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e38b6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e38b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e38bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e38c3: mov esp, ebp */ r_esp = r_ebp;
    /* 006e38c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e38c6: ret 4 */ FN_RET(0x006e37f4); r_esp += 8; return;
L_006e38c9:; BB(0x006e38c9);
    /* 006e38c9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e38cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e38cd: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e38d2u); f_005c2f74();
    /* 006e38d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e38d3: jmp 0x6e38b0 */ goto L_006e38b0;
L_006e38d5:; BB(0x006e38d5);
    /* 006e38d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e38d8: mov esi, dword ptr [eax + 0x130] */ r_esi = R32((u32)(r_eax+0x130u));
    /* 006e38de: jmp 0x6e3893 */ goto L_006e3893;
}

void f_006e38e0(void) /* sub_6E38E0 */
{
    FN_ENTER(0x006e38e0);
    /* 006e38e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e38e1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e38e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e38e5: push 0x8eeb3a */ { u32 v = 0x8eeb3au; r_esp -= 4; W32(r_esp, v); }
    /* 006e38ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e38f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e38f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e38f8: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e38fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e38fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e3901: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e3904: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e3907: push 0x178 */ { u32 v = 0x178u; r_esp -= 4; W32(r_esp, v); }
    /* 006e390c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e3913: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e3918u); f_005caba4();
    /* 006e3918: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e391b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e391e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006e3921: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3923: je 0x6e3a84 */ if (fZ) goto L_006e3a84;
L_006e3929:; BB(0x006e3929);
    /* 006e3929: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006e3930: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e3937: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e393a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e393d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3940: mov ecx, eax */ r_ecx = r_eax;
    /* 006e3942: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3945: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 006e3948: call 0x6efe50 */ r_esp -= 4; W32(r_esp, 0x6e394du); f_006efe50();
    /* 006e394d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e3954: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e3957: mov dword ptr [ecx], 0xb3d328 */ W32((u32)(r_ecx), 0xb3d328u);
    /* 006e395d: mov eax, dword ptr [0x9cf8a0] */ r_eax = R32((u32)(0x9cf8a0u));
    /* 006e3962: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006e3965: call 0x6e3a94 */ r_esp -= 4; W32(r_esp, 0x6e396au); f_006e3a94();
    /* 006e396a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e396d: mov dword ptr [edx + 0x174], 0 */ W32((u32)(r_edx+0x174u), 0x0u);
    /* 006e3977: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006e397c: mov word ptr [edx + 0x134], ax */ W16((u32)(r_edx+0x134u), (u16)r_eax);
    /* 006e3983: mov word ptr [edx + 0x136], ax */ W16((u32)(r_edx+0x136u), (u16)r_eax);
    /* 006e398a: mov word ptr [edx + 0x138], ax */ W16((u32)(r_edx+0x138u), (u16)r_eax);
    /* 006e3991: mov word ptr [edx + 0x13a], ax */ W16((u32)(r_edx+0x13au), (u16)r_eax);
    /* 006e3998: mov word ptr [edx + 0x13c], ax */ W16((u32)(r_edx+0x13cu), (u16)r_eax);
    /* 006e399f: mov word ptr [edx + 0x13e], ax */ W16((u32)(r_edx+0x13eu), (u16)r_eax);
    /* 006e39a6: mov word ptr [edx + 0x140], ax */ W16((u32)(r_edx+0x140u), (u16)r_eax);
    /* 006e39ad: mov word ptr [edx + 0x142], ax */ W16((u32)(r_edx+0x142u), (u16)r_eax);
    /* 006e39b4: mov word ptr [edx + 0x144], ax */ W16((u32)(r_edx+0x144u), (u16)r_eax);
    /* 006e39bb: mov word ptr [edx + 0x146], ax */ W16((u32)(r_edx+0x146u), (u16)r_eax);
    /* 006e39c2: mov word ptr [edx + 0x148], ax */ W16((u32)(r_edx+0x148u), (u16)r_eax);
    /* 006e39c9: mov word ptr [edx + 0x14a], ax */ W16((u32)(r_edx+0x14au), (u16)r_eax);
    /* 006e39d0: mov word ptr [edx + 0x14c], ax */ W16((u32)(r_edx+0x14cu), (u16)r_eax);
    /* 006e39d7: mov word ptr [edx + 0x14e], ax */ W16((u32)(r_edx+0x14eu), (u16)r_eax);
    /* 006e39de: mov word ptr [edx + 0x150], ax */ W16((u32)(r_edx+0x150u), (u16)r_eax);
    /* 006e39e5: mov word ptr [edx + 0x152], ax */ W16((u32)(r_edx+0x152u), (u16)r_eax);
    /* 006e39ec: mov word ptr [edx + 0x154], ax */ W16((u32)(r_edx+0x154u), (u16)r_eax);
    /* 006e39f3: mov word ptr [edx + 0x156], ax */ W16((u32)(r_edx+0x156u), (u16)r_eax);
    /* 006e39fa: mov word ptr [edx + 0x158], ax */ W16((u32)(r_edx+0x158u), (u16)r_eax);
    /* 006e3a01: mov word ptr [edx + 0x15a], ax */ W16((u32)(r_edx+0x15au), (u16)r_eax);
    /* 006e3a08: mov word ptr [edx + 0x15c], ax */ W16((u32)(r_edx+0x15cu), (u16)r_eax);
    /* 006e3a0f: mov word ptr [edx + 0x15e], ax */ W16((u32)(r_edx+0x15eu), (u16)r_eax);
    /* 006e3a16: mov word ptr [edx + 0x160], ax */ W16((u32)(r_edx+0x160u), (u16)r_eax);
    /* 006e3a1d: mov word ptr [edx + 0x162], ax */ W16((u32)(r_edx+0x162u), (u16)r_eax);
    /* 006e3a24: mov word ptr [edx + 0x164], ax */ W16((u32)(r_edx+0x164u), (u16)r_eax);
    /* 006e3a2b: mov word ptr [edx + 0x166], ax */ W16((u32)(r_edx+0x166u), (u16)r_eax);
    /* 006e3a32: mov word ptr [edx + 0x168], ax */ W16((u32)(r_edx+0x168u), (u16)r_eax);
    /* 006e3a39: mov word ptr [edx + 0x16a], ax */ W16((u32)(r_edx+0x16au), (u16)r_eax);
    /* 006e3a40: mov word ptr [edx + 0x16c], ax */ W16((u32)(r_edx+0x16cu), (u16)r_eax);
    /* 006e3a47: mov word ptr [edx + 0x16e], ax */ W16((u32)(r_edx+0x16eu), (u16)r_eax);
    /* 006e3a4e: mov word ptr [edx + 0x170], ax */ W16((u32)(r_edx+0x170u), (u16)r_eax);
    /* 006e3a55: mov word ptr [edx + 0x172], ax */ W16((u32)(r_edx+0x172u), (u16)r_eax);
    /* 006e3a5c: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 006e3a5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3a61: je 0x6e3a6e */ if (fZ) goto L_006e3a6e;
L_006e3a63:; BB(0x006e3a63);
    /* 006e3a63: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e3a67: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006e3a6e:; BB(0x006e3a6e);
    /* 006e3a6e: mov ecx, edx */ r_ecx = r_edx;
    /* 006e3a70: call 0x6e3ba0 */ r_esp -= 4; W32(r_esp, 0x6e3a75u); f_006e3ba0();
    /* 006e3a75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e3a78: call 0x6e3f68 */ r_esp -= 4; W32(r_esp, 0x6e3a7du); f_006e3f68();
    /* 006e3a7d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006e3a84:; BB(0x006e3a84);
    /* 006e3a84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e3a87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e3a8e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e3a90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e3a91: ret  */ FN_RET(0x006e38e0); r_esp += 4; return;
}

void f_006e3a52(void)
{
    FN_ENTER(0x006e3a52);
    /* 006e3a52: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006e3a54: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e3a57: xor byte ptr [edx + 1], 0 */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 006e3a5b: add byte ptr [ebx - 0x3f7ae3be], cl */ { u32 ad = (u32)(r_ebx+0xc0851c42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006e3a61: je 0x6e3a6e */ if (fZ) goto L_006e3a6e;
L_006e3a63:; BB(0x006e3a63);
    /* 006e3a63: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e3a67: mov word ptr [edx + 0xc8], ax */ W16((u32)(r_edx+0xc8u), (u16)r_eax);
L_006e3a6e:; BB(0x006e3a6e);
    /* 006e3a6e: mov ecx, edx */ r_ecx = r_edx;
    /* 006e3a70: call 0x6e3ba0 */ r_esp -= 4; W32(r_esp, 0x6e3a75u); f_006e3ba0();
    /* 006e3a75: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e3a78: call 0x6e3f68 */ r_esp -= 4; W32(r_esp, 0x6e3a7du); f_006e3f68();
    /* 006e3a7d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e3a84: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e3a87: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e3a8e: mov esp, ebp */ r_esp = r_ebp;
    /* 006e3a90: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e3a91: ret  */ FN_RET(0x006e3a52); r_esp += 4; return;
}

void f_006e3a94(void) /* sub_6E3A94 */
{
    FN_ENTER(0x006e3a94);
    /* 006e3a94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3a95: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e3a98: mov edi, ecx */ r_edi = r_ecx;
    /* 006e3a9a: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e3aa1: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3aa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3aa7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3aa9: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x6e3aaeu); f_006ded14();
    /* 006e3aae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3ab1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006e3ab3: mov dword ptr [edi + 0xcc], edx */ W32((u32)(r_edi+0xccu), r_edx);
    /* 006e3ab9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006e3abc: mov dword ptr [edi + 0xd0], edx */ W32((u32)(r_edi+0xd0u), r_edx);
    /* 006e3ac2: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006e3ac5: mov dword ptr [edi + 0xd4], edx */ W32((u32)(r_edi+0xd4u), r_edx);
    /* 006e3acb: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006e3ace: mov dword ptr [edi + 0xd8], edx */ W32((u32)(r_edi+0xd8u), r_edx);
    /* 006e3ad4: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006e3ad7: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 006e3add: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006e3ae0: mov dword ptr [edi + 0xe0], edx */ W32((u32)(r_edi+0xe0u), r_edx);
    /* 006e3ae6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006e3ae9: mov dword ptr [edi + 0xe4], edx */ W32((u32)(r_edi+0xe4u), r_edx);
    /* 006e3aef: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006e3af2: mov dword ptr [edi + 0xe8], edx */ W32((u32)(r_edi+0xe8u), r_edx);
    /* 006e3af8: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006e3afb: mov dword ptr [edi + 0xec], edx */ W32((u32)(r_edi+0xecu), r_edx);
    /* 006e3b01: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006e3b04: mov dword ptr [edi + 0xf0], edx */ W32((u32)(r_edi+0xf0u), r_edx);
    /* 006e3b0a: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006e3b0d: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 006e3b13: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e3b1a: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e3b1d: jl 0x6e3b57 */ if ((fS!=fO)) goto L_006e3b57;
L_006e3b1f:; BB(0x006e3b1f);
    /* 006e3b1f: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e3b24u); f_00687c48();
    /* 006e3b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3b26: jne 0x6e3b50 */ if (!fZ) goto L_006e3b50;
L_006e3b28:; BB(0x006e3b28);
    /* 006e3b28: movsx ecx, word ptr [0x9cf730] */ r_ecx = (u32)(i32)(i16)R16((u32)(0x9cf730u));
    /* 006e3b2f: movsx edx, word ptr [0x9cf732] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9cf732u));
    /* 006e3b36: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
    /* 006e3b3d: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e3b40: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3b42: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006e3b45: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006e3b48: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e3b4e: jmp 0x6e3b90 */ goto L_006e3b90;
L_006e3b50:; BB(0x006e3b50);
    /* 006e3b50: movsx eax, word ptr [edi + 0xc4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xc4u));
L_006e3b57:; BB(0x006e3b57);
    /* 006e3b57: movsx edx, word ptr [edi + 0xf0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xf0u));
    /* 006e3b5e: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e3b61: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e3b65: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006e3b69: fadd dword ptr [edi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xccu));
    /* 006e3b6f: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
    /* 006e3b75: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6e3b7au); f_00687c48();
    /* 006e3b7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3b7c: je 0x6e3b90 */ if (fZ) goto L_006e3b90;
L_006e3b7e:; BB(0x006e3b7e);
    /* 006e3b7e: fld dword ptr [edi + 0xcc] */ FPUSH(R_F32((u32)(r_edi+0xccu)));
    /* 006e3b84: fmul dword ptr [0x9cf7a0] */ ST(0) = ST(0) * R_F32((u32)(0x9cf7a0u));
    /* 006e3b8a: fstp dword ptr [edi + 0xcc] */ W_F32((u32)(r_edi+0xccu), ST(0)); FPOP();
L_006e3b90:; BB(0x006e3b90);
    /* 006e3b90: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 006e3b96: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 006e3b99: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3b9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e3b9d: ret  */ FN_RET(0x006e3a94); r_esp += 4; return;
}

void f_006e3ba0(void) /* sub_6E3BA0 */
{
    FN_ENTER(0x006e3ba0);
    /* 006e3ba0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ba1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ba2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ba3: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e3ba6: mov edi, ecx */ r_edi = r_ecx;
    /* 006e3ba8: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 006e3bab: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 006e3bae: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006e3bb1: movzx eax, word ptr [edi + 0xc6] */ r_eax = (u32)R16((u32)(r_edi+0xc6u));
    /* 006e3bb8: mov eax, dword ptr [eax*8 + 0x96d2f4] */ r_eax = R32((u32)(r_eax*8+0x96d2f4u));
    /* 006e3bbf: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006e3bc3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3bc5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3bc7: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 006e3bcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3bd0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e3bd5u); f_008581c5();
    /* 006e3bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e3bd6: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006e3bdd: mov dword ptr [edi + 0x130], eax */ W32((u32)(r_edi+0x130u), r_eax);
    /* 006e3be3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e3be5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e3be8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3bea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3bec: mov ebx, dword ptr [eax + 0x96d2f4] */ r_ebx = R32((u32)(r_eax+0x96d2f4u));
    /* 006e3bf2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006e3bf4: jbe 0x6e3da7 */ if ((fC||fZ)) goto L_006e3da7;
L_006e3bfa:; BB(0x006e3bfa);
    /* 006e3bfa: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 006e3bfe: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 006e3c01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e3c03: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 006e3c06: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006e3c08:; BB(0x006e3c08);
    /* 006e3c08: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 006e3c0b: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 006e3c0e: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 006e3c11: mov ebp, dword ptr [edi + 0x28] */ r_ebp = R32((u32)(r_edi+0x28u));
    /* 006e3c14: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006e3c18: mov edx, dword ptr [eax + 0x96d2f0] */ r_edx = R32((u32)(r_eax+0x96d2f0u));
    /* 006e3c1e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006e3c22: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 006e3c26: mov eax, dword ptr [ebx + edx + 4] */ r_eax = R32((u32)(r_ebx+r_edx+0x4u));
    /* 006e3c2a: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3c2f: je 0x6e3c41 */ if (fZ) goto L_006e3c41;
L_006e3c31:; BB(0x006e3c31);
    /* 006e3c31: fld dword ptr [0x96d220] */ FPUSH(R_F32((u32)(0x96d220u)));
    /* 006e3c37: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006e3c39: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 006e3c3d: mov eax, dword ptr [ebx + edx + 4] */ r_eax = R32((u32)(r_ebx+r_edx+0x4u));
L_006e3c41:; BB(0x006e3c41);
    /* 006e3c41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e3c43: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3c45: je 0x6e3c62 */ if (fZ) goto L_006e3c62;
L_006e3c47:; BB(0x006e3c47);
    /* 006e3c47: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 006e3c4b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006e3c4e: push dword ptr [ebx + edx] */ { u32 v = R32((u32)(r_ebx+r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3c51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3c52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3c53: call 0x509b24 */ r_esp -= 4; W32(r_esp, 0x6e3c58u); f_00509b24();
    /* 006e3c58: mov ebp, eax */ r_ebp = r_eax;
    /* 006e3c5a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3c5d: jmp 0x6e3d07 */ goto L_006e3d07;
L_006e3c62:; BB(0x006e3c62);
    /* 006e3c62: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 006e3c6a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e3c6f: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 006e3c77: mov dword ptr [esp + 0x20], 0x40400000 */ W32((u32)(r_esp+0x20u), 0x40400000u);
    /* 006e3c7f: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e3c84u); f_0082d990();
    /* 006e3c84: mov edx, dword ptr [edi + 0x58] */ r_edx = R32((u32)(r_edi+0x58u));
    /* 006e3c87: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3c89: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e3c8eu); f_0082d8bc();
    /* 006e3c8e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006e3c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3c93: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006e3c97: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3c99: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6e3c9eu); f_00830aa0();
    /* 006e3c9e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006e3ca3: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6e3ca8u); f_0082eb80();
    /* 006e3ca8: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 006e3cac: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 006e3caf: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006e3cb3: fadd dword ptr [edi + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x24u));
    /* 006e3cb6: movzx eax, word ptr [edi + 0xc6] */ r_eax = (u32)R16((u32)(r_edi+0xc6u));
    /* 006e3cbd: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006e3cc1: fadd dword ptr [edi + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x28u));
    /* 006e3cc4: mov eax, dword ptr [eax*8 + 0x96d2f0] */ r_eax = R32((u32)(r_eax*8+0x96d2f0u));
    /* 006e3ccb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e3ccd: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006e3cd1: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 006e3cd5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e3cd7: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006e3cdb: mov edx, dword ptr [ebx + eax + 4] */ r_edx = R32((u32)(r_ebx+r_eax+0x4u));
    /* 006e3cdf: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3ce5: je 0x6e3cf3 */ if (fZ) goto L_006e3cf3;
L_006e3ce7:; BB(0x006e3ce7);
    /* 006e3ce7: fld dword ptr [0x96d220] */ FPUSH(R_F32((u32)(0x96d220u)));
    /* 006e3ced: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006e3cef: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
L_006e3cf3:; BB(0x006e3cf3);
    /* 006e3cf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e3cf5: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006e3cf9: push dword ptr [ebx + eax] */ { u32 v = R32((u32)(r_ebx+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 006e3cfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3cfd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x6e3d02u); f_00509590();
    /* 006e3d02: mov ebp, eax */ r_ebp = r_eax;
    /* 006e3d04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e3d07:; BB(0x006e3d07);
    /* 006e3d07: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3d09: je 0x6e3d7a */ if (fZ) goto L_006e3d7a;
L_006e3d0b:; BB(0x006e3d0b);
    /* 006e3d0b: movzx edx, word ptr [edi + 0xc6] */ r_edx = (u32)R16((u32)(r_edi+0xc6u));
    /* 006e3d12: mov edx, dword ptr [edx*8 + 0x96d2f0] */ r_edx = R32((u32)(r_edx*8+0x96d2f0u));
    /* 006e3d19: mov ecx, dword ptr [ebx + edx + 4] */ r_ecx = R32((u32)(r_ebx+r_edx+0x4u));
    /* 006e3d1d: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3d20: je 0x6e3d3e */ if (fZ) goto L_006e3d3e;
L_006e3d22:; BB(0x006e3d22);
    /* 006e3d22: mov edx, dword ptr [ebx + edx + 8] */ r_edx = R32((u32)(r_ebx+r_edx+0x8u));
    /* 006e3d26: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 006e3d29: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 006e3d2c: movzx ecx, word ptr [edi + 0xc6] */ r_ecx = (u32)R16((u32)(r_edi+0xc6u));
    /* 006e3d33: mov edx, dword ptr [ecx*8 + 0x96d2f0] */ r_edx = R32((u32)(r_ecx*8+0x96d2f0u));
    /* 006e3d3a: mov ecx, dword ptr [ebx + edx + 4] */ r_ecx = R32((u32)(r_ebx+r_edx+0x4u));
L_006e3d3e:; BB(0x006e3d3e);
    /* 006e3d3e: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006e3d41: je 0x6e3d7a */ if (fZ) goto L_006e3d7a;
L_006e3d43:; BB(0x006e3d43);
    /* 006e3d43: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 006e3d46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3d47: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3d4d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e3d52u); f_005b8610();
    /* 006e3d52: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e3d58: movzx ecx, word ptr [ebp + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 006e3d5c: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 006e3d63: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 006e3d66: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 006e3d6d: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 006e3d70: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3d76: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
L_006e3d7a:; BB(0x006e3d7a);
    /* 006e3d7a: mov edx, dword ptr [edi + 0x130] */ r_edx = R32((u32)(r_edi+0x130u));
    /* 006e3d80: mov dword ptr [edx + esi*4], ebp */ W32((u32)(r_edx+r_esi*4), r_ebp);
    /* 006e3d83: movsx edx, word ptr [edi + 0xc6] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xc6u));
    /* 006e3d8a: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e3d8d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e3d90: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e3d93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3d95: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e3d97: cmp esi, dword ptr [eax + 0x96d2f4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x96d2f4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006e3d9d: jb 0x6e3c08 */ if (fC) goto L_006e3c08;
L_006e3da3:; BB(0x006e3da3);
    /* 006e3da3: mov ebp, dword ptr [esp + 0x3c] */ r_ebp = R32((u32)(r_esp+0x3cu));
L_006e3da7:; BB(0x006e3da7);
    /* 006e3da7: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3daa: je 0x6e3db3 */ if (fZ) goto L_006e3db3;
L_006e3dac:; BB(0x006e3dac);
    /* 006e3dac: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3daf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e3db0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e3db1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e3db2: ret  */ FN_RET(0x006e3ba0); r_esp += 4; return;
L_006e3db3:; BB(0x006e3db3);
    /* 006e3db3: fld dword ptr [0x96d218] */ FPUSH(R_F32((u32)(0x96d218u)));
    /* 006e3db9: lea esi, [esp + 0x30] */ r_esi = (u32)(r_esp+0x30u);
    /* 006e3dbd: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 006e3dc0: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 006e3dc3: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 006e3dc6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006e3dca: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006e3dce: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 006e3dd2: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 006e3dd6: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 006e3dda: push 0x1e0 */ { u32 v = 0x1e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ddf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e3de0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e3de5u); f_0050b510();
    /* 006e3de5: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 006e3de9: push 0x1e1 */ { u32 v = 0x1e1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3def: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e3df4u); f_0050b510();
    /* 006e3df4: movzx eax, word ptr [edi + 0xc8] */ r_eax = (u32)R16((u32)(r_edi+0xc8u));
    /* 006e3dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3dfc: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e3e01u); f_007b4d18();
    /* 006e3e01: mov ebx, eax */ r_ebx = r_eax;
    /* 006e3e03: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3e06: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3e08: je 0x6e3dac */ if (fZ) goto L_006e3dac;
L_006e3e0a:; BB(0x006e3e0a);
    /* 006e3e0a: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e0f: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e3e12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e13: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e3e18u); f_0050b510();
    /* 006e3e18: mov edi, eax */ r_edi = r_eax;
    /* 006e3e1a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3e1d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3e1f: je 0x6e3e61 */ if (fZ) goto L_006e3e61;
L_006e3e21:; BB(0x006e3e21);
    /* 006e3e21: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3e27: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e29: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e3e2eu); f_005b8610();
    /* 006e3e2e: mov esi, eax */ r_esi = r_eax;
    /* 006e3e30: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3e36: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e38: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6e3e3du); f_005b8638();
    /* 006e3e3d: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e3e43: movzx ecx, word ptr [edi + 0x2c] */ r_ecx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006e3e47: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006e3e4e: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006e3e51: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 006e3e54: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006e3e57: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3e5d: mov word ptr [edi + 0x2c], cx */ W16((u32)(r_edi+0x2cu), (u16)r_ecx);
L_006e3e61:; BB(0x006e3e61);
    /* 006e3e61: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e63: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e65: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e6b: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6e3e70u); f_0050a984();
    /* 006e3e70: mov edi, eax */ r_edi = r_eax;
    /* 006e3e72: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3e75: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3e77: je 0x6e3eb9 */ if (fZ) goto L_006e3eb9;
L_006e3e79:; BB(0x006e3e79);
    /* 006e3e79: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3e7f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e81: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e3e86u); f_005b8610();
    /* 006e3e86: mov esi, eax */ r_esi = r_eax;
    /* 006e3e88: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3e8e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3e90: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6e3e95u); f_005b8638();
    /* 006e3e95: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e3e9b: movzx ecx, word ptr [edi + 0x2c] */ r_ecx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006e3e9f: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006e3ea6: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006e3ea9: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 006e3eac: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006e3eaf: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3eb5: mov word ptr [edi + 0x2c], cx */ W16((u32)(r_edi+0x2cu), (u16)r_ecx);
L_006e3eb9:; BB(0x006e3eb9);
    /* 006e3eb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ebb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ebd: push 0x18b */ { u32 v = 0x18bu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ec2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ec3: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6e3ec8u); f_0050a984();
    /* 006e3ec8: mov edi, eax */ r_edi = r_eax;
    /* 006e3eca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3ecd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3ecf: je 0x6e3f11 */ if (fZ) goto L_006e3f11;
L_006e3ed1:; BB(0x006e3ed1);
    /* 006e3ed1: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3ed7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ed9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e3edeu); f_005b8610();
    /* 006e3ede: mov esi, eax */ r_esi = r_eax;
    /* 006e3ee0: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3ee6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ee8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x6e3eedu); f_005b8638();
    /* 006e3eed: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e3ef3: movzx ecx, word ptr [edi + 0x2c] */ r_ecx = (u32)R16((u32)(r_edi+0x2cu));
    /* 006e3ef7: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 006e3efe: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 006e3f01: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 006e3f04: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 006e3f07: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3f0d: mov word ptr [edi + 0x2c], cx */ W16((u32)(r_edi+0x2cu), (u16)r_ecx);
L_006e3f11:; BB(0x006e3f11);
    /* 006e3f11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f13: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f15: push 0x18f */ { u32 v = 0x18fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f1b: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6e3f20u); f_0050a984();
    /* 006e3f20: mov ebx, eax */ r_ebx = r_eax;
    /* 006e3f22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3f25: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3f27: je 0x6e3dac */ if (fZ) goto L_006e3dac;
L_006e3f2d:; BB(0x006e3f2d);
    /* 006e3f2d: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 006e3f33: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f35: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x6e3f3au); f_005b8610();
    /* 006e3f3a: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 006e3f40: movzx ecx, word ptr [ebx + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebx+0x2cu));
    /* 006e3f44: mov dword ptr [ebx + 0x58], 0 */ W32((u32)(r_ebx+0x58u), 0x0u);
    /* 006e3f4b: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 006e3f4e: mov dword ptr [ebx + 0x60], 0x3f800000 */ W32((u32)(r_ebx+0x60u), 0x3f800000u);
    /* 006e3f55: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 006e3f58: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3f5e: mov word ptr [ebx + 0x2c], cx */ W16((u32)(r_ebx+0x2cu), (u16)r_ecx);
    /* 006e3f62: jmp 0x6e3dac */ goto L_006e3dac;
}

void f_006e3f68(void) /* sub_6E3F68 */
{
    FN_ENTER(0x006e3f68);
    /* 006e3f68: movsx eax, word ptr [ecx + 0xc6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xc6u));
    /* 006e3f6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3f71: je 0x6e402c */ if (fZ) goto L_006e402c;
L_006e3f77:; BB(0x006e3f77);
    /* 006e3f77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3f7a: je 0x6e4016 */ if (fZ) goto L_006e4016;
L_006e3f80:; BB(0x006e3f80);
    /* 006e3f80: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e3f83: jl 0x6e4015 */ if ((fS!=fO)) goto L_006e4015;
L_006e3f89:; BB(0x006e3f89);
    /* 006e3f89: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e3f8c: jle 0x6e3fec */ if ((fZ||fS!=fO)) goto L_006e3fec;
L_006e3f8e:; BB(0x006e3f8e);
    /* 006e3f8e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e3f91: jne 0x6e3fbd */ if (!fZ) goto L_006e3fbd;
L_006e3f93:; BB(0x006e3f93);
    /* 006e3f93: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3f96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3f98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f9a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3f9b: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fa0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3fa5u); f_00814298();
    /* 006e3fa5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3fa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3faa: jl 0x6e4015 */ if ((fS!=fO)) goto L_006e4015;
L_006e3fac:; BB(0x006e3fac);
    /* 006e3fac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fae: push 0xfffffdb0 */ { u32 v = 0xfffffdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fb4: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e3fb9u); f_00814664();
    /* 006e3fb9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3fbc: ret  */ FN_RET(0x006e3f68); r_esp += 4; return;
L_006e3fbd:; BB(0x006e3fbd);
    /* 006e3fbd: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e3fc0: jne 0x6e4015 */ if (!fZ) goto L_006e4015;
L_006e3fc2:; BB(0x006e3fc2);
    /* 006e3fc2: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3fc5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3fc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fc9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fca: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fcf: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3fd4u); f_00814298();
    /* 006e3fd4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e3fd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e3fd9: jl 0x6e4015 */ if ((fS!=fO)) goto L_006e4015;
L_006e3fdb:; BB(0x006e3fdb);
    /* 006e3fdb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fdd: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fe2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3fe3: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e3fe8u); f_00814664();
    /* 006e3fe8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e3feb: ret  */ FN_RET(0x006e3f68); r_esp += 4; return;
L_006e3fec:; BB(0x006e3fec);
    /* 006e3fec: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e3fef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e3ff1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ff2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ff3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ff4: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e3ff9: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e3ffeu); f_00814298();
    /* 006e3ffe: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4003: jl 0x6e4015 */ if ((fS!=fO)) goto L_006e4015;
L_006e4005:; BB(0x006e4005);
    /* 006e4005: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4007: push 0xfffffe80 */ { u32 v = 0xfffffe80u; r_esp -= 4; W32(r_esp, v); }
    /* 006e400c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e400d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4012u); f_00814664();
    /* 006e4012: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006e4015:; BB(0x006e4015);
    /* 006e4015: ret  */ FN_RET(0x006e3f68); r_esp += 4; return;
L_006e4016:; BB(0x006e4016);
    /* 006e4016: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e4019: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e401b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e401c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e401d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e401e: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e4023: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e4028u); f_00814298();
    /* 006e4028: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e402b: ret  */ FN_RET(0x006e3f68); r_esp += 4; return;
L_006e402c:; BB(0x006e402c);
    /* 006e402c: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e402f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e4031: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4032: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e4033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e4034: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e4039: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e403eu); f_00814298();
    /* 006e403e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e4041: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e4043: jl 0x6e4015 */ if ((fS!=fO)) goto L_006e4015;
L_006e4045:; BB(0x006e4045);
    /* 006e4045: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e4047: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e404c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e404d: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6e4052u); f_00814664();
    /* 006e4052: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e4055: ret  */ FN_RET(0x006e3f68); r_esp += 4; return;
}

