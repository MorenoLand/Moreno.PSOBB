#include "protos.h"

void f_005ca3d0(void) /* sub_5CA3D0 */
{
    FN_ENTER(0x005ca3d0);
    /* 005ca3d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ca3d4: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 005ca3d9: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 005ca3df: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3e1: je 0x5ca3ee */ if (fZ) goto L_005ca3ee;
L_005ca3e3:; BB(0x005ca3e3);
    /* 005ca3e3: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca3e6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3e9: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca3eb:; BB(0x005ca3eb);
    /* 005ca3eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca3ed: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca3ee:; BB(0x005ca3ee);
    /* 005ca3ee: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3f0: je 0x5ca3fd */ if (fZ) goto L_005ca3fd;
L_005ca3f2:; BB(0x005ca3f2);
    /* 005ca3f2: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca3f5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3f8: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca3fa:; BB(0x005ca3fa);
    /* 005ca3fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca3fc: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca3fd:; BB(0x005ca3fd);
    /* 005ca3fd: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca400: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca403: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca405:; BB(0x005ca405);
    /* 005ca405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca407: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca408:; BB(0x005ca408);
    /* 005ca408: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca40a: je 0x5ca414 */ if (fZ) goto L_005ca414;
L_005ca40c:; BB(0x005ca40c);
    /* 005ca40c: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca40f: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca411:; BB(0x005ca411);
    /* 005ca411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca413: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca414:; BB(0x005ca414);
    /* 005ca414: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca416: je 0x5ca420 */ if (fZ) goto L_005ca420;
L_005ca418:; BB(0x005ca418);
    /* 005ca418: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca41b: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca41d:; BB(0x005ca41d);
    /* 005ca41d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca41f: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca420:; BB(0x005ca420);
    /* 005ca420: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca422: je 0x5ca42c */ if (fZ) goto L_005ca42c;
L_005ca424:; BB(0x005ca424);
    /* 005ca424: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca427: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca429:; BB(0x005ca429);
    /* 005ca429: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca42b: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca42c:; BB(0x005ca42c);
    /* 005ca42c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca42e: je 0x5ca438 */ if (fZ) goto L_005ca438;
L_005ca430:; BB(0x005ca430);
    /* 005ca430: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca433: jne 0x5ca444 */ if (!fZ) goto L_005ca444;
L_005ca435:; BB(0x005ca435);
    /* 005ca435: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca437: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
L_005ca438:; BB(0x005ca438);
    /* 005ca438: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca43a: je 0x5ca444 */ if (fZ) goto L_005ca444;
L_005ca43c:; BB(0x005ca43c);
    /* 005ca43c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca442: je 0x5ca429 */ if (fZ) goto L_005ca429;
L_005ca444:; BB(0x005ca444);
    /* 005ca444: mov eax, 1 */ r_eax = 0x1u;
    /* 005ca449: ret  */ FN_RET(0x005ca3d0); r_esp += 4; return;
}

void f_005ca3d9(void) /* sub_5CA3D9 */
{
    FN_ENTER(0x005ca3d9);
    /* 005ca3d9: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 005ca3df: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3e1: je 0x5ca3ee */ if (fZ) goto L_005ca3ee;
L_005ca3e3:; BB(0x005ca3e3);
    /* 005ca3e3: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca3e6: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3e9: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca3eb:; BB(0x005ca3eb);
    /* 005ca3eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca3ed: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca3ee:; BB(0x005ca3ee);
    /* 005ca3ee: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3f0: je 0x5ca3fd */ if (fZ) goto L_005ca3fd;
L_005ca3f2:; BB(0x005ca3f2);
    /* 005ca3f2: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca3f5: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca3f8: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca3fa:; BB(0x005ca3fa);
    /* 005ca3fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca3fc: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca3fd:; BB(0x005ca3fd);
    /* 005ca3fd: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 005ca400: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca403: jne 0x5ca408 */ if (!fZ) goto L_005ca408;
L_005ca405:; BB(0x005ca405);
    /* 005ca405: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca407: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca408:; BB(0x005ca408);
    /* 005ca408: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca40a: je 0x5ca414 */ if (fZ) goto L_005ca414;
L_005ca40c:; BB(0x005ca40c);
    /* 005ca40c: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca40f: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca411:; BB(0x005ca411);
    /* 005ca411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca413: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca414:; BB(0x005ca414);
    /* 005ca414: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca416: je 0x5ca420 */ if (fZ) goto L_005ca420;
L_005ca418:; BB(0x005ca418);
    /* 005ca418: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca41b: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca41d:; BB(0x005ca41d);
    /* 005ca41d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca41f: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca420:; BB(0x005ca420);
    /* 005ca420: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca422: je 0x5ca42c */ if (fZ) goto L_005ca42c;
L_005ca424:; BB(0x005ca424);
    /* 005ca424: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca427: jne 0x5ca42c */ if (!fZ) goto L_005ca42c;
L_005ca429:; BB(0x005ca429);
    /* 005ca429: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca42b: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca42c:; BB(0x005ca42c);
    /* 005ca42c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca42e: je 0x5ca438 */ if (fZ) goto L_005ca438;
L_005ca430:; BB(0x005ca430);
    /* 005ca430: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca433: jne 0x5ca444 */ if (!fZ) goto L_005ca444;
L_005ca435:; BB(0x005ca435);
    /* 005ca435: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca437: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
L_005ca438:; BB(0x005ca438);
    /* 005ca438: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca43a: je 0x5ca444 */ if (fZ) goto L_005ca444;
L_005ca43c:; BB(0x005ca43c);
    /* 005ca43c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca442: je 0x5ca429 */ if (fZ) goto L_005ca429;
L_005ca444:; BB(0x005ca444);
    /* 005ca444: mov eax, 1 */ r_eax = 0x1u;
    /* 005ca449: ret  */ FN_RET(0x005ca3d9); r_esp += 4; return;
}

void f_005ca44c(void) /* sub_5CA44C */
{
    FN_ENTER(0x005ca44c);
    /* 005ca44c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca44d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca44e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca44f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca451: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005ca455: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca457: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca459: lea ecx, [ecx + 0xdf8] */ r_ecx = (u32)(r_ecx+0xdf8u);
    /* 005ca45f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005ca462: mov esi, eax */ r_esi = r_eax;
    /* 005ca464: mov edi, edx */ r_edi = r_edx;
L_005ca466:; BB(0x005ca466);
    /* 005ca466: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca467: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ca46b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca470u); f_0069792c();
    /* 005ca470: mov ebp, eax */ r_ebp = r_eax;
    /* 005ca472: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca473: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca477: call 0x5e5284 */ r_esp -= 4; W32(r_esp, 0x5ca47cu); f_005e5284();
    /* 005ca47c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca47f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca481: je 0x5ca488 */ if (fZ) goto L_005ca488;
L_005ca483:; BB(0x005ca483);
    /* 005ca483: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005ca485: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005ca488:; BB(0x005ca488);
    /* 005ca488: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ca48b: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ca48e: jl 0x5ca466 */ if ((fS!=fO)) goto L_005ca466;
L_005ca490:; BB(0x005ca490);
    /* 005ca490: mov edx, edi */ r_edx = r_edi;
    /* 005ca492: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca495: je 0x5ca499 */ if (fZ) goto L_005ca499;
L_005ca497:; BB(0x005ca497);
    /* 005ca497: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005ca499:; BB(0x005ca499);
    /* 005ca499: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca49b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ca49c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca49d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca49e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca49f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca4a0: ret  */ FN_RET(0x005ca44c); r_esp += 4; return;
}

void f_005ca4a4(void) /* sub_5CA4A4 */
{
    FN_ENTER(0x005ca4a4);
    /* 005ca4a4: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ca4a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca4aa: je 0x5ca4b2 */ if (fZ) goto L_005ca4b2;
L_005ca4ac:; BB(0x005ca4ac);
    /* 005ca4ac: call 0x5d6724 */ r_esp -= 4; W32(r_esp, 0x5ca4b1u); f_005d6724();
    /* 005ca4b1: ret  */ FN_RET(0x005ca4a4); r_esp += 4; return;
L_005ca4b2:; BB(0x005ca4b2);
    /* 005ca4b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca4b4: ret  */ FN_RET(0x005ca4a4); r_esp += 4; return;
}

void f_005ca4b8(void) /* sub_5CA4B8 */
{
    FN_ENTER(0x005ca4b8);
    /* 005ca4b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4b9: mov ebp, esp */ r_ebp = r_esp;
    /* 005ca4bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4bd: push 0x8d99f0 */ { u32 v = 0x8d99f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ca4c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca4c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ca4d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca4d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ca4d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ca4d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ca4dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ca4df: call 0x5d779c */ r_esp -= 4; W32(r_esp, 0x5ca4e4u); f_005d779c();
    /* 005ca4e4: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca4ea: call 0x5caf44 */ r_esp -= 4; W32(r_esp, 0x5ca4efu); f_005caf44();
    /* 005ca4ef: push dword ptr [0xaca370] */ { u32 v = R32((u32)(0xaca370u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca4f5: call 0x5cb4b0 */ r_esp -= 4; W32(r_esp, 0x5ca4fau); f_005cb4b0();
    /* 005ca4fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca4fd: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5ca502u); f_007a61a4();
    /* 005ca502: mov ebx, eax */ r_ebx = r_eax;
    /* 005ca504: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5ca509u); f_00807ac0();
    /* 005ca509: mov edi, eax */ r_edi = r_eax;
    /* 005ca50b: mov esi, dword ptr [0xaafca0] */ r_esi = R32((u32)(0xaafca0u));
    /* 005ca511: mov dword ptr [0xa8d8c8], 0 */ W32((u32)(0xa8d8c8u), 0x0u);
    /* 005ca51b: call 0x5c9118 */ r_esp -= 4; W32(r_esp, 0x5ca520u); f_005c9118();
    /* 005ca520: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca521: call 0x5c83e4 */ r_esp -= 4; W32(r_esp, 0x5ca526u); f_005c83e4();
    /* 005ca526: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca527: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x5ca52cu); f_00807e20();
    /* 005ca52c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca52f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca531: je 0x5ca542 */ if (fZ) goto L_005ca542;
L_005ca533:; BB(0x005ca533);
    /* 005ca533: mov edx, dword ptr [0xa8d8cc] */ r_edx = R32((u32)(0xa8d8ccu));
    /* 005ca539: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ca53c: mov dword ptr [0xa8d8cc], edx */ W32((u32)(0xa8d8ccu), r_edx);
L_005ca542:; BB(0x005ca542);
    /* 005ca542: cmp ebx, 0xb */ {  u32 a = r_ebx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca545: je 0x5ca568 */ if (fZ) goto L_005ca568;
L_005ca547:; BB(0x005ca547);
    /* 005ca547: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ca54a: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ca54d: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ca550: mov dword ptr [0xa8d8c8], 1 */ W32((u32)(0xa8d8c8u), 0x1u);
    /* 005ca55a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ca55d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ca564: mov esp, ebp */ r_esp = r_ebp;
    /* 005ca566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca567: ret  */ FN_RET(0x005ca4b8); r_esp += 4; return;
L_005ca568:; BB(0x005ca568);
    /* 005ca568: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ca56f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ca571: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ca576u); f_005caba4();
    /* 005ca576: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ca577: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ca57a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca57c: je 0x5ca547 */ if (fZ) goto L_005ca547;
L_005ca57e:; BB(0x005ca57e);
    /* 005ca57e: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ca585: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ca58c: mov ecx, eax */ r_ecx = r_eax;
    /* 005ca58e: call 0x5cac28 */ r_esp -= 4; W32(r_esp, 0x5ca593u); f_005cac28();
    /* 005ca593: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ca59a: jmp 0x5ca547 */ goto L_005ca547;
}

void f_005ca59c(void) /* sub_5CA59C */
{
    FN_ENTER(0x005ca59c);
    /* 005ca59c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca59d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca59e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca59f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca5a0: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 005ca5a4: movzx eax, byte ptr [ebp] */ r_eax = (u32)R8((u32)(r_ebp));
    /* 005ca5a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca5aa: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 005ca5ae: movzx edx, byte ptr [ebx] */ r_edx = (u32)R8((u32)(r_ebx));
    /* 005ca5b1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca5b3: jne 0x5ca705 */ if (!fZ) goto L_005ca705;
L_005ca5b9:; BB(0x005ca5b9);
    /* 005ca5b9: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 005ca5bd: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 005ca5c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca5c3: jne 0x5ca705 */ if (!fZ) goto L_005ca705;
L_005ca5c9:; BB(0x005ca5c9);
    /* 005ca5c9: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca5cd: test al, 7 */ {  u32 a = (u8)r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca5cf: je 0x5ca64b */ if (fZ) goto L_005ca64b;
L_005ca5d1:; BB(0x005ca5d1);
    /* 005ca5d1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca5d5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca5d7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca5d9: je 0x5ca5ed */ if (fZ) goto L_005ca5ed;
L_005ca5db:; BB(0x005ca5db);
    /* 005ca5db: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca5df: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005ca5e3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca5e5: mov ecx, 0 */ r_ecx = 0x0u;
    /* 005ca5ea: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_005ca5ed:; BB(0x005ca5ed);
    /* 005ca5ed: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca5f1: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ca5f4: je 0x5ca60e */ if (fZ) goto L_005ca60e;
L_005ca5f6:; BB(0x005ca5f6);
    /* 005ca5f6: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ca5fa: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca5fd: jne 0x5ca60e */ if (!fZ) goto L_005ca60e;
L_005ca5ff:; BB(0x005ca5ff);
    /* 005ca5ff: movzx esi, byte ptr [ebp + 2] */ r_esi = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca603: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005ca607: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005ca609: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005ca60c: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_005ca60e:; BB(0x005ca60e);
    /* 005ca60e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca610: jne 0x5ca629 */ if (!fZ) goto L_005ca629;
L_005ca612:; BB(0x005ca612);
    /* 005ca612: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca616: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca618: je 0x5ca629 */ if (fZ) goto L_005ca629;
L_005ca61a:; BB(0x005ca61a);
    /* 005ca61a: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca61e: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005ca622: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ca624: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005ca627: or ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_005ca629:; BB(0x005ca629);
    /* 005ca629: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca62d: and eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ca630: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca633: jne 0x5ca650 */ if (!fZ) goto L_005ca650;
L_005ca635:; BB(0x005ca635);
    /* 005ca635: movzx esi, byte ptr [ebp + 2] */ r_esi = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca639: movzx edi, byte ptr [ebx + 2] */ r_edi = (u32)R8((u32)(r_ebx+0x2u));
    /* 005ca63d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca63f: mov eax, 0 */ r_eax = 0x0u;
    /* 005ca644: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005ca647: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca649: jmp 0x5ca650 */ goto L_005ca650;
L_005ca64b:; BB(0x005ca64b);
    /* 005ca64b: mov ecx, 1 */ r_ecx = 0x1u;
L_005ca650:; BB(0x005ca650);
    /* 005ca650: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca654: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca657: test al, 0x38 */ {  u32 a = (u8)r_eax; u32 b = 0x38u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca659: je 0x5ca6d8 */ if (fZ) goto L_005ca6d8;
L_005ca65b:; BB(0x005ca65b);
    /* 005ca65b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca65f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ca661: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca663: je 0x5ca677 */ if (fZ) goto L_005ca677;
L_005ca665:; BB(0x005ca665);
    /* 005ca665: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 005ca669: movzx edx, byte ptr [ebx + 3] */ r_edx = (u32)R8((u32)(r_ebx+0x3u));
    /* 005ca66d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca66f: mov edx, 0 */ r_edx = 0x0u;
    /* 005ca674: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
L_005ca677:; BB(0x005ca677);
    /* 005ca677: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca67b: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005ca67e: je 0x5ca69b */ if (fZ) goto L_005ca69b;
L_005ca680:; BB(0x005ca680);
    /* 005ca680: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005ca684: test esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca68a: jne 0x5ca69b */ if (!fZ) goto L_005ca69b;
L_005ca68c:; BB(0x005ca68c);
    /* 005ca68c: movzx edi, byte ptr [ebp + 3] */ r_edi = (u32)R8((u32)(r_ebp+0x3u));
    /* 005ca690: movzx esi, byte ptr [ebx + 3] */ r_esi = (u32)R8((u32)(r_ebx+0x3u));
    /* 005ca694: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005ca696: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005ca699: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_005ca69b:; BB(0x005ca69b);
    /* 005ca69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca69d: jne 0x5ca6b6 */ if (!fZ) goto L_005ca6b6;
L_005ca69f:; BB(0x005ca69f);
    /* 005ca69f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca6a3: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca6a5: je 0x5ca6b6 */ if (fZ) goto L_005ca6b6;
L_005ca6a7:; BB(0x005ca6a7);
    /* 005ca6a7: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 005ca6ab: movzx esi, byte ptr [ebx + 3] */ r_esi = (u32)R8((u32)(r_ebx+0x3u));
    /* 005ca6af: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005ca6b1: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005ca6b4: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_005ca6b6:; BB(0x005ca6b6);
    /* 005ca6b6: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca6ba: and eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ca6bd: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6c0: jne 0x5ca6dd */ if (!fZ) goto L_005ca6dd;
L_005ca6c2:; BB(0x005ca6c2);
    /* 005ca6c2: movzx esi, byte ptr [ebp + 3] */ r_esi = (u32)R8((u32)(r_ebp+0x3u));
    /* 005ca6c6: movzx edi, byte ptr [ebx + 3] */ r_edi = (u32)R8((u32)(r_ebx+0x3u));
    /* 005ca6ca: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6cc: mov eax, 0 */ r_eax = 0x0u;
    /* 005ca6d1: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 005ca6d4: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ca6d6: jmp 0x5ca6dd */ goto L_005ca6dd;
L_005ca6d8:; BB(0x005ca6d8);
    /* 005ca6d8: mov edx, 1 */ r_edx = 0x1u;
L_005ca6dd:; BB(0x005ca6dd);
    /* 005ca6dd: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca6e1: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005ca6e3: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005ca6e5: je 0x5ca6fe */ if (fZ) goto L_005ca6fe;
L_005ca6e7:; BB(0x005ca6e7);
    /* 005ca6e7: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 005ca6eb: movzx edx, byte ptr [ebx + 4] */ r_edx = (u32)R8((u32)(r_ebx+0x4u));
    /* 005ca6ef: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca6f1: jne 0x5ca6fa */ if (!fZ) goto L_005ca6fa;
L_005ca6f3:; BB(0x005ca6f3);
    /* 005ca6f3: mov eax, 1 */ r_eax = 0x1u;
    /* 005ca6f8: jmp 0x5ca703 */ goto L_005ca703;
L_005ca6fa:; BB(0x005ca6fa);
    /* 005ca6fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca6fc: jmp 0x5ca703 */ goto L_005ca703;
L_005ca6fe:; BB(0x005ca6fe);
    /* 005ca6fe: mov eax, 1 */ r_eax = 0x1u;
L_005ca703:; BB(0x005ca703);
    /* 005ca703: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005ca705:; BB(0x005ca705);
    /* 005ca705: mov eax, ecx */ r_eax = r_ecx;
    /* 005ca707: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca709: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca70a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca70b: ret  */ FN_RET(0x005ca59c); r_esp += 4; return;
}

void f_005ca70c(void) /* sub_5CA70C */
{
    FN_ENTER(0x005ca70c);
    /* 005ca70c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca70d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca70e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ca70f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca710: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ca713: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ca717: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca719: je 0x5ca7f9 */ if (fZ) goto L_005ca7f9;
L_005ca71f:; BB(0x005ca71f);
    /* 005ca71f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ca723: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca725: je 0x5ca7f9 */ if (fZ) goto L_005ca7f9;
L_005ca72b:; BB(0x005ca72b);
    /* 005ca72b: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005ca72f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ca733: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 005ca736: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 005ca739: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca73b: jne 0x5ca7f9 */ if (!fZ) goto L_005ca7f9;
L_005ca741:; BB(0x005ca741);
    /* 005ca741: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ca745: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005ca749: movzx edx, byte ptr [edx + 1] */ r_edx = (u32)R8((u32)(r_edx+0x1u));
    /* 005ca74d: movzx ebp, byte ptr [ebx + 1] */ r_ebp = (u32)R8((u32)(r_ebx+0x1u));
    /* 005ca751: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca753: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 005ca757: jne 0x5ca7f9 */ if (!fZ) goto L_005ca7f9;
L_005ca75d:; BB(0x005ca75d);
    /* 005ca75d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca75f: je 0x5ca895 */ if (fZ) goto L_005ca895;
L_005ca765:; BB(0x005ca765);
    /* 005ca765: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca768: je 0x5ca858 */ if (fZ) goto L_005ca858;
L_005ca76e:; BB(0x005ca76e);
    /* 005ca76e: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca771: je 0x5ca7de */ if (fZ) goto L_005ca7de;
L_005ca773:; BB(0x005ca773);
    /* 005ca773: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca776: jne 0x5ca7be */ if (!fZ) goto L_005ca7be;
L_005ca778:; BB(0x005ca778);
    /* 005ca778: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca77b: je 0x5ca803 */ if (fZ) goto L_005ca803;
L_005ca781:; BB(0x005ca781);
    /* 005ca781: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca783: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005ca786: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca788: jne 0x5ca7b3 */ if (!fZ) goto L_005ca7b3;
L_005ca78a:; BB(0x005ca78a);
    /* 005ca78a: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca78c: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca78e: jne 0x5ca7b3 */ if (!fZ) goto L_005ca7b3;
L_005ca790:; BB(0x005ca790);
    /* 005ca790: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005ca794: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005ca798: movzx edi, byte ptr [ebp + 2] */ r_edi = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca79c: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005ca7a0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7a2: mov edx, 0 */ r_edx = 0x0u;
    /* 005ca7a7: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ca7aa: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ca7ad: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ca7b0: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_005ca7b3:; BB(0x005ca7b3);
    /* 005ca7b3: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ca7b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca7b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca7ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca7bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca7bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca7bd: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca7be:; BB(0x005ca7be);
    /* 005ca7be: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7c1: jne 0x5ca7f9 */ if (!fZ) goto L_005ca7f9;
L_005ca7c3:; BB(0x005ca7c3);
    /* 005ca7c3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca7c5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7c7: jne 0x5ca7d4 */ if (!fZ) goto L_005ca7d4;
L_005ca7c9:; BB(0x005ca7c9);
    /* 005ca7c9: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca7cb: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7cd: jne 0x5ca7d4 */ if (!fZ) goto L_005ca7d4;
L_005ca7cf:; BB(0x005ca7cf);
    /* 005ca7cf: mov ebx, 1 */ r_ebx = 0x1u;
L_005ca7d4:; BB(0x005ca7d4);
    /* 005ca7d4: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca7d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca7d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca7da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca7db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca7dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca7dd: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca7de:; BB(0x005ca7de);
    /* 005ca7de: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca7e0: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7e2: jne 0x5ca7ef */ if (!fZ) goto L_005ca7ef;
L_005ca7e4:; BB(0x005ca7e4);
    /* 005ca7e4: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca7e6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca7e8: jne 0x5ca7ef */ if (!fZ) goto L_005ca7ef;
L_005ca7ea:; BB(0x005ca7ea);
    /* 005ca7ea: mov ebx, 1 */ r_ebx = 0x1u;
L_005ca7ef:; BB(0x005ca7ef);
    /* 005ca7ef: mov eax, ebx */ r_eax = r_ebx;
    /* 005ca7f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca7f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca7f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca7f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca7f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca7f8: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca7f9:; BB(0x005ca7f9);
    /* 005ca7f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ca7fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca7ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca800: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca801: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca802: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca803:; BB(0x005ca803);
    /* 005ca803: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca805: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005ca808: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca80a: jne 0x5ca84d */ if (!fZ) goto L_005ca84d;
L_005ca80c:; BB(0x005ca80c);
    /* 005ca80c: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca80e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca810: jne 0x5ca84d */ if (!fZ) goto L_005ca84d;
L_005ca812:; BB(0x005ca812);
    /* 005ca812: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ca816: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005ca81a: movzx ebp, byte ptr [edx + 2] */ r_ebp = (u32)R8((u32)(r_edx+0x2u));
    /* 005ca81e: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 005ca822: movzx ebx, byte ptr [edx + 4] */ r_ebx = (u32)R8((u32)(r_edx+0x4u));
    /* 005ca826: movzx edi, byte ptr [ecx + 4] */ r_edi = (u32)R8((u32)(r_ecx+0x4u));
    /* 005ca82a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca82c: mov eax, 0 */ r_eax = 0x0u;
    /* 005ca831: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ca834: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ca837: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ca83a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ca83d: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca83f: jne 0x5ca848 */ if (!fZ) goto L_005ca848;
L_005ca841:; BB(0x005ca841);
    /* 005ca841: mov eax, 1 */ r_eax = 0x1u;
    /* 005ca846: jmp 0x5ca84a */ goto L_005ca84a;
L_005ca848:; BB(0x005ca848);
    /* 005ca848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ca84a:; BB(0x005ca84a);
    /* 005ca84a: and dword ptr [esp], eax */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_005ca84d:; BB(0x005ca84d);
    /* 005ca84d: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ca850: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca853: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca854: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca855: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca856: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca857: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca858:; BB(0x005ca858);
    /* 005ca858: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca85a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005ca85d: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca85f: jne 0x5ca88a */ if (!fZ) goto L_005ca88a;
L_005ca861:; BB(0x005ca861);
    /* 005ca861: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca863: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca865: jne 0x5ca88a */ if (!fZ) goto L_005ca88a;
L_005ca867:; BB(0x005ca867);
    /* 005ca867: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005ca86b: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005ca86f: movzx edi, byte ptr [ebp + 2] */ r_edi = (u32)R8((u32)(r_ebp+0x2u));
    /* 005ca873: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005ca877: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca879: mov edx, 0 */ r_edx = 0x0u;
    /* 005ca87e: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ca881: or edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005ca884: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005ca887: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_005ca88a:; BB(0x005ca88a);
    /* 005ca88a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ca88d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca890: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca892: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca893: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca894: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
L_005ca895:; BB(0x005ca895);
    /* 005ca895: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ca897: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005ca89a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca89c: jne 0x5ca8df */ if (!fZ) goto L_005ca8df;
L_005ca89e:; BB(0x005ca89e);
    /* 005ca89e: mov eax, ebp */ r_eax = r_ebp;
    /* 005ca8a0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca8a2: jne 0x5ca8df */ if (!fZ) goto L_005ca8df;
L_005ca8a4:; BB(0x005ca8a4);
    /* 005ca8a4: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ca8a8: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005ca8ac: movzx ebp, byte ptr [edx + 2] */ r_ebp = (u32)R8((u32)(r_edx+0x2u));
    /* 005ca8b0: movzx esi, byte ptr [ecx + 2] */ r_esi = (u32)R8((u32)(r_ecx+0x2u));
    /* 005ca8b4: movzx ebx, byte ptr [edx + 4] */ r_ebx = (u32)R8((u32)(r_edx+0x4u));
    /* 005ca8b8: movzx edi, byte ptr [ecx + 4] */ r_edi = (u32)R8((u32)(r_ecx+0x4u));
    /* 005ca8bc: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca8be: mov eax, 0 */ r_eax = 0x0u;
    /* 005ca8c3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005ca8c6: or eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ca8c9: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005ca8cc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005ca8cf: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca8d1: jne 0x5ca8da */ if (!fZ) goto L_005ca8da;
L_005ca8d3:; BB(0x005ca8d3);
    /* 005ca8d3: mov eax, 1 */ r_eax = 0x1u;
    /* 005ca8d8: jmp 0x5ca8dc */ goto L_005ca8dc;
L_005ca8da:; BB(0x005ca8da);
    /* 005ca8da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005ca8dc:; BB(0x005ca8dc);
    /* 005ca8dc: and dword ptr [esp], eax */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_005ca8df:; BB(0x005ca8df);
    /* 005ca8df: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005ca8e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ca8e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ca8e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ca8e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca8e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ca8e9: ret  */ FN_RET(0x005ca70c); r_esp += 4; return;
}

void f_005ca8ec(void) /* sub_5CA8EC */
{
    FN_ENTER(0x005ca8ec);
    /* 005ca8ec: mov eax, dword ptr [0xa8d8b0] */ r_eax = R32((u32)(0xa8d8b0u));
    /* 005ca8f1: ret  */ FN_RET(0x005ca8ec); r_esp += 4; return;
}

void f_005ca8f4(void) /* sub_5CA8F4 */
{
    FN_ENTER(0x005ca8f4);
    /* 005ca8f4: mov dword ptr [0xa8d8b0], 1 */ W32((u32)(0xa8d8b0u), 0x1u);
    /* 005ca8fe: ret  */ FN_RET(0x005ca8f4); r_esp += 4; return;
}

void f_005ca900(void) /* sub_5CA900 */
{
    FN_ENTER(0x005ca900);
    /* 005ca900: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca901: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005ca906: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca907: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5ca90cu); f_0068d5a8();
    /* 005ca90c: mov esi, eax */ r_esi = r_eax;
    /* 005ca90e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca911: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca913: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca919:; BB(0x005ca919);
    /* 005ca919: movsx ecx, word ptr [esi + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 005ca920: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca923: je 0x5ca94f */ if (fZ) goto L_005ca94f;
L_005ca925:; BB(0x005ca925);
    /* 005ca925: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca928: jne 0x5ca938 */ if (!fZ) goto L_005ca938;
L_005ca92a:; BB(0x005ca92a);
    /* 005ca92a: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 005ca930: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca936: je 0x5ca94f */ if (fZ) goto L_005ca94f;
L_005ca938:; BB(0x005ca938);
    /* 005ca938: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca93b: jne 0x5ca9c5 */ if (!fZ) goto L_005ca9c5;
L_005ca941:; BB(0x005ca941);
    /* 005ca941: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 005ca947: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca94d: jne 0x5ca9c5 */ if (!fZ) goto L_005ca9c5;
L_005ca94f:; BB(0x005ca94f);
    /* 005ca94f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005ca953: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ca956: ja 0x5ca9c5 */ if ((!fC&&!fZ)) goto L_005ca9c5;
L_005ca958:; BB(0x005ca958);
    /* 005ca958: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005ca95c: mov ecx, dword ptr [edx*4 + 0x92bd44] */ r_ecx = R32((u32)(r_edx*4+0x92bd44u));
    /* 005ca963: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca900); r_esp += 4; return;
}

void f_005ca965(void)
{
    FN_ENTER(0x005ca965);
    /* 005ca965: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005ca969: lea edx, [edx + 5] */ r_edx = (u32)(r_edx+0x5u);
    /* 005ca96c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca96d: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005ca973: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca978u); f_0069792c();
    /* 005ca978: jmp 0x5ca9b4 */ goto L_005ca9b4;
L_005ca9b4:; BB(0x005ca9b4);
    /* 005ca9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9b6: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca9b8:; BB(0x005ca9b8);
    /* 005ca9b8: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca9be: mov ecx, esi */ r_ecx = r_esi;
    /* 005ca9c0: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5ca9c5u); f_0068dfd8();
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca965); r_esp += 4; return;
}

void f_005ca97a(void)
{
    FN_ENTER(0x005ca97a);
    /* 005ca97a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca97c: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005ca982: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca987u); f_0069792c();
    /* 005ca987: jmp 0x5ca9b4 */ goto L_005ca9b4;
L_005ca9b4:; BB(0x005ca9b4);
    /* 005ca9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9b6: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca9b8:; BB(0x005ca9b8);
    /* 005ca9b8: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca9be: mov ecx, esi */ r_ecx = r_esi;
    /* 005ca9c0: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5ca9c5u); f_0068dfd8();
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca97a); r_esp += 4; return;
}

void f_005ca989(void)
{
    FN_ENTER(0x005ca989);
    /* 005ca989: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca98b: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005ca991: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca996u); f_0069792c();
    /* 005ca996: jmp 0x5ca9b4 */ goto L_005ca9b4;
L_005ca9b4:; BB(0x005ca9b4);
    /* 005ca9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9b6: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca9b8:; BB(0x005ca9b8);
    /* 005ca9b8: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca9be: mov ecx, esi */ r_ecx = r_esi;
    /* 005ca9c0: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5ca9c5u); f_0068dfd8();
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca989); r_esp += 4; return;
}

void f_005ca998(void)
{
    FN_ENTER(0x005ca998);
    /* 005ca998: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca99a: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005ca9a0: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca9a5u); f_0069792c();
    /* 005ca9a5: jmp 0x5ca9b4 */ goto L_005ca9b4;
L_005ca9b4:; BB(0x005ca9b4);
    /* 005ca9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9b6: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca9b8:; BB(0x005ca9b8);
    /* 005ca9b8: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca9be: mov ecx, esi */ r_ecx = r_esi;
    /* 005ca9c0: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5ca9c5u); f_0068dfd8();
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca998); r_esp += 4; return;
}

void f_005ca9a7(void)
{
    FN_ENTER(0x005ca9a7);
    /* 005ca9a7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9a9: lea ecx, [esi + 0xdf8] */ r_ecx = (u32)(r_esi+0xdf8u);
    /* 005ca9af: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ca9b4u); f_0069792c();
    /* 005ca9b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9b6: je 0x5ca9c5 */ if (fZ) goto L_005ca9c5;
L_005ca9b8:; BB(0x005ca9b8);
    /* 005ca9b8: push dword ptr [eax + 0xd8] */ { u32 v = R32((u32)(r_eax+0xd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ca9be: mov ecx, esi */ r_ecx = r_esi;
    /* 005ca9c0: call 0x68dfd8 */ r_esp -= 4; W32(r_esp, 0x5ca9c5u); f_0068dfd8();
L_005ca9c5:; BB(0x005ca9c5);
    /* 005ca9c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ca9c6: ret  */ FN_RET(0x005ca9a7); r_esp += 4; return;
}

void f_005ca9c8(void) /* sub_5CA9C8 */
{
    FN_ENTER(0x005ca9c8);
    /* 005ca9c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9ca: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005ca9ce: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9d0: je 0x5caa2c */ if (fZ) goto L_005caa2c;
L_005ca9d2:; BB(0x005ca9d2);
    /* 005ca9d2: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005ca9d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ca9d8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5ca9ddu); f_0068d5a8();
    /* 005ca9dd: mov ebx, eax */ r_ebx = r_eax;
    /* 005ca9df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ca9e2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ca9e4: je 0x5caa2c */ if (fZ) goto L_005caa2c;
L_005ca9e6:; BB(0x005ca9e6);
    /* 005ca9e6: movsx eax, word ptr [ebx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005ca9ed: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca9f0: je 0x5caa18 */ if (fZ) goto L_005caa18;
L_005ca9f2:; BB(0x005ca9f2);
    /* 005ca9f2: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ca9f5: jne 0x5caa05 */ if (!fZ) goto L_005caa05;
L_005ca9f7:; BB(0x005ca9f7);
    /* 005ca9f7: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 005ca9fd: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caa03: je 0x5caa18 */ if (fZ) goto L_005caa18;
L_005caa05:; BB(0x005caa05);
    /* 005caa05: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005caa08: jne 0x5caa2c */ if (!fZ) goto L_005caa2c;
L_005caa0a:; BB(0x005caa0a);
    /* 005caa0a: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 005caa10: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005caa16: jne 0x5caa2c */ if (!fZ) goto L_005caa2c;
L_005caa18:; BB(0x005caa18);
    /* 005caa18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005caa19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005caa1b: call 0x68f3cc */ r_esp -= 4; W32(r_esp, 0x5caa20u); f_0068f3cc();
    /* 005caa20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005caa22: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005caa25: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005caa27: call 0x68de54 */ r_esp -= 4; W32(r_esp, 0x5caa2cu); f_0068de54();
L_005caa2c:; BB(0x005caa2c);
    /* 005caa2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005caa2d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005caa2e: ret  */ FN_RET(0x005ca9c8); r_esp += 4; return;
}

void f_005caa30(void) /* sub_5CAA30 */
{
    FN_ENTER(0x005caa30);
    /* 005caa30: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005caa34: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 005caa38: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005caa3d: jae 0x5caa47 */ if (!fC) goto L_005caa47;
L_005caa3f:; BB(0x005caa3f);
    /* 005caa3f: mov eax, dword ptr [eax*4 + 0x9c2240] */ r_eax = R32((u32)(r_eax*4+0x9c2240u));
    /* 005caa46: ret  */ FN_RET(0x005caa30); r_esp += 4; return;
L_005caa47:; BB(0x005caa47);
    /* 005caa47: mov eax, 0x5e991c */ r_eax = 0x5e991cu;
    /* 005caa4c: ret  */ FN_RET(0x005caa30); r_esp += 4; return;
}

void f_005caa50(void) /* sub_5CAA50 */
{
    FN_ENTER(0x005caa50);
    /* 005caa50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005caa54: movzx eax, byte ptr [eax + 1] */ r_eax = (u32)R8((u32)(r_eax+0x1u));
    /* 005caa58: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005caa5b: jae 0x5caa65 */ if (!fC) goto L_005caa65;
L_005caa5d:; BB(0x005caa5d);
    /* 005caa5d: mov eax, dword ptr [eax*4 + 0x9c21e0] */ r_eax = R32((u32)(r_eax*4+0x9c21e0u));
    /* 005caa64: ret  */ FN_RET(0x005caa50); r_esp += 4; return;
L_005caa65:; BB(0x005caa65);
    /* 005caa65: mov eax, 0x5de244 */ r_eax = 0x5de244u;
    /* 005caa6a: ret  */ FN_RET(0x005caa50); r_esp += 4; return;
}

void f_005caa98(void) /* sub_5CAA98 */
{
    FN_ENTER(0x005caa98);
    /* 005caa98: call 0x5c74f4 */ r_esp -= 4; W32(r_esp, 0x5caa9du); f_005c74f4();
    /* 005caa9d: call 0x5d7ccc */ r_esp -= 4; W32(r_esp, 0x5caaa2u); f_005d7ccc();
    /* 005caaa2: push 0x9c2160 */ { u32 v = 0x9c2160u; r_esp -= 4; W32(r_esp, v); }
    /* 005caaa7: call 0x5d6b10 */ r_esp -= 4; W32(r_esp, 0x5caaacu); f_005d6b10();
    /* 005caaac: mov dword ptr [0xa8d8cc], 0 */ W32((u32)(0xa8d8ccu), 0x0u);
    /* 005caab6: mov dword ptr [0xa8d8ac], eax */ W32((u32)(0xa8d8acu), r_eax);
    /* 005caabb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005caabc: ret  */ FN_RET(0x005caa98); r_esp += 4; return;
}

void f_005caac0(void) /* sub_5CAAC0 */
{
    FN_ENTER(0x005caac0);
    /* 005caac0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x5caac5u); f_006dc358();
    /* 005caac5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005caac8: je 0x5caad4 */ if (fZ) goto L_005caad4;
L_005caaca:; BB(0x005caaca);
    /* 005caaca: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x5caacfu); f_006dc358();
    /* 005caacf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005caad2: jne 0x5caafa */ if (!fZ) goto L_005caafa;
L_005caad4:; BB(0x005caad4);
    /* 005caad4: mov dword ptr [0xa8d8b0], 1 */ W32((u32)(0xa8d8b0u), 0x1u);
    /* 005caade: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005caae3: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x5caae8u); f_006c1bcc();
    /* 005caae8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005caae9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005caaeb: je 0x5caafa */ if (fZ) goto L_005caafa;
L_005caaed:; BB(0x005caaed);
    /* 005caaed: movzx edx, byte ptr [eax + 7] */ r_edx = (u32)R8((u32)(r_eax+0x7u));
    /* 005caaf1: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005caaf7: mov byte ptr [eax + 7], dl */ W8((u32)(r_eax+0x7u), (u8)r_edx);
L_005caafa:; BB(0x005caafa);
    /* 005caafa: ret  */ FN_RET(0x005caac0); r_esp += 4; return;
}

void f_005caafc(void) /* sub_5CAAFC */
{
    FN_ENTER(0x005caafc);
    /* 005caafc: mov dword ptr [0xa8dc68], 0 */ W32((u32)(0xa8dc68u), 0x0u);
    /* 005cab06: ret  */ FN_RET(0x005caafc); r_esp += 4; return;
}

void f_005cab08(void) /* sub_5CAB08 */
{
    FN_ENTER(0x005cab08);
    /* 005cab08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cab09: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cab0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cab0d: call 0x5d6bd4 */ r_esp -= 4; W32(r_esp, 0x5cab12u); f_005d6bd4();
    /* 005cab12: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cab16: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cab18: jne 0x5cab1e */ if (!fZ) goto L_005cab1e;
L_005cab1a:; BB(0x005cab1a);
    /* 005cab1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cab1b: ret 4 */ FN_RET(0x005cab08); r_esp += 8; return;
L_005cab1e:; BB(0x005cab1e);
    /* 005cab1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cab1f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5cab24u); f_00857e98();
    /* 005cab24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cab25: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cab26: ret 4 */ FN_RET(0x005cab08); r_esp += 8; return;
}

void f_005cab2c(void) /* sub_5CAB2C */
{
    FN_ENTER(0x005cab2c);
    /* 005cab2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cab2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cab2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cab31: push 0x8d9a0c */ { u32 v = 0x8d9a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005cab36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cab3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cab3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cab44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cab47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cab4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cab4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cab50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cab53: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cab56: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005cab59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cab60: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cab65u); f_008171e8();
    /* 005cab65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cab68: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cab6a: jne 0x5cab7c */ if (!fZ) goto L_005cab7c;
L_005cab6c:; BB(0x005cab6c);
    /* 005cab6c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cab6f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cab76: mov esp, ebp */ r_esp = r_ebp;
    /* 005cab78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cab79: ret 4 */ FN_RET(0x005cab2c); r_esp += 8; return;
L_005cab7c:; BB(0x005cab7c);
    /* 005cab7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cab7f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cab80: call 0x5c2f78 */ r_esp -= 4; W32(r_esp, 0x5cab85u); f_005c2f78();
    /* 005cab85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cab86: jmp 0x5cab6c */ goto L_005cab6c;
}

void f_005cab88(void) /* sub_5CAB88 */
{
    FN_ENTER(0x005cab88);
    /* 005cab88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cab89: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005cab8b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cab8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005cab91: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cab96u); f_008193cc();
    /* 005cab96: mov dword ptr [ebp], 0xb0c2e0 */ W32((u32)(r_ebp), 0xb0c2e0u);
    /* 005cab9d: mov eax, ebp */ r_eax = r_ebp;
    /* 005cab9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005caba0: ret 4 */ FN_RET(0x005cab88); r_esp += 8; return;
}

void f_005caba4(void) /* sub_5CABA4 */
{
    FN_ENTER(0x005caba4);
    /* 005caba4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005caba8: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 005cabae: call 0x7a8a38 */ r_esp -= 4; W32(r_esp, 0x5cabb3u); f_007a8a38();
    /* 005cabb3: ret  */ FN_RET(0x005caba4); r_esp += 4; return;
}

void f_005cabb4(void) /* sub_5CABB4 */
{
    FN_ENTER(0x005cabb4);
    /* 005cabb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cabb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cabb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cabb9: call 0x5cabd8 */ r_esp -= 4; W32(r_esp, 0x5cabbeu); f_005cabd8();
    /* 005cabbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cabc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cabc4: jne 0x5cabca */ if (!fZ) goto L_005cabca;
L_005cabc6:; BB(0x005cabc6);
    /* 005cabc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cabc7: ret 4 */ FN_RET(0x005cabb4); r_esp += 8; return;
L_005cabca:; BB(0x005cabca);
    /* 005cabca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cabcb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cabd0u); f_005c2f74();
    /* 005cabd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cabd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cabd2: ret 4 */ FN_RET(0x005cabb4); r_esp += 8; return;
}

void f_005cabd8(void) /* sub_5CABD8 */
{
    FN_ENTER(0x005cabd8);
    /* 005cabd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cabd9: mov ebp, esp */ r_ebp = r_esp;
    /* 005cabdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cabdd: push 0x8d9a28 */ { u32 v = 0x8d9a28u; r_esp -= 4; W32(r_esp, v); }
    /* 005cabe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cabe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cabe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cabf0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cabf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cabf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cabf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cabfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cabff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cac02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cac05: mov dword ptr [ecx], 0xb0c318 */ W32((u32)(r_ecx), 0xb0c318u);
    /* 005cac0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cac12: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cac17u); f_008171e8();
    /* 005cac17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cac1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cac21: mov esp, ebp */ r_esp = r_ebp;
    /* 005cac23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cac24: ret  */ FN_RET(0x005cabd8); r_esp += 4; return;
}

void f_005cac28(void) /* sub_5CAC28 */
{
    FN_ENTER(0x005cac28);
    /* 005cac28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cac29: mov edi, ecx */ r_edi = r_ecx;
    /* 005cac2b: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cac31: mov ecx, edi */ r_ecx = r_edi;
    /* 005cac33: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cac38u); f_008193cc();
    /* 005cac38: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005cac3c: mov dword ptr [edi], 0xb0c318 */ W32((u32)(r_edi), 0xb0c318u);
    /* 005cac42: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cac47: mov edx, dword ptr [0x9c2600] */ r_edx = R32((u32)(0x9c2600u));
    /* 005cac4d: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005cac50: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005cac54: mov eax, edi */ r_eax = r_edi;
    /* 005cac56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cac57: ret  */ FN_RET(0x005cac28); r_esp += 4; return;
}

void f_005cac58(void) /* sub_5CAC58 */
{
    FN_ENTER(0x005cac58);
    /* 005cac58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005cac59: mov edi, ecx */ r_edi = r_ecx;
    /* 005cac5b: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5cac60u); f_0080a640();
    /* 005cac60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cac62: jne 0x5cac7f */ if (!fZ) goto L_005cac7f;
L_005cac64:; BB(0x005cac64);
    /* 005cac64: mov eax, dword ptr [0xa8d8d4] */ r_eax = R32((u32)(0xa8d8d4u));
    /* 005cac69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cac6b: je 0x5cac7f */ if (fZ) goto L_005cac7f;
L_005cac6d:; BB(0x005cac6d);
    /* 005cac6d: call 0x7a0118 */ r_esp -= 4; W32(r_esp, 0x5cac72u); f_007a0118();
    /* 005cac72: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005cac76: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cac7b: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_005cac7f:; BB(0x005cac7f);
    /* 005cac7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cac80: ret  */ FN_RET(0x005cac58); r_esp += 4; return;
}

void f_005cac84(void) /* sub_5CAC84 */
{
    FN_ENTER(0x005cac84);
    /* 005cac84: mov dword ptr [0xa8d8d4], 0 */ W32((u32)(0xa8d8d4u), 0x0u);
    /* 005cac8e: ret  */ FN_RET(0x005cac84); r_esp += 4; return;
}

void f_005cac90(void) /* sub_5CAC90 */
{
    FN_ENTER(0x005cac90);
    /* 005cac90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cac91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cac93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cac95: call 0x5cacb4 */ r_esp -= 4; W32(r_esp, 0x5cac9au); f_005cacb4();
    /* 005cac9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cac9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005caca0: jne 0x5caca6 */ if (!fZ) goto L_005caca6;
L_005caca2:; BB(0x005caca2);
    /* 005caca2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005caca3: ret 4 */ FN_RET(0x005cac90); r_esp += 8; return;
L_005caca6:; BB(0x005caca6);
    /* 005caca6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005caca7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cacacu); f_005c2f74();
    /* 005cacac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cacad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cacae: ret 4 */ FN_RET(0x005cac90); r_esp += 8; return;
}

void f_005cacb4(void) /* sub_5CACB4 */
{
    FN_ENTER(0x005cacb4);
    /* 005cacb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cacb5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cacb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cacb9: push 0x8d9a44 */ { u32 v = 0x8d9a44u; r_esp -= 4; W32(r_esp, v); }
    /* 005cacbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cacc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cacc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005caccc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005caccf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cacd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cacd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cacd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cacdb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cacde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cace1: mov dword ptr [ecx], 0xb0c3f0 */ W32((u32)(r_ecx), 0xb0c3f0u);
    /* 005cace7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cacee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cacf3u); f_008171e8();
    /* 005cacf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cacf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cacfd: mov esp, ebp */ r_esp = r_ebp;
    /* 005cacff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cad00: ret  */ FN_RET(0x005cacb4); r_esp += 4; return;
}

void f_005cad04(void) /* sub_5CAD04 */
{
    FN_ENTER(0x005cad04);
    /* 005cad04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cad05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005cad07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cad09: call 0x5cad28 */ r_esp -= 4; W32(r_esp, 0x5cad0eu); f_005cad28();
    /* 005cad0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005cad12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cad14: jne 0x5cad1a */ if (!fZ) goto L_005cad1a;
L_005cad16:; BB(0x005cad16);
    /* 005cad16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cad17: ret 4 */ FN_RET(0x005cad04); r_esp += 8; return;
L_005cad1a:; BB(0x005cad1a);
    /* 005cad1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cad1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5cad20u); f_005c2f74();
    /* 005cad20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cad21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cad22: ret 4 */ FN_RET(0x005cad04); r_esp += 8; return;
}

void f_005cad28(void) /* sub_5CAD28 */
{
    FN_ENTER(0x005cad28);
    /* 005cad28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cad29: mov ebp, esp */ r_ebp = r_esp;
    /* 005cad2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cad2d: push 0x8d9a60 */ { u32 v = 0x8d9a60u; r_esp -= 4; W32(r_esp, v); }
    /* 005cad32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cad38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cad39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cad40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cad43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cad46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cad49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cad4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cad4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cad52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cad55: mov dword ptr [ecx], 0xb0c400 */ W32((u32)(r_ecx), 0xb0c400u);
    /* 005cad5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cad62: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cad67u); f_008171e8();
    /* 005cad67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cad6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cad71: mov esp, ebp */ r_esp = r_ebp;
    /* 005cad73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cad74: ret  */ FN_RET(0x005cad28); r_esp += 4; return;
}

void f_005cad78(void) /* sub_5CAD78 */
{
    FN_ENTER(0x005cad78);
    /* 005cad78: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
    /* 005cad7e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cad80: je 0x5cada4 */ if (fZ) goto L_005cada4;
L_005cad82:; BB(0x005cad82);
    /* 005cad82: movzx eax, word ptr [ecx + 0x100] */ r_eax = (u32)R16((u32)(r_ecx+0x100u));
    /* 005cad89: movzx edx, word ptr [ecx + 0x102] */ r_edx = (u32)R16((u32)(r_ecx+0x102u));
    /* 005cad90: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005cad93: mov word ptr [ecx + 0x100], ax */ W16((u32)(r_ecx+0x100u), (u16)r_eax);
    /* 005cad9a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cad9d: mov word ptr [ecx + 0x102], dx */ W16((u32)(r_ecx+0x102u), (u16)r_edx);
L_005cada4:; BB(0x005cada4);
    /* 005cada4: ret  */ FN_RET(0x005cad78); r_esp += 4; return;
}

void f_005cada8(void) /* sub_5CADA8 */
{
    FN_ENTER(0x005cada8);
    /* 005cada8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cadab: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5cadb0u); f_007a9044();
    /* 005cadb0: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005cadb6: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 005cadbb: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 005cadc1: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005cadc7: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 005cadcc: mov eax, dword ptr [0xaf0370] */ r_eax = R32((u32)(0xaf0370u));
    /* 005cadd1: mov dword ptr [0xaab500], ecx */ W32((u32)(0xaab500u), r_ecx);
    /* 005cadd7: mov dword ptr [0xaab508], eax */ W32((u32)(0xaab508u), r_eax);
    /* 005caddc: mov eax, dword ptr [0xaf0374] */ r_eax = R32((u32)(0xaf0374u));
    /* 005cade1: mov dword ptr [0xaab50c], eax */ W32((u32)(0xaab50cu), r_eax);
    /* 005cade6: mov eax, dword ptr [0xaf0378] */ r_eax = R32((u32)(0xaf0378u));
    /* 005cadeb: mov dword ptr [0xaab510], eax */ W32((u32)(0xaab510u), r_eax);
    /* 005cadf0: mov eax, dword ptr [0xaf037c] */ r_eax = R32((u32)(0xaf037cu));
    /* 005cadf5: mov dword ptr [0xaab514], eax */ W32((u32)(0xaab514u), r_eax);
    /* 005cadfa: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005cadff: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 005cae02: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 005cae08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae0a: je 0x5caf0e */ if (fZ) goto L_005caf0e;
L_005cae10:; BB(0x005cae10);
    /* 005cae10: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 005cae14: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005cae18: mov esi, eax */ r_esi = r_eax;
    /* 005cae1a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005cae1d: mov edi, edx */ r_edi = r_edx;
L_005cae1f:; BB(0x005cae1f);
    /* 005cae1f: mov ecx, edi */ r_ecx = r_edi;
    /* 005cae21: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 005cae23: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005cae26: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5cae2bu); f_005c57ac();
    /* 005cae2b: mov ebx, eax */ r_ebx = r_eax;
    /* 005cae2d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cae30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cae32: je 0x5caefa */ if (fZ) goto L_005caefa;
L_005cae38:; BB(0x005cae38);
    /* 005cae38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005cae3a: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5cae3fu); f_007a94a0();
    /* 005cae3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cae40: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cae42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cae44: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5cae47u); call_ind(t); }
    /* 005cae47: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5cae4cu); f_007a9044();
    /* 005cae4c: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 005cae51: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 005cae56: mov eax, dword ptr [0xaab50c] */ r_eax = R32((u32)(0xaab50cu));
    /* 005cae5b: mov dword ptr [0xaf0374], eax */ W32((u32)(0xaf0374u), r_eax);
    /* 005cae60: mov eax, dword ptr [0xaab510] */ r_eax = R32((u32)(0xaab510u));
    /* 005cae65: mov dword ptr [0xaf0378], eax */ W32((u32)(0xaf0378u), r_eax);
    /* 005cae6a: mov eax, dword ptr [0xaab514] */ r_eax = R32((u32)(0xaab514u));
    /* 005cae6f: mov dword ptr [0xaf037c], eax */ W32((u32)(0xaf037cu), r_eax);
    /* 005cae74: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 005cae79: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 005cae7e: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 005cae83: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 005cae88: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005cae8d: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005cae92: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005cae94: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x5cae99u); f_007a94a0();
    /* 005cae99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cae9a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005cae9c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005cae9e: call dword ptr [eax + 0x68] */ { u32 t = R32((u32)(r_eax+0x68u)); r_esp -= 4; W32(r_esp, 0x5caea1u); call_ind(t); }
    /* 005caea1: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5caea6u); f_007a9044();
    /* 005caea6: mov ecx, dword ptr [0xaab508] */ r_ecx = R32((u32)(0xaab508u));
    /* 005caeac: mov ebx, dword ptr [0xaab50c] */ r_ebx = R32((u32)(0xaab50cu));
    /* 005caeb2: mov dword ptr [0xaf0370], ecx */ W32((u32)(0xaf0370u), r_ecx);
    /* 005caeb8: mov ecx, dword ptr [0xaab510] */ r_ecx = R32((u32)(0xaab510u));
    /* 005caebe: mov dword ptr [0xaf0374], ebx */ W32((u32)(0xaf0374u), r_ebx);
    /* 005caec4: mov dword ptr [0xaf0378], ecx */ W32((u32)(0xaf0378u), r_ecx);
    /* 005caeca: mov ecx, dword ptr [0xaab514] */ r_ecx = R32((u32)(0xaab514u));
    /* 005caed0: mov dword ptr [0xaf037c], ecx */ W32((u32)(0xaf037cu), r_ecx);
    /* 005caed6: mov ecx, dword ptr [0xaab504] */ r_ecx = R32((u32)(0xaab504u));
    /* 005caedc: mov dword ptr [0xaf0360], ecx */ W32((u32)(0xaf0360u), r_ecx);
    /* 005caee2: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 005caee8: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 005caeee: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 005caef4: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
L_005caefa:; BB(0x005caefa);
    /* 005caefa: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 005caefd: jne 0x5cae1f */ if (!fZ) goto L_005cae1f;
L_005caf03:; BB(0x005caf03);
    /* 005caf03: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005caf07: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005caf0b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005caf0e:; BB(0x005caf0e);
    /* 005caf0e: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x5caf13u); f_007a94b0();
    /* 005caf13: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005caf18: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005caf22: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005caf25: ret  */ FN_RET(0x005cada8); r_esp += 4; return;
}

void f_005caf28(void) /* sub_5CAF28 */
{
    FN_ENTER(0x005caf28);
    /* 005caf28: mov eax, dword ptr [0xa8d8e8] */ r_eax = R32((u32)(0xa8d8e8u));
    /* 005caf2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005caf2f: je 0x5caf42 */ if (fZ) goto L_005caf42;
L_005caf31:; BB(0x005caf31);
    /* 005caf31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005caf32: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5caf37u); f_00857e98();
    /* 005caf37: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005caf38: mov dword ptr [0xa8d8e8], 0 */ W32((u32)(0xa8d8e8u), 0x0u);
L_005caf42:; BB(0x005caf42);
    /* 005caf42: ret  */ FN_RET(0x005caf28); r_esp += 4; return;
}

void f_005caf44(void) /* sub_5CAF44 */
{
    FN_ENTER(0x005caf44);
    /* 005caf44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005caf45: mov ebp, esp */ r_ebp = r_esp;
    /* 005caf47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005caf49: push 0x8d9a88 */ { u32 v = 0x8d9a88u; r_esp -= 4; W32(r_esp, v); }
    /* 005caf4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005caf54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005caf55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005caf5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005caf5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005caf62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005caf65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005caf68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005caf6b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005caf6d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005caf74: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5caf79u); f_005caba4();
    /* 005caf79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005caf7a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005caf7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005caf7f: je 0x5cafa1 */ if (fZ) goto L_005cafa1;
L_005caf81:; BB(0x005caf81);
    /* 005caf81: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005caf88: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005caf8f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005caf92: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005caf95: call 0x5cafb0 */ r_esp -= 4; W32(r_esp, 0x5caf9au); f_005cafb0();
    /* 005caf9a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005cafa1:; BB(0x005cafa1);
    /* 005cafa1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cafa4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cafab: mov esp, ebp */ r_esp = r_ebp;
    /* 005cafad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cafae: ret  */ FN_RET(0x005caf44); r_esp += 4; return;
}

void f_005cafb0(void) /* sub_5CAFB0 */
{
    FN_ENTER(0x005cafb0);
    /* 005cafb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cafb1: mov ebp, esp */ r_ebp = r_esp;
    /* 005cafb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cafb5: push 0x8d9aa4 */ { u32 v = 0x8d9aa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cafba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cafc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cafc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cafc8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cafcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cafce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cafd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cafd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cafd7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cafda: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cafdd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cafe2u); f_008193cc();
    /* 005cafe2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cafe9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cafec: mov dword ptr [eax], 0xb0c3f0 */ W32((u32)(r_eax), 0xb0c3f0u);
    /* 005caff2: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005caff7: mov ecx, dword ptr [0xa8d8e8] */ r_ecx = R32((u32)(0xa8d8e8u));
    /* 005caffd: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 005cb007: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 005cb00a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 005cb00d: lea esi, [ebp - 0x24] */ r_esi = (u32)(r_ebp+0xffffffdcu);
    /* 005cb010: lea ebx, [ebp - 0x28] */ r_ebx = (u32)(r_ebp+0xffffffd8u);
    /* 005cb013: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cb014: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 005cb017: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 005cb01a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cb01b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005cb01d: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 005cb020: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 005cb023: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 005cb026: mov dword ptr [ecx + 0x4c], edx */ W32((u32)(r_ecx+0x4cu), r_edx);
    /* 005cb029: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 005cb02c: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 005cb02f: mov dword ptr [ecx + 0x58], edx */ W32((u32)(r_ecx+0x58u), r_edx);
    /* 005cb032: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 005cb035: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 005cb038: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 005cb03b: mov dword ptr [ecx + 0x68], edx */ W32((u32)(r_ecx+0x68u), r_edx);
    /* 005cb03e: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 005cb041: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 005cb044: mov dword ptr [ecx + 0x74], edx */ W32((u32)(r_ecx+0x74u), r_edx);
    /* 005cb047: mov dword ptr [ecx + 0x78], edx */ W32((u32)(r_ecx+0x78u), r_edx);
    /* 005cb04a: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 005cb04d: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 005cb053: mov dword ptr [ecx + 0x84], edx */ W32((u32)(r_ecx+0x84u), r_edx);
    /* 005cb059: mov dword ptr [ecx + 0x88], edx */ W32((u32)(r_ecx+0x88u), r_edx);
    /* 005cb05f: mov dword ptr [ecx + 0x8c], edx */ W32((u32)(r_ecx+0x8cu), r_edx);
    /* 005cb065: mov dword ptr [ecx + 0x90], edx */ W32((u32)(r_ecx+0x90u), r_edx);
    /* 005cb06b: mov dword ptr [ecx + 0x94], edx */ W32((u32)(r_ecx+0x94u), r_edx);
    /* 005cb071: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 005cb077: mov dword ptr [ecx + 0x9c], edx */ W32((u32)(r_ecx+0x9cu), r_edx);
    /* 005cb07d: mov dword ptr [ecx + 0xa0], edx */ W32((u32)(r_ecx+0xa0u), r_edx);
    /* 005cb083: mov dword ptr [ecx + 0xa4], edx */ W32((u32)(r_ecx+0xa4u), r_edx);
    /* 005cb089: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 005cb08f: mov dword ptr [ecx + 0xac], edx */ W32((u32)(r_ecx+0xacu), r_edx);
    /* 005cb095: call 0x5d7a2c */ r_esp -= 4; W32(r_esp, 0x5cb09au); f_005d7a2c();
    /* 005cb09a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cb09d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cb0a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cb0a2: je 0x5cb0ad */ if (fZ) goto L_005cb0ad;
L_005cb0a4:; BB(0x005cb0a4);
    /* 005cb0a4: push dword ptr [eax + 0x2c] */ { u32 v = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cb0a7: call 0x81a6b0 */ r_esp -= 4; W32(r_esp, 0x5cb0acu); f_0081a6b0();
    /* 005cb0ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005cb0ad:; BB(0x005cb0ad);
    /* 005cb0ad: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cb0b0: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cb0b3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cb0b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cb0b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cb0c0: mov esp, ebp */ r_esp = r_ebp;
    /* 005cb0c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cb0c3: ret 4 */ FN_RET(0x005cafb0); r_esp += 8; return;
}

