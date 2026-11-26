#include "protos.h"

void f_0066c254(void) /* sub_66C254 */
{
    FN_ENTER(0x0066c254);
    /* 0066c254: call 0x4db8e0 */ r_esp -= 4; W32(r_esp, 0x66c259u); f_004db8e0();
    /* 0066c259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c25b: je 0x66c263 */ if (fZ) goto L_0066c263;
L_0066c25d:; BB(0x0066c25d);
    /* 0066c25d: mov eax, 1 */ r_eax = 0x1u;
    /* 0066c262: ret  */ FN_RET(0x0066c254); r_esp += 4; return;
L_0066c263:; BB(0x0066c263);
    /* 0066c263: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c265: ret  */ FN_RET(0x0066c254); r_esp += 4; return;
}

void f_0066c268(void) /* sub_66C268 */
{
    FN_ENTER(0x0066c268);
    /* 0066c268: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c269: movzx esi, word ptr [esp + 8] */ r_esi = (u32)R16((u32)(r_esp+0x8u));
    /* 0066c26e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c26f: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x66c274u); f_00718078();
    /* 0066c274: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c275: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66c27au); f_0068d5a8();
    /* 0066c27a: mov esi, eax */ r_esi = r_eax;
    /* 0066c27c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c27f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c281: je 0x66c2a7 */ if (fZ) goto L_0066c2a7;
L_0066c283:; BB(0x0066c283);
    /* 0066c283: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c285: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c287: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x66c28cu); f_00694c24();
    /* 0066c28c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c28e: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c290: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x66c295u); f_00694c24();
    /* 0066c295: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c297: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c299: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x66c29eu); f_00694c24();
    /* 0066c29e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c2a0: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c2a2: call 0x694c24 */ r_esp -= 4; W32(r_esp, 0x66c2a7u); f_00694c24();
L_0066c2a7:; BB(0x0066c2a7);
    /* 0066c2a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066c2a8: ret 4 */ FN_RET(0x0066c268); r_esp += 8; return;
}

void f_0066c2ac(void) /* sub_66C2AC */
{
    FN_ENTER(0x0066c2ac);
    /* 0066c2ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c2ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066c2af: mov ecx, dword ptr [ebx + 0x1cc] */ r_ecx = R32((u32)(r_ebx+0x1ccu));
    /* 0066c2b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c2b7: je 0x66c2c8 */ if (fZ) goto L_0066c2c8;
L_0066c2b9:; BB(0x0066c2b9);
    /* 0066c2b9: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x66c2beu); f_0073d160();
    /* 0066c2be: mov dword ptr [ebx + 0x1cc], 0 */ W32((u32)(r_ebx+0x1ccu), 0x0u);
L_0066c2c8:; BB(0x0066c2c8);
    /* 0066c2c8: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0066c2ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c2d0: je 0x66c2e1 */ if (fZ) goto L_0066c2e1;
L_0066c2d2:; BB(0x0066c2d2);
    /* 0066c2d2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66c2d7u); f_007127b0();
    /* 0066c2d7: mov dword ptr [ebx + 0xb0], 0 */ W32((u32)(r_ebx+0xb0u), 0x0u);
L_0066c2e1:; BB(0x0066c2e1);
    /* 0066c2e1: mov ecx, dword ptr [ebx + 0x1c8] */ r_ecx = R32((u32)(r_ebx+0x1c8u));
    /* 0066c2e7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c2e9: je 0x66c2fa */ if (fZ) goto L_0066c2fa;
L_0066c2eb:; BB(0x0066c2eb);
    /* 0066c2eb: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66c2f0u); f_007127b0();
    /* 0066c2f0: mov dword ptr [ebx + 0x1c8], 0 */ W32((u32)(r_ebx+0x1c8u), 0x0u);
L_0066c2fa:; BB(0x0066c2fa);
    /* 0066c2fa: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066c301: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c302: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066c304: call 0x66b4d8 */ r_esp -= 4; W32(r_esp, 0x66c309u); f_0066b4d8();
    /* 0066c309: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66c30eu); f_00717d48();
    /* 0066c30e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c314: call 0x717ed8 */ r_esp -= 4; W32(r_esp, 0x66c319u); f_00717ed8();
    /* 0066c319: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c31f: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x66c324u); f_00716ba0();
    /* 0066c324: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c327: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c329: je 0x66c335 */ if (fZ) goto L_0066c335;
L_0066c32b:; BB(0x0066c32b);
    /* 0066c32b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c32d: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66c332u); f_00791748();
    /* 0066c332: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c333: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c334: ret  */ FN_RET(0x0066c2ac); r_esp += 4; return;
L_0066c335:; BB(0x0066c335);
    /* 0066c335: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c337: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66c33cu); f_00791748();
    /* 0066c33c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c33d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c33e: ret  */ FN_RET(0x0066c2ac); r_esp += 4; return;
}

void f_0066c340(void) /* sub_66C340 */
{
    FN_ENTER(0x0066c340);
    /* 0066c340: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c341: mov esi, ecx */ r_esi = r_ecx;
    /* 0066c343: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c345: call 0x66c254 */ r_esp -= 4; W32(r_esp, 0x66c34au); f_0066c254();
    /* 0066c34a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c34c: jne 0x66c352 */ if (!fZ) goto L_0066c352;
L_0066c34e:; BB(0x0066c34e);
    /* 0066c34e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c350: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066c351: ret  */ FN_RET(0x0066c340); r_esp += 4; return;
L_0066c352:; BB(0x0066c352);
    /* 0066c352: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x66c357u); f_00694c6c();
    /* 0066c357: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0066c35a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0066c35c: fld dword ptr [edx*8 + 0xaae780] */ FPUSH(R_F32((u32)(r_edx*8+0xaae780u)));
    /* 0066c363: fcomp dword ptr [0x939bb8] */ fx_compare(ST(0), R_F32((u32)(0x939bb8u))); FPOP();
    /* 0066c369: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066c36b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066c36c: jbe 0x66c375 */ if ((fC||fZ)) goto L_0066c375;
L_0066c36e:; BB(0x0066c36e);
    /* 0066c36e: mov eax, 1 */ r_eax = 0x1u;
    /* 0066c373: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066c374: ret  */ FN_RET(0x0066c340); r_esp += 4; return;
L_0066c375:; BB(0x0066c375);
    /* 0066c375: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c37b: mov ecx, esi */ r_ecx = r_esi;
    /* 0066c37d: call 0x64cbb4 */ r_esp -= 4; W32(r_esp, 0x66c382u); f_0064cbb4();
    /* 0066c382: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c384: je 0x66c36e */ if (fZ) goto L_0066c36e;
L_0066c386:; BB(0x0066c386);
    /* 0066c386: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c388: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066c389: ret  */ FN_RET(0x0066c340); r_esp += 4; return;
}

void f_0066c38c(void) /* sub_66C38C */
{
    FN_ENTER(0x0066c38c);
    /* 0066c38c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c38d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c38e: mov edi, ecx */ r_edi = r_ecx;
    /* 0066c390: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 0066c396: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c399: je 0x66c42e */ if (fZ) goto L_0066c42e;
L_0066c39f:; BB(0x0066c39f);
    /* 0066c39f: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c3a4: mov ecx, edi */ r_ecx = r_edi;
    /* 0066c3a6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0066c3a8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c3ad: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66c3b0u); call_ind(t); }
    /* 0066c3b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c3b2: jne 0x66c3b7 */ if (!fZ) goto L_0066c3b7;
L_0066c3b4:; BB(0x0066c3b4);
    /* 0066c3b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c3b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066c3b6: ret  */ FN_RET(0x0066c38c); r_esp += 4; return;
L_0066c3b7:; BB(0x0066c3b7);
    /* 0066c3b7: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
L_0066c3ba:; BB(0x0066c3ba);
    /* 0066c3ba: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66c3bfu); f_0082d7b0();
    /* 0066c3bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066c3c1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66c3c6u); f_0082d838();
    /* 0066c3c6: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0066c3c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066c3cb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66c3d0u); f_0082d8bc();
    /* 0066c3d0: mov ecx, dword ptr [0xa8fcfc] */ r_ecx = R32((u32)(0xa8fcfcu));
    /* 0066c3d6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66c3dbu); f_00829cc8();
    /* 0066c3db: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66c3e0u); f_00835068();
    /* 0066c3e0: mov ecx, dword ptr [0xa8fd10] */ r_ecx = R32((u32)(0xa8fd10u));
    /* 0066c3e6: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x66c3ebu); f_00835090();
    /* 0066c3eb: mov eax, dword ptr [edi + 0xd4] */ r_eax = R32((u32)(r_edi+0xd4u));
    /* 0066c3f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c3f3: je 0x66c421 */ if (fZ) goto L_0066c421;
L_0066c3f5:; BB(0x0066c3f5);
    /* 0066c3f5: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66c3fau); f_0082dbac();
    /* 0066c3fa: mov ecx, dword ptr [0xa8fcf8] */ r_ecx = R32((u32)(0xa8fcf8u));
    /* 0066c400: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66c405u); f_00829cc8();
    /* 0066c405: push dword ptr [edi + 0xc8] */ { u32 v = R32((u32)(r_edi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c40b: mov ecx, dword ptr [edi + 0xd4] */ r_ecx = R32((u32)(r_edi+0xd4u));
    /* 0066c411: mov edx, dword ptr [edi + 0xd8] */ r_edx = R32((u32)(r_edi+0xd8u));
    /* 0066c417: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66c41cu); f_00835574();
    /* 0066c41c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66c421u); f_0082dab0();
L_0066c421:; BB(0x0066c421);
    /* 0066c421: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66c426u); f_00835078();
    /* 0066c426: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66c42bu); f_0082da80();
    /* 0066c42b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c42c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066c42d: ret  */ FN_RET(0x0066c38c); r_esp += 4; return;
L_0066c42e:; BB(0x0066c42e);
    /* 0066c42e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0066c433: lea ebx, [edi + 0x38] */ r_ebx = (u32)(r_edi+0x38u);
    /* 0066c436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c437: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066c43c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c43d: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66c442u); f_0078ea50();
    /* 0066c442: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0066c445: fcomp dword ptr [0x939c00] */ fx_compare(ST(0), R_F32((u32)(0x939c00u))); FPOP();
    /* 0066c44b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066c44d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066c44e: jbe 0x66c3ba */ if ((fC||fZ)) goto L_0066c3ba;
L_0066c454:; BB(0x0066c454);
    /* 0066c454: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c455: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066c456: ret  */ FN_RET(0x0066c38c); r_esp += 4; return;
}

void f_0066c458(void) /* sub_66C458 */
{
    FN_ENTER(0x0066c458);
    /* 0066c458: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c459: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066c45b: mov eax, dword ptr [ebx + 0x88] */ r_eax = R32((u32)(r_ebx+0x88u));
    /* 0066c461: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c463: jl 0x66c474 */ if ((fS!=fO)) goto L_0066c474;
L_0066c465:; BB(0x0066c465);
    /* 0066c465: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c46a: jg 0x66c474 */ if ((!fZ&&fS==fO)) goto L_0066c474;
L_0066c46c:; BB(0x0066c46c);
    /* 0066c46c: mov dword ptr [ebx + 0x1d0], eax */ W32((u32)(r_ebx+0x1d0u), r_eax);
    /* 0066c472: jmp 0x66c47e */ goto L_0066c47e;
L_0066c474:; BB(0x0066c474);
    /* 0066c474: mov dword ptr [ebx + 0x1d0], 0xffffffff */ W32((u32)(r_ebx+0x1d0u), 0xffffffffu);
L_0066c47e:; BB(0x0066c47e);
    /* 0066c47e: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x66c483u); f_00807ac0();
    /* 0066c483: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c485: jne 0x66c499 */ if (!fZ) goto L_0066c499;
L_0066c487:; BB(0x0066c487);
    /* 0066c487: push 0x939d90 */ { u32 v = 0x939d90u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c48c: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c491: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66c496u); f_0061cdb0();
    /* 0066c496: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066c499:; BB(0x0066c499);
    /* 0066c499: push dword ptr [ebx + 0x1d0] */ { u32 v = R32((u32)(r_ebx+0x1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c49f: push 0x931930 */ { u32 v = 0x931930u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4a4: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4a9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66c4aeu); f_0061cdb0();
    /* 0066c4ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066c4b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c4b2: ret  */ FN_RET(0x0066c458); r_esp += 4; return;
}

void f_0066c4b4(void)
{
    FN_ENTER(0x0066c4b4);
    /* 0066c4b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4b5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c4b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4b9: push 0x8e8c92 */ { u32 v = 0x8e8c92u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066c4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c4c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066c4cc: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c4cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066c4d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066c4d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066c4d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066c4db: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66c4e0u); f_006dc358();
    /* 0066c4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4e2: jne 0x66c4f2 */ if (!fZ) goto L_0066c4f2;
L_0066c4e4:; BB(0x0066c4e4);
    /* 0066c4e4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x66c4e9u); f_007a61a4();
    /* 0066c4e9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4ec: je 0x66c67e */ if (fZ) goto L_0066c67e;
L_0066c4f2:; BB(0x0066c4f2);
    /* 0066c4f2: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66c4f7u); f_006dc358();
    /* 0066c4f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c4fa: je 0x66c6b4 */ if (fZ) goto L_0066c6b4;
L_0066c500:; BB(0x0066c500);
    /* 0066c500: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0066c507: push 0x1e8 */ { u32 v = 0x1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c50c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66c511u); f_005caba4();
    /* 0066c511: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066c514: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c517: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0066c51a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c51c: je 0x66c6ad */ if (fZ) goto L_0066c6ad;
L_0066c522:; BB(0x0066c522);
    /* 0066c522: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0066c529: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066c530: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c532: mov edx, dword ptr [0xaca350] */ r_edx = R32((u32)(0xaca350u));
    /* 0066c538: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066c53b: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 0066c53e: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0066c541: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c542: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c543: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66c548u); f_0066982c();
    /* 0066c548: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066c54f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c552: mov dword ptr [edx], 0xb35440 */ W32((u32)(r_edx), 0xb35440u);
    /* 0066c558: mov eax, dword ptr [0x9c961c] */ r_eax = R32((u32)(0x9c961cu));
    /* 0066c55d: mov dword ptr [edx + 0xc8], 0 */ W32((u32)(r_edx+0xc8u), 0x0u);
    /* 0066c567: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0066c56a: mov dword ptr [edx + 0xac], 0x41980000 */ W32((u32)(r_edx+0xacu), 0x41980000u);
    /* 0066c574: call 0x80c340 */ r_esp -= 4; W32(r_esp, 0x66c579u); f_0080c340();
    /* 0066c579: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c57c: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 0066c586: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0066c58c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c58d: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x66c592u); f_007b4d98();
    /* 0066c592: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c593: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c596: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c598: mov dword ptr [edx + 0x1c8], eax */ W32((u32)(r_edx+0x1c8u), r_eax);
    /* 0066c59e: mov dword ptr [edx + 0x1cc], eax */ W32((u32)(r_edx+0x1ccu), r_eax);
    /* 0066c5a4: mov dword ptr [edx + 0x1e4], eax */ W32((u32)(r_edx+0x1e4u), r_eax);
    /* 0066c5aa: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x66c5afu); f_00807ac0();
    /* 0066c5af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c5b1: jne 0x66c5c7 */ if (!fZ) goto L_0066c5c7;
L_0066c5b3:; BB(0x0066c5b3);
    /* 0066c5b3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c5b6: mov dword ptr [eax + 0x1d0], 0xffffffff */ W32((u32)(r_eax+0x1d0u), 0xffffffffu);
    /* 0066c5c0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0066c5c5: jmp 0x66c5f3 */ goto L_0066c5f3;
L_0066c5c7:; BB(0x0066c5c7);
    /* 0066c5c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c5ca: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 0066c5d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c5d2: jl 0x66c5dc */ if ((fS!=fO)) goto L_0066c5dc;
L_0066c5d4:; BB(0x0066c5d4);
    /* 0066c5d4: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c5da: jle 0x66c5ed */ if ((fZ||fS!=fO)) goto L_0066c5ed;
L_0066c5dc:; BB(0x0066c5dc);
    /* 0066c5dc: mov dword ptr [eax + 0x1d0], 0xffffffff */ W32((u32)(r_eax+0x1d0u), 0xffffffffu);
    /* 0066c5e6: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0066c5eb: jmp 0x66c5f3 */ goto L_0066c5f3;
L_0066c5ed:; BB(0x0066c5ed);
    /* 0066c5ed: mov dword ptr [eax + 0x1d0], edx */ W32((u32)(r_eax+0x1d0u), r_edx);
L_0066c5f3:; BB(0x0066c5f3);
    /* 0066c5f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c5f5: jl 0x66c696 */ if ((fS!=fO)) goto L_0066c696;
L_0066c5fb:; BB(0x0066c5fb);
    /* 0066c5fb: mov edx, eax */ r_edx = r_eax;
    /* 0066c5fd: mov eax, 4 */ r_eax = 0x4u;
    /* 0066c602: mov word ptr [edx + 0xe0], ax */ W16((u32)(r_edx+0xe0u), (u16)r_eax);
    /* 0066c609: mov word ptr [edx + 0xe2], ax */ W16((u32)(r_edx+0xe2u), (u16)r_eax);
    /* 0066c610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c612: mov word ptr [edx + 0xe4], ax */ W16((u32)(r_edx+0xe4u), (u16)r_eax);
    /* 0066c619: mov word ptr [edx + 0xe6], ax */ W16((u32)(r_edx+0xe6u), (u16)r_eax);
    /* 0066c620: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0066c626: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0066c62c: mov edx, dword ptr [edx + 0xb4] */ r_edx = R32((u32)(r_edx+0xb4u));
    /* 0066c632: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c634: je 0x66c650 */ if (fZ) goto L_0066c650;
L_0066c636:; BB(0x0066c636);
    /* 0066c636: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0066c63a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066c63f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066c643: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c646: mov dword ptr [edx + 0xb4], 0 */ W32((u32)(r_edx+0xb4u), 0x0u);
L_0066c650:; BB(0x0066c650);
    /* 0066c650: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c653: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c655: mov dword ptr [eax + 0x1a8], edx */ W32((u32)(r_eax+0x1a8u), r_edx);
    /* 0066c65b: mov dword ptr [eax + 0x1ac], edx */ W32((u32)(r_eax+0x1acu), r_edx);
    /* 0066c661: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 0066c667: mov dword ptr [eax + 0x1b4], edx */ W32((u32)(r_eax+0x1b4u), r_edx);
    /* 0066c66d: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_0066c670:; BB(0x0066c670);
    /* 0066c670: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c673: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c67a: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c67c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c67d: ret  */ FN_RET(0x0066c4b4); r_esp += 4; return;
L_0066c67e:; BB(0x0066c67e);
    /* 0066c67e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066c681: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c682: call 0x66c6cc */ r_esp -= 4; W32(r_esp, 0x66c687u); f_0066c6cc();
    /* 0066c687: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c688: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c68b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c692: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c695: ret  */ FN_RET(0x0066c4b4); r_esp += 4; return;
L_0066c696:; BB(0x0066c696);
    /* 0066c696: mov edx, eax */ r_edx = r_eax;
    /* 0066c698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c69a: mov word ptr [edx + 0xe0], ax */ W16((u32)(r_edx+0xe0u), (u16)r_eax);
    /* 0066c6a1: mov word ptr [edx + 0xe2], ax */ W16((u32)(r_edx+0xe2u), (u16)r_eax);
    /* 0066c6a8: jmp 0x66c610 */ f_0066c610(); return;
L_0066c6ad:; BB(0x0066c6ad);
    /* 0066c6ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c6af: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066c6b2: jmp 0x66c670 */ goto L_0066c670;
L_0066c6b4:; BB(0x0066c6b4);
    /* 0066c6b4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0066c6b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6b8: call 0x66c6cc */ r_esp -= 4; W32(r_esp, 0x66c6bdu); f_0066c6cc();
    /* 0066c6bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c6be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c6c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c6c8: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c6ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c6cb: ret  */ FN_RET(0x0066c4b4); r_esp += 4; return;
}

void f_0066c6cc(void) /* sub_66C6CC */
{
    FN_ENTER(0x0066c6cc);
    /* 0066c6cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0066c6cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6d1: push 0x8e8ce2 */ { u32 v = 0x8e8ce2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066c6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066c6e4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c6e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066c6ea: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0066c6ed: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0066c6f0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0066c6f3: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c6f8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0066c6ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66c704u); f_005caba4();
    /* 0066c704: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066c707: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c70a: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066c70d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c70f: je 0x66c82e */ if (fZ) goto L_0066c82e;
L_0066c715:; BB(0x0066c715);
    /* 0066c715: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0066c71c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066c723: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066c726: mov ecx, eax */ r_ecx = r_eax;
    /* 0066c728: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 0066c72d: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0066c730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c731: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0066c734: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66c739u); f_0066982c();
    /* 0066c739: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066c740: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c743: mov dword ptr [edx], 0xb354a0 */ W32((u32)(r_edx), 0xb354a0u);
    /* 0066c749: mov eax, dword ptr [0x9c9620] */ r_eax = R32((u32)(0x9c9620u));
    /* 0066c74e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0066c751: call 0x80c340 */ r_esp -= 4; W32(r_esp, 0x66c756u); f_0080c340();
    /* 0066c756: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c759: mov dword ptr [edx + 0xa4], 0 */ W32((u32)(r_edx+0xa4u), 0x0u);
    /* 0066c763: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0066c769: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c76a: call 0x7b4d98 */ r_esp -= 4; W32(r_esp, 0x66c76fu); f_007b4d98();
    /* 0066c76f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c770: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c773: call 0x66c838 */ r_esp -= 4; W32(r_esp, 0x66c778u); f_0066c838();
    /* 0066c778: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c77b: call 0x66c89c */ r_esp -= 4; W32(r_esp, 0x66c780u); f_0066c89c();
    /* 0066c780: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66c785u); f_006dc358();
    /* 0066c785: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c788: je 0x66c7cf */ if (fZ) goto L_0066c7cf;
L_0066c78a:; BB(0x0066c78a);
    /* 0066c78a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c78d: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_0066c797:; BB(0x0066c797);
    /* 0066c797: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c79a: mov dword ptr [eax + 0xac], 0x41980000 */ W32((u32)(r_eax+0xacu), 0x41980000u);
    /* 0066c7a4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c7a6: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 0066c7ac: mov dword ptr [eax + 0xcc], edx */ W32((u32)(r_eax+0xccu), r_edx);
    /* 0066c7b2: mov dword ptr [eax + 0xd0], edx */ W32((u32)(r_eax+0xd0u), r_edx);
    /* 0066c7b8: mov dword ptr [eax + 0xd4], edx */ W32((u32)(r_eax+0xd4u), r_edx);
    /* 0066c7be: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
L_0066c7c1:; BB(0x0066c7c1);
    /* 0066c7c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066c7c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066c7cb: mov esp, ebp */ r_esp = r_ebp;
    /* 0066c7cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c7ce: ret  */ FN_RET(0x0066c6cc); r_esp += 4; return;
L_0066c7cf:; BB(0x0066c7cf);
    /* 0066c7cf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066c7d6: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c7db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66c7e0u); f_008581c5();
    /* 0066c7e0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066c7e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c7e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066c7e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c7eb: je 0x66c827 */ if (fZ) goto L_0066c827;
L_0066c7ed:; BB(0x0066c7ed);
    /* 0066c7ed: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0066c7f4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066c7fb: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c800: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c803: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0066c806: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c809: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c80a: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x66c80fu); f_00640fb4();
    /* 0066c80f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066c816:; BB(0x0066c816);
    /* 0066c816: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066c819: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066c81c: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 0066c822: jmp 0x66c797 */ goto L_0066c797;
L_0066c827:; BB(0x0066c827);
    /* 0066c827: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c829: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0066c82c: jmp 0x66c816 */ goto L_0066c816;
L_0066c82e:; BB(0x0066c82e);
    /* 0066c82e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c830: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066c833: jmp 0x66c7c1 */ goto L_0066c7c1;
}

void f_0066c838(void) /* sub_66C838 */
{
    FN_ENTER(0x0066c838);
    /* 0066c838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066c839: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066c83b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x66c840u); f_00807ac0();
    /* 0066c840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c842: jne 0x66c855 */ if (!fZ) goto L_0066c855;
L_0066c844:; BB(0x0066c844);
    /* 0066c844: mov dword ptr [ebp + 0xf8], 0xffffffff */ W32((u32)(r_ebp+0xf8u), 0xffffffffu);
    /* 0066c84e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0066c853: jmp 0x66c87d */ goto L_0066c87d;
L_0066c855:; BB(0x0066c855);
    /* 0066c855: mov eax, dword ptr [ebp + 0x88] */ r_eax = R32((u32)(r_ebp+0x88u));
    /* 0066c85b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c85d: jl 0x66c86e */ if ((fS!=fO)) goto L_0066c86e;
L_0066c85f:; BB(0x0066c85f);
    /* 0066c85f: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c864: jg 0x66c86e */ if ((!fZ&&fS==fO)) goto L_0066c86e;
L_0066c866:; BB(0x0066c866);
    /* 0066c866: mov dword ptr [ebp + 0xf8], eax */ W32((u32)(r_ebp+0xf8u), r_eax);
    /* 0066c86c: jmp 0x66c87d */ goto L_0066c87d;
L_0066c86e:; BB(0x0066c86e);
    /* 0066c86e: mov dword ptr [ebp + 0xf8], 0xffffffff */ W32((u32)(r_ebp+0xf8u), 0xffffffffu);
    /* 0066c878: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_0066c87d:; BB(0x0066c87d);
    /* 0066c87d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c87f: jl 0x66c88d */ if ((fS!=fO)) goto L_0066c88d;
L_0066c881:; BB(0x0066c881);
    /* 0066c881: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 0066c88b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c88c: ret  */ FN_RET(0x0066c838); r_esp += 4; return;
L_0066c88d:; BB(0x0066c88d);
    /* 0066c88d: mov dword ptr [ebp + 0xf4], 1 */ W32((u32)(r_ebp+0xf4u), 0x1u);
    /* 0066c897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066c898: ret  */ FN_RET(0x0066c838); r_esp += 4; return;
}

void f_0066c89c(void) /* sub_66C89C */
{
    FN_ENTER(0x0066c89c);
    /* 0066c89c: mov eax, dword ptr [0xa8fd10] */ r_eax = R32((u32)(0xa8fd10u));
    /* 0066c8a1: mov dword ptr [ecx + 0xd8], eax */ W32((u32)(r_ecx+0xd8u), r_eax);
    /* 0066c8a7: mov edx, dword ptr [0xa8fd0c] */ r_edx = R32((u32)(0xa8fd0cu));
    /* 0066c8ad: mov dword ptr [ecx + 0xfc], 0 */ W32((u32)(r_ecx+0xfcu), 0x0u);
    /* 0066c8b7: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 0066c8bd: mov eax, dword ptr [0xa8fd08] */ r_eax = R32((u32)(0xa8fd08u));
    /* 0066c8c2: mov dword ptr [ecx + 0x100], 0x40800000 */ W32((u32)(r_ecx+0x100u), 0x40800000u);
    /* 0066c8cc: mov dword ptr [ecx + 0xe0], eax */ W32((u32)(r_ecx+0xe0u), r_eax);
    /* 0066c8d2: mov eax, dword ptr [0xa8fd04] */ r_eax = R32((u32)(0xa8fd04u));
    /* 0066c8d7: mov dword ptr [ecx + 0xe4], eax */ W32((u32)(r_ecx+0xe4u), r_eax);
    /* 0066c8dd: mov eax, dword ptr [0xa8fd00] */ r_eax = R32((u32)(0xa8fd00u));
    /* 0066c8e2: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 0066c8e8: mov eax, dword ptr [0xa8fcfc] */ r_eax = R32((u32)(0xa8fcfcu));
    /* 0066c8ed: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 0066c8f3: mov eax, dword ptr [0xa8fcf8] */ r_eax = R32((u32)(0xa8fcf8u));
    /* 0066c8f8: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 0066c8fe: ret  */ FN_RET(0x0066c89c); r_esp += 4; return;
}

void f_0066c900(void) /* sub_66C900 */
{
    FN_ENTER(0x0066c900);
    /* 0066c900: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066c906: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c908: je 0x66c91d */ if (fZ) goto L_0066c91d;
L_0066c90a:; BB(0x0066c90a);
    /* 0066c90a: je 0x66c913 */ if (fZ) goto L_0066c913;
L_0066c90c:; BB(0x0066c90c);
    /* 0066c90c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066c90e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x66c913u); f_004066a8();
L_0066c913:; BB(0x0066c913);
    /* 0066c913: mov dword ptr [0xa8fd14], 0 */ W32((u32)(0xa8fd14u), 0x0u);
L_0066c91d:; BB(0x0066c91d);
    /* 0066c91d: ret  */ FN_RET(0x0066c900); r_esp += 4; return;
}

void f_0066c920(void) /* sub_66C920 */
{
    FN_ENTER(0x0066c920);
    /* 0066c920: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c921: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0066c925: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 0066c929: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c92a: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x66c92fu); f_007b4d18();
    /* 0066c92f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066c930: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066c932: je 0x66c93f */ if (fZ) goto L_0066c93f;
L_0066c934:; BB(0x0066c934);
    /* 0066c934: movzx edx, word ptr [ebx + 4] */ r_edx = (u32)R16((u32)(r_ebx+0x4u));
    /* 0066c938: mov word ptr [eax + 0xe0], dx */ W16((u32)(r_eax+0xe0u), (u16)r_edx);
L_0066c93f:; BB(0x0066c93f);
    /* 0066c93f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066c940: ret  */ FN_RET(0x0066c920); r_esp += 4; return;
}

void f_0066c944(void) /* sub_66C944 */
{
    FN_ENTER(0x0066c944);
    /* 0066c944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066c946: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c947: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066c94a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066c94c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066c94e: mov esi, eax */ r_esi = r_eax;
L_0066c950:; BB(0x0066c950);
    /* 0066c950: mov edi, dword ptr [esi*4 + 0xa94254] */ r_edi = R32((u32)(r_esi*4+0xa94254u));
    /* 0066c957: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0066c95a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c95c: je 0x66c9ec */ if (fZ) goto L_0066c9ec;
L_0066c962:; BB(0x0066c962);
    /* 0066c962: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 0066c969: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c96c: jne 0x66c9ec */ if (!fZ) goto L_0066c9ec;
L_0066c972:; BB(0x0066c972);
    /* 0066c972: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0066c978: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c97e: jne 0x66c9ec */ if (!fZ) goto L_0066c9ec;
L_0066c980:; BB(0x0066c980);
    /* 0066c980: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0066c983: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0066c986: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066c987: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066c988: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66c98du); f_0078ea50();
    /* 0066c98d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066c990: fld dword ptr [0x939bf0] */ FPUSH(R_F32((u32)(0x939bf0u)));
    /* 0066c996: fadd dword ptr [ebx + 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xacu));
    /* 0066c99c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0066c99e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066c9a0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066c9a2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066c9a3: jb 0x66c9c4 */ if (fC) goto L_0066c9c4;
L_0066c9a5:; BB(0x0066c9a5);
    /* 0066c9a5: mov ecx, edi */ r_ecx = r_edi;
    /* 0066c9a7: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x66c9acu); f_0068bfa0();
    /* 0066c9ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c9ae: je 0x66c9ec */ if (fZ) goto L_0066c9ec;
L_0066c9b0:; BB(0x0066c9b0);
    /* 0066c9b0: mov dword ptr [ebx + esi*4 + 0xc4], 1 */ W32((u32)(r_ebx+r_esi*4+0xc4u), 0x1u);
    /* 0066c9bb: mov ecx, edi */ r_ecx = r_edi;
    /* 0066c9bd: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x66c9c2u); f_00688bc0();
    /* 0066c9c2: jmp 0x66c9ec */ goto L_0066c9ec;
L_0066c9c4:; BB(0x0066c9c4);
    /* 0066c9c4: mov ecx, edi */ r_ecx = r_edi;
    /* 0066c9c6: call 0x68bfa0 */ r_esp -= 4; W32(r_esp, 0x66c9cbu); f_0068bfa0();
    /* 0066c9cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c9cd: jne 0x66c9ec */ if (!fZ) goto L_0066c9ec;
L_0066c9cf:; BB(0x0066c9cf);
    /* 0066c9cf: mov edx, dword ptr [ebx + esi*4 + 0xc4] */ r_edx = R32((u32)(r_ebx+r_esi*4+0xc4u));
    /* 0066c9d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066c9d8: je 0x66c9ec */ if (fZ) goto L_0066c9ec;
L_0066c9da:; BB(0x0066c9da);
    /* 0066c9da: mov dword ptr [ebx + esi*4 + 0xc4], 0 */ W32((u32)(r_ebx+r_esi*4+0xc4u), 0x0u);
    /* 0066c9e5: mov ecx, edi */ r_ecx = r_edi;
    /* 0066c9e7: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x66c9ecu); f_00688bac();
L_0066c9ec:; BB(0x0066c9ec);
    /* 0066c9ec: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066c9ef: jl 0x66c950 */ if ((fS!=fO)) goto L_0066c950;
L_0066c9f5:; BB(0x0066c9f5);
    /* 0066c9f5: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 0066c9fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066c9fd: jl 0x66ca23 */ if ((fS!=fO)) goto L_0066ca23;
L_0066c9ff:; BB(0x0066c9ff);
    /* 0066c9ff: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0066ca02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ca03: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x66ca08u); f_00816eec();
    /* 0066ca08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ca09: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0066ca0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ca0f: je 0x66cac7 */ if (fZ) goto L_0066cac7;
L_0066ca15:; BB(0x0066ca15);
    /* 0066ca15: mov dword ptr [ebx + 0xf4], 0 */ W32((u32)(r_ebx+0xf4u), 0x0u);
    /* 0066ca1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca21: jmp 0x66ca29 */ goto L_0066ca29;
L_0066ca23:; BB(0x0066ca23);
    /* 0066ca23: mov eax, dword ptr [ebx + 0xf4] */ r_eax = R32((u32)(r_ebx+0xf4u));
L_0066ca29:; BB(0x0066ca29);
    /* 0066ca29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ca2b: jne 0x66ca73 */ if (!fZ) goto L_0066ca73;
L_0066ca2d:; BB(0x0066ca2d);
    /* 0066ca2d: fld dword ptr [ebx + 0xfc] */ FPUSH(R_F32((u32)(r_ebx+0xfcu)));
    /* 0066ca33: fadd dword ptr [ebx + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x100u));
    /* 0066ca39: mov edx, dword ptr [ebx + 0xe4] */ r_edx = R32((u32)(r_ebx+0xe4u));
    /* 0066ca3f: fst dword ptr [ebx + 0xfc] */ W_F32((u32)(r_ebx+0xfcu), ST(0));
    /* 0066ca45: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066ca48: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca4b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066ca4e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066ca51: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066ca54: fadd dword ptr [eax*4 + 0x939bc0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939bc0u));
    /* 0066ca5b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066ca5d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066ca5f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066ca60: jae 0x66cac0 */ if (!fC) goto L_0066cac0;
L_0066ca62:; BB(0x0066ca62);
    /* 0066ca62: mov dword ptr [ebx + 0xfc], 0 */ W32((u32)(r_ebx+0xfcu), 0x0u);
    /* 0066ca6c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066ca6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066ca70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066ca71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066ca72: ret  */ FN_RET(0x0066c944); r_esp += 4; return;
L_0066ca73:; BB(0x0066ca73);
    /* 0066ca73: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ca76: jne 0x66cac0 */ if (!fZ) goto L_0066cac0;
L_0066ca78:; BB(0x0066ca78);
    /* 0066ca78: fld dword ptr [ebx + 0xfc] */ FPUSH(R_F32((u32)(r_ebx+0xfcu)));
    /* 0066ca7e: fadd dword ptr [ebx + 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x100u));
    /* 0066ca84: mov edx, dword ptr [ebx + 0xe8] */ r_edx = R32((u32)(r_ebx+0xe8u));
    /* 0066ca8a: fst dword ptr [ebx + 0xfc] */ W_F32((u32)(r_ebx+0xfcu), ST(0));
    /* 0066ca90: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066ca93: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066ca96: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066ca9a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0066ca9e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066caa1: fadd dword ptr [eax*4 + 0x939bc0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939bc0u));
    /* 0066caa8: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066caaa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066caac: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066caad: jae 0x66cab9 */ if (!fC) goto L_0066cab9;
L_0066caaf:; BB(0x0066caaf);
    /* 0066caaf: mov dword ptr [ebx + 0xfc], 0 */ W32((u32)(r_ebx+0xfcu), 0x0u);
L_0066cab9:; BB(0x0066cab9);
    /* 0066cab9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066cabb: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66cac0u); f_006698e0();
L_0066cac0:; BB(0x0066cac0);
    /* 0066cac0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066cac3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066cac4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066cac5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066cac6: ret  */ FN_RET(0x0066c944); r_esp += 4; return;
L_0066cac7:; BB(0x0066cac7);
    /* 0066cac7: mov dword ptr [ebx + 0xf4], 1 */ W32((u32)(r_ebx+0xf4u), 0x1u);
    /* 0066cad1: mov eax, 1 */ r_eax = 0x1u;
    /* 0066cad6: jmp 0x66ca29 */ goto L_0066ca29;
}

void f_0066cadc(void) /* sub_66CADC */
{
    FN_ENTER(0x0066cadc);
    /* 0066cadc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066cadd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066cade: mov edi, ecx */ r_edi = r_ecx;
    /* 0066cae0: mov eax, dword ptr [edi + 0xc0] */ r_eax = R32((u32)(r_edi+0xc0u));
    /* 0066cae6: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cae9: je 0x66cb9c */ if (fZ) goto L_0066cb9c;
L_0066caef:; BB(0x0066caef);
    /* 0066caef: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066caf4: mov ecx, edi */ r_ecx = r_edi;
    /* 0066caf6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0066caf8: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cafd: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66cb00u); call_ind(t); }
    /* 0066cb00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066cb02: jne 0x66cb07 */ if (!fZ) goto L_0066cb07;
L_0066cb04:; BB(0x0066cb04);
    /* 0066cb04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066cb05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066cb06: ret  */ FN_RET(0x0066cadc); r_esp += 4; return;
L_0066cb07:; BB(0x0066cb07);
    /* 0066cb07: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
L_0066cb0a:; BB(0x0066cb0a);
    /* 0066cb0a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66cb0fu); f_0082d7b0();
    /* 0066cb0f: mov ecx, esi */ r_ecx = r_esi;
    /* 0066cb11: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66cb16u); f_0082d838();
    /* 0066cb16: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0066cb19: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066cb1b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66cb20u); f_0082d8bc();
    /* 0066cb20: mov ecx, dword ptr [edi + 0xec] */ r_ecx = R32((u32)(r_edi+0xecu));
    /* 0066cb26: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66cb2bu); f_00829cc8();
    /* 0066cb2b: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66cb30u); f_00835068();
    /* 0066cb30: mov ecx, dword ptr [edi + 0xd8] */ r_ecx = R32((u32)(r_edi+0xd8u));
    /* 0066cb36: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x66cb3bu); f_00835090();
    /* 0066cb3b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66cb40u); f_0082dbac();
    /* 0066cb40: mov ecx, dword ptr [edi + 0xf0] */ r_ecx = R32((u32)(r_edi+0xf0u));
    /* 0066cb46: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66cb4bu); f_00829cc8();
    /* 0066cb4b: mov eax, dword ptr [edi + 0xf4] */ r_eax = R32((u32)(r_edi+0xf4u));
    /* 0066cb51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cb53: jne 0x66cb6e */ if (!fZ) goto L_0066cb6e;
L_0066cb55:; BB(0x0066cb55);
    /* 0066cb55: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066cb5b: mov ecx, dword ptr [edi + 0xdc] */ r_ecx = R32((u32)(r_edi+0xdcu));
    /* 0066cb61: mov edx, dword ptr [edi + 0xe4] */ r_edx = R32((u32)(r_edi+0xe4u));
    /* 0066cb67: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66cb6cu); f_00835574();
    /* 0066cb6c: jmp 0x66cb8a */ goto L_0066cb8a;
L_0066cb6e:; BB(0x0066cb6e);
    /* 0066cb6e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cb71: jne 0x66cb8a */ if (!fZ) goto L_0066cb8a;
L_0066cb73:; BB(0x0066cb73);
    /* 0066cb73: push dword ptr [edi + 0xfc] */ { u32 v = R32((u32)(r_edi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066cb79: mov ecx, dword ptr [edi + 0xe0] */ r_ecx = R32((u32)(r_edi+0xe0u));
    /* 0066cb7f: mov edx, dword ptr [edi + 0xe8] */ r_edx = R32((u32)(r_edi+0xe8u));
    /* 0066cb85: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66cb8au); f_00835574();
L_0066cb8a:; BB(0x0066cb8a);
    /* 0066cb8a: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66cb8fu); f_00835078();
    /* 0066cb8f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66cb94u); f_0082dab0();
    /* 0066cb94: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66cb99u); f_0082da80();
    /* 0066cb99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066cb9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066cb9b: ret  */ FN_RET(0x0066cadc); r_esp += 4; return;
L_0066cb9c:; BB(0x0066cb9c);
    /* 0066cb9c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0066cba1: lea esi, [edi + 0x38] */ r_esi = (u32)(r_edi+0x38u);
    /* 0066cba4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066cba5: add eax, 0x178 */ {  u32 a = r_eax; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066cbaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbab: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66cbb0u); f_0078ea50();
    /* 0066cbb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0066cbb3: fcomp dword ptr [0x939be0] */ fx_compare(ST(0), R_F32((u32)(0x939be0u))); FPOP();
    /* 0066cbb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066cbbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066cbbc: jbe 0x66cb0a */ if ((fC||fZ)) goto L_0066cb0a;
L_0066cbc2:; BB(0x0066cbc2);
    /* 0066cbc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066cbc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066cbc4: ret  */ FN_RET(0x0066cadc); r_esp += 4; return;
}

void f_0066cbc8(void) /* sub_66CBC8 */
{
    FN_ENTER(0x0066cbc8);
    /* 0066cbc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066cbcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066cbcd: call 0x66c838 */ r_esp -= 4; W32(r_esp, 0x66cbd2u); f_0066c838();
    /* 0066cbd2: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x66cbd7u); f_00807ac0();
    /* 0066cbd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cbd9: jne 0x66cbed */ if (!fZ) goto L_0066cbed;
L_0066cbdb:; BB(0x0066cbdb);
    /* 0066cbdb: push 0x939d90 */ { u32 v = 0x939d90u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbe0: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbe5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66cbeau); f_0061cdb0();
    /* 0066cbea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0066cbed:; BB(0x0066cbed);
    /* 0066cbed: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066cbf3: push 0x931930 */ { u32 v = 0x931930u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbf8: push 0x130021 */ { u32 v = 0x130021u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cbfd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66cc02u); f_0061cdb0();
    /* 0066cc02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066cc05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066cc06: ret  */ FN_RET(0x0066cbc8); r_esp += 4; return;
}

void f_0066cc08(void) /* sub_66CC08 */
{
    FN_ENTER(0x0066cc08);
    /* 0066cc08: mov dword ptr [0xa8fcec], 0x3f800000 */ W32((u32)(0xa8fcecu), 0x3f800000u);
    /* 0066cc12: mov dword ptr [0xa8fcf0], 0x41000000 */ W32((u32)(0xa8fcf0u), 0x41000000u);
    /* 0066cc1c: mov dword ptr [0xa8fcf4], 0x3fc00000 */ W32((u32)(0xa8fcf4u), 0x3fc00000u);
    /* 0066cc26: ret  */ FN_RET(0x0066cc08); r_esp += 4; return;
}

void f_0066cc28(void) /* sub_66CC28 */
{
    FN_ENTER(0x0066cc28);
    /* 0066cc28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc29: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cc2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc2d: push 0x8e8d3e */ { u32 v = 0x8e8d3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066cc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066cc40: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066cc43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066cc46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066cc49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066cc4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066cc4f: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x66cc54u); f_00807ac0();
    /* 0066cc54: mov ebx, eax */ r_ebx = r_eax;
    /* 0066cc56: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cc59: jl 0x66cd3b */ if ((fS!=fO)) goto L_0066cd3b;
L_0066cc5f:; BB(0x0066cc5f);
    /* 0066cc5f: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066cc62: jg 0x66cd3b */ if ((!fZ&&fS==fO)) goto L_0066cd3b;
L_0066cc68:; BB(0x0066cc68);
    /* 0066cc68: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066cc6f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc74: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66cc79u); f_008581c5();
    /* 0066cc79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066cc7a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066cc7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cc7f: je 0x66cf1b */ if (fZ) goto L_0066cf1b;
L_0066cc85:; BB(0x0066cc85);
    /* 0066cc85: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066cc8c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0066cc93: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066cc96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066cc98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cc9b: push 0x9c95e8 */ { u32 v = 0x9c95e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cca0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cca2: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66cca7u); f_005b7a84();
    /* 0066cca7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066ccaa: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066ccb1:; BB(0x0066ccb1);
    /* 0066ccb1: mov dword ptr [0xa8fd14], ecx */ W32((u32)(0xa8fd14u), r_ecx);
    /* 0066ccb7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066ccbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ccc0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66ccc5u); f_005b8610();
    /* 0066ccc5: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cccb: mov dword ptr [0xa8fd10], eax */ W32((u32)(0xa8fd10u), r_eax);
    /* 0066ccd0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ccd2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66ccd7u); f_005b8610();
    /* 0066ccd7: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ccdd: mov dword ptr [0xa8fd0c], eax */ W32((u32)(0xa8fd0cu), r_eax);
    /* 0066cce2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cce4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66cce9u); f_005b8610();
    /* 0066cce9: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ccef: mov dword ptr [0xa8fd08], eax */ W32((u32)(0xa8fd08u), r_eax);
    /* 0066ccf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ccf6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66ccfbu); f_005b8638();
    /* 0066ccfb: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cd01: mov dword ptr [0xa8fd04], eax */ W32((u32)(0xa8fd04u), r_eax);
    /* 0066cd06: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd08: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66cd0du); f_005b8638();
    /* 0066cd0d: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cd13: mov dword ptr [0xa8fd00], eax */ W32((u32)(0xa8fd00u), r_eax);
    /* 0066cd18: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd1a: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66cd1fu); f_005b8624();
    /* 0066cd1f: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cd25: mov dword ptr [0xa8fcfc], eax */ W32((u32)(0xa8fcfcu), r_eax);
    /* 0066cd2a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd2c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66cd31u); f_005b8624();
    /* 0066cd31: mov dword ptr [0xa8fcf8], eax */ W32((u32)(0xa8fcf8u), r_eax);
    /* 0066cd36: jmp 0x66cefb */ goto L_0066cefb;
L_0066cd3b:; BB(0x0066cd3b);
    /* 0066cd3b: call 0x807de4 */ r_esp -= 4; W32(r_esp, 0x66cd40u); f_00807de4();
    /* 0066cd40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cd42: je 0x66ce1b */ if (fZ) goto L_0066ce1b;
L_0066cd48:; BB(0x0066cd48);
    /* 0066cd48: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0066cd4f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd54: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66cd59u); f_008581c5();
    /* 0066cd59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066cd5a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0066cd5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cd5f: je 0x66cf22 */ if (fZ) goto L_0066cf22;
L_0066cd65:; BB(0x0066cd65);
    /* 0066cd65: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0066cd6c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066cd73: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cd76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066cd78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd7b: push 0x9c960c */ { u32 v = 0x9c960cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd80: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cd82: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66cd87u); f_005b7a84();
    /* 0066cd87: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066cd8a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0066cd91:; BB(0x0066cd91);
    /* 0066cd91: mov dword ptr [0xa8fd14], ecx */ W32((u32)(0xa8fd14u), r_ecx);
    /* 0066cd97: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066cd9e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cda0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66cda5u); f_005b8610();
    /* 0066cda5: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cdab: mov dword ptr [0xa8fd10], eax */ W32((u32)(0xa8fd10u), r_eax);
    /* 0066cdb0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdb2: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66cdb7u); f_005b8610();
    /* 0066cdb7: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cdbd: mov dword ptr [0xa8fd0c], eax */ W32((u32)(0xa8fd0cu), r_eax);
    /* 0066cdc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdc4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66cdc9u); f_005b8610();
    /* 0066cdc9: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cdcf: mov dword ptr [0xa8fd08], eax */ W32((u32)(0xa8fd08u), r_eax);
    /* 0066cdd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdd6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66cddbu); f_005b8638();
    /* 0066cddb: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cde1: mov dword ptr [0xa8fd04], eax */ W32((u32)(0xa8fd04u), r_eax);
    /* 0066cde6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cde8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66cdedu); f_005b8638();
    /* 0066cded: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cdf3: mov dword ptr [0xa8fd00], eax */ W32((u32)(0xa8fd00u), r_eax);
    /* 0066cdf8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cdfa: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66cdffu); f_005b8624();
    /* 0066cdff: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ce05: mov dword ptr [0xa8fcfc], eax */ W32((u32)(0xa8fcfcu), r_eax);
    /* 0066ce0a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce0c: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66ce11u); f_005b8624();
    /* 0066ce11: mov dword ptr [0xa8fcf8], eax */ W32((u32)(0xa8fcf8u), r_eax);
    /* 0066ce16: jmp 0x66cefb */ goto L_0066cefb;
L_0066ce1b:; BB(0x0066ce1b);
    /* 0066ce1b: cmp ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce1e: je 0x66cd48 */ if (fZ) goto L_0066cd48;
L_0066ce24:; BB(0x0066ce24);
    /* 0066ce24: cmp ebx, 0x1d */ {  u32 a = r_ebx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce27: je 0x66cd48 */ if (fZ) goto L_0066cd48;
L_0066ce2d:; BB(0x0066ce2d);
    /* 0066ce2d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0066ce34: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce39: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66ce3eu); f_008581c5();
    /* 0066ce3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066ce3f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066ce42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ce44: je 0x66cf29 */ if (fZ) goto L_0066cf29;
L_0066ce4a:; BB(0x0066ce4a);
    /* 0066ce4a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0066ce51: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066ce58: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066ce5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ce5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce60: push 0x9c95bc */ { u32 v = 0x9c95bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce65: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce67: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66ce6cu); f_005b7a84();
    /* 0066ce6c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0066ce6f: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0066ce76:; BB(0x0066ce76);
    /* 0066ce76: mov dword ptr [0xa8fd14], ecx */ W32((u32)(0xa8fd14u), r_ecx);
    /* 0066ce7c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066ce83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce85: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66ce8au); f_005b8610();
    /* 0066ce8a: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ce90: mov dword ptr [0xa8fd10], eax */ W32((u32)(0xa8fd10u), r_eax);
    /* 0066ce95: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066ce97: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66ce9cu); f_005b8610();
    /* 0066ce9c: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cea2: mov dword ptr [0xa8fd0c], eax */ W32((u32)(0xa8fd0cu), r_eax);
    /* 0066cea7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cea9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66ceaeu); f_005b8610();
    /* 0066ceae: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ceb4: mov dword ptr [0xa8fd08], eax */ W32((u32)(0xa8fd08u), r_eax);
    /* 0066ceb9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cebb: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66cec0u); f_005b8638();
    /* 0066cec0: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cec6: mov dword ptr [0xa8fd04], eax */ W32((u32)(0xa8fd04u), r_eax);
    /* 0066cecb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cecd: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66ced2u); f_005b8638();
    /* 0066ced2: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ced8: mov dword ptr [0xa8fd00], eax */ W32((u32)(0xa8fd00u), r_eax);
    /* 0066cedd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cedf: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66cee4u); f_005b8624();
    /* 0066cee4: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066ceea: mov dword ptr [0xa8fcfc], eax */ W32((u32)(0xa8fcfcu), r_eax);
    /* 0066ceef: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cef1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66cef6u); f_005b8624();
    /* 0066cef6: mov dword ptr [0xa8fcf8], eax */ W32((u32)(0xa8fcf8u), r_eax);
L_0066cefb:; BB(0x0066cefb);
    /* 0066cefb: mov ecx, dword ptr [0xa8fd14] */ r_ecx = R32((u32)(0xa8fd14u));
    /* 0066cf01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066cf03: je 0x66cf0a */ if (fZ) goto L_0066cf0a;
L_0066cf05:; BB(0x0066cf05);
    /* 0066cf05: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x66cf0au); f_005b90d0();
L_0066cf0a:; BB(0x0066cf0a);
    /* 0066cf0a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066cf0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cf10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066cf17: mov esp, ebp */ r_esp = r_ebp;
    /* 0066cf19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066cf1a: ret  */ FN_RET(0x0066cc28); r_esp += 4; return;
L_0066cf1b:; BB(0x0066cf1b);
    /* 0066cf1b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066cf1d: jmp 0x66ccb1 */ goto L_0066ccb1;
L_0066cf22:; BB(0x0066cf22);
    /* 0066cf22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066cf24: jmp 0x66cd91 */ goto L_0066cd91;
L_0066cf29:; BB(0x0066cf29);
    /* 0066cf29: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066cf2b: jmp 0x66ce76 */ goto L_0066ce76;
}

void f_0066cf30(void) /* sub_66CF30 */
{
    FN_ENTER(0x0066cf30);
    /* 0066cf30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066cf33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066cf35: call 0x66cf54 */ r_esp -= 4; W32(r_esp, 0x66cf3au); f_0066cf54();
    /* 0066cf3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066cf3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066cf40: jne 0x66cf46 */ if (!fZ) goto L_0066cf46;
L_0066cf42:; BB(0x0066cf42);
    /* 0066cf42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066cf43: ret 4 */ FN_RET(0x0066cf30); r_esp += 8; return;
L_0066cf46:; BB(0x0066cf46);
    /* 0066cf46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66cf4cu); f_005c2f74();
    /* 0066cf4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066cf4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066cf4e: ret 4 */ FN_RET(0x0066cf30); r_esp += 8; return;
}

void f_0066cf54(void) /* sub_66CF54 */
{
    FN_ENTER(0x0066cf54);
    /* 0066cf54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf55: mov ebp, esp */ r_ebp = r_esp;
    /* 0066cf57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf59: push 0x8e8d58 */ { u32 v = 0x8e8d58u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066cf64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066cf65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066cf6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066cf6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066cf72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066cf75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066cf78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066cf7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066cf7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066cf81: mov dword ptr [ecx], 0xb35540 */ W32((u32)(r_ecx), 0xb35540u);
    /* 0066cf87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066cf8e: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66cf93u); f_0066873c();
    /* 0066cf93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066cf96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066cf9d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066cf9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066cfa0: ret  */ FN_RET(0x0066cf54); r_esp += 4; return;
}

void f_0066cfa4(void) /* sub_66CFA4 */
{
    FN_ENTER(0x0066cfa4);
    /* 0066cfa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfa5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066cfa7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066cfab: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066cfaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066cfb1: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66cfb6u); f_0066982c();
    /* 0066cfb6: mov dword ptr [ebx], 0xb35540 */ W32((u32)(r_ebx), 0xb35540u);
    /* 0066cfbc: mov edx, dword ptr [0x9c9624] */ r_edx = R32((u32)(0x9c9624u));
    /* 0066cfc2: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0066cfc5: mov eax, ebx */ r_eax = r_ebx;
    /* 0066cfc7: mov dword ptr [ebx + 0xac], 0x41a00000 */ W32((u32)(r_ebx+0xacu), 0x41a00000u);
    /* 0066cfd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066cfd2: ret 8 */ FN_RET(0x0066cfa4); r_esp += 12; return;
}

void f_0066cfd8(void) /* sub_66CFD8 */
{
    FN_ENTER(0x0066cfd8);
    /* 0066cfd8: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66cfddu); f_006698e0();
    /* 0066cfdd: ret  */ FN_RET(0x0066cfd8); r_esp += 4; return;
}

void f_0066cfe0(void) /* sub_66CFE0 */
{
    FN_ENTER(0x0066cfe0);
    /* 0066cfe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfe1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066cfe4: mov esi, ecx */ r_esi = r_ecx;
    /* 0066cfe6: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066cfe8: mov ecx, esi */ r_ecx = r_esi;
    /* 0066cfea: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cfef: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066cff4: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66cff7u); call_ind(t); }
    /* 0066cff7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066cff9: je 0x66d01e */ if (fZ) goto L_0066d01e;
L_0066cffb:; BB(0x0066cffb);
    /* 0066cffb: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 0066d001: fmul dword ptr [0x939da4] */ ST(0) = ST(0) * R_F32((u32)(0x939da4u));
    /* 0066d007: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0066d00b: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0066d00e: mov dword ptr [esp + 8], 0x9ff9e0 */ W32((u32)(r_esp+0x8u), 0x9ff9e0u);
    /* 0066d016: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066d019: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66d01eu); f_0061cdb0();
L_0066d01e:; BB(0x0066d01e);
    /* 0066d01e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d021: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066d022: ret  */ FN_RET(0x0066cfe0); r_esp += 4; return;
}

