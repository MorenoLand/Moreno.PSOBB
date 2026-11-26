#include "protos.h"

void f_008baa60(void) /* ?sse_SinCos4@@YAXQBMQAM1@Z */
{
    FN_ENTER(0x008baa60);
    /* 008baa60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008baa61: mov ebp, esp */ r_ebp = r_esp;
    /* 008baa63: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008baa66: movaps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0] = s; }
    /* 008baa69: lea esi, [esi] */ r_esi = (u32)(r_esi);
    /* 008baa6c: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008baa6f: movaps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6] = s; }
    /* 008baa72: andps xmm0, xmmword ptr [0xa36640] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36640u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008baa79: andps xmm1, xmmword ptr [0xa36630] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36630u), 16); xmm[1].q[0] = xmm[1].q[0] & s.q[0]; xmm[1].q[1] = xmm[1].q[1] & s.q[1]; }
    /* 008baa80: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008baa83: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008baa86: mulps xmm0, xmmword ptr [0xa36620] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36620u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008baa8d: movaps xmm4, xmmword ptr [0xa36610] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36610u), 16); xmm[4] = s; }
    /* 008baa94: movaps xmm5, xmmword ptr [0xa36600] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36600u), 16); xmm[5] = s; }
    /* 008baa9b: mov edx, esp */ r_edx = r_esp;
    /* 008baa9d: add edx, -0x40 */ {  u32 a = r_edx; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008baaa0: and edx, 0xfffffff0 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008baaa3: movaps xmm6, xmmword ptr [0xa365f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365f0u), 16); xmm[6] = s; }
    /* 008baaaa: movaps xmm7, xmmword ptr [0xa365e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365e0u), 16); xmm[7] = s; }
    /* 008baab1: addps xmm0, xmmword ptr [0xa365d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365d0u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008baab8: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008baabb: subps xmm0, xmmword ptr [0xa365d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365d0u), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008baac2: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008baac5: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008baac8: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008baacb: mulps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008baace: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008baad1: subps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008baad4: movaps xmm5, xmmword ptr [0xa365c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365c0u), 16); xmm[5] = s; }
    /* 008baadb: subps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008baade: movaps xmm6, xmmword ptr [0xa365b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365b0u), 16); xmm[6] = s; }
    /* 008baae5: subps xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008baae8: movaps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4] = s; }
    /* 008baaeb: mulps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008baaee: andps xmm3, xmmword ptr [0xa365a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa365a0u), 16); xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008baaf5: movaps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0] = s; }
    /* 008baaf8: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008baafb: andps xmm0, xmmword ptr [0xa36590] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36590u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008bab02: movaps xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 008bab05: movaps xmmword ptr [edx + 0x10], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x10u), &xmm[3], 16);
    /* 008bab09: movaps xmmword ptr [edx + 0x20], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edx+0x20u), &xmm[7], 16);
    /* 008bab0d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 008bab10: sub eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bab12: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab18: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab1b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 008bab1e: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 008bab21: sub eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bab24: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab2a: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab2d: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008bab30: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008bab33: sub eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bab36: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab3c: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab3f: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 008bab42: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 008bab45: sub eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bab48: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab4e: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab51: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 008bab54: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 008bab57: add eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bab59: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab5f: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab62: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 008bab65: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 008bab68: add eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bab6b: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab71: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab74: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 008bab77: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 008bab7a: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bab7d: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008bab83: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab86: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 008bab89: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 008bab8c: add eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bab8f: and eax, dword ptr [0xa36580] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa36580u)); u32 r = (a & b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008bab95: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bab98: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 008bab9b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 008bab9d: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008baba0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008baba2: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 008baba5: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008baba8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008babab: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 008babae: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008babb1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008babb4: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 008babb7: shl eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r; fC = (c <= 32) ? ((a >> (32 - c)) & 1) : 0; fO = ((r >> 31) & 1) ^ fC; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008babba: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008babbd: movaps xmm3, xmmword ptr [edx + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+0x10u), 16); xmm[3] = s; }
    /* 008babc1: movaps xmm7, xmmword ptr [edx + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+0x20u), 16); xmm[7] = s; }
    /* 008babc5: movaps xmm0, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[0] = s; }
    /* 008babc8: xorps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008babcb: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008babce: cmpneqps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].d[0] = (!(xmm[0].fs[0] == s.fs[0])) ? 0xffffffffu : 0; xmm[0].d[1] = (!(xmm[0].fs[1] == s.fs[1])) ? 0xffffffffu : 0; xmm[0].d[2] = (!(xmm[0].fs[2] == s.fs[2])) ? 0xffffffffu : 0; xmm[0].d[3] = (!(xmm[0].fs[3] == s.fs[3])) ? 0xffffffffu : 0; }
    /* 008babd2: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008babd5: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008babd8: addps xmm5, xmmword ptr [0xa36570] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36570u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008babdf: addps xmm6, xmmword ptr [0xa36560] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36560u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008babe6: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008babe9: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008babec: addps xmm5, xmmword ptr [0xa36550] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36550u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008babf3: addps xmm6, xmmword ptr [0xa36540] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36540u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008babfa: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008babfd: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bac00: addps xmm5, xmmword ptr [0xa36530] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36530u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bac07: addps xmm6, xmmword ptr [0xa36520] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36520u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bac0e: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bac11: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bac14: addps xmm6, xmmword ptr [0xa36510] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36510u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bac1b: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008bac1e: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bac21: andnps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].q[0] = ~xmm[1].q[0] & s.q[0]; xmm[1].q[1] = ~xmm[1].q[1] & s.q[1]; }
    /* 008bac24: andps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 008bac27: orps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].q[0] = xmm[1].q[0] | s.q[0]; xmm[1].q[1] = xmm[1].q[1] | s.q[1]; }
    /* 008bac2a: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bac2d: andps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008bac30: andnps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].q[0] = ~xmm[2].q[0] & s.q[0]; xmm[2].q[1] = ~xmm[2].q[1] & s.q[1]; }
    /* 008bac33: orps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008bac36: xorps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008bac39: xorps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008bac3c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bac3f: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008bac42: movaps xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008bac45: movaps xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 008bac48: mov esp, ebp */ r_esp = r_ebp;
    /* 008bac4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008bac4b: ret  */ FN_RET(0x008baa60); r_esp += 4; return;
}

void f_008bac50(void) /* ?sse2_sincos@@YG_K_K@Z */
{
    FN_ENTER(0x008bac50);
    /* 008bac50: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008bac53: pand xmm0, xmmword ptr [0xa36720] */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0xa36720u)); MM64 r; r.q = a.q & b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0xa36720u)); MM64 r; r.q = a.q & b.q; xmm[0].q[1] = r.q; }
    /* 008bac5b: pand xmm1, xmmword ptr [0xa36710] */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0xa36710u)); MM64 r; r.q = a.q & b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0xa36710u)); MM64 r; r.q = a.q & b.q; xmm[1].q[1] = r.q; }
    /* 008bac63: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bac66: mulps xmm0, xmmword ptr [0xa36700] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36700u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008bac6d: movaps xmm4, xmmword ptr [0xa366f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366f0u), 16); xmm[4] = s; }
    /* 008bac74: addps xmm0, xmmword ptr [0xa366e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366e0u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008bac7b: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008bac7e: subps xmm0, xmmword ptr [0xa366e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366e0u), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008bac85: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008bac88: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008bac8b: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008bac8f: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008bac92: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008bac96: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008bac99: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008bac9d: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008baca0: movaps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4] = s; }
    /* 008baca3: mulps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008baca6: andps xmm3, xmmword ptr [0xa366d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366d0u), 16); xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008bacad: movaps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0] = s; }
    /* 008bacb0: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008bacb3: andps xmm0, xmmword ptr [0xa366c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366c0u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008bacba: psubd xmm3, xmm0 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[3].q[1] = r.q; }
    /* 008bacbe: paddd xmm7, xmm0 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; xmm[7].q[1] = r.q; }
    /* 008bacc2: pand xmm3, xmmword ptr [0xa366b0] */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0xa366b0u)); MM64 r; r.q = a.q & b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0xa366b0u)); MM64 r; r.q = a.q & b.q; xmm[3].q[1] = r.q; }
    /* 008bacca: pand xmm7, xmmword ptr [0xa366b0] */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0xa366b0u)); MM64 r; r.q = a.q & b.q; xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0xa366b0u)); MM64 r; r.q = a.q & b.q; xmm[7].q[1] = r.q; }
    /* 008bacd2: pslld xmm3, 0x1e */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[3].q[1] = r.q; }
    /* 008bacd7: pslld xmm7, 0x1e */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[7].q[1] = r.q; }
    /* 008bacdc: pxor xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[1] = r.q; }
    /* 008bace0: pslld xmm0, 0x1e */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[0].q[1] = r.q; }
    /* 008bace5: pxor xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[1] = r.q; }
    /* 008bace9: cmpneqps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].d[0] = (!(xmm[0].fs[0] == s.fs[0])) ? 0xffffffffu : 0; xmm[0].d[1] = (!(xmm[0].fs[1] == s.fs[1])) ? 0xffffffffu : 0; xmm[0].d[2] = (!(xmm[0].fs[2] == s.fs[2])) ? 0xffffffffu : 0; xmm[0].d[3] = (!(xmm[0].fs[3] == s.fs[3])) ? 0xffffffffu : 0; }
    /* 008baced: movaps xmm5, xmmword ptr [0xa366a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa366a0u), 16); xmm[5] = s; }
    /* 008bacf4: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bacf7: addps xmm5, xmmword ptr [0xa36690] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36690u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bacfe: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bad01: addps xmm5, xmmword ptr [0xa36680] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36680u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bad08: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bad0b: addps xmm5, xmmword ptr [0xa36670] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36670u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bad12: unpcklps xmm2, xmm4 */ { XMM s = xmm[4]; u32 a0 = xmm[2].d[0], a1 = xmm[2].d[1]; xmm[2].d[0] = a0; xmm[2].d[1] = s.d[0]; xmm[2].d[2] = a1; xmm[2].d[3] = s.d[1]; }
    /* 008bad15: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bad18: addps xmm5, xmmword ptr [0xa36660] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36660u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bad1f: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bad22: andps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008bad25: andnps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].q[0] = ~xmm[2].q[0] & s.q[0]; xmm[2].q[1] = ~xmm[2].q[1] & s.q[1]; }
    /* 008bad28: shufps xmm2, xmm2, 0xb1 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008bad2c: orps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008bad2f: unpcklps xmm7, xmm3 */ { XMM s = xmm[3]; u32 a0 = xmm[7].d[0], a1 = xmm[7].d[1]; xmm[7].d[0] = a0; xmm[7].d[1] = s.d[0]; xmm[7].d[2] = a1; xmm[7].d[3] = s.d[1]; }
    /* 008bad32: xorps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008bad35: ret 0x10 */ FN_RET(0x008bac50); r_esp += 20; return;
}

void f_008bad40(void) /* ?sse2_SinCos4@@YAXQBMQAM1@Z */
{
    FN_ENTER(0x008bad40);
    /* 008bad40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bad41: mov ebp, esp */ r_ebp = r_esp;
    /* 008bad43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bad46: movaps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0] = s; }
    /* 008bad49: lea esi, [esi] */ r_esi = (u32)(r_esi);
    /* 008bad4c: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008bad4f: movaps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6] = s; }
    /* 008bad52: pand xmm0, xmmword ptr [0xa36860] */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0xa36860u)); MM64 r; r.q = a.q & b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0xa36860u)); MM64 r; r.q = a.q & b.q; xmm[0].q[1] = r.q; }
    /* 008bad5a: pand xmm1, xmmword ptr [0xa36850] */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = R64((u32)(0xa36850u)); MM64 r; r.q = a.q & b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = R64((u32)(0xa36850u)); MM64 r; r.q = a.q & b.q; xmm[1].q[1] = r.q; }
    /* 008bad62: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bad65: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008bad68: mulps xmm0, xmmword ptr [0xa36840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36840u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008bad6f: movaps xmm4, xmmword ptr [0xa36830] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36830u), 16); xmm[4] = s; }
    /* 008bad76: movaps xmm5, xmmword ptr [0xa36820] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36820u), 16); xmm[5] = s; }
    /* 008bad7d: movaps xmm6, xmmword ptr [0xa36810] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36810u), 16); xmm[6] = s; }
    /* 008bad84: movaps xmm7, xmmword ptr [0xa36800] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36800u), 16); xmm[7] = s; }
    /* 008bad8b: addps xmm0, xmmword ptr [0xa367f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367f0u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008bad92: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008bad95: subps xmm0, xmmword ptr [0xa367f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367f0u), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008bad9c: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008bad9f: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bada2: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bada5: mulps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008bada8: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008badab: subps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008badae: movaps xmm5, xmmword ptr [0xa367e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367e0u), 16); xmm[5] = s; }
    /* 008badb5: subps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008badb8: movaps xmm6, xmmword ptr [0xa367d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367d0u), 16); xmm[6] = s; }
    /* 008badbf: subps xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008badc2: movaps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4] = s; }
    /* 008badc5: mulps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008badc8: andps xmm3, xmmword ptr [0xa367c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367c0u), 16); xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008badcf: movaps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0] = s; }
    /* 008badd2: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008badd5: andps xmm0, xmmword ptr [0xa367b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa367b0u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008baddc: psubd xmm3, xmm0 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; xmm[3].q[1] = r.q; }
    /* 008bade0: paddd xmm7, xmm0 */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; xmm[7].q[1] = r.q; }
    /* 008bade4: pand xmm3, xmmword ptr [0xa367a0] */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0xa367a0u)); MM64 r; r.q = a.q & b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0xa367a0u)); MM64 r; r.q = a.q & b.q; xmm[3].q[1] = r.q; }
    /* 008badec: pand xmm7, xmmword ptr [0xa367a0] */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0xa367a0u)); MM64 r; r.q = a.q & b.q; xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0xa367a0u)); MM64 r; r.q = a.q & b.q; xmm[7].q[1] = r.q; }
    /* 008badf4: pslld xmm3, 0x1e */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[3].q[1] = r.q; }
    /* 008badf9: pslld xmm7, 0x1e */ { MM64 a; a.q = xmm[7].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[7].q[0] = r.q; } { MM64 a; a.q = xmm[7].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[7].q[1] = r.q; }
    /* 008badfe: pxor xmm3, xmm1 */ { MM64 a; a.q = xmm[3].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[0] = r.q; } { MM64 a; a.q = xmm[3].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[3].q[1] = r.q; }
    /* 008bae02: pslld xmm0, 0x1e */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1eu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); xmm[0].q[1] = r.q; }
    /* 008bae07: pxor xmm1, xmm1 */ { MM64 a; a.q = xmm[1].q[0]; MM64 b; b.q = xmm[1].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[0] = r.q; } { MM64 a; a.q = xmm[1].q[1]; MM64 b; b.q = xmm[1].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[1].q[1] = r.q; }
    /* 008bae0b: cmpneqps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].d[0] = (!(xmm[0].fs[0] == s.fs[0])) ? 0xffffffffu : 0; xmm[0].d[1] = (!(xmm[0].fs[1] == s.fs[1])) ? 0xffffffffu : 0; xmm[0].d[2] = (!(xmm[0].fs[2] == s.fs[2])) ? 0xffffffffu : 0; xmm[0].d[3] = (!(xmm[0].fs[3] == s.fs[3])) ? 0xffffffffu : 0; }
    /* 008bae0f: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bae12: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bae15: addps xmm5, xmmword ptr [0xa36790] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36790u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bae1c: addps xmm6, xmmword ptr [0xa36780] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36780u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bae23: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bae26: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bae29: addps xmm5, xmmword ptr [0xa36770] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36770u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bae30: addps xmm6, xmmword ptr [0xa36760] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36760u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bae37: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bae3a: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bae3d: addps xmm5, xmmword ptr [0xa36750] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36750u), 16); xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008bae44: addps xmm6, xmmword ptr [0xa36740] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36740u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bae4b: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008bae4e: mulps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008bae51: addps xmm6, xmmword ptr [0xa36730] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36730u), 16); xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008bae58: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008bae5b: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bae5e: andnps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].q[0] = ~xmm[1].q[0] & s.q[0]; xmm[1].q[1] = ~xmm[1].q[1] & s.q[1]; }
    /* 008bae61: andps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].q[0] = xmm[2].q[0] & s.q[0]; xmm[2].q[1] = xmm[2].q[1] & s.q[1]; }
    /* 008bae64: orps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].q[0] = xmm[1].q[0] | s.q[0]; xmm[1].q[1] = xmm[1].q[1] | s.q[1]; }
    /* 008bae67: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008bae6a: andps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008bae6d: andnps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].q[0] = ~xmm[2].q[0] & s.q[0]; xmm[2].q[1] = ~xmm[2].q[1] & s.q[1]; }
    /* 008bae70: orps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].q[0] = xmm[0].q[0] | s.q[0]; xmm[0].q[1] = xmm[0].q[1] | s.q[1]; }
    /* 008bae73: xorps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008bae76: xorps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008bae79: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bae7c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008bae7f: movaps xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008bae82: movaps xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 008bae85: mov esp, ebp */ r_esp = r_ebp;
    /* 008bae87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008bae88: ret  */ FN_RET(0x008bad40); r_esp += 4; return;
}

