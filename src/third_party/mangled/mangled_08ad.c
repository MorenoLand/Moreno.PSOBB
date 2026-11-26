#include "protos.h"

void f_008ad040(void) /* ?sse2_D3DXQuaternionRotationYawPitchRoll@@YGPAUD3DXQUATERNION@@PAU1@MMM@Z */
{
    FN_ENTER(0x008ad040);
    /* 008ad040: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad041: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad043: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad046: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad049: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad04c: jmp 0x8ad051 */ goto L_008ad051;
L_008ad051:; BB(0x008ad051);
    /* 008ad051: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad054: movss xmm0, dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad059: movss xmm1, dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad05e: movss xmm2, dword ptr [0xb48a20] */ { u32 v = R32((u32)(0xb48a20u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad066: unpcklps xmm0, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[0].d[0], a1 = xmm[0].d[1]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[0]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[1]; }
    /* 008ad069: movss xmm1, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad06e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008ad072: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008ad076: unpcklps xmm2, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[2].d[0], a1 = xmm[2].d[1]; xmm[2].d[0] = a0; xmm[2].d[1] = s.d[0]; xmm[2].d[2] = a1; xmm[2].d[3] = s.d[1]; }
    /* 008ad079: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008ad07d: shufps xmm0, xmm2, 0x11 */ { XMM s = xmm[2]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad081: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008ad086: mulps xmm0, xmmword ptr [0xb48a10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a10u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad08d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ad090: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008ad094: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008ad099: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008ad09d: call 0x8baa60 */ r_esp -= 4; W32(r_esp, 0x8ad0a2u); f_008baa60();
    /* 008ad0a2: movaps xmm0, xmmword ptr [esp + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x10u), 16); xmm[0] = s; }
    /* 008ad0a7: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008ad0ac: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad0af: shufps xmm0, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0b3: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0b7: shufps xmm2, xmm1, 0x99 */ { XMM s = xmm[1]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0bb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad0be: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0c2: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad0c5: shufps xmm2, xmm2, 0xf7 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0c9: shufps xmm3, xmm3, 0xa8 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad0cd: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad0d0: shufps xmm2, xmm2, 0x51 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0d4: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad0d7: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad0da: shufps xmm3, xmm3, 1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad0de: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad0e1: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad0e6: xorps xmm0, xmmword ptr [0xb48a00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a00u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad0ed: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad0f0: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad0f5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad0f8: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ad0fb: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad0fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad0fe: ret 0x10 */ FN_RET(0x008ad040); r_esp += 20; return;
}

void f_008ad04e(void) /* ?sse2_D3DXQuaternionRotationYawPitchRoll$$1@@YGPAUD3DXQUATERNION@@PAU1@MMM@Z */
{
    FN_ENTER(0x008ad04e);
    /* 008ad04e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad04f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad051: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad054: movss xmm0, dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad059: movss xmm1, dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad05e: movss xmm2, dword ptr [0xb48a20] */ { u32 v = R32((u32)(0xb48a20u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad066: unpcklps xmm0, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[0].d[0], a1 = xmm[0].d[1]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[0]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[1]; }
    /* 008ad069: movss xmm1, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad06e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008ad072: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008ad076: unpcklps xmm2, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[2].d[0], a1 = xmm[2].d[1]; xmm[2].d[0] = a0; xmm[2].d[1] = s.d[0]; xmm[2].d[2] = a1; xmm[2].d[3] = s.d[1]; }
    /* 008ad079: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008ad07d: shufps xmm0, xmm2, 0x11 */ { XMM s = xmm[2]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad081: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008ad086: mulps xmm0, xmmword ptr [0xb48a10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a10u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad08d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ad090: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008ad094: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008ad099: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008ad09d: call 0x8baa60 */ r_esp -= 4; W32(r_esp, 0x8ad0a2u); f_008baa60();
    /* 008ad0a2: movaps xmm0, xmmword ptr [esp + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x10u), 16); xmm[0] = s; }
    /* 008ad0a7: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008ad0ac: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad0af: shufps xmm0, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0b3: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0b7: shufps xmm2, xmm1, 0x99 */ { XMM s = xmm[1]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0bb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad0be: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad0c2: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad0c5: shufps xmm2, xmm2, 0xf7 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0c9: shufps xmm3, xmm3, 0xa8 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad0cd: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad0d0: shufps xmm2, xmm2, 0x51 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad0d4: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad0d7: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad0da: shufps xmm3, xmm3, 1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad0de: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad0e1: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad0e6: xorps xmm0, xmmword ptr [0xb48a00] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a00u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad0ed: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad0f0: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad0f5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad0f8: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ad0fb: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad0fd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad0fe: ret 0x10 */ FN_RET(0x008ad04e); r_esp += 20; return;
}

void f_008ad110(void) /* ?sse2_D3DXVec3TransformNormal@@YGPAUD3DXVECTOR3@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad110);
    /* 008ad110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad111: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad113: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad116: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad119: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad11c: jmp 0x8ad121 */ goto L_008ad121;
L_008ad121:; BB(0x008ad121);
    /* 008ad121: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad124: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad127: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ad12a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008ad12d: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad12f: jne 0x8ad16f */ if (!fZ) goto L_008ad16f;
L_008ad131:; BB(0x008ad131);
    /* 008ad131: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad136: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad139: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad13d: movlps xmm0, qword ptr [ecx] */ xmm[0].q[0] = R64((u32)(r_ecx));
    /* 008ad140: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad144: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad147: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad14b: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad14f: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad152: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad156: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad159: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad15c: movlps qword ptr [edx], xmm0 */ W64((u32)(r_edx), xmm[0].q[0]);
    /* 008ad15f: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008ad162: movss dword ptr [edx + 8], xmm0 */ W32((u32)(r_edx+0x8u), xmm[0].d[0]);
    /* 008ad167: mov eax, edx */ r_eax = r_edx;
    /* 008ad169: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad16b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad16c: ret 0xc */ FN_RET(0x008ad110); r_esp += 16; return;
L_008ad16f:; BB(0x008ad16f);
    /* 008ad16f: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008ad172: movlps xmm3, qword ptr [eax] */ xmm[3].q[0] = R64((u32)(r_eax));
    /* 008ad175: movlps xmm1, qword ptr [ecx] */ xmm[1].q[0] = R64((u32)(r_ecx));
    /* 008ad178: movhps xmm3, qword ptr [eax + 8] */ xmm[3].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad17c: movlps xmm2, qword ptr [eax + 0x10] */ xmm[2].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad180: movss xmm4, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad185: movhps xmm2, qword ptr [eax + 0x18] */ xmm[2].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad189: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad18d: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 008ad190: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad194: shufps xmm5, xmm5, 0x55 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad198: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad19b: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad19e: movlps xmm0, qword ptr [eax + 0x20] */ xmm[0].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad1a2: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad1a5: movhps xmm0, qword ptr [eax + 0x28] */ xmm[0].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad1a9: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad1ac: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad1af: movlps qword ptr [edx], xmm3 */ W64((u32)(r_edx), xmm[3].q[0]);
    /* 008ad1b2: movhlps xmm3, xmm3 */ xmm[3].q[0] = xmm[3].q[1];
    /* 008ad1b5: movss dword ptr [edx + 8], xmm3 */ W32((u32)(r_edx+0x8u), xmm[3].d[0]);
    /* 008ad1ba: mov eax, edx */ r_eax = r_edx;
    /* 008ad1bc: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad1be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad1bf: ret 0xc */ FN_RET(0x008ad110); r_esp += 16; return;
}

void f_008ad11e(void) /* ?sse2_D3DXVec3TransformNormal$$1@@YGPAUD3DXVECTOR3@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad11e);
    /* 008ad11e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad11f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad121: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad124: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad127: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ad12a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008ad12d: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad12f: jne 0x8ad16f */ if (!fZ) goto L_008ad16f;
L_008ad131:; BB(0x008ad131);
    /* 008ad131: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad136: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad139: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad13d: movlps xmm0, qword ptr [ecx] */ xmm[0].q[0] = R64((u32)(r_ecx));
    /* 008ad140: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad144: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad147: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad14b: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad14f: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad152: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad156: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad159: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad15c: movlps qword ptr [edx], xmm0 */ W64((u32)(r_edx), xmm[0].q[0]);
    /* 008ad15f: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008ad162: movss dword ptr [edx + 8], xmm0 */ W32((u32)(r_edx+0x8u), xmm[0].d[0]);
    /* 008ad167: mov eax, edx */ r_eax = r_edx;
    /* 008ad169: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad16b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad16c: ret 0xc */ FN_RET(0x008ad11e); r_esp += 16; return;
L_008ad16f:; BB(0x008ad16f);
    /* 008ad16f: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008ad172: movlps xmm3, qword ptr [eax] */ xmm[3].q[0] = R64((u32)(r_eax));
    /* 008ad175: movlps xmm1, qword ptr [ecx] */ xmm[1].q[0] = R64((u32)(r_ecx));
    /* 008ad178: movhps xmm3, qword ptr [eax + 8] */ xmm[3].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad17c: movlps xmm2, qword ptr [eax + 0x10] */ xmm[2].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad180: movss xmm4, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad185: movhps xmm2, qword ptr [eax + 0x18] */ xmm[2].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad189: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad18d: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 008ad190: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad194: shufps xmm5, xmm5, 0x55 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad198: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad19b: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad19e: movlps xmm0, qword ptr [eax + 0x20] */ xmm[0].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad1a2: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad1a5: movhps xmm0, qword ptr [eax + 0x28] */ xmm[0].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad1a9: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad1ac: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad1af: movlps qword ptr [edx], xmm3 */ W64((u32)(r_edx), xmm[3].q[0]);
    /* 008ad1b2: movhlps xmm3, xmm3 */ xmm[3].q[0] = xmm[3].q[1];
    /* 008ad1b5: movss dword ptr [edx + 8], xmm3 */ W32((u32)(r_edx+0x8u), xmm[3].d[0]);
    /* 008ad1ba: mov eax, edx */ r_eax = r_edx;
    /* 008ad1bc: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad1be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad1bf: ret 0xc */ FN_RET(0x008ad11e); r_esp += 16; return;
}

void f_008ad1d0(void) /* ?sse2_D3DXVec3Transform@@YGPAUD3DXVECTOR4@@PAU1@PBUD3DXVECTOR3@@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad1d0);
    /* 008ad1d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad1d1: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad1d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad1d6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad1d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad1dc: jmp 0x8ad1e1 */ goto L_008ad1e1;
L_008ad1e1:; BB(0x008ad1e1);
    /* 008ad1e1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad1e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad1e7: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad1ea: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008ad1ed: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad1ef: jne 0x8ad22b */ if (!fZ) goto L_008ad22b;
L_008ad1f1:; BB(0x008ad1f1);
    /* 008ad1f1: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad1f4: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ad1f7: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad1fc: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad200: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad204: addps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad208: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad20b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad20f: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad212: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad216: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad21a: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad21d: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad220: movups xmmword ptr [ecx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[0], 16);
    /* 008ad223: mov eax, ecx */ r_eax = r_ecx;
    /* 008ad225: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad227: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad228: ret 0xc */ FN_RET(0x008ad1d0); r_esp += 16; return;
L_008ad22b:; BB(0x008ad22b);
    /* 008ad22b: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008ad22e: movlps xmm2, qword ptr [edx] */ xmm[2].q[0] = R64((u32)(r_edx));
    /* 008ad231: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008ad234: movhps xmm4, qword ptr [eax + 8] */ xmm[4].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad238: movlps xmm3, qword ptr [eax + 0x10] */ xmm[3].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad23c: movhps xmm3, qword ptr [eax + 0x18] */ xmm[3].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad240: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad245: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad249: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ad24c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad250: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad253: shufps xmm6, xmm6, 0x55 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad257: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad25a: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad25d: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad261: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad265: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad268: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ad26c: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad270: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad273: addps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad276: movups xmmword ptr [ecx], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[4], 16);
    /* 008ad279: mov eax, ecx */ r_eax = r_ecx;
    /* 008ad27b: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad27d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad27e: ret 0xc */ FN_RET(0x008ad1d0); r_esp += 16; return;
}

void f_008ad1de(void) /* ?sse2_D3DXVec3Transform$$1@@YGPAUD3DXVECTOR4@@PAU1@PBUD3DXVECTOR3@@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad1de);
    /* 008ad1de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad1df: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad1e1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad1e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad1e7: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad1ea: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 008ad1ed: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad1ef: jne 0x8ad22b */ if (!fZ) goto L_008ad22b;
L_008ad1f1:; BB(0x008ad1f1);
    /* 008ad1f1: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad1f4: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ad1f7: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad1fc: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad200: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad204: addps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad208: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad20b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad20f: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad212: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad216: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad21a: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad21d: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad220: movups xmmword ptr [ecx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[0], 16);
    /* 008ad223: mov eax, ecx */ r_eax = r_ecx;
    /* 008ad225: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad227: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad228: ret 0xc */ FN_RET(0x008ad1de); r_esp += 16; return;
L_008ad22b:; BB(0x008ad22b);
    /* 008ad22b: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008ad22e: movlps xmm2, qword ptr [edx] */ xmm[2].q[0] = R64((u32)(r_edx));
    /* 008ad231: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008ad234: movhps xmm4, qword ptr [eax + 8] */ xmm[4].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad238: movlps xmm3, qword ptr [eax + 0x10] */ xmm[3].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad23c: movhps xmm3, qword ptr [eax + 0x18] */ xmm[3].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad240: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad245: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad249: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ad24c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad250: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad253: shufps xmm6, xmm6, 0x55 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad257: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad25a: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad25d: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad261: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad265: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad268: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ad26c: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad270: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad273: addps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad276: movups xmmword ptr [ecx], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[4], 16);
    /* 008ad279: mov eax, ecx */ r_eax = r_ecx;
    /* 008ad27b: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad27d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad27e: ret 0xc */ FN_RET(0x008ad1de); r_esp += 16; return;
}

void f_008ad290(void) /* ?sse2_D3DXVec4Transform@@YGPAUD3DXVECTOR4@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad290);
    /* 008ad290: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad291: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad293: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad296: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad299: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad29c: jmp 0x8ad2a1 */ goto L_008ad2a1;
L_008ad2a1:; BB(0x008ad2a1);
    /* 008ad2a1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad2a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad2a7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ad2aa: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008ad2ad: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad2af: jne 0x8ad2f0 */ if (!fZ) goto L_008ad2f0;
L_008ad2b1:; BB(0x008ad2b1);
    /* 008ad2b1: movups xmm0, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[0] = s; }
    /* 008ad2b4: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad2b7: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad2bb: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad2be: movaps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2] = s; }
    /* 008ad2c1: shufps xmm1, xmm1, 0x55 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad2c5: mulps xmm1, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad2c9: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad2cc: movaps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1] = s; }
    /* 008ad2cf: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad2d3: mulps xmm2, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad2d7: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad2db: mulps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad2df: addps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ad2e2: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad2e5: movups xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 008ad2e8: mov eax, edx */ r_eax = r_edx;
    /* 008ad2ea: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad2ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad2ed: ret 0xc */ FN_RET(0x008ad290); r_esp += 16; return;
L_008ad2f0:; BB(0x008ad2f0);
    /* 008ad2f0: movups xmm4, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[4] = s; }
    /* 008ad2f3: movlps xmm3, qword ptr [eax] */ xmm[3].q[0] = R64((u32)(r_eax));
    /* 008ad2f6: movhps xmm3, qword ptr [eax + 8] */ xmm[3].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad2fa: movlps xmm2, qword ptr [eax + 0x10] */ xmm[2].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad2fe: movhps xmm2, qword ptr [eax + 0x18] */ xmm[2].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad302: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad306: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad309: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad30d: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad310: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad314: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ad318: movaps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4] = s; }
    /* 008ad31b: shufps xmm5, xmm5, 0x55 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad31f: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad322: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad325: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad329: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008ad32c: shufps xmm4, xmm4, 0xaa */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad330: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad333: shufps xmm2, xmm2, 0xff */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad337: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad33a: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad33d: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad340: movups xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 008ad343: mov eax, edx */ r_eax = r_edx;
    /* 008ad345: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad347: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad348: ret 0xc */ FN_RET(0x008ad290); r_esp += 16; return;
}

void f_008ad29e(void) /* ?sse2_D3DXVec4Transform$$1@@YGPAUD3DXVECTOR4@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ad29e);
    /* 008ad29e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad29f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad2a1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad2a4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad2a7: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008ad2aa: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008ad2ad: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad2af: jne 0x8ad2f0 */ if (!fZ) goto L_008ad2f0;
L_008ad2b1:; BB(0x008ad2b1);
    /* 008ad2b1: movups xmm0, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[0] = s; }
    /* 008ad2b4: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad2b7: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad2bb: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad2be: movaps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2] = s; }
    /* 008ad2c1: shufps xmm1, xmm1, 0x55 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad2c5: mulps xmm1, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad2c9: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad2cc: movaps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1] = s; }
    /* 008ad2cf: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad2d3: mulps xmm2, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad2d7: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad2db: mulps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad2df: addps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ad2e2: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad2e5: movups xmmword ptr [edx], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[0], 16);
    /* 008ad2e8: mov eax, edx */ r_eax = r_edx;
    /* 008ad2ea: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad2ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad2ed: ret 0xc */ FN_RET(0x008ad29e); r_esp += 16; return;
L_008ad2f0:; BB(0x008ad2f0);
    /* 008ad2f0: movups xmm4, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[4] = s; }
    /* 008ad2f3: movlps xmm3, qword ptr [eax] */ xmm[3].q[0] = R64((u32)(r_eax));
    /* 008ad2f6: movhps xmm3, qword ptr [eax + 8] */ xmm[3].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ad2fa: movlps xmm2, qword ptr [eax + 0x10] */ xmm[2].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ad2fe: movhps xmm2, qword ptr [eax + 0x18] */ xmm[2].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad302: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad306: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad309: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad30d: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad310: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ad314: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ad318: movaps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4] = s; }
    /* 008ad31b: shufps xmm5, xmm5, 0x55 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad31f: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad322: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad325: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad329: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008ad32c: shufps xmm4, xmm4, 0xaa */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad330: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad333: shufps xmm2, xmm2, 0xff */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad337: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad33a: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad33d: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad340: movups xmmword ptr [edx], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edx), &xmm[3], 16);
    /* 008ad343: mov eax, edx */ r_eax = r_edx;
    /* 008ad345: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad347: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad348: ret 0xc */ FN_RET(0x008ad29e); r_esp += 16; return;
}

void f_008ad350(void) /* ?sse2_D3DXVec3Normalize@@YGPAUD3DXVECTOR3@@PAU1@PBU1@@Z_0 */
{
    FN_ENTER(0x008ad350);
    /* 008ad350: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad351: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad353: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad356: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad359: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad35c: jmp 0x8ad361 */ goto L_008ad361;
L_008ad361:; BB(0x008ad361);
    /* 008ad361: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad364: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad367: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad36a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad36e: movss xmm6, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad373: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad378: movss xmm1, dword ptr [0xb48a40] */ { u32 v = R32((u32)(0xb48a40u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad380: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad383: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad387: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ad38a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad38e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ad392: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ad395: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad399: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ad39c: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad39f: addss xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ad3a3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad3a6: jbe 0x8ad3bf */ if ((fC||fZ)) goto L_008ad3bf;
L_008ad3a8:; BB(0x008ad3a8);
    /* 008ad3a8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad3ab: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ad3af: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ad3b4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad3b9: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad3bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad3bc: ret 8 */ FN_RET(0x008ad350); r_esp += 12; return;
L_008ad3bf:; BB(0x008ad3bf);
    /* 008ad3bf: movss xmm1, dword ptr [0xb48a48] */ { u32 v = R32((u32)(0xb48a48u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad3c7: movss xmm2, dword ptr [0xb48a44] */ { u32 v = R32((u32)(0xb48a44u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad3cf: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ad3d2: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ad3d6: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ad3da: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad3de: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ad3e2: subss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ad3e6: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad3e9: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad3ec: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad3f0: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad3f3: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad3f7: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ad3fb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad3fe: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad402: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ad407: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad40b: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad410: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad413: ret 8 */ FN_RET(0x008ad350); r_esp += 12; return;
}

void f_008ad35e(void) /* ?sse2_D3DXVec3Normalize$$1@@YGPAUD3DXVECTOR3@@PAU1@PBU1@@Z_0 */
{
    FN_ENTER(0x008ad35e);
    /* 008ad35e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad35f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad361: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad364: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad367: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad36a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad36e: movss xmm6, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad373: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad378: movss xmm1, dword ptr [0xb48a40] */ { u32 v = R32((u32)(0xb48a40u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad380: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad383: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad387: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ad38a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad38e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ad392: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ad395: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad399: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ad39c: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad39f: addss xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ad3a3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad3a6: jbe 0x8ad3bf */ if ((fC||fZ)) goto L_008ad3bf;
L_008ad3a8:; BB(0x008ad3a8);
    /* 008ad3a8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad3ab: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ad3af: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ad3b4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad3b9: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad3bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad3bc: ret 8 */ FN_RET(0x008ad35e); r_esp += 12; return;
L_008ad3bf:; BB(0x008ad3bf);
    /* 008ad3bf: movss xmm1, dword ptr [0xb48a48] */ { u32 v = R32((u32)(0xb48a48u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad3c7: movss xmm2, dword ptr [0xb48a44] */ { u32 v = R32((u32)(0xb48a44u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad3cf: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ad3d2: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ad3d6: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ad3da: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad3de: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ad3e2: subss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ad3e6: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad3e9: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad3ec: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad3f0: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad3f3: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad3f7: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ad3fb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad3fe: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad402: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ad407: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad40b: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad410: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad413: ret 8 */ FN_RET(0x008ad35e); r_esp += 12; return;
}

void f_008ad420(void) /* ?sse2_D3DXPlaneNormalize@@YGPAUD3DXPLANE@@PAU1@PBU1@@Z_0 */
{
    FN_ENTER(0x008ad420);
    /* 008ad420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad421: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad423: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad426: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad429: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad42c: jmp 0x8ad431 */ goto L_008ad431;
L_008ad431:; BB(0x008ad431);
    /* 008ad431: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad434: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad437: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad43a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad43e: movss xmm4, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad443: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad448: movss xmm1, dword ptr [0xb48a4c] */ { u32 v = R32((u32)(0xb48a4cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad450: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad453: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad457: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad45a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad45e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ad462: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ad465: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad469: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ad46c: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad46f: addss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ad473: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad476: jbe 0x8ad494 */ if ((fC||fZ)) goto L_008ad494;
L_008ad478:; BB(0x008ad478);
    /* 008ad478: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad47b: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ad47f: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ad484: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad489: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ad48e: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad491: ret 8 */ FN_RET(0x008ad420); r_esp += 12; return;
L_008ad494:; BB(0x008ad494);
    /* 008ad494: movss xmm1, dword ptr [0xb48a54] */ { u32 v = R32((u32)(0xb48a54u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad49c: movss xmm2, dword ptr [0xb48a50] */ { u32 v = R32((u32)(0xb48a50u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad4a4: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ad4a7: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ad4ab: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ad4af: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad4b3: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ad4b7: subss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ad4bb: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad4be: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad4c1: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad4c5: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4c8: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4cc: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ad4d0: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4d3: mulss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4d7: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ad4dc: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4df: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4e3: movss dword ptr [eax + 8], xmm1 */ W32((u32)(r_eax+0x8u), xmm[1].d[0]);
    /* 008ad4e8: mulss xmm0, dword ptr [edx + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad4ed: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ad4f2: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad4f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad4f5: ret 8 */ FN_RET(0x008ad420); r_esp += 12; return;
}

void f_008ad42e(void) /* ?sse2_D3DXPlaneNormalize$$1@@YGPAUD3DXPLANE@@PAU1@PBU1@@Z_0 */
{
    FN_ENTER(0x008ad42e);
    /* 008ad42e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad42f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad431: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad434: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad437: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad43a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad43e: movss xmm4, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad443: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad448: movss xmm1, dword ptr [0xb48a4c] */ { u32 v = R32((u32)(0xb48a4cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad450: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ad453: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad457: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad45a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad45e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ad462: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ad465: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad469: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ad46c: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ad46f: addss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ad473: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad476: jbe 0x8ad494 */ if ((fC||fZ)) goto L_008ad494;
L_008ad478:; BB(0x008ad478);
    /* 008ad478: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ad47b: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ad47f: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ad484: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ad489: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ad48e: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad491: ret 8 */ FN_RET(0x008ad42e); r_esp += 12; return;
L_008ad494:; BB(0x008ad494);
    /* 008ad494: movss xmm1, dword ptr [0xb48a54] */ { u32 v = R32((u32)(0xb48a54u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad49c: movss xmm2, dword ptr [0xb48a50] */ { u32 v = R32((u32)(0xb48a50u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad4a4: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ad4a7: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ad4ab: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ad4af: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ad4b3: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ad4b7: subss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ad4bb: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad4be: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad4c1: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad4c5: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4c8: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4cc: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ad4d0: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4d3: mulss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4d7: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ad4dc: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ad4df: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ad4e3: movss dword ptr [eax + 8], xmm1 */ W32((u32)(r_eax+0x8u), xmm[1].d[0]);
    /* 008ad4e8: mulss xmm0, dword ptr [edx + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad4ed: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ad4f2: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad4f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad4f5: ret 8 */ FN_RET(0x008ad42e); r_esp += 12; return;
}

void f_008ad500(void) /* ?sse2_D3DXMatrixInverse@@YGPAUD3DXMATRIX@@PAU1@PAMPBU1@@Z */
{
    FN_ENTER(0x008ad500);
    /* 008ad500: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad501: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad503: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad506: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad509: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad50c: jmp 0x8ad511 */ goto L_008ad511;
L_008ad511:; BB(0x008ad511);
    /* 008ad511: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); }
    /* 008ad517: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad51a: movlps xmm0, qword ptr [eax + 8] */ xmm[0].q[0] = R64((u32)(r_eax+0x8u));
    /* 008ad51e: movlps xmm4, qword ptr [eax + 0x28] */ xmm[4].q[0] = R64((u32)(r_eax+0x28u));
    /* 008ad522: movhps xmm0, qword ptr [eax + 0x18] */ xmm[0].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad526: movhps xmm4, qword ptr [eax + 0x38] */ xmm[4].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad52a: movlps xmm3, qword ptr [eax + 0x20] */ xmm[3].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad52e: movlps xmm1, qword ptr [eax] */ xmm[1].q[0] = R64((u32)(r_eax));
    /* 008ad531: movhps xmm3, qword ptr [eax + 0x30] */ xmm[3].q[1] = R64((u32)(r_eax+0x30u));
    /* 008ad535: movhps xmm1, qword ptr [eax + 0x10] */ xmm[1].q[1] = R64((u32)(r_eax+0x10u));
    /* 008ad539: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad53c: shufps xmm0, xmm4, 0x88 */ { XMM s = xmm[4]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad540: shufps xmm4, xmm5, 0xdd */ { XMM s = xmm[5]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[1]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad544: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad547: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad54a: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad54e: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad551: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad555: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad558: shufps xmm3, xmm1, 0xdd */ { XMM s = xmm[1]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[1]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad55c: shufps xmm1, xmm7, 0x88 */ { XMM s = xmm[7]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad560: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad563: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad566: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008ad569: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad56c: movaps xmmword ptr [esp + 0x30], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x30u), &xmm[5], 16);
    /* 008ad571: movaps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5] = s; }
    /* 008ad574: mulps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad577: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad57a: subps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008ad57d: movaps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7] = s; }
    /* 008ad580: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad583: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad587: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad58b: movaps xmmword ptr [esp + 0x40], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x40u), &xmm[6], 16);
    /* 008ad590: movaps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6] = s; }
    /* 008ad593: mulps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad596: addps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad599: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ad59c: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad5a0: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad5a3: movaps xmmword ptr [esp + 0x50], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x50u), &xmm[3], 16);
    /* 008ad5a8: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad5ab: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad5ae: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad5b1: subps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad5b4: movaps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3] = s; }
    /* 008ad5b7: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5bb: mulps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad5be: shufps xmm7, xmm7, 0xb1 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[1]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5c2: movaps xmmword ptr [esp + 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x60u), &xmm[5], 16);
    /* 008ad5c7: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad5ca: mulps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad5cd: addps xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad5d0: movaps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 008ad5d3: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5d7: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad5da: movaps xmmword ptr [esp + 0x70], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x70u), &xmm[4], 16);
    /* 008ad5df: movaps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4] = s; }
    /* 008ad5e2: mulps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad5e5: mulps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad5e8: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ad5eb: subps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad5ee: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 008ad5f1: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad5f4: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5f8: movaps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6] = s; }
    /* 008ad5fb: shufps xmm1, xmm1, 0x4e */ { XMM s = xmm[1]; u32 lo = xmm[1].d[2]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad5ff: movaps xmmword ptr [esp + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x20u), &xmm[0], 16);
    /* 008ad604: addps xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad607: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad60a: shufps xmm1, xmm1, 0xb1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad60e: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 008ad612: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad617: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008ad61a: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad61d: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad621: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad624: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad628: movaps xmmword ptr [esp + 0x80], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x80u), &xmm[4], 16);
    /* 008ad630: movaps xmm4, xmmword ptr [esp + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x70u), 16); xmm[4] = s; }
    /* 008ad635: movaps xmmword ptr [esp + 0x90], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x90u), &xmm[3], 16);
    /* 008ad63d: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad640: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad643: addps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad646: movaps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7] = s; }
    /* 008ad649: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad64c: subps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad64f: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad652: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad655: shufps xmm3, xmm3, 0xb1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad659: movaps xmmword ptr [esp + 0xa0], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xa0u), &xmm[5], 16);
    /* 008ad661: movaps xmm5, xmmword ptr [esp + 0x90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x90u), 16); xmm[5] = s; }
    /* 008ad669: movaps xmmword ptr [esp + 0xb0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xb0u), &xmm[6], 16);
    /* 008ad671: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad674: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad677: addps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad67a: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad67d: shufps xmm3, xmm3, 0x4e */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad681: movaps xmmword ptr [esp + 0xc0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xc0u), &xmm[4], 16);
    /* 008ad689: movaps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4] = s; }
    /* 008ad68c: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad68f: movaps xmmword ptr [esp + 0xd0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xd0u), &xmm[6], 16);
    /* 008ad697: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad69a: subps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad69d: movaps xmm4, xmmword ptr [esp + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x30u), 16); xmm[4] = s; }
    /* 008ad6a2: movaps xmm5, xmmword ptr [esp + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x40u), 16); xmm[5] = s; }
    /* 008ad6a7: subps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6aa: shufps xmm4, xmm4, 0x4e */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad6ae: movaps xmm5, xmmword ptr [esp + 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x80u), 16); xmm[5] = s; }
    /* 008ad6b6: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad6b9: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad6bc: subps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6bf: mulps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad6c2: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad6c5: shufps xmm0, xmm0, 0xb1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad6c9: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad6cc: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad6d0: movaps xmm7, xmmword ptr [esp + 0xc0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xc0u), 16); xmm[7] = s; }
    /* 008ad6d8: movaps xmmword ptr [esp + 0xe0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xe0u), &xmm[6], 16);
    /* 008ad6e0: movaps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 008ad6e3: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad6e6: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad6e9: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad6ec: subps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6ef: movaps xmm6, xmmword ptr [esp + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x60u), 16); xmm[6] = s; }
    /* 008ad6f4: movaps xmm7, xmmword ptr [esp + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x50u), 16); xmm[7] = s; }
    /* 008ad6f9: subps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad6fc: shufps xmm6, xmm6, 0x4e */ { XMM s = xmm[6]; u32 lo = xmm[6].d[2]; u32 lo2 = xmm[6].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad700: movaps xmm7, xmmword ptr [esp + 0xb0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xb0u), 16); xmm[7] = s; }
    /* 008ad708: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad70b: subps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad70e: movaps xmm6, xmmword ptr [esp + 0xa0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xa0u), 16); xmm[6] = s; }
    /* 008ad716: mulps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad719: subps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad71c: movaps xmm5, xmmword ptr [esp + 0xd0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xd0u), 16); xmm[5] = s; }
    /* 008ad724: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad727: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad72a: subps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad72d: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad730: movaps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2] = s; }
    /* 008ad733: addps xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ad736: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad739: movaps xmm6, xmmword ptr [esp + 0xe0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xe0u), 16); xmm[6] = s; }
    /* 008ad741: je 0x8ad7ab */ if (fZ) goto L_008ad7ab;
L_008ad743:; BB(0x008ad743);
    /* 008ad743: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008ad746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad748: je 0x8ad751 */ if (fZ) goto L_008ad751;
L_008ad74a:; BB(0x008ad74a);
    /* 008ad74a: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad74d: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
L_008ad751:; BB(0x008ad751);
    /* 008ad751: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad754: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008ad759: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad75c: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad75f: rcpss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / s.fs[0]; }
    /* 008ad763: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad766: mulss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad76a: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad76e: addss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 008ad772: subss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; }
    /* 008ad776: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad77a: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad77d: movlps qword ptr [eax], xmm1 */ W64((u32)(r_eax), xmm[1].q[0]);
    /* 008ad780: movhps qword ptr [eax + 8], xmm1 */ W64((u32)(r_eax+0x8u), xmm[1].q[1]);
    /* 008ad784: mulps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad787: movlps qword ptr [eax + 0x10], xmm4 */ W64((u32)(r_eax+0x10u), xmm[4].q[0]);
    /* 008ad78b: movhps qword ptr [eax + 0x18], xmm4 */ W64((u32)(r_eax+0x18u), xmm[4].q[1]);
    /* 008ad78f: mulps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad792: movlps qword ptr [eax + 0x20], xmm6 */ W64((u32)(r_eax+0x20u), xmm[6].q[0]);
    /* 008ad796: movhps qword ptr [eax + 0x28], xmm6 */ W64((u32)(r_eax+0x28u), xmm[6].q[1]);
    /* 008ad79a: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad79d: movlps qword ptr [eax + 0x30], xmm5 */ W64((u32)(r_eax+0x30u), xmm[5].q[0]);
    /* 008ad7a1: movhps qword ptr [eax + 0x38], xmm5 */ W64((u32)(r_eax+0x38u), xmm[5].q[1]);
    /* 008ad7a5: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad7a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad7a8: ret 0xc */ FN_RET(0x008ad500); r_esp += 16; return;
L_008ad7ab:; BB(0x008ad7ab);
    /* 008ad7ab: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad7b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad7b3: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad7b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad7b6: ret 0xc */ FN_RET(0x008ad500); r_esp += 16; return;
}

void f_008ad50e(void) /* ?sse2_D3DXMatrixInverse$$1@@YGPAUD3DXMATRIX@@PAU1@PAMPBU1@@Z */
{
    FN_ENTER(0x008ad50e);
    /* 008ad50e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad50f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad511: sub esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); }
    /* 008ad517: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008ad51a: movlps xmm0, qword ptr [eax + 8] */ xmm[0].q[0] = R64((u32)(r_eax+0x8u));
    /* 008ad51e: movlps xmm4, qword ptr [eax + 0x28] */ xmm[4].q[0] = R64((u32)(r_eax+0x28u));
    /* 008ad522: movhps xmm0, qword ptr [eax + 0x18] */ xmm[0].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ad526: movhps xmm4, qword ptr [eax + 0x38] */ xmm[4].q[1] = R64((u32)(r_eax+0x38u));
    /* 008ad52a: movlps xmm3, qword ptr [eax + 0x20] */ xmm[3].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ad52e: movlps xmm1, qword ptr [eax] */ xmm[1].q[0] = R64((u32)(r_eax));
    /* 008ad531: movhps xmm3, qword ptr [eax + 0x30] */ xmm[3].q[1] = R64((u32)(r_eax+0x30u));
    /* 008ad535: movhps xmm1, qword ptr [eax + 0x10] */ xmm[1].q[1] = R64((u32)(r_eax+0x10u));
    /* 008ad539: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad53c: shufps xmm0, xmm4, 0x88 */ { XMM s = xmm[4]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad540: shufps xmm4, xmm5, 0xdd */ { XMM s = xmm[5]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[1]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad544: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad547: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad54a: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad54e: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad551: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad555: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad558: shufps xmm3, xmm1, 0xdd */ { XMM s = xmm[1]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[1]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad55c: shufps xmm1, xmm7, 0x88 */ { XMM s = xmm[7]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad560: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad563: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad566: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008ad569: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad56c: movaps xmmword ptr [esp + 0x30], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x30u), &xmm[5], 16);
    /* 008ad571: movaps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5] = s; }
    /* 008ad574: mulps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad577: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad57a: subps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008ad57d: movaps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7] = s; }
    /* 008ad580: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad583: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad587: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad58b: movaps xmmword ptr [esp + 0x40], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x40u), &xmm[6], 16);
    /* 008ad590: movaps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6] = s; }
    /* 008ad593: mulps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad596: addps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad599: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ad59c: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad5a0: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad5a3: movaps xmmword ptr [esp + 0x50], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x50u), &xmm[3], 16);
    /* 008ad5a8: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad5ab: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad5ae: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad5b1: subps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad5b4: movaps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3] = s; }
    /* 008ad5b7: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5bb: mulps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad5be: shufps xmm7, xmm7, 0xb1 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[1]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5c2: movaps xmmword ptr [esp + 0x60], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x60u), &xmm[5], 16);
    /* 008ad5c7: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad5ca: mulps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad5cd: addps xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ad5d0: movaps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 008ad5d3: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5d7: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad5da: movaps xmmword ptr [esp + 0x70], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x70u), &xmm[4], 16);
    /* 008ad5df: movaps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4] = s; }
    /* 008ad5e2: mulps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad5e5: mulps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad5e8: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ad5eb: subps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad5ee: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 008ad5f1: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad5f4: shufps xmm7, xmm7, 0x4e */ { XMM s = xmm[7]; u32 lo = xmm[7].d[2]; u32 lo2 = xmm[7].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ad5f8: movaps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6] = s; }
    /* 008ad5fb: shufps xmm1, xmm1, 0x4e */ { XMM s = xmm[1]; u32 lo = xmm[1].d[2]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad5ff: movaps xmmword ptr [esp + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x20u), &xmm[0], 16);
    /* 008ad604: addps xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ad607: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad60a: shufps xmm1, xmm1, 0xb1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad60e: addss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; }
    /* 008ad612: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ad617: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008ad61a: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad61d: shufps xmm5, xmm5, 0xb1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad621: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad624: shufps xmm5, xmm5, 0x4e */ { XMM s = xmm[5]; u32 lo = xmm[5].d[2]; u32 lo2 = xmm[5].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad628: movaps xmmword ptr [esp + 0x80], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x80u), &xmm[4], 16);
    /* 008ad630: movaps xmm4, xmmword ptr [esp + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x70u), 16); xmm[4] = s; }
    /* 008ad635: movaps xmmword ptr [esp + 0x90], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x90u), &xmm[3], 16);
    /* 008ad63d: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad640: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad643: addps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad646: movaps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7] = s; }
    /* 008ad649: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad64c: subps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad64f: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ad652: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad655: shufps xmm3, xmm3, 0xb1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad659: movaps xmmword ptr [esp + 0xa0], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xa0u), &xmm[5], 16);
    /* 008ad661: movaps xmm5, xmmword ptr [esp + 0x90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x90u), 16); xmm[5] = s; }
    /* 008ad669: movaps xmmword ptr [esp + 0xb0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xb0u), &xmm[6], 16);
    /* 008ad671: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad674: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad677: addps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad67a: movaps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7] = s; }
    /* 008ad67d: shufps xmm3, xmm3, 0x4e */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad681: movaps xmmword ptr [esp + 0xc0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xc0u), &xmm[4], 16);
    /* 008ad689: movaps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4] = s; }
    /* 008ad68c: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad68f: movaps xmmword ptr [esp + 0xd0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xd0u), &xmm[6], 16);
    /* 008ad697: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008ad69a: subps xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad69d: movaps xmm4, xmmword ptr [esp + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x30u), 16); xmm[4] = s; }
    /* 008ad6a2: movaps xmm5, xmmword ptr [esp + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x40u), 16); xmm[5] = s; }
    /* 008ad6a7: subps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6aa: shufps xmm4, xmm4, 0x4e */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad6ae: movaps xmm5, xmmword ptr [esp + 0x80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x80u), 16); xmm[5] = s; }
    /* 008ad6b6: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad6b9: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad6bc: subps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6bf: mulps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad6c2: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad6c5: shufps xmm0, xmm0, 0xb1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[3]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad6c9: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad6cc: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad6d0: movaps xmm7, xmmword ptr [esp + 0xc0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xc0u), 16); xmm[7] = s; }
    /* 008ad6d8: movaps xmmword ptr [esp + 0xe0], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0xe0u), &xmm[6], 16);
    /* 008ad6e0: movaps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6] = s; }
    /* 008ad6e3: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad6e6: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad6e9: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad6ec: subps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad6ef: movaps xmm6, xmmword ptr [esp + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x60u), 16); xmm[6] = s; }
    /* 008ad6f4: movaps xmm7, xmmword ptr [esp + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x50u), 16); xmm[7] = s; }
    /* 008ad6f9: subps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] - s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] - s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] - s.fs[3]; }
    /* 008ad6fc: shufps xmm6, xmm6, 0x4e */ { XMM s = xmm[6]; u32 lo = xmm[6].d[2]; u32 lo2 = xmm[6].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad700: movaps xmm7, xmmword ptr [esp + 0xb0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xb0u), 16); xmm[7] = s; }
    /* 008ad708: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ad70b: subps xmm7, xmm6 */ { XMM s = xmm[6]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad70e: movaps xmm6, xmmword ptr [esp + 0xa0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xa0u), 16); xmm[6] = s; }
    /* 008ad716: mulps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad719: subps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad71c: movaps xmm5, xmmword ptr [esp + 0xd0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xd0u), 16); xmm[5] = s; }
    /* 008ad724: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad727: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad72a: subps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] - s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] - s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] - s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] - s.fs[3]; }
    /* 008ad72d: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ad730: movaps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2] = s; }
    /* 008ad733: addps xmm2, xmm7 */ { XMM s = xmm[7]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ad736: comiss xmm1, xmm0 */ { XMM s = xmm[0]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ad739: movaps xmm6, xmmword ptr [esp + 0xe0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0xe0u), 16); xmm[6] = s; }
    /* 008ad741: je 0x8ad7ab */ if (fZ) goto L_008ad7ab;
L_008ad743:; BB(0x008ad743);
    /* 008ad743: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008ad746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad748: je 0x8ad751 */ if (fZ) goto L_008ad751;
L_008ad74a:; BB(0x008ad74a);
    /* 008ad74a: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad74d: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
L_008ad751:; BB(0x008ad751);
    /* 008ad751: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ad754: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008ad759: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad75c: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad75f: rcpss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / s.fs[0]; }
    /* 008ad763: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008ad766: mulss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ad76a: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ad76e: addss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; }
    /* 008ad772: subss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; }
    /* 008ad776: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad77a: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad77d: movlps qword ptr [eax], xmm1 */ W64((u32)(r_eax), xmm[1].q[0]);
    /* 008ad780: movhps qword ptr [eax + 8], xmm1 */ W64((u32)(r_eax+0x8u), xmm[1].q[1]);
    /* 008ad784: mulps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad787: movlps qword ptr [eax + 0x10], xmm4 */ W64((u32)(r_eax+0x10u), xmm[4].q[0]);
    /* 008ad78b: movhps qword ptr [eax + 0x18], xmm4 */ W64((u32)(r_eax+0x18u), xmm[4].q[1]);
    /* 008ad78f: mulps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad792: movlps qword ptr [eax + 0x20], xmm6 */ W64((u32)(r_eax+0x20u), xmm[6].q[0]);
    /* 008ad796: movhps qword ptr [eax + 0x28], xmm6 */ W64((u32)(r_eax+0x28u), xmm[6].q[1]);
    /* 008ad79a: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad79d: movlps qword ptr [eax + 0x30], xmm5 */ W64((u32)(r_eax+0x30u), xmm[5].q[0]);
    /* 008ad7a1: movhps qword ptr [eax + 0x38], xmm5 */ W64((u32)(r_eax+0x38u), xmm[5].q[1]);
    /* 008ad7a5: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad7a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad7a8: ret 0xc */ FN_RET(0x008ad50e); r_esp += 16; return;
L_008ad7ab:; BB(0x008ad7ab);
    /* 008ad7ab: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad7b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ad7b3: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad7b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad7b6: ret 0xc */ FN_RET(0x008ad50e); r_esp += 16; return;
}

void f_008ad7c0(void) /* ?sse2_D3DXMatrixMultiplyTranspose@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008ad7c0);
    /* 008ad7c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad7c1: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad7c3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad7c6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad7c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad7cc: jmp 0x8ad7d1 */ goto L_008ad7d1;
L_008ad7d1:; BB(0x008ad7d1);
    /* 008ad7d1: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ad7d4: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad7d7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad7da: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad7dd: movss xmm4, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad7e1: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad7e5: movlps xmm3, qword ptr [ecx] */ xmm[3].q[0] = R64((u32)(r_ecx));
    /* 008ad7e8: movhps xmm3, qword ptr [ecx + 8] */ xmm[3].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ad7ec: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad7ef: movss xmm5, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad7f4: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad7f8: movlps xmm2, qword ptr [ecx + 0x10] */ xmm[2].q[0] = R64((u32)(r_ecx+0x10u));
    /* 008ad7fc: movhps xmm2, qword ptr [ecx + 0x18] */ xmm[2].q[1] = R64((u32)(r_ecx+0x18u));
    /* 008ad800: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad803: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad806: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad80b: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad80f: movlps xmm1, qword ptr [ecx + 0x20] */ xmm[1].q[0] = R64((u32)(r_ecx+0x20u));
    /* 008ad813: movhps xmm1, qword ptr [ecx + 0x28] */ xmm[1].q[1] = R64((u32)(r_ecx+0x28u));
    /* 008ad817: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad81a: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad81d: movss xmm5, dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad822: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad826: movlps xmm0, qword ptr [ecx + 0x30] */ xmm[0].q[0] = R64((u32)(r_ecx+0x30u));
    /* 008ad82a: movhps xmm0, qword ptr [ecx + 0x38] */ xmm[0].q[1] = R64((u32)(r_ecx+0x38u));
    /* 008ad82e: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad831: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad834: movss xmm5, dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad839: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad83d: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad840: movss xmm6, dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad845: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad849: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad84c: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad84f: movss xmm6, dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad854: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad858: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad85b: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad85e: movss xmm6, dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad863: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad867: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad86a: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad86d: movss xmm6, dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad872: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad876: movaps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7] = s; }
    /* 008ad879: unpcklps xmm4, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[4].d[0], a1 = xmm[4].d[1]; xmm[4].d[0] = a0; xmm[4].d[1] = s.d[0]; xmm[4].d[2] = a1; xmm[4].d[3] = s.d[1]; }
    /* 008ad87c: mulps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad87f: unpckhps xmm7, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[7].d[2], a1 = xmm[7].d[3]; xmm[7].d[0] = a0; xmm[7].d[1] = s.d[2]; xmm[7].d[2] = a1; xmm[7].d[3] = s.d[3]; }
    /* 008ad882: mov ecx, eax */ r_ecx = r_eax;
    /* 008ad884: movss xmm5, dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad889: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad88d: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad890: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad893: movss xmm5, dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad898: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad89c: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad89f: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad8a2: movss xmm5, dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad8a7: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad8ab: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad8ae: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad8b1: movss xmm5, dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad8b6: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad8ba: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad8bd: movss xmm3, dword ptr [edx + 0x34] */ { u32 v = R32((u32)(r_edx+0x34u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ad8c2: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad8c6: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad8c9: addps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8cc: movss xmm2, dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad8d1: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad8d5: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad8d8: movss xmm1, dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad8dd: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ad8e0: addps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8e3: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad8e7: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad8ea: addps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8ed: movhps qword ptr [ecx + 0x10], xmm4 */ W64((u32)(r_ecx+0x10u), xmm[4].q[1]);
    /* 008ad8f1: movlps qword ptr [ecx + 0x20], xmm7 */ W64((u32)(r_ecx+0x20u), xmm[7].q[0]);
    /* 008ad8f5: movhps qword ptr [ecx + 0x30], xmm7 */ W64((u32)(r_ecx+0x30u), xmm[7].q[1]);
    /* 008ad8f9: movaps xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0] = s; }
    /* 008ad8fc: unpcklps xmm6, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 008ad8ff: movlps qword ptr [ecx + 8], xmm6 */ W64((u32)(r_ecx+0x8u), xmm[6].q[0]);
    /* 008ad903: movhps qword ptr [ecx + 0x18], xmm6 */ W64((u32)(r_ecx+0x18u), xmm[6].q[1]);
    /* 008ad907: unpckhps xmm0, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[0].d[2], a1 = xmm[0].d[3]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[2]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[3]; }
    /* 008ad90a: movlps qword ptr [ecx + 0x28], xmm0 */ W64((u32)(r_ecx+0x28u), xmm[0].q[0]);
    /* 008ad90e: movhps qword ptr [ecx + 0x38], xmm0 */ W64((u32)(r_ecx+0x38u), xmm[0].q[1]);
    /* 008ad912: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad914: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad915: ret 0xc */ FN_RET(0x008ad7c0); r_esp += 16; return;
}

void f_008ad7ce(void) /* ?sse2_D3DXMatrixMultiplyTranspose$$1@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008ad7ce);
    /* 008ad7ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad7cf: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad7d1: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ad7d4: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ad7d7: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad7da: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ad7dd: movss xmm4, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ad7e1: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad7e5: movlps xmm3, qword ptr [ecx] */ xmm[3].q[0] = R64((u32)(r_ecx));
    /* 008ad7e8: movhps xmm3, qword ptr [ecx + 8] */ xmm[3].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ad7ec: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad7ef: movss xmm5, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad7f4: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad7f8: movlps xmm2, qword ptr [ecx + 0x10] */ xmm[2].q[0] = R64((u32)(r_ecx+0x10u));
    /* 008ad7fc: movhps xmm2, qword ptr [ecx + 0x18] */ xmm[2].q[1] = R64((u32)(r_ecx+0x18u));
    /* 008ad800: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad803: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad806: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad80b: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad80f: movlps xmm1, qword ptr [ecx + 0x20] */ xmm[1].q[0] = R64((u32)(r_ecx+0x20u));
    /* 008ad813: movhps xmm1, qword ptr [ecx + 0x28] */ xmm[1].q[1] = R64((u32)(r_ecx+0x28u));
    /* 008ad817: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad81a: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad81d: movss xmm5, dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad822: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad826: movlps xmm0, qword ptr [ecx + 0x30] */ xmm[0].q[0] = R64((u32)(r_ecx+0x30u));
    /* 008ad82a: movhps xmm0, qword ptr [ecx + 0x38] */ xmm[0].q[1] = R64((u32)(r_ecx+0x38u));
    /* 008ad82e: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad831: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ad834: movss xmm5, dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad839: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad83d: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad840: movss xmm6, dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad845: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad849: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad84c: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad84f: movss xmm6, dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad854: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad858: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad85b: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad85e: movss xmm6, dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad863: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad867: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad86a: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad86d: movss xmm6, dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ad872: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad876: movaps xmm7, xmm4 */ { XMM s = xmm[4]; xmm[7] = s; }
    /* 008ad879: unpcklps xmm4, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[4].d[0], a1 = xmm[4].d[1]; xmm[4].d[0] = a0; xmm[4].d[1] = s.d[0]; xmm[4].d[2] = a1; xmm[4].d[3] = s.d[1]; }
    /* 008ad87c: mulps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ad87f: unpckhps xmm7, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[7].d[2], a1 = xmm[7].d[3]; xmm[7].d[0] = a0; xmm[7].d[1] = s.d[2]; xmm[7].d[2] = a1; xmm[7].d[3] = s.d[3]; }
    /* 008ad882: mov ecx, eax */ r_ecx = r_eax;
    /* 008ad884: movss xmm5, dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad889: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad88d: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad890: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad893: movss xmm5, dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad898: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad89c: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad89f: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad8a2: movss xmm5, dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad8a7: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad8ab: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad8ae: addps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ad8b1: movss xmm5, dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ad8b6: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ad8ba: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad8bd: movss xmm3, dword ptr [edx + 0x34] */ { u32 v = R32((u32)(r_edx+0x34u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ad8c2: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ad8c6: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad8c9: addps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8cc: movss xmm2, dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ad8d1: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad8d5: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad8d8: movss xmm1, dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ad8dd: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ad8e0: addps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8e3: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad8e7: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad8ea: addps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008ad8ed: movhps qword ptr [ecx + 0x10], xmm4 */ W64((u32)(r_ecx+0x10u), xmm[4].q[1]);
    /* 008ad8f1: movlps qword ptr [ecx + 0x20], xmm7 */ W64((u32)(r_ecx+0x20u), xmm[7].q[0]);
    /* 008ad8f5: movhps qword ptr [ecx + 0x30], xmm7 */ W64((u32)(r_ecx+0x30u), xmm[7].q[1]);
    /* 008ad8f9: movaps xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0] = s; }
    /* 008ad8fc: unpcklps xmm6, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 008ad8ff: movlps qword ptr [ecx + 8], xmm6 */ W64((u32)(r_ecx+0x8u), xmm[6].q[0]);
    /* 008ad903: movhps qword ptr [ecx + 0x18], xmm6 */ W64((u32)(r_ecx+0x18u), xmm[6].q[1]);
    /* 008ad907: unpckhps xmm0, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[0].d[2], a1 = xmm[0].d[3]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[2]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[3]; }
    /* 008ad90a: movlps qword ptr [ecx + 0x28], xmm0 */ W64((u32)(r_ecx+0x28u), xmm[0].q[0]);
    /* 008ad90e: movhps qword ptr [ecx + 0x38], xmm0 */ W64((u32)(r_ecx+0x38u), xmm[0].q[1]);
    /* 008ad912: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad914: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad915: ret 0xc */ FN_RET(0x008ad7ce); r_esp += 16; return;
}

void f_008ad920(void) /* ?sse2_D3DXVec4Cross@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11@Z_0 */
{
    FN_ENTER(0x008ad920);
    /* 008ad920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad921: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad923: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad926: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad929: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad92c: jmp 0x8ad931 */ goto L_008ad931;
L_008ad931:; BB(0x008ad931);
    /* 008ad931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad932: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008ad935: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad938: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008ad93b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ad93e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad941: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ad944: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008ad948: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008ad94b: movhps xmm2, qword ptr [ecx + 8] */ xmm[2].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ad94f: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad953: movlps xmm1, qword ptr [ebp] */ xmm[1].q[0] = R64((u32)(r_ebp));
    /* 008ad957: movhps xmm1, qword ptr [ebp + 8] */ xmm[1].q[1] = R64((u32)(r_ebp+0x8u));
    /* 008ad95b: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad95f: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad962: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad966: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ad969: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad96d: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad970: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad973: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad976: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad979: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad97d: subps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ad980: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008ad983: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad987: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad98a: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad98e: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad991: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad995: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ad998: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad99c: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad99f: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad9a2: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad9a5: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad9a9: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ad9ac: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad9af: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad9b2: xorps xmm3, xmmword ptr [0xa361e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361e0u), 16); xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008ad9b9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008ad9bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ad9bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ad9c0: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad9c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad9c3: ret 0x10 */ FN_RET(0x008ad920); r_esp += 20; return;
}

void f_008ad92e(void) /* ?sse2_D3DXVec4Cross$$1@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11@Z_0 */
{
    FN_ENTER(0x008ad92e);
    /* 008ad92e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad92f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad932: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008ad935: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad938: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008ad93b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ad93e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ad941: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ad944: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008ad948: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008ad94b: movhps xmm2, qword ptr [ecx + 8] */ xmm[2].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ad94f: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad953: movlps xmm1, qword ptr [ebp] */ xmm[1].q[0] = R64((u32)(r_ebp));
    /* 008ad957: movhps xmm1, qword ptr [ebp + 8] */ xmm[1].q[1] = R64((u32)(r_ebp+0x8u));
    /* 008ad95b: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad95f: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad962: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad966: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ad969: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad96d: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad970: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ad973: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ad976: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ad979: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad97d: subps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ad980: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008ad983: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad987: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ad98a: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ad98e: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ad991: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ad995: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ad998: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ad99c: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ad99f: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ad9a2: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad9a5: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ad9a9: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ad9ac: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ad9af: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ad9b2: xorps xmm3, xmmword ptr [0xa361e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361e0u), 16); xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008ad9b9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008ad9bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ad9bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ad9c0: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad9c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad9c3: ret 0x10 */ FN_RET(0x008ad92e); r_esp += 20; return;
}

void f_008ad9d0(void) /* ?sse2_D3DXMatrixRotationX@@YGPAUD3DXMATRIX@@PAU1@M@Z */
{
    FN_ENTER(0x008ad9d0);
    /* 008ad9d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9d1: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad9d3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9d6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9dc: jmp 0x8ad9e1 */ goto L_008ad9e1;
L_008ad9e1:; BB(0x008ad9e1);
    /* 008ad9e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9e3: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008ad9e6: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008ad9ea: mov ebp, esp */ r_ebp = r_esp;
    /* 008ad9ec: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9ef: movss xmm0, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad9f4: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9f7: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad9fb: call 0x8bac50 */ r_esp -= 4; W32(r_esp, 0x8ada00u); f_008bac50();
    /* 008ada00: movaps xmm1, xmmword ptr [0xb48a90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a90u), 16); xmm[1] = s; }
    /* 008ada07: movaps xmm2, xmmword ptr [0xb48a70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a70u), 16); xmm[2] = s; }
    /* 008ada0e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ada11: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ada14: movaps xmm0, xmmword ptr [0xb48a80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a80u), 16); xmm[0] = s; }
    /* 008ada1b: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ada1e: movss dword ptr [eax + 0x10], xmm0 */ W32((u32)(r_eax+0x10u), xmm[0].d[0]);
    /* 008ada23: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008ada26: movlps qword ptr [eax + 0x14], xmm1 */ W64((u32)(r_eax+0x14u), xmm[1].q[0]);
    /* 008ada2a: shufps xmm1, xmm1, 0x11 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ada2e: movlps qword ptr [eax + 0x1c], xmm0 */ W64((u32)(r_eax+0x1cu), xmm[0].q[0]);
    /* 008ada32: xorps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008ada35: movss dword ptr [eax + 0x2c], xmm0 */ W32((u32)(r_eax+0x2cu), xmm[0].d[0]);
    /* 008ada3a: movlps qword ptr [eax + 0x24], xmm1 */ W64((u32)(r_eax+0x24u), xmm[1].q[0]);
    /* 008ada3e: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008ada42: mov esp, ebp */ r_esp = r_ebp;
    /* 008ada44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ada45: mov esp, ebx */ r_esp = r_ebx;
    /* 008ada47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ada48: ret 8 */ FN_RET(0x008ad9d0); r_esp += 12; return;
}

void f_008ad9de(void) /* ?sse2_D3DXMatrixRotationX$$1@@YGPAUD3DXMATRIX@@PAU1@M@Z */
{
    FN_ENTER(0x008ad9de);
    /* 008ad9de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9df: mov ebx, esp */ r_ebx = r_esp;
    /* 008ad9e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ad9e3: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008ad9e6: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008ad9ea: mov ebp, esp */ r_ebp = r_esp;
    /* 008ad9ec: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9ef: movss xmm0, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ad9f4: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ad9f7: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ad9fb: call 0x8bac50 */ r_esp -= 4; W32(r_esp, 0x8ada00u); f_008bac50();
    /* 008ada00: movaps xmm1, xmmword ptr [0xb48a90] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a90u), 16); xmm[1] = s; }
    /* 008ada07: movaps xmm2, xmmword ptr [0xb48a70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a70u), 16); xmm[2] = s; }
    /* 008ada0e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ada11: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ada14: movaps xmm0, xmmword ptr [0xb48a80] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48a80u), 16); xmm[0] = s; }
    /* 008ada1b: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ada1e: movss dword ptr [eax + 0x10], xmm0 */ W32((u32)(r_eax+0x10u), xmm[0].d[0]);
    /* 008ada23: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008ada26: movlps qword ptr [eax + 0x14], xmm1 */ W64((u32)(r_eax+0x14u), xmm[1].q[0]);
    /* 008ada2a: shufps xmm1, xmm1, 0x11 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ada2e: movlps qword ptr [eax + 0x1c], xmm0 */ W64((u32)(r_eax+0x1cu), xmm[0].q[0]);
    /* 008ada32: xorps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008ada35: movss dword ptr [eax + 0x2c], xmm0 */ W32((u32)(r_eax+0x2cu), xmm[0].d[0]);
    /* 008ada3a: movlps qword ptr [eax + 0x24], xmm1 */ W64((u32)(r_eax+0x24u), xmm[1].q[0]);
    /* 008ada3e: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008ada42: mov esp, ebp */ r_esp = r_ebp;
    /* 008ada44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ada45: mov esp, ebx */ r_esp = r_ebx;
    /* 008ada47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ada48: ret 8 */ FN_RET(0x008ad9de); r_esp += 12; return;
}

void f_008ada50(void) /* ?sse2_D3DXMatrixRotationY@@YGPAUD3DXMATRIX@@PAU1@M@Z */
{
    FN_ENTER(0x008ada50);
    /* 008ada50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ada51: mov ebx, esp */ r_ebx = r_esp;
    /* 008ada53: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ada56: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ada59: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ada5c: jmp 0x8ada61 */ goto L_008ada61;
L_008ada61:; BB(0x008ada61);
    /* 008ada61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ada62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ada63: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008ada66: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008ada6a: mov ebp, esp */ r_ebp = r_esp;
    /* 008ada6c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ada6f: movss xmm0, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ada74: movaps xmm1, xmmword ptr [0xb48ad0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ad0u), 16); xmm[1] = s; }
    /* 008ada7b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ada7f: movaps xmmword ptr [ebp - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffe0u), &xmm[1], 16);
    /* 008ada83: movaps xmm1, xmmword ptr [0xb48ac0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ac0u), 16); xmm[1] = s; }
    /* 008ada8a: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ada8d: movaps xmmword ptr [ebp - 0x30], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffd0u), &xmm[1], 16);
    /* 008ada91: call 0x8bac50 */ r_esp -= 4; W32(r_esp, 0x8ada96u); f_008bac50();
    /* 008ada96: shufps xmm0, xmm0, 0x50 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ada9a: movaps xmm1, xmmword ptr [ebp - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffd0u), 16); xmm[1] = s; }
    /* 008ada9e: andps xmm0, xmmword ptr [ebp - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffe0u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008adaa2: xorps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008adaa5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adaa8: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008adaab: movaps xmm1, xmmword ptr [0xb48ab0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ab0u), 16); xmm[1] = s; }
    /* 008adab2: movups xmmword ptr [eax + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[1], 16);
    /* 008adab6: movaps xmm1, xmmword ptr [0xb48aa0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48aa0u), 16); xmm[1] = s; }
    /* 008adabd: shufps xmm0, xmm0, 0x46 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[1]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adac1: movups xmmword ptr [eax + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[0], 16);
    /* 008adac5: movups xmmword ptr [eax + 0x30], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[1], 16);
    /* 008adac9: mov esp, ebp */ r_esp = r_ebp;
    /* 008adacb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008adacc: mov esp, ebx */ r_esp = r_ebx;
    /* 008adace: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008adacf: ret 8 */ FN_RET(0x008ada50); r_esp += 12; return;
}

void f_008ada5e(void) /* ?sse2_D3DXMatrixRotationY$$1@@YGPAUD3DXMATRIX@@PAU1@M@Z */
{
    FN_ENTER(0x008ada5e);
    /* 008ada5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ada5f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ada61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ada62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ada63: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008ada66: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008ada6a: mov ebp, esp */ r_ebp = r_esp;
    /* 008ada6c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ada6f: movss xmm0, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ada74: movaps xmm1, xmmword ptr [0xb48ad0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ad0u), 16); xmm[1] = s; }
    /* 008ada7b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ada7f: movaps xmmword ptr [ebp - 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffe0u), &xmm[1], 16);
    /* 008ada83: movaps xmm1, xmmword ptr [0xb48ac0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ac0u), 16); xmm[1] = s; }
    /* 008ada8a: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ada8d: movaps xmmword ptr [ebp - 0x30], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffd0u), &xmm[1], 16);
    /* 008ada91: call 0x8bac50 */ r_esp -= 4; W32(r_esp, 0x8ada96u); f_008bac50();
    /* 008ada96: shufps xmm0, xmm0, 0x50 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ada9a: movaps xmm1, xmmword ptr [ebp - 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffd0u), 16); xmm[1] = s; }
    /* 008ada9e: andps xmm0, xmmword ptr [ebp - 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffe0u), 16); xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008adaa2: xorps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008adaa5: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adaa8: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008adaab: movaps xmm1, xmmword ptr [0xb48ab0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48ab0u), 16); xmm[1] = s; }
    /* 008adab2: movups xmmword ptr [eax + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[1], 16);
    /* 008adab6: movaps xmm1, xmmword ptr [0xb48aa0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48aa0u), 16); xmm[1] = s; }
    /* 008adabd: shufps xmm0, xmm0, 0x46 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[1]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adac1: movups xmmword ptr [eax + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[0], 16);
    /* 008adac5: movups xmmword ptr [eax + 0x30], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[1], 16);
    /* 008adac9: mov esp, ebp */ r_esp = r_ebp;
    /* 008adacb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008adacc: mov esp, ebx */ r_esp = r_ebx;
    /* 008adace: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008adacf: ret 8 */ FN_RET(0x008ada5e); r_esp += 12; return;
}

void f_008adae0(void) /* ?sse2_D3DXPlaneFromPoints@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@11@Z_0 */
{
    FN_ENTER(0x008adae0);
    /* 008adae0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adae1: mov ebx, esp */ r_ebx = r_esp;
    /* 008adae3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adae6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008adae9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008adaec: jmp 0x8adaf1 */ goto L_008adaf1;
L_008adaf1:; BB(0x008adaf1);
    /* 008adaf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008adaf2: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008adaf5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adaf8: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008adafb: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008adafe: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adb01: movss xmm0, dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008adb06: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adb0b: movhps xmm0, qword ptr [ebp] */ xmm[0].q[1] = R64((u32)(r_ebp));
    /* 008adb0f: movhps xmm1, qword ptr [edx] */ xmm[1].q[1] = R64((u32)(r_edx));
    /* 008adb12: movss xmm2, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008adb17: movhps xmm2, qword ptr [ecx] */ xmm[2].q[1] = R64((u32)(r_ecx));
    /* 008adb1a: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008adb1d: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008adb20: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adb23: shufps xmm0, xmm0, 0x78 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adb27: shufps xmm1, xmm1, 0x63 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adb2b: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008adb2e: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008adb31: movaps xmm2, xmmword ptr [0xa36200] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36200u), 16); xmm[2] = s; }
    /* 008adb38: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008adb3b: shufps xmm3, xmm3, 0x63 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adb3f: shufps xmm5, xmm5, 0x78 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008adb43: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adb46: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008adb49: movaps xmm1, xmmword ptr [0xa36210] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36210u), 16); xmm[1] = s; }
    /* 008adb50: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008adb53: shufps xmm4, xmm4, 0xe */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adb57: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008adb5a: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adb5d: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adb60: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008adb63: addps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008adb66: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008adb69: shufps xmm5, xmm5, 1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008adb6d: addss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adb71: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adb74: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008adb78: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008adb7c: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008adb7f: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008adb83: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008adb87: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008adb8b: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008adb8f: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adb93: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adb96: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008adb99: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008adb9c: movhlps xmm6, xmm4 */ xmm[6].q[0] = xmm[4].q[1];
    /* 008adb9f: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008adba2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adba6: addss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008adbaa: addss xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adbae: xorps xmm0, xmmword ptr [0xa361f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361f0u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008adbb5: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008adbba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008adbbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008adbbe: mov esp, ebx */ r_esp = r_ebx;
    /* 008adbc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008adbc1: ret 0x10 */ FN_RET(0x008adae0); r_esp += 20; return;
}

void f_008adaee(void) /* ?sse2_D3DXPlaneFromPoints$$1@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@11@Z_0 */
{
    FN_ENTER(0x008adaee);
    /* 008adaee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adaef: mov ebx, esp */ r_ebx = r_esp;
    /* 008adaf1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008adaf2: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008adaf5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adaf8: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008adafb: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008adafe: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adb01: movss xmm0, dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008adb06: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adb0b: movhps xmm0, qword ptr [ebp] */ xmm[0].q[1] = R64((u32)(r_ebp));
    /* 008adb0f: movhps xmm1, qword ptr [edx] */ xmm[1].q[1] = R64((u32)(r_edx));
    /* 008adb12: movss xmm2, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008adb17: movhps xmm2, qword ptr [ecx] */ xmm[2].q[1] = R64((u32)(r_ecx));
    /* 008adb1a: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008adb1d: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008adb20: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adb23: shufps xmm0, xmm0, 0x78 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adb27: shufps xmm1, xmm1, 0x63 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adb2b: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008adb2e: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008adb31: movaps xmm2, xmmword ptr [0xa36200] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36200u), 16); xmm[2] = s; }
    /* 008adb38: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008adb3b: shufps xmm3, xmm3, 0x63 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adb3f: shufps xmm5, xmm5, 0x78 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008adb43: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adb46: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008adb49: movaps xmm1, xmmword ptr [0xa36210] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36210u), 16); xmm[1] = s; }
    /* 008adb50: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008adb53: shufps xmm4, xmm4, 0xe */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adb57: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008adb5a: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adb5d: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adb60: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008adb63: addps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008adb66: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008adb69: shufps xmm5, xmm5, 1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008adb6d: addss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adb71: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adb74: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008adb78: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008adb7c: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008adb7f: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008adb83: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008adb87: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008adb8b: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008adb8f: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adb93: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adb96: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008adb99: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008adb9c: movhlps xmm6, xmm4 */ xmm[6].q[0] = xmm[4].q[1];
    /* 008adb9f: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008adba2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adba6: addss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008adbaa: addss xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adbae: xorps xmm0, xmmword ptr [0xa361f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361f0u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008adbb5: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008adbba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008adbbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008adbbe: mov esp, ebx */ r_esp = r_ebx;
    /* 008adbc0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008adbc1: ret 0x10 */ FN_RET(0x008adaee); r_esp += 20; return;
}

void f_008adbd0(void) /* ?sse2_D3DXMatrixShadow@@YGPAU_D3DMATRIX@@PAU1@PBUD3DXVECTOR4@@PBUD3DXPLANE@@@Z_0 */
{
    FN_ENTER(0x008adbd0);
    /* 008adbd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adbd1: mov ebx, esp */ r_ebx = r_esp;
    /* 008adbd3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adbd6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008adbd9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008adbdc: jmp 0x8adbe1 */ goto L_008adbe1;
L_008adbe1:; BB(0x008adbe1);
    /* 008adbe1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008adbe4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adbe7: movups xmm2, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[2] = s; }
    /* 008adbea: movaps xmm3, xmmword ptr [0xa36260] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36260u), 16); xmm[3] = s; }
    /* 008adbf1: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008adbf4: andps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008adbf7: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008adbfa: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adbfd: mov edx, 1 */ r_edx = 0x1u;
    /* 008adc02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008adc04: movhlps xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[1];
    /* 008adc07: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008adc0a: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008adc0d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008adc10: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008adc13: shufps xmm0, xmm0, 1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adc17: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adc1b: comiss xmm0, xmm4 */ { XMM s = xmm[4]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008adc1e: cmove ecx, edx */ if (fZ) { r_ecx = r_edx; }
    /* 008adc21: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008adc24: je 0x8adc96 */ if (fZ) goto L_008adc96;
L_008adc26:; BB(0x008adc26);
    /* 008adc26: mov al, byte ptr [0xaf1c00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaf1c00u))) & 0xffu);
    /* 008adc2b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008adc2d: je 0x8adc38 */ if (fZ) goto L_008adc38;
L_008adc2f:; BB(0x008adc2f);
    /* 008adc2f: movaps xmm4, xmmword ptr [0xaf1be0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1be0u), 16); xmm[4] = s; }
    /* 008adc36: jmp 0x8adc4e */ goto L_008adc4e;
L_008adc38:; BB(0x008adc38);
    /* 008adc38: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008adc3a: movss xmm4, dword ptr [0xb48ae0] */ { u32 v = R32((u32)(0xb48ae0u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008adc42: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008adc47: movaps xmmword ptr [0xaf1be0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(0xaf1be0u), &xmm[4], 16);
L_008adc4e:; BB(0x008adc4e);
    /* 008adc4e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008adc50: je 0x8adc5b */ if (fZ) goto L_008adc5b;
L_008adc52:; BB(0x008adc52);
    /* 008adc52: movaps xmm3, xmmword ptr [0xaf1bf0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1bf0u), 16); xmm[3] = s; }
    /* 008adc59: jmp 0x8adc71 */ goto L_008adc71;
L_008adc5b:; BB(0x008adc5b);
    /* 008adc5b: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008adc5d: movss xmm3, dword ptr [0xb48ae4] */ { u32 v = R32((u32)(0xb48ae4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008adc65: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008adc6a: movaps xmmword ptr [0xaf1bf0], xmm3 */ memcpy((void *)(uintptr_t)(u32)(0xaf1bf0u), &xmm[3], 16);
L_008adc71:; BB(0x008adc71);
    /* 008adc71: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adc74: rsqrtss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008adc78: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008adc7c: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008adc80: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008adc84: subss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008adc88: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008adc8c: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adc90: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008adc93: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
L_008adc96:; BB(0x008adc96);
    /* 008adc96: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008adc99: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adc9c: movups xmm2, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[2] = s; }
    /* 008adc9f: movaps xmm3, xmmword ptr [0xa36230] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36230u), 16); xmm[3] = s; }
    /* 008adca6: movaps xmm4, xmmword ptr [0xa36220] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36220u), 16); xmm[4] = s; }
    /* 008adcad: xorps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008adcb0: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adcb3: movaps xmm5, xmmword ptr [0xa36240] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36240u), 16); xmm[5] = s; }
    /* 008adcba: movhlps xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[1];
    /* 008adcbd: movaps xmm6, xmmword ptr [0xa36250] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36250u), 16); xmm[6] = s; }
    /* 008adcc4: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008adcc7: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adcca: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adcce: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adcd2: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adcd6: andps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008adcd9: andps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].q[0] = xmm[5].q[0] & s.q[0]; xmm[5].q[1] = xmm[5].q[1] & s.q[1]; }
    /* 008adcdc: andps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].q[0] = xmm[6].q[0] & s.q[0]; xmm[6].q[1] = xmm[6].q[1] & s.q[1]; }
    /* 008adcdf: movaps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1] = s; }
    /* 008adce2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adce6: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008adce9: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008adcec: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008adcef: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008adcf2: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008adcf5: shufps xmm3, xmm3, 0xaa */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adcf9: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adcfc: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008adcff: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008add02: addps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008add05: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008add08: shufps xmm4, xmm4, 0xff */ { XMM s = xmm[4]; u32 lo = xmm[4].d[3]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008add0c: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008add10: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008add13: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008add16: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008add19: addps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008add1c: addss xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008add20: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008add22: jne 0x8add35 */ if (!fZ) goto L_008add35;
L_008add24:; BB(0x008add24);
    /* 008add24: movaps xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008add27: movaps xmmword ptr [eax + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[0], 16);
    /* 008add2b: movaps xmmword ptr [eax + 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[1], 16);
    /* 008add2f: movaps xmmword ptr [eax + 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[2], 16);
    /* 008add33: jmp 0x8add54 */ goto L_008add54;
L_008add35:; BB(0x008add35);
    /* 008add35: movlps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[0]);
    /* 008add38: movhps qword ptr [eax + 8], xmm3 */ W64((u32)(r_eax+0x8u), xmm[3].q[1]);
    /* 008add3c: movlps qword ptr [eax + 0x10], xmm0 */ W64((u32)(r_eax+0x10u), xmm[0].q[0]);
    /* 008add40: movhps qword ptr [eax + 0x18], xmm0 */ W64((u32)(r_eax+0x18u), xmm[0].q[1]);
    /* 008add44: movlps qword ptr [eax + 0x20], xmm1 */ W64((u32)(r_eax+0x20u), xmm[1].q[0]);
    /* 008add48: movhps qword ptr [eax + 0x28], xmm1 */ W64((u32)(r_eax+0x28u), xmm[1].q[1]);
    /* 008add4c: movlps qword ptr [eax + 0x30], xmm2 */ W64((u32)(r_eax+0x30u), xmm[2].q[0]);
    /* 008add50: movhps qword ptr [eax + 0x38], xmm2 */ W64((u32)(r_eax+0x38u), xmm[2].q[1]);
L_008add54:; BB(0x008add54);
    /* 008add54: mov esp, ebx */ r_esp = r_ebx;
    /* 008add56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008add57: ret 0xc */ FN_RET(0x008adbd0); r_esp += 16; return;
}

void f_008adbde(void) /* ?sse2_D3DXMatrixShadow$$1@@YGPAU_D3DMATRIX@@PAU1@PBUD3DXVECTOR4@@PBUD3DXPLANE@@@Z_0 */
{
    FN_ENTER(0x008adbde);
    /* 008adbde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adbdf: mov ebx, esp */ r_ebx = r_esp;
    /* 008adbe1: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008adbe4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adbe7: movups xmm2, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[2] = s; }
    /* 008adbea: movaps xmm3, xmmword ptr [0xa36260] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36260u), 16); xmm[3] = s; }
    /* 008adbf1: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008adbf4: andps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008adbf7: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008adbfa: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adbfd: mov edx, 1 */ r_edx = 0x1u;
    /* 008adc02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008adc04: movhlps xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[1];
    /* 008adc07: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008adc0a: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008adc0d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008adc10: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008adc13: shufps xmm0, xmm0, 1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adc17: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adc1b: comiss xmm0, xmm4 */ { XMM s = xmm[4]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008adc1e: cmove ecx, edx */ if (fZ) { r_ecx = r_edx; }
    /* 008adc21: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008adc24: je 0x8adc96 */ if (fZ) goto L_008adc96;
L_008adc26:; BB(0x008adc26);
    /* 008adc26: mov al, byte ptr [0xaf1c00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaf1c00u))) & 0xffu);
    /* 008adc2b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008adc2d: je 0x8adc38 */ if (fZ) goto L_008adc38;
L_008adc2f:; BB(0x008adc2f);
    /* 008adc2f: movaps xmm4, xmmword ptr [0xaf1be0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1be0u), 16); xmm[4] = s; }
    /* 008adc36: jmp 0x8adc4e */ goto L_008adc4e;
L_008adc38:; BB(0x008adc38);
    /* 008adc38: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008adc3a: movss xmm4, dword ptr [0xb48ae0] */ { u32 v = R32((u32)(0xb48ae0u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008adc42: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008adc47: movaps xmmword ptr [0xaf1be0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(0xaf1be0u), &xmm[4], 16);
L_008adc4e:; BB(0x008adc4e);
    /* 008adc4e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008adc50: je 0x8adc5b */ if (fZ) goto L_008adc5b;
L_008adc52:; BB(0x008adc52);
    /* 008adc52: movaps xmm3, xmmword ptr [0xaf1bf0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1bf0u), 16); xmm[3] = s; }
    /* 008adc59: jmp 0x8adc71 */ goto L_008adc71;
L_008adc5b:; BB(0x008adc5b);
    /* 008adc5b: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008adc5d: movss xmm3, dword ptr [0xb48ae4] */ { u32 v = R32((u32)(0xb48ae4u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008adc65: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008adc6a: movaps xmmword ptr [0xaf1bf0], xmm3 */ memcpy((void *)(uintptr_t)(u32)(0xaf1bf0u), &xmm[3], 16);
L_008adc71:; BB(0x008adc71);
    /* 008adc71: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008adc74: rsqrtss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008adc78: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008adc7c: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008adc80: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008adc84: subss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008adc88: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008adc8c: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adc90: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008adc93: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
L_008adc96:; BB(0x008adc96);
    /* 008adc96: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008adc99: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008adc9c: movups xmm2, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[2] = s; }
    /* 008adc9f: movaps xmm3, xmmword ptr [0xa36230] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36230u), 16); xmm[3] = s; }
    /* 008adca6: movaps xmm4, xmmword ptr [0xa36220] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36220u), 16); xmm[4] = s; }
    /* 008adcad: xorps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008adcb0: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adcb3: movaps xmm5, xmmword ptr [0xa36240] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36240u), 16); xmm[5] = s; }
    /* 008adcba: movhlps xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[1];
    /* 008adcbd: movaps xmm6, xmmword ptr [0xa36250] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36250u), 16); xmm[6] = s; }
    /* 008adcc4: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008adcc7: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adcca: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adcce: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008adcd2: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adcd6: andps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008adcd9: andps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].q[0] = xmm[5].q[0] & s.q[0]; xmm[5].q[1] = xmm[5].q[1] & s.q[1]; }
    /* 008adcdc: andps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].q[0] = xmm[6].q[0] & s.q[0]; xmm[6].q[1] = xmm[6].q[1] & s.q[1]; }
    /* 008adcdf: movaps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1] = s; }
    /* 008adce2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008adce6: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008adce9: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008adcec: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008adcef: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008adcf2: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008adcf5: shufps xmm3, xmm3, 0xaa */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adcf9: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008adcfc: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008adcff: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008add02: addps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008add05: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008add08: shufps xmm4, xmm4, 0xff */ { XMM s = xmm[4]; u32 lo = xmm[4].d[3]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008add0c: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008add10: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008add13: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008add16: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008add19: addps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008add1c: addss xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008add20: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008add22: jne 0x8add35 */ if (!fZ) goto L_008add35;
L_008add24:; BB(0x008add24);
    /* 008add24: movaps xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008add27: movaps xmmword ptr [eax + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[0], 16);
    /* 008add2b: movaps xmmword ptr [eax + 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[1], 16);
    /* 008add2f: movaps xmmword ptr [eax + 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[2], 16);
    /* 008add33: jmp 0x8add54 */ goto L_008add54;
L_008add35:; BB(0x008add35);
    /* 008add35: movlps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[0]);
    /* 008add38: movhps qword ptr [eax + 8], xmm3 */ W64((u32)(r_eax+0x8u), xmm[3].q[1]);
    /* 008add3c: movlps qword ptr [eax + 0x10], xmm0 */ W64((u32)(r_eax+0x10u), xmm[0].q[0]);
    /* 008add40: movhps qword ptr [eax + 0x18], xmm0 */ W64((u32)(r_eax+0x18u), xmm[0].q[1]);
    /* 008add44: movlps qword ptr [eax + 0x20], xmm1 */ W64((u32)(r_eax+0x20u), xmm[1].q[0]);
    /* 008add48: movhps qword ptr [eax + 0x28], xmm1 */ W64((u32)(r_eax+0x28u), xmm[1].q[1]);
    /* 008add4c: movlps qword ptr [eax + 0x30], xmm2 */ W64((u32)(r_eax+0x30u), xmm[2].q[0]);
    /* 008add50: movhps qword ptr [eax + 0x38], xmm2 */ W64((u32)(r_eax+0x38u), xmm[2].q[1]);
L_008add54:; BB(0x008add54);
    /* 008add54: mov esp, ebx */ r_esp = r_ebx;
    /* 008add56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008add57: ret 0xc */ FN_RET(0x008adbde); r_esp += 16; return;
}

void f_008add60(void) /* ?sse2_D3DXMatrixReflect@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXPLANE@@@Z_0 */
{
    FN_ENTER(0x008add60);
    /* 008add60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008add61: mov ebx, esp */ r_ebx = r_esp;
    /* 008add63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008add66: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008add69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008add6c: jmp 0x8add71 */ goto L_008add71;
L_008add71:; BB(0x008add71);
    /* 008add71: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008add74: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008add77: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008add7a: movhps xmm1, qword ptr [edx + 8] */ xmm[1].q[1] = R64((u32)(r_edx+0x8u));
    /* 008add7e: movlps xmm1, qword ptr [edx] */ xmm[1].q[0] = R64((u32)(r_edx));
    /* 008add81: movaps xmm0, xmmword ptr [0xa362e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362e0u), 16); xmm[0] = s; }
    /* 008add88: andps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008add8b: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008add8e: movss xmm2, dword ptr [0xa362c0] */ { u32 v = R32((u32)(0xa362c0u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008add96: movss xmm3, dword ptr [0xa362d0] */ { u32 v = R32((u32)(0xa362d0u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008add9e: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008adda1: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008adda4: addps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008adda7: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008addaa: shufps xmm4, xmm4, 1 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008addae: addss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008addb2: movaps xmm4, xmmword ptr [0xa362b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362b0u), 16); xmm[4] = s; }
    /* 008addb9: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008addbc: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008addc0: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008addc4: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008addc8: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008addcc: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008addd0: mulss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008addd4: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008addd8: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adddb: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008addde: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008adde1: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adde5: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adde8: addps xmm1, xmmword ptr [0xa362a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362a0u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008addef: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008addf2: shufps xmm0, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008addf6: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008addf9: addps xmm0, xmmword ptr [0xa36270] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36270u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ade00: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ade03: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ade07: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ade0a: addps xmm2, xmmword ptr [0xa36280] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36280u), 16); xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ade11: shufps xmm3, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ade15: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ade18: addps xmm4, xmmword ptr [0xa36290] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36290u), 16); xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ade1f: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ade22: movups xmmword ptr [eax + 0x10], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[4], 16);
    /* 008ade26: movups xmmword ptr [eax + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[2], 16);
    /* 008ade2a: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008ade2e: mov esp, ebx */ r_esp = r_ebx;
    /* 008ade30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ade31: ret 8 */ FN_RET(0x008add60); r_esp += 12; return;
}

void f_008add6e(void) /* ?sse2_D3DXMatrixReflect$$1@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXPLANE@@@Z_0 */
{
    FN_ENTER(0x008add6e);
    /* 008add6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008add6f: mov ebx, esp */ r_ebx = r_esp;
    /* 008add71: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008add74: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008add77: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008add7a: movhps xmm1, qword ptr [edx + 8] */ xmm[1].q[1] = R64((u32)(r_edx+0x8u));
    /* 008add7e: movlps xmm1, qword ptr [edx] */ xmm[1].q[0] = R64((u32)(r_edx));
    /* 008add81: movaps xmm0, xmmword ptr [0xa362e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362e0u), 16); xmm[0] = s; }
    /* 008add88: andps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008add8b: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008add8e: movss xmm2, dword ptr [0xa362c0] */ { u32 v = R32((u32)(0xa362c0u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008add96: movss xmm3, dword ptr [0xa362d0] */ { u32 v = R32((u32)(0xa362d0u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008add9e: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008adda1: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008adda4: addps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008adda7: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008addaa: shufps xmm4, xmm4, 1 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008addae: addss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008addb2: movaps xmm4, xmmword ptr [0xa362b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362b0u), 16); xmm[4] = s; }
    /* 008addb9: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008addbc: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008addc0: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008addc4: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008addc8: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008addcc: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008addd0: mulss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008addd4: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008addd8: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adddb: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008addde: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008adde1: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008adde5: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adde8: addps xmm1, xmmword ptr [0xa362a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa362a0u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008addef: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008addf2: shufps xmm0, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008addf6: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008addf9: addps xmm0, xmmword ptr [0xa36270] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36270u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ade00: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ade03: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ade07: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ade0a: addps xmm2, xmmword ptr [0xa36280] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36280u), 16); xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008ade11: shufps xmm3, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ade15: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ade18: addps xmm4, xmmword ptr [0xa36290] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36290u), 16); xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ade1f: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ade22: movups xmmword ptr [eax + 0x10], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[4], 16);
    /* 008ade26: movups xmmword ptr [eax + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[2], 16);
    /* 008ade2a: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008ade2e: mov esp, ebx */ r_esp = r_ebx;
    /* 008ade30: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ade31: ret 8 */ FN_RET(0x008add6e); r_esp += 12; return;
}

void f_008ade40(void) /* ?sse2_D3DXQuaternionRotationMatrix@@YGPAUD3DXQUATERNION@@PAU1@PBUD3DXMATRIX@@@Z_0 */
{
    FN_ENTER(0x008ade40);
    /* 008ade40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008ade41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ade42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ade43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ade44: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008ade48: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008ade4c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fC = (a < b); }
    /* 008ade4f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008ade51: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 008ade54: fadd dword ptr [edx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x28u));
    /* 008ade57: fld dword ptr [0xb48b3c] */ FPUSH(R_F32((u32)(0xb48b3cu)));
    /* 008ade5d: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008ade5f: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008ade61: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 008ade64: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008ade67: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 008ade6a: jb 0x8adf0d */ if (fC) goto L_008adf0d;
L_008ade70:; BB(0x008ade70);
    /* 008ade70: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008ade72: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 008ade75: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008ade79: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008ade7c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008ade80: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008ade85: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fC = 0; }
    /* 008ade87: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008ade89: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008ade8b: cmova ebx, ecx */ if ((!fC&&!fZ)) { r_ebx = r_ecx; }
    /* 008ade8e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008ade92: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008ade97: fld dword ptr [esp + ebx*4] */ FPUSH(R_F32((u32)(r_esp+r_ebx*4)));
    /* 008ade9a: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008ade9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008ade9e: cmovae ecx, ebx */ if (!fC) { r_ecx = r_ebx; }
    /* 008adea1: fld dword ptr [0xb48b50] */ FPUSH(R_F32((u32)(0xb48b50u)));
    /* 008adea7: fadd dword ptr [esp + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ecx*4));
    /* 008adeaa: mov ebx, dword ptr [ecx*4 + 0xb48b30] */ r_ebx = R32((u32)(r_ecx*4+0xb48b30u));
    /* 008adeb1: fsub dword ptr [esp + ebx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*4));
    /* 008adeb4: mov ebp, dword ptr [ebx*4 + 0xb48b30] */ r_ebp = R32((u32)(r_ebx*4+0xb48b30u));
    /* 008adebb: lea esi, [edx + ecx*4] */ r_esi = (u32)(r_edx+r_ecx*4);
    /* 008adebe: fsub dword ptr [esp + ebp*4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebp*4));
    /* 008adec1: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008adec3: fld dword ptr [0xb48b58] */ FPUSH(R_F32((u32)(0xb48b58u)));
    /* 008adec9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008adecb: fmul dword ptr [0xb48b54] */ ST(0) = ST(0) * R_F32((u32)(0xb48b54u));
    /* 008aded1: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 008aded3: fstp dword ptr [eax + ecx*4] */ W_F32((u32)(r_eax+r_ecx*4), ST(0)); FPOP();
    /* 008aded6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008aded9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008adedb: fld dword ptr [ecx + ebx*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx*4)));
    /* 008adede: mov edi, ebx */ r_edi = r_ebx;
    /* 008adee0: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008adee3: fadd dword ptr [esi + edi] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edi));
    /* 008adee6: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008adee8: lea edx, [edx + ebx*4] */ r_edx = (u32)(r_edx+r_ebx*4);
    /* 008adeeb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008adeed: fstp dword ptr [eax + ebx*4] */ W_F32((u32)(r_eax+r_ebx*4), ST(0)); FPOP();
    /* 008adef0: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008adef2: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008adef5: fld dword ptr [ebx + esi] */ FPUSH(R_F32((u32)(r_ebx+r_esi)));
    /* 008adef8: fadd dword ptr [ecx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebp*4));
    /* 008adefb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008adefd: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 008adf00: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 008adf03: fsub dword ptr [ebx + edx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+r_edx));
    /* 008adf06: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008adf08: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008adf0b: jmp 0x8adf4a */ goto L_008adf4a;
L_008adf0d:; BB(0x008adf0d);
    /* 008adf0d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008adf0f: fadd dword ptr [0xb48b40] */ ST(0) = ST(0) + R_F32((u32)(0xb48b40u));
    /* 008adf15: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008adf17: fld dword ptr [0xb48b48] */ FPUSH(R_F32((u32)(0xb48b48u)));
    /* 008adf1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008adf1f: fmul dword ptr [0xb48b44] */ ST(0) = ST(0) * R_F32((u32)(0xb48b44u));
    /* 008adf25: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 008adf27: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008adf2a: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 008adf2d: fsub dword ptr [edx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x24u));
    /* 008adf30: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008adf32: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008adf34: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008adf37: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 008adf3a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008adf3c: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008adf3f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008adf42: fsub dword ptr [edx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x10u));
    /* 008adf45: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008adf47: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_008adf4a:; BB(0x008adf4a);
    /* 008adf4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008adf4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008adf4e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008adf4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008adf50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008adf51: ret 8 */ FN_RET(0x008ade40); r_esp += 12; return;
}

void f_008adf60(void) /* ?sse2_D3DXQuaternionRotationYawPitchRoll@@YGPAUD3DXQUATERNION@@PAU1@MMM@Z_0 */
{
    FN_ENTER(0x008adf60);
    /* 008adf60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adf61: mov ebx, esp */ r_ebx = r_esp;
    /* 008adf63: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adf66: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008adf69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008adf6c: jmp 0x8adf71 */ goto L_008adf71;
L_008adf71:; BB(0x008adf71);
    /* 008adf71: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adf74: movss xmm0, dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008adf79: movss xmm1, dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adf7e: movss xmm2, dword ptr [0xb48b80] */ { u32 v = R32((u32)(0xb48b80u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008adf86: unpcklps xmm0, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[0].d[0], a1 = xmm[0].d[1]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[0]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[1]; }
    /* 008adf89: movss xmm1, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adf8e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008adf92: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008adf96: unpcklps xmm2, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[2].d[0], a1 = xmm[2].d[1]; xmm[2].d[0] = a0; xmm[2].d[1] = s.d[0]; xmm[2].d[2] = a1; xmm[2].d[3] = s.d[1]; }
    /* 008adf99: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008adf9d: shufps xmm0, xmm2, 0x11 */ { XMM s = xmm[2]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfa1: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008adfa6: mulps xmm0, xmmword ptr [0xb48b70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48b70u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adfad: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008adfb0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008adfb4: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008adfb9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008adfbd: call 0x8bad40 */ r_esp -= 4; W32(r_esp, 0x8adfc2u); f_008bad40();
    /* 008adfc2: movaps xmm0, xmmword ptr [esp + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x10u), 16); xmm[0] = s; }
    /* 008adfc7: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008adfcc: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008adfcf: shufps xmm0, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfd3: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfd7: shufps xmm2, xmm1, 0x99 */ { XMM s = xmm[1]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adfdb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adfde: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfe2: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008adfe5: shufps xmm2, xmm2, 0xf7 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adfe9: shufps xmm3, xmm3, 0xa8 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adfed: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adff0: shufps xmm2, xmm2, 0x51 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adff4: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adff7: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adffa: shufps xmm3, xmm3, 1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adffe: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ae001: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ae006: xorps xmm0, xmmword ptr [0xb48b60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48b60u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ae00d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ae010: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ae015: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ae018: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ae01b: mov esp, ebx */ r_esp = r_ebx;
    /* 008ae01d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ae01e: ret 0x10 */ FN_RET(0x008adf60); r_esp += 20; return;
}

void f_008adf6e(void) /* ?sse2_D3DXQuaternionRotationYawPitchRoll$$1@@YGPAUD3DXQUATERNION@@PAU1@MMM@Z_0 */
{
    FN_ENTER(0x008adf6e);
    /* 008adf6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008adf6f: mov ebx, esp */ r_ebx = r_esp;
    /* 008adf71: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008adf74: movss xmm0, dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008adf79: movss xmm1, dword ptr [ebx + 0x14] */ { u32 v = R32((u32)(r_ebx+0x14u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adf7e: movss xmm2, dword ptr [0xb48b80] */ { u32 v = R32((u32)(0xb48b80u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008adf86: unpcklps xmm0, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[0].d[0], a1 = xmm[0].d[1]; xmm[0].d[0] = a0; xmm[0].d[1] = s.d[0]; xmm[0].d[2] = a1; xmm[0].d[3] = s.d[1]; }
    /* 008adf89: movss xmm1, dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008adf8e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008adf92: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008adf96: unpcklps xmm2, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[2].d[0], a1 = xmm[2].d[1]; xmm[2].d[0] = a0; xmm[2].d[1] = s.d[0]; xmm[2].d[2] = a1; xmm[2].d[3] = s.d[1]; }
    /* 008adf99: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 008adf9d: shufps xmm0, xmm2, 0x11 */ { XMM s = xmm[2]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfa1: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008adfa6: mulps xmm0, xmmword ptr [0xb48b70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48b70u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adfad: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008adfb0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008adfb4: movaps xmmword ptr [esp + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[0], 16);
    /* 008adfb9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008adfbd: call 0x8bad40 */ r_esp -= 4; W32(r_esp, 0x8adfc2u); f_008bad40();
    /* 008adfc2: movaps xmm0, xmmword ptr [esp + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x10u), 16); xmm[0] = s; }
    /* 008adfc7: movaps xmm1, xmmword ptr [esp + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esp+0x20u), 16); xmm[1] = s; }
    /* 008adfcc: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008adfcf: shufps xmm0, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfd3: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfd7: shufps xmm2, xmm1, 0x99 */ { XMM s = xmm[1]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[1]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adfdb: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008adfde: shufps xmm0, xmm0, 0x8a */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[0]; u32 hi2 = s.d[2]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008adfe2: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008adfe5: shufps xmm2, xmm2, 0xf7 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adfe9: shufps xmm3, xmm3, 0xa8 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adfed: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adff0: shufps xmm2, xmm2, 0x51 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008adff4: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008adff7: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008adffa: shufps xmm3, xmm3, 1 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008adffe: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ae001: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ae006: xorps xmm0, xmmword ptr [0xb48b60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xb48b60u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ae00d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ae010: movaps xmmword ptr [esp + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_esp+0x10u), &xmm[1], 16);
    /* 008ae015: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ae018: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008ae01b: mov esp, ebx */ r_esp = r_ebx;
    /* 008ae01d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ae01e: ret 0x10 */ FN_RET(0x008adf6e); r_esp += 20; return;
}

