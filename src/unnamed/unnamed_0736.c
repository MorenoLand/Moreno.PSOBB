#include "protos.h"

void f_0073600c(void) /* sub_73600C */
{
    FN_ENTER(0x0073600c);
    /* 0073600c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073600d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073600f: movzx eax, word ptr [ebp + 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0x84u));
    /* 00736016: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736018: je 0x73601c */ if (fZ) goto L_0073601c;
L_0073601a:; BB(0x0073601a);
    /* 0073601a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073601b: ret  */ FN_RET(0x0073600c); r_esp += 4; return;
L_0073601c:; BB(0x0073601c);
    /* 0073601c: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736021: mov word ptr [ebp + 0x84], ax */ W16((u32)(r_ebp+0x84u), (u16)r_eax);
    /* 00736028: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073602a: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x73602fu); f_00735254();
    /* 0073602f: fld dword ptr [0x97143c] */ FPUSH(R_F32((u32)(0x97143cu)));
    /* 00736035: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00736038: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0073603b: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073603e: je 0x73604d */ if (fZ) goto L_0073604d;
L_00736040:; BB(0x00736040);
    /* 00736040: fld dword ptr [0x971438] */ FPUSH(R_F32((u32)(0x971438u)));
    /* 00736046: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736048: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0073604b: jmp 0x736050 */ goto L_00736050;
L_0073604d:; BB(0x0073604d);
    /* 0073604d: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_00736050:; BB(0x00736050);
    /* 00736050: mov dword ptr [ebp + 0x50], 3 */ W32((u32)(r_ebp+0x50u), 0x3u);
    /* 00736057: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736058: ret  */ FN_RET(0x0073600c); r_esp += 4; return;
}

void f_0073605c(void) /* sub_73605C */
{
    FN_ENTER(0x0073605c);
    /* 0073605c: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00736063: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736065: jne 0x736068 */ if (!fZ) goto L_00736068;
L_00736067:; BB(0x00736067);
    /* 00736067: ret  */ FN_RET(0x0073605c); r_esp += 4; return;
L_00736068:; BB(0x00736068);
    /* 00736068: fld dword ptr [0x971434] */ FPUSH(R_F32((u32)(0x971434u)));
    /* 0073606e: fadd dword ptr [ecx + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x90u));
    /* 00736074: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00736077: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073607c: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00736083: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 0073608a: ret  */ FN_RET(0x0073605c); r_esp += 4; return;
}

void f_0073608c(void) /* sub_73608C */
{
    FN_ENTER(0x0073608c);
    /* 0073608c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073608d: mov ebx, esp */ r_ebx = r_esp;
    /* 0073608f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00736092: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00736093: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00736096: movsx ebp, word ptr [ecx + 0x8a] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 0073609d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073609f: fld dword ptr [0x971428] */ FPUSH(R_F32((u32)(0x971428u)));
    /* 007360a5: fld dword ptr [0x971428] */ FPUSH(R_F32((u32)(0x971428u)));
    /* 007360ab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007360ad: jbe 0x7360ff */ if ((fC||fZ)) goto L_007360ff;
L_007360af:; BB(0x007360af);
    /* 007360af: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 007360b2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007360b5: mov esi, eax */ r_esi = r_eax;
    /* 007360b7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_007360bb:; BB(0x007360bb);
    /* 007360bb: mov edi, dword ptr [edx + esi*4] */ r_edi = R32((u32)(r_edx+r_esi*4));
    /* 007360be: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007360c1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007360c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007360c6: je 0x7360f4 */ if (fZ) goto L_007360f4;
L_007360c8:; BB(0x007360c8);
    /* 007360c8: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 007360cb: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007360cd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007360cf: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 007360d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007360d3: fcom qword ptr [0x971380] */ fx_compare(ST(0), R_F64((u32)(0x971380u))); 
    /* 007360d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007360db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007360dd: jbe 0x7360e1 */ if ((fC||fZ)) goto L_007360e1;
L_007360df:; BB(0x007360df);
    /* 007360df: fst st(3) */ ST(3) = ST(0);
L_007360e1:; BB(0x007360e1);
    /* 007360e1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007360e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007360e4: ja 0x7360ea */ if ((!fC&&!fZ)) goto L_007360ea;
L_007360e6:; BB(0x007360e6);
    /* 007360e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007360e8: jmp 0x7360f4 */ goto L_007360f4;
L_007360ea:; BB(0x007360ea);
    /* 007360ea: fld dword ptr [0x971424] */ FPUSH(R_F32((u32)(0x971424u)));
    /* 007360f0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007360f2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_007360f4:; BB(0x007360f4);
    /* 007360f4: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007360f6: jb 0x7360bb */ if (fC) goto L_007360bb;
L_007360f8:; BB(0x007360f8);
    /* 007360f8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 007360fb: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_007360ff:; BB(0x007360ff);
    /* 007360ff: fadd dword ptr [0x971420] */ ST(0) = ST(0) + R_F32((u32)(0x971420u));
    /* 00736105: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00736108: fst dword ptr [ecx + 0x90] */ W_F32((u32)(r_ecx+0x90u), ST(0));
    /* 0073610e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736110: je 0x736118 */ if (fZ) goto L_00736118;
L_00736112:; BB(0x00736112);
    /* 00736112: fadd dword ptr [0x971424] */ ST(0) = ST(0) + R_F32((u32)(0x971424u));
L_00736118:; BB(0x00736118);
    /* 00736118: fld dword ptr [0x97141c] */ FPUSH(R_F32((u32)(0x97141cu)));
    /* 0073611e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00736120: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00736122: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 00736125: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736127: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0073612a: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x73612fu); f_00710f64();
    /* 0073612f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736132: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736133: mov esp, ebx */ r_esp = r_ebx;
    /* 00736135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00736136: ret  */ FN_RET(0x0073608c); r_esp += 4; return;
}

void f_00736138(void) /* sub_736138 */
{
    FN_ENTER(0x00736138);
    /* 00736138: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736139: mov ebx, esp */ r_ebx = r_esp;
    /* 0073613b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0073613e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073613f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00736142: movsx ebp, word ptr [ecx + 0x8a] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00736149: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073614b: fld dword ptr [0x971418] */ FPUSH(R_F32((u32)(0x971418u)));
    /* 00736151: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00736153: jbe 0x736195 */ if ((fC||fZ)) goto L_00736195;
L_00736155:; BB(0x00736155);
    /* 00736155: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00736158: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0073615b: mov esi, eax */ r_esi = r_eax;
    /* 0073615d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_00736161:; BB(0x00736161);
    /* 00736161: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 00736164: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 00736167: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073616a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073616c: je 0x73618a */ if (fZ) goto L_0073618a;
L_0073616e:; BB(0x0073616e);
    /* 0073616e: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00736171: fcom qword ptr [0x971378] */ fx_compare(ST(0), R_F64((u32)(0x971378u))); 
    /* 00736177: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736179: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073617a: ja 0x736180 */ if ((!fC&&!fZ)) goto L_00736180;
L_0073617c:; BB(0x0073617c);
    /* 0073617c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073617e: jmp 0x73618a */ goto L_0073618a;
L_00736180:; BB(0x00736180);
    /* 00736180: fld dword ptr [0x971414] */ FPUSH(R_F32((u32)(0x971414u)));
    /* 00736186: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736188: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0073618a:; BB(0x0073618a);
    /* 0073618a: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073618c: jb 0x736161 */ if (fC) goto L_00736161;
L_0073618e:; BB(0x0073618e);
    /* 0073618e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00736191: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_00736195:; BB(0x00736195);
    /* 00736195: fadd dword ptr [0x971410] */ ST(0) = ST(0) + R_F32((u32)(0x971410u));
    /* 0073619b: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0073619e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007361a0: je 0x7361a8 */ if (fZ) goto L_007361a8;
L_007361a2:; BB(0x007361a2);
    /* 007361a2: fadd dword ptr [0x971414] */ ST(0) = ST(0) + R_F32((u32)(0x971414u));
L_007361a8:; BB(0x007361a8);
    /* 007361a8: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007361ab: fld dword ptr [0x97140c] */ FPUSH(R_F32((u32)(0x97140cu)));
    /* 007361b1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007361b3: fst dword ptr [ecx + 0x90] */ W_F32((u32)(r_ecx+0x90u), ST(0));
    /* 007361b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007361bb: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 007361be: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007361c1: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x7361c6u); f_00710f64();
    /* 007361c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007361c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007361ca: mov esp, ebx */ r_esp = r_ebx;
    /* 007361cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007361cd: ret 4 */ FN_RET(0x00736138); r_esp += 8; return;
}

void f_007361d0(void) /* sub_7361D0 */
{
    FN_ENTER(0x007361d0);
    /* 007361d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007361d1: mov ebx, esp */ r_ebx = r_esp;
    /* 007361d3: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 007361d6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007361d7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007361da: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007361dc: movsx ecx, word ptr [ebp + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8au));
    /* 007361e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007361e5: fld dword ptr [0x971408] */ FPUSH(R_F32((u32)(0x971408u)));
    /* 007361eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007361ed: jbe 0x73622f */ if ((fC||fZ)) goto L_0073622f;
L_007361ef:; BB(0x007361ef);
    /* 007361ef: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007361f2: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007361f5: mov esi, eax */ r_esi = r_eax;
    /* 007361f7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
L_007361fb:; BB(0x007361fb);
    /* 007361fb: mov eax, dword ptr [edx + esi*4] */ r_eax = R32((u32)(r_edx+r_esi*4));
    /* 007361fe: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 00736201: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00736204: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736206: je 0x736224 */ if (fZ) goto L_00736224;
L_00736208:; BB(0x00736208);
    /* 00736208: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0073620b: fcom qword ptr [0x971370] */ fx_compare(ST(0), R_F64((u32)(0x971370u))); 
    /* 00736211: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736213: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736214: ja 0x73621a */ if ((!fC&&!fZ)) goto L_0073621a;
L_00736216:; BB(0x00736216);
    /* 00736216: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736218: jmp 0x736224 */ goto L_00736224;
L_0073621a:; BB(0x0073621a);
    /* 0073621a: fld dword ptr [0x971404] */ FPUSH(R_F32((u32)(0x971404u)));
    /* 00736220: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736222: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00736224:; BB(0x00736224);
    /* 00736224: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00736226: jb 0x7361fb */ if (fC) goto L_007361fb;
L_00736228:; BB(0x00736228);
    /* 00736228: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0073622b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_0073622f:; BB(0x0073622f);
    /* 0073622f: fadd dword ptr [0x971400] */ ST(0) = ST(0) + R_F32((u32)(0x971400u));
    /* 00736235: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 00736238: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073623a: je 0x736242 */ if (fZ) goto L_00736242;
L_0073623c:; BB(0x0073623c);
    /* 0073623c: fadd dword ptr [0x971404] */ ST(0) = ST(0) + R_F32((u32)(0x971404u));
L_00736242:; BB(0x00736242);
    /* 00736242: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 00736245: fld dword ptr [0x9713fc] */ FPUSH(R_F32((u32)(0x9713fcu)));
    /* 0073624b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073624d: fst dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0));
    /* 00736253: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736255: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00736258: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0073625b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073625d: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x736262u); f_00710f64();
    /* 00736262: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00736265: fcomp dword ptr [ebp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3cu))); FPOP();
    /* 00736268: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073626a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073626b: jae 0x736274 */ if (!fC) goto L_00736274;
L_0073626d:; BB(0x0073626d);
    /* 0073626d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073626f: call 0x7362a4 */ r_esp -= 4; W32(r_esp, 0x736274u); f_007362a4();
L_00736274:; BB(0x00736274);
    /* 00736274: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00736277: fld dword ptr [0x9713f8] */ FPUSH(R_F32((u32)(0x9713f8u)));
    /* 0073627d: fadd dword ptr [ebx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xcu));
    /* 00736280: fstp dword ptr [ebp + 0x90] */ W_F32((u32)(r_ebp+0x90u), ST(0)); FPOP();
    /* 00736286: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00736289: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073628b: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x736290u); f_00710f64();
    /* 00736290: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736292: call 0x736358 */ r_esp -= 4; W32(r_esp, 0x736297u); f_00736358();
    /* 00736297: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073629a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073629b: mov esp, ebx */ r_esp = r_ebx;
    /* 0073629d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073629e: ret 8 */ FN_RET(0x007361d0); r_esp += 12; return;
}

void f_007362a4(void) /* sub_7362A4 */
{
    FN_ENTER(0x007362a4);
    /* 007362a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007362a5: mov ebp, esp */ r_ebp = r_esp;
    /* 007362a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007362a9: push 0x8f19cc */ { u32 v = 0x8f19ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007362ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007362b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007362b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007362bc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007362bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007362c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007362c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007362c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007362cb: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 007362ce: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007362d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007362d3: je 0x7362e3 */ if (fZ) goto L_007362e3;
L_007362d5:; BB(0x007362d5);
    /* 007362d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007362d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007362df: mov esp, ebp */ r_esp = r_ebp;
    /* 007362e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007362e2: ret  */ FN_RET(0x007362a4); r_esp += 4; return;
L_007362e3:; BB(0x007362e3);
    /* 007362e3: fld dword ptr [0x9713f4] */ FPUSH(R_F32((u32)(0x9713f4u)));
    /* 007362e9: mov eax, ecx */ r_eax = r_ecx;
    /* 007362eb: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 007362ee: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 007362f1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007362f8: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007362fa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00736301: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x736306u); f_008581c5();
    /* 00736306: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736307: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0073630a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073630c: je 0x736351 */ if (fZ) goto L_00736351;
L_0073630e:; BB(0x0073630e);
    /* 0073630e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00736315: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073631c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073631f: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00736322: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736323: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x736328u); f_0073f670();
    /* 00736328: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0073632b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00736332:; BB(0x00736332);
    /* 00736332: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00736335: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00736338: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0073633b: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736340: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00736343: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00736346: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073634d: mov esp, ebp */ r_esp = r_ebp;
    /* 0073634f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736350: ret  */ FN_RET(0x007362a4); r_esp += 4; return;
L_00736351:; BB(0x00736351);
    /* 00736351: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736353: jmp 0x736332 */ goto L_00736332;
}

void f_00736358(void) /* sub_736358 */
{
    FN_ENTER(0x00736358);
    /* 00736358: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073635b: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0073635e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736360: je 0x73638a */ if (fZ) goto L_0073638a;
L_00736362:; BB(0x00736362);
    /* 00736362: fld dword ptr [0x9713ec] */ FPUSH(R_F32((u32)(0x9713ecu)));
    /* 00736368: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 0073636b: movsx edx, word ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x86u));
    /* 00736372: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00736374: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00736377: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00736379: lea edx, [ecx + ecx - 6] */ r_edx = (u32)(r_ecx+r_ecx+0xfffffffau);
    /* 0073637d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00736380: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00736383: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00736386: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736389: ret  */ FN_RET(0x00736358); r_esp += 4; return;
L_0073638a:; BB(0x0073638a);
    /* 0073638a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073638d: ret  */ FN_RET(0x00736358); r_esp += 4; return;
}

void f_0073635f(void)
{
    FN_ENTER(0x0073635f);
    /* 0073635f: sal byte ptr [eax + ebp - 0x27], 5 */ { u32 ad = (u32)(r_eax+r_ebp+0xffffffd9u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r); fC = (c <= 8) ? ((a >> (8 - c)) & 1) : 0; } }
    /* 00736364: in al, dx */ UNSUP(0x00736364, "in al, dx");
    /* 00736365: adc edx, dword ptr [edi + 0x4841d800] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_edi+0x4841d800u)); u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0073636b: movsx edx, word ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x86u));
    /* 00736372: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00736374: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00736377: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00736379: lea edx, [ecx + ecx - 6] */ r_edx = (u32)(r_ecx+r_ecx+0xfffffffau);
    /* 0073637d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00736380: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00736383: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00736386: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736389: ret  */ FN_RET(0x0073635f); r_esp += 4; return;
}

void f_00736390(void) /* sub_736390 */
{
    FN_ENTER(0x00736390);
    /* 00736390: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736391: mov ebx, esp */ r_ebx = r_esp;
    /* 00736393: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00736396: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00736399: mov eax, ecx */ r_eax = r_ecx;
    /* 0073639b: fld dword ptr [0x9713e8] */ FPUSH(R_F32((u32)(0x9713e8u)));
    /* 007363a1: movsx ecx, word ptr [eax + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 007363a8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007363aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007363ac: jbe 0x73641b */ if ((fC||fZ)) goto L_0073641b;
L_007363ae:; BB(0x007363ae);
    /* 007363ae: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007363b2: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007363b6: mov esi, eax */ r_esi = r_eax;
    /* 007363b8: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007363bc: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007363bf: mov ebp, edx */ r_ebp = r_edx;
    /* 007363c1: mov edx, ecx */ r_edx = r_ecx;
L_007363c3:; BB(0x007363c3);
    /* 007363c3: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007363c6: mov edi, dword ptr [edi + ebp*4] */ r_edi = R32((u32)(r_edi+r_ebp*4));
    /* 007363c9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007363cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007363ce: je 0x736403 */ if (fZ) goto L_00736403;
L_007363d0:; BB(0x007363d0);
    /* 007363d0: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 007363d3: fcomp qword ptr [0x971368] */ fx_compare(ST(0), R_F64((u32)(0x971368u))); FPOP();
    /* 007363d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007363db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007363dc: jbe 0x736403 */ if ((fC||fZ)) goto L_00736403;
L_007363de:; BB(0x007363de);
    /* 007363de: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 007363e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007363e2: mov ecx, edi */ r_ecx = r_edi;
    /* 007363e4: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7363e9u); f_0072ddf4();
    /* 007363e9: fld dword ptr [0x9713e4] */ FPUSH(R_F32((u32)(0x9713e4u)));
    /* 007363ef: fadd dword ptr [edi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x14u));
    /* 007363f2: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007363f6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007363f8: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007363ff: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_00736403:; BB(0x00736403);
    /* 00736403: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00736406: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00736408: jb 0x7363c3 */ if (fC) goto L_007363c3;
L_0073640a:; BB(0x0073640a);
    /* 0073640a: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0073640e: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00736411: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00736415: mov eax, esi */ r_eax = r_esi;
    /* 00736417: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
L_0073641b:; BB(0x0073641b);
    /* 0073641b: fadd dword ptr [0x9713e0] */ ST(0) = ST(0) + R_F32((u32)(0x9713e0u));
    /* 00736421: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00736424: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736427: je 0x73642f */ if (fZ) goto L_0073642f;
L_00736429:; BB(0x00736429);
    /* 00736429: fadd dword ptr [0x9713e4] */ ST(0) = ST(0) + R_F32((u32)(0x9713e4u));
L_0073642f:; BB(0x0073642f);
    /* 0073642f: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00736432: fld dword ptr [0x9713dc] */ FPUSH(R_F32((u32)(0x9713dcu)));
    /* 00736438: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073643a: fst dword ptr [eax + 0x90] */ W_F32((u32)(r_eax+0x90u), ST(0));
    /* 00736440: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736442: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
    /* 00736445: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00736448: mov ecx, eax */ r_ecx = r_eax;
    /* 0073644a: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x73644fu); f_00710f64();
    /* 0073644f: mov esp, ebx */ r_esp = r_ebx;
    /* 00736451: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00736452: ret 4 */ FN_RET(0x00736390); r_esp += 8; return;
}

void f_00736458(void) /* sub_736458 */
{
    FN_ENTER(0x00736458);
    /* 00736458: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073645b: mov edx, ecx */ r_edx = r_ecx;
    /* 0073645d: fld dword ptr [0x9713d8] */ FPUSH(R_F32((u32)(0x9713d8u)));
    /* 00736463: fld dword ptr [0x9713d0] */ FPUSH(R_F32((u32)(0x9713d0u)));
    /* 00736469: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0073646c: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0073646e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00736470: fadd dword ptr [0x9713d4] */ ST(0) = ST(0) + R_F32((u32)(0x9713d4u));
    /* 00736476: movsx ecx, word ptr [edx + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x8au));
    /* 0073647d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073647f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00736481: jbe 0x736507 */ if ((fC||fZ)) goto L_00736507;
L_00736487:; BB(0x00736487);
    /* 00736487: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073648b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0073648f: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00736493: mov ebx, eax */ r_ebx = r_eax;
    /* 00736495: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00736499: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0073649c: mov eax, ecx */ r_eax = r_ecx;
    /* 0073649e: mov esi, edx */ r_esi = r_edx;
L_007364a0:; BB(0x007364a0);
    /* 007364a0: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007364a3: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 007364a6: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007364a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007364ab: je 0x7364f1 */ if (fZ) goto L_007364f1;
L_007364ad:; BB(0x007364ad);
    /* 007364ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007364ae: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 007364b2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007364b5: mov ecx, edi */ r_ecx = r_edi;
    /* 007364b7: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7364bcu); f_0072ddf4();
    /* 007364bc: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 007364bf: fcomp dword ptr [0x9713cc] */ fx_compare(ST(0), R_F32((u32)(0x9713ccu))); FPOP();
    /* 007364c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007364c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007364c8: jbe 0x7364da */ if ((fC||fZ)) goto L_007364da;
L_007364ca:; BB(0x007364ca);
    /* 007364ca: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 007364d1: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007364d8: jmp 0x7364f1 */ goto L_007364f1;
L_007364da:; BB(0x007364da);
    /* 007364da: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 007364dd: fmul dword ptr [0x9713c8] */ ST(0) = ST(0) * R_F32((u32)(0x9713c8u));
    /* 007364e3: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 007364e7: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 007364ea: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_007364f1:; BB(0x007364f1);
    /* 007364f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007364f4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007364f6: jb 0x7364a0 */ if (fC) goto L_007364a0;
L_007364f8:; BB(0x007364f8);
    /* 007364f8: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007364fc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00736500: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00736503:; BB(0x00736503);
    /* 00736503: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736506: ret  */ FN_RET(0x00736458); r_esp += 4; return;
L_00736507:; BB(0x00736507);
    /* 00736507: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00736509: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073650b: jmp 0x736503 */ goto L_00736503;
}

void f_00736510(void) /* sub_736510 */
{
    FN_ENTER(0x00736510);
    /* 00736510: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00736515: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736517: jl 0x736522 */ if ((fS!=fO)) goto L_00736522;
L_00736519:; BB(0x00736519);
    /* 00736519: cmp ax, word ptr [ecx + 0x8a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00736520: jl 0x736525 */ if ((fS!=fO)) goto L_00736525;
L_00736522:; BB(0x00736522);
    /* 00736522: ret 4 */ FN_RET(0x00736510); r_esp += 8; return;
L_00736525:; BB(0x00736525);
    /* 00736525: mov word ptr [ecx + 0x8c], ax */ W16((u32)(r_ecx+0x8cu), (u16)r_eax);
    /* 0073652c: ret 4 */ FN_RET(0x00736510); r_esp += 8; return;
}

void f_00736530(void) /* sub_736530 */
{
    FN_ENTER(0x00736530);
    /* 00736530: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00736533: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00736536: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736538: je 0x736572 */ if (fZ) goto L_00736572;
L_0073653a:; BB(0x0073653a);
    /* 0073653a: fld dword ptr [0x9713bc] */ FPUSH(R_F32((u32)(0x9713bcu)));
    /* 00736540: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 00736543: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00736546: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073654a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00736551: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736553: je 0x736563 */ if (fZ) goto L_00736563;
L_00736555:; BB(0x00736555);
    /* 00736555: fld dword ptr [0x9713b8] */ FPUSH(R_F32((u32)(0x9713b8u)));
    /* 0073655b: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 0073655f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00736563:; BB(0x00736563);
    /* 00736563: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00736566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736567: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073656a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0073656b: mov ecx, eax */ r_ecx = r_eax;
    /* 0073656d: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x736572u); f_0073f8a4();
L_00736572:; BB(0x00736572);
    /* 00736572: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736575: ret  */ FN_RET(0x00736530); r_esp += 4; return;
}

void f_0073656c(void)
{
    FN_ENTER(0x0073656c);
    /* 0073656c: enter 0x32e8, -0x6d */ { u32 f = 0x32e8u; u32 lv = 19u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00736570: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00736572: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736575: ret  */ FN_RET(0x0073656c); r_esp += 4; return;
}

void f_00736578(void) /* sub_736578 */
{
    FN_ENTER(0x00736578);
    /* 00736578: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736579: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073657c: mov eax, ecx */ r_eax = r_ecx;
    /* 0073657e: movsx ecx, word ptr [eax + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 00736585: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00736587: mov word ptr [eax + 0x86], dx */ W16((u32)(r_eax+0x86u), (u16)r_edx);
    /* 0073658e: mov word ptr [eax + 0x88], dx */ W16((u32)(r_eax+0x88u), (u16)r_edx);
    /* 00736595: mov edx, dword ptr [eax + 0x98] */ r_edx = R32((u32)(r_eax+0x98u));
    /* 0073659b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0073659d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073659f: jle 0x7365ef */ if ((fZ||fS!=fO)) goto L_007365ef;
L_007365a1:; BB(0x007365a1);
    /* 007365a1: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007365a5: mov esi, eax */ r_esi = r_eax;
    /* 007365a7: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 007365ab: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007365ae: mov ebp, edx */ r_ebp = r_edx;
L_007365b0:; BB(0x007365b0);
    /* 007365b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007365b2: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007365b5: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 007365b8: mov ecx, edi */ r_ecx = r_edi;
    /* 007365ba: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x7365bfu); f_0072db50();
    /* 007365bf: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007365c4: mov ecx, edi */ r_ecx = r_edi;
    /* 007365c6: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7365cbu); f_0072ddf4();
    /* 007365cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007365cd: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 007365d0: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007365d3: movsx edi, word ptr [esi + 0x8a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007365da: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007365dd: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007365e0: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007365e2: jl 0x7365b0 */ if ((fS!=fO)) goto L_007365b0;
L_007365e4:; BB(0x007365e4);
    /* 007365e4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 007365e8: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 007365ec: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007365ef:; BB(0x007365ef);
    /* 007365ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007365f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007365f3: ret  */ FN_RET(0x00736578); r_esp += 4; return;
}

void f_007365f4(void) /* sub_7365F4 */
{
    FN_ENTER(0x007365f4);
    /* 007365f4: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 007365fb: mov edx, dword ptr [ecx + 0x98] */ r_edx = R32((u32)(r_ecx+0x98u));
    /* 00736601: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 00736605: ret  */ FN_RET(0x007365f4); r_esp += 4; return;
}

void f_00736608(void) /* sub_736608 */
{
    FN_ENTER(0x00736608);
    /* 00736608: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00736609: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073660c: mov edi, dword ptr [ecx + 0x98] */ r_edi = R32((u32)(r_ecx+0x98u));
    /* 00736612: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 00736617: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0073661b: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0073661e: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 00736621: and dword ptr [edi + edx*8], 0xffffffef */ { u32 ad = (u32)(r_edi+r_edx*8);  u32 a = R32(ad); u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736625: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00736626: ret 8 */ FN_RET(0x00736608); r_esp += 12; return;
}

void f_0073662c(void) /* sub_73662C */
{
    FN_ENTER(0x0073662c);
    /* 0073662c: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00736631: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00736634: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00736637: mov ecx, dword ptr [ecx + 0x98] */ r_ecx = R32((u32)(r_ecx+0x98u));
    /* 0073663d: mov dword ptr [eax + 0x24], 0xff909090 */ W32((u32)(r_eax+0x24u), 0xff909090u);
    /* 00736644: or dword ptr [ecx + edx*8], 0x10 */ { u32 ad = (u32)(r_ecx+r_edx*8);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736648: ret 4 */ FN_RET(0x0073662c); r_esp += 8; return;
}

void f_0073664c(void) /* sub_73664C */
{
    FN_ENTER(0x0073664c);
    /* 0073664c: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00736651: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 00736657: mov eax, dword ptr [eax + edx*8] */ r_eax = R32((u32)(r_eax+r_edx*8));
    /* 0073665a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073665c: je 0x736663 */ if (fZ) goto L_00736663;
L_0073665e:; BB(0x0073665e);
    /* 0073665e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736660: ret 4 */ FN_RET(0x0073664c); r_esp += 8; return;
L_00736663:; BB(0x00736663);
    /* 00736663: mov eax, 1 */ r_eax = 0x1u;
    /* 00736668: ret 4 */ FN_RET(0x0073664c); r_esp += 8; return;
}

void f_00736661(void)
{
    FN_ENTER(0x00736661);
    /* 00736661: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00736663: mov eax, 1 */ r_eax = 0x1u;
    /* 00736668: ret 4 */ FN_RET(0x00736661); r_esp += 8; return;
}

void f_0073666c(void) /* sub_73666C */
{
    FN_ENTER(0x0073666c);
    /* 0073666c: mov dword ptr [0xa9a8b0], 0x3f800000 */ W32((u32)(0xa9a8b0u), 0x3f800000u);
    /* 00736676: mov dword ptr [0xa9a8b4], 0x41000000 */ W32((u32)(0xa9a8b4u), 0x41000000u);
    /* 00736680: mov dword ptr [0xa9a8b8], 0x3fc00000 */ W32((u32)(0xa9a8b8u), 0x3fc00000u);
    /* 0073668a: ret  */ FN_RET(0x0073666c); r_esp += 4; return;
}

void f_0073668c(void) /* sub_73668C */
{
    FN_ENTER(0x0073668c);
    /* 0073668c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00736690: mov dword ptr [0x9f30ec], eax */ W32((u32)(0x9f30ecu), r_eax);
    /* 00736695: ret  */ FN_RET(0x0073668c); r_esp += 4; return;
}

void f_00736698(void) /* sub_736698 */
{
    FN_ENTER(0x00736698);
    /* 00736698: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736699: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073669b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073669d: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x7366a2u); f_007366bc();
    /* 007366a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007366a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007366a8: jne 0x7366ae */ if (!fZ) goto L_007366ae;
L_007366aa:; BB(0x007366aa);
    /* 007366aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007366ab: ret 4 */ FN_RET(0x00736698); r_esp += 8; return;
L_007366ae:; BB(0x007366ae);
    /* 007366ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007366af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7366b4u); f_005c2f74();
    /* 007366b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007366b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007366b6: ret 4 */ FN_RET(0x00736698); r_esp += 8; return;
}

void f_007366bc(void) /* sub_7366BC */
{
    FN_ENTER(0x007366bc);
    /* 007366bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007366bd: mov ebp, esp */ r_ebp = r_esp;
    /* 007366bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007366c1: push 0x8f19e8 */ { u32 v = 0x8f19e8u; r_esp -= 4; W32(r_esp, v); }
    /* 007366c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007366cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007366cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007366d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007366d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007366da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007366dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007366e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007366e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007366e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007366ed: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007366f0: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 007366f3: mov dword ptr [eax], 0xb40ae8 */ W32((u32)(r_eax), 0xb40ae8u);
    /* 007366f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007366fb: je 0x736707 */ if (fZ) goto L_00736707;
L_007366fd:; BB(0x007366fd);
    /* 007366fd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007366ff: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x736704u); f_00721474();
    /* 00736704: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00736707:; BB(0x00736707);
    /* 00736707: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0073670a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073670c: je 0x736718 */ if (fZ) goto L_00736718;
L_0073670e:; BB(0x0073670e);
    /* 0073670e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00736710: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x736715u); f_00728a10();
    /* 00736715: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00736718:; BB(0x00736718);
    /* 00736718: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073671f: mov ecx, eax */ r_ecx = r_eax;
    /* 00736721: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x736726u); f_00710788();
    /* 00736726: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00736729: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00736730: mov esp, ebp */ r_esp = r_ebp;
    /* 00736732: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736733: ret  */ FN_RET(0x007366bc); r_esp += 4; return;
}

void f_00736734(void) /* sub_736734 */
{
    FN_ENTER(0x00736734);
    /* 00736734: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00736735: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736736: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00736738: movsx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 0073673d: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00736741: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736742: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736744: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736748: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73674du); f_007108c4();
    /* 0073674d: mov dword ptr [ebp], 0xb40ae8 */ W32((u32)(r_ebp), 0xb40ae8u);
    /* 00736754: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736755: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736757: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073675b: call 0x737fa0 */ r_esp -= 4; W32(r_esp, 0x736760u); f_00737fa0();
    /* 00736760: mov eax, ebp */ r_eax = r_ebp;
    /* 00736762: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00736763: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736764: ret 0x10 */ FN_RET(0x00736734); r_esp += 20; return;
}

void f_00736768(void) /* sub_736768 */
{
    FN_ENTER(0x00736768);
    /* 00736768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00736769: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073676a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073676b: mov esi, ecx */ r_esi = r_ecx;
    /* 0073676d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073676f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736770: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736772: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736777: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73677cu); f_00814298();
    /* 0073677c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073677f: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736786: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0073678d: mov eax, ecx */ r_eax = r_ecx;
L_0073678f:; BB(0x0073678f);
    /* 0073678f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736792: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00736795: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736797: jl 0x7367a8 */ if ((fS!=fO)) goto L_007367a8;
L_00736799:; BB(0x00736799);
    /* 00736799: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007367a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007367a2: jne 0x7367ca */ if (!fZ) goto L_007367ca;
L_007367a4:; BB(0x007367a4);
    /* 007367a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007367a6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007367a8:; BB(0x007367a8);
    /* 007367a8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007367aa: je 0x7367c6 */ if (fZ) goto L_007367c6;
L_007367ac:; BB(0x007367ac);
    /* 007367ac: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 007367af: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 007367b2: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 007367b6: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007367b9: je 0x73678f */ if (fZ) goto L_0073678f;
L_007367bb:; BB(0x007367bb);
    /* 007367bb: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 007367c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367c5: ret  */ FN_RET(0x00736768); r_esp += 4; return;
L_007367c6:; BB(0x007367c6);
    /* 007367c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367c9: ret  */ FN_RET(0x00736768); r_esp += 4; return;
L_007367ca:; BB(0x007367ca);
    /* 007367ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367cd: ret  */ FN_RET(0x00736768); r_esp += 4; return;
}

void f_0073676e(void)
{
    FN_ENTER(0x0073676e);
    /* 0073676e: rcl byte ptr [eax + 0x50], 0x50 */ UNSUP(0x0073676e, "rcl byte ptr [eax + 0x50], 0x50");
    /* 00736772: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736777: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73677cu); f_00814298();
    /* 0073677c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073677f: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736786: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0073678d: mov eax, ecx */ r_eax = r_ecx;
L_0073678f:; BB(0x0073678f);
    /* 0073678f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736792: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00736795: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736797: jl 0x7367a8 */ if ((fS!=fO)) goto L_007367a8;
L_00736799:; BB(0x00736799);
    /* 00736799: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 007367a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007367a2: jne 0x7367ca */ if (!fZ) goto L_007367ca;
L_007367a4:; BB(0x007367a4);
    /* 007367a4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007367a6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007367a8:; BB(0x007367a8);
    /* 007367a8: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007367aa: je 0x7367c6 */ if (fZ) goto L_007367c6;
L_007367ac:; BB(0x007367ac);
    /* 007367ac: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 007367af: mov edi, dword ptr [ebx + edi*4] */ r_edi = R32((u32)(r_ebx+r_edi*4));
    /* 007367b2: movzx ebx, word ptr [edi + 4] */ r_ebx = (u32)R16((u32)(r_edi+0x4u));
    /* 007367b6: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007367b9: je 0x73678f */ if (fZ) goto L_0073678f;
L_007367bb:; BB(0x007367bb);
    /* 007367bb: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 007367c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367c5: ret  */ FN_RET(0x0073676e); r_esp += 4; return;
L_007367c6:; BB(0x007367c6);
    /* 007367c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367c9: ret  */ FN_RET(0x0073676e); r_esp += 4; return;
L_007367ca:; BB(0x007367ca);
    /* 007367ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007367cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007367cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007367cd: ret  */ FN_RET(0x0073676e); r_esp += 4; return;
}

void f_007367d0(void) /* sub_7367D0 */
{
    FN_ENTER(0x007367d0);
    /* 007367d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007367d1: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007367d4: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 007367d8: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 007367db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007367dd: jl 0x7368e9 */ if ((fS!=fO)) goto L_007368e9;
L_007367e3:; BB(0x007367e3);
    /* 007367e3: fld dword ptr [0x971598] */ FPUSH(R_F32((u32)(0x971598u)));
    /* 007367e9: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 007367ec: fld dword ptr [0x971594] */ FPUSH(R_F32((u32)(0x971594u)));
    /* 007367f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007367f4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007367f8: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 007367fb: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007367ff: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00736803: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00736805: push 0xc2700000 */ { u32 v = 0xc2700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0073680a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073680b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073680c: call 0x760b74 */ r_esp -= 4; W32(r_esp, 0x736811u); f_00760b74();
    /* 00736811: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736814: fld dword ptr [0x97158c] */ FPUSH(R_F32((u32)(0x97158cu)));
    /* 0073681a: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0073681e: fld dword ptr [0x971588] */ FPUSH(R_F32((u32)(0x971588u)));
    /* 00736824: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 00736828: fld dword ptr [0x971580] */ FPUSH(R_F32((u32)(0x971580u)));
    /* 0073682e: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00736831: fdivr dword ptr [0x971584] */ ST(0) = R_F32((u32)(0x971584u)) / ST(0);
    /* 00736837: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073683b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073683d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00736841: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00736845: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0073684d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00736850: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736852: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00736856: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0073685a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0073685e: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x736863u); f_0071d484();
    /* 00736863: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x736868u); f_00816d30();
    /* 00736868: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073686c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x736871u); f_00815f24();
    /* 00736871: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00736876: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x73687bu); f_007ac344();
    /* 0073687b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0073687f: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00736883: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00736886: fadd dword ptr [eax*4 + 0x971518] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971518u));
    /* 0073688d: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 00736891: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00736895: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736897: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x73689cu); f_008443b4();
    /* 0073689c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073689d: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x7368a2u); f_007ac24c();
    /* 007368a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007368a5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007368a9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007368ad: fmul dword ptr [0x971578] */ ST(0) = ST(0) * R_F32((u32)(0x971578u));
    /* 007368b3: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 007368b7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007368bb: push 0x96f638 */ { u32 v = 0x96f638u; r_esp -= 4; W32(r_esp, v); }
    /* 007368c0: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7368c5u); f_00816cb8();
    /* 007368c5: push dword ptr [esp + 0x54] */ { u32 v = R32((u32)(r_esp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007368c9: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x7368ceu); f_00815f24();
    /* 007368ce: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007368d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007368d4: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 007368d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007368db: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007368e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007368e1: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x7368e6u); f_0071d58c();
    /* 007368e6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007368e9:; BB(0x007368e9);
    /* 007368e9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007368ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007368ed: ret 0xc */ FN_RET(0x007367d0); r_esp += 16; return;
}

void f_00736825(void)
{
    FN_ENTER(0x00736825);
    /* 00736825: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736826: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00736828: fld dword ptr [0x971580] */ FPUSH(R_F32((u32)(0x971580u)));
    /* 0073682e: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00736831: fdivr dword ptr [0x971584] */ ST(0) = R_F32((u32)(0x971584u)) / ST(0);
    /* 00736837: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0073683b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073683d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00736841: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00736845: mov dword ptr [esp + 8], 0x47c35000 */ W32((u32)(r_esp+0x8u), 0x47c35000u);
    /* 0073684d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00736850: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736852: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00736856: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0073685a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0073685e: call 0x71d484 */ r_esp -= 4; W32(r_esp, 0x736863u); f_0071d484();
    /* 00736863: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x736868u); f_00816d30();
    /* 00736868: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073686c: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x736871u); f_00815f24();
    /* 00736871: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00736876: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x73687bu); f_007ac344();
    /* 0073687b: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0073687f: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00736883: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00736886: fadd dword ptr [eax*4 + 0x971518] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971518u));
    /* 0073688d: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 00736891: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00736895: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736897: call 0x8443b4 */ r_esp -= 4; W32(r_esp, 0x73689cu); f_008443b4();
    /* 0073689c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073689d: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x7368a2u); f_007ac24c();
    /* 007368a2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007368a5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007368a9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007368ad: fmul dword ptr [0x971578] */ ST(0) = ST(0) * R_F32((u32)(0x971578u));
    /* 007368b3: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 007368b7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007368bb: push 0x96f638 */ { u32 v = 0x96f638u; r_esp -= 4; W32(r_esp, v); }
    /* 007368c0: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7368c5u); f_00816cb8();
    /* 007368c5: push dword ptr [esp + 0x54] */ { u32 v = R32((u32)(r_esp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 007368c9: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x7368ceu); f_00815f24();
    /* 007368ce: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007368d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007368d4: push 0x47c35000 */ { u32 v = 0x47c35000u; r_esp -= 4; W32(r_esp, v); }
    /* 007368d9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007368db: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007368e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007368e1: call 0x71d58c */ r_esp -= 4; W32(r_esp, 0x7368e6u); f_0071d58c();
    /* 007368e6: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007368e9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007368ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007368ed: ret 0xc */ FN_RET(0x00736825); r_esp += 16; return;
}

void f_007368f0(void) /* sub_7368F0 */
{
    FN_ENTER(0x007368f0);
    /* 007368f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007368f4: mov dword ptr [0x9f3140], eax */ W32((u32)(0x9f3140u), r_eax);
    /* 007368f9: ret  */ FN_RET(0x007368f0); r_esp += 4; return;
}

void f_007368fc(void) /* sub_7368FC */
{
    FN_ENTER(0x007368fc);
    /* 007368fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007368fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007368ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00736901: push 0x8f1a10 */ { u32 v = 0x8f1a10u; r_esp -= 4; W32(r_esp, v); }
    /* 00736906: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073690c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073690d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00736914: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00736917: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073691a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0073691d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00736920: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00736923: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00736926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736927: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073692a: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x73692fu); f_00737f80();
    /* 0073692f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00736936: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 0073693b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x736940u); f_005caba4();
    /* 00736940: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736943: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00736946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736948: je 0x736984 */ if (fZ) goto L_00736984;
L_0073694a:; BB(0x0073694a);
    /* 0073694a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00736951: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00736958: movsx eax, word ptr [ebp + 0x14] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x14u));
    /* 0073695c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0073695f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00736962: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736963: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736964: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736967: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x73696cu); f_00736988();
    /* 0073696c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073696f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00736976:; BB(0x00736976);
    /* 00736976: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00736979: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00736980: mov esp, ebp */ r_esp = r_ebp;
    /* 00736982: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736983: ret  */ FN_RET(0x007368fc); r_esp += 4; return;
L_00736984:; BB(0x00736984);
    /* 00736984: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00736986: jmp 0x736976 */ goto L_00736976;
}

void f_00736988(void) /* sub_736988 */
{
    FN_ENTER(0x00736988);
    /* 00736988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00736989: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073698a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073698c: movsx ebx, word ptr [esp + 0x14] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00736991: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00736995: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00736996: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736998: push 0x9f3130 */ { u32 v = 0x9f3130u; r_esp -= 4; W32(r_esp, v); }
    /* 0073699d: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x7369a2u); f_007108c4();
    /* 007369a2: mov dword ptr [ebp], 0xb40ae8 */ W32((u32)(r_ebp), 0xb40ae8u);
    /* 007369a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007369aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007369ac: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007369b0: call 0x737fa0 */ r_esp -= 4; W32(r_esp, 0x7369b5u); f_00737fa0();
    /* 007369b5: mov eax, ebp */ r_eax = r_ebp;
    /* 007369b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007369b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007369b9: ret 0xc */ FN_RET(0x00736988); r_esp += 16; return;
}

void f_007369bc(void) /* sub_7369BC */
{
    FN_ENTER(0x007369bc);
    /* 007369bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007369bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007369be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007369bf: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007369c2: mov esi, ecx */ r_esi = r_ecx;
    /* 007369c4: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 007369c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007369c9: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7369ceu); f_00719140();
    /* 007369ce: mov ebp, eax */ r_ebp = r_eax;
    /* 007369d0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007369d3: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007369da: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007369dd: jne 0x73702e */ if (!fZ) goto L_0073702e;
L_007369e3:; BB(0x007369e3);
    /* 007369e3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007369e6: jne 0x73702e */ if (!fZ) goto L_0073702e;
L_007369ec:; BB(0x007369ec);
    /* 007369ec: mov ecx, esi */ r_ecx = r_esi;
    /* 007369ee: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x7369f3u); f_00712480();
    /* 007369f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007369f5: je 0x73702e */ if (fZ) goto L_0073702e;
L_007369fb:; BB(0x007369fb);
    /* 007369fb: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00736a02: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736a05: je 0x736d03 */ if (fZ) goto L_00736d03;
L_00736a0b:; BB(0x00736a0b);
    /* 00736a0b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a0d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a0f: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 00736a13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736a15: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736a1b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736a1d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736a1f: lea ebp, [eax + eax + 0xaae75c] */ r_ebp = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00736a26: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736a28: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x736a2du); f_007c09fc();
    /* 00736a2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a2f: je 0x736a84 */ if (fZ) goto L_00736a84;
L_00736a31:; BB(0x00736a31);
    /* 00736a31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736a33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a36: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736a3b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736a40u); f_00814298();
    /* 00736a40: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736a43: movsx eax, word ptr [esi + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736a4a: mov edx, eax */ r_edx = r_eax;
L_00736a4c:; BB(0x00736a4c);
    /* 00736a4c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736a4f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736a52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736a54: jl 0x73713e */ if ((fS!=fO)) goto L_0073713e;
L_00736a5a:; BB(0x00736a5a);
    /* 00736a5a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a5c: je 0x736a84 */ if (fZ) goto L_00736a84;
L_00736a5e:; BB(0x00736a5e);
    /* 00736a5e: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00736a61: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 00736a64: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00736a68: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a6e: je 0x736a77 */ if (fZ) goto L_00736a77;
L_00736a70:; BB(0x00736a70);
    /* 00736a70: mov edi, 1 */ r_edi = 0x1u;
    /* 00736a75: jmp 0x736a79 */ goto L_00736a79;
L_00736a77:; BB(0x00736a77);
    /* 00736a77: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00736a79:; BB(0x00736a79);
    /* 00736a79: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a7b: je 0x736a4c */ if (fZ) goto L_00736a4c;
L_00736a7d:; BB(0x00736a7d);
    /* 00736a7d: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736a84:; BB(0x00736a84);
    /* 00736a84: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a86: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736a8a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736a90: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x736a95u); f_007c09fc();
    /* 00736a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a97: je 0x736b0b */ if (fZ) goto L_00736b0b;
L_00736a99:; BB(0x00736a99);
    /* 00736a99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9e: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736aa3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736aa8u); f_00814298();
    /* 00736aa8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736aab: movsx eax, word ptr [esi + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736ab2: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736ab9: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736abd: mov edi, eax */ r_edi = r_eax;
L_00736abf:; BB(0x00736abf);
    /* 00736abf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736ac2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736ac5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736ac7: jl 0x736adc */ if ((fS!=fO)) goto L_00736adc;
L_00736ac9:; BB(0x00736ac9);
    /* 00736ac9: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00736ad0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ad2: jne 0x737089 */ if (!fZ) goto L_00737089;
L_00736ad8:; BB(0x00736ad8);
    /* 00736ad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736ada: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00736adc:; BB(0x00736adc);
    /* 00736adc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736ade: je 0x737135 */ if (fZ) goto L_00737135;
L_00736ae4:; BB(0x00736ae4);
    /* 00736ae4: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736ae7: mov ebx, dword ptr [ebx + ecx*4] */ r_ebx = R32((u32)(r_ebx+r_ecx*4));
    /* 00736aea: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736aee: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736af1: je 0x736afa */ if (fZ) goto L_00736afa;
L_00736af3:; BB(0x00736af3);
    /* 00736af3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736af8: jmp 0x736afc */ goto L_00736afc;
L_00736afa:; BB(0x00736afa);
    /* 00736afa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736afc:; BB(0x00736afc);
    /* 00736afc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736afe: je 0x736abf */ if (fZ) goto L_00736abf;
L_00736b00:; BB(0x00736b00);
    /* 00736b00: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736b04: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736b0b:; BB(0x00736b0b);
    /* 00736b0b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00736b0d: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736b12u); f_007bfe60();
    /* 00736b12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736b15: je 0x736bfd */ if (fZ) goto L_00736bfd;
L_00736b1b:; BB(0x00736b1b);
    /* 00736b1b: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736b22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b27: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736b2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736b31u); f_00814298();
    /* 00736b31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736b34: mov ecx, esi */ r_ecx = r_esi;
    /* 00736b36: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736b3bu); f_007108f4();
    /* 00736b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736b3d: je 0x736bfd */ if (fZ) goto L_00736bfd;
L_00736b43:; BB(0x00736b43);
    /* 00736b43: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736b49: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736b4f: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736b52: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736b59: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736b5b: fldz  */ FPUSH(0.0);
    /* 00736b5d: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00736b61: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736b65: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b67: fchs  */ ST(0) = -ST(0);
    /* 00736b69: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736b6c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736b6e: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736b74: fchs  */ ST(0) = -ST(0);
    /* 00736b76: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736b78: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736b7b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736b7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736b84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736b88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736b8c: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736b8e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736b91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b93: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736b95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736b97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b99: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736b9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736b9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b9e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ba0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ba4: jae 0x736ba8 */ if (!fC) goto L_00736ba8;
L_00736ba6:; BB(0x00736ba6);
    /* 00736ba6: fst st(1) */ ST(1) = ST(0);
L_00736ba8:; BB(0x00736ba8);
    /* 00736ba8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736bab: je 0x736baf */ if (fZ) goto L_00736baf;
L_00736bad:; BB(0x00736bad);
    /* 00736bad: fst st(1) */ ST(1) = ST(0);
L_00736baf:; BB(0x00736baf);
    /* 00736baf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736bb1: fchs  */ ST(0) = -ST(0);
    /* 00736bb3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736bb7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00736bbb:; BB(0x00736bbb);
    /* 00736bbb: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00736bbd: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00736bc0: mov edi, eax */ r_edi = r_eax;
    /* 00736bc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736bc4: jl 0x7370a8 */ if ((fS!=fO)) goto L_007370a8;
L_00736bca:; BB(0x00736bca);
    /* 00736bca: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bcc: je 0x73709b */ if (fZ) goto L_0073709b;
L_00736bd2:; BB(0x00736bd2);
    /* 00736bd2: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736bd5: mov ebp, dword ptr [ebx + edi*4] */ r_ebp = R32((u32)(r_ebx+r_edi*4));
    /* 00736bd8: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00736bdc: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736bdf: je 0x736be8 */ if (fZ) goto L_00736be8;
L_00736be1:; BB(0x00736be1);
    /* 00736be1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736be6: jmp 0x736bea */ goto L_00736bea;
L_00736be8:; BB(0x00736be8);
    /* 00736be8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736bea:; BB(0x00736bea);
    /* 00736bea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bec: je 0x736bbb */ if (fZ) goto L_00736bbb;
L_00736bee:; BB(0x00736bee);
    /* 00736bee: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00736bf2: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736bf6: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736bfd:; BB(0x00736bfd);
    /* 00736bfd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736bff: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736c04u); f_007bfe60();
    /* 00736c04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c07: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c0d:; BB(0x00736c0d);
    /* 00736c0d: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736c16: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736c18: mov edx, 0 */ r_edx = 0x0u;
    /* 00736c1d: jg 0x736c21 */ if ((!fZ&&fS==fO)) goto L_00736c21;
L_00736c1f:; BB(0x00736c1f);
    /* 00736c1f: mov edi, eax */ r_edi = r_eax;
L_00736c21:; BB(0x00736c21);
    /* 00736c21: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736c30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736c35u); f_00814298();
    /* 00736c35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736c38: mov ecx, esi */ r_ecx = r_esi;
    /* 00736c3a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736c3fu); f_007108f4();
    /* 00736c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c41: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c47:; BB(0x00736c47);
    /* 00736c47: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736c4d: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736c53: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736c56: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c5d: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736c64: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736c66: fldz  */ FPUSH(0.0);
    /* 00736c68: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736c6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c6e: fchs  */ ST(0) = -ST(0);
    /* 00736c70: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736c73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736c75: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736c7b: fchs  */ ST(0) = -ST(0);
    /* 00736c7d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736c7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736c82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736c8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736c8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736c93: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736c95: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736c98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c9a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736c9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736ca2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ca3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ca9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cab: jae 0x736caf */ if (!fC) goto L_00736caf;
L_00736cad:; BB(0x00736cad);
    /* 00736cad: fst st(1) */ ST(1) = ST(0);
L_00736caf:; BB(0x00736caf);
    /* 00736caf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cb2: je 0x736cb6 */ if (fZ) goto L_00736cb6;
L_00736cb4:; BB(0x00736cb4);
    /* 00736cb4: fst st(1) */ ST(1) = ST(0);
L_00736cb6:; BB(0x00736cb6);
    /* 00736cb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736cb8: fchs  */ ST(0) = -ST(0);
    /* 00736cba: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736cbe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736cc2:; BB(0x00736cc2);
    /* 00736cc2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736cc4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736cc7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736cc9: jge 0x7371f0 */ if ((fS==fO)) goto L_007371f0;
L_00736ccf:; BB(0x00736ccf);
    /* 00736ccf: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cd1: je 0x737092 */ if (fZ) goto L_00737092;
L_00736cd7:; BB(0x00736cd7);
    /* 00736cd7: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736cda: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736cdd: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736ce1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ce4: je 0x736ced */ if (fZ) goto L_00736ced;
L_00736ce6:; BB(0x00736ce6);
    /* 00736ce6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736ceb: jmp 0x736cef */ goto L_00736cef;
L_00736ced:; BB(0x00736ced);
    /* 00736ced: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736cef:; BB(0x00736cef);
    /* 00736cef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cf1: je 0x736cc2 */ if (fZ) goto L_00736cc2;
L_00736cf3:; BB(0x00736cf3);
    /* 00736cf3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736cf7:; BB(0x00736cf7);
    /* 00736cf7: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736cfe: jmp 0x736ff6 */ goto L_00736ff6;
L_00736d03:; BB(0x00736d03);
    /* 00736d03: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00736d05: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00736d07: lea eax, [ebp + ebp*4] */ r_eax = (u32)(r_ebp+r_ebp*4);
    /* 00736d0b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736d0d: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736d13: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736d15: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736d17: lea ebp, [eax + eax + 0xaae75c] */ r_ebp = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00736d1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736d20: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x736d25u); f_007c0c6c();
    /* 00736d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736d27: je 0x736d7c */ if (fZ) goto L_00736d7c;
L_00736d29:; BB(0x00736d29);
    /* 00736d29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736d2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d2e: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736d33: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736d38u); f_00814298();
    /* 00736d38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736d3b: movsx edx, word ptr [esi + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736d42: mov eax, edx */ r_eax = r_edx;
L_00736d44:; BB(0x00736d44);
    /* 00736d44: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736d47: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736d4a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736d4c: jl 0x737310 */ if ((fS!=fO)) goto L_00737310;
L_00736d52:; BB(0x00736d52);
    /* 00736d52: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736d54: je 0x736d7c */ if (fZ) goto L_00736d7c;
L_00736d56:; BB(0x00736d56);
    /* 00736d56: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00736d59: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 00736d5c: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00736d60: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736d66: je 0x736d6f */ if (fZ) goto L_00736d6f;
L_00736d68:; BB(0x00736d68);
    /* 00736d68: mov edi, 1 */ r_edi = 0x1u;
    /* 00736d6d: jmp 0x736d71 */ goto L_00736d71;
L_00736d6f:; BB(0x00736d6f);
    /* 00736d6f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00736d71:; BB(0x00736d71);
    /* 00736d71: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736d73: je 0x736d44 */ if (fZ) goto L_00736d44;
L_00736d75:; BB(0x00736d75);
    /* 00736d75: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736d7c:; BB(0x00736d7c);
    /* 00736d7c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00736d7e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00736d80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736d82: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736d88: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x736d8du); f_007c0c6c();
    /* 00736d8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736d8f: je 0x736e03 */ if (fZ) goto L_00736e03;
L_00736d91:; BB(0x00736d91);
    /* 00736d91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736d96: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736d9b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736da0u); f_00814298();
    /* 00736da0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736da3: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736daa: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736db1: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736db5: mov eax, edi */ r_eax = r_edi;
L_00736db7:; BB(0x00736db7);
    /* 00736db7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736dba: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736dbd: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736dbf: jl 0x736dd4 */ if ((fS!=fO)) goto L_00736dd4;
L_00736dc1:; BB(0x00736dc1);
    /* 00736dc1: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00736dc8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736dca: jne 0x737161 */ if (!fZ) goto L_00737161;
L_00736dd0:; BB(0x00736dd0);
    /* 00736dd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736dd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00736dd4:; BB(0x00736dd4);
    /* 00736dd4: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736dd6: je 0x737307 */ if (fZ) goto L_00737307;
L_00736ddc:; BB(0x00736ddc);
    /* 00736ddc: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736ddf: mov ebx, dword ptr [ebx + ecx*4] */ r_ebx = R32((u32)(r_ebx+r_ecx*4));
    /* 00736de2: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736de6: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736de9: je 0x736df2 */ if (fZ) goto L_00736df2;
L_00736deb:; BB(0x00736deb);
    /* 00736deb: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736df0: jmp 0x736df4 */ goto L_00736df4;
L_00736df2:; BB(0x00736df2);
    /* 00736df2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736df4:; BB(0x00736df4);
    /* 00736df4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736df6: je 0x736db7 */ if (fZ) goto L_00736db7;
L_00736df8:; BB(0x00736df8);
    /* 00736df8: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736dfc: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736e03:; BB(0x00736e03);
    /* 00736e03: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00736e05: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736e0au); f_007bfe60();
    /* 00736e0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736e0b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736e0d: je 0x736ef5 */ if (fZ) goto L_00736ef5;
L_00736e13:; BB(0x00736e13);
    /* 00736e13: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736e1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736e1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736e1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736e1f: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736e24: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736e29u); f_00814298();
    /* 00736e29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736e2c: mov ecx, esi */ r_ecx = r_esi;
    /* 00736e2e: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736e33u); f_007108f4();
    /* 00736e33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736e35: je 0x736ef5 */ if (fZ) goto L_00736ef5;
L_00736e3b:; BB(0x00736e3b);
    /* 00736e3b: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736e41: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736e47: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736e4a: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736e51: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736e53: fldz  */ FPUSH(0.0);
    /* 00736e55: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00736e59: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736e5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736e5f: fchs  */ ST(0) = -ST(0);
    /* 00736e61: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736e64: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736e66: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736e6c: fchs  */ ST(0) = -ST(0);
    /* 00736e6e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736e70: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736e73: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736e77: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736e7c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736e80: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736e84: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736e86: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736e89: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736e8b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736e8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736e8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736e91: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736e93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736e94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736e96: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736e98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736e9a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736e9c: jae 0x736ea0 */ if (!fC) goto L_00736ea0;
L_00736e9e:; BB(0x00736e9e);
    /* 00736e9e: fst st(1) */ ST(1) = ST(0);
L_00736ea0:; BB(0x00736ea0);
    /* 00736ea0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ea1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ea3: je 0x736ea7 */ if (fZ) goto L_00736ea7;
L_00736ea5:; BB(0x00736ea5);
    /* 00736ea5: fst st(1) */ ST(1) = ST(0);
L_00736ea7:; BB(0x00736ea7);
    /* 00736ea7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736ea9: fchs  */ ST(0) = -ST(0);
    /* 00736eab: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736eaf: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00736eb3:; BB(0x00736eb3);
    /* 00736eb3: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00736eb5: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00736eb8: mov edi, eax */ r_edi = r_eax;
    /* 00736eba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736ebc: jl 0x73727a */ if ((fS!=fO)) goto L_0073727a;
L_00736ec2:; BB(0x00736ec2);
    /* 00736ec2: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736ec4: je 0x73726d */ if (fZ) goto L_0073726d;
L_00736eca:; BB(0x00736eca);
    /* 00736eca: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736ecd: mov ebp, dword ptr [ebx + edi*4] */ r_ebp = R32((u32)(r_ebx+r_edi*4));
    /* 00736ed0: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00736ed4: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ed7: je 0x736ee0 */ if (fZ) goto L_00736ee0;
L_00736ed9:; BB(0x00736ed9);
    /* 00736ed9: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736ede: jmp 0x736ee2 */ goto L_00736ee2;
L_00736ee0:; BB(0x00736ee0);
    /* 00736ee0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736ee2:; BB(0x00736ee2);
    /* 00736ee2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736ee4: je 0x736eb3 */ if (fZ) goto L_00736eb3;
L_00736ee6:; BB(0x00736ee6);
    /* 00736ee6: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00736eea: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736eee: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736ef5:; BB(0x00736ef5);
    /* 00736ef5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736ef7: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736efcu); f_007bfe60();
    /* 00736efc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736eff: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f05:; BB(0x00736f05);
    /* 00736f05: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736f0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736f10: mov edx, 0 */ r_edx = 0x0u;
    /* 00736f15: jg 0x736f19 */ if ((!fZ&&fS==fO)) goto L_00736f19;
L_00736f17:; BB(0x00736f17);
    /* 00736f17: mov edi, eax */ r_edi = r_eax;
L_00736f19:; BB(0x00736f19);
    /* 00736f19: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736f20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f23: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736f28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736f2du); f_00814298();
    /* 00736f2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736f30: mov ecx, esi */ r_ecx = r_esi;
    /* 00736f32: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736f37u); f_007108f4();
    /* 00736f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736f39: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f3f:; BB(0x00736f3f);
    /* 00736f3f: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736f45: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736f4b: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736f4e: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f55: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736f5c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736f5e: fldz  */ FPUSH(0.0);
    /* 00736f60: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736f64: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f66: fchs  */ ST(0) = -ST(0);
    /* 00736f68: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736f6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736f6d: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736f73: fchs  */ ST(0) = -ST(0);
    /* 00736f75: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736f77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736f7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736f7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736f83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736f87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736f8b: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736f8d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736f90: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f92: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736f94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736f96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f98: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736f9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f9d: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736f9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736fa3: jae 0x736fa7 */ if (!fC) goto L_00736fa7;
L_00736fa5:; BB(0x00736fa5);
    /* 00736fa5: fst st(1) */ ST(1) = ST(0);
L_00736fa7:; BB(0x00736fa7);
    /* 00736fa7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736fa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736faa: je 0x736fae */ if (fZ) goto L_00736fae;
L_00736fac:; BB(0x00736fac);
    /* 00736fac: fst st(1) */ ST(1) = ST(0);
L_00736fae:; BB(0x00736fae);
    /* 00736fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736fb0: fchs  */ ST(0) = -ST(0);
    /* 00736fb2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736fb6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736fba:; BB(0x00736fba);
    /* 00736fba: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736fbc: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736fbf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736fc1: jge 0x737173 */ if ((fS==fO)) goto L_00737173;
L_00736fc7:; BB(0x00736fc7);
    /* 00736fc7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fc9: je 0x73716a */ if (fZ) goto L_0073716a;
L_00736fcf:; BB(0x00736fcf);
    /* 00736fcf: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736fd2: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736fd5: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736fd9: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736fdc: je 0x736fe5 */ if (fZ) goto L_00736fe5;
L_00736fde:; BB(0x00736fde);
    /* 00736fde: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736fe3: jmp 0x736fe7 */ goto L_00736fe7;
L_00736fe5:; BB(0x00736fe5);
    /* 00736fe5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736fe7:; BB(0x00736fe7);
    /* 00736fe7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fe9: je 0x736fba */ if (fZ) goto L_00736fba;
L_00736feb:; BB(0x00736feb);
    /* 00736feb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736fef:; BB(0x00736fef);
    /* 00736fef: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x007369bc); r_esp += 4; return;
L_00737089:; BB(0x00737089);
    /* 00737089: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073708d: jmp 0x736b0b */ goto L_00736b0b;
L_00737092:; BB(0x00737092);
    /* 00737092: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737096: jmp 0x736ff6 */ goto L_00736ff6;
L_0073709b:; BB(0x0073709b);
    /* 0073709b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0073709f: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007370a3: jmp 0x736bfd */ goto L_00736bfd;
L_007370a8:; BB(0x007370a8);
    /* 007370a8: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007370ab: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 007370ad: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 007370b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007370b3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370b9: je 0x7370c2 */ if (fZ) goto L_007370c2;
L_007370bb:; BB(0x007370bb);
    /* 007370bb: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007370c0: jmp 0x7370c4 */ goto L_007370c4;
L_007370c2:; BB(0x007370c2);
    /* 007370c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007370c4:; BB(0x007370c4);
    /* 007370c4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370c6: jne 0x737119 */ if (!fZ) goto L_00737119;
L_007370c8:; BB(0x007370c8);
    /* 007370c8: movsx ebx, word ptr [esi + 0x8a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007370cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007370d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370d3: je 0x73712e */ if (fZ) goto L_0073712e;
L_007370d5:; BB(0x007370d5);
    /* 007370d5: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_007370d9:; BB(0x007370d9);
    /* 007370d9: movsx esi, bp */ r_esi = (u32)(i32)(i16)(u16)r_ebp;
    /* 007370dc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370de: je 0x73710e */ if (fZ) goto L_0073710e;
L_007370e0:; BB(0x007370e0);
    /* 007370e0: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 007370e3: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 007370e7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370ed: je 0x7370f6 */ if (fZ) goto L_007370f6;
L_007370ef:; BB(0x007370ef);
    /* 007370ef: mov esi, 1 */ r_esi = 0x1u;
    /* 007370f4: jmp 0x7370f8 */ goto L_007370f8;
L_007370f6:; BB(0x007370f6);
    /* 007370f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007370f8:; BB(0x007370f8);
    /* 007370f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370fa: jne 0x737120 */ if (!fZ) goto L_00737120;
L_007370fc:; BB(0x007370fc);
    /* 007370fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007370ff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737101: jne 0x7370d9 */ if (!fZ) goto L_007370d9;
L_00737103:; BB(0x00737103);
    /* 00737103: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737107: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737109: jmp 0x736bca */ goto L_00736bca;
L_0073710e:; BB(0x0073710e);
    /* 0073710e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737112: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737114: jmp 0x736bca */ goto L_00736bca;
L_00737119:; BB(0x00737119);
    /* 00737119: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073711b: jmp 0x736bca */ goto L_00736bca;
L_00737120:; BB(0x00737120);
    /* 00737120: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737124: mov eax, ebp */ r_eax = r_ebp;
    /* 00737126: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 00737129: jmp 0x736bca */ goto L_00736bca;
L_0073712e:; BB(0x0073712e);
    /* 0073712e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737130: jmp 0x736bca */ goto L_00736bca;
L_00737135:; BB(0x00737135);
    /* 00737135: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737139: jmp 0x736b0b */ goto L_00736b0b;
L_0073713e:; BB(0x0073713e);
    /* 0073713e: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00737145: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00737147: jne 0x736a84 */ if (!fZ) goto L_00736a84;
L_0073714d:; BB(0x0073714d);
    /* 0073714d: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 00737154: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737157: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0073715a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073715c: jmp 0x736a5a */ goto L_00736a5a;
L_00737161:; BB(0x00737161);
    /* 00737161: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737165: jmp 0x736e03 */ goto L_00736e03;
L_0073716a:; BB(0x0073716a);
    /* 0073716a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073716e: jmp 0x736ff6 */ goto L_00736ff6;
L_00737173:; BB(0x00737173);
    /* 00737173: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737177: mov edi, ecx */ r_edi = r_ecx;
    /* 00737179: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073717b: jge 0x736fef */ if ((fS==fO)) goto L_00736fef;
L_00737181:; BB(0x00737181);
    /* 00737181: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737184: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737188: mov eax, ecx */ r_eax = r_ecx;
    /* 0073718a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073718e: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00737192: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737196:; BB(0x00737196);
    /* 00737196: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737199: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073719d: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371a3: je 0x7371ac */ if (fZ) goto L_007371ac;
L_007371a5:; BB(0x007371a5);
    /* 007371a5: mov esi, 1 */ r_esi = 0x1u;
    /* 007371aa: jmp 0x7371ae */ goto L_007371ae;
L_007371ac:; BB(0x007371ac);
    /* 007371ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007371ae:; BB(0x007371ae);
    /* 007371ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b0: je 0x7371d2 */ if (fZ) goto L_007371d2;
L_007371b2:; BB(0x007371b2);
    /* 007371b2: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007371b5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b7: jne 0x7371bb */ if (!fZ) goto L_007371bb;
L_007371b9:; BB(0x007371b9);
    /* 007371b9: mov edi, ecx */ r_edi = r_ecx;
L_007371bb:; BB(0x007371bb);
    /* 007371bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007371be: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007371c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371c3: jl 0x737196 */ if ((fS!=fO)) goto L_00737196;
L_007371c5:; BB(0x007371c5);
    /* 007371c5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371c9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371cd: jmp 0x736fef */ goto L_00736fef;
L_007371d2:; BB(0x007371d2);
    /* 007371d2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371d6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371dc: jne 0x7371e5 */ if (!fZ) goto L_007371e5;
L_007371de:; BB(0x007371de);
    /* 007371de: mov edi, ecx */ r_edi = r_ecx;
    /* 007371e0: jmp 0x736fef */ goto L_00736fef;
L_007371e5:; BB(0x007371e5);
    /* 007371e5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007371e8: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007371eb: jmp 0x736fef */ goto L_00736fef;
L_007371f0:; BB(0x007371f0);
    /* 007371f0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007371f6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371f8: jge 0x736cf7 */ if ((fS==fO)) goto L_00736cf7;
L_007371fe:; BB(0x007371fe);
    /* 007371fe: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737201: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737205: mov eax, ecx */ r_eax = r_ecx;
    /* 00737207: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073720b: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0073720f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737213:; BB(0x00737213);
    /* 00737213: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737216: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073721a: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737220: je 0x737229 */ if (fZ) goto L_00737229;
L_00737222:; BB(0x00737222);
    /* 00737222: mov esi, 1 */ r_esi = 0x1u;
    /* 00737227: jmp 0x73722b */ goto L_0073722b;
L_00737229:; BB(0x00737229);
    /* 00737229: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0073722b:; BB(0x0073722b);
    /* 0073722b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073722d: je 0x73724f */ if (fZ) goto L_0073724f;
L_0073722f:; BB(0x0073722f);
    /* 0073722f: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 00737232: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737234: jne 0x737238 */ if (!fZ) goto L_00737238;
L_00737236:; BB(0x00737236);
    /* 00737236: mov edi, ecx */ r_edi = r_ecx;
L_00737238:; BB(0x00737238);
    /* 00737238: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073723b: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0073723e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737240: jl 0x737213 */ if ((fS!=fO)) goto L_00737213;
L_00737242:; BB(0x00737242);
    /* 00737242: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737246: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073724a: jmp 0x736cf7 */ goto L_00736cf7;
L_0073724f:; BB(0x0073724f);
    /* 0073724f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737253: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737259: jne 0x737262 */ if (!fZ) goto L_00737262;
L_0073725b:; BB(0x0073725b);
    /* 0073725b: mov edi, ecx */ r_edi = r_ecx;
    /* 0073725d: jmp 0x736cf7 */ goto L_00736cf7;
L_00737262:; BB(0x00737262);
    /* 00737262: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737265: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00737268: jmp 0x736cf7 */ goto L_00736cf7;
L_0073726d:; BB(0x0073726d);
    /* 0073726d: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00737271: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737275: jmp 0x736ef5 */ goto L_00736ef5;
L_0073727a:; BB(0x0073727a);
    /* 0073727a: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 0073727d: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0073727f: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 00737283: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00737285: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073728b: je 0x737294 */ if (fZ) goto L_00737294;
L_0073728d:; BB(0x0073728d);
    /* 0073728d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00737292: jmp 0x737296 */ goto L_00737296;
L_00737294:; BB(0x00737294);
    /* 00737294: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00737296:; BB(0x00737296);
    /* 00737296: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737298: jne 0x7372eb */ if (!fZ) goto L_007372eb;
L_0073729a:; BB(0x0073729a);
    /* 0073729a: movsx ebx, word ptr [esi + 0x8a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007372a1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007372a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007372a5: je 0x737300 */ if (fZ) goto L_00737300;
L_007372a7:; BB(0x007372a7);
    /* 007372a7: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_007372ab:; BB(0x007372ab);
    /* 007372ab: movsx esi, bp */ r_esi = (u32)(i32)(i16)(u16)r_ebp;
    /* 007372ae: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007372b0: je 0x7372e0 */ if (fZ) goto L_007372e0;
L_007372b2:; BB(0x007372b2);
    /* 007372b2: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 007372b5: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 007372b9: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007372bf: je 0x7372c8 */ if (fZ) goto L_007372c8;
L_007372c1:; BB(0x007372c1);
    /* 007372c1: mov esi, 1 */ r_esi = 0x1u;
    /* 007372c6: jmp 0x7372ca */ goto L_007372ca;
L_007372c8:; BB(0x007372c8);
    /* 007372c8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007372ca:; BB(0x007372ca);
    /* 007372ca: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007372cc: jne 0x7372f2 */ if (!fZ) goto L_007372f2;
L_007372ce:; BB(0x007372ce);
    /* 007372ce: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007372d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007372d3: jne 0x7372ab */ if (!fZ) goto L_007372ab;
L_007372d5:; BB(0x007372d5);
    /* 007372d5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007372d9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007372db: jmp 0x736ec2 */ goto L_00736ec2;
L_007372e0:; BB(0x007372e0);
    /* 007372e0: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007372e4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007372e6: jmp 0x736ec2 */ goto L_00736ec2;
L_007372eb:; BB(0x007372eb);
    /* 007372eb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007372ed: jmp 0x736ec2 */ goto L_00736ec2;
L_007372f2:; BB(0x007372f2);
    /* 007372f2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007372f6: mov eax, ebp */ r_eax = r_ebp;
    /* 007372f8: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 007372fb: jmp 0x736ec2 */ goto L_00736ec2;
L_00737300:; BB(0x00737300);
    /* 00737300: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737302: jmp 0x736ec2 */ goto L_00736ec2;
L_00737307:; BB(0x00737307);
    /* 00737307: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073730b: jmp 0x736e03 */ goto L_00736e03;
L_00737310:; BB(0x00737310);
    /* 00737310: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00737317: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00737319: jne 0x736d7c */ if (!fZ) goto L_00736d7c;
L_0073731f:; BB(0x0073731f);
    /* 0073731f: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 00737326: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737329: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0073732c: mov ecx, eax */ r_ecx = r_eax;
    /* 0073732e: jmp 0x736d52 */ goto L_00736d52;
}

void f_00736a6e(void)
{
    FN_ENTER(0x00736a6e);
    goto L_00736a6e;
L_00736a4c:; BB(0x00736a4c);
    /* 00736a4c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736a4f: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736a52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736a54: jl 0x73713e */ if ((fS!=fO)) goto L_0073713e;
L_00736a5a:; BB(0x00736a5a);
    /* 00736a5a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a5c: je 0x736a84 */ if (fZ) goto L_00736a84;
L_00736a5e:; BB(0x00736a5e);
    /* 00736a5e: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00736a61: mov edi, dword ptr [edi + ecx*4] */ r_edi = R32((u32)(r_edi+r_ecx*4));
    /* 00736a64: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00736a68: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_00736a6e:; BB(0x00736a6e);
    /* 00736a6e: je 0x736a77 */ if (fZ) goto L_00736a77;
L_00736a70:; BB(0x00736a70);
    /* 00736a70: mov edi, 1 */ r_edi = 0x1u;
    /* 00736a75: jmp 0x736a79 */ goto L_00736a79;
L_00736a77:; BB(0x00736a77);
    /* 00736a77: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00736a79:; BB(0x00736a79);
    /* 00736a79: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a7b: je 0x736a4c */ if (fZ) goto L_00736a4c;
L_00736a7d:; BB(0x00736a7d);
    /* 00736a7d: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736a84:; BB(0x00736a84);
    /* 00736a84: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a86: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00736a88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00736a8a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00736a90: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x736a95u); f_007c09fc();
    /* 00736a95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736a97: je 0x736b0b */ if (fZ) goto L_00736b0b;
L_00736a99:; BB(0x00736a99);
    /* 00736a99: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736a9e: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736aa3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736aa8u); f_00814298();
    /* 00736aa8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736aab: movsx eax, word ptr [esi + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736ab2: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736ab9: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736abd: mov edi, eax */ r_edi = r_eax;
L_00736abf:; BB(0x00736abf);
    /* 00736abf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736ac2: movsx ecx, ax */ r_ecx = (u32)(i32)(i16)(u16)r_eax;
    /* 00736ac5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736ac7: jl 0x736adc */ if ((fS!=fO)) goto L_00736adc;
L_00736ac9:; BB(0x00736ac9);
    /* 00736ac9: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00736ad0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ad2: jne 0x737089 */ if (!fZ) goto L_00737089;
L_00736ad8:; BB(0x00736ad8);
    /* 00736ad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736ada: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00736adc:; BB(0x00736adc);
    /* 00736adc: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736ade: je 0x737135 */ if (fZ) goto L_00737135;
L_00736ae4:; BB(0x00736ae4);
    /* 00736ae4: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736ae7: mov ebx, dword ptr [ebx + ecx*4] */ r_ebx = R32((u32)(r_ebx+r_ecx*4));
    /* 00736aea: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736aee: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736af1: je 0x736afa */ if (fZ) goto L_00736afa;
L_00736af3:; BB(0x00736af3);
    /* 00736af3: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736af8: jmp 0x736afc */ goto L_00736afc;
L_00736afa:; BB(0x00736afa);
    /* 00736afa: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736afc:; BB(0x00736afc);
    /* 00736afc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736afe: je 0x736abf */ if (fZ) goto L_00736abf;
L_00736b00:; BB(0x00736b00);
    /* 00736b00: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736b04: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736b0b:; BB(0x00736b0b);
    /* 00736b0b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00736b0d: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736b12u); f_007bfe60();
    /* 00736b12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736b15: je 0x736bfd */ if (fZ) goto L_00736bfd;
L_00736b1b:; BB(0x00736b1b);
    /* 00736b1b: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736b22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00736b27: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736b2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736b31u); f_00814298();
    /* 00736b31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736b34: mov ecx, esi */ r_ecx = r_esi;
    /* 00736b36: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736b3bu); f_007108f4();
    /* 00736b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736b3d: je 0x736bfd */ if (fZ) goto L_00736bfd;
L_00736b43:; BB(0x00736b43);
    /* 00736b43: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736b49: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736b4f: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736b52: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736b59: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736b5b: fldz  */ FPUSH(0.0);
    /* 00736b5d: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00736b61: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736b65: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b67: fchs  */ ST(0) = -ST(0);
    /* 00736b69: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736b6c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736b6e: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736b74: fchs  */ ST(0) = -ST(0);
    /* 00736b76: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736b78: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736b7b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736b7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736b84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736b88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736b8c: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736b8e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736b91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b93: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736b95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736b97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b99: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736b9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736b9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b9e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ba0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ba4: jae 0x736ba8 */ if (!fC) goto L_00736ba8;
L_00736ba6:; BB(0x00736ba6);
    /* 00736ba6: fst st(1) */ ST(1) = ST(0);
L_00736ba8:; BB(0x00736ba8);
    /* 00736ba8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736bab: je 0x736baf */ if (fZ) goto L_00736baf;
L_00736bad:; BB(0x00736bad);
    /* 00736bad: fst st(1) */ ST(1) = ST(0);
L_00736baf:; BB(0x00736baf);
    /* 00736baf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736bb1: fchs  */ ST(0) = -ST(0);
    /* 00736bb3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736bb7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00736bbb:; BB(0x00736bbb);
    /* 00736bbb: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00736bbd: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00736bc0: mov edi, eax */ r_edi = r_eax;
    /* 00736bc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736bc4: jl 0x7370a8 */ if ((fS!=fO)) goto L_007370a8;
L_00736bca:; BB(0x00736bca);
    /* 00736bca: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bcc: je 0x73709b */ if (fZ) goto L_0073709b;
L_00736bd2:; BB(0x00736bd2);
    /* 00736bd2: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736bd5: mov ebp, dword ptr [ebx + edi*4] */ r_ebp = R32((u32)(r_ebx+r_edi*4));
    /* 00736bd8: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00736bdc: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736bdf: je 0x736be8 */ if (fZ) goto L_00736be8;
L_00736be1:; BB(0x00736be1);
    /* 00736be1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736be6: jmp 0x736bea */ goto L_00736bea;
L_00736be8:; BB(0x00736be8);
    /* 00736be8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736bea:; BB(0x00736bea);
    /* 00736bea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bec: je 0x736bbb */ if (fZ) goto L_00736bbb;
L_00736bee:; BB(0x00736bee);
    /* 00736bee: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00736bf2: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736bf6: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736bfd:; BB(0x00736bfd);
    /* 00736bfd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736bff: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736c04u); f_007bfe60();
    /* 00736c04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c07: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c0d:; BB(0x00736c0d);
    /* 00736c0d: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736c16: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736c18: mov edx, 0 */ r_edx = 0x0u;
    /* 00736c1d: jg 0x736c21 */ if ((!fZ&&fS==fO)) goto L_00736c21;
L_00736c1f:; BB(0x00736c1f);
    /* 00736c1f: mov edi, eax */ r_edi = r_eax;
L_00736c21:; BB(0x00736c21);
    /* 00736c21: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736c30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736c35u); f_00814298();
    /* 00736c35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736c38: mov ecx, esi */ r_ecx = r_esi;
    /* 00736c3a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736c3fu); f_007108f4();
    /* 00736c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c41: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c47:; BB(0x00736c47);
    /* 00736c47: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736c4d: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736c53: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736c56: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c5d: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736c64: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736c66: fldz  */ FPUSH(0.0);
    /* 00736c68: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736c6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c6e: fchs  */ ST(0) = -ST(0);
    /* 00736c70: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736c73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736c75: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736c7b: fchs  */ ST(0) = -ST(0);
    /* 00736c7d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736c7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736c82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736c8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736c8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736c93: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736c95: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736c98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c9a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736c9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736ca2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ca3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ca9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cab: jae 0x736caf */ if (!fC) goto L_00736caf;
L_00736cad:; BB(0x00736cad);
    /* 00736cad: fst st(1) */ ST(1) = ST(0);
L_00736caf:; BB(0x00736caf);
    /* 00736caf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cb2: je 0x736cb6 */ if (fZ) goto L_00736cb6;
L_00736cb4:; BB(0x00736cb4);
    /* 00736cb4: fst st(1) */ ST(1) = ST(0);
L_00736cb6:; BB(0x00736cb6);
    /* 00736cb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736cb8: fchs  */ ST(0) = -ST(0);
    /* 00736cba: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736cbe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736cc2:; BB(0x00736cc2);
    /* 00736cc2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736cc4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736cc7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736cc9: jge 0x7371f0 */ if ((fS==fO)) goto L_007371f0;
L_00736ccf:; BB(0x00736ccf);
    /* 00736ccf: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cd1: je 0x737092 */ if (fZ) goto L_00737092;
L_00736cd7:; BB(0x00736cd7);
    /* 00736cd7: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736cda: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736cdd: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736ce1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ce4: je 0x736ced */ if (fZ) goto L_00736ced;
L_00736ce6:; BB(0x00736ce6);
    /* 00736ce6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736ceb: jmp 0x736cef */ goto L_00736cef;
L_00736ced:; BB(0x00736ced);
    /* 00736ced: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736cef:; BB(0x00736cef);
    /* 00736cef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cf1: je 0x736cc2 */ if (fZ) goto L_00736cc2;
L_00736cf3:; BB(0x00736cf3);
    /* 00736cf3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736cf7:; BB(0x00736cf7);
    /* 00736cf7: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736cfe: jmp 0x736ff6 */ goto L_00736ff6;
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00736a6e); r_esp += 4; return;
L_00737089:; BB(0x00737089);
    /* 00737089: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073708d: jmp 0x736b0b */ goto L_00736b0b;
L_00737092:; BB(0x00737092);
    /* 00737092: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737096: jmp 0x736ff6 */ goto L_00736ff6;
L_0073709b:; BB(0x0073709b);
    /* 0073709b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0073709f: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007370a3: jmp 0x736bfd */ goto L_00736bfd;
L_007370a8:; BB(0x007370a8);
    /* 007370a8: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007370ab: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 007370ad: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 007370b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007370b3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370b9: je 0x7370c2 */ if (fZ) goto L_007370c2;
L_007370bb:; BB(0x007370bb);
    /* 007370bb: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007370c0: jmp 0x7370c4 */ goto L_007370c4;
L_007370c2:; BB(0x007370c2);
    /* 007370c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007370c4:; BB(0x007370c4);
    /* 007370c4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370c6: jne 0x737119 */ if (!fZ) goto L_00737119;
L_007370c8:; BB(0x007370c8);
    /* 007370c8: movsx ebx, word ptr [esi + 0x8a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007370cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007370d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370d3: je 0x73712e */ if (fZ) goto L_0073712e;
L_007370d5:; BB(0x007370d5);
    /* 007370d5: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_007370d9:; BB(0x007370d9);
    /* 007370d9: movsx esi, bp */ r_esi = (u32)(i32)(i16)(u16)r_ebp;
    /* 007370dc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370de: je 0x73710e */ if (fZ) goto L_0073710e;
L_007370e0:; BB(0x007370e0);
    /* 007370e0: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 007370e3: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 007370e7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370ed: je 0x7370f6 */ if (fZ) goto L_007370f6;
L_007370ef:; BB(0x007370ef);
    /* 007370ef: mov esi, 1 */ r_esi = 0x1u;
    /* 007370f4: jmp 0x7370f8 */ goto L_007370f8;
L_007370f6:; BB(0x007370f6);
    /* 007370f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007370f8:; BB(0x007370f8);
    /* 007370f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370fa: jne 0x737120 */ if (!fZ) goto L_00737120;
L_007370fc:; BB(0x007370fc);
    /* 007370fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007370ff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737101: jne 0x7370d9 */ if (!fZ) goto L_007370d9;
L_00737103:; BB(0x00737103);
    /* 00737103: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737107: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737109: jmp 0x736bca */ goto L_00736bca;
L_0073710e:; BB(0x0073710e);
    /* 0073710e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737112: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737114: jmp 0x736bca */ goto L_00736bca;
L_00737119:; BB(0x00737119);
    /* 00737119: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073711b: jmp 0x736bca */ goto L_00736bca;
L_00737120:; BB(0x00737120);
    /* 00737120: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737124: mov eax, ebp */ r_eax = r_ebp;
    /* 00737126: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 00737129: jmp 0x736bca */ goto L_00736bca;
L_0073712e:; BB(0x0073712e);
    /* 0073712e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737130: jmp 0x736bca */ goto L_00736bca;
L_00737135:; BB(0x00737135);
    /* 00737135: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737139: jmp 0x736b0b */ goto L_00736b0b;
L_0073713e:; BB(0x0073713e);
    /* 0073713e: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00737145: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00737147: jne 0x736a84 */ if (!fZ) goto L_00736a84;
L_0073714d:; BB(0x0073714d);
    /* 0073714d: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 00737154: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737157: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0073715a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073715c: jmp 0x736a5a */ goto L_00736a5a;
L_007371f0:; BB(0x007371f0);
    /* 007371f0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007371f6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371f8: jge 0x736cf7 */ if ((fS==fO)) goto L_00736cf7;
L_007371fe:; BB(0x007371fe);
    /* 007371fe: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737201: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737205: mov eax, ecx */ r_eax = r_ecx;
    /* 00737207: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073720b: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0073720f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737213:; BB(0x00737213);
    /* 00737213: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737216: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073721a: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737220: je 0x737229 */ if (fZ) goto L_00737229;
L_00737222:; BB(0x00737222);
    /* 00737222: mov esi, 1 */ r_esi = 0x1u;
    /* 00737227: jmp 0x73722b */ goto L_0073722b;
L_00737229:; BB(0x00737229);
    /* 00737229: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0073722b:; BB(0x0073722b);
    /* 0073722b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073722d: je 0x73724f */ if (fZ) goto L_0073724f;
L_0073722f:; BB(0x0073722f);
    /* 0073722f: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 00737232: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737234: jne 0x737238 */ if (!fZ) goto L_00737238;
L_00737236:; BB(0x00737236);
    /* 00737236: mov edi, ecx */ r_edi = r_ecx;
L_00737238:; BB(0x00737238);
    /* 00737238: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073723b: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0073723e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737240: jl 0x737213 */ if ((fS!=fO)) goto L_00737213;
L_00737242:; BB(0x00737242);
    /* 00737242: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737246: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073724a: jmp 0x736cf7 */ goto L_00736cf7;
L_0073724f:; BB(0x0073724f);
    /* 0073724f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737253: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737259: jne 0x737262 */ if (!fZ) goto L_00737262;
L_0073725b:; BB(0x0073725b);
    /* 0073725b: mov edi, ecx */ r_edi = r_ecx;
    /* 0073725d: jmp 0x736cf7 */ goto L_00736cf7;
L_00737262:; BB(0x00737262);
    /* 00737262: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737265: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00737268: jmp 0x736cf7 */ goto L_00736cf7;
}

void f_00736b32(void)
{
    FN_ENTER(0x00736b32);
    /* 00736b32: les edx, ptr [eax] */ UNSUP(0x00736b32, "les edx, ptr [eax]");
    /* 00736b34: mov ecx, esi */ r_ecx = r_esi;
    /* 00736b36: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736b3bu); f_007108f4();
    /* 00736b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736b3d: je 0x736bfd */ if (fZ) goto L_00736bfd;
L_00736b43:; BB(0x00736b43);
    /* 00736b43: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736b49: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736b4f: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736b52: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736b59: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736b5b: fldz  */ FPUSH(0.0);
    /* 00736b5d: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00736b61: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736b65: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b67: fchs  */ ST(0) = -ST(0);
    /* 00736b69: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736b6c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736b6e: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736b74: fchs  */ ST(0) = -ST(0);
    /* 00736b76: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736b78: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736b7b: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736b7f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736b84: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736b88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736b8c: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736b8e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736b91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736b93: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736b95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736b97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b99: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736b9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736b9c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736b9e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ba0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ba2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ba4: jae 0x736ba8 */ if (!fC) goto L_00736ba8;
L_00736ba6:; BB(0x00736ba6);
    /* 00736ba6: fst st(1) */ ST(1) = ST(0);
L_00736ba8:; BB(0x00736ba8);
    /* 00736ba8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ba9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736bab: je 0x736baf */ if (fZ) goto L_00736baf;
L_00736bad:; BB(0x00736bad);
    /* 00736bad: fst st(1) */ ST(1) = ST(0);
L_00736baf:; BB(0x00736baf);
    /* 00736baf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736bb1: fchs  */ ST(0) = -ST(0);
    /* 00736bb3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736bb7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00736bbb:; BB(0x00736bbb);
    /* 00736bbb: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00736bbd: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00736bc0: mov edi, eax */ r_edi = r_eax;
    /* 00736bc2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00736bc4: jl 0x7370a8 */ if ((fS!=fO)) goto L_007370a8;
L_00736bca:; BB(0x00736bca);
    /* 00736bca: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bcc: je 0x73709b */ if (fZ) goto L_0073709b;
L_00736bd2:; BB(0x00736bd2);
    /* 00736bd2: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736bd5: mov ebp, dword ptr [ebx + edi*4] */ r_ebp = R32((u32)(r_ebx+r_edi*4));
    /* 00736bd8: movzx ebx, word ptr [ebp + 4] */ r_ebx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00736bdc: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736bdf: je 0x736be8 */ if (fZ) goto L_00736be8;
L_00736be1:; BB(0x00736be1);
    /* 00736be1: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736be6: jmp 0x736bea */ goto L_00736bea;
L_00736be8:; BB(0x00736be8);
    /* 00736be8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736bea:; BB(0x00736bea);
    /* 00736bea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736bec: je 0x736bbb */ if (fZ) goto L_00736bbb;
L_00736bee:; BB(0x00736bee);
    /* 00736bee: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00736bf2: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00736bf6: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
L_00736bfd:; BB(0x00736bfd);
    /* 00736bfd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736bff: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736c04u); f_007bfe60();
    /* 00736c04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736c05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c07: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c0d:; BB(0x00736c0d);
    /* 00736c0d: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736c16: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736c18: mov edx, 0 */ r_edx = 0x0u;
    /* 00736c1d: jg 0x736c21 */ if ((!fZ&&fS==fO)) goto L_00736c21;
L_00736c1f:; BB(0x00736c1f);
    /* 00736c1f: mov edi, eax */ r_edi = r_eax;
L_00736c21:; BB(0x00736c21);
    /* 00736c21: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736c28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736c2b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736c30: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736c35u); f_00814298();
    /* 00736c35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736c38: mov ecx, esi */ r_ecx = r_esi;
    /* 00736c3a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736c3fu); f_007108f4();
    /* 00736c3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736c41: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736c47:; BB(0x00736c47);
    /* 00736c47: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736c4d: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736c53: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736c56: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c5d: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736c64: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736c66: fldz  */ FPUSH(0.0);
    /* 00736c68: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736c6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c6e: fchs  */ ST(0) = -ST(0);
    /* 00736c70: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736c73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736c75: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736c7b: fchs  */ ST(0) = -ST(0);
    /* 00736c7d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736c7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736c82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736c8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736c8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736c93: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736c95: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736c98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c9a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736c9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736ca2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ca3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ca9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cab: jae 0x736caf */ if (!fC) goto L_00736caf;
L_00736cad:; BB(0x00736cad);
    /* 00736cad: fst st(1) */ ST(1) = ST(0);
L_00736caf:; BB(0x00736caf);
    /* 00736caf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cb2: je 0x736cb6 */ if (fZ) goto L_00736cb6;
L_00736cb4:; BB(0x00736cb4);
    /* 00736cb4: fst st(1) */ ST(1) = ST(0);
L_00736cb6:; BB(0x00736cb6);
    /* 00736cb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736cb8: fchs  */ ST(0) = -ST(0);
    /* 00736cba: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736cbe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736cc2:; BB(0x00736cc2);
    /* 00736cc2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736cc4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736cc7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736cc9: jge 0x7371f0 */ if ((fS==fO)) goto L_007371f0;
L_00736ccf:; BB(0x00736ccf);
    /* 00736ccf: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cd1: je 0x737092 */ if (fZ) goto L_00737092;
L_00736cd7:; BB(0x00736cd7);
    /* 00736cd7: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736cda: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736cdd: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736ce1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ce4: je 0x736ced */ if (fZ) goto L_00736ced;
L_00736ce6:; BB(0x00736ce6);
    /* 00736ce6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736ceb: jmp 0x736cef */ goto L_00736cef;
L_00736ced:; BB(0x00736ced);
    /* 00736ced: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736cef:; BB(0x00736cef);
    /* 00736cef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cf1: je 0x736cc2 */ if (fZ) goto L_00736cc2;
L_00736cf3:; BB(0x00736cf3);
    /* 00736cf3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736cf7:; BB(0x00736cf7);
    /* 00736cf7: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736cfe: jmp 0x736ff6 */ goto L_00736ff6;
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00736b32); r_esp += 4; return;
L_00737092:; BB(0x00737092);
    /* 00737092: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737096: jmp 0x736ff6 */ goto L_00736ff6;
L_0073709b:; BB(0x0073709b);
    /* 0073709b: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 0073709f: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007370a3: jmp 0x736bfd */ goto L_00736bfd;
L_007370a8:; BB(0x007370a8);
    /* 007370a8: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 007370ab: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 007370ad: movzx ebp, word ptr [ebx + 4] */ r_ebp = (u32)R16((u32)(r_ebx+0x4u));
    /* 007370b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007370b3: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370b9: je 0x7370c2 */ if (fZ) goto L_007370c2;
L_007370bb:; BB(0x007370bb);
    /* 007370bb: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007370c0: jmp 0x7370c4 */ goto L_007370c4;
L_007370c2:; BB(0x007370c2);
    /* 007370c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007370c4:; BB(0x007370c4);
    /* 007370c4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370c6: jne 0x737119 */ if (!fZ) goto L_00737119;
L_007370c8:; BB(0x007370c8);
    /* 007370c8: movsx ebx, word ptr [esi + 0x8a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007370cf: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007370d1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370d3: je 0x73712e */ if (fZ) goto L_0073712e;
L_007370d5:; BB(0x007370d5);
    /* 007370d5: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
L_007370d9:; BB(0x007370d9);
    /* 007370d9: movsx esi, bp */ r_esi = (u32)(i32)(i16)(u16)r_ebp;
    /* 007370dc: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370de: je 0x73710e */ if (fZ) goto L_0073710e;
L_007370e0:; BB(0x007370e0);
    /* 007370e0: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 007370e3: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 007370e7: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370ed: je 0x7370f6 */ if (fZ) goto L_007370f6;
L_007370ef:; BB(0x007370ef);
    /* 007370ef: mov esi, 1 */ r_esi = 0x1u;
    /* 007370f4: jmp 0x7370f8 */ goto L_007370f8;
L_007370f6:; BB(0x007370f6);
    /* 007370f6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007370f8:; BB(0x007370f8);
    /* 007370f8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007370fa: jne 0x737120 */ if (!fZ) goto L_00737120;
L_007370fc:; BB(0x007370fc);
    /* 007370fc: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007370ff: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737101: jne 0x7370d9 */ if (!fZ) goto L_007370d9;
L_00737103:; BB(0x00737103);
    /* 00737103: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737107: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737109: jmp 0x736bca */ goto L_00736bca;
L_0073710e:; BB(0x0073710e);
    /* 0073710e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737112: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737114: jmp 0x736bca */ goto L_00736bca;
L_00737119:; BB(0x00737119);
    /* 00737119: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0073711b: jmp 0x736bca */ goto L_00736bca;
L_00737120:; BB(0x00737120);
    /* 00737120: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737124: mov eax, ebp */ r_eax = r_ebp;
    /* 00737126: movsx edi, bp */ r_edi = (u32)(i32)(i16)(u16)r_ebp;
    /* 00737129: jmp 0x736bca */ goto L_00736bca;
L_0073712e:; BB(0x0073712e);
    /* 0073712e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00737130: jmp 0x736bca */ goto L_00736bca;
L_007371f0:; BB(0x007371f0);
    /* 007371f0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007371f6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371f8: jge 0x736cf7 */ if ((fS==fO)) goto L_00736cf7;
L_007371fe:; BB(0x007371fe);
    /* 007371fe: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737201: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737205: mov eax, ecx */ r_eax = r_ecx;
    /* 00737207: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073720b: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0073720f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737213:; BB(0x00737213);
    /* 00737213: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737216: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073721a: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737220: je 0x737229 */ if (fZ) goto L_00737229;
L_00737222:; BB(0x00737222);
    /* 00737222: mov esi, 1 */ r_esi = 0x1u;
    /* 00737227: jmp 0x73722b */ goto L_0073722b;
L_00737229:; BB(0x00737229);
    /* 00737229: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0073722b:; BB(0x0073722b);
    /* 0073722b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073722d: je 0x73724f */ if (fZ) goto L_0073724f;
L_0073722f:; BB(0x0073722f);
    /* 0073722f: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 00737232: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737234: jne 0x737238 */ if (!fZ) goto L_00737238;
L_00737236:; BB(0x00737236);
    /* 00737236: mov edi, ecx */ r_edi = r_ecx;
L_00737238:; BB(0x00737238);
    /* 00737238: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073723b: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0073723e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737240: jl 0x737213 */ if ((fS!=fO)) goto L_00737213;
L_00737242:; BB(0x00737242);
    /* 00737242: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737246: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073724a: jmp 0x736cf7 */ goto L_00736cf7;
L_0073724f:; BB(0x0073724f);
    /* 0073724f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737253: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737259: jne 0x737262 */ if (!fZ) goto L_00737262;
L_0073725b:; BB(0x0073725b);
    /* 0073725b: mov edi, ecx */ r_edi = r_ecx;
    /* 0073725d: jmp 0x736cf7 */ goto L_00736cf7;
L_00737262:; BB(0x00737262);
    /* 00737262: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737265: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00737268: jmp 0x736cf7 */ goto L_00736cf7;
}

void f_00736c6f(void)
{
    FN_ENTER(0x00736c6f);
    goto L_00736c6f;
L_00736c49:; BB(0x00736c49);
    /* 00736c49: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00736c4a: add ebp, dword ptr [edi + 0x6c05d900] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x6c05d900u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00736c50: adc eax, 0x40d90097 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x40d90097u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00736c55: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00736c56: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736c5d: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736c64: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736c66: fldz  */ FPUSH(0.0);
    /* 00736c68: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736c6c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c6e: fchs  */ ST(0) = -ST(0);
L_00736c6f:; BB(0x00736c6f);
    /* 00736c6f: loopne 0x736c49 */ r_ecx--; if (r_ecx && !fZ) goto L_00736c49;
    /* 00736c70: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736c71: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00736c72: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00736c73: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736c75: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736c7b: fchs  */ ST(0) = -ST(0);
    /* 00736c7d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736c7f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736c82: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736c86: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736c8b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736c8f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736c93: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736c95: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736c98: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736c9a: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736c9c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736ca2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736ca3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736ca5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736ca7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736ca9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cab: jae 0x736caf */ if (!fC) goto L_00736caf;
L_00736cad:; BB(0x00736cad);
    /* 00736cad: fst st(1) */ ST(1) = ST(0);
L_00736caf:; BB(0x00736caf);
    /* 00736caf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736cb2: je 0x736cb6 */ if (fZ) goto L_00736cb6;
L_00736cb4:; BB(0x00736cb4);
    /* 00736cb4: fst st(1) */ ST(1) = ST(0);
L_00736cb6:; BB(0x00736cb6);
    /* 00736cb6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736cb8: fchs  */ ST(0) = -ST(0);
    /* 00736cba: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736cbe: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736cc2:; BB(0x00736cc2);
    /* 00736cc2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736cc4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736cc7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736cc9: jge 0x7371f0 */ if ((fS==fO)) goto L_007371f0;
L_00736ccf:; BB(0x00736ccf);
    /* 00736ccf: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cd1: je 0x737092 */ if (fZ) goto L_00737092;
L_00736cd7:; BB(0x00736cd7);
    /* 00736cd7: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736cda: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736cdd: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736ce1: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736ce4: je 0x736ced */ if (fZ) goto L_00736ced;
L_00736ce6:; BB(0x00736ce6);
    /* 00736ce6: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736ceb: jmp 0x736cef */ goto L_00736cef;
L_00736ced:; BB(0x00736ced);
    /* 00736ced: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736cef:; BB(0x00736cef);
    /* 00736cef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736cf1: je 0x736cc2 */ if (fZ) goto L_00736cc2;
L_00736cf3:; BB(0x00736cf3);
    /* 00736cf3: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736cf7:; BB(0x00736cf7);
    /* 00736cf7: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736cfe: jmp 0x736ff6 */ goto L_00736ff6;
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00736c6f); r_esp += 4; return;
L_00737092:; BB(0x00737092);
    /* 00737092: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737096: jmp 0x736ff6 */ goto L_00736ff6;
L_007371f0:; BB(0x007371f0);
    /* 007371f0: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007371f6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371f8: jge 0x736cf7 */ if ((fS==fO)) goto L_00736cf7;
L_007371fe:; BB(0x007371fe);
    /* 007371fe: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737201: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737205: mov eax, ecx */ r_eax = r_ecx;
    /* 00737207: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073720b: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0073720f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737213:; BB(0x00737213);
    /* 00737213: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737216: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073721a: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737220: je 0x737229 */ if (fZ) goto L_00737229;
L_00737222:; BB(0x00737222);
    /* 00737222: mov esi, 1 */ r_esi = 0x1u;
    /* 00737227: jmp 0x73722b */ goto L_0073722b;
L_00737229:; BB(0x00737229);
    /* 00737229: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0073722b:; BB(0x0073722b);
    /* 0073722b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073722d: je 0x73724f */ if (fZ) goto L_0073724f;
L_0073722f:; BB(0x0073722f);
    /* 0073722f: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 00737232: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737234: jne 0x737238 */ if (!fZ) goto L_00737238;
L_00737236:; BB(0x00737236);
    /* 00737236: mov edi, ecx */ r_edi = r_ecx;
L_00737238:; BB(0x00737238);
    /* 00737238: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0073723b: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0073723e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737240: jl 0x737213 */ if ((fS!=fO)) goto L_00737213;
L_00737242:; BB(0x00737242);
    /* 00737242: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737246: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073724a: jmp 0x736cf7 */ goto L_00736cf7;
L_0073724f:; BB(0x0073724f);
    /* 0073724f: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00737253: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737259: jne 0x737262 */ if (!fZ) goto L_00737262;
L_0073725b:; BB(0x0073725b);
    /* 0073725b: mov edi, ecx */ r_edi = r_ecx;
    /* 0073725d: jmp 0x736cf7 */ goto L_00736cf7;
L_00737262:; BB(0x00737262);
    /* 00737262: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737265: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00737268: jmp 0x736cf7 */ goto L_00736cf7;
}

void f_00736f63(void)
{
    FN_ENTER(0x00736f63);
    /* 00736f63: sbb al, 0xd9 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xd9u; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00736f65: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00736f66: fchs  */ ST(0) = -ST(0);
    /* 00736f68: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736f6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736f6d: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736f73: fchs  */ ST(0) = -ST(0);
    /* 00736f75: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736f77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736f7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736f7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736f83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736f87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736f8b: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736f8d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736f90: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f92: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736f94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736f96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f98: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736f9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f9d: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736f9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736fa3: jae 0x736fa7 */ if (!fC) goto L_00736fa7;
L_00736fa5:; BB(0x00736fa5);
    /* 00736fa5: fst st(1) */ ST(1) = ST(0);
L_00736fa7:; BB(0x00736fa7);
    /* 00736fa7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736fa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736faa: je 0x736fae */ if (fZ) goto L_00736fae;
L_00736fac:; BB(0x00736fac);
    /* 00736fac: fst st(1) */ ST(1) = ST(0);
L_00736fae:; BB(0x00736fae);
    /* 00736fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736fb0: fchs  */ ST(0) = -ST(0);
    /* 00736fb2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736fb6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736fba:; BB(0x00736fba);
    /* 00736fba: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736fbc: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736fbf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736fc1: jge 0x737173 */ if ((fS==fO)) goto L_00737173;
L_00736fc7:; BB(0x00736fc7);
    /* 00736fc7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fc9: je 0x73716a */ if (fZ) goto L_0073716a;
L_00736fcf:; BB(0x00736fcf);
    /* 00736fcf: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736fd2: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736fd5: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736fd9: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736fdc: je 0x736fe5 */ if (fZ) goto L_00736fe5;
L_00736fde:; BB(0x00736fde);
    /* 00736fde: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736fe3: jmp 0x736fe7 */ goto L_00736fe7;
L_00736fe5:; BB(0x00736fe5);
    /* 00736fe5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736fe7:; BB(0x00736fe7);
    /* 00736fe7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fe9: je 0x736fba */ if (fZ) goto L_00736fba;
L_00736feb:; BB(0x00736feb);
    /* 00736feb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736fef:; BB(0x00736fef);
    /* 00736fef: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00736f63); r_esp += 4; return;
L_0073716a:; BB(0x0073716a);
    /* 0073716a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073716e: jmp 0x736ff6 */ goto L_00736ff6;
L_00737173:; BB(0x00737173);
    /* 00737173: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737177: mov edi, ecx */ r_edi = r_ecx;
    /* 00737179: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073717b: jge 0x736fef */ if ((fS==fO)) goto L_00736fef;
L_00737181:; BB(0x00737181);
    /* 00737181: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737184: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737188: mov eax, ecx */ r_eax = r_ecx;
    /* 0073718a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073718e: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00737192: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737196:; BB(0x00737196);
    /* 00737196: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737199: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073719d: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371a3: je 0x7371ac */ if (fZ) goto L_007371ac;
L_007371a5:; BB(0x007371a5);
    /* 007371a5: mov esi, 1 */ r_esi = 0x1u;
    /* 007371aa: jmp 0x7371ae */ goto L_007371ae;
L_007371ac:; BB(0x007371ac);
    /* 007371ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007371ae:; BB(0x007371ae);
    /* 007371ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b0: je 0x7371d2 */ if (fZ) goto L_007371d2;
L_007371b2:; BB(0x007371b2);
    /* 007371b2: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007371b5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b7: jne 0x7371bb */ if (!fZ) goto L_007371bb;
L_007371b9:; BB(0x007371b9);
    /* 007371b9: mov edi, ecx */ r_edi = r_ecx;
L_007371bb:; BB(0x007371bb);
    /* 007371bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007371be: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007371c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371c3: jl 0x737196 */ if ((fS!=fO)) goto L_00737196;
L_007371c5:; BB(0x007371c5);
    /* 007371c5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371c9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371cd: jmp 0x736fef */ goto L_00736fef;
L_007371d2:; BB(0x007371d2);
    /* 007371d2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371d6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371dc: jne 0x7371e5 */ if (!fZ) goto L_007371e5;
L_007371de:; BB(0x007371de);
    /* 007371de: mov edi, ecx */ r_edi = r_ecx;
    /* 007371e0: jmp 0x736fef */ goto L_00736fef;
L_007371e5:; BB(0x007371e5);
    /* 007371e5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007371e8: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007371eb: jmp 0x736fef */ goto L_00736fef;
}

