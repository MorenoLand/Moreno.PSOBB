#include "protos.h"

void f_008abd60(void) /* ?sse_D3DXVec2Transform@@YGPAUD3DXVECTOR4@@PAU1@PBUD3DXVECTOR2@@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008abd60);
    /* 008abd60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008abd61: mov ebp, esp */ r_ebp = r_esp;
    /* 008abd63: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008abd66: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008abd69: movups xmm3, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[3] = s; }
    /* 008abd6c: movss xmm2, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008abd70: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abd74: movups xmm4, xmmword ptr [ecx + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x10u), 16); xmm[4] = s; }
    /* 008abd78: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abd7b: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008abd80: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abd84: movups xmm3, xmmword ptr [ecx + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x30u), 16); xmm[3] = s; }
    /* 008abd88: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abd8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abd8e: addps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abd91: addps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abd94: movups xmmword ptr [eax], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[2], 16);
    /* 008abd97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abd9a: mov esp, ebp */ r_esp = r_ebp;
    /* 008abd9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abd9d: ret 0xc */ FN_RET(0x008abd60); r_esp += 16; return;
}

void f_008abda0(void) /* ?sse_D3DXVec2TransformCoord@@YGPAUD3DXVECTOR2@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008abda0);
    /* 008abda0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008abda1: mov ebp, esp */ r_ebp = r_esp;
    /* 008abda3: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008abda6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008abda9: movups xmm3, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[3] = s; }
    /* 008abdac: movss xmm2, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008abdb0: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abdb4: movups xmm4, xmmword ptr [ecx + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x10u), 16); xmm[4] = s; }
    /* 008abdb8: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abdbb: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008abdc0: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abdc4: movups xmm3, xmmword ptr [ecx + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x30u), 16); xmm[3] = s; }
    /* 008abdc8: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abdcb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abdce: addps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abdd1: addps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abdd4: rcpps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = 1.0f / s.fs[0]; xmm[0].fs[1] = 1.0f / s.fs[1]; xmm[0].fs[2] = 1.0f / s.fs[2]; xmm[0].fs[3] = 1.0f / s.fs[3]; }
    /* 008abdd7: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008abdda: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abddd: addps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008abde0: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abde3: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008abde6: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abdea: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abded: movlps qword ptr [eax], xmm2 */ W64((u32)(r_eax), xmm[2].q[0]);
    /* 008abdf0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abdf3: mov esp, ebp */ r_esp = r_ebp;
    /* 008abdf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abdf6: ret 0xc */ FN_RET(0x008abda0); r_esp += 16; return;
}

void f_008abe00(void) /* ?sse_D3DXVec2TransformNormal@@YGPAUD3DXVECTOR2@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008abe00);
    /* 008abe00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008abe01: mov ebp, esp */ r_ebp = r_esp;
    /* 008abe03: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008abe06: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008abe09: movss xmm2, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008abe0d: movups xmm3, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[3] = s; }
    /* 008abe10: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abe14: movups xmm4, xmmword ptr [ecx + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+0x10u), 16); xmm[4] = s; }
    /* 008abe18: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008abe1d: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abe20: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abe24: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe27: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abe2a: addps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abe2d: movlps qword ptr [eax], xmm2 */ W64((u32)(r_eax), xmm[2].q[0]);
    /* 008abe30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008abe33: mov esp, ebp */ r_esp = r_ebp;
    /* 008abe35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008abe36: ret 0xc */ FN_RET(0x008abe00); r_esp += 16; return;
}

void f_008abe40(void) /* ?sse2_D3DXVec3TransformCoord@@YGPAUD3DXVECTOR3@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008abe40);
    /* 008abe40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abe41: mov ebx, esp */ r_ebx = r_esp;
    /* 008abe43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008abe46: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008abe49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008abe4c: jmp 0x8abe51 */ goto L_008abe51;
L_008abe51:; BB(0x008abe51);
    /* 008abe51: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008abe54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008abe57: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008abe5a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008abe5d: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008abe5f: jne 0x8abebc */ if (!fZ) goto L_008abebc;
L_008abe61:; BB(0x008abe61);
    /* 008abe61: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008abe66: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008abe69: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abe6d: movlps xmm0, qword ptr [ecx] */ xmm[0].q[0] = R64((u32)(r_ecx));
    /* 008abe70: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe74: addps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abe78: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008abe7b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008abe7f: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abe83: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abe86: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abe8a: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008abe8d: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008abe90: rcpps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = 1.0f / s.fs[0]; xmm[1].fs[1] = 1.0f / s.fs[1]; xmm[1].fs[2] = 1.0f / s.fs[2]; xmm[1].fs[3] = 1.0f / s.fs[3]; }
    /* 008abe93: movaps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2] = s; }
    /* 008abe96: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe99: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe9c: addps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abe9f: subps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008abea2: shufps xmm2, xmm2, 0xff */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abea6: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abea9: movlps qword ptr [edx], xmm0 */ W64((u32)(r_edx), xmm[0].q[0]);
    /* 008abeac: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008abeaf: movss dword ptr [edx + 8], xmm0 */ W32((u32)(r_edx+0x8u), xmm[0].d[0]);
    /* 008abeb4: mov eax, edx */ r_eax = r_edx;
    /* 008abeb6: mov esp, ebx */ r_esp = r_ebx;
    /* 008abeb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008abeb9: ret 0xc */ FN_RET(0x008abe40); r_esp += 16; return;
L_008abebc:; BB(0x008abebc);
    /* 008abebc: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008abebf: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008abec2: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008abec5: movhps xmm4, qword ptr [eax + 8] */ xmm[4].q[1] = R64((u32)(r_eax+0x8u));
    /* 008abec9: movlps xmm3, qword ptr [eax + 0x10] */ xmm[3].q[0] = R64((u32)(r_eax+0x10u));
    /* 008abecd: movss xmm5, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abed2: movhps xmm3, qword ptr [eax + 0x18] */ xmm[3].q[1] = R64((u32)(r_eax+0x18u));
    /* 008abed6: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abeda: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008abedd: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abee1: shufps xmm6, xmm6, 0x55 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abee5: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abee8: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008abeeb: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008abeef: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abef2: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008abef6: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008abefa: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abefd: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008abf01: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abf04: addps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf07: rcpps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = 1.0f / s.fs[0]; xmm[0].fs[1] = 1.0f / s.fs[1]; xmm[0].fs[2] = 1.0f / s.fs[2]; xmm[0].fs[3] = 1.0f / s.fs[3]; }
    /* 008abf0a: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008abf0d: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abf10: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abf13: addps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abf16: subps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 008abf19: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abf1d: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abf20: movlps qword ptr [edx], xmm4 */ W64((u32)(r_edx), xmm[4].q[0]);
    /* 008abf23: movhlps xmm4, xmm4 */ xmm[4].q[0] = xmm[4].q[1];
    /* 008abf26: movss dword ptr [edx + 8], xmm4 */ W32((u32)(r_edx+0x8u), xmm[4].d[0]);
    /* 008abf2b: mov eax, edx */ r_eax = r_edx;
    /* 008abf2d: mov esp, ebx */ r_esp = r_ebx;
    /* 008abf2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008abf30: ret 0xc */ FN_RET(0x008abe40); r_esp += 16; return;
}

void f_008abe4e(void) /* ?sse2_D3DXVec3TransformCoord$$1@@YGPAUD3DXVECTOR3@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008abe4e);
    /* 008abe4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abe4f: mov ebx, esp */ r_ebx = r_esp;
    /* 008abe51: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008abe54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008abe57: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008abe5a: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008abe5d: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008abe5f: jne 0x8abebc */ if (!fZ) goto L_008abebc;
L_008abe61:; BB(0x008abe61);
    /* 008abe61: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008abe66: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008abe69: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abe6d: movlps xmm0, qword ptr [ecx] */ xmm[0].q[0] = R64((u32)(r_ecx));
    /* 008abe70: mulps xmm1, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe74: addps xmm1, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abe78: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008abe7b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008abe7f: shufps xmm2, xmm2, 0x55 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abe83: mulps xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abe86: mulps xmm2, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008abe8a: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008abe8d: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008abe90: rcpps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = 1.0f / s.fs[0]; xmm[1].fs[1] = 1.0f / s.fs[1]; xmm[1].fs[2] = 1.0f / s.fs[2]; xmm[1].fs[3] = 1.0f / s.fs[3]; }
    /* 008abe93: movaps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2] = s; }
    /* 008abe96: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe99: mulps xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abe9c: addps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008abe9f: subps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008abea2: shufps xmm2, xmm2, 0xff */ { XMM s = xmm[2]; u32 lo = xmm[2].d[3]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abea6: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abea9: movlps qword ptr [edx], xmm0 */ W64((u32)(r_edx), xmm[0].q[0]);
    /* 008abeac: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008abeaf: movss dword ptr [edx + 8], xmm0 */ W32((u32)(r_edx+0x8u), xmm[0].d[0]);
    /* 008abeb4: mov eax, edx */ r_eax = r_edx;
    /* 008abeb6: mov esp, ebx */ r_esp = r_ebx;
    /* 008abeb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008abeb9: ret 0xc */ FN_RET(0x008abe4e); r_esp += 16; return;
L_008abebc:; BB(0x008abebc);
    /* 008abebc: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008abebf: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008abec2: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008abec5: movhps xmm4, qword ptr [eax + 8] */ xmm[4].q[1] = R64((u32)(r_eax+0x8u));
    /* 008abec9: movlps xmm3, qword ptr [eax + 0x10] */ xmm[3].q[0] = R64((u32)(r_eax+0x10u));
    /* 008abecd: movss xmm5, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abed2: movhps xmm3, qword ptr [eax + 0x18] */ xmm[3].q[1] = R64((u32)(r_eax+0x18u));
    /* 008abed6: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abeda: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008abedd: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008abee1: shufps xmm6, xmm6, 0x55 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abee5: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abee8: mulps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008abeeb: movlps xmm1, qword ptr [eax + 0x20] */ xmm[1].q[0] = R64((u32)(r_eax+0x20u));
    /* 008abeef: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abef2: movhps xmm1, qword ptr [eax + 0x28] */ xmm[1].q[1] = R64((u32)(r_eax+0x28u));
    /* 008abef6: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008abefa: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008abefd: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
    /* 008abf01: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abf04: addps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf07: rcpps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = 1.0f / s.fs[0]; xmm[0].fs[1] = 1.0f / s.fs[1]; xmm[0].fs[2] = 1.0f / s.fs[2]; xmm[0].fs[3] = 1.0f / s.fs[3]; }
    /* 008abf0a: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008abf0d: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abf10: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008abf13: addps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008abf16: subps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 008abf19: shufps xmm1, xmm1, 0xff */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008abf1d: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abf20: movlps qword ptr [edx], xmm4 */ W64((u32)(r_edx), xmm[4].q[0]);
    /* 008abf23: movhlps xmm4, xmm4 */ xmm[4].q[0] = xmm[4].q[1];
    /* 008abf26: movss dword ptr [edx + 8], xmm4 */ W32((u32)(r_edx+0x8u), xmm[4].d[0]);
    /* 008abf2b: mov eax, edx */ r_eax = r_edx;
    /* 008abf2d: mov esp, ebx */ r_esp = r_ebx;
    /* 008abf2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008abf30: ret 0xc */ FN_RET(0x008abe4e); r_esp += 16; return;
}

void f_008abf40(void) /* ?sse2_D3DXMatrixMultiply@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008abf40);
    /* 008abf40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abf41: mov ebx, esp */ r_ebx = r_esp;
    /* 008abf43: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008abf46: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008abf49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008abf4c: jmp 0x8abf51 */ goto L_008abf51;
L_008abf51:; BB(0x008abf51);
    /* 008abf51: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008abf54: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008abf57: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008abf5a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008abf5d: movss xmm4, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008abf61: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008abf65: movlps xmm3, qword ptr [ecx] */ xmm[3].q[0] = R64((u32)(r_ecx));
    /* 008abf68: movhps xmm3, qword ptr [ecx + 8] */ xmm[3].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008abf6c: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abf6f: movss xmm5, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abf74: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abf78: movlps xmm2, qword ptr [ecx + 0x10] */ xmm[2].q[0] = R64((u32)(r_ecx+0x10u));
    /* 008abf7c: movhps xmm2, qword ptr [ecx + 0x18] */ xmm[2].q[1] = R64((u32)(r_ecx+0x18u));
    /* 008abf80: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abf83: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf86: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abf8b: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abf8f: movlps xmm1, qword ptr [ecx + 0x20] */ xmm[1].q[0] = R64((u32)(r_ecx+0x20u));
    /* 008abf93: movhps xmm1, qword ptr [ecx + 0x28] */ xmm[1].q[1] = R64((u32)(r_ecx+0x28u));
    /* 008abf97: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abf9a: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf9d: movss xmm5, dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abfa2: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abfa6: movlps xmm0, qword ptr [ecx + 0x30] */ xmm[0].q[0] = R64((u32)(r_ecx+0x30u));
    /* 008abfaa: movhps xmm0, qword ptr [ecx + 0x38] */ xmm[0].q[1] = R64((u32)(r_ecx+0x38u));
    /* 008abfae: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abfb1: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abfb4: movss xmm5, dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abfb9: movss xmm6, dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfbe: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abfc2: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abfc5: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfc9: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfcc: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfcf: movss xmm6, dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfd4: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfd8: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfdb: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfde: movss xmm6, dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfe3: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfe7: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfea: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfed: movss xmm6, dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abff2: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abff6: mulps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abff9: mov ecx, eax */ r_ecx = r_eax;
    /* 008abffb: movss xmm7, dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac000: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac004: mulps xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac007: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac00a: movss xmm7, dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac00f: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac013: mulps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac016: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac019: movss xmm7, dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac01e: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac022: mulps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac025: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac028: movss xmm7, dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac02d: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac031: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac034: movss xmm3, dword ptr [edx + 0x34] */ { u32 v = R32((u32)(r_edx+0x34u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ac039: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac03d: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac040: addps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac043: movss xmm2, dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac048: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac04c: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac04f: movss xmm1, dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac054: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ac057: movhps qword ptr [ecx + 8], xmm4 */ W64((u32)(r_ecx+0x8u), xmm[4].q[1]);
    /* 008ac05b: movlps qword ptr [ecx + 0x10], xmm5 */ W64((u32)(r_ecx+0x10u), xmm[5].q[0]);
    /* 008ac05f: movhps qword ptr [ecx + 0x18], xmm5 */ W64((u32)(r_ecx+0x18u), xmm[5].q[1]);
    /* 008ac063: movlps qword ptr [ecx + 0x20], xmm6 */ W64((u32)(r_ecx+0x20u), xmm[6].q[0]);
    /* 008ac067: movhps qword ptr [ecx + 0x28], xmm6 */ W64((u32)(r_ecx+0x28u), xmm[6].q[1]);
    /* 008ac06b: addps xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac06e: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac072: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac075: addps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac078: movlps qword ptr [ecx + 0x30], xmm7 */ W64((u32)(r_ecx+0x30u), xmm[7].q[0]);
    /* 008ac07c: movhps qword ptr [ecx + 0x38], xmm7 */ W64((u32)(r_ecx+0x38u), xmm[7].q[1]);
    /* 008ac080: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac082: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac083: ret 0xc */ FN_RET(0x008abf40); r_esp += 16; return;
}

void f_008abf4e(void) /* ?sse2_D3DXMatrixMultiply$$1@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008abf4e);
    /* 008abf4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008abf4f: mov ebx, esp */ r_ebx = r_esp;
    /* 008abf51: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008abf54: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008abf57: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008abf5a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008abf5d: movss xmm4, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008abf61: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008abf65: movlps xmm3, qword ptr [ecx] */ xmm[3].q[0] = R64((u32)(r_ecx));
    /* 008abf68: movhps xmm3, qword ptr [ecx + 8] */ xmm[3].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008abf6c: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008abf6f: movss xmm5, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abf74: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abf78: movlps xmm2, qword ptr [ecx + 0x10] */ xmm[2].q[0] = R64((u32)(r_ecx+0x10u));
    /* 008abf7c: movhps xmm2, qword ptr [ecx + 0x18] */ xmm[2].q[1] = R64((u32)(r_ecx+0x18u));
    /* 008abf80: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abf83: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf86: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abf8b: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abf8f: movlps xmm1, qword ptr [ecx + 0x20] */ xmm[1].q[0] = R64((u32)(r_ecx+0x20u));
    /* 008abf93: movhps xmm1, qword ptr [ecx + 0x28] */ xmm[1].q[1] = R64((u32)(r_ecx+0x28u));
    /* 008abf97: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abf9a: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abf9d: movss xmm5, dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abfa2: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abfa6: movlps xmm0, qword ptr [ecx + 0x30] */ xmm[0].q[0] = R64((u32)(r_ecx+0x30u));
    /* 008abfaa: movhps xmm0, qword ptr [ecx + 0x38] */ xmm[0].q[1] = R64((u32)(r_ecx+0x38u));
    /* 008abfae: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abfb1: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008abfb4: movss xmm5, dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008abfb9: movss xmm6, dword ptr [edx + 0x14] */ { u32 v = R32((u32)(r_edx+0x14u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfbe: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008abfc2: mulps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008abfc5: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfc9: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfcc: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfcf: movss xmm6, dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfd4: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfd8: mulps xmm6, xmm1 */ { XMM s = xmm[1]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfdb: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfde: movss xmm6, dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abfe3: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abfe7: mulps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abfea: addps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008abfed: movss xmm6, dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008abff2: shufps xmm6, xmm6, 0 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[0]; u32 lo2 = xmm[6].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008abff6: mulps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008abff9: mov ecx, eax */ r_ecx = r_eax;
    /* 008abffb: movss xmm7, dword ptr [edx + 0x24] */ { u32 v = R32((u32)(r_edx+0x24u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac000: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac004: mulps xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac007: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac00a: movss xmm7, dword ptr [edx + 0x28] */ { u32 v = R32((u32)(r_edx+0x28u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac00f: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac013: mulps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac016: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac019: movss xmm7, dword ptr [edx + 0x2c] */ { u32 v = R32((u32)(r_edx+0x2cu)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac01e: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac022: mulps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac025: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 008ac028: movss xmm7, dword ptr [edx + 0x30] */ { u32 v = R32((u32)(r_edx+0x30u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac02d: shufps xmm7, xmm7, 0 */ { XMM s = xmm[7]; u32 lo = xmm[7].d[0]; u32 lo2 = xmm[7].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[7].d[0] = lo; xmm[7].d[1] = lo2; xmm[7].d[2] = hi; xmm[7].d[3] = hi2; }
    /* 008ac031: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac034: movss xmm3, dword ptr [edx + 0x34] */ { u32 v = R32((u32)(r_edx+0x34u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ac039: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac03d: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac040: addps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac043: movss xmm2, dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac048: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac04c: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac04f: movss xmm1, dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac054: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ac057: movhps qword ptr [ecx + 8], xmm4 */ W64((u32)(r_ecx+0x8u), xmm[4].q[1]);
    /* 008ac05b: movlps qword ptr [ecx + 0x10], xmm5 */ W64((u32)(r_ecx+0x10u), xmm[5].q[0]);
    /* 008ac05f: movhps qword ptr [ecx + 0x18], xmm5 */ W64((u32)(r_ecx+0x18u), xmm[5].q[1]);
    /* 008ac063: movlps qword ptr [ecx + 0x20], xmm6 */ W64((u32)(r_ecx+0x20u), xmm[6].q[0]);
    /* 008ac067: movhps qword ptr [ecx + 0x28], xmm6 */ W64((u32)(r_ecx+0x28u), xmm[6].q[1]);
    /* 008ac06b: addps xmm7, xmm2 */ { XMM s = xmm[2]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac06e: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac072: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac075: addps xmm7, xmm1 */ { XMM s = xmm[1]; xmm[7].fs[0] = xmm[7].fs[0] + s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] + s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] + s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] + s.fs[3]; }
    /* 008ac078: movlps qword ptr [ecx + 0x30], xmm7 */ W64((u32)(r_ecx+0x30u), xmm[7].q[0]);
    /* 008ac07c: movhps qword ptr [ecx + 0x38], xmm7 */ W64((u32)(r_ecx+0x38u), xmm[7].q[1]);
    /* 008ac080: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac082: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac083: ret 0xc */ FN_RET(0x008abf4e); r_esp += 16; return;
}

