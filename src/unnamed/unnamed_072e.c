#include "protos.h"

void f_0072e0e4(void) /* sub_72E0E4 */
{
    FN_ENTER(0x0072e0e4);
    /* 0072e0e4: mov dword ptr [ecx + 0x1c], 0x495bba00 */ W32((u32)(r_ecx+0x1cu), 0x495bba00u);
    /* 0072e0eb: ret  */ FN_RET(0x0072e0e4); r_esp += 4; return;
}

void f_0072e0ec(void) /* sub_72E0EC */
{
    FN_ENTER(0x0072e0ec);
    /* 0072e0ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e0ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072e0ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e0f1: call 0x72e110 */ r_esp -= 4; W32(r_esp, 0x72e0f6u); f_0072e110();
    /* 0072e0f6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072e0fa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e0fc: jne 0x72e102 */ if (!fZ) goto L_0072e102;
L_0072e0fe:; BB(0x0072e0fe);
    /* 0072e0fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e0ff: ret 4 */ FN_RET(0x0072e0ec); r_esp += 8; return;
L_0072e102:; BB(0x0072e102);
    /* 0072e102: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e103: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e108u); f_00857e98();
    /* 0072e108: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e109: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e10a: ret 4 */ FN_RET(0x0072e0ec); r_esp += 8; return;
}

void f_0072e110(void) /* sub_72E110 */
{
    FN_ENTER(0x0072e110);
    /* 0072e110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e111: mov ebp, esp */ r_ebp = r_esp;
    /* 0072e113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072e115: push 0x8f1368 */ { u32 v = 0x8f1368u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e11a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072e120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072e128: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e12b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072e12e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072e131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072e134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072e137: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072e13a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072e141: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e144: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0072e147: mov dword ptr [ecx], 0xb40478 */ W32((u32)(r_ecx), 0xb40478u);
    /* 0072e14d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e14f: je 0x72e162 */ if (fZ) goto L_0072e162;
L_0072e151:; BB(0x0072e151);
    /* 0072e151: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e152: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e157u); f_00857e98();
    /* 0072e157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e158: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e15b: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_0072e162:; BB(0x0072e162);
    /* 0072e162: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072e169: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72e16eu); f_0072aca4();
    /* 0072e16e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072e171: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072e178: mov esp, ebp */ r_esp = r_ebp;
    /* 0072e17a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e17b: ret  */ FN_RET(0x0072e110); r_esp += 4; return;
}

void f_0072e17c(void) /* sub_72E17C */
{
    FN_ENTER(0x0072e17c);
    /* 0072e17c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e17d: mov edi, ecx */ r_edi = r_ecx;
    /* 0072e17f: mov ecx, edi */ r_ecx = r_edi;
    /* 0072e181: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0072e186: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e187: call 0x72ad30 */ r_esp -= 4; W32(r_esp, 0x72e18cu); f_0072ad30();
    /* 0072e18c: mov dword ptr [edi], 0xb40478 */ W32((u32)(r_edi), 0xb40478u);
    /* 0072e192: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0072e197: mov byte ptr [edi + 0x1d], dl */ W8((u32)(r_edi+0x1du), (u8)r_edx);
    /* 0072e19a: mov byte ptr [edi + 0x1e], dl */ W8((u32)(r_edi+0x1eu), (u8)r_edx);
    /* 0072e19d: mov dword ptr [edi + 0x14], 0x41600000 */ W32((u32)(r_edi+0x14u), 0x41600000u);
    /* 0072e1a4: mov byte ptr [edi + 0x1f], dl */ W8((u32)(r_edi+0x1fu), (u8)r_edx);
    /* 0072e1a7: mov byte ptr [edi + 0x20], dl */ W8((u32)(r_edi+0x20u), (u8)r_edx);
    /* 0072e1aa: mov byte ptr [edi + 0x21], dl */ W8((u32)(r_edi+0x21u), (u8)r_edx);
    /* 0072e1ad: mov byte ptr [edi + 0x1c], 0x36 */ W8((u32)(r_edi+0x1cu), 0x36u);
    /* 0072e1b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e1b3: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0072e1b6: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0072e1b9: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0072e1bc: mov eax, edi */ r_eax = r_edi;
    /* 0072e1be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072e1bf: ret 8 */ FN_RET(0x0072e17c); r_esp += 12; return;
}

void f_0072e1c4(void) /* sub_72E1C4 */
{
    FN_ENTER(0x0072e1c4);
    /* 0072e1c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e1c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e1c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e1c7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e1ca: mov esi, ecx */ r_esi = r_ecx;
    /* 0072e1cc: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 0072e1d0: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 0072e1d4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e1d6: je 0x72e3a6 */ if (fZ) goto L_0072e3a6;
L_0072e1dc:; BB(0x0072e1dc);
    /* 0072e1dc: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0072e1df: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0072e1e2: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0072e1e5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072e1e7: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0072e1e9: fcomp dword ptr [ebp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x40u))); FPOP();
    /* 0072e1ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e1ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e1ef: jb 0x72e3af */ if (fC) goto L_0072e3af;
L_0072e1f5:; BB(0x0072e1f5);
    /* 0072e1f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e1f7: fcom dword ptr [ebp + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x48u))); 
    /* 0072e1fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e1fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e1fd: ja 0x72e3bc */ if ((!fC&&!fZ)) goto L_0072e3bc;
L_0072e203:; BB(0x0072e203);
    /* 0072e203: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072e206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072e208: jl 0x72e3c7 */ if ((fS!=fO)) goto L_0072e3c7;
L_0072e20e:; BB(0x0072e20e);
    /* 0072e20e: fld dword ptr [0x970ef4] */ FPUSH(R_F32((u32)(0x970ef4u)));
    /* 0072e214: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 0072e217: fdivr dword ptr [0x970ef8] */ ST(0) = R_F32((u32)(0x970ef8u)) / ST(0);
    /* 0072e21d: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0072e220: fadd dword ptr [ebp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x10u));
    /* 0072e223: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0072e226: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072e228: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072e22c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e22e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e232: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072e236: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e238: je 0x72e241 */ if (fZ) goto L_0072e241;
L_0072e23a:; BB(0x0072e23a);
    /* 0072e23a: mov ebx, 0xff888888 */ r_ebx = 0xff888888u;
    /* 0072e23f: jmp 0x72e246 */ goto L_0072e246;
L_0072e241:; BB(0x0072e241);
    /* 0072e241: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_0072e246:; BB(0x0072e246);
    /* 0072e246: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0072e24a: movzx edx, byte ptr [esi + 0x1c] */ r_edx = (u32)R8((u32)(r_esi+0x1cu));
    /* 0072e24e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072e252: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072e255: mov dword ptr [esp + 0x10], 0xffffffff */ W32((u32)(r_esp+0x10u), 0xffffffffu);
    /* 0072e25d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072e261: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072e265: mov byte ptr [esp + 0xc], dl */ W8((u32)(r_esp+0xcu), (u8)r_edx);
    /* 0072e269: call 0x72b3c8 */ r_esp -= 4; W32(r_esp, 0x72e26eu); f_0072b3c8();
    /* 0072e26e: fld dword ptr [0x970ef0] */ FPUSH(R_F32((u32)(0x970ef0u)));
    /* 0072e274: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e278: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0072e27c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072e280: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e284: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0072e28c: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0072e294: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0072e297: mov eax, 1 */ r_eax = 0x1u;
    /* 0072e29c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072e2a0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072e2a4: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72e2a9u); f_0071d484();
    /* 0072e2a9: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072e2ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2af: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2b5: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e2b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2b9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e2beu); f_0071d58c();
    /* 0072e2be: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e2c1: fld dword ptr [0x970ee8] */ FPUSH(R_F32((u32)(0x970ee8u)));
    /* 0072e2c7: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e2cb: movsx eax, byte ptr [esi + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1du));
    /* 0072e2cf: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e2d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2d4: mov ecx, esi */ r_ecx = r_esi;
    /* 0072e2d6: call 0x72e3d4 */ r_esp -= 4; W32(r_esp, 0x72e2dbu); f_0072e3d4();
    /* 0072e2db: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0072e2df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2e1: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e2e9: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e2eeu); f_0071d58c();
    /* 0072e2ee: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e2f1: fld dword ptr [0x970ee4] */ FPUSH(R_F32((u32)(0x970ee4u)));
    /* 0072e2f7: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e2fb: movsx eax, byte ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 0072e2ff: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e304: mov ecx, esi */ r_ecx = r_esi;
    /* 0072e306: call 0x72e3f4 */ r_esp -= 4; W32(r_esp, 0x72e30bu); f_0072e3f4();
    /* 0072e30b: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0072e30f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e311: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e316: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e317: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e318: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e319: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e31eu); f_0071d58c();
    /* 0072e31e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e321: fld dword ptr [0x970ee0] */ FPUSH(R_F32((u32)(0x970ee0u)));
    /* 0072e327: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e32b: movsx eax, byte ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1eu));
    /* 0072e32f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e332: je 0x72e35e */ if (fZ) goto L_0072e35e;
L_0072e334:; BB(0x0072e334);
    /* 0072e334: movsx eax, byte ptr [esi + 0x1f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x1fu));
    /* 0072e338: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e33c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e33d: mov ecx, esi */ r_ecx = r_esi;
    /* 0072e33f: call 0x72e414 */ r_esp -= 4; W32(r_esp, 0x72e344u); f_0072e414();
    /* 0072e344: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0072e348: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e34a: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e34f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e350: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e351: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e352: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e357u); f_0071d58c();
    /* 0072e357: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e35a: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
L_0072e35e:; BB(0x0072e35e);
    /* 0072e35e: fadd dword ptr [0x970edc] */ ST(0) = ST(0) + R_F32((u32)(0x970edcu));
    /* 0072e364: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e368: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x72e36du); f_00816d30();
    /* 0072e36d: movsx eax, byte ptr [esi + 0x20] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x20u));
    /* 0072e371: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e372: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72e377u); f_00815f24();
    /* 0072e377: push dword ptr [0x9f2c5c] */ { u32 v = R32((u32)(0x9f2c5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e37d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x72e382u); f_00816cb8();
    /* 0072e382: movsx eax, byte ptr [esi + 0x21] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x21u));
    /* 0072e386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e387: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x72e38cu); f_00815f24();
    /* 0072e38c: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 0072e390: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e392: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e397: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e398: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e39e: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e3a3u); f_0071d58c();
    /* 0072e3a3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072e3a6:; BB(0x0072e3a6);
    /* 0072e3a6: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e3a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e3aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e3ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072e3ac: ret 4 */ FN_RET(0x0072e1c4); r_esp += 8; return;
L_0072e3af:; BB(0x0072e3af);
    /* 0072e3af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072e3b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072e3b3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e3b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e3b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e3b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072e3b9: ret 4 */ FN_RET(0x0072e1c4); r_esp += 8; return;
L_0072e3bc:; BB(0x0072e3bc);
    /* 0072e3bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072e3be: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e3c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e3c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e3c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072e3c4: ret 4 */ FN_RET(0x0072e1c4); r_esp += 8; return;
L_0072e3c7:; BB(0x0072e3c7);
    /* 0072e3c7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072e3c9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e3cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e3cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e3ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072e3cf: ret 4 */ FN_RET(0x0072e1c4); r_esp += 8; return;
}

void f_0072e3d4(void) /* sub_72E3D4 */
{
    FN_ENTER(0x0072e3d4);
    /* 0072e3d4: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0072e3d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e3db: jne 0x72e3e2 */ if (!fZ) goto L_0072e3e2;
L_0072e3dd:; BB(0x0072e3dd);
    /* 0072e3dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e3df: ret 4 */ FN_RET(0x0072e3d4); r_esp += 8; return;
L_0072e3e2:; BB(0x0072e3e2);
    /* 0072e3e2: lea eax, [eax + 0x135] */ r_eax = (u32)(r_eax+0x135u);
    /* 0072e3e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e3e9: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72e3eeu); f_0079317c();
    /* 0072e3ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e3ef: ret 4 */ FN_RET(0x0072e3d4); r_esp += 8; return;
}

void f_0072e3f4(void) /* sub_72E3F4 */
{
    FN_ENTER(0x0072e3f4);
    /* 0072e3f4: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0072e3f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e3fb: jne 0x72e402 */ if (!fZ) goto L_0072e402;
L_0072e3fd:; BB(0x0072e3fd);
    /* 0072e3fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e3ff: ret 4 */ FN_RET(0x0072e3f4); r_esp += 8; return;
L_0072e402:; BB(0x0072e402);
    /* 0072e402: lea eax, [eax + 0x139] */ r_eax = (u32)(r_eax+0x139u);
    /* 0072e408: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e409: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72e40eu); f_0079317c();
    /* 0072e40e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e40f: ret 4 */ FN_RET(0x0072e3f4); r_esp += 8; return;
}

void f_0072e414(void) /* sub_72E414 */
{
    FN_ENTER(0x0072e414);
    /* 0072e414: movsx eax, byte ptr [esp + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 0072e419: lea edx, [eax + 0x13d] */ r_edx = (u32)(r_eax+0x13du);
    /* 0072e41f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e420: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x72e425u); f_0079317c();
    /* 0072e425: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e426: ret 4 */ FN_RET(0x0072e414); r_esp += 8; return;
}

void f_0072e42c(void) /* sub_72E42C */
{
    FN_ENTER(0x0072e42c);
    /* 0072e42c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e42d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e42e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e42f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072e431: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072e435: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 0072e439: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e43b: je 0x72e443 */ if (fZ) goto L_0072e443;
L_0072e43d:; BB(0x0072e43d);
    /* 0072e43d: mov byte ptr [ebp + 0x1c], 0x18 */ W8((u32)(r_ebp+0x1cu), 0x18u);
    /* 0072e441: jmp 0x72e447 */ goto L_0072e447;
L_0072e443:; BB(0x0072e443);
    /* 0072e443: mov byte ptr [ebp + 0x1c], 0x36 */ W8((u32)(r_ebp+0x1cu), 0x36u);
L_0072e447:; BB(0x0072e447);
    /* 0072e447: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e448: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72e44du); f_00858009();
    /* 0072e44d: mov ebx, eax */ r_ebx = r_eax;
    /* 0072e44f: lea edx, [ebx + ebx + 2] */ r_edx = (u32)(r_ebx+r_ebx+0x2u);
    /* 0072e453: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e454: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72e459u); f_008581c5();
    /* 0072e459: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e45a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e45b: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 0072e45e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e45f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72e464u); f_00857dec();
    /* 0072e464: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0072e468: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 0072e46b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072e46d: mov word ptr [edi + ebx*2], dx */ W16((u32)(r_edi+r_ebx*2), (u16)r_edx);
    /* 0072e471: movzx ebx, byte ptr [esp + 0x38] */ r_ebx = (u32)R8((u32)(r_esp+0x38u));
    /* 0072e476: mov byte ptr [ebp + 0x1d], al */ W8((u32)(r_ebp+0x1du), (u8)r_eax);
    /* 0072e479: movzx eax, byte ptr [esp + 0x34] */ r_eax = (u32)R8((u32)(r_esp+0x34u));
    /* 0072e47e: mov byte ptr [ebp + 0x1e], bl */ W8((u32)(r_ebp+0x1eu), (u8)r_ebx);
    /* 0072e481: mov byte ptr [ebp + 0x1f], al */ W8((u32)(r_ebp+0x1fu), (u8)r_eax);
    /* 0072e484: movzx eax, byte ptr [esp + 0x2c] */ r_eax = (u32)R8((u32)(r_esp+0x2cu));
    /* 0072e489: mov byte ptr [ebp + 0x20], al */ W8((u32)(r_ebp+0x20u), (u8)r_eax);
    /* 0072e48c: movzx eax, byte ptr [esp + 0x30] */ r_eax = (u32)R8((u32)(r_esp+0x30u));
    /* 0072e491: mov byte ptr [ebp + 0x21], al */ W8((u32)(r_ebp+0x21u), (u8)r_eax);
    /* 0072e494: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0072e498: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0072e49b: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072e49f: or eax, 0xffff0005 */ {  u32 a = r_eax; u32 b = 0xffff0005u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072e4a4: mov word ptr [ebp + 4], ax */ W16((u32)(r_ebp+0x4u), (u16)r_eax);
    /* 0072e4a8: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0072e4ac: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 0072e4af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e4b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e4b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e4b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072e4b5: ret 0x24 */ FN_RET(0x0072e42c); r_esp += 40; return;
}

void f_0072e4b8(void) /* sub_72E4B8 */
{
    FN_ENTER(0x0072e4b8);
    /* 0072e4b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072e4bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e4bd: call 0x72e4dc */ r_esp -= 4; W32(r_esp, 0x72e4c2u); f_0072e4dc();
    /* 0072e4c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072e4c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e4c8: jne 0x72e4ce */ if (!fZ) goto L_0072e4ce;
L_0072e4ca:; BB(0x0072e4ca);
    /* 0072e4ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e4cb: ret 4 */ FN_RET(0x0072e4b8); r_esp += 8; return;
L_0072e4ce:; BB(0x0072e4ce);
    /* 0072e4ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4cf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e4d4u); f_00857e98();
    /* 0072e4d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e4d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e4d6: ret 4 */ FN_RET(0x0072e4b8); r_esp += 8; return;
}

void f_0072e4dc(void) /* sub_72E4DC */
{
    FN_ENTER(0x0072e4dc);
    /* 0072e4dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0072e4df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4e1: push 0x8f1384 */ { u32 v = 0x8f1384u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072e4ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e4ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072e4f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e4f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072e4fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072e4fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072e500: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072e503: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072e506: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e509: mov dword ptr [ecx], 0xb404b0 */ W32((u32)(r_ecx), 0xb404b0u);
    /* 0072e50f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072e516: call 0x729830 */ r_esp -= 4; W32(r_esp, 0x72e51bu); f_00729830();
    /* 0072e51b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072e51e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072e525: mov esp, ebp */ r_esp = r_ebp;
    /* 0072e527: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e528: ret  */ FN_RET(0x0072e4dc); r_esp += 4; return;
}

void f_0072e52c(void) /* sub_72E52C */
{
    FN_ENTER(0x0072e52c);
    /* 0072e52c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e52d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e52e: mov esi, ecx */ r_esi = r_ecx;
    /* 0072e530: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0072e534: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072e539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e53a: mov ecx, esi */ r_ecx = r_esi;
    /* 0072e53c: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72e541u); f_00729838();
    /* 0072e541: fld dword ptr [0x970f24] */ FPUSH(R_F32((u32)(0x970f24u)));
    /* 0072e547: mov dword ptr [esi], 0xb404b0 */ W32((u32)(r_esi), 0xb404b0u);
    /* 0072e54d: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072e550: mov dword ptr [esi + 8], edx */ W32((u32)(r_esi+0x8u), r_edx);
    /* 0072e553: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0072e556: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0072e559: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0072e55c: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0072e55f: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 0072e562: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 0072e565: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0072e568: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 0072e56b: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 0072e56e: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0072e570: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0072e573: fld dword ptr [edi + 0x18] */ FPUSH(R_F32((u32)(r_edi+0x18u)));
    /* 0072e576: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0072e578: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0072e57b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e57d: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 0072e580: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0072e582: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0072e585: fadd dword ptr [edi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x18u));
    /* 0072e588: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0072e58a: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0072e58d: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0072e590: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 0072e593: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0072e596: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0072e599: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0072e59c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0072e59f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0072e5a2: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 0072e5a5: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0072e5a8: mov word ptr [esi + 4], di */ W16((u32)(r_esi+0x4u), (u16)r_edi);
    /* 0072e5ac: mov eax, esi */ r_eax = r_esi;
    /* 0072e5ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072e5af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072e5b0: ret 8 */ FN_RET(0x0072e52c); r_esp += 12; return;
}

void f_0072e5b4(void) /* sub_72E5B4 */
{
    FN_ENTER(0x0072e5b4);
    /* 0072e5b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e5b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e5b6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072e5b8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0072e5bc: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 0072e5c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e5c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e5c4: call 0x729838 */ r_esp -= 4; W32(r_esp, 0x72e5c9u); f_00729838();
    /* 0072e5c9: mov dword ptr [ebx], 0xb404b0 */ W32((u32)(r_ebx), 0xb404b0u);
    /* 0072e5cf: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 0072e5d2: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 0072e5d5: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0072e5d8: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0072e5db: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0072e5de: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 0072e5e1: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 0072e5e4: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 0072e5e7: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0072e5ea: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0072e5ed: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 0072e5f0: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 0072e5f3: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0072e5f6: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0072e5f9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0072e5fc: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0072e5ff: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0072e602: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 0072e605: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 0072e608: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 0072e60b: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0072e60e: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0072e611: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0072e614: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0072e617: mov edi, dword ptr [edi + 0x34] */ r_edi = R32((u32)(r_edi+0x34u));
    /* 0072e61a: mov word ptr [ebx + 4], di */ W16((u32)(r_ebx+0x4u), (u16)r_edi);
    /* 0072e61e: mov eax, ebx */ r_eax = r_ebx;
    /* 0072e620: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e621: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072e622: ret 8 */ FN_RET(0x0072e5b4); r_esp += 12; return;
}

void f_0072e628(void) /* sub_72E628 */
{
    FN_ENTER(0x0072e628);
    /* 0072e628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e629: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e62a: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e62d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072e62f: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 0072e633: fild dword ptr [ebx + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x30u)));
    /* 0072e636: fld dword ptr [0x970f1c] */ FPUSH(R_F32((u32)(0x970f1cu)));
    /* 0072e63c: fmul dword ptr [ebp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x18u));
    /* 0072e63f: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 0072e642: fdivr dword ptr [0x970f20] */ ST(0) = R_F32((u32)(0x970f20u)) / ST(0);
    /* 0072e648: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0072e64b: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 0072e64e: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0072e651: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0072e654: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0072e657: fmul dword ptr [0x970f0c] */ ST(0) = ST(0) * R_F32((u32)(0x970f0cu));
    /* 0072e65d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0072e65f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072e663: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072e665: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 0072e667: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072e669: fdiv dword ptr [ebx + 0x18] */ ST(0) = ST(0) / R_F32((u32)(r_ebx+0x18u));
    /* 0072e66c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072e66e: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0072e672: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072e674: fdiv dword ptr [0x970f18] */ ST(0) = ST(0) / R_F32((u32)(0x970f18u));
    /* 0072e67a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e67c: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0072e680: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e682: fmul dword ptr [0x970f14] */ ST(0) = ST(0) * R_F32((u32)(0x970f14u));
    /* 0072e688: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0072e68a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e68c: fmul dword ptr [0x970f10] */ ST(0) = ST(0) * R_F32((u32)(0x970f10u));
    /* 0072e692: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0072e694: fcom dword ptr [0x970f08] */ fx_compare(ST(0), R_F32((u32)(0x970f08u))); 
    /* 0072e69a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e69c: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072e6a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e6a1: jbe 0x72e7b9 */ if ((fC||fZ)) goto L_0072e7b9;
L_0072e6a7:; BB(0x0072e6a7);
    /* 0072e6a7: fld dword ptr [0x970f04] */ FPUSH(R_F32((u32)(0x970f04u)));
    /* 0072e6ad: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072e6b1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0072e6b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072e6b5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072e6b6: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072e6ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e6bc: jbe 0x72e6c0 */ if ((fC||fZ)) goto L_0072e6c0;
L_0072e6be:; BB(0x0072e6be);
    /* 0072e6be: fst st(1) */ ST(1) = ST(0);
L_0072e6c0:; BB(0x0072e6c0);
    /* 0072e6c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072e6c2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0072e6c6: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e6c8: jne 0x72e7c1 */ if (!fZ) goto L_0072e7c1;
L_0072e6ce:; BB(0x0072e6ce);
    /* 0072e6ce: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e6d0: je 0x72e6de */ if (fZ) goto L_0072e6de;
L_0072e6d2:; BB(0x0072e6d2);
    /* 0072e6d2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0072e6d7: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72e6dcu); f_0082bb30();
    /* 0072e6dc: jmp 0x72e6e5 */ goto L_0072e6e5;
L_0072e6de:; BB(0x0072e6de);
    /* 0072e6de: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0072e6e0: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x72e6e5u); f_0082bb30();
L_0072e6e5:; BB(0x0072e6e5);
    /* 0072e6e5: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0072e6e8: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0072e6ea: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x72e6efu); f_00829cc8();
    /* 0072e6ef: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 0072e6f2: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 0072e6f5: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x72e6fau); f_0082bb60();
    /* 0072e6fa: fld dword ptr [0x970f04] */ FPUSH(R_F32((u32)(0x970f04u)));
    /* 0072e700: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072e704: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0072e708: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e70a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072e70c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072e70e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0072e710: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0072e713: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 0072e716: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e718: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0072e71a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e71c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0072e71e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0072e722: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072e724: fld dword ptr [ebp + 0x14] */ FPUSH(R_F32((u32)(r_ebp+0x14u)));
    /* 0072e727: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0072e72b: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0072e72e: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0072e731: movzx ecx, word ptr [ebp + 4] */ r_ecx = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072e735: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e737: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0072e739: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0072e73b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072e73d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072e740: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e742: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 0072e744: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072e746: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072e74a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e74c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0072e750: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072e752: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0072e756: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072e75a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0072e75d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0072e761: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0072e765: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0072e768: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e76b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0072e76f: je 0x72e78f */ if (fZ) goto L_0072e78f;
L_0072e771:; BB(0x0072e771);
    /* 0072e771: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0072e774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e775: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e777: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x72e77cu); f_0071bbb4();
    /* 0072e77c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e77d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0072e781: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072e784: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072e788: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72e78du); f_0082b440();
    /* 0072e78d: jmp 0x72e7af */ goto L_0072e7af;
L_0072e78f:; BB(0x0072e78f);
    /* 0072e78f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0072e792: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e793: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e795: call 0x71ba34 */ r_esp -= 4; W32(r_esp, 0x72e79au); f_0071ba34();
    /* 0072e79a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072e79c: je 0x72e7af */ if (fZ) goto L_0072e7af;
L_0072e79e:; BB(0x0072e79e);
    /* 0072e79e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e79f: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0072e7a3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0072e7a6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0072e7aa: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x72e7afu); f_0082b440();
L_0072e7af:; BB(0x0072e7af);
    /* 0072e7af: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x72e7b4u); f_004ac444();
    /* 0072e7b4: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x72e7b9u); f_007a9044();
L_0072e7b9:; BB(0x0072e7b9);
    /* 0072e7b9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072e7bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e7bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e7be: ret 4 */ FN_RET(0x0072e628); r_esp += 8; return;
L_0072e7c1:; BB(0x0072e7c1);
    /* 0072e7c1: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x72e7c6u); f_007a902c();
    /* 0072e7c6: movzx eax, word ptr [ebp + 4] */ r_eax = (u32)R16((u32)(r_ebp+0x4u));
    /* 0072e7ca: jmp 0x72e6ce */ goto L_0072e6ce;
}

void f_0072e7d0(void) /* sub_72E7D0 */
{
    FN_ENTER(0x0072e7d0);
    /* 0072e7d0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072e7d4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072e7d8: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0072e7db: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0072e7de: ret 8 */ FN_RET(0x0072e7d0); r_esp += 12; return;
}

void f_0072e7e4(void) /* sub_72E7E4 */
{
    FN_ENTER(0x0072e7e4);
    /* 0072e7e4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0072e7e8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0072e7ec: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0072e7ef: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072e7f1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0072e7f5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0072e7f9: fld dword ptr [0x970f00] */ FPUSH(R_F32((u32)(0x970f00u)));
    /* 0072e7ff: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 0072e801: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0072e804: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e806: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0072e808: fdiv st(5), st(0) */ ST(5) = ST(5) / ST(0);
    /* 0072e80a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0072e80c: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0072e80f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e811: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 0072e814: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072e816: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0072e819: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072e81b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0072e81d: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0072e820: ret 8 */ FN_RET(0x0072e7e4); r_esp += 12; return;
}

void f_0072e824(void) /* sub_72E824 */
{
    FN_ENTER(0x0072e824);
    /* 0072e824: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0072e828: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0072e82c: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 0072e82f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0072e833: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 0072e836: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0072e83a: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0072e83d: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0072e840: ret 0x10 */ FN_RET(0x0072e824); r_esp += 20; return;
}

void f_0072e844(void) /* sub_72E844 */
{
    FN_ENTER(0x0072e844);
    /* 0072e844: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0072e847: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0072e84a: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0072e84d: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0072e850: ret  */ FN_RET(0x0072e844); r_esp += 4; return;
}

void f_0072e854(void) /* sub_72E854 */
{
    FN_ENTER(0x0072e854);
    /* 0072e854: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 0072e857: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0072e85a: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0072e85d: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0072e860: ret  */ FN_RET(0x0072e854); r_esp += 4; return;
}

void f_0072e864(void) /* sub_72E864 */
{
    FN_ENTER(0x0072e864);
    /* 0072e864: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e865: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072e867: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072e869: call 0x72e888 */ r_esp -= 4; W32(r_esp, 0x72e86eu); f_0072e888();
    /* 0072e86e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072e872: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e874: jne 0x72e87a */ if (!fZ) goto L_0072e87a;
L_0072e876:; BB(0x0072e876);
    /* 0072e876: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e877: ret 4 */ FN_RET(0x0072e864); r_esp += 8; return;
L_0072e87a:; BB(0x0072e87a);
    /* 0072e87a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e87b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e880u); f_00857e98();
    /* 0072e880: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072e881: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072e882: ret 4 */ FN_RET(0x0072e864); r_esp += 8; return;
}

void f_0072e888(void) /* sub_72E888 */
{
    FN_ENTER(0x0072e888);
    /* 0072e888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072e889: mov ebp, esp */ r_ebp = r_esp;
    /* 0072e88b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072e88d: push 0x8f13a0 */ { u32 v = 0x8f13a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e892: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072e898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e899: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072e8a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e8a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072e8a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072e8a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072e8ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072e8af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072e8b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072e8b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e8bc: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e8bf: mov dword ptr [eax], 0xb404e8 */ W32((u32)(r_eax), 0xb404e8u);
    /* 0072e8c5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e8cau); f_00857e98();
    /* 0072e8ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e8cd: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e8d0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72e8d5u); f_00857e98();
    /* 0072e8d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e8d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072e8df: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072e8e2: call 0x72aca4 */ r_esp -= 4; W32(r_esp, 0x72e8e7u); f_0072aca4();
    /* 0072e8e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072e8ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072e8f1: mov esp, ebp */ r_esp = r_ebp;
    /* 0072e8f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072e8f4: ret  */ FN_RET(0x0072e888); r_esp += 4; return;
}

void f_0072e8f8(void) /* sub_72E8F8 */
{
    FN_ENTER(0x0072e8f8);
    /* 0072e8f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072e8f9: mov edi, ecx */ r_edi = r_ecx;
    /* 0072e8fb: mov ecx, edi */ r_ecx = r_edi;
    /* 0072e8fd: movsx eax, word ptr [esp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 0072e902: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e903: call 0x72ad30 */ r_esp -= 4; W32(r_esp, 0x72e908u); f_0072ad30();
    /* 0072e908: mov dword ptr [edi], 0xb404e8 */ W32((u32)(r_edi), 0xb404e8u);
    /* 0072e90e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072e910: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 0072e913: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0072e916: mov dword ptr [edi + 0x14], 0x41600000 */ W32((u32)(r_edi+0x14u), 0x41600000u);
    /* 0072e91d: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 0072e920: mov eax, edi */ r_eax = r_edi;
    /* 0072e922: mov dword ptr [edi + 0x24], 0xffffffff */ W32((u32)(r_edi+0x24u), 0xffffffffu);
    /* 0072e929: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072e92a: ret 8 */ FN_RET(0x0072e8f8); r_esp += 12; return;
}

void f_0072e930(void) /* sub_72E930 */
{
    FN_ENTER(0x0072e930);
    /* 0072e930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072e931: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072e934: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072e936: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072e93a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e93c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0072e940: je 0x72ea15 */ if (fZ) goto L_0072ea15;
L_0072e946:; BB(0x0072e946);
    /* 0072e946: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0072e949: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072e94b: jl 0x72ea15 */ if ((fS!=fO)) goto L_0072ea15;
L_0072e951:; BB(0x0072e951);
    /* 0072e951: fld dword ptr [0x970f58] */ FPUSH(R_F32((u32)(0x970f58u)));
    /* 0072e957: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 0072e95a: fdivr dword ptr [0x970f5c] */ ST(0) = R_F32((u32)(0x970f5cu)) / ST(0);
    /* 0072e960: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0072e963: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 0072e966: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0072e969: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 0072e96c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e96e: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e972: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072e974: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0072e978: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0072e97c: mov eax, 1 */ r_eax = 0x1u;
    /* 0072e981: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0072e989: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0072e98c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0072e990: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 0072e998: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0072e99c: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x72e9a1u); f_0071d484();
    /* 0072e9a1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072e9a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9a7: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9ac: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e9af: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e9b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9b3: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e9b8u); f_0071d58c();
    /* 0072e9b8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072e9bb: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 0072e9bf: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072e9c1: jne 0x72e9ed */ if (!fZ) goto L_0072e9ed;
L_0072e9c3:; BB(0x0072e9c3);
    /* 0072e9c3: fld dword ptr [0x970f50] */ FPUSH(R_F32((u32)(0x970f50u)));
    /* 0072e9c9: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e9cd: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e9d1: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072e9d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9d7: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9dc: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072e9df: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072e9e5: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72e9eau); f_0071d58c();
    /* 0072e9ea: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072e9ed:; BB(0x0072e9ed);
    /* 0072e9ed: fld dword ptr [0x970f4c] */ FPUSH(R_F32((u32)(0x970f4cu)));
    /* 0072e9f3: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0072e9f7: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0072e9fb: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0072e9ff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea01: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea06: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072ea09: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072ea0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea0d: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x72ea12u); f_0071d58c();
    /* 0072ea12: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072ea15:; BB(0x0072ea15);
    /* 0072ea15: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072ea18: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ea19: ret 4 */ FN_RET(0x0072e930); r_esp += 8; return;
}

void f_0072ea1c(void) /* sub_72EA1C */
{
    FN_ENTER(0x0072ea1c);
    /* 0072ea1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea1e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea1f: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ea22: mov esi, ecx */ r_esi = r_ecx;
    /* 0072ea24: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0072ea28: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072ea2b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72ea30u); f_00857e98();
    /* 0072ea30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072ea31: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0072ea38: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ea3a: je 0x72ea5d */ if (fZ) goto L_0072ea5d;
L_0072ea3c:; BB(0x0072ea3c);
    /* 0072ea3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea3d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72ea42u); f_00858009();
    /* 0072ea42: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072ea45: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072ea49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea4a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72ea4fu); f_008581c5();
    /* 0072ea4f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea51: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0072ea54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea55: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72ea5au); f_00857dec();
    /* 0072ea5a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072ea5d:; BB(0x0072ea5d);
    /* 0072ea5d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0072ea61: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072ea65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ea66: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 0072ea69: or edx, 0xffff0015 */ {  u32 a = r_edx; u32 b = 0xffff0015u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072ea6f: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 0072ea73: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x72ea78u); f_007ac344();
    /* 0072ea78: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0072ea7c: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0072ea80: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072ea83: fadd dword ptr [eax*4 + 0x970f28] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970f28u));
    /* 0072ea8a: fmul dword ptr [0x970f44] */ ST(0) = ST(0) * R_F32((u32)(0x970f44u));
    /* 0072ea90: fadd dword ptr [0x970f48] */ ST(0) = ST(0) + R_F32((u32)(0x970f48u));
    /* 0072ea96: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0072ea99: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072ea9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ea9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ea9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072ea9f: ret 8 */ FN_RET(0x0072ea1c); r_esp += 12; return;
}

void f_0072eaa4(void) /* sub_72EAA4 */
{
    FN_ENTER(0x0072eaa4);
    /* 0072eaa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072eaa5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072eaa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eaa7: mov esi, ecx */ r_esi = r_ecx;
    /* 0072eaa9: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0072eaad: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0072eab0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72eab5u); f_00857e98();
    /* 0072eab5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072eab6: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 0072eabd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072eabf: je 0x72eae2 */ if (fZ) goto L_0072eae2;
L_0072eac1:; BB(0x0072eac1);
    /* 0072eac1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eac2: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72eac7u); f_00858009();
    /* 0072eac7: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 0072eaca: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072eace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072eacf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72ead4u); f_008581c5();
    /* 0072ead4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ead5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ead6: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 0072ead9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072eada: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72eadfu); f_00857dec();
    /* 0072eadf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072eae2:; BB(0x0072eae2);
    /* 0072eae2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0072eae6: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072eaea: movzx edx, word ptr [esi + 4] */ r_edx = (u32)R16((u32)(r_esi+0x4u));
    /* 0072eaee: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 0072eaf1: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 0072eaf8: or edx, 0xffff0005 */ {  u32 a = r_edx; u32 b = 0xffff0005u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0072eafe: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 0072eb02: mov ecx, esi */ r_ecx = r_esi;
    /* 0072eb04: call 0x72eb10 */ r_esp -= 4; W32(r_esp, 0x72eb09u); f_0072eb10();
    /* 0072eb09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072eb0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072eb0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072eb0c: ret 0xc */ FN_RET(0x0072eaa4); r_esp += 16; return;
}

void f_0072eb10(void) /* sub_72EB10 */
{
    FN_ENTER(0x0072eb10);
    /* 0072eb10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb13: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0072eb15: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0072eb19: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072eb1c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x72eb21u); f_00857e98();
    /* 0072eb21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072eb22: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 0072eb29: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072eb2b: je 0x72eb55 */ if (fZ) goto L_0072eb55;
L_0072eb2d:; BB(0x0072eb2d);
    /* 0072eb2d: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 0072eb34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb35: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x72eb3au); f_00858009();
    /* 0072eb3a: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 0072eb3d: lea eax, [eax + eax + 2] */ r_eax = (u32)(r_eax+r_eax+0x2u);
    /* 0072eb41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb42: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x72eb47u); f_008581c5();
    /* 0072eb47: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb49: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 0072eb4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb4d: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72eb52u); f_00857dec();
    /* 0072eb52: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0072eb55:; BB(0x0072eb55);
    /* 0072eb55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072eb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072eb57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072eb58: ret 4 */ FN_RET(0x0072eb10); r_esp += 8; return;
}

void f_0072eb5c(void) /* sub_72EB5C */
{
    FN_ENTER(0x0072eb5c);
    /* 0072eb5c: mov dword ptr [0xa9a840], 0x3f800000 */ W32((u32)(0xa9a840u), 0x3f800000u);
    /* 0072eb66: mov dword ptr [0xa9a844], 0x41000000 */ W32((u32)(0xa9a844u), 0x41000000u);
    /* 0072eb70: mov dword ptr [0xa9a848], 0x3fc00000 */ W32((u32)(0xa9a848u), 0x3fc00000u);
    /* 0072eb7a: ret  */ FN_RET(0x0072eb5c); r_esp += 4; return;
}

void f_0072eb7c(void) /* sub_72EB7C */
{
    FN_ENTER(0x0072eb7c);
    /* 0072eb7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072eb7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072eb81: call 0x72eba0 */ r_esp -= 4; W32(r_esp, 0x72eb86u); f_0072eba0();
    /* 0072eb86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0072eb8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072eb8c: jne 0x72eb92 */ if (!fZ) goto L_0072eb92;
L_0072eb8e:; BB(0x0072eb8e);
    /* 0072eb8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072eb8f: ret 4 */ FN_RET(0x0072eb7c); r_esp += 8; return;
L_0072eb92:; BB(0x0072eb92);
    /* 0072eb92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072eb93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x72eb98u); f_005c2f74();
    /* 0072eb98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072eb99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072eb9a: ret 4 */ FN_RET(0x0072eb7c); r_esp += 8; return;
}

void f_0072eba0(void) /* sub_72EBA0 */
{
    FN_ENTER(0x0072eba0);
    /* 0072eba0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072eba1: mov ebp, esp */ r_ebp = r_esp;
    /* 0072eba3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072eba5: push 0x8f13bc */ { u32 v = 0x8f13bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0072ebaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072ebb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ebb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072ebb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ebbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072ebbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072ebc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072ebc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072ebc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072ebca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072ebd1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ebd4: mov dword ptr [eax], 0xb40548 */ W32((u32)(r_eax), 0xb40548u);
    /* 0072ebda: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72ebdfu); f_0070a5ec();
    /* 0072ebdf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0072ebe6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ebe9: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x72ebeeu); f_00710c28();
    /* 0072ebee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ebf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ebf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ebfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ebfb: ret  */ FN_RET(0x0072eba0); r_esp += 4; return;
}

void f_0072ebfc(void) /* sub_72EBFC */
{
    FN_ENTER(0x0072ebfc);
    /* 0072ebfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0072ebfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0072ebff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec01: push 0x8f13d8 */ { u32 v = 0x8f13d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0072ec0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0072ec14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ec17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0072ec1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0072ec1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0072ec20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0072ec23: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0072ec26: push 0x9f2c78 */ { u32 v = 0x9f2c78u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec2d: push 0x9f2c64 */ { u32 v = 0x9f2c64u; r_esp -= 4; W32(r_esp, v); }
    /* 0072ec32: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x72ec37u); f_00710d30();
    /* 0072ec37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0072ec3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ec41: fld dword ptr [0x970ff0] */ FPUSH(R_F32((u32)(0x970ff0u)));
    /* 0072ec47: fadd dword ptr [ecx + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x44u));
    /* 0072ec4a: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0072ec4d: fst dword ptr [ecx + 0x3fc] */ W_F32((u32)(r_ecx+0x3fcu), ST(0));
    /* 0072ec53: fstp dword ptr [ecx + 0x404] */ W_F32((u32)(r_ecx+0x404u), ST(0)); FPOP();
    /* 0072ec59: mov dword ptr [ecx], 0xb40548 */ W32((u32)(r_ecx), 0xb40548u);
    /* 0072ec5f: mov eax, dword ptr [0x9f2c60] */ r_eax = R32((u32)(0x9f2c60u));
    /* 0072ec64: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0072ec67: mov dword ptr [ecx + 0x3f8], edx */ W32((u32)(r_ecx+0x3f8u), r_edx);
    /* 0072ec6d: mov dword ptr [ecx + 0x400], edx */ W32((u32)(r_ecx+0x400u), r_edx);
    /* 0072ec73: call 0x84106c */ r_esp -= 4; W32(r_esp, 0x72ec78u); f_0084106c();
    /* 0072ec78: call 0x840b1c */ r_esp -= 4; W32(r_esp, 0x72ec7du); f_00840b1c();
    /* 0072ec7d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ec80: mov dword ptr [edx + 0x260], eax */ W32((u32)(r_edx+0x260u), r_eax);
    /* 0072ec86: call 0x840b2c */ r_esp -= 4; W32(r_esp, 0x72ec8bu); f_00840b2c();
    /* 0072ec8b: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ec8e: mov dword ptr [edx + 0x2e4], eax */ W32((u32)(r_edx+0x2e4u), r_eax);
    /* 0072ec94: call 0x840b34 */ r_esp -= 4; W32(r_esp, 0x72ec99u); f_00840b34();
    /* 0072ec99: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ec9c: mov dword ptr [edx + 0x2e8], eax */ W32((u32)(r_edx+0x2e8u), r_eax);
    /* 0072eca2: call 0x840b0c */ r_esp -= 4; W32(r_esp, 0x72eca7u); f_00840b0c();
    /* 0072eca7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ecaa: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072ecac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ecad: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072ecb0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ecb1: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72ecb6u); f_00857dec();
    /* 0072ecb6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072ecb9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ecbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ecbe: mov word ptr [edx + 0x15e], ax */ W16((u32)(r_edx+0x15eu), (u16)r_eax);
    /* 0072ecc5: call 0x840b14 */ r_esp -= 4; W32(r_esp, 0x72eccau); f_00840b14();
    /* 0072ecca: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072eccd: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 0072eccf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072ecd0: add edx, 0x160 */ {  u32 a = r_edx; u32 b = 0x160u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072ecd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ecd7: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x72ecdcu); f_00857dec();
    /* 0072ecdc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072ecdf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ece2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ece4: mov word ptr [edx + 0x25e], ax */ W16((u32)(r_edx+0x25eu), (u16)r_eax);
    /* 0072eceb: call 0x840b24 */ r_esp -= 4; W32(r_esp, 0x72ecf0u); f_00840b24();
    /* 0072ecf0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072ecf3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0072ecf5:; BB(0x0072ecf5);
    /* 0072ecf5: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 0072ecf8: mov byte ptr [ecx + edx + 0x264], bl */ W8((u32)(r_ecx+r_edx+0x264u), (u8)r_ebx);
    /* 0072ecff: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 0072ed03: mov byte ptr [ecx + edx + 0x265], bl */ W8((u32)(r_ecx+r_edx+0x265u), (u8)r_ebx);
    /* 0072ed0a: movzx ebx, byte ptr [eax + 2] */ r_ebx = (u32)R8((u32)(r_eax+0x2u));
    /* 0072ed0e: mov byte ptr [ecx + edx + 0x266], bl */ W8((u32)(r_ecx+r_edx+0x266u), (u8)r_ebx);
    /* 0072ed15: movzx ebx, byte ptr [eax + 3] */ r_ebx = (u32)R8((u32)(r_eax+0x3u));
    /* 0072ed19: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ed1c: mov byte ptr [ecx + edx + 0x267], bl */ W8((u32)(r_ecx+r_edx+0x267u), (u8)r_ebx);
    /* 0072ed23: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072ed26: cmp edx, 0x7b */ {  u32 a = r_edx; u32 b = 0x7bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ed29: jl 0x72ecf5 */ if ((fS!=fO)) goto L_0072ecf5;
L_0072ed2b:; BB(0x0072ed2b);
    /* 0072ed2b: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 0072ed2e: mov byte ptr [ecx + edx + 0x264], bl */ W8((u32)(r_ecx+r_edx+0x264u), (u8)r_ebx);
    /* 0072ed35: movzx ebx, byte ptr [eax + 1] */ r_ebx = (u32)R8((u32)(r_eax+0x1u));
    /* 0072ed39: mov byte ptr [ecx + edx + 0x265], bl */ W8((u32)(r_ecx+r_edx+0x265u), (u8)r_ebx);
    /* 0072ed40: movzx eax, byte ptr [eax + 2] */ r_eax = (u32)R8((u32)(r_eax+0x2u));
    /* 0072ed44: mov byte ptr [ecx + edx + 0x266], al */ W8((u32)(r_ecx+r_edx+0x266u), (u8)r_eax);
    /* 0072ed4b: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 0072ed51: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ed57: je 0x72edc5 */ if (fZ) goto L_0072edc5;
L_0072ed59:; BB(0x0072ed59);
    /* 0072ed59: movzx eax, word ptr [ecx + 0x60] */ r_eax = (u32)R16((u32)(r_ecx+0x60u));
    /* 0072ed5d: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ed60: jl 0x72ed67 */ if ((fS!=fO)) goto L_0072ed67;
L_0072ed62:; BB(0x0072ed62);
    /* 0072ed62: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ed65: jle 0x72ed80 */ if ((fZ||fS!=fO)) goto L_0072ed80;
L_0072ed67:; BB(0x0072ed67);
    /* 0072ed67: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ed6a: jl 0x72ed7a */ if ((fS!=fO)) goto L_0072ed7a;
L_0072ed6c:; BB(0x0072ed6c);
    /* 0072ed6c: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ed6f: jg 0x72ed7a */ if ((!fZ&&fS==fO)) goto L_0072ed7a;
L_0072ed71:; BB(0x0072ed71);
    /* 0072ed71: add eax, -0x20 */ {  u32 a = r_eax; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ed74: mov word ptr [ecx + 0x60], ax */ W16((u32)(r_ecx+0x60u), (u16)r_eax);
    /* 0072ed78: jmp 0x72ed80 */ goto L_0072ed80;
L_0072ed7a:; BB(0x0072ed7a);
    /* 0072ed7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ed7c: mov word ptr [ecx + 0x60], ax */ W16((u32)(r_ecx+0x60u), (u16)r_eax);
L_0072ed80:; BB(0x0072ed80);
    /* 0072ed80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ed82: mov word ptr [ecx + 0x62], ax */ W16((u32)(r_ecx+0x62u), (u16)r_eax);
    /* 0072ed86: mov word ptr [ecx + 0x162], ax */ W16((u32)(r_ecx+0x162u), (u16)r_eax);
    /* 0072ed8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0072ed8f:; BB(0x0072ed8f);
    /* 0072ed8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ed91: mov byte ptr [ecx + edx + 0x264], al */ W8((u32)(r_ecx+r_edx+0x264u), (u8)r_eax);
    /* 0072ed98: mov byte ptr [ecx + edx + 0x265], al */ W8((u32)(r_ecx+r_edx+0x265u), (u8)r_eax);
    /* 0072ed9f: mov byte ptr [ecx + edx + 0x266], al */ W8((u32)(r_ecx+r_edx+0x266u), (u8)r_eax);
    /* 0072eda6: mov byte ptr [ecx + edx + 0x267], al */ W8((u32)(r_ecx+r_edx+0x267u), (u8)r_eax);
    /* 0072edad: mov byte ptr [ecx + edx + 0x268], al */ W8((u32)(r_ecx+r_edx+0x268u), (u8)r_eax);
    /* 0072edb4: mov byte ptr [ecx + edx + 0x269], al */ W8((u32)(r_ecx+r_edx+0x269u), (u8)r_eax);
    /* 0072edbb: add edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072edbe: cmp edx, 0x79 */ {  u32 a = r_edx; u32 b = 0x79u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072edc1: jl 0x72ed8f */ if ((fS!=fO)) goto L_0072ed8f;
L_0072edc3:; BB(0x0072edc3);
    /* 0072edc3: jmp 0x72ee1b */ goto L_0072ee1b;
L_0072edc5:; BB(0x0072edc5);
    /* 0072edc5: mov dword ptr [ecx + 0x3f4], 0x7f */ W32((u32)(r_ecx+0x3f4u), 0x7fu);
    /* 0072edcf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072edd1: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 0072edd7: mov dword ptr [ecx + 0x408], eax */ W32((u32)(r_ecx+0x408u), r_eax);
    /* 0072eddd: mov dword ptr [ecx + 0x518], 2 */ W32((u32)(r_ecx+0x518u), 0x2u);
    /* 0072ede7: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x72edecu); f_0072ee28();
    /* 0072edec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0072edef: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0072edf2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0072edf5: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0072edf8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072edfa: mov word ptr [eax + 0x51c], dx */ W16((u32)(r_eax+0x51cu), (u16)r_edx);
    /* 0072ee01: mov dword ptr [eax + 0x61c], edx */ W32((u32)(r_eax+0x61cu), r_edx);
    /* 0072ee07: mov dword ptr [eax + 0x620], edx */ W32((u32)(r_eax+0x620u), r_edx);
    /* 0072ee0d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0072ee10: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0072ee17: mov esp, ebp */ r_esp = r_ebp;
    /* 0072ee19: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0072ee1a: ret  */ FN_RET(0x0072ebfc); r_esp += 4; return;
L_0072ee1b:; BB(0x0072ee1b);
    /* 0072ee1b: mov byte ptr [ecx + edx + 0x264], 0 */ W8((u32)(r_ecx+r_edx+0x264u), 0x0u);
    /* 0072ee23: jmp 0x72edc5 */ goto L_0072edc5;
}

void f_0072ee28(void) /* sub_72EE28 */
{
    FN_ENTER(0x0072ee28);
    /* 0072ee28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ee29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ee2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ee2d: mov word ptr [ebx + 0x2ec], ax */ W16((u32)(r_ebx+0x2ecu), (u16)r_eax);
    /* 0072ee34: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 0072ee3a: mov word ptr [ebx + 0x160], ax */ W16((u32)(r_ebx+0x160u), (u16)r_eax);
    /* 0072ee41: call 0x84128c */ r_esp -= 4; W32(r_esp, 0x72ee46u); f_0084128c();
    /* 0072ee46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072ee48: mov word ptr [ebx + 0x418], ax */ W16((u32)(r_ebx+0x418u), (u16)r_eax);
    /* 0072ee4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ee50: ret  */ FN_RET(0x0072ee28); r_esp += 4; return;
}

void f_0072ee54(void) /* sub_72EE54 */
{
    FN_ENTER(0x0072ee54);
    /* 0072ee54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ee55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ee56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0072ee57: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0072ee5a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0072ee5c: mov eax, dword ptr [ebx + 0x518] */ r_eax = R32((u32)(r_ebx+0x518u));
    /* 0072ee62: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ee65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ee67: jl 0x72f1ff */ if ((fS!=fO)) goto L_0072f1ff;
L_0072ee6d:; BB(0x0072ee6d);
    /* 0072ee6d: mov dword ptr [ebx + 0x518], eax */ W32((u32)(r_ebx+0x518u), r_eax);
L_0072ee73:; BB(0x0072ee73);
    /* 0072ee73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072ee75: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x72ee7au); f_00710db4();
    /* 0072ee7a: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 0072ee7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ee7f: je 0x72eecb */ if (fZ) goto L_0072eecb;
L_0072ee81:; BB(0x0072ee81);
    /* 0072ee81: fld dword ptr [ebx + 0x400] */ FPUSH(R_F32((u32)(r_ebx+0x400u)));
    /* 0072ee87: fld dword ptr [ebx + 0x3f8] */ FPUSH(R_F32((u32)(r_ebx+0x3f8u)));
    /* 0072ee8d: fld dword ptr [ebx + 0x404] */ FPUSH(R_F32((u32)(r_ebx+0x404u)));
    /* 0072ee93: fld dword ptr [ebx + 0x3fc] */ FPUSH(R_F32((u32)(r_ebx+0x3fcu)));
    /* 0072ee99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072ee9b: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0072ee9d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072ee9f: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0072eea1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0072eea4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0072eea7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072eeaa: fadd dword ptr [eax*4 + 0x970f88] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970f88u));
    /* 0072eeb1: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0072eeb3: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0072eeb5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072eeb7: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0072eeb9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0072eebb: fstp dword ptr [ebx + 0x400] */ W_F32((u32)(r_ebx+0x400u), ST(0)); FPOP();
    /* 0072eec1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0072eec3: fstp dword ptr [ebx + 0x404] */ W_F32((u32)(r_ebx+0x404u), ST(0)); FPOP();
    /* 0072eec9: jmp 0x72eed2 */ goto L_0072eed2;
L_0072eecb:; BB(0x0072eecb);
    /* 0072eecb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072eecd: call 0x72f210 */ r_esp -= 4; W32(r_esp, 0x72eed2u); f_0072f210();
L_0072eed2:; BB(0x0072eed2);
    /* 0072eed2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072eed4: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x72eed9u); f_00710ee4();
    /* 0072eed9: mov edx, 0x40 */ r_edx = 0x40u;
    /* 0072eede: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072eee0: mov esi, eax */ r_esi = r_eax;
    /* 0072eee2: mov edi, edx */ r_edi = r_edx;
L_0072eee4:; BB(0x0072eee4);
    /* 0072eee4: call 0x8411f0 */ r_esp -= 4; W32(r_esp, 0x72eee9u); f_008411f0();
    /* 0072eee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072eeeb: je 0x72eef7 */ if (fZ) goto L_0072eef7;
L_0072eeed:; BB(0x0072eeed);
    /* 0072eeed: mov ecx, dword ptr [ebx + 0x620] */ r_ecx = R32((u32)(r_ebx+0x620u));
    /* 0072eef3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072eef5: jg 0x72ef19 */ if ((!fZ&&fS==fO)) goto L_0072ef19;
L_0072eef7:; BB(0x0072eef7);
    /* 0072eef7: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72eefcu); f_0082d2a4();
    /* 0072eefc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072eefe: je 0x72ef0a */ if (fZ) goto L_0072ef0a;
L_0072ef00:; BB(0x0072ef00);
    /* 0072ef00: mov ecx, dword ptr [ebx + 0x620] */ r_ecx = R32((u32)(r_ebx+0x620u));
    /* 0072ef06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ef08: jg 0x72ef19 */ if ((!fZ&&fS==fO)) goto L_0072ef19;
L_0072ef0a:; BB(0x0072ef0a);
    /* 0072ef0a: cmp edi, dword ptr [ebx + 0x414] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x414u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ef10: je 0x72ef19 */ if (fZ) goto L_0072ef19;
L_0072ef12:; BB(0x0072ef12);
    /* 0072ef12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0072ef13: call 0x7bfe50 */ r_esp -= 4; W32(r_esp, 0x72ef18u); f_007bfe50();
    /* 0072ef18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0072ef19:; BB(0x0072ef19);
    /* 0072ef19: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0072ef1c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0072ef1f: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0072ef22: jl 0x72eee4 */ if ((fS!=fO)) goto L_0072eee4;
L_0072ef24:; BB(0x0072ef24);
    /* 0072ef24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072ef26: call 0x72f22c */ r_esp -= 4; W32(r_esp, 0x72ef2bu); f_0072f22c();
    /* 0072ef2b: mov edx, dword ptr [ebx + 0x3f0] */ r_edx = R32((u32)(r_ebx+0x3f0u));
    /* 0072ef31: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ef34: je 0x72ef3a */ if (fZ) goto L_0072ef3a;
L_0072ef36:; BB(0x0072ef36);
    /* 0072ef36: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072ef38: jmp 0x72ef40 */ goto L_0072ef40;
L_0072ef3a:; BB(0x0072ef3a);
    /* 0072ef3a: mov eax, dword ptr [ebx + 0x408] */ r_eax = R32((u32)(r_ebx+0x408u));
L_0072ef40:; BB(0x0072ef40);
    /* 0072ef40: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ef43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ef45: jl 0x72f1e6 */ if ((fS!=fO)) goto L_0072f1e6;
L_0072ef4b:; BB(0x0072ef4b);
    /* 0072ef4b: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0072ef51: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_0072ef57:; BB(0x0072ef57);
    /* 0072ef57: and edx, 0xffffffe7 */ {  u32 a = r_edx; u32 b = 0xffffffe7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072ef5a: test dl, 0x22 */ {  u32 a = (u8)r_edx; u32 b = 0x22u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ef5d: je 0x72ef75 */ if (fZ) goto L_0072ef75;
L_0072ef5f:; BB(0x0072ef5f);
    /* 0072ef5f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072ef62: jne 0x72f159 */ if (!fZ) goto L_0072f159;
L_0072ef68:; BB(0x0072ef68);
    /* 0072ef68: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0072ef6e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072ef71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072ef72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072ef73: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072ef74: ret  */ FN_RET(0x0072ee54); r_esp += 4; return;
L_0072ef75:; BB(0x0072ef75);
    /* 0072ef75: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0072ef7b: call 0x841300 */ r_esp -= 4; W32(r_esp, 0x72ef80u); f_00841300();
    /* 0072ef80: call 0x841050 */ r_esp -= 4; W32(r_esp, 0x72ef85u); f_00841050();
    /* 0072ef85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ef87: jne 0x72efa7 */ if (!fZ) goto L_0072efa7;
L_0072ef89:; BB(0x0072ef89);
    /* 0072ef89: call 0x841058 */ r_esp -= 4; W32(r_esp, 0x72ef8eu); f_00841058();
    /* 0072ef8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072ef90: jne 0x72efa7 */ if (!fZ) goto L_0072efa7;
L_0072ef92:; BB(0x0072ef92);
    /* 0072ef92: mov eax, dword ptr [ebx + 0x620] */ r_eax = R32((u32)(r_ebx+0x620u));
    /* 0072ef98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072ef9a: jle 0x72efc2 */ if ((fZ||fS!=fO)) goto L_0072efc2;
L_0072ef9c:; BB(0x0072ef9c);
    /* 0072ef9c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0072ef9f: mov dword ptr [ebx + 0x620], eax */ W32((u32)(r_ebx+0x620u), r_eax);
    /* 0072efa5: jmp 0x72efc2 */ goto L_0072efc2;
L_0072efa7:; BB(0x0072efa7);
    /* 0072efa7: call 0x82d2a4 */ r_esp -= 4; W32(r_esp, 0x72efacu); f_0082d2a4();
    /* 0072efac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072efae: je 0x72efb7 */ if (fZ) goto L_0072efb7;
L_0072efb0:; BB(0x0072efb0);
    /* 0072efb0: mov eax, 2 */ r_eax = 0x2u;
    /* 0072efb5: jmp 0x72efbc */ goto L_0072efbc;
L_0072efb7:; BB(0x0072efb7);
    /* 0072efb7: mov eax, 1 */ r_eax = 0x1u;
L_0072efbc:; BB(0x0072efbc);
    /* 0072efbc: mov dword ptr [ebx + 0x620], eax */ W32((u32)(r_ebx+0x620u), r_eax);
L_0072efc2:; BB(0x0072efc2);
    /* 0072efc2: call 0x841060 */ r_esp -= 4; W32(r_esp, 0x72efc7u); f_00841060();
    /* 0072efc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072efc9: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72efceu); f_0072f248();
    /* 0072efce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072efd0: call 0x72f280 */ r_esp -= 4; W32(r_esp, 0x72efd5u); f_0072f280();
    /* 0072efd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072efd7: je 0x72eff3 */ if (fZ) goto L_0072eff3;
L_0072efd9:; BB(0x0072efd9);
    /* 0072efd9: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072efdf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072efe1: jne 0x72f193 */ if (!fZ) goto L_0072f193;
L_0072efe7:; BB(0x0072efe7);
    /* 0072efe7: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x72efecu); f_00841720();
    /* 0072efec: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072efef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072eff0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072eff1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072eff2: ret  */ FN_RET(0x0072ee54); r_esp += 4; return;
L_0072eff3:; BB(0x0072eff3);
    /* 0072eff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072eff5: call 0x72f2d8 */ r_esp -= 4; W32(r_esp, 0x72effau); f_0072f2d8();
    /* 0072effa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072effc: je 0x72f018 */ if (fZ) goto L_0072f018;
L_0072effe:; BB(0x0072effe);
    /* 0072effe: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f004: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072f006: jne 0x72f1bf */ if (!fZ) goto L_0072f1bf;
L_0072f00c:; BB(0x0072f00c);
    /* 0072f00c: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x72f011u); f_00841720();
    /* 0072f011: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072f014: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f015: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f016: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f017: ret  */ FN_RET(0x0072ee54); r_esp += 4; return;
L_0072f018:; BB(0x0072f018);
    /* 0072f018: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f01d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f023: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f028u); f_007be19c();
    /* 0072f028: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f02b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f02d: je 0x72f038 */ if (fZ) goto L_0072f038;
L_0072f02f:; BB(0x0072f02f);
    /* 0072f02f: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x72f034u); f_007c00c4();
    /* 0072f034: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f036: jne 0x72f060 */ if (!fZ) goto L_0072f060;
L_0072f038:; BB(0x0072f038);
    /* 0072f038: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f03d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f043: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f048u); f_007be19c();
    /* 0072f048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f04b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f04d: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f053:; BB(0x0072f053);
    /* 0072f053: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x72f058u); f_007c00c4();
    /* 0072f058: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f05a: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f060:; BB(0x0072f060);
    /* 0072f060: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72f065u); f_00791b48();
    /* 0072f065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f067: je 0x72f133 */ if (fZ) goto L_0072f133;
L_0072f06d:; BB(0x0072f06d);
    /* 0072f06d: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x72f072u); f_00791b48();
    /* 0072f072: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f074: mov ecx, eax */ r_ecx = r_eax;
    /* 0072f076: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x72f07bu); f_0078fd68();
    /* 0072f07b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f07d: je 0x72f133 */ if (fZ) goto L_0072f133;
L_0072f083:; BB(0x0072f083);
    /* 0072f083: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x72f088u); f_007c00dc();
    /* 0072f088: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f08a: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f090:; BB(0x0072f090);
    /* 0072f090: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x72f095u); f_007c00d0();
    /* 0072f095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f097: jne 0x72f133 */ if (!fZ) goto L_0072f133;
L_0072f09d:; BB(0x0072f09d);
    /* 0072f09d: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0a2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0a8: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x72f0adu); f_007be19c();
    /* 0072f0ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f0b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072f0b2: je 0x72f0cb */ if (fZ) goto L_0072f0cb;
L_0072f0b4:; BB(0x0072f0b4);
    /* 0072f0b4: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0bb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0c1: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x72f0c6u); f_007be17c();
    /* 0072f0c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0072f0c9: jmp 0x72f0e3 */ goto L_0072f0e3;
L_0072f0cb:; BB(0x0072f0cb);
    /* 0072f0cb: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0d0: push 0x1000000 */ { u32 v = 0x1000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0072f0d5: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0072f0db: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x72f0e0u); f_007be17c();
    /* 0072f0e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0072f0e3:; BB(0x0072f0e3);
    /* 0072f0e3: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f0e9: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072f0ec: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f0f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f0f4: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f0f9u); f_0072f248();
    /* 0072f0f9: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f0ff: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f102: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f108: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72f10du); f_00793228();
    /* 0072f10d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072f110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f111: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72f116u); f_00841978();
    /* 0072f116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f117: call 0x840b84 */ r_esp -= 4; W32(r_esp, 0x72f11cu); f_00840b84();
    /* 0072f11c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f11e: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x72f123u); f_0072ee28();
    /* 0072f123: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72f128u); f_0070a5ec();
    /* 0072f128: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0072f12e: call 0x7f26d4 */ r_esp -= 4; W32(r_esp, 0x72f133u); f_007f26d4();
L_0072f133:; BB(0x0072f133);
    /* 0072f133: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f139: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072f13b: je 0x72f146 */ if (fZ) goto L_0072f146;
L_0072f13d:; BB(0x0072f13d);
    /* 0072f13d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f13f: call 0x72fdd0 */ r_esp -= 4; W32(r_esp, 0x72f144u); f_0072fdd0();
    /* 0072f144: jmp 0x72f14d */ goto L_0072f14d;
L_0072f146:; BB(0x0072f146);
    /* 0072f146: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f148: call 0x72f37c */ r_esp -= 4; W32(r_esp, 0x72f14du); f_0072f37c();
L_0072f14d:; BB(0x0072f14d);
    /* 0072f14d: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x72f152u); f_00841720();
    /* 0072f152: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072f155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f156: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f157: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f158: ret  */ FN_RET(0x0072ee54); r_esp += 4; return;
L_0072f159:; BB(0x0072f159);
    /* 0072f159: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072f15c: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 0072f162: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f164: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f169u); f_0072f248();
    /* 0072f169: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 0072f16f: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f172: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f178: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72f17du); f_00793228();
    /* 0072f17d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072f180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f181: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72f186u); f_00841978();
    /* 0072f186: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f187: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72f18cu); f_0070a5ec();
    /* 0072f18c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0072f18f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0072f190: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0072f191: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0072f192: ret  */ FN_RET(0x0072ee54); r_esp += 4; return;
L_0072f193:; BB(0x0072f193);
    /* 0072f193: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f196: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072f199: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f19f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f1a1: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f1a6u); f_0072f248();
    /* 0072f1a6: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72f1abu); f_00793228();
    /* 0072f1ab: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072f1ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f1af: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72f1b4u); f_00841978();
    /* 0072f1b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f1b5: call 0x70a5ec */ r_esp -= 4; W32(r_esp, 0x72f1bau); f_0070a5ec();
    /* 0072f1ba: jmp 0x72efe7 */ goto L_0072efe7;
L_0072f1bf:; BB(0x0072f1bf);
    /* 0072f1bf: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072f1c2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0072f1c5: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 0072f1cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0072f1cd: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x72f1d2u); f_0072f248();
    /* 0072f1d2: call 0x793228 */ r_esp -= 4; W32(r_esp, 0x72f1d7u); f_00793228();
    /* 0072f1d7: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0072f1da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072f1db: call 0x841978 */ r_esp -= 4; W32(r_esp, 0x72f1e0u); f_00841978();
    /* 0072f1e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0072f1e1: jmp 0x72f00c */ goto L_0072f00c;
L_0072f1e6:; BB(0x0072f1e6);
    /* 0072f1e6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072f1e8: mov dword ptr [ebx + 0x408], eax */ W32((u32)(r_ebx+0x408u), r_eax);
    /* 0072f1ee: mov dword ptr [ebx + 0x61c], eax */ W32((u32)(r_ebx+0x61cu), r_eax);
    /* 0072f1f4: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0072f1fa: jmp 0x72ef57 */ goto L_0072ef57;
L_0072f1ff:; BB(0x0072f1ff);
    /* 0072f1ff: mov dword ptr [ebx + 0x518], 0 */ W32((u32)(r_ebx+0x518u), 0x0u);
    /* 0072f209: jmp 0x72ee73 */ goto L_0072ee73;
}

