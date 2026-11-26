#include "protos.h"

void f_008acd80(void) /* sub_8ACD80 */
{
    FN_ENTER(0x008acd80);
    /* 008acd80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008acd81: mov ebp, esp */ r_ebp = r_esp;
    /* 008acd83: sub esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008acd86: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008acd89: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008acd8c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008acd8f: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008acd92: movlps xmm1, qword ptr [eax] */ xmm[1].q[0] = R64((u32)(r_eax));
    /* 008acd95: movhps xmm1, qword ptr [eax + 8] */ xmm[1].q[1] = R64((u32)(r_eax+0x8u));
    /* 008acd99: movlps xmm0, qword ptr [ebx] */ xmm[0].q[0] = R64((u32)(r_ebx));
    /* 008acd9c: movhps xmm0, qword ptr [ebx + 8] */ xmm[0].q[1] = R64((u32)(r_ebx+0x8u));
    /* 008acda0: movaps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2] = s; }
    /* 008acda3: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acda7: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acdaa: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008acdad: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008acdb1: shufps xmm0, xmm0, 0x1b */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acdb5: xorps xmm2, xmmword ptr [0xb489c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb489c0u), 16); xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008acdbc: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008acdbf: addps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acdc2: movaps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2] = s; }
    /* 008acdc5: shufps xmm3, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acdc9: shufps xmm0, xmm0, 0xb1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acdcd: xorps xmm3, xmmword ptr [0xb489b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb489b0u), 16); xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008acdd4: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acdd7: addps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acdda: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008acdde: shufps xmm0, xmm0, 0x1b */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acde2: xorps xmm2, xmmword ptr [0xb489a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb489a0u), 16); xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008acde9: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008acdec: addps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acdef: movlps qword ptr [edx], xmm1 */ W64((u32)(r_edx), xmm[1].q[0]);
    /* 008acdf2: movhps qword ptr [edx + 8], xmm1 */ W64((u32)(r_edx+0x8u), xmm[1].q[1]);
    /* 008acdf6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008acdf9: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008acdfc: mov esp, ebp */ r_esp = r_ebp;
    /* 008acdfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008acdff: ret 0xc */ FN_RET(0x008acd80); r_esp += 16; return;
}

void f_008acee2(void)
{
    FN_ENTER(0x008acee2);
    /* 008acee2: or eax, 0xa361c0 */ {  u32 a = r_eax; u32 b = 0xa361c0u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008acee7: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008aceea: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008aceee: addss xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acef2: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008acef5: rcpss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / s.fs[0]; }
    /* 008acef9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008acefc: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008aceff: mulss xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acf03: mulss xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acf07: addss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008acf0b: subss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008acf0f: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acf13: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acf16: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008acf19: mov esp, ebx */ r_esp = r_ebx;
    /* 008acf1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acf1c: ret 8 */ FN_RET(0x008acee2); r_esp += 12; return;
}

