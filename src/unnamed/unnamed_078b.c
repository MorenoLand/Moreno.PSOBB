#include "protos.h"

void f_0078b054(void) /* sub_78B054 */
{
    FN_ENTER(0x0078b054);
    /* 0078b054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b055: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078b057: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b05b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078b05d: call 0x4f7330 */ r_esp -= 4; W32(r_esp, 0x78b062u); f_004f7330();
    /* 0078b062: mov dword ptr [ebx], 0xb45150 */ W32((u32)(r_ebx), 0xb45150u);
    /* 0078b068: mov edx, dword ptr [0x9fd1b4] */ r_edx = R32((u32)(0x9fd1b4u));
    /* 0078b06e: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0078b071: mov eax, ebx */ r_eax = r_ebx;
    /* 0078b073: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b074: ret 4 */ FN_RET(0x0078b054); r_esp += 8; return;
}

void f_0078b078(void) /* sub_78B078 */
{
    FN_ENTER(0x0078b078);
    /* 0078b078: mov dword ptr [0xa9c4b8], 0x3f800000 */ W32((u32)(0xa9c4b8u), 0x3f800000u);
    /* 0078b082: mov dword ptr [0xa9c4bc], 0x41000000 */ W32((u32)(0xa9c4bcu), 0x41000000u);
    /* 0078b08c: mov dword ptr [0xa9c4c0], 0x3fc00000 */ W32((u32)(0xa9c4c0u), 0x3fc00000u);
    /* 0078b096: ret  */ FN_RET(0x0078b078); r_esp += 4; return;
}

void f_0078b098(void) /* sub_78B098 */
{
    FN_ENTER(0x0078b098);
    /* 0078b098: call 0x4f7454 */ r_esp -= 4; W32(r_esp, 0x78b09du); f_004f7454();
    /* 0078b09d: ret  */ FN_RET(0x0078b098); r_esp += 4; return;
}

void f_0078b0a0(void) /* sub_78B0A0 */
{
    FN_ENTER(0x0078b0a0);
    /* 0078b0a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b0a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078b0a7: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078b0aa: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0078b0ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078b0af: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078b0b1: add edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078b0b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078b0b7: jle 0x78b0de */ if ((fZ||fS!=fO)) goto L_0078b0de;
L_0078b0b9:; BB(0x0078b0b9);
    /* 0078b0b9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0078b0bd: mov ebx, eax */ r_ebx = r_eax;
    /* 0078b0bf: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0078b0c2: mov esi, edx */ r_esi = r_edx;
L_0078b0c4:; BB(0x0078b0c4);
    /* 0078b0c4: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 0078b0c7: add esi, -8 */ {  u32 a = r_esi; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078b0ca: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078b0cd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b0cf: je 0x78b0d3 */ if (fZ) goto L_0078b0d3;
L_0078b0d1:; BB(0x0078b0d1);
    /* 0078b0d1: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x78b0d3u); call_ind(t); }
L_0078b0d3:; BB(0x0078b0d3);
    /* 0078b0d3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078b0d5: jg 0x78b0c4 */ if ((!fZ&&fS==fO)) goto L_0078b0c4;
L_0078b0d7:; BB(0x0078b0d7);
    /* 0078b0d7: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0078b0db: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0078b0de:; BB(0x0078b0de);
    /* 0078b0de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b0e1: ret  */ FN_RET(0x0078b0a0); r_esp += 4; return;
}

void f_0078b0e4(void) /* sub_78B0E4 */
{
    FN_ENTER(0x0078b0e4);
    /* 0078b0e4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b0e7: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0078b0ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078b0ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0078b0f1: jle 0x78b146 */ if ((fZ||fS!=fO)) goto L_0078b146;
L_0078b0f3:; BB(0x0078b0f3);
    /* 0078b0f3: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 0078b0f7: mov ebx, eax */ r_ebx = r_eax;
    /* 0078b0f9: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0078b0fd: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0078b101: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0078b104: mov ebp, edx */ r_ebp = r_edx;
    /* 0078b106: mov esi, ecx */ r_esi = r_ecx;
L_0078b108:; BB(0x0078b108);
    /* 0078b108: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0078b10f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b111: je 0x78b130 */ if (fZ) goto L_0078b130;
L_0078b113:; BB(0x0078b113);
    /* 0078b113: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0078b117: cmp eax, dword ptr [esp + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b11b: jne 0x78b130 */ if (!fZ) goto L_0078b130;
L_0078b11d:; BB(0x0078b11d);
    /* 0078b11d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0078b11f: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b121: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x78b124u); call_ind(t); }
    /* 0078b124: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0078b126: movsx edi, byte ptr [edi + 0x960] */ r_edi = (u32)(i32)(i8)R8((u32)(r_edi+0x960u));
    /* 0078b12d: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
L_0078b130:; BB(0x0078b130);
    /* 0078b130: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078b133: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078b135: jl 0x78b108 */ if ((fS!=fO)) goto L_0078b108;
L_0078b137:; BB(0x0078b137);
    /* 0078b137: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0078b13b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0078b13f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0078b143: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0078b146:; BB(0x0078b146);
    /* 0078b146: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b149: ret 4 */ FN_RET(0x0078b0e4); r_esp += 8; return;
}

void f_0078b158(void)
{
    FN_ENTER(0x0078b158);
    /* 0078b158: mov dword ptr [0xa9c4c8], 0x3f800000 */ W32((u32)(0xa9c4c8u), 0x3f800000u);
    /* 0078b162: mov ecx, 0xa9c4d4 */ r_ecx = 0xa9c4d4u;
    /* 0078b167: mov dword ptr [0xa9c4cc], 0x41000000 */ W32((u32)(0xa9c4ccu), 0x41000000u);
    /* 0078b171: mov dword ptr [0xa9c4d0], 0x3fc00000 */ W32((u32)(0xa9c4d0u), 0x3fc00000u);
    /* 0078b17b: call 0x6a9ed4 */ r_esp -= 4; W32(r_esp, 0x78b180u); f_006a9ed4();
    /* 0078b180: ret  */ FN_RET(0x0078b158); r_esp += 4; return;
}

void f_0078b184(void) /* sub_78B184 */
{
    FN_ENTER(0x0078b184);
    /* 0078b184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b185: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b186: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0078b18a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0078b18e: shr eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078b191: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b193: jle 0x78b1b4 */ if ((fZ||fS!=fO)) goto L_0078b1b4;
L_0078b195:; BB(0x0078b195);
    /* 0078b195: mov ebx, eax */ r_ebx = r_eax;
    /* 0078b197: mov esi, edx */ r_esi = r_edx;
L_0078b199:; BB(0x0078b199);
    /* 0078b199: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x78b19eu); f_005ba1f0();
    /* 0078b19e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b1a0: jne 0x78b1bc */ if (!fZ) goto L_0078b1bc;
L_0078b1a2:; BB(0x0078b1a2);
    /* 0078b1a2: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0078b1a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b1a6: je 0x78b1aa */ if (fZ) goto L_0078b1aa;
L_0078b1a8:; BB(0x0078b1a8);
    /* 0078b1a8: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x78b1aau); call_ind(t); }
L_0078b1aa:; BB(0x0078b1aa);
    /* 0078b1aa: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078b1ad: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078b1b0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1b2: jg 0x78b199 */ if ((!fZ&&fS==fO)) goto L_0078b199;
L_0078b1b4:; BB(0x0078b1b4);
    /* 0078b1b4: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b1b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b1ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b1bb: ret  */ FN_RET(0x0078b184); r_esp += 4; return;
L_0078b1bc:; BB(0x0078b1bc);
    /* 0078b1bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b1bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b1c0: ret  */ FN_RET(0x0078b184); r_esp += 4; return;
}

void f_0078b1c4(void) /* sub_78B1C4 */
{
    FN_ENTER(0x0078b1c4);
    /* 0078b1c4: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 0078b1c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1cb: je 0x78b1d3 */ if (fZ) goto L_0078b1d3;
L_0078b1cd:; BB(0x0078b1cd);
    /* 0078b1cd: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b1d2: ret  */ FN_RET(0x0078b1c4); r_esp += 4; return;
L_0078b1d3:; BB(0x0078b1d3);
    /* 0078b1d3: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 0078b1d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1da: jle 0x78b1e2 */ if ((fZ||fS!=fO)) goto L_0078b1e2;
L_0078b1dc:; BB(0x0078b1dc);
    /* 0078b1dc: mov eax, 2 */ r_eax = 0x2u;
    /* 0078b1e1: ret  */ FN_RET(0x0078b1c4); r_esp += 4; return;
L_0078b1e2:; BB(0x0078b1e2);
    /* 0078b1e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1e4: ret  */ FN_RET(0x0078b1c4); r_esp += 4; return;
}

void f_0078b1e8(void) /* sub_78B1E8 */
{
    FN_ENTER(0x0078b1e8);
    /* 0078b1e8: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x78b1edu); f_0078b1c4();
    /* 0078b1ed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b1f0: je 0x78b1f5 */ if (fZ) goto L_0078b1f5;
L_0078b1f2:; BB(0x0078b1f2);
    /* 0078b1f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b1f4: ret  */ FN_RET(0x0078b1e8); r_esp += 4; return;
L_0078b1f5:; BB(0x0078b1f5);
    /* 0078b1f5: mov eax, dword ptr [0xa95624] */ r_eax = R32((u32)(0xa95624u));
    /* 0078b1fa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078b1fd: jne 0x78b1f2 */ if (!fZ) goto L_0078b1f2;
L_0078b1ff:; BB(0x0078b1ff);
    /* 0078b1ff: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b204: ret  */ FN_RET(0x0078b1e8); r_esp += 4; return;
}

void f_0078b208(void) /* sub_78B208 */
{
    FN_ENTER(0x0078b208);
    /* 0078b208: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x78b20du); f_006dc358();
    /* 0078b20d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078b210: je 0x78b218 */ if (fZ) goto L_0078b218;
L_0078b212:; BB(0x0078b212);
    /* 0078b212: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b217: ret  */ FN_RET(0x0078b208); r_esp += 4; return;
L_0078b218:; BB(0x0078b218);
    /* 0078b218: mov eax, dword ptr [0xa0f45c] */ r_eax = R32((u32)(0xa0f45cu));
    /* 0078b21d: ret  */ FN_RET(0x0078b208); r_esp += 4; return;
}

void f_0078b220(void) /* sub_78B220 */
{
    FN_ENTER(0x0078b220);
    /* 0078b220: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0078b225: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b228: je 0x78b23c */ if (fZ) goto L_0078b23c;
L_0078b22a:; BB(0x0078b22a);
    /* 0078b22a: mov eax, dword ptr [0xaafc90] */ r_eax = R32((u32)(0xaafc90u));
    /* 0078b22f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b231: je 0x78b239 */ if (fZ) goto L_0078b239;
L_0078b233:; BB(0x0078b233);
    /* 0078b233: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b238: ret  */ FN_RET(0x0078b220); r_esp += 4; return;
L_0078b239:; BB(0x0078b239);
    /* 0078b239: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b23b: ret  */ FN_RET(0x0078b220); r_esp += 4; return;
L_0078b23c:; BB(0x0078b23c);
    /* 0078b23c: mov eax, dword ptr [0xaafdb8] */ r_eax = R32((u32)(0xaafdb8u));
    /* 0078b241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b243: jne 0x78b22a */ if (!fZ) goto L_0078b22a;
L_0078b245:; BB(0x0078b245);
    /* 0078b245: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b24a: ret  */ FN_RET(0x0078b220); r_esp += 4; return;
}

void f_0078b24c(void) /* sub_78B24C */
{
    FN_ENTER(0x0078b24c);
    /* 0078b24c: mov dword ptr [0xa9c4f8], 0x3f800000 */ W32((u32)(0xa9c4f8u), 0x3f800000u);
    /* 0078b256: mov dword ptr [0xa9c4fc], 0x41000000 */ W32((u32)(0xa9c4fcu), 0x41000000u);
    /* 0078b260: mov dword ptr [0xa9c500], 0x3fc00000 */ W32((u32)(0xa9c500u), 0x3fc00000u);
    /* 0078b26a: ret  */ FN_RET(0x0078b24c); r_esp += 4; return;
}

void f_0078b26c(void) /* sub_78B26C */
{
    FN_ENTER(0x0078b26c);
    /* 0078b26c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b26f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0078b271: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078b274: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0078b279: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b27e: jne 0x78b289 */ if (!fZ) goto L_0078b289;
L_0078b280:; BB(0x0078b280);
    /* 0078b280: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b285: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b288: ret  */ FN_RET(0x0078b26c); r_esp += 4; return;
L_0078b289:; BB(0x0078b289);
    /* 0078b289: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0078b28c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078b290: and eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0078b295: cmp eax, 0x7f800000 */ {  u32 a = r_eax; u32 b = 0x7f800000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b29a: jne 0x78b2a5 */ if (!fZ) goto L_0078b2a5;
L_0078b29c:; BB(0x0078b29c);
    /* 0078b29c: mov eax, 1 */ r_eax = 0x1u;
    /* 0078b2a1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b2a4: ret  */ FN_RET(0x0078b26c); r_esp += 4; return;
L_0078b2a5:; BB(0x0078b2a5);
    /* 0078b2a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078b2a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b2aa: ret  */ FN_RET(0x0078b26c); r_esp += 4; return;
}

void f_0078b2ac(void) /* sub_78B2AC */
{
    FN_ENTER(0x0078b2ac);
    /* 0078b2ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078b2af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078b2b1: call 0x78b2d0 */ r_esp -= 4; W32(r_esp, 0x78b2b6u); f_0078b2d0();
    /* 0078b2b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078b2ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b2bc: jne 0x78b2c2 */ if (!fZ) goto L_0078b2c2;
L_0078b2be:; BB(0x0078b2be);
    /* 0078b2be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b2bf: ret 4 */ FN_RET(0x0078b2ac); r_esp += 8; return;
L_0078b2c2:; BB(0x0078b2c2);
    /* 0078b2c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78b2c8u); f_005c2f74();
    /* 0078b2c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b2c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b2ca: ret 4 */ FN_RET(0x0078b2ac); r_esp += 8; return;
}

void f_0078b2c5(void)
{
    FN_ENTER(0x0078b2c5);
    goto L_0078b2c5;
L_0078b2aa:; BB(0x0078b2aa);
    /* 0078b2aa: ret  */ FN_RET(0x0078b2c5); r_esp += 4; return;
L_0078b2c5:; BB(0x0078b2c5);
    /* 0078b2c5: jl 0x78b2aa */ if ((fS!=fO)) goto L_0078b2aa;
L_0078b2c7:; BB(0x0078b2c7);
    /* 0078b2c7: call ptr [ecx + 0x5b] */ { u32 t = R32((u32)(r_ecx+0x5bu)); r_esp -= 4; W32(r_esp, 0x78b2cau); call_ind(t); }
    /* 0078b2ca: ret 4 */ FN_RET(0x0078b2c5); r_esp += 8; return;
}

void f_0078b2d0(void) /* sub_78B2D0 */
{
    FN_ENTER(0x0078b2d0);
    /* 0078b2d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0078b2d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2d5: push 0x8f4c9c */ { u32 v = 0x8f4c9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078b2e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b2e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078b2e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b2eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078b2ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078b2f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078b2f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078b2f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078b2fa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078b301: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b304: mov dword ptr [ecx], 0xb451f0 */ W32((u32)(r_ecx), 0xb451f0u);
    /* 0078b30a: call 0x78b33c */ r_esp -= 4; W32(r_esp, 0x78b30fu); f_0078b33c();
    /* 0078b30f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b312: call 0x78b354 */ r_esp -= 4; W32(r_esp, 0x78b317u); f_0078b354();
    /* 0078b317: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b31a: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b31fu); f_0078ba3c();
    /* 0078b31f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078b326: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b329: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78b32eu); f_008171e8();
    /* 0078b32e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078b331: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078b338: mov esp, ebp */ r_esp = r_ebp;
    /* 0078b33a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b33b: ret  */ FN_RET(0x0078b2d0); r_esp += 4; return;
}

void f_0078b33c(void) /* sub_78B33C */
{
    FN_ENTER(0x0078b33c);
    /* 0078b33c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b33d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078b33f: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0078b342: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b344: je 0x78b352 */ if (fZ) goto L_0078b352;
L_0078b346:; BB(0x0078b346);
    /* 0078b346: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78b34bu); f_007127b0();
    /* 0078b34b: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
L_0078b352:; BB(0x0078b352);
    /* 0078b352: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b353: ret  */ FN_RET(0x0078b33c); r_esp += 4; return;
}

void f_0078b354(void) /* sub_78B354 */
{
    FN_ENTER(0x0078b354);
    /* 0078b354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b355: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078b357: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0078b35a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b35c: je 0x78b36a */ if (fZ) goto L_0078b36a;
L_0078b35e:; BB(0x0078b35e);
    /* 0078b35e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78b363u); f_007127b0();
    /* 0078b363: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
L_0078b36a:; BB(0x0078b36a);
    /* 0078b36a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b36b: ret  */ FN_RET(0x0078b354); r_esp += 4; return;
}

void f_0078b36c(void) /* sub_78B36C */
{
    FN_ENTER(0x0078b36c);
    /* 0078b36c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b36d: mov ecx, 0x9fd1b8 */ r_ecx = 0x9fd1b8u;
    /* 0078b372: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x78b377u); f_00829de0();
    /* 0078b377: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078b379: mov ebx, eax */ r_ebx = r_eax;
L_0078b37b:; BB(0x0078b37b);
    /* 0078b37b: mov edx, dword ptr [ebx + 0xa9c808] */ r_edx = R32((u32)(r_ebx+0xa9c808u));
    /* 0078b381: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b383: je 0x78b396 */ if (fZ) goto L_0078b396;
L_0078b385:; BB(0x0078b385);
    /* 0078b385: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b386: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x78b38bu); f_00857e98();
    /* 0078b38b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b38c: mov dword ptr [ebx + 0xa9c808], 0 */ W32((u32)(r_ebx+0xa9c808u), 0x0u);
L_0078b396:; BB(0x0078b396);
    /* 0078b396: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078b398: mov dword ptr [ebx + 0xa9c870], edx */ W32((u32)(r_ebx+0xa9c870u), r_edx);
    /* 0078b39e: mov dword ptr [ebx + 0xa9c83c], edx */ W32((u32)(r_ebx+0xa9c83cu), r_edx);
    /* 0078b3a4: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078b3a7: cmp ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078b3aa: jl 0x78b37b */ if ((fS!=fO)) goto L_0078b37b;
L_0078b3ac:; BB(0x0078b3ac);
    /* 0078b3ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b3ad: ret  */ FN_RET(0x0078b36c); r_esp += 4; return;
}

void f_0078b3b0(void) /* sub_78B3B0 */
{
    FN_ENTER(0x0078b3b0);
    /* 0078b3b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b3b1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b3b4: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0078b3b8: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b3bd: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b3c1: push dword ptr [ebp*4 + 0xa9c808] */ { u32 v = R32((u32)(r_ebp*4+0xa9c808u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b3c8: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78b3cdu); f_0086b6b8();
    /* 0078b3cd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b3d0: mov ecx, 0x9fd1b8 */ r_ecx = 0x9fd1b8u;
    /* 0078b3d5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78b3dau); f_00829cc8();
    /* 0078b3da: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0078b3dd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078b3df: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x78b3e4u); f_00835ca8();
    /* 0078b3e4: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b3e9: push dword ptr [ebp*4 + 0xa9c808] */ { u32 v = R32((u32)(r_ebp*4+0xa9c808u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b3f0: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b3f4: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78b3f9u); f_0086b6b8();
    /* 0078b3f9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b3fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0078b3fe: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x78b403u); f_00835cd8();
    /* 0078b403: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b406: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b407: ret  */ FN_RET(0x0078b3b0); r_esp += 4; return;
}

void f_0078b408(void) /* sub_78B408 */
{
    FN_ENTER(0x0078b408);
    /* 0078b408: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b40b: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0078b40f: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0078b413: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0078b417: fld dword ptr [0x97a9dc] */ FPUSH(R_F32((u32)(0x97a9dcu)));
    /* 0078b41d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0078b421: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078b423: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0078b427: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078b429: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0078b42d: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0078b435: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0078b43d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0078b441: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0078b445: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 0078b44d: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 0078b455: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78b45au); f_0082dbac();
    /* 0078b45a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78b45fu); f_007a9044();
    /* 0078b45f: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0078b463: call 0x78b488 */ r_esp -= 4; W32(r_esp, 0x78b468u); f_0078b488();
    /* 0078b468: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b46d: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0078b471: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78b476u); f_0082b440();
    /* 0078b476: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78b47bu); f_004ac444();
    /* 0078b47b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78b480u); f_0082dbac();
    /* 0078b480: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b483: ret  */ FN_RET(0x0078b408); r_esp += 4; return;
}

void f_0078b488(void) /* sub_78B488 */
{
    FN_ENTER(0x0078b488);
    /* 0078b488: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b489: mov ebx, eax */ r_ebx = r_eax;
    /* 0078b48b: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078b490: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x78b495u); f_0082bb30();
    /* 0078b495: call 0x78b4a8 */ r_esp -= 4; W32(r_esp, 0x78b49au); f_0078b4a8();
    /* 0078b49a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0078b49c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0078b4a1: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78b4a6u); f_0082bb60();
    /* 0078b4a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078b4a7: ret  */ FN_RET(0x0078b488); r_esp += 4; return;
}

void f_0078b4a8(void) /* sub_78B4A8 */
{
    FN_ENTER(0x0078b4a8);
    /* 0078b4a8: mov ecx, 0x9fd1b8 */ r_ecx = 0x9fd1b8u;
    /* 0078b4ad: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78b4b2u); f_00829cc8();
    /* 0078b4b2: ret  */ FN_RET(0x0078b4a8); r_esp += 4; return;
}

void f_0078b4b4(void) /* sub_78B4B4 */
{
    FN_ENTER(0x0078b4b4);
    /* 0078b4b4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b4b7: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78b4bcu); f_0082dbac();
    /* 0078b4bc: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78b4c1u); f_007a9044();
    /* 0078b4c1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078b4c6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x78b4cbu); f_0082bb30();
    /* 0078b4cb: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 0078b4d1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78b4d6u); f_00829cc8();
    /* 0078b4d6: mov ecx, 4 */ r_ecx = 0x4u;
    /* 0078b4db: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0078b4e0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x78b4e5u); f_0082bb60();
    /* 0078b4e5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0078b4e9: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0078b4ed: fld dword ptr [0x97a9cc] */ FPUSH(R_F32((u32)(0x97a9ccu)));
    /* 0078b4f3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078b4f6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0078b4f9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0078b4fb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078b4ff: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078b503: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0078b507: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078b509: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0078b50d: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0078b515: mov dword ptr [esp + 0x14], 0x3f600000 */ W32((u32)(r_esp+0x14u), 0x3f600000u);
    /* 0078b51d: mov dword ptr [esp + 0x18], 0x3e000000 */ W32((u32)(r_esp+0x18u), 0x3e000000u);
    /* 0078b525: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 0078b52d: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b532: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078b536: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78b53bu); f_0082b440();
    /* 0078b53b: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78b540u); f_004ac444();
    /* 0078b540: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x78b545u); f_0082dab0();
    /* 0078b545: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b548: ret  */ FN_RET(0x0078b4b4); r_esp += 4; return;
}

void f_0078b54c(void) /* sub_78B54C */
{
    FN_ENTER(0x0078b54c);
    /* 0078b54c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b54d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078b54f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b551: push 0x8f4cc4 */ { u32 v = 0x8f4cc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078b55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b55d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078b564: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078b56a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0078b56d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078b570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078b573: push 0x830 */ { u32 v = 0x830u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b578: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0078b57f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x78b584u); f_005caba4();
    /* 0078b584: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b585: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0078b588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b58a: je 0x78b5c0 */ if (fZ) goto L_0078b5c0;
L_0078b58c:; BB(0x0078b58c);
    /* 0078b58c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0078b593: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078b59a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b59d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b5a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b5a3: call 0x78b5c4 */ r_esp -= 4; W32(r_esp, 0x78b5a8u); f_0078b5c4();
    /* 0078b5a8: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b5ab: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0078b5b2:; BB(0x0078b5b2);
    /* 0078b5b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078b5b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078b5bc: mov esp, ebp */ r_esp = r_ebp;
    /* 0078b5be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b5bf: ret  */ FN_RET(0x0078b54c); r_esp += 4; return;
L_0078b5c0:; BB(0x0078b5c0);
    /* 0078b5c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b5c2: jmp 0x78b5b2 */ goto L_0078b5b2;
}

void f_0078b5c4(void) /* sub_78B5C4 */
{
    FN_ENTER(0x0078b5c4);
    /* 0078b5c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b5c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0078b5c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b5c9: push 0x8f4ce0 */ { u32 v = 0x8f4ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b5ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0078b5d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b5d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078b5dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b5df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078b5e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0078b5e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0078b5e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078b5eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0078b5ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b5f1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0078b5f4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0078b5f7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x78b5fcu); f_008193cc();
    /* 0078b5fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078b603: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078b606: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0078b609: mov dword ptr [ecx], 0xb451f0 */ W32((u32)(r_ecx), 0xb451f0u);
    /* 0078b60f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078b611: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b616: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b618: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0078b61b: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0078b61e: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0078b621: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0078b624: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 0078b627: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078b62a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b62b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x78b630u); f_0086b688();
    /* 0078b630: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b635: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b63au); f_00793168();
    /* 0078b63a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b63d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078b640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b641: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b646u); f_0078ba54();
    /* 0078b646: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0078b649: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078b64c: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078b64f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0078b652: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0078b655: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078b65c: mov esp, ebp */ r_esp = r_ebp;
    /* 0078b65e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b65f: ret 8 */ FN_RET(0x0078b5c4); r_esp += 12; return;
}

void f_0078b664(void) /* sub_78B664 */
{
    FN_ENTER(0x0078b664);
    /* 0078b664: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0078b667: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078b66a: ja 0x78b688 */ if ((!fC&&!fZ)) goto L_0078b688;
L_0078b66c:; BB(0x0078b66c);
    /* 0078b66c: mov eax, dword ptr [eax*4 + 0x97a94c] */ r_eax = R32((u32)(r_eax*4+0x97a94cu));
    /* 0078b673: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0078b688:; BB(0x0078b688);
    /* 0078b688: ret  */ FN_RET(0x0078b664); r_esp += 4; return;
}

void f_0078b675(void)
{
    FN_ENTER(0x0078b675);
    /* 0078b675: call 0x78b68c */ r_esp -= 4; W32(r_esp, 0x78b67au); f_0078b68c();
    /* 0078b67a: jmp 0x78b688 */ goto L_0078b688;
L_0078b688:; BB(0x0078b688);
    /* 0078b688: ret  */ FN_RET(0x0078b675); r_esp += 4; return;
}

void f_0078b67c(void)
{
    FN_ENTER(0x0078b67c);
    /* 0078b67c: call 0x78b6d8 */ r_esp -= 4; W32(r_esp, 0x78b681u); f_0078b6d8();
    /* 0078b681: jmp 0x78b688 */ goto L_0078b688;
L_0078b688:; BB(0x0078b688);
    /* 0078b688: ret  */ FN_RET(0x0078b67c); r_esp += 4; return;
}

void f_0078b683(void)
{
    FN_ENTER(0x0078b683);
    /* 0078b683: call 0x78b844 */ r_esp -= 4; W32(r_esp, 0x78b688u); f_0078b844();
    /* 0078b688: ret  */ FN_RET(0x0078b683); r_esp += 4; return;
}

void f_0078b688(void)
{
    FN_ENTER(0x0078b688);
    /* 0078b688: ret  */ FN_RET(0x0078b688); r_esp += 4; return;
}

void f_0078b68c(void) /* sub_78B68C */
{
    FN_ENTER(0x0078b68c);
    /* 0078b68c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b68d: mov esi, ecx */ r_esi = r_ecx;
    /* 0078b68f: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078b692: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b694: je 0x78b6cc */ if (fZ) goto L_0078b6cc;
L_0078b696:; BB(0x0078b696);
    /* 0078b696: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x78b69bu); f_0073b170();
    /* 0078b69b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b69d: je 0x78b6ca */ if (fZ) goto L_0078b6ca;
L_0078b69f:; BB(0x0078b69f);
    /* 0078b69f: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x78b6a4u); f_00694c6c();
    /* 0078b6a4: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b6aa: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0078b6ad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078b6af: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078b6b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078b6b3: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0078b6ba: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x78b6bfu); f_007c1160();
    /* 0078b6bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b6c1: je 0x78b6ca */ if (fZ) goto L_0078b6ca;
L_0078b6c3:; BB(0x0078b6c3);
    /* 0078b6c3: mov dword ptr [esi + 0x28], 7 */ W32((u32)(r_esi+0x28u), 0x7u);
L_0078b6ca:; BB(0x0078b6ca);
    /* 0078b6ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b6cb: ret  */ FN_RET(0x0078b68c); r_esp += 4; return;
L_0078b6cc:; BB(0x0078b6cc);
    /* 0078b6cc: mov dword ptr [esi + 0x28], 7 */ W32((u32)(r_esi+0x28u), 0x7u);
    /* 0078b6d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b6d4: ret  */ FN_RET(0x0078b68c); r_esp += 4; return;
}

void f_0078b6d8(void) /* sub_78B6D8 */
{
    FN_ENTER(0x0078b6d8);
    /* 0078b6d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b6d9: mov edi, ecx */ r_edi = r_ecx;
    /* 0078b6db: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0078b6de: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b6e0: je 0x78b768 */ if (fZ) goto L_0078b768;
L_0078b6e6:; BB(0x0078b6e6);
    /* 0078b6e6: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x78b6ebu); f_0073b170();
    /* 0078b6eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b6ed: je 0x78b75d */ if (fZ) goto L_0078b75d;
L_0078b6ef:; BB(0x0078b6ef);
    /* 0078b6ef: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0078b6f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b6f4: je 0x78b75f */ if (fZ) goto L_0078b75f;
L_0078b6f6:; BB(0x0078b6f6);
    /* 0078b6f6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0078b6fd: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078b6ff: je 0x78b752 */ if (fZ) goto L_0078b752;
L_0078b701:; BB(0x0078b701);
    /* 0078b701: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x78b706u); f_007365f4();
    /* 0078b706: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b708: jne 0x78b749 */ if (!fZ) goto L_0078b749;
L_0078b70a:; BB(0x0078b70a);
    /* 0078b70a: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0078b710: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b712: je 0x78b740 */ if (fZ) goto L_0078b740;
L_0078b714:; BB(0x0078b714);
    /* 0078b714: lea eax, [edi + 0x30] */ r_eax = (u32)(r_edi+0x30u);
    /* 0078b717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b718: call 0x7f6650 */ r_esp -= 4; W32(r_esp, 0x78b71du); f_007f6650();
    /* 0078b71d: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b71f: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b724u); f_0078ba3c();
    /* 0078b724: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b729: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b72eu); f_00793168();
    /* 0078b72e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b730: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b732: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b737u); f_0078ba54();
    /* 0078b737: mov dword ptr [edi + 0x28], 6 */ W32((u32)(r_edi+0x28u), 0x6u);
    /* 0078b73e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b73f: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
L_0078b740:; BB(0x0078b740);
    /* 0078b740: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
    /* 0078b747: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b748: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
L_0078b749:; BB(0x0078b749);
    /* 0078b749: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
    /* 0078b750: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b751: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
L_0078b752:; BB(0x0078b752);
    /* 0078b752: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078b754: je 0x78b75d */ if (fZ) goto L_0078b75d;
L_0078b756:; BB(0x0078b756);
    /* 0078b756: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
L_0078b75d:; BB(0x0078b75d);
    /* 0078b75d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b75e: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
L_0078b75f:; BB(0x0078b75f);
    /* 0078b75f: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b761: call 0x78b774 */ r_esp -= 4; W32(r_esp, 0x78b766u); f_0078b774();
    /* 0078b766: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b767: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
L_0078b768:; BB(0x0078b768);
    /* 0078b768: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
    /* 0078b76f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b770: ret  */ FN_RET(0x0078b6d8); r_esp += 4; return;
}

void f_0078b774(void) /* sub_78B774 */
{
    FN_ENTER(0x0078b774);
    /* 0078b774: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078b775: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b778: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078b77a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0078b77d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b77f: je 0x78b7ec */ if (fZ) goto L_0078b7ec;
L_0078b781:; BB(0x0078b781);
    /* 0078b781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b783: je 0x78b7e7 */ if (fZ) goto L_0078b7e7;
L_0078b785:; BB(0x0078b785);
    /* 0078b785: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b787: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b78cu); f_00793168();
    /* 0078b78c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b78d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b78f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b791: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078b794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b795: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x78b79au); f_00735c90();
    /* 0078b79a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b79c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b7a1u); f_00793168();
    /* 0078b7a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b7a2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7a4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7a6: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078b7a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7aa: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x78b7afu); f_00735c90();
    /* 0078b7af: push 0x42a00000 */ { u32 v = 0x42a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7b4: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078b7b7: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x78b7bcu); f_00736138();
    /* 0078b7bc: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7c1: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078b7c4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x78b7c9u); f_00712624();
    /* 0078b7c9: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078b7cc: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x78b7d1u); f_00736458();
    /* 0078b7d1: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0078b7d4: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0078b7db: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078b7e0: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
L_0078b7e7:; BB(0x0078b7e7);
    /* 0078b7e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b7ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078b7eb: ret  */ FN_RET(0x0078b774); r_esp += 4; return;
L_0078b7ec:; BB(0x0078b7ec);
    /* 0078b7ec: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b7f1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78b7f6u); f_0073ec50();
    /* 0078b7f6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078b7f8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078b7fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0078b7ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0078b803: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b808: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78b80du); f_0073ec50();
    /* 0078b80d: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078b811: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0078b813: fadd dword ptr [0x97a99c] */ ST(0) = ST(0) + R_F32((u32)(0x97a99cu));
    /* 0078b819: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0078b81d: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0078b820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078b822: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0078b826: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0078b82a: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0078b82e: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b831: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b833: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b834: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x78b839u); f_007354fc();
    /* 0078b839: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b83c: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0078b83f: jmp 0x78b781 */ goto L_0078b781;
}

void f_0078b844(void) /* sub_78B844 */
{
    FN_ENTER(0x0078b844);
    /* 0078b844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b845: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b846: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078b849: mov edi, ecx */ r_edi = r_ecx;
    /* 0078b84b: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0078b84e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b850: je 0x78b9e7 */ if (fZ) goto L_0078b9e7;
L_0078b856:; BB(0x0078b856);
    /* 0078b856: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x78b85bu); f_0073b170();
    /* 0078b85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b85d: je 0x78b95a */ if (fZ) goto L_0078b95a;
L_0078b863:; BB(0x0078b863);
    /* 0078b863: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0078b866: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b868: je 0x78b9da */ if (fZ) goto L_0078b9da;
L_0078b86e:; BB(0x0078b86e);
    /* 0078b86e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0078b875: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078b877: je 0x78b94f */ if (fZ) goto L_0078b94f;
L_0078b87d:; BB(0x0078b87d);
    /* 0078b87d: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x78b882u); f_007365f4();
    /* 0078b882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b884: je 0x78b893 */ if (fZ) goto L_0078b893;
L_0078b886:; BB(0x0078b886);
    /* 0078b886: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
    /* 0078b88d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b890: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b891: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b892: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b893:; BB(0x0078b893);
    /* 0078b893: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b898: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b89d: lea esi, [edi + 0x30] */ r_esi = (u32)(r_edi+0x30u);
    /* 0078b8a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8a1: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x78b8a6u); f_0086b688();
    /* 0078b8a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b8a9: mov edx, dword ptr [0x9fd1c0] */ r_edx = R32((u32)(0x9fd1c0u));
    /* 0078b8af: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0078b8b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8b5: mov ecx, esi */ r_ecx = r_esi;
    /* 0078b8b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8b8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8ba: call 0x82aacc */ r_esp -= 4; W32(r_esp, 0x78b8bfu); f_0082aacc();
    /* 0078b8bf: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0078b8c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b8c5: je 0x78b960 */ if (fZ) goto L_0078b960;
L_0078b8cb:; BB(0x0078b8cb);
    /* 0078b8cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b8ce: je 0x78b928 */ if (fZ) goto L_0078b928;
L_0078b8d0:; BB(0x0078b8d0);
    /* 0078b8d0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b8d3: jne 0x78b8fc */ if (!fZ) goto L_0078b8fc;
L_0078b8d5:; BB(0x0078b8d5);
    /* 0078b8d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b8d7: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b8dcu); f_0078ba3c();
    /* 0078b8dc: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8e1: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b8e6u); f_00793168();
    /* 0078b8e6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b8e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b8e8: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b8ea: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b8efu); f_0078ba54();
    /* 0078b8ef: mov dword ptr [edi + 0x28], 3 */ W32((u32)(r_edi+0x28u), 0x3u);
    /* 0078b8f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b8f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b8fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b8fb: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b8fc:; BB(0x0078b8fc);
    /* 0078b8fc: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b8ff: jne 0x78b95a */ if (!fZ) goto L_0078b95a;
L_0078b901:; BB(0x0078b901);
    /* 0078b901: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b903: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b908u); f_0078ba3c();
    /* 0078b908: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b90d: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b912u); f_00793168();
    /* 0078b912: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b913: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b914: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b916: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b91bu); f_0078ba54();
    /* 0078b91b: mov dword ptr [edi + 0x28], 4 */ W32((u32)(r_edi+0x28u), 0x4u);
    /* 0078b922: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b925: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b926: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b927: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b928:; BB(0x0078b928);
    /* 0078b928: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b92a: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b92fu); f_0078ba3c();
    /* 0078b92f: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b934: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b939u); f_00793168();
    /* 0078b939: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b93a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b93b: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b93d: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b942u); f_0078ba54();
    /* 0078b942: mov dword ptr [edi + 0x28], 2 */ W32((u32)(r_edi+0x28u), 0x2u);
    /* 0078b949: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b94c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b94d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b94e: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b94f:; BB(0x0078b94f);
    /* 0078b94f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078b951: je 0x78b95a */ if (fZ) goto L_0078b95a;
L_0078b953:; BB(0x0078b953);
    /* 0078b953: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
L_0078b95a:; BB(0x0078b95a);
    /* 0078b95a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b95d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b95e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b95f: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b960:; BB(0x0078b960);
    /* 0078b960: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b965: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b966: push dword ptr [0xa9c838] */ { u32 v = R32((u32)(0xa9c838u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b96c: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78b971u); f_0086b6b8();
    /* 0078b971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b974: mov ecx, 0x9fd1b8 */ r_ecx = 0x9fd1b8u;
    /* 0078b979: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x78b97eu); f_00829cc8();
    /* 0078b97e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0078b981: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 0078b986: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x78b98bu); f_00835ca8();
    /* 0078b98b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078b990: push dword ptr [0xa9c838] */ { u32 v = R32((u32)(0xa9c838u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b996: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078b99a: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x78b99fu); f_0086b6b8();
    /* 0078b99f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078b9a2: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 0078b9a7: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x78b9acu); f_00835cd8();
    /* 0078b9ac: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b9ae: call 0x78b9f4 */ r_esp -= 4; W32(r_esp, 0x78b9b3u); f_0078b9f4();
    /* 0078b9b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b9b5: call 0x78ba3c */ r_esp -= 4; W32(r_esp, 0x78b9bau); f_0078ba3c();
    /* 0078b9ba: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 0078b9bf: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x78b9c4u); f_00793168();
    /* 0078b9c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078b9c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078b9c6: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b9c8: call 0x78ba54 */ r_esp -= 4; W32(r_esp, 0x78b9cdu); f_0078ba54();
    /* 0078b9cd: mov dword ptr [edi + 0x28], 1 */ W32((u32)(r_edi+0x28u), 0x1u);
    /* 0078b9d4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b9d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b9d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b9d9: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b9da:; BB(0x0078b9da);
    /* 0078b9da: mov ecx, edi */ r_ecx = r_edi;
    /* 0078b9dc: call 0x78b774 */ r_esp -= 4; W32(r_esp, 0x78b9e1u); f_0078b774();
    /* 0078b9e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b9e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b9e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b9e6: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
L_0078b9e7:; BB(0x0078b9e7);
    /* 0078b9e7: mov dword ptr [edi + 0x28], 7 */ W32((u32)(r_edi+0x28u), 0x7u);
    /* 0078b9ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078b9f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078b9f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078b9f3: ret  */ FN_RET(0x0078b844); r_esp += 4; return;
}

void f_0078b9f4(void) /* sub_78B9F4 */
{
    FN_ENTER(0x0078b9f4);
    /* 0078b9f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078b9f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078b9f6: mov esi, ecx */ r_esi = r_ecx;
    /* 0078b9f8: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0078b9fb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078b9fd: je 0x78ba10 */ if (fZ) goto L_0078ba10;
L_0078b9ff:; BB(0x0078b9ff);
    /* 0078b9ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ba01: je 0x78ba0d */ if (fZ) goto L_0078ba0d;
L_0078ba03:; BB(0x0078ba03);
    /* 0078ba03: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba08: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x78ba0du); f_00712624();
L_0078ba0d:; BB(0x0078ba0d);
    /* 0078ba0d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ba0e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ba0f: ret  */ FN_RET(0x0078b9f4); r_esp += 4; return;
L_0078ba10:; BB(0x0078ba10);
    /* 0078ba10: push 0xef */ { u32 v = 0xefu; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba15: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78ba1au); f_0073ec50();
    /* 0078ba1a: mov ebx, eax */ r_ebx = r_eax;
    /* 0078ba1c: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba21: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78ba26u); f_0073ec50();
    /* 0078ba26: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ba29: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba2d: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x78ba32u); f_0073aa40();
    /* 0078ba32: mov ecx, eax */ r_ecx = r_eax;
    /* 0078ba34: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078ba37: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 0078ba3a: jmp 0x78b9ff */ goto L_0078b9ff;
}

void f_0078ba3c(void) /* sub_78BA3C */
{
    FN_ENTER(0x0078ba3c);
    /* 0078ba3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078ba3f: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0078ba42: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ba44: je 0x78ba52 */ if (fZ) goto L_0078ba52;
L_0078ba46:; BB(0x0078ba46);
    /* 0078ba46: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x78ba4bu); f_007127b0();
    /* 0078ba4b: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
L_0078ba52:; BB(0x0078ba52);
    /* 0078ba52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078ba53: ret  */ FN_RET(0x0078ba3c); r_esp += 4; return;
}

void f_0078ba54(void) /* sub_78BA54 */
{
    FN_ENTER(0x0078ba54);
    /* 0078ba54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba56: mov esi, ecx */ r_esi = r_ecx;
    /* 0078ba58: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078ba5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078ba5d: je 0x78ba80 */ if (fZ) goto L_0078ba80;
L_0078ba5f:; BB(0x0078ba5f);
    /* 0078ba5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078ba61: je 0x78ba7b */ if (fZ) goto L_0078ba7b;
L_0078ba63:; BB(0x0078ba63);
    /* 0078ba63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba65: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ba69: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x78ba6eu); f_0073ae38();
    /* 0078ba6e: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba73: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0078ba76: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x78ba7bu); f_00712624();
L_0078ba7b:; BB(0x0078ba7b);
    /* 0078ba7b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078ba7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078ba7d: ret 4 */ FN_RET(0x0078ba54); r_esp += 8; return;
L_0078ba80:; BB(0x0078ba80);
    /* 0078ba80: push 0xf1 */ { u32 v = 0xf1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba85: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78ba8au); f_0073ec50();
    /* 0078ba8a: mov ebx, eax */ r_ebx = r_eax;
    /* 0078ba8c: push 0xf2 */ { u32 v = 0xf2u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba91: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x78ba96u); f_0073ec50();
    /* 0078ba96: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078ba99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078ba9d: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x78baa2u); f_0073aa40();
    /* 0078baa2: mov ecx, eax */ r_ecx = r_eax;
    /* 0078baa4: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078baa7: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 0078baaa: jmp 0x78ba5f */ goto L_0078ba5f;
}

void f_0078baac(void) /* sub_78BAAC */
{
    FN_ENTER(0x0078baac);
    /* 0078baac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078baad: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078bab0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078bab2: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0078bab5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bab7: je 0x78bb64 */ if (fZ) goto L_0078bb64;
L_0078babd:; BB(0x0078babd);
    /* 0078babd: call 0x712798 */ r_esp -= 4; W32(r_esp, 0x78bac2u); f_00712798();
    /* 0078bac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bac4: jne 0x78bacb */ if (!fZ) goto L_0078bacb;
L_0078bac6:; BB(0x0078bac6);
    /* 0078bac6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078bac9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078baca: ret  */ FN_RET(0x0078baac); r_esp += 4; return;
L_0078bacb:; BB(0x0078bacb);
    /* 0078bacb: fld dword ptr [0x97a988] */ FPUSH(R_F32((u32)(0x97a988u)));
    /* 0078bad1: fld dword ptr [0x97a984] */ FPUSH(R_F32((u32)(0x97a984u)));
    /* 0078bad7: fld dword ptr [0x97a980] */ FPUSH(R_F32((u32)(0x97a980u)));
    /* 0078badd: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0078bae0: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 0078bae3: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0078bae6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078bae8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0078baea: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 0078baed: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0078baef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078baf1: fadd dword ptr [eax + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x44u));
    /* 0078baf4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078baf6: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0078baf8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078bafa: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0078bafe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078bb00: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0078bb02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078bb04: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0078bb08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078bb0a: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0078bb0c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078bb0e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0078bb12: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078bb14: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0078bb18: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0078bb20: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0078bb28: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 0078bb30: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 0078bb38: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78bb3du); f_0082dbac();
    /* 0078bb3d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x78bb42u); f_007a9044();
    /* 0078bb42: mov eax, 0xc */ r_eax = 0xcu;
    /* 0078bb47: call 0x78b488 */ r_esp -= 4; W32(r_esp, 0x78bb4cu); f_0078b488();
    /* 0078bb4c: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bb51: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0078bb55: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x78bb5au); f_0082b440();
    /* 0078bb5a: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x78bb5fu); f_004ac444();
    /* 0078bb5f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x78bb64u); f_0082dbac();
L_0078bb64:; BB(0x0078bb64);
    /* 0078bb64: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078bb67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078bb68: ret  */ FN_RET(0x0078baac); r_esp += 4; return;
}

void f_0078bb6c(void) /* sub_78BB6C */
{
    FN_ENTER(0x0078bb6c);
    /* 0078bb6c: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0078bb6f: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0078bb72: mov eax, 0 */ r_eax = 0x0u;
    /* 0078bb77: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0078bb7a: ret  */ FN_RET(0x0078bb6c); r_esp += 4; return;
}

void f_0078bb7c(void) /* sub_78BB7C */
{
    FN_ENTER(0x0078bb7c);
    /* 0078bb7c: mov dword ptr [0xa9c7fc], 0x3f800000 */ W32((u32)(0xa9c7fcu), 0x3f800000u);
    /* 0078bb86: mov dword ptr [0xa9c800], 0x41000000 */ W32((u32)(0xa9c800u), 0x41000000u);
    /* 0078bb90: mov dword ptr [0xa9c804], 0x3fc00000 */ W32((u32)(0xa9c804u), 0x3fc00000u);
    /* 0078bb9a: ret  */ FN_RET(0x0078bb7c); r_esp += 4; return;
}

void f_0078bb9c(void) /* sub_78BB9C */
{
    FN_ENTER(0x0078bb9c);
    /* 0078bb9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078bb9d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078bb9e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078bb9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078bba0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078bba1: mov eax, 0xf1b30 */ r_eax = 0xf1b30u;
    /* 0078bba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0078bba8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078bbaa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0078bbac: mov ebp, eax */ r_ebp = r_eax;
    /* 0078bbae: mov esi, edx */ r_esi = r_edx;
    /* 0078bbb0: mov edi, ecx */ r_edi = r_ecx;
L_0078bbb2:; BB(0x0078bbb2);
    /* 0078bbb2: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbb7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x78bbbcu); f_008581c5();
    /* 0078bbbc: mov dword ptr [ebx + 0xa9c808], eax */ W32((u32)(r_ebx+0xa9c808u), r_eax);
    /* 0078bbc2: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbc7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbca: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x78bbcfu); f_0086b688();
    /* 0078bbcf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078bbd2: mov edx, dword ptr [ebx + 0xa9c808] */ r_edx = R32((u32)(r_ebx+0xa9c808u));
    /* 0078bbd8: lea ecx, [edi + 0xa9c520] */ r_ecx = (u32)(r_edi+0xa9c520u);
    /* 0078bbde: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0078bbe1: mov eax, 0x20 */ r_eax = 0x20u;
    /* 0078bbe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbe7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbe8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbea: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x78bbefu); f_0082a9dc();
    /* 0078bbef: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbf4: lea ecx, [esi + 0xa9c760] */ r_ecx = (u32)(r_esi+0xa9c760u);
    /* 0078bbfa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078bbfb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0078bbff: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x78bc04u); f_0082aa0c();
    /* 0078bc04: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078bc06: mov dword ptr [ebx + 0xa9c870], eax */ W32((u32)(r_ebx+0xa9c870u), r_eax);
    /* 0078bc0c: mov dword ptr [ebx + 0xa9c83c], eax */ W32((u32)(r_ebx+0xa9c83cu), r_eax);
    /* 0078bc12: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078bc15: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078bc18: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0078bc1b: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078bc1e: cmp ebx, 0x34 */ {  u32 a = r_ebx; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0078bc21: jl 0x78bbb2 */ if ((fS!=fO)) goto L_0078bbb2;
L_0078bc23:; BB(0x0078bc23);
    /* 0078bc23: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0078bc28: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x78bc2du); f_0082aab8();
    /* 0078bc2d: mov ecx, 0x9fd1b8 */ r_ecx = 0x9fd1b8u;
    /* 0078bc32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0078bc34: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x78bc39u); f_00829e74();
    /* 0078bc39: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x78bc3eu); f_0082aac0();
    /* 0078bc3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078bc3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078bc40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078bc41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078bc42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078bc43: ret  */ FN_RET(0x0078bb9c); r_esp += 4; return;
}

void f_0078bc44(void) /* sub_78BC44 */
{
    FN_ENTER(0x0078bc44);
    /* 0078bc44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078bc45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0078bc46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078bc47: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078bc4a: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 0078bc4e: mov byte ptr [esp], 0xc2 */ W8((u32)(r_esp), 0xc2u);
    /* 0078bc52: mov byte ptr [esp + 1], 0x17 */ W8((u32)(r_esp+0x1u), 0x17u);
    /* 0078bc57: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078bc5d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x78bc62u); f_0068d5a8();
    /* 0078bc62: mov edi, eax */ r_edi = r_eax;
    /* 0078bc64: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078bc67: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 0078bc6d: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 0078bc70: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bc73: je 0x78bd54 */ if (fZ) goto L_0078bd54;
L_0078bc79:; BB(0x0078bc79);
    /* 0078bc79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bc7b: je 0x78bc84 */ if (fZ) goto L_0078bc84;
L_0078bc7d:; BB(0x0078bc7d);
    /* 0078bc7d: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078bc80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078bc81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078bc82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078bc83: ret  */ FN_RET(0x0078bc44); r_esp += 4; return;
L_0078bc84:; BB(0x0078bc84);
    /* 0078bc84: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x78bc89u); f_007917b8();
    /* 0078bc89: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0078bc8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bc8f: je 0x78bd65 */ if (fZ) goto L_0078bd65;
L_0078bc95:; BB(0x0078bc95);
    /* 0078bc95: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0078bc98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0078bc9a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0078bc9d: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0078bca0: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0078bca3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0078bca7: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0078bcaa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0078bcae: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0078bcb2: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0078bcb6: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0078bcba: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0078bcbd: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0078bcc1: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0078bcc4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0078bcc8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0078bccb: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0078bccf: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0078bcd2: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0078bcd6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0078bcd9: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0078bcdd: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0078bce0: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0078bce4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0078bce7: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0078bceb: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0078bcee: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 0078bcf2: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0078bcf5: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0078bcf9: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0078bcfc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0078bd00: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0078bd03: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0078bd07: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0078bd0a: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0078bd0e: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0078bd11: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0078bd15: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0078bd18: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0078bd1c: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0078bd1f: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0078bd23: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0078bd26: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0078bd29: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0078bd2d: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0078bd31: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0078bd39: mov dword ptr [esp + 8], 4 */ W32((u32)(r_esp+0x8u), 0x4u);
    /* 0078bd41: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078bd44: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0078bd48: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x78bd4du); f_00800464();
    /* 0078bd4d: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078bd50: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078bd51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078bd52: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078bd53: ret  */ FN_RET(0x0078bc44); r_esp += 4; return;
L_0078bd54:; BB(0x0078bd54);
    /* 0078bd54: mov dword ptr [0xa9c8c4], 1 */ W32((u32)(0xa9c8c4u), 0x1u);
    /* 0078bd5e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078bd61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078bd62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078bd63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078bd64: ret  */ FN_RET(0x0078bc44); r_esp += 4; return;
L_0078bd65:; BB(0x0078bd65);
    /* 0078bd65: movzx edx, word ptr [0xa98474] */ r_edx = (u32)R16((u32)(0xa98474u));
    /* 0078bd6c: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0078bd6f: jne 0x78bc95 */ if (!fZ) goto L_0078bc95;
L_0078bd75:; BB(0x0078bd75);
    /* 0078bd75: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bd77: je 0x78bc95 */ if (fZ) goto L_0078bc95;
L_0078bd7d:; BB(0x0078bd7d);
    /* 0078bd7d: mov ecx, edi */ r_ecx = r_edi;
    /* 0078bd7f: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x78bd84u); f_00689410();
    /* 0078bd84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bd86: jne 0x78bc95 */ if (!fZ) goto L_0078bc95;
L_0078bd8c:; BB(0x0078bd8c);
    /* 0078bd8c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0078bd8e: mov ecx, edi */ r_ecx = r_edi;
    /* 0078bd90: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x78bd96u); call_ind(t); }
    /* 0078bd96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bd98: jne 0x78bc95 */ if (!fZ) goto L_0078bc95;
L_0078bd9e:; BB(0x0078bd9e);
    /* 0078bd9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bda0: je 0x78bc95 */ if (fZ) goto L_0078bc95;
L_0078bda6:; BB(0x0078bda6);
    /* 0078bda6: mov eax, dword ptr [esi + 0x2b8] */ r_eax = R32((u32)(r_esi+0x2b8u));
    /* 0078bdac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bdae: jne 0x78bdce */ if (!fZ) goto L_0078bdce;
L_0078bdb0:; BB(0x0078bdb0);
    /* 0078bdb0: mov eax, dword ptr [esi + 0x2bc] */ r_eax = R32((u32)(r_esi+0x2bcu));
    /* 0078bdb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bdb8: jne 0x78bdce */ if (!fZ) goto L_0078bdce;
L_0078bdba:; BB(0x0078bdba);
    /* 0078bdba: mov eax, dword ptr [esi + 0x2c0] */ r_eax = R32((u32)(r_esi+0x2c0u));
    /* 0078bdc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bdc2: jne 0x78bdce */ if (!fZ) goto L_0078bdce;
L_0078bdc4:; BB(0x0078bdc4);
    /* 0078bdc4: mov eax, dword ptr [esi + 0x2c4] */ r_eax = R32((u32)(r_esi+0x2c4u));
    /* 0078bdca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bdcc: je 0x78bdd5 */ if (fZ) goto L_0078bdd5;
L_0078bdce:; BB(0x0078bdce);
    /* 0078bdce: mov eax, 1 */ r_eax = 0x1u;
    /* 0078bdd3: jmp 0x78bdd7 */ goto L_0078bdd7;
L_0078bdd5:; BB(0x0078bdd5);
    /* 0078bdd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0078bdd7:; BB(0x0078bdd7);
    /* 0078bdd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078bdd9: jne 0x78bc95 */ if (!fZ) goto L_0078bc95;
L_0078bddf:; BB(0x0078bddf);
    /* 0078bddf: mov eax, 0xa9c8c0 */ r_eax = 0xa9c8c0u;
    /* 0078bde4: lea ebx, [ebx + 4] */ r_ebx = (u32)(r_ebx+0x4u);
    /* 0078bde7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0078bde9: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0078bdec: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0078bdef: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0078bdf2: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0078bdf4: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0078bdf7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0078bdfa: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 0078bdfd: mov dword ptr [eax + 0xc], edi */ W32((u32)(r_eax+0xcu), r_edi);
    /* 0078be00: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 0078be03: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 0078be06: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0078be09: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0078be0c: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0078be0f: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 0078be12: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 0078be15: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 0078be18: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0078be1b: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 0078be1e: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0078be21: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 0078be24: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 0078be27: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0078be2a: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0078be2d: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 0078be30: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0078be33: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0078be36: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0078be39: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0078be3c: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0078be3f: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0078be42: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0078be45: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0078be48: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0078be4b: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0078be4e: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0078be51: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 0078be54: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 0078be57: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 0078be5a: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 0078be5d: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 0078be60: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 0078be63: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0078be66: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 0078be69: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0078be70: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078be75: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0078be7b: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078be7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078be7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0078be80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078be81: ret  */ FN_RET(0x0078bc44); r_esp += 4; return;
}

void f_0078be84(void)
{
    FN_ENTER(0x0078be84);
    /* 0078be84: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0078be88: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0078be8b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078be8e: jne 0x78bf20 */ if (!fZ) goto L_0078bf20;
L_0078be94:; BB(0x0078be94);
    /* 0078be94: mov edx, 0xa9c8c0 */ r_edx = 0xa9c8c0u;
    /* 0078be99: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 0078be9c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0078be9e: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0078bea0: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0078bea3: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0078bea6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0078bea9: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0078beac: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0078beaf: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0078beb2: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0078beb5: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0078beb8: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0078bebb: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0078bebe: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0078bec1: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0078bec4: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0078bec7: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0078beca: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078becd: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0078bed0: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078bed3: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0078bed6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078bed9: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0078bedc: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0078bedf: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0078bee2: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0078bee5: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0078bee8: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0078beeb: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0078beee: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0078bef1: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0078bef4: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0078bef7: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0078befa: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0078befd: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0078bf00: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0078bf03: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0078bf06: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0078bf09: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0078bf0c: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0078bf0f: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 0078bf12: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0078bf15: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0078bf18: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0078bf1b: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0078bf1e: jmp 0x78bf36 */ goto L_0078bf36;
L_0078bf20:; BB(0x0078bf20);
    /* 0078bf20: mov dword ptr [0xa9c8c4], eax */ W32((u32)(0xa9c8c4u), r_eax);
    /* 0078bf25: lea eax, [ecx + 0xc] */ r_eax = (u32)(r_ecx+0xcu);
    /* 0078bf28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078bf29: push 0xa9c8c8 */ { u32 v = 0xa9c8c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078bf2e: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x78bf33u); f_00857fed();
    /* 0078bf33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078bf36:; BB(0x0078bf36);
    /* 0078bf36: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0078bf3d: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078bf42: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0078bf48: ret  */ FN_RET(0x0078be84); r_esp += 4; return;
}

void f_0078bf4c(void) /* sub_78BF4C */
{
    FN_ENTER(0x0078bf4c);
    /* 0078bf4c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078bf50: mov dword ptr [0xa9c928], 1 */ W32((u32)(0xa9c928u), 0x1u);
    /* 0078bf5a: mov dword ptr [0xa9c924], eax */ W32((u32)(0xa9c924u), r_eax);
    /* 0078bf5f: ret  */ FN_RET(0x0078bf4c); r_esp += 4; return;
}

void f_0078bf60(void) /* sub_78BF60 */
{
    FN_ENTER(0x0078bf60);
    /* 0078bf60: mov eax, 0xa9c8f8 */ r_eax = 0xa9c8f8u;
    /* 0078bf65: ret  */ FN_RET(0x0078bf60); r_esp += 4; return;
}

void f_0078bf68(void) /* sub_78BF68 */
{
    FN_ENTER(0x0078bf68);
    /* 0078bf68: mov eax, 0xa9c8c8 */ r_eax = 0xa9c8c8u;
    /* 0078bf6d: ret  */ FN_RET(0x0078bf68); r_esp += 4; return;
}

void f_0078bf70(void) /* sub_78BF70 */
{
    FN_ENTER(0x0078bf70);
    /* 0078bf70: mov eax, dword ptr [0xa9c8c4] */ r_eax = R32((u32)(0xa9c8c4u));
    /* 0078bf75: ret  */ FN_RET(0x0078bf70); r_esp += 4; return;
}

void f_0078bf78(void) /* sub_78BF78 */
{
    FN_ENTER(0x0078bf78);
    /* 0078bf78: mov eax, dword ptr [0xa9c8c0] */ r_eax = R32((u32)(0xa9c8c0u));
    /* 0078bf7d: ret  */ FN_RET(0x0078bf78); r_esp += 4; return;
}

void f_0078bf80(void) /* sub_78BF80 */
{
    FN_ENTER(0x0078bf80);
    /* 0078bf80: mov eax, dword ptr [0xa9c928] */ r_eax = R32((u32)(0xa9c928u));
    /* 0078bf85: ret  */ FN_RET(0x0078bf80); r_esp += 4; return;
}

void f_0078bf88(void) /* sub_78BF88 */
{
    FN_ENTER(0x0078bf88);
    /* 0078bf88: mov eax, dword ptr [0xa9c924] */ r_eax = R32((u32)(0xa9c924u));
    /* 0078bf8d: ret  */ FN_RET(0x0078bf88); r_esp += 4; return;
}

void f_0078bf90(void) /* sub_78BF90 */
{
    FN_ENTER(0x0078bf90);
    /* 0078bf90: mov dword ptr [0xa9c928], 0 */ W32((u32)(0xa9c928u), 0x0u);
    /* 0078bf9a: ret  */ FN_RET(0x0078bf90); r_esp += 4; return;
}

void f_0078bf9c(void) /* sub_78BF9C */
{
    FN_ENTER(0x0078bf9c);
    /* 0078bf9c: mov dword ptr [0xa9c918], 0x3f800000 */ W32((u32)(0xa9c918u), 0x3f800000u);
    /* 0078bfa6: mov dword ptr [0xa9c91c], 0x41000000 */ W32((u32)(0xa9c91cu), 0x41000000u);
    /* 0078bfb0: mov dword ptr [0xa9c920], 0x3fc00000 */ W32((u32)(0xa9c920u), 0x3fc00000u);
    /* 0078bfba: ret  */ FN_RET(0x0078bf9c); r_esp += 4; return;
}

void f_0078bfbc(void) /* sub_78BFBC */
{
    FN_ENTER(0x0078bfbc);
    /* 0078bfbc: mov dword ptr [0xa9c8c0], 0 */ W32((u32)(0xa9c8c0u), 0x0u);
    /* 0078bfc6: mov edx, 0xa9c8c8 */ r_edx = 0xa9c8c8u;
    /* 0078bfcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078bfcd: mov dword ptr [0xa9c8c4], 4 */ W32((u32)(0xa9c8c4u), 0x4u);
    /* 0078bfd7: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0078bfda: mov edx, 0xa9c8f8 */ r_edx = 0xa9c8f8u;
    /* 0078bfdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078bfe1: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 0078bfe4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078bfe6: mov dword ptr [0xa9c928], eax */ W32((u32)(0xa9c928u), r_eax);
    /* 0078bfeb: mov dword ptr [0xa9c924], eax */ W32((u32)(0xa9c924u), r_eax);
    /* 0078bff0: ret  */ FN_RET(0x0078bfbc); r_esp += 4; return;
}

void f_0078bff4(void)
{
    FN_ENTER(0x0078bff4);
    /* 0078bff4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078bff8: mov edx, 0xa9c940 */ r_edx = 0xa9c940u;
    /* 0078bffd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078c000: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0078c002: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 0078c004: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0078c007: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0078c00a: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 0078c00d: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0078c010: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0078c013: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0078c016: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0078c019: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 0078c01c: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 0078c01f: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0078c022: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0078c025: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0078c028: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0078c02b: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0078c02e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0078c031: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0078c034: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 0078c037: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 0078c03a: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 0078c03d: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 0078c040: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0078c043: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 0078c046: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0078c049: mov dword ptr [edx + 0x30], ecx */ W32((u32)(r_edx+0x30u), r_ecx);
    /* 0078c04c: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0078c04f: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0078c052: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0078c055: mov dword ptr [edx + 0x38], ecx */ W32((u32)(r_edx+0x38u), r_ecx);
    /* 0078c058: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 0078c05b: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 0078c05e: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0078c061: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 0078c064: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 0078c067: mov dword ptr [edx + 0x44], ecx */ W32((u32)(r_edx+0x44u), r_ecx);
    /* 0078c06a: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0078c06d: mov dword ptr [edx + 0x48], ecx */ W32((u32)(r_edx+0x48u), r_ecx);
    /* 0078c070: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0078c073: mov dword ptr [edx + 0x4c], ecx */ W32((u32)(r_edx+0x4cu), r_ecx);
    /* 0078c076: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0078c079: mov eax, dword ptr [eax + 0x54] */ r_eax = R32((u32)(r_eax+0x54u));
    /* 0078c07c: mov dword ptr [edx + 0x50], ecx */ W32((u32)(r_edx+0x50u), r_ecx);
    /* 0078c07f: mov dword ptr [edx + 0x54], eax */ W32((u32)(r_edx+0x54u), r_eax);
    /* 0078c082: movzx eax, word ptr [0xa98474] */ r_eax = (u32)R16((u32)(0xa98474u));
    /* 0078c089: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078c08e: mov word ptr [0xa98474], ax */ W16((u32)(0xa98474u), (u16)r_eax);
    /* 0078c094: ret  */ FN_RET(0x0078bff4); r_esp += 4; return;
}

