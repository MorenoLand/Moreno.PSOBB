#include "protos.h"

void f_008ac090(void) /* ?sse2_D3DXVec3Normalize@@YGPAUD3DXVECTOR3@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ac090);
    /* 008ac090: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac091: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac093: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac096: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ac099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ac09c: jmp 0x8ac0a1 */ goto L_008ac0a1;
L_008ac0a1:; BB(0x008ac0a1);
    /* 008ac0a1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ac0a4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac0a7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ac0aa: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac0ae: movss xmm6, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac0b3: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ac0b8: movss xmm1, dword ptr [0xb488c0] */ { u32 v = R32((u32)(0xb488c0u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac0c0: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac0c3: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac0c7: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ac0ca: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac0ce: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ac0d2: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ac0d5: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac0d9: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ac0dc: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ac0df: addss xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac0e3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ac0e6: jbe 0x8ac0ff */ if ((fC||fZ)) goto L_008ac0ff;
L_008ac0e8:; BB(0x008ac0e8);
    /* 008ac0e8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ac0eb: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ac0ef: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ac0f4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac0f9: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac0fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac0fc: ret 8 */ FN_RET(0x008ac090); r_esp += 12; return;
L_008ac0ff:; BB(0x008ac0ff);
    /* 008ac0ff: movss xmm1, dword ptr [0xb488c8] */ { u32 v = R32((u32)(0xb488c8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac107: movss xmm2, dword ptr [0xb488c4] */ { u32 v = R32((u32)(0xb488c4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac10f: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ac112: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ac116: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac11a: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac11e: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac122: subss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ac126: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac129: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac12c: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac130: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac133: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac137: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ac13b: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac13e: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac142: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ac147: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac14b: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac150: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac152: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac153: ret 8 */ FN_RET(0x008ac090); r_esp += 12; return;
}

void f_008ac09e(void) /* ?sse2_D3DXVec3Normalize$$1@@YGPAUD3DXVECTOR3@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ac09e);
    /* 008ac09e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac09f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac0a1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ac0a4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac0a7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ac0aa: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac0ae: movss xmm6, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac0b3: movss xmm5, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ac0b8: movss xmm1, dword ptr [0xb488c0] */ { u32 v = R32((u32)(0xb488c0u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac0c0: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac0c3: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac0c7: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ac0ca: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac0ce: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ac0d2: movaps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3] = s; }
    /* 008ac0d5: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac0d9: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ac0dc: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ac0df: addss xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac0e3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ac0e6: jbe 0x8ac0ff */ if ((fC||fZ)) goto L_008ac0ff;
L_008ac0e8:; BB(0x008ac0e8);
    /* 008ac0e8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ac0eb: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ac0ef: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ac0f4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac0f9: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac0fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac0fc: ret 8 */ FN_RET(0x008ac09e); r_esp += 12; return;
L_008ac0ff:; BB(0x008ac0ff);
    /* 008ac0ff: movss xmm1, dword ptr [0xb488c8] */ { u32 v = R32((u32)(0xb488c8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac107: movss xmm2, dword ptr [0xb488c4] */ { u32 v = R32((u32)(0xb488c4u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac10f: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008ac112: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ac116: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac11a: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac11e: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac122: subss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ac126: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac129: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac12c: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac130: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac133: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac137: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ac13b: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac13e: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac142: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ac147: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac14b: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac150: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac152: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac153: ret 8 */ FN_RET(0x008ac09e); r_esp += 12; return;
}

void f_008ac160(void) /* ?sse2_D3DXPlaneNormalize@@YGPAUD3DXPLANE@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ac160);
    /* 008ac160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac161: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac163: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac166: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ac169: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ac16c: jmp 0x8ac171 */ goto L_008ac171;
L_008ac171:; BB(0x008ac171);
    /* 008ac171: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ac174: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac177: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ac17a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac17e: movss xmm4, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ac183: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac188: movss xmm1, dword ptr [0xb488cc] */ { u32 v = R32((u32)(0xb488ccu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac190: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac193: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac197: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ac19a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac19e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ac1a2: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ac1a5: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac1a9: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ac1ac: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ac1af: addss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac1b3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ac1b6: jbe 0x8ac1d4 */ if ((fC||fZ)) goto L_008ac1d4;
L_008ac1b8:; BB(0x008ac1b8);
    /* 008ac1b8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ac1bb: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ac1bf: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ac1c4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac1c9: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ac1ce: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac1d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac1d1: ret 8 */ FN_RET(0x008ac160); r_esp += 12; return;
L_008ac1d4:; BB(0x008ac1d4);
    /* 008ac1d4: movss xmm1, dword ptr [0xb488d4] */ { u32 v = R32((u32)(0xb488d4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac1dc: movss xmm2, dword ptr [0xb488d0] */ { u32 v = R32((u32)(0xb488d0u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac1e4: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ac1e7: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ac1eb: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac1ef: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac1f3: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac1f7: subss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ac1fb: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac1fe: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac201: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac205: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac208: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac20c: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ac210: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac213: mulss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac217: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ac21c: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac21f: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac223: movss dword ptr [eax + 8], xmm1 */ W32((u32)(r_eax+0x8u), xmm[1].d[0]);
    /* 008ac228: mulss xmm0, dword ptr [edx + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac22d: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ac232: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac234: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac235: ret 8 */ FN_RET(0x008ac160); r_esp += 12; return;
}

void f_008ac16e(void) /* ?sse2_D3DXPlaneNormalize$$1@@YGPAUD3DXPLANE@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ac16e);
    /* 008ac16e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac16f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac171: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008ac174: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac177: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ac17a: movss xmm0, dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac17e: movss xmm4, dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ac183: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac188: movss xmm1, dword ptr [0xb488cc] */ { u32 v = R32((u32)(0xb488ccu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac190: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac193: mulss xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac197: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008ac19a: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac19e: addss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; }
    /* 008ac1a2: movaps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3] = s; }
    /* 008ac1a5: mulss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac1a9: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ac1ac: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008ac1af: addss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac1b3: comiss xmm1, xmm3 */ { XMM s = xmm[3]; float a = xmm[1].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ac1b6: jbe 0x8ac1d4 */ if ((fC||fZ)) goto L_008ac1d4;
L_008ac1b8:; BB(0x008ac1b8);
    /* 008ac1b8: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008ac1bb: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ac1bf: movss dword ptr [eax + 4], xmm0 */ W32((u32)(r_eax+0x4u), xmm[0].d[0]);
    /* 008ac1c4: movss dword ptr [eax + 8], xmm0 */ W32((u32)(r_eax+0x8u), xmm[0].d[0]);
    /* 008ac1c9: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ac1ce: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac1d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac1d1: ret 8 */ FN_RET(0x008ac16e); r_esp += 12; return;
L_008ac1d4:; BB(0x008ac1d4);
    /* 008ac1d4: movss xmm1, dword ptr [0xb488d4] */ { u32 v = R32((u32)(0xb488d4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac1dc: movss xmm2, dword ptr [0xb488d0] */ { u32 v = R32((u32)(0xb488d0u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac1e4: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008ac1e7: rsqrtss xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ac1eb: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac1ef: mulss xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac1f3: mulss xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac1f7: subss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008ac1fb: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac1fe: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac201: mulss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac205: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac208: mulss xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac20c: movss dword ptr [eax], xmm1 */ W32((u32)(r_eax), xmm[1].d[0]);
    /* 008ac210: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac213: mulss xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac217: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ac21c: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac21f: mulss xmm1, xmm6 */ { XMM s = xmm[6]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac223: movss dword ptr [eax + 8], xmm1 */ W32((u32)(r_eax+0x8u), xmm[1].d[0]);
    /* 008ac228: mulss xmm0, dword ptr [edx + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_edx+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac22d: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008ac232: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac234: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac235: ret 8 */ FN_RET(0x008ac16e); r_esp += 12; return;
}

void f_008ac240(void) /* ?sse2_D3DXVec4Cross@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11@Z */
{
    FN_ENTER(0x008ac240);
    /* 008ac240: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac241: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac243: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac246: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ac249: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ac24c: jmp 0x8ac251 */ goto L_008ac251;
L_008ac251:; BB(0x008ac251);
    /* 008ac251: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac252: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008ac255: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac258: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008ac25b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ac25e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac261: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ac264: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008ac268: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008ac26b: movhps xmm2, qword ptr [ecx + 8] */ xmm[2].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ac26f: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac273: movlps xmm1, qword ptr [ebp] */ xmm[1].q[0] = R64((u32)(r_ebp));
    /* 008ac277: movhps xmm1, qword ptr [ebp + 8] */ xmm[1].q[1] = R64((u32)(r_ebp+0x8u));
    /* 008ac27b: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac27f: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac282: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac286: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ac289: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac28d: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac290: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac293: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac296: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac299: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac29d: subps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ac2a0: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008ac2a3: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac2a7: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac2aa: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac2ae: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ac2b1: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ac2b5: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ac2b8: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac2bc: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac2bf: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac2c2: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac2c5: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ac2c9: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ac2cc: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac2cf: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac2d2: xorps xmm3, xmmword ptr [0xa35fe0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa35fe0u), 16); xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008ac2d9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008ac2dc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ac2df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac2e0: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac2e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac2e3: ret 0x10 */ FN_RET(0x008ac240); r_esp += 20; return;
}

void f_008ac24e(void) /* ?sse2_D3DXVec4Cross$$1@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11@Z */
{
    FN_ENTER(0x008ac24e);
    /* 008ac24e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac24f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac251: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac252: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008ac255: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac258: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008ac25b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008ac25e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac261: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008ac264: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008ac268: movlps xmm2, qword ptr [ecx] */ xmm[2].q[0] = R64((u32)(r_ecx));
    /* 008ac26b: movhps xmm2, qword ptr [ecx + 8] */ xmm[2].q[1] = R64((u32)(r_ecx+0x8u));
    /* 008ac26f: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac273: movlps xmm1, qword ptr [ebp] */ xmm[1].q[0] = R64((u32)(r_ebp));
    /* 008ac277: movhps xmm1, qword ptr [ebp + 8] */ xmm[1].q[1] = R64((u32)(r_ebp+0x8u));
    /* 008ac27b: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac27f: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac282: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac286: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ac289: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac28d: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac290: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac293: mulps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac296: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac299: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac29d: subps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008ac2a0: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008ac2a3: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac2a7: mulps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac2aa: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac2ae: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ac2b1: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ac2b5: movaps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6] = s; }
    /* 008ac2b8: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac2bc: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac2bf: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac2c2: addps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac2c5: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ac2c9: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ac2cc: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac2cf: addps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac2d2: xorps xmm3, xmmword ptr [0xa35fe0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa35fe0u), 16); xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008ac2d9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008ac2dc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ac2df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac2e0: mov esp, ebx */ r_esp = r_ebx;
    /* 008ac2e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ac2e3: ret 0x10 */ FN_RET(0x008ac24e); r_esp += 20; return;
}

void f_008ac2f0(void) /* ?sse_D3DXVec4Normalize@@YGPAUD3DXVECTOR4@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ac2f0);
    /* 008ac2f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac2f1: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac2f3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac2f6: movss xmm0, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac2fa: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac2ff: movss xmm2, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac304: movss xmm3, dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ac309: movss xmm4, xmm0 */ xmm[4].d[0] = xmm[0].d[0];
    /* 008ac30d: movss xmm5, xmm1 */ xmm[5].d[0] = xmm[1].d[0];
    /* 008ac311: movss xmm6, xmm2 */ xmm[6].d[0] = xmm[2].d[0];
    /* 008ac315: movss xmm7, xmm3 */ xmm[7].d[0] = xmm[3].d[0];
    /* 008ac319: mulss xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac31d: mulss xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac321: mulss xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 008ac325: addss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 008ac329: mulss xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; }
    /* 008ac32d: addss xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008ac331: addss xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 008ac335: rsqrtss xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ac339: movss xmm6, xmm5 */ xmm[6].d[0] = xmm[5].d[0];
    /* 008ac33d: mulss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac341: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ac345: movss xmm5, dword ptr [0xa36000] */ { u32 v = R32((u32)(0xa36000u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ac34d: subss xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; }
    /* 008ac351: mulss xmm5, dword ptr [0xa35ff0] */ { XMM s; s.d[0] = R32((u32)(0xa35ff0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac359: mulss xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac35d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac360: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ac364: mulss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac368: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ac36c: mulss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac370: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ac375: mulss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac379: movss dword ptr [eax + 8], xmm2 */ W32((u32)(r_eax+0x8u), xmm[2].d[0]);
    /* 008ac37e: movss dword ptr [eax + 0xc], xmm3 */ W32((u32)(r_eax+0xcu), xmm[3].d[0]);
    /* 008ac383: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac386: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac388: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac389: ret 8 */ FN_RET(0x008ac2f0); r_esp += 12; return;
}

void f_008ac390(void) /* ?sse_D3DXVec3CatmullRom@@YGPAUD3DXVECTOR3@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac390);
    /* 008ac390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac391: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac393: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac398: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac39c: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac3a0: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac3a4: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac3a8: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac3ac: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac3b0: mulps xmm0, xmmword ptr [0xa36040] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36040u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac3b7: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac3bb: mulps xmm1, xmmword ptr [0xa36030] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36030u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac3c2: addps xmm0, xmmword ptr [0xa36020] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36020u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac3c9: mulps xmm2, xmmword ptr [0xa36010] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36010u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac3d0: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac3d3: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac3d6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac3d9: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac3dc: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac3df: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac3e2: shufps xmm1, xmm0, 0x55 */ { XMM s = xmm[0]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac3e6: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac3e9: shufps xmm2, xmm0, 0xaa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac3ed: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac3f0: shufps xmm3, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac3f4: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac3f8: movss xmm4, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ac3fd: movhps xmm4, qword ptr [eax] */ xmm[4].q[1] = R64((u32)(r_eax));
    /* 008ac400: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac403: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac406: movss xmm5, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ac40b: movhps xmm5, qword ptr [ecx] */ xmm[5].q[1] = R64((u32)(r_ecx));
    /* 008ac40e: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ac411: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac416: movhps xmm6, qword ptr [edx] */ xmm[6].q[1] = R64((u32)(r_edx));
    /* 008ac419: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac41c: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac41f: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac422: movss xmm7, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac427: movhps xmm7, qword ptr [eax] */ xmm[7].q[1] = R64((u32)(r_eax));
    /* 008ac42a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac42d: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac430: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac433: movhps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[1]);
    /* 008ac436: movss dword ptr [ecx + 8], xmm4 */ W32((u32)(r_ecx+0x8u), xmm[4].d[0]);
    /* 008ac43b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac43e: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac440: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac441: ret 0x18 */ FN_RET(0x008ac390); r_esp += 28; return;
}

void f_008ac450(void) /* ?sse_D3DXVec2CatmullRom@@YGPAUD3DXVECTOR2@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac450);
    /* 008ac450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac451: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac453: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac458: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac45c: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac460: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac464: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac468: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac46c: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac470: mulps xmm0, xmmword ptr [0xa36040] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36040u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac477: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac47b: mulps xmm1, xmmword ptr [0xa36030] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36030u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac482: addps xmm0, xmmword ptr [0xa36020] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36020u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac489: mulps xmm2, xmmword ptr [0xa36010] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36010u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac490: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac493: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac496: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac499: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac49c: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac49f: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac4a2: shufps xmm2, xmm0, 0xfa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac4a6: shufps xmm0, xmm0, 0x50 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac4aa: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008ac4ad: movhps xmm4, qword ptr [ecx] */ xmm[4].q[1] = R64((u32)(r_ecx));
    /* 008ac4b0: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac4b3: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac4b6: movlps xmm6, qword ptr [edx] */ xmm[6].q[0] = R64((u32)(r_edx));
    /* 008ac4b9: movhps xmm6, qword ptr [eax] */ xmm[6].q[1] = R64((u32)(r_eax));
    /* 008ac4bc: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac4bf: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac4c2: movhlps xmm6, xmm4 */ xmm[6].q[0] = xmm[4].q[1];
    /* 008ac4c5: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac4c8: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac4cb: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ac4ce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac4d1: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac4d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac4d4: ret 0x18 */ FN_RET(0x008ac450); r_esp += 28; return;
}

void f_008ac4e0(void) /* ?sse_D3DXVec4CatmullRom@@YGPAUD3DXVECTOR4@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac4e0);
    /* 008ac4e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac4e1: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac4e3: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac4e8: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac4ec: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac4f0: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac4f4: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac4f8: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac4fc: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac500: mulps xmm0, xmmword ptr [0xa36040] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36040u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac507: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac50b: mulps xmm1, xmmword ptr [0xa36030] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36030u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac512: addps xmm0, xmmword ptr [0xa36020] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36020u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac519: mulps xmm2, xmmword ptr [0xa36010] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36010u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac520: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac523: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac526: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac529: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008ac52c: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac52f: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac532: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac535: shufps xmm1, xmm0, 0x55 */ { XMM s = xmm[0]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac539: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac53c: shufps xmm2, xmm0, 0xaa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac540: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac543: shufps xmm3, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac547: xorps xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].q[0] = xmm[5].q[0] ^ s.q[0]; xmm[5].q[1] = xmm[5].q[1] ^ s.q[1]; }
    /* 008ac54a: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac54e: movups xmm4, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[4] = s; }
    /* 008ac551: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac554: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac557: xorps xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].q[0] = xmm[6].q[0] ^ s.q[0]; xmm[6].q[1] = xmm[6].q[1] ^ s.q[1]; }
    /* 008ac55a: movups xmm5, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[5] = s; }
    /* 008ac55d: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ac560: xorps xmm7, xmm7 */ { XMM s = xmm[7]; xmm[7].q[0] = xmm[7].q[0] ^ s.q[0]; xmm[7].q[1] = xmm[7].q[1] ^ s.q[1]; }
    /* 008ac563: movups xmm6, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[6] = s; }
    /* 008ac566: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac569: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac56c: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac56f: movups xmm7, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[7] = s; }
    /* 008ac572: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac575: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac578: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac57b: movups xmmword ptr [ecx], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[4], 16);
    /* 008ac57e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac581: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac583: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac584: ret 0x18 */ FN_RET(0x008ac4e0); r_esp += 28; return;
}

void f_008ac590(void) /* ?sse_D3DXVec3Hermite@@YGPAUD3DXVECTOR3@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac590);
    /* 008ac590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac591: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac593: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac598: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac59c: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac5a0: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac5a4: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac5a8: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac5ac: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac5b0: mulps xmm0, xmmword ptr [0xa36080] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36080u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac5b7: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac5bb: mulps xmm1, xmmword ptr [0xa36070] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36070u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac5c2: addss xmm0, dword ptr [0xa36060] */ { XMM s; s.d[0] = R32((u32)(0xa36060u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008ac5ca: mulps xmm2, xmmword ptr [0xa36050] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36050u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac5d1: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac5d4: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac5d7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac5da: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac5dd: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac5e0: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac5e3: shufps xmm1, xmm0, 0x55 */ { XMM s = xmm[0]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac5e7: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac5ea: shufps xmm2, xmm0, 0xaa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac5ee: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac5f1: shufps xmm3, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac5f5: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac5f9: movss xmm4, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ac5fe: movhps xmm4, qword ptr [eax] */ xmm[4].q[1] = R64((u32)(r_eax));
    /* 008ac601: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac604: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac607: movss xmm5, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ac60c: movhps xmm5, qword ptr [ecx] */ xmm[5].q[1] = R64((u32)(r_ecx));
    /* 008ac60f: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ac612: movss xmm6, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 008ac617: movhps xmm6, qword ptr [edx] */ xmm[6].q[1] = R64((u32)(r_edx));
    /* 008ac61a: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac61d: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac620: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac623: movss xmm7, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[7].d[0] = v; xmm[7].d[1] = 0; xmm[7].d[2] = 0; xmm[7].d[3] = 0; }
    /* 008ac628: movhps xmm7, qword ptr [eax] */ xmm[7].q[1] = R64((u32)(r_eax));
    /* 008ac62b: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac62e: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac631: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac634: movhps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[1]);
    /* 008ac637: movss dword ptr [ecx + 8], xmm4 */ W32((u32)(r_ecx+0x8u), xmm[4].d[0]);
    /* 008ac63c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac63f: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac641: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac642: ret 0x18 */ FN_RET(0x008ac590); r_esp += 28; return;
}

void f_008ac650(void) /* ?sse_D3DXVec4Hermite@@YGPAUD3DXVECTOR4@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac650);
    /* 008ac650: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac651: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac653: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac658: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac65c: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac660: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac664: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac668: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac66c: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac670: mulps xmm0, xmmword ptr [0xa36080] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36080u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac677: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac67b: mulps xmm1, xmmword ptr [0xa36070] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36070u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac682: addss xmm0, dword ptr [0xa36060] */ { XMM s; s.d[0] = R32((u32)(0xa36060u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008ac68a: mulps xmm2, xmmword ptr [0xa36050] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36050u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac691: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac694: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac697: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac69a: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac69d: shufps xmm1, xmm0, 0x55 */ { XMM s = xmm[0]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac6a1: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac6a4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac6a7: shufps xmm2, xmm0, 0xaa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac6ab: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac6ae: shufps xmm3, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac6b2: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac6b5: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac6b9: movups xmm4, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[4] = s; }
    /* 008ac6bc: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac6bf: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac6c2: movups xmm5, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[5] = s; }
    /* 008ac6c5: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ac6c8: movups xmm6, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[6] = s; }
    /* 008ac6cb: addps xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac6ce: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac6d1: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac6d4: movups xmm7, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[7] = s; }
    /* 008ac6d7: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac6da: mulps xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 008ac6dd: addps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac6e0: movups xmmword ptr [ecx], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ecx), &xmm[4], 16);
    /* 008ac6e3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac6e6: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac6e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac6e9: ret 0x18 */ FN_RET(0x008ac650); r_esp += 28; return;
}

void f_008ac6f0(void) /* ?sse_D3DXVec2Hermite@@YGPAUD3DXVECTOR2@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ac6f0);
    /* 008ac6f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac6f1: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac6f3: movss xmm0, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac6f8: movss xmm1, xmm0 */ xmm[1].d[0] = xmm[0].d[0];
    /* 008ac6fc: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ac700: movss xmm2, xmm0 */ xmm[2].d[0] = xmm[0].d[0];
    /* 008ac704: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac708: mulss xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ac70c: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac710: mulps xmm0, xmmword ptr [0xa36080] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36080u), 16); xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac717: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac71b: mulps xmm1, xmmword ptr [0xa36070] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36070u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac722: addss xmm0, dword ptr [0xa36060] */ { XMM s; s.d[0] = R32((u32)(0xa36060u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008ac72a: mulps xmm2, xmmword ptr [0xa36050] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36050u), 16); xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac731: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac734: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac737: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac73a: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008ac73d: shufps xmm2, xmm0, 0xfa */ { XMM s = xmm[0]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac741: shufps xmm0, xmm0, 0x50 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac745: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac748: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac74b: movlps xmm4, qword ptr [eax] */ xmm[4].q[0] = R64((u32)(r_eax));
    /* 008ac74e: movhps xmm4, qword ptr [ecx] */ xmm[4].q[1] = R64((u32)(r_ecx));
    /* 008ac751: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008ac754: mulps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac757: movlps xmm6, qword ptr [edx] */ xmm[6].q[0] = R64((u32)(r_edx));
    /* 008ac75a: movhps xmm6, qword ptr [eax] */ xmm[6].q[1] = R64((u32)(r_eax));
    /* 008ac75d: mulps xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] * s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] * s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] * s.fs[3]; }
    /* 008ac760: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008ac763: addps xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac766: movhlps xmm3, xmm4 */ xmm[3].q[0] = xmm[4].q[1];
    /* 008ac769: addps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008ac76c: movlps qword ptr [ecx], xmm4 */ W64((u32)(r_ecx), xmm[4].q[0]);
    /* 008ac76f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac772: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac774: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac775: ret 0x18 */ FN_RET(0x008ac6f0); r_esp += 28; return;
}

void f_008ac780(void) /* ?sse_D3DXVec3BaryCentric@@YGPAUD3DXVECTOR3@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008ac780);
    /* 008ac780: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac781: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac783: movss xmm0, dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac788: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac78b: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac78f: movss xmm2, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac794: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac797: movhps xmm2, qword ptr [eax] */ xmm[2].q[1] = R64((u32)(r_eax));
    /* 008ac79a: movss xmm1, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac79f: movss xmm3, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ac7a4: movhps xmm3, qword ptr [ecx] */ xmm[3].q[1] = R64((u32)(r_ecx));
    /* 008ac7a7: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac7ab: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008ac7ae: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008ac7b1: movss xmm4, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008ac7b6: movhps xmm4, qword ptr [eax] */ xmm[4].q[1] = R64((u32)(r_eax));
    /* 008ac7b9: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac7bc: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac7bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac7c2: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac7c5: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac7c8: addps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac7cb: movss dword ptr [eax + 8], xmm3 */ W32((u32)(r_eax+0x8u), xmm[3].d[0]);
    /* 008ac7d0: movhps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[1]);
    /* 008ac7d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac7d6: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac7d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac7d9: ret 0x18 */ FN_RET(0x008ac780); r_esp += 28; return;
}

void f_008ac7e0(void) /* ?sse_D3DXVec4BaryCentric@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008ac7e0);
    /* 008ac7e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac7e1: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac7e3: movss xmm0, dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac7e8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac7eb: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac7ef: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac7f2: movups xmm2, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[2] = s; }
    /* 008ac7f5: movss xmm1, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac7fa: movups xmm3, xmmword ptr [ecx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx), 16); xmm[3] = s; }
    /* 008ac7fd: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac801: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008ac804: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008ac807: movups xmm4, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[4] = s; }
    /* 008ac80a: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac80d: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac810: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac813: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac816: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac819: addps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac81c: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008ac81f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac822: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac824: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac825: ret 0x18 */ FN_RET(0x008ac7e0); r_esp += 28; return;
}

void f_008ac830(void) /* ?sse_D3DXVec2BaryCentric@@YGPAUD3DXVECTOR2@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008ac830);
    /* 008ac830: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac831: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac833: xorps xmm2, xmm2 */ { XMM s = xmm[2]; xmm[2].q[0] = xmm[2].q[0] ^ s.q[0]; xmm[2].q[1] = xmm[2].q[1] ^ s.q[1]; }
    /* 008ac836: movss xmm0, dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ac83b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac83e: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac842: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 008ac845: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac848: movhps xmm2, qword ptr [eax] */ xmm[2].q[1] = R64((u32)(r_eax));
    /* 008ac84b: movss xmm1, dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac850: movhps xmm3, qword ptr [ecx] */ xmm[3].q[1] = R64((u32)(r_ecx));
    /* 008ac853: xorps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008ac856: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac85a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008ac85d: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008ac860: movhps xmm4, qword ptr [eax] */ xmm[4].q[1] = R64((u32)(r_eax));
    /* 008ac863: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac866: subps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac869: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac86c: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac86f: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac872: addps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac875: movhps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[1]);
    /* 008ac878: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac87b: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac87d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac87e: ret 0x18 */ FN_RET(0x008ac830); r_esp += 28; return;
}

void f_008ac890(void) /* ?sse_D3DXPlaneIntersectLine@@YGPAUD3DXVECTOR3@@PAU1@PBUD3DXPLANE@@PBU1@2@Z */
{
    FN_ENTER(0x008ac890);
    /* 008ac890: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ac891: mov ebp, esp */ r_ebp = r_esp;
    /* 008ac893: sub esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ac896: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ac899: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008ac89c: lea esi, [esi] */ r_esi = (u32)(r_esi);
    /* 008ac8a0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ac8a3: movups xmm0, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[0] = s; }
    /* 008ac8a6: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008ac8a9: movss xmm1, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ac8ae: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008ac8b1: movhps xmm1, qword ptr [ecx] */ xmm[1].q[1] = R64((u32)(r_ecx));
    /* 008ac8b4: movss xmm2, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ac8b9: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ac8bc: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac8c0: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008ac8c3: shufps xmm4, xmm4, 0xff */ { XMM s = xmm[4]; u32 lo = xmm[4].d[3]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ac8c7: movhps xmm2, qword ptr [edx] */ xmm[2].q[1] = R64((u32)(r_edx));
    /* 008ac8ca: mulps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac8cd: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac8d0: movhlps xmm5, xmm3 */ xmm[5].q[0] = xmm[3].q[1];
    /* 008ac8d3: movhlps xmm6, xmm0 */ xmm[6].q[0] = xmm[0].q[1];
    /* 008ac8d6: addps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 008ac8d9: addps xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac8dc: shufps xmm5, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008ac8e0: shufps xmm6, xmm0, 0x55 */ { XMM s = xmm[0]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ac8e4: addss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac8e8: addss xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008ac8ec: movss xmm5, xmm3 */ xmm[5].d[0] = xmm[3].d[0];
    /* 008ac8f0: subss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; }
    /* 008ac8f4: addss xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008ac8f8: comiss xmm5, dword ptr [0xaea360] */ { XMM s; s.d[0] = R32((u32)(0xaea360u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; float a = xmm[5].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008ac8ff: je 0x8ac93e */ if (fZ) goto L_008ac93e;
L_008ac905:; BB(0x008ac905);
    /* 008ac905: rcpss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = 1.0f / s.fs[0]; }
    /* 008ac909: movss xmm6, xmm0 */ xmm[6].d[0] = xmm[0].d[0];
    /* 008ac90d: addss xmm6, xmm6 */ { XMM s = xmm[6]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008ac911: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac915: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ac919: subss xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6].fs[0] = xmm[6].fs[0] - s.fs[0]; }
    /* 008ac91d: mulss xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ac921: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac925: subps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008ac928: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac92b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ac92e: addps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008ac931: movhps qword ptr [eax], xmm1 */ W64((u32)(r_eax), xmm[1].q[1]);
    /* 008ac934: movss dword ptr [eax + 8], xmm1 */ W32((u32)(r_eax+0x8u), xmm[1].d[0]);
    /* 008ac939: jmp 0x8ac945 */ goto L_008ac945;
L_008ac93e:; BB(0x008ac93e);
    /* 008ac93e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
L_008ac945:; BB(0x008ac945);
    /* 008ac945: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008ac948: mov esp, ebp */ r_esp = r_ebp;
    /* 008ac94a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ac94b: ret 0x10 */ FN_RET(0x008ac890); r_esp += 20; return;
}

void f_008ac950(void) /* ?sse2_D3DXMatrixDeterminant@@YGMPBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ac950);
    /* 008ac950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac951: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac953: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac956: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ac959: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008ac95c: jmp 0x8ac961 */ goto L_008ac961;
L_008ac961:; BB(0x008ac961);
    /* 008ac961: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac964: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac967: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ac969: jne 0x8ac97c */ if (!fZ) goto L_008ac97c;
L_008ac96b:; BB(0x008ac96b);
    /* 008ac96b: movaps xmm7, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[7] = s; }
    /* 008ac96e: movaps xmm1, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[1] = s; }
    /* 008ac972: movaps xmm2, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[2] = s; }
    /* 008ac976: movaps xmm0, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[0] = s; }
    /* 008ac97a: jmp 0x8ac99b */ goto L_008ac99b;
L_008ac97c:; BB(0x008ac97c);
    /* 008ac97c: movlps xmm1, qword ptr [eax + 0x10] */ xmm[1].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ac980: movlps xmm7, qword ptr [eax] */ xmm[7].q[0] = R64((u32)(r_eax));
    /* 008ac983: movhps xmm1, qword ptr [eax + 0x18] */ xmm[1].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ac987: movhps xmm7, qword ptr [eax + 8] */ xmm[7].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ac98b: movlps xmm2, qword ptr [eax + 0x20] */ xmm[2].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ac98f: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ac993: movhps xmm2, qword ptr [eax + 0x28] */ xmm[2].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ac997: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
L_008ac99b:; BB(0x008ac99b);
    /* 008ac99b: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac99f: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9a3: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac9a6: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac9aa: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac9ad: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ac9b0: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac9b4: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac9b7: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac9ba: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac9bd: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac9c1: subps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008ac9c4: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ac9c7: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9cb: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac9ce: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9d2: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ac9d5: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ac9d9: movaps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6] = s; }
    /* 008ac9dc: shufps xmm3, xmm3, 0x4e */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac9e0: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ac9e4: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac9e7: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ac9ea: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac9ed: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac9f0: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac9f3: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac9f6: mulps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac9f9: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac9fc: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008ac9ff: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008aca02: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008aca05: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008aca09: subss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 008aca0d: movss dword ptr [esp], xmm0 */ W32((u32)(r_esp), xmm[0].d[0]);
    /* 008aca12: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008aca15: mov esp, ebx */ r_esp = r_ebx;
    /* 008aca17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aca18: ret 4 */ FN_RET(0x008ac950); r_esp += 8; return;
}

void f_008ac95e(void) /* ?sse2_D3DXMatrixDeterminant$$1@@YGMPBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ac95e);
    /* 008ac95e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ac95f: mov ebx, esp */ r_ebx = r_esp;
    /* 008ac961: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ac964: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008ac967: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ac969: jne 0x8ac97c */ if (!fZ) goto L_008ac97c;
L_008ac96b:; BB(0x008ac96b);
    /* 008ac96b: movaps xmm7, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[7] = s; }
    /* 008ac96e: movaps xmm1, xmmword ptr [eax + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x10u), 16); xmm[1] = s; }
    /* 008ac972: movaps xmm2, xmmword ptr [eax + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x20u), 16); xmm[2] = s; }
    /* 008ac976: movaps xmm0, xmmword ptr [eax + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+0x30u), 16); xmm[0] = s; }
    /* 008ac97a: jmp 0x8ac99b */ goto L_008ac99b;
L_008ac97c:; BB(0x008ac97c);
    /* 008ac97c: movlps xmm1, qword ptr [eax + 0x10] */ xmm[1].q[0] = R64((u32)(r_eax+0x10u));
    /* 008ac980: movlps xmm7, qword ptr [eax] */ xmm[7].q[0] = R64((u32)(r_eax));
    /* 008ac983: movhps xmm1, qword ptr [eax + 0x18] */ xmm[1].q[1] = R64((u32)(r_eax+0x18u));
    /* 008ac987: movhps xmm7, qword ptr [eax + 8] */ xmm[7].q[1] = R64((u32)(r_eax+0x8u));
    /* 008ac98b: movlps xmm2, qword ptr [eax + 0x20] */ xmm[2].q[0] = R64((u32)(r_eax+0x20u));
    /* 008ac98f: movlps xmm0, qword ptr [eax + 0x30] */ xmm[0].q[0] = R64((u32)(r_eax+0x30u));
    /* 008ac993: movhps xmm2, qword ptr [eax + 0x28] */ xmm[2].q[1] = R64((u32)(r_eax+0x28u));
    /* 008ac997: movhps xmm0, qword ptr [eax + 0x38] */ xmm[0].q[1] = R64((u32)(r_eax+0x38u));
L_008ac99b:; BB(0x008ac99b);
    /* 008ac99b: shufps xmm2, xmm2, 0x39 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[1]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac99f: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9a3: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008ac9a6: shufps xmm0, xmm0, 0x4e */ { XMM s = xmm[0]; u32 lo = xmm[0].d[2]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac9aa: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008ac9ad: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008ac9b0: shufps xmm0, xmm0, 0x39 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008ac9b4: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008ac9b7: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac9ba: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008ac9bd: shufps xmm2, xmm2, 0x4e */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008ac9c1: subps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 008ac9c4: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008ac9c7: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9cb: mulps xmm2, xmm1 */ { XMM s = xmm[1]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008ac9ce: shufps xmm1, xmm1, 0x39 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008ac9d2: movaps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5] = s; }
    /* 008ac9d5: shufps xmm4, xmm4, 0x39 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008ac9d9: movaps xmm6, xmm3 */ { XMM s = xmm[3]; xmm[6] = s; }
    /* 008ac9dc: shufps xmm3, xmm3, 0x4e */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008ac9e0: shufps xmm6, xmm6, 0x39 */ { XMM s = xmm[6]; u32 lo = xmm[6].d[1]; u32 lo2 = xmm[6].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[0]; xmm[6].d[0] = lo; xmm[6].d[1] = lo2; xmm[6].d[2] = hi; xmm[6].d[3] = hi2; }
    /* 008ac9e4: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 008ac9e7: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 008ac9ea: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac9ed: mulps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008ac9f0: addps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac9f3: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008ac9f6: mulps xmm0, xmm7 */ { XMM s = xmm[7]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008ac9f9: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008ac9fc: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008ac9ff: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008aca02: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008aca05: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008aca09: subss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 008aca0d: movss dword ptr [esp], xmm0 */ W32((u32)(r_esp), xmm[0].d[0]);
    /* 008aca12: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008aca15: mov esp, ebx */ r_esp = r_ebx;
    /* 008aca17: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008aca18: ret 4 */ FN_RET(0x008ac95e); r_esp += 8; return;
}

void f_008aca20(void) /* ?sse2_D3DXPlaneFromPoints@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@11@Z */
{
    FN_ENTER(0x008aca20);
    /* 008aca20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aca21: mov ebx, esp */ r_ebx = r_esp;
    /* 008aca23: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aca26: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008aca29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008aca2c: jmp 0x8aca31 */ goto L_008aca31;
L_008aca31:; BB(0x008aca31);
    /* 008aca31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aca32: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008aca35: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aca38: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008aca3b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008aca3e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008aca41: movss xmm0, dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008aca46: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008aca4b: movhps xmm0, qword ptr [ebp] */ xmm[0].q[1] = R64((u32)(r_ebp));
    /* 008aca4f: movhps xmm1, qword ptr [edx] */ xmm[1].q[1] = R64((u32)(r_edx));
    /* 008aca52: movss xmm2, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008aca57: movhps xmm2, qword ptr [ecx] */ xmm[2].q[1] = R64((u32)(r_ecx));
    /* 008aca5a: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008aca5d: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008aca60: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008aca63: shufps xmm0, xmm0, 0x78 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008aca67: shufps xmm1, xmm1, 0x63 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008aca6b: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008aca6e: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008aca71: movaps xmm2, xmmword ptr [0xa360a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360a0u), 16); xmm[2] = s; }
    /* 008aca78: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008aca7b: shufps xmm3, xmm3, 0x63 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008aca7f: shufps xmm5, xmm5, 0x78 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008aca83: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aca86: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008aca89: movaps xmm1, xmmword ptr [0xa360b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360b0u), 16); xmm[1] = s; }
    /* 008aca90: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008aca93: shufps xmm4, xmm4, 0xe */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008aca97: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008aca9a: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aca9d: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acaa0: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acaa3: addps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008acaa6: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008acaa9: shufps xmm5, xmm5, 1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008acaad: addss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acab1: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acab4: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acab8: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008acabc: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008acabf: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acac3: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acac7: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008acacb: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008acacf: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acad3: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acad6: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acad9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008acadc: movhlps xmm6, xmm4 */ xmm[6].q[0] = xmm[4].q[1];
    /* 008acadf: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008acae2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acae6: addss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008acaea: addss xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acaee: xorps xmm0, xmmword ptr [0xa36090] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36090u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008acaf5: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008acafa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008acafd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008acafe: mov esp, ebx */ r_esp = r_ebx;
    /* 008acb00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acb01: ret 0x10 */ FN_RET(0x008aca20); r_esp += 20; return;
}

void f_008aca2e(void) /* ?sse2_D3DXPlaneFromPoints$$1@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@11@Z */
{
    FN_ENTER(0x008aca2e);
    /* 008aca2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aca2f: mov ebx, esp */ r_ebx = r_esp;
    /* 008aca31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008aca32: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 008aca35: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aca38: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008aca3b: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 008aca3e: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008aca41: movss xmm0, dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008aca46: movss xmm1, dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008aca4b: movhps xmm0, qword ptr [ebp] */ xmm[0].q[1] = R64((u32)(r_ebp));
    /* 008aca4f: movhps xmm1, qword ptr [edx] */ xmm[1].q[1] = R64((u32)(r_edx));
    /* 008aca52: movss xmm2, dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008aca57: movhps xmm2, qword ptr [ecx] */ xmm[2].q[1] = R64((u32)(r_ecx));
    /* 008aca5a: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008aca5d: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008aca60: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008aca63: shufps xmm0, xmm0, 0x78 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008aca67: shufps xmm1, xmm1, 0x63 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[3]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008aca6b: movaps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4] = s; }
    /* 008aca6e: subps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 008aca71: movaps xmm2, xmmword ptr [0xa360a0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360a0u), 16); xmm[2] = s; }
    /* 008aca78: movaps xmm5, xmm3 */ { XMM s = xmm[3]; xmm[5] = s; }
    /* 008aca7b: shufps xmm3, xmm3, 0x63 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[3]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[2]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008aca7f: shufps xmm5, xmm5, 0x78 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[2]; u32 hi = s.d[3]; u32 hi2 = s.d[1]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008aca83: mulps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aca86: mulps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008aca89: movaps xmm1, xmmword ptr [0xa360b0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360b0u), 16); xmm[1] = s; }
    /* 008aca90: subps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 008aca93: shufps xmm4, xmm4, 0xe */ { XMM s = xmm[4]; u32 lo = xmm[4].d[2]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008aca97: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 008aca9a: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aca9d: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acaa0: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acaa3: addps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 008acaa6: movaps xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0] = s; }
    /* 008acaa9: shufps xmm5, xmm5, 1 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[1]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 008acaad: addss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acab1: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acab4: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acab8: mulss xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008acabc: movaps xmm6, xmm5 */ { XMM s = xmm[5]; xmm[6] = s; }
    /* 008acabf: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acac3: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acac7: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008acacb: mulss xmm1, xmm2 */ { XMM s = xmm[2]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008acacf: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acad3: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acad6: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acad9: movups xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008acadc: movhlps xmm6, xmm4 */ xmm[6].q[0] = xmm[4].q[1];
    /* 008acadf: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008acae2: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acae6: addss xmm6, xmm4 */ { XMM s = xmm[4]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008acaea: addss xmm0, xmm6 */ { XMM s = xmm[6]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acaee: xorps xmm0, xmmword ptr [0xa36090] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36090u), 16); xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008acaf5: movss dword ptr [eax + 0xc], xmm0 */ W32((u32)(r_eax+0xcu), xmm[0].d[0]);
    /* 008acafa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008acafd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008acafe: mov esp, ebx */ r_esp = r_ebx;
    /* 008acb00: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acb01: ret 0x10 */ FN_RET(0x008aca2e); r_esp += 20; return;
}

void f_008acb10(void) /* ?sse2_D3DXMatrixShadow@@YGPAU_D3DMATRIX@@PAU1@PBUD3DXVECTOR4@@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008acb10);
    /* 008acb10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008acb11: mov ebx, esp */ r_ebx = r_esp;
    /* 008acb13: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008acb16: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008acb19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008acb1c: jmp 0x8acb21 */ goto L_008acb21;
L_008acb21:; BB(0x008acb21);
    /* 008acb21: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008acb24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008acb27: movups xmm2, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[2] = s; }
    /* 008acb2a: movaps xmm3, xmmword ptr [0xa36100] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36100u), 16); xmm[3] = s; }
    /* 008acb31: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008acb34: andps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008acb37: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008acb3a: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acb3d: mov edx, 1 */ r_edx = 0x1u;
    /* 008acb42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008acb44: movhlps xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[1];
    /* 008acb47: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008acb4a: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008acb4d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acb50: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008acb53: shufps xmm0, xmm0, 1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acb57: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acb5b: comiss xmm0, xmm4 */ { XMM s = xmm[4]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008acb5e: cmove ecx, edx */ if (fZ) { r_ecx = r_edx; }
    /* 008acb61: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008acb64: je 0x8acbd6 */ if (fZ) goto L_008acbd6;
L_008acb66:; BB(0x008acb66);
    /* 008acb66: mov al, byte ptr [0xaf1c00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaf1c00u))) & 0xffu);
    /* 008acb6b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008acb6d: je 0x8acb78 */ if (fZ) goto L_008acb78;
L_008acb6f:; BB(0x008acb6f);
    /* 008acb6f: movaps xmm4, xmmword ptr [0xaf1be0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1be0u), 16); xmm[4] = s; }
    /* 008acb76: jmp 0x8acb8e */ goto L_008acb8e;
L_008acb78:; BB(0x008acb78);
    /* 008acb78: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008acb7a: movss xmm4, dword ptr [0xb48980] */ { u32 v = R32((u32)(0xb48980u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008acb82: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008acb87: movaps xmmword ptr [0xaf1be0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(0xaf1be0u), &xmm[4], 16);
L_008acb8e:; BB(0x008acb8e);
    /* 008acb8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008acb90: je 0x8acb9b */ if (fZ) goto L_008acb9b;
L_008acb92:; BB(0x008acb92);
    /* 008acb92: movaps xmm3, xmmword ptr [0xaf1bf0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1bf0u), 16); xmm[3] = s; }
    /* 008acb99: jmp 0x8acbb1 */ goto L_008acbb1;
L_008acb9b:; BB(0x008acb9b);
    /* 008acb9b: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008acb9d: movss xmm3, dword ptr [0xb48984] */ { u32 v = R32((u32)(0xb48984u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008acba5: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008acbaa: movaps xmmword ptr [0xaf1bf0], xmm3 */ memcpy((void *)(uintptr_t)(u32)(0xaf1bf0u), &xmm[3], 16);
L_008acbb1:; BB(0x008acbb1);
    /* 008acbb1: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acbb4: rsqrtss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acbb8: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acbbc: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008acbc0: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acbc4: subss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008acbc8: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008acbcc: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acbd0: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008acbd3: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
L_008acbd6:; BB(0x008acbd6);
    /* 008acbd6: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008acbd9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008acbdc: movups xmm2, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[2] = s; }
    /* 008acbdf: movaps xmm3, xmmword ptr [0xa360d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360d0u), 16); xmm[3] = s; }
    /* 008acbe6: movaps xmm4, xmmword ptr [0xa360c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360c0u), 16); xmm[4] = s; }
    /* 008acbed: xorps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008acbf0: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008acbf3: movaps xmm5, xmmword ptr [0xa360e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360e0u), 16); xmm[5] = s; }
    /* 008acbfa: movhlps xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[1];
    /* 008acbfd: movaps xmm6, xmmword ptr [0xa360f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360f0u), 16); xmm[6] = s; }
    /* 008acc04: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acc07: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008acc0a: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acc0e: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acc12: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acc16: andps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008acc19: andps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].q[0] = xmm[5].q[0] & s.q[0]; xmm[5].q[1] = xmm[5].q[1] & s.q[1]; }
    /* 008acc1c: andps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].q[0] = xmm[6].q[0] & s.q[0]; xmm[6].q[1] = xmm[6].q[1] & s.q[1]; }
    /* 008acc1f: movaps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1] = s; }
    /* 008acc22: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acc26: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acc29: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008acc2c: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008acc2f: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acc32: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008acc35: shufps xmm3, xmm3, 0xaa */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acc39: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acc3c: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008acc3f: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008acc42: addps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acc45: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008acc48: shufps xmm4, xmm4, 0xff */ { XMM s = xmm[4]; u32 lo = xmm[4].d[3]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acc4c: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acc50: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acc53: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acc56: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008acc59: addps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acc5c: addss xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008acc60: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008acc62: jne 0x8acc75 */ if (!fZ) goto L_008acc75;
L_008acc64:; BB(0x008acc64);
    /* 008acc64: movaps xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008acc67: movaps xmmword ptr [eax + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[0], 16);
    /* 008acc6b: movaps xmmword ptr [eax + 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[1], 16);
    /* 008acc6f: movaps xmmword ptr [eax + 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[2], 16);
    /* 008acc73: jmp 0x8acc94 */ goto L_008acc94;
L_008acc75:; BB(0x008acc75);
    /* 008acc75: movlps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[0]);
    /* 008acc78: movhps qword ptr [eax + 8], xmm3 */ W64((u32)(r_eax+0x8u), xmm[3].q[1]);
    /* 008acc7c: movlps qword ptr [eax + 0x10], xmm0 */ W64((u32)(r_eax+0x10u), xmm[0].q[0]);
    /* 008acc80: movhps qword ptr [eax + 0x18], xmm0 */ W64((u32)(r_eax+0x18u), xmm[0].q[1]);
    /* 008acc84: movlps qword ptr [eax + 0x20], xmm1 */ W64((u32)(r_eax+0x20u), xmm[1].q[0]);
    /* 008acc88: movhps qword ptr [eax + 0x28], xmm1 */ W64((u32)(r_eax+0x28u), xmm[1].q[1]);
    /* 008acc8c: movlps qword ptr [eax + 0x30], xmm2 */ W64((u32)(r_eax+0x30u), xmm[2].q[0]);
    /* 008acc90: movhps qword ptr [eax + 0x38], xmm2 */ W64((u32)(r_eax+0x38u), xmm[2].q[1]);
L_008acc94:; BB(0x008acc94);
    /* 008acc94: mov esp, ebx */ r_esp = r_ebx;
    /* 008acc96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acc97: ret 0xc */ FN_RET(0x008acb10); r_esp += 16; return;
}

void f_008acb1e(void) /* ?sse2_D3DXMatrixShadow$$1@@YGPAU_D3DMATRIX@@PAU1@PBUD3DXVECTOR4@@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008acb1e);
    /* 008acb1e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008acb1f: mov ebx, esp */ r_ebx = r_esp;
    /* 008acb21: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 008acb24: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008acb27: movups xmm2, xmmword ptr [eax] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax), 16); xmm[2] = s; }
    /* 008acb2a: movaps xmm3, xmmword ptr [0xa36100] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36100u), 16); xmm[3] = s; }
    /* 008acb31: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
    /* 008acb34: andps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008acb37: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 008acb3a: mulps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acb3d: mov edx, 1 */ r_edx = 0x1u;
    /* 008acb42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008acb44: movhlps xmm0, xmm3 */ xmm[0].q[0] = xmm[3].q[1];
    /* 008acb47: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008acb4a: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008acb4d: addps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acb50: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008acb53: shufps xmm0, xmm0, 1 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[1]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acb57: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acb5b: comiss xmm0, xmm4 */ { XMM s = xmm[4]; float a = xmm[0].fs[0]; float b = s.fs[0]; fO = 0; fS = 0; fA = 0; if (a != a || b != b) { fZ = 1; fP = 1; fC = 1; } else if (a > b) { fZ = 0; fP = 0; fC = 0; } else if (a < b) { fZ = 0; fP = 0; fC = 1; } else { fZ = 1; fP = 0; fC = 0; } }
    /* 008acb5e: cmove ecx, edx */ if (fZ) { r_ecx = r_edx; }
    /* 008acb61: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008acb64: je 0x8acbd6 */ if (fZ) goto L_008acbd6;
L_008acb66:; BB(0x008acb66);
    /* 008acb66: mov al, byte ptr [0xaf1c00] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xaf1c00u))) & 0xffu);
    /* 008acb6b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008acb6d: je 0x8acb78 */ if (fZ) goto L_008acb78;
L_008acb6f:; BB(0x008acb6f);
    /* 008acb6f: movaps xmm4, xmmword ptr [0xaf1be0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1be0u), 16); xmm[4] = s; }
    /* 008acb76: jmp 0x8acb8e */ goto L_008acb8e;
L_008acb78:; BB(0x008acb78);
    /* 008acb78: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008acb7a: movss xmm4, dword ptr [0xb48980] */ { u32 v = R32((u32)(0xb48980u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008acb82: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008acb87: movaps xmmword ptr [0xaf1be0], xmm4 */ memcpy((void *)(uintptr_t)(u32)(0xaf1be0u), &xmm[4], 16);
L_008acb8e:; BB(0x008acb8e);
    /* 008acb8e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008acb90: je 0x8acb9b */ if (fZ) goto L_008acb9b;
L_008acb92:; BB(0x008acb92);
    /* 008acb92: movaps xmm3, xmmword ptr [0xaf1bf0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xaf1bf0u), 16); xmm[3] = s; }
    /* 008acb99: jmp 0x8acbb1 */ goto L_008acbb1;
L_008acb9b:; BB(0x008acb9b);
    /* 008acb9b: or al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008acb9d: movss xmm3, dword ptr [0xb48984] */ { u32 v = R32((u32)(0xb48984u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008acba5: mov byte ptr [0xaf1c00], al */ W8((u32)(0xaf1c00u), (u8)r_eax);
    /* 008acbaa: movaps xmmword ptr [0xaf1bf0], xmm3 */ memcpy((void *)(uintptr_t)(u32)(0xaf1bf0u), &xmm[3], 16);
L_008acbb1:; BB(0x008acbb1);
    /* 008acbb1: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008acbb4: rsqrtss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acbb8: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acbbc: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008acbc0: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008acbc4: subss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008acbc8: mulss xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008acbcc: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acbd0: movaps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0] = s; }
    /* 008acbd3: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
L_008acbd6:; BB(0x008acbd6);
    /* 008acbd6: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008acbd9: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008acbdc: movups xmm2, xmmword ptr [edx] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx), 16); xmm[2] = s; }
    /* 008acbdf: movaps xmm3, xmmword ptr [0xa360d0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360d0u), 16); xmm[3] = s; }
    /* 008acbe6: movaps xmm4, xmmword ptr [0xa360c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360c0u), 16); xmm[4] = s; }
    /* 008acbed: xorps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].q[0] = xmm[4].q[0] ^ s.q[0]; xmm[4].q[1] = xmm[4].q[1] ^ s.q[1]; }
    /* 008acbf0: mulps xmm0, xmm2 */ { XMM s = xmm[2]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008acbf3: movaps xmm5, xmmword ptr [0xa360e0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360e0u), 16); xmm[5] = s; }
    /* 008acbfa: movhlps xmm1, xmm0 */ xmm[1].q[0] = xmm[0].q[1];
    /* 008acbfd: movaps xmm6, xmmword ptr [0xa360f0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa360f0u), 16); xmm[6] = s; }
    /* 008acc04: addps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acc07: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008acc0a: shufps xmm1, xmm1, 1 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[1]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acc0e: addss xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008acc12: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acc16: andps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].q[0] = xmm[3].q[0] & s.q[0]; xmm[3].q[1] = xmm[3].q[1] & s.q[1]; }
    /* 008acc19: andps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].q[0] = xmm[5].q[0] & s.q[0]; xmm[5].q[1] = xmm[5].q[1] & s.q[1]; }
    /* 008acc1c: andps xmm6, xmm0 */ { XMM s = xmm[0]; xmm[6].q[0] = xmm[6].q[0] & s.q[0]; xmm[6].q[1] = xmm[6].q[1] & s.q[1]; }
    /* 008acc1f: movaps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1] = s; }
    /* 008acc22: shufps xmm4, xmm4, 0x55 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acc26: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acc29: movaps xmm7, xmm0 */ { XMM s = xmm[0]; xmm[7] = s; }
    /* 008acc2c: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008acc2f: addps xmm0, xmm3 */ { XMM s = xmm[3]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acc32: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 008acc35: shufps xmm3, xmm3, 0xaa */ { XMM s = xmm[3]; u32 lo = xmm[3].d[2]; u32 lo2 = xmm[3].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acc39: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acc3c: movaps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4] = s; }
    /* 008acc3f: movaps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1] = s; }
    /* 008acc42: addps xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acc45: movaps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3] = s; }
    /* 008acc48: shufps xmm4, xmm4, 0xff */ { XMM s = xmm[4]; u32 lo = xmm[4].d[3]; u32 lo2 = xmm[4].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008acc4c: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acc50: mulps xmm4, xmm2 */ { XMM s = xmm[2]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acc53: mulps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 008acc56: movaps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2] = s; }
    /* 008acc59: addps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acc5c: addss xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; }
    /* 008acc60: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008acc62: jne 0x8acc75 */ if (!fZ) goto L_008acc75;
L_008acc64:; BB(0x008acc64);
    /* 008acc64: movaps xmmword ptr [eax], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[3], 16);
    /* 008acc67: movaps xmmword ptr [eax + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[0], 16);
    /* 008acc6b: movaps xmmword ptr [eax + 0x20], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[1], 16);
    /* 008acc6f: movaps xmmword ptr [eax + 0x30], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[2], 16);
    /* 008acc73: jmp 0x8acc94 */ goto L_008acc94;
L_008acc75:; BB(0x008acc75);
    /* 008acc75: movlps qword ptr [eax], xmm3 */ W64((u32)(r_eax), xmm[3].q[0]);
    /* 008acc78: movhps qword ptr [eax + 8], xmm3 */ W64((u32)(r_eax+0x8u), xmm[3].q[1]);
    /* 008acc7c: movlps qword ptr [eax + 0x10], xmm0 */ W64((u32)(r_eax+0x10u), xmm[0].q[0]);
    /* 008acc80: movhps qword ptr [eax + 0x18], xmm0 */ W64((u32)(r_eax+0x18u), xmm[0].q[1]);
    /* 008acc84: movlps qword ptr [eax + 0x20], xmm1 */ W64((u32)(r_eax+0x20u), xmm[1].q[0]);
    /* 008acc88: movhps qword ptr [eax + 0x28], xmm1 */ W64((u32)(r_eax+0x28u), xmm[1].q[1]);
    /* 008acc8c: movlps qword ptr [eax + 0x30], xmm2 */ W64((u32)(r_eax+0x30u), xmm[2].q[0]);
    /* 008acc90: movhps qword ptr [eax + 0x38], xmm2 */ W64((u32)(r_eax+0x38u), xmm[2].q[1]);
L_008acc94:; BB(0x008acc94);
    /* 008acc94: mov esp, ebx */ r_esp = r_ebx;
    /* 008acc96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acc97: ret 0xc */ FN_RET(0x008acb1e); r_esp += 16; return;
}

void f_008acca0(void) /* ?sse2_D3DXMatrixReflect@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008acca0);
    /* 008acca0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008acca1: mov ebx, esp */ r_ebx = r_esp;
    /* 008acca3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008acca6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008acca9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008accac: jmp 0x8accb1 */ goto L_008accb1;
L_008accb1:; BB(0x008accb1);
    /* 008accb1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008accb4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008accb7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008accba: movhps xmm1, qword ptr [edx + 8] */ xmm[1].q[1] = R64((u32)(r_edx+0x8u));
    /* 008accbe: movlps xmm1, qword ptr [edx] */ xmm[1].q[0] = R64((u32)(r_edx));
    /* 008accc1: movaps xmm0, xmmword ptr [0xa36180] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36180u), 16); xmm[0] = s; }
    /* 008accc8: andps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008acccb: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008accce: movss xmm2, dword ptr [0xa36160] */ { u32 v = R32((u32)(0xa36160u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008accd6: movss xmm3, dword ptr [0xa36170] */ { u32 v = R32((u32)(0xa36170u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008accde: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008acce1: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acce4: addps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008acce7: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008accea: shufps xmm4, xmm4, 1 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008accee: addss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008accf2: movaps xmm4, xmmword ptr [0xa36150] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36150u), 16); xmm[4] = s; }
    /* 008accf9: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008accfc: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acd00: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acd04: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acd08: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008acd0c: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008acd10: mulss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008acd14: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acd18: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acd1b: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acd1e: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008acd21: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acd25: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acd28: addps xmm1, xmmword ptr [0xa36140] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36140u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acd2f: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008acd32: shufps xmm0, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acd36: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008acd39: addps xmm0, xmmword ptr [0xa36110] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36110u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acd40: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008acd43: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008acd47: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008acd4a: addps xmm2, xmmword ptr [0xa36120] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36120u), 16); xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acd51: shufps xmm3, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acd55: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acd58: addps xmm4, xmmword ptr [0xa36130] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36130u), 16); xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008acd5f: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008acd62: movups xmmword ptr [eax + 0x10], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[4], 16);
    /* 008acd66: movups xmmword ptr [eax + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[2], 16);
    /* 008acd6a: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008acd6e: mov esp, ebx */ r_esp = r_ebx;
    /* 008acd70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acd71: ret 8 */ FN_RET(0x008acca0); r_esp += 12; return;
}

void f_008accae(void) /* ?sse2_D3DXMatrixReflect$$1@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008accae);
    /* 008accae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008accaf: mov ebx, esp */ r_ebx = r_esp;
    /* 008accb1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008accb4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008accb7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008accba: movhps xmm1, qword ptr [edx + 8] */ xmm[1].q[1] = R64((u32)(r_edx+0x8u));
    /* 008accbe: movlps xmm1, qword ptr [edx] */ xmm[1].q[0] = R64((u32)(r_edx));
    /* 008accc1: movaps xmm0, xmmword ptr [0xa36180] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36180u), 16); xmm[0] = s; }
    /* 008accc8: andps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].q[0] = xmm[0].q[0] & s.q[0]; xmm[0].q[1] = xmm[0].q[1] & s.q[1]; }
    /* 008acccb: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008accce: movss xmm2, dword ptr [0xa36160] */ { u32 v = R32((u32)(0xa36160u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008accd6: movss xmm3, dword ptr [0xa36170] */ { u32 v = R32((u32)(0xa36170u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008accde: movaps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4] = s; }
    /* 008acce1: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acce4: addps xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008acce7: movaps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0] = s; }
    /* 008accea: shufps xmm4, xmm4, 1 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[1]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 008accee: addss xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 008accf2: movaps xmm4, xmmword ptr [0xa36150] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36150u), 16); xmm[4] = s; }
    /* 008accf9: movaps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5] = s; }
    /* 008accfc: rsqrtss xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008acd00: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acd04: mulss xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008acd08: subss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008acd0c: mulss xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008acd10: mulss xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008acd14: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acd18: mulps xmm1, xmm3 */ { XMM s = xmm[3]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acd1b: mulps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acd1e: movaps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0] = s; }
    /* 008acd21: shufps xmm1, xmm1, 0 */ { XMM s = xmm[1]; u32 lo = xmm[1].d[0]; u32 lo2 = xmm[1].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[1].d[0] = lo; xmm[1].d[1] = lo2; xmm[1].d[2] = hi; xmm[1].d[3] = hi2; }
    /* 008acd25: mulps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 008acd28: addps xmm1, xmmword ptr [0xa36140] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36140u), 16); xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 008acd2f: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008acd32: shufps xmm0, xmm0, 0xff */ { XMM s = xmm[0]; u32 lo = xmm[0].d[3]; u32 lo2 = xmm[0].d[3]; u32 hi = s.d[3]; u32 hi2 = s.d[3]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 008acd36: mulps xmm0, xmm4 */ { XMM s = xmm[4]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008acd39: addps xmm0, xmmword ptr [0xa36110] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36110u), 16); xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 008acd40: movaps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3] = s; }
    /* 008acd43: shufps xmm2, xmm2, 0xaa */ { XMM s = xmm[2]; u32 lo = xmm[2].d[2]; u32 lo2 = xmm[2].d[2]; u32 hi = s.d[2]; u32 hi2 = s.d[2]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 008acd47: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 008acd4a: addps xmm2, xmmword ptr [0xa36120] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36120u), 16); xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acd51: shufps xmm3, xmm3, 0x55 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[1]; u32 lo2 = xmm[3].d[1]; u32 hi = s.d[1]; u32 hi2 = s.d[1]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 008acd55: mulps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] * s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] * s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] * s.fs[3]; }
    /* 008acd58: addps xmm4, xmmword ptr [0xa36130] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa36130u), 16); xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 008acd5f: movups xmmword ptr [eax], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_eax), &xmm[1], 16);
    /* 008acd62: movups xmmword ptr [eax + 0x10], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x10u), &xmm[4], 16);
    /* 008acd66: movups xmmword ptr [eax + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x20u), &xmm[2], 16);
    /* 008acd6a: movups xmmword ptr [eax + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+0x30u), &xmm[0], 16);
    /* 008acd6e: mov esp, ebx */ r_esp = r_ebx;
    /* 008acd70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008acd71: ret 8 */ FN_RET(0x008accae); r_esp += 12; return;
}

void f_008ace10(void) /* ?sse_D3DXQuaternionNormalize@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ace10);
    /* 008ace10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008ace11: mov ebp, esp */ r_ebp = r_esp;
    /* 008ace13: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008ace16: movss xmm0, dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008ace1a: movss xmm1, dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008ace1f: movss xmm2, dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008ace24: movss xmm3, dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008ace29: movss xmm4, xmm0 */ xmm[4].d[0] = xmm[0].d[0];
    /* 008ace2d: movss xmm5, xmm1 */ xmm[5].d[0] = xmm[1].d[0];
    /* 008ace31: movss xmm6, xmm2 */ xmm[6].d[0] = xmm[2].d[0];
    /* 008ace35: movss xmm7, xmm3 */ xmm[7].d[0] = xmm[3].d[0];
    /* 008ace39: mulss xmm4, xmm0 */ { XMM s = xmm[0]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ace3d: mulss xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ace41: mulss xmm6, xmm2 */ { XMM s = xmm[2]; xmm[6].fs[0] = xmm[6].fs[0] * s.fs[0]; }
    /* 008ace45: addss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 008ace49: mulss xmm7, xmm3 */ { XMM s = xmm[3]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; }
    /* 008ace4d: addss xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; }
    /* 008ace51: addss xmm4, xmm6 */ { XMM s = xmm[6]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; }
    /* 008ace55: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008ace58: rsqrtss xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = 1.0f / sqrtf(s.fs[0]); }
    /* 008ace5c: movss xmm6, xmm5 */ xmm[6].d[0] = xmm[5].d[0];
    /* 008ace60: mulss xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ace64: mulss xmm4, xmm5 */ { XMM s = xmm[5]; xmm[4].fs[0] = xmm[4].fs[0] * s.fs[0]; }
    /* 008ace68: movss xmm5, dword ptr [0xa361b0] */ { u32 v = R32((u32)(0xa361b0u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 008ace70: subss xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; }
    /* 008ace74: mulss xmm5, dword ptr [0xa361a0] */ { XMM s; s.d[0] = R32((u32)(0xa361a0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ace7c: mulss xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; }
    /* 008ace80: mulss xmm0, xmm5 */ { XMM s = xmm[5]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 008ace84: mulss xmm1, xmm5 */ { XMM s = xmm[5]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 008ace88: movss dword ptr [eax], xmm0 */ W32((u32)(r_eax), xmm[0].d[0]);
    /* 008ace8c: mulss xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 008ace90: movss dword ptr [eax + 4], xmm1 */ W32((u32)(r_eax+0x4u), xmm[1].d[0]);
    /* 008ace95: mulss xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 008ace99: movss dword ptr [eax + 8], xmm2 */ W32((u32)(r_eax+0x8u), xmm[2].d[0]);
    /* 008ace9e: movss dword ptr [eax + 0xc], xmm3 */ W32((u32)(r_eax+0xcu), xmm[3].d[0]);
    /* 008acea3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008acea6: mov esp, ebp */ r_esp = r_ebp;
    /* 008acea8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008acea9: ret 8 */ FN_RET(0x008ace10); r_esp += 12; return;
}

void f_008aceb0(void) /* ?sse2_D3DXQuaternionInverse@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008aceb0);
    /* 008aceb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008aceb1: mov ebx, esp */ r_ebx = r_esp;
    /* 008aceb3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aceb6: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008aceb9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008acebc: jmp 0x8acec1 */ goto L_008acec1;
L_008acec1:; BB(0x008acec1);
    /* 008acec1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008acec4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008acec7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aceca: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008acecd: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008aced1: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008aced4: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aced7: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008aceda: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acedd: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acee0: mulps xmm1, xmmword ptr [0xa361c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361c0u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
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
    /* 008acf1c: ret 8 */ FN_RET(0x008aceb0); r_esp += 12; return;
}

void f_008acebe(void) /* ?sse2_D3DXQuaternionInverse$$1@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008acebe);
    /* 008acebe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008acebf: mov ebx, esp */ r_ebx = r_esp;
    /* 008acec1: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008acec4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008acec7: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aceca: movlps xmm0, qword ptr [edx] */ xmm[0].q[0] = R64((u32)(r_edx));
    /* 008acecd: movhps xmm0, qword ptr [edx + 8] */ xmm[0].q[1] = R64((u32)(r_edx+0x8u));
    /* 008aced1: movaps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1] = s; }
    /* 008aced4: mulps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] * s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] * s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] * s.fs[3]; }
    /* 008aced7: movaps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2] = s; }
    /* 008aceda: movhlps xmm0, xmm0 */ xmm[0].q[0] = xmm[0].q[1];
    /* 008acedd: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 008acee0: mulps xmm1, xmmword ptr [0xa361c0] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0xa361c0u), 16); xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
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
    /* 008acf1c: ret 8 */ FN_RET(0x008acebe); r_esp += 12; return;
}

void f_008acf20(void) /* ?sse2_D3DXQuaternionRotationMatrix@@YGPAUD3DXQUATERNION@@PAU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008acf20);
    /* 008acf20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008acf21: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008acf22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008acf23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008acf24: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008acf28: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008acf2c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r; fC = (a < b); }
    /* 008acf2f: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008acf31: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 008acf34: fadd dword ptr [edx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x28u));
    /* 008acf37: fld dword ptr [0xb489dc] */ FPUSH(R_F32((u32)(0xb489dcu)));
    /* 008acf3d: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008acf3f: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008acf41: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 008acf44: fld dword ptr [edx + 0x28] */ FPUSH(R_F32((u32)(r_edx+0x28u)));
    /* 008acf47: mov ebp, dword ptr [edx + 0x28] */ r_ebp = R32((u32)(r_edx+0x28u));
    /* 008acf4a: jb 0x8acfed */ if (fC) goto L_008acfed;
L_008acf50:; BB(0x008acf50);
    /* 008acf50: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008acf52: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 008acf55: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008acf59: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 008acf5c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008acf60: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008acf65: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fC = 0; }
    /* 008acf67: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008acf69: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008acf6b: cmova ebx, ecx */ if ((!fC&&!fZ)) { r_ebx = r_ecx; }
    /* 008acf6e: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008acf72: mov ecx, 2 */ r_ecx = 0x2u;
    /* 008acf77: fld dword ptr [esp + ebx*4] */ FPUSH(R_F32((u32)(r_esp+r_ebx*4)));
    /* 008acf7a: fcompi st(1) */ fx_compare(ST(0), ST(1)); 
    /* 008acf7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008acf7e: cmovae ecx, ebx */ if (!fC) { r_ecx = r_ebx; }
    /* 008acf81: fld dword ptr [0xb489f0] */ FPUSH(R_F32((u32)(0xb489f0u)));
    /* 008acf87: fadd dword ptr [esp + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ecx*4));
    /* 008acf8a: mov ebx, dword ptr [ecx*4 + 0xb489d0] */ r_ebx = R32((u32)(r_ecx*4+0xb489d0u));
    /* 008acf91: fsub dword ptr [esp + ebx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*4));
    /* 008acf94: mov ebp, dword ptr [ebx*4 + 0xb489d0] */ r_ebp = R32((u32)(r_ebx*4+0xb489d0u));
    /* 008acf9b: lea esi, [edx + ecx*4] */ r_esi = (u32)(r_edx+r_ecx*4);
    /* 008acf9e: fsub dword ptr [esp + ebp*4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebp*4));
    /* 008acfa1: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008acfa3: fld dword ptr [0xb489f8] */ FPUSH(R_F32((u32)(0xb489f8u)));
    /* 008acfa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008acfab: fmul dword ptr [0xb489f4] */ ST(0) = ST(0) * R_F32((u32)(0xb489f4u));
    /* 008acfb1: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 008acfb3: fstp dword ptr [eax + ecx*4] */ W_F32((u32)(r_eax+r_ecx*4), ST(0)); FPOP();
    /* 008acfb6: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008acfb9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008acfbb: fld dword ptr [ecx + ebx*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebx*4)));
    /* 008acfbe: mov edi, ebx */ r_edi = r_ebx;
    /* 008acfc0: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008acfc3: fadd dword ptr [esi + edi] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_edi));
    /* 008acfc6: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008acfc8: lea edx, [edx + ebx*4] */ r_edx = (u32)(r_edx+r_ebx*4);
    /* 008acfcb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008acfcd: fstp dword ptr [eax + ebx*4] */ W_F32((u32)(r_eax+r_ebx*4), ST(0)); FPOP();
    /* 008acfd0: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008acfd2: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008acfd5: fld dword ptr [ebx + esi] */ FPUSH(R_F32((u32)(r_ebx+r_esi)));
    /* 008acfd8: fadd dword ptr [ecx + ebp*4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_ebp*4));
    /* 008acfdb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008acfdd: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 008acfe0: fld dword ptr [edi + ebp*4] */ FPUSH(R_F32((u32)(r_edi+r_ebp*4)));
    /* 008acfe3: fsub dword ptr [ebx + edx] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+r_edx));
    /* 008acfe6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008acfe8: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008acfeb: jmp 0x8ad02a */ goto L_008ad02a;
L_008acfed:; BB(0x008acfed);
    /* 008acfed: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008acfef: fadd dword ptr [0xb489e0] */ ST(0) = ST(0) + R_F32((u32)(0xb489e0u));
    /* 008acff5: fsqrt  */ ST(0) = sqrtl(ST(0));
    /* 008acff7: fld dword ptr [0xb489e8] */ FPUSH(R_F32((u32)(0xb489e8u)));
    /* 008acffd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008acfff: fmul dword ptr [0xb489e4] */ ST(0) = ST(0) * R_F32((u32)(0xb489e4u));
    /* 008ad005: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 008ad007: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 008ad00a: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 008ad00d: fsub dword ptr [edx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x24u));
    /* 008ad010: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008ad012: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 008ad014: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 008ad017: fsub dword ptr [edx + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x8u));
    /* 008ad01a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008ad01c: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 008ad01f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 008ad022: fsub dword ptr [edx + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x10u));
    /* 008ad025: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008ad027: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_008ad02a:; BB(0x008ad02a);
    /* 008ad02a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ad02d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad02e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008ad02f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ad030: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008ad031: ret 8 */ FN_RET(0x008acf20); r_esp += 12; return;
}

