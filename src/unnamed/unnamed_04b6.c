#include "protos.h"

void f_004b60a0(void) /* sub_4B60A0 */
{
    FN_ENTER(0x004b60a0);
    /* 004b60a0: mov edx, dword ptr [ecx + 0x7b8] */ r_edx = R32((u32)(r_ecx+0x7b8u));
    /* 004b60a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b60a8: je 0x4b60c1 */ if (fZ) goto L_004b60c1;
L_004b60aa:; BB(0x004b60aa);
    /* 004b60aa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b60ae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b60b3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b60b7: mov dword ptr [ecx + 0x7b8], 0 */ W32((u32)(r_ecx+0x7b8u), 0x0u);
L_004b60c1:; BB(0x004b60c1);
    /* 004b60c1: ret  */ FN_RET(0x004b60a0); r_esp += 4; return;
}

void f_004b60c4(void) /* sub_4B60C4 */
{
    FN_ENTER(0x004b60c4);
    /* 004b60c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b60c5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b60c8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b60ca: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 004b60ce: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b60d1: je 0x4b62a6 */ if (fZ) goto L_004b62a6;
L_004b60d7:; BB(0x004b60d7);
    /* 004b60d7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b60da: je 0x4b60fc */ if (fZ) goto L_004b60fc;
L_004b60dc:; BB(0x004b60dc);
    /* 004b60dc: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b60df: je 0x4b6153 */ if (fZ) goto L_004b6153;
L_004b60e1:; BB(0x004b60e1);
    /* 004b60e1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b60e4: je 0x4b6103 */ if (fZ) goto L_004b6103;
L_004b60e6:; BB(0x004b60e6);
    /* 004b60e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b60e8: jne 0x4b60fc */ if (!fZ) goto L_004b60fc;
L_004b60ea:; BB(0x004b60ea);
    /* 004b60ea: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b60f0: fsub dword ptr [0x906d5c] */ ST(0) = ST(0) - R_F32((u32)(0x906d5cu));
    /* 004b60f6: fstp dword ptr [ebx + 0x6f8] */ W_F32((u32)(r_ebx+0x6f8u), ST(0)); FPOP();
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b60c4); r_esp += 8; return;
L_004b6103:; BB(0x004b6103);
    /* 004b6103: fld dword ptr [ebx + 0x6f8] */ FPUSH(R_F32((u32)(r_ebx+0x6f8u)));
    /* 004b6109: fcomp dword ptr [0x906d58] */ fx_compare(ST(0), R_F32((u32)(0x906d58u))); FPOP();
    /* 004b610f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6112: jae 0x4b60fc */ if (!fC) goto L_004b60fc;
L_004b6114:; BB(0x004b6114);
    /* 004b6114: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6116: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004b6118: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b611a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b611c: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b6122u); call_ind(t); }
    /* 004b6122: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b6126: mov ebx, dword ptr [ebx + 0x6bc] */ r_ebx = R32((u32)(r_ebx+0x6bcu));
    /* 004b612c: mov byte ptr [esp], 0xa9 */ W8((u32)(r_esp), 0xa9u);
    /* 004b6130: mov edx, 0x1c */ r_edx = 0x1cu;
    /* 004b6135: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004b613a: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 004b613f: mov word ptr [esp + 4], dx */ W16((u32)(r_esp+0x4u), (u16)r_edx);
    /* 004b6144: mov word ptr [esp + 6], bx */ W16((u32)(r_esp+0x6u), (u16)r_ebx);
    /* 004b6149: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004b614c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b6151u); f_008003e0();
    /* 004b6151: jmp 0x4b60fc */ goto L_004b60fc;
L_004b6153:; BB(0x004b6153);
    /* 004b6153: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b615a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b615d: jne 0x4b60fc */ if (!fZ) goto L_004b60fc;
L_004b615f:; BB(0x004b615f);
    /* 004b615f: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b6165: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b616c: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b6172: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b6175: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b617b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b617f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b6182: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b6185: ja 0x4b6299 */ if ((!fC&&!fZ)) goto L_004b6299;
L_004b618b:; BB(0x004b618b);
    /* 004b618b: mov ecx, dword ptr [ecx*4 + 0x9057e0] */ r_ecx = R32((u32)(r_ecx*4+0x9057e0u));
    /* 004b6192: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
L_004b62a6:; BB(0x004b62a6);
    /* 004b62a6: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b62ac: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b62ae: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b62b1: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b62b6: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b62bc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b62be: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b62c4u); call_ind(t); }
    /* 004b62c4: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004b62c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b62ca: mov esi, eax */ r_esi = r_eax;
L_004b62cc:; BB(0x004b62cc);
    /* 004b62cc: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b62d3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b62d5: call dword ptr [edx + 0x184] */ { u32 t = R32((u32)(r_edx+0x184u)); r_esp -= 4; W32(r_esp, 0x4b62dbu); call_ind(t); }
    /* 004b62db: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b62de: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b62e1: jl 0x4b62cc */ if ((fS!=fO)) goto L_004b62cc;
L_004b62e3:; BB(0x004b62e3);
    /* 004b62e3: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004b62e7: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
    /* 004b62ee: mov dword ptr [ebx + 0x6f8], 0 */ W32((u32)(r_ebx+0x6f8u), 0x0u);
    /* 004b62f8: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6194(void)
{
    FN_ENTER(0x004b6194);
    goto L_004b6194;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b6194); r_esp += 8; return;
L_004b6172:; BB(0x004b6172);
    /* 004b6172: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b6175: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b617b: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b617f: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b6182: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b6185: ja 0x4b6299 */ if ((!fC&&!fZ)) goto L_004b6299;
L_004b618b:; BB(0x004b618b);
    /* 004b618b: mov ecx, dword ptr [ecx*4 + 0x9057e0] */ r_ecx = R32((u32)(r_ecx*4+0x9057e0u));
    /* 004b6192: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b6194:; BB(0x004b6194);
    /* 004b6194: mov eax, 1 */ r_eax = 0x1u;
    /* 004b6199: jmp 0x4b6172 */ goto L_004b6172;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b619b(void)
{
    FN_ENTER(0x004b619b);
    goto L_004b619b;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b619b); r_esp += 8; return;
L_004b619b:; BB(0x004b619b);
    /* 004b619b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b61a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b61a3: jne 0x4b61af */ if (!fZ) goto L_004b61af;
L_004b61a5:; BB(0x004b61a5);
    /* 004b61a5: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b61aa: jmp 0x4b6299 */ goto L_004b6299;
L_004b61af:; BB(0x004b61af);
    /* 004b61af: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b61b4: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b61b9(void)
{
    FN_ENTER(0x004b61b9);
    goto L_004b61b9;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b61b9); r_esp += 8; return;
L_004b61b9:; BB(0x004b61b9);
    /* 004b61b9: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b61bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b61c1: jne 0x4b61cd */ if (!fZ) goto L_004b61cd;
L_004b61c3:; BB(0x004b61c3);
    /* 004b61c3: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b61c8: jmp 0x4b6299 */ goto L_004b6299;
L_004b61cd:; BB(0x004b61cd);
    /* 004b61cd: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b61d2: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b61d7(void)
{
    FN_ENTER(0x004b61d7);
    goto L_004b61d7;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b61d7); r_esp += 8; return;
L_004b61d7:; BB(0x004b61d7);
    /* 004b61d7: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b61dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b61df: jne 0x4b61eb */ if (!fZ) goto L_004b61eb;
L_004b61e1:; BB(0x004b61e1);
    /* 004b61e1: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b61e6: jmp 0x4b6299 */ goto L_004b6299;
L_004b61eb:; BB(0x004b61eb);
    /* 004b61eb: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b61f0: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b61f5(void)
{
    FN_ENTER(0x004b61f5);
    goto L_004b61f5;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b61f5); r_esp += 8; return;
L_004b61f5:; BB(0x004b61f5);
    /* 004b61f5: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b61fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b61fd: jne 0x4b6209 */ if (!fZ) goto L_004b6209;
L_004b61ff:; BB(0x004b61ff);
    /* 004b61ff: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b6204: jmp 0x4b6299 */ goto L_004b6299;
L_004b6209:; BB(0x004b6209);
    /* 004b6209: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b620e: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6213(void)
{
    FN_ENTER(0x004b6213);
    goto L_004b6213;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b6213); r_esp += 8; return;
L_004b6213:; BB(0x004b6213);
    /* 004b6213: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6219: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b621b: jne 0x4b6224 */ if (!fZ) goto L_004b6224;
L_004b621d:; BB(0x004b621d);
    /* 004b621d: mov eax, 4 */ r_eax = 0x4u;
    /* 004b6222: jmp 0x4b6299 */ goto L_004b6299;
L_004b6224:; BB(0x004b6224);
    /* 004b6224: mov eax, 0xa */ r_eax = 0xau;
    /* 004b6229: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b622b(void)
{
    FN_ENTER(0x004b622b);
    goto L_004b622b;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b622b); r_esp += 8; return;
L_004b622b:; BB(0x004b622b);
    /* 004b622b: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6233: jne 0x4b623c */ if (!fZ) goto L_004b623c;
L_004b6235:; BB(0x004b6235);
    /* 004b6235: mov eax, 3 */ r_eax = 0x3u;
    /* 004b623a: jmp 0x4b6299 */ goto L_004b6299;
L_004b623c:; BB(0x004b623c);
    /* 004b623c: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b6241: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6243(void)
{
    FN_ENTER(0x004b6243);
    goto L_004b6243;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b6243); r_esp += 8; return;
L_004b6243:; BB(0x004b6243);
    /* 004b6243: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6245: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b624au); f_00520bf4();
    /* 004b624a: fcomp dword ptr [0x906d60] */ fx_compare(ST(0), R_F32((u32)(0x906d60u))); FPOP();
    /* 004b6250: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6252: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6253: jbe 0x4b625c */ if ((fC||fZ)) goto L_004b625c;
L_004b6255:; BB(0x004b6255);
    /* 004b6255: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b625a: jmp 0x4b6299 */ goto L_004b6299;
L_004b625c:; BB(0x004b625c);
    /* 004b625c: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b6261: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6263(void)
{
    FN_ENTER(0x004b6263);
    goto L_004b6263;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b6263); r_esp += 8; return;
L_004b6263:; BB(0x004b6263);
    /* 004b6263: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6269: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b626b: jne 0x4b6274 */ if (!fZ) goto L_004b6274;
L_004b626d:; BB(0x004b626d);
    /* 004b626d: mov eax, 5 */ r_eax = 0x5u;
    /* 004b6272: jmp 0x4b6299 */ goto L_004b6299;
L_004b6274:; BB(0x004b6274);
    /* 004b6274: mov eax, 9 */ r_eax = 0x9u;
    /* 004b6279: jmp 0x4b6299 */ goto L_004b6299;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b627b(void)
{
    FN_ENTER(0x004b627b);
    goto L_004b627b;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b627b); r_esp += 8; return;
L_004b627b:; BB(0x004b627b);
    /* 004b627b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b627d: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6282u); f_00520bf4();
    /* 004b6282: fcomp dword ptr [0x906d60] */ fx_compare(ST(0), R_F32((u32)(0x906d60u))); FPOP();
    /* 004b6288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b628a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b628b: jbe 0x4b6294 */ if ((fC||fZ)) goto L_004b6294;
L_004b628d:; BB(0x004b628d);
    /* 004b628d: mov eax, 8 */ r_eax = 0x8u;
    /* 004b6292: jmp 0x4b6299 */ goto L_004b6299;
L_004b6294:; BB(0x004b6294);
    /* 004b6294: mov eax, 6 */ r_eax = 0x6u;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6299(void)
{
    FN_ENTER(0x004b6299);
    goto L_004b6299;
L_004b60fc:; BB(0x004b60fc);
    /* 004b60fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b60ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6100: ret 4 */ FN_RET(0x004b6299); r_esp += 8; return;
L_004b6299:; BB(0x004b6299);
    /* 004b6299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b629a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b629c: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b62a1u); f_004b5150();
    /* 004b62a1: jmp 0x4b60fc */ goto L_004b60fc;
}

void f_004b6300(void) /* sub_4B6300 */
{
    FN_ENTER(0x004b6300);
    /* 004b6300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004b6301: mov ebp, esp */ r_ebp = r_esp;
    /* 004b6303: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004b6305: push 0x8d0e28 */ { u32 v = 0x8d0e28u; r_esp -= 4; W32(r_esp, v); }
    /* 004b630a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004b6310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6311: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004b6318: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b631e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004b6321: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 004b6324: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 004b6327: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004b632a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004b632d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004b6330: lea eax, [ecx + 0x774] */ r_eax = (u32)(r_ecx+0x774u);
    /* 004b6336: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6339: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b633c: je 0x4b6ba6 */ if (fZ) goto L_004b6ba6;
L_004b6342:; BB(0x004b6342);
    /* 004b6342: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6345: je 0x4b6b02 */ if (fZ) goto L_004b6b02;
L_004b634b:; BB(0x004b634b);
    /* 004b634b: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b634e: je 0x4b698c */ if (fZ) goto L_004b698c;
L_004b6354:; BB(0x004b6354);
    /* 004b6354: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b6357: je 0x4b67d2 */ if (fZ) goto L_004b67d2;
L_004b635d:; BB(0x004b635d);
    /* 004b635d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b635f: je 0x4b64b2 */ if (fZ) goto L_004b64b2;
L_004b6365:; BB(0x004b6365);
    /* 004b6365: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6368: jne 0x4b63f8 */ if (!fZ) goto L_004b63f8;
L_004b636e:; BB(0x004b636e);
    /* 004b636e: mov edi, dword ptr [0xaae168] */ r_edi = R32((u32)(0xaae168u));
    /* 004b6374: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6376: je 0x4b63ee */ if (fZ) goto L_004b63ee;
L_004b6378:; BB(0x004b6378);
    /* 004b6378: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b637b: je 0x4b67eb */ if (fZ) goto L_004b67eb;
L_004b6381:; BB(0x004b6381);
    /* 004b6381: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x4b6386u); f_007751b0();
    /* 004b6386: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6389: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 004b638c: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 004b638f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b6391: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 004b6394: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 004b6398: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b639d: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b63a2: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 004b63a5: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 004b63a8: fistp dword ptr [ebp - 0x30] */ W32((u32)(r_ebp+0xffffffd0u), (u32)fx_int32(ST(0))); FPOP();
    /* 004b63ab: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 004b63ae: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004b63b1: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b63b6u); f_00520f68();
    /* 004b63b6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004b63b8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b63ba: jle 0x4b67d2 */ if ((fZ||fS!=fO)) goto L_004b67d2;
L_004b63c0:; BB(0x004b63c0);
    /* 004b63c0: mov eax, dword ptr [esi*4 + 0xaad720] */ r_eax = R32((u32)(r_esi*4+0xaad720u));
    /* 004b63c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b63ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b63cb: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x4b63d0u); f_00520f3c();
    /* 004b63d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004b63d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b63d3: jne 0x4b697b */ if (!fZ) goto L_004b697b;
L_004b63d9:; BB(0x004b63d9);
    /* 004b63d9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b63dc: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b63de: jl 0x4b63e2 */ if ((fS!=fO)) goto L_004b63e2;
L_004b63e0:; BB(0x004b63e0);
    /* 004b63e0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004b63e2:; BB(0x004b63e2);
    /* 004b63e2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b63e5: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b63e7: jl 0x4b63c0 */ if ((fS!=fO)) goto L_004b63c0;
L_004b63e9:; BB(0x004b63e9);
    /* 004b63e9: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b63ee:; BB(0x004b63ee);
    /* 004b63ee: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x4b63f3u); f_00520f68();
    /* 004b63f3: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b63f8:; BB(0x004b63f8);
    /* 004b63f8: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b63fb: jne 0x4b67d2 */ if (!fZ) goto L_004b67d2;
L_004b6401:; BB(0x004b6401);
    /* 004b6401: add dword ptr [ecx + 0x72c], 1 */ { u32 ad = (u32)(r_ecx+0x72cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004b6408: call 0x4b6c74 */ r_esp -= 4; W32(r_esp, 0x4b640du); f_004b6c74();
    /* 004b640d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6410: mov edx, dword ptr [eax + 0x78c] */ r_edx = R32((u32)(r_eax+0x78cu));
    /* 004b6416: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6418: je 0x4b6434 */ if (fZ) goto L_004b6434;
L_004b641a:; BB(0x004b641a);
    /* 004b641a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b641e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b6423: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b6427: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b642a: mov dword ptr [edx + 0x78c], 0 */ W32((u32)(r_edx+0x78cu), 0x0u);
L_004b6434:; BB(0x004b6434);
    /* 004b6434: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6437: mov edx, dword ptr [eax + 0x724] */ r_edx = R32((u32)(r_eax+0x724u));
    /* 004b643d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b643f: je 0x4b645b */ if (fZ) goto L_004b645b;
L_004b6441:; BB(0x004b6441);
    /* 004b6441: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b6445: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b644a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b644e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6451: mov dword ptr [edx + 0x724], 0 */ W32((u32)(r_edx+0x724u), 0x0u);
L_004b645b:; BB(0x004b645b);
    /* 004b645b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b645e: mov edx, dword ptr [eax + 0x728] */ r_edx = R32((u32)(r_eax+0x728u));
    /* 004b6464: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6466: je 0x4b6482 */ if (fZ) goto L_004b6482;
L_004b6468:; BB(0x004b6468);
    /* 004b6468: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b646c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b6471: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b6475: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6478: mov dword ptr [edx + 0x728], 0 */ W32((u32)(r_edx+0x728u), 0x0u);
L_004b6482:; BB(0x004b6482);
    /* 004b6482: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6485: mov edx, dword ptr [eax + 0x7b0] */ r_edx = R32((u32)(r_eax+0x7b0u));
    /* 004b648b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b648d: je 0x4b67d2 */ if (fZ) goto L_004b67d2;
L_004b6493:; BB(0x004b6493);
    /* 004b6493: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b6497: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b649c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b64a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b64a3: mov dword ptr [edx + 0x7b0], 0 */ W32((u32)(r_edx+0x7b0u), 0x0u);
    /* 004b64ad: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b64b2:; BB(0x004b64b2);
    /* 004b64b2: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b64b7u); f_007aa094();
    /* 004b64b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b64ba: mov dword ptr [eax + 0x7a8], 6 */ W32((u32)(r_eax+0x7a8u), 0x6u);
    /* 004b64c4: mov eax, dword ptr [eax + 0x730] */ r_eax = R32((u32)(r_eax+0x730u));
    /* 004b64ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64cc: je 0x4b680c */ if (fZ) goto L_004b680c;
L_004b64d2:; BB(0x004b64d2);
    /* 004b64d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64d5: je 0x4b6732 */ if (fZ) goto L_004b6732;
L_004b64db:; BB(0x004b64db);
    /* 004b64db: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b64de: jne 0x4b66f8 */ if (!fZ) goto L_004b66f8;
L_004b64e4:; BB(0x004b64e4);
    /* 004b64e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b64e7: mov ecx, dword ptr [edx + 0x7b0] */ r_ecx = R32((u32)(r_edx+0x7b0u));
    /* 004b64ed: mov dword ptr [edx + 0xc0], 0x41500000 */ W32((u32)(r_edx+0xc0u), 0x41500000u);
    /* 004b64f7: lea eax, [edx + 0x780] */ r_eax = (u32)(r_edx+0x780u);
    /* 004b64fd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004b6500: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6502: je 0x4b6540 */ if (fZ) goto L_004b6540;
L_004b6504:; BB(0x004b6504);
    /* 004b6504: mov eax, edx */ r_eax = r_edx;
    /* 004b6506: lea ebx, [eax + 0x4e4] */ r_ebx = (u32)(r_eax+0x4e4u);
    /* 004b650c: lea edx, [eax + 0x4f0] */ r_edx = (u32)(r_eax+0x4f0u);
    /* 004b6512: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6513: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6514: call 0x4bae8c */ r_esp -= 4; W32(r_esp, 0x4b6519u); f_004bae8c();
    /* 004b6519: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b651c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b651f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6520: mov ecx, dword ptr [edx + 0x7b0] */ r_ecx = R32((u32)(r_edx+0x7b0u));
    /* 004b6526: call 0x4bafc4 */ r_esp -= 4; W32(r_esp, 0x4b652bu); f_004bafc4();
    /* 004b652b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b652e: lea eax, [ebp - 0x94] */ r_eax = (u32)(r_ebp+0xffffff6cu);
    /* 004b6534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6535: mov ecx, dword ptr [edx + 0x7b0] */ r_ecx = R32((u32)(r_edx+0x7b0u));
    /* 004b653b: call 0x4bafec */ r_esp -= 4; W32(r_esp, 0x4b6540u); f_004bafec();
L_004b6540:; BB(0x004b6540);
    /* 004b6540: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b6543: lea edx, [ebp - 0x94] */ r_edx = (u32)(r_ebp+0xffffff6cu);
    /* 004b6549: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 004b654e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b654f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6550: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x4b6555u); f_0077fffc();
    /* 004b6555: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6558: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b655a: je 0x4b666e */ if (fZ) goto L_004b666e;
L_004b6560:; BB(0x004b6560);
    /* 004b6560: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6563: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004b6566: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b6568: mov dword ptr [esi + 0x780], eax */ W32((u32)(r_esi+0x780u), r_eax);
    /* 004b656e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004b6571: mov dword ptr [esi + 0x784], edx */ W32((u32)(r_esi+0x784u), r_edx);
    /* 004b6577: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 004b657a: mov ecx, dword ptr [esi + 0x724] */ r_ecx = R32((u32)(r_esi+0x724u));
    /* 004b6580: mov dword ptr [esi + 0x788], ebx */ W32((u32)(r_esi+0x788u), r_ebx);
    /* 004b6586: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6588: jne 0x4b65f3 */ if (!fZ) goto L_004b65f3;
L_004b658a:; BB(0x004b658a);
    /* 004b658a: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 004b6594: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6599: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b659eu); f_005caba4();
    /* 004b659e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b65a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b65a4: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 004b65aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b65ac: je 0x4b67f8 */ if (fZ) goto L_004b67f8;
L_004b65b2:; BB(0x004b65b2);
    /* 004b65b2: mov dword ptr [ebp - 0x88], 1 */ W32((u32)(r_ebp+0xffffff78u), 0x1u);
    /* 004b65bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004b65c3: mov eax, esi */ r_eax = r_esi;
    /* 004b65c5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b65c8: push 0x208 */ { u32 v = 0x208u; r_esp -= 4; W32(r_esp, v); }
    /* 004b65cd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b65cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b65d0: call 0x4ba894 */ r_esp -= 4; W32(r_esp, 0x4b65d5u); f_004ba894();
    /* 004b65d5: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
L_004b65df:; BB(0x004b65df);
    /* 004b65df: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b65e2: mov edx, esi */ r_edx = r_esi;
    /* 004b65e4: mov dword ptr [edx + 0x724], eax */ W32((u32)(r_edx+0x724u), r_eax);
    /* 004b65ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b65f1: jmp 0x4b65fc */ goto L_004b65fc;
L_004b65f3:; BB(0x004b65f3);
    /* 004b65f3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b65f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b65f7: call 0x4ba794 */ r_esp -= 4; W32(r_esp, 0x4b65fcu); f_004ba794();
L_004b65fc:; BB(0x004b65fc);
    /* 004b65fc: mov eax, esi */ r_eax = r_esi;
    /* 004b65fe: mov ecx, dword ptr [eax + 0x728] */ r_ecx = R32((u32)(r_eax+0x728u));
    /* 004b6604: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6606: jne 0x4b6665 */ if (!fZ) goto L_004b6665;
L_004b6608:; BB(0x004b6608);
    /* 004b6608: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 004b660f: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6614: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b6619u); f_005caba4();
    /* 004b6619: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b661c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b661f: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 004b6622: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6624: je 0x4b6802 */ if (fZ) goto L_004b6802;
L_004b662a:; BB(0x004b662a);
    /* 004b662a: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 004b6631: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 004b6638: mov eax, esi */ r_eax = r_esi;
    /* 004b663a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b663d: push 0x209 */ { u32 v = 0x209u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6642: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004b6644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6645: call 0x4ba894 */ r_esp -= 4; W32(r_esp, 0x4b664au); f_004ba894();
    /* 004b664a: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
L_004b6651:; BB(0x004b6651);
    /* 004b6651: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b6654: mov edx, esi */ r_edx = r_esi;
    /* 004b6656: mov dword ptr [edx + 0x728], eax */ W32((u32)(r_edx+0x728u), r_eax);
    /* 004b665c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b6663: jmp 0x4b666e */ goto L_004b666e;
L_004b6665:; BB(0x004b6665);
    /* 004b6665: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b6668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6669: call 0x4ba794 */ r_esp -= 4; W32(r_esp, 0x4b666eu); f_004ba794();
L_004b666e:; BB(0x004b666e);
    /* 004b666e: mov eax, dword ptr [0x9abba4] */ r_eax = R32((u32)(0x9abba4u));
    /* 004b6673: mov edx, dword ptr [0x9abba8] */ r_edx = R32((u32)(0x9abba8u));
    /* 004b6679: mov ebx, dword ptr [0x9abbac] */ r_ebx = R32((u32)(0x9abbacu));
    /* 004b667f: mov esi, dword ptr [0x9abbb0] */ r_esi = R32((u32)(0x9abbb0u));
    /* 004b6685: mov edi, dword ptr [0x9abbb4] */ r_edi = R32((u32)(0x9abbb4u));
    /* 004b668b: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 004b668e: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 004b6691: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6694: push dword ptr [edx + 0x720] */ { u32 v = R32((u32)(r_edx+0x720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b669a: mov ecx, dword ptr [edx + 0x628] */ r_ecx = R32((u32)(r_edx+0x628u));
    /* 004b66a0: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 004b66a3: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 004b66a6: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 004b66a9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b66ab: mov ecx, edx */ r_ecx = r_edx;
    /* 004b66ad: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 004b66b0: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 004b66b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b66b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b66b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b66b8: call 0x51fc9c */ r_esp -= 4; W32(r_esp, 0x4b66bdu); f_0051fc9c();
    /* 004b66bd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b66c0: mov ecx, dword ptr [eax + 0x7b0] */ r_ecx = R32((u32)(r_eax+0x7b0u));
    /* 004b66c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b66c8: je 0x4b66e9 */ if (fZ) goto L_004b66e9;
L_004b66ca:; BB(0x004b66ca);
    /* 004b66ca: call 0x4baf7c */ r_esp -= 4; W32(r_esp, 0x4b66cfu); f_004baf7c();
    /* 004b66cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b66d1: je 0x4b67d2 */ if (fZ) goto L_004b67d2;
L_004b66d7:; BB(0x004b66d7);
    /* 004b66d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b66da: mov dword ptr [eax + 0x730], 3 */ W32((u32)(r_eax+0x730u), 0x3u);
    /* 004b66e4: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b66e9:; BB(0x004b66e9);
    /* 004b66e9: mov dword ptr [eax + 0x730], 3 */ W32((u32)(r_eax+0x730u), 0x3u);
    /* 004b66f3: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b66f8:; BB(0x004b66f8);
    /* 004b66f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b66fb: jne 0x4b67d2 */ if (!fZ) goto L_004b67d2;
L_004b6701:; BB(0x004b6701);
    /* 004b6701: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6704: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 004b670a: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004b670d: je 0x4b6716 */ if (fZ) goto L_004b6716;
L_004b670f:; BB(0x004b670f);
    /* 004b670f: mov eax, 1 */ r_eax = 0x1u;
    /* 004b6714: jmp 0x4b6718 */ goto L_004b6718;
L_004b6716:; BB(0x004b6716);
    /* 004b6716: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004b6718:; BB(0x004b6718);
    /* 004b6718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b671a: je 0x4b67d2 */ if (fZ) goto L_004b67d2;
L_004b6720:; BB(0x004b6720);
    /* 004b6720: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6723: mov dword ptr [eax + 0x730], 4 */ W32((u32)(r_eax+0x730u), 0x4u);
    /* 004b672d: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6732:; BB(0x004b6732);
    /* 004b6732: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6735: mov ecx, dword ptr [eax + 0x7b0] */ r_ecx = R32((u32)(r_eax+0x7b0u));
    /* 004b673b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b673d: je 0x4b6752 */ if (fZ) goto L_004b6752;
L_004b673f:; BB(0x004b673f);
    /* 004b673f: lea ebx, [eax + 0x4e4] */ r_ebx = (u32)(r_eax+0x4e4u);
    /* 004b6745: lea edx, [eax + 0x4f0] */ r_edx = (u32)(r_eax+0x4f0u);
    /* 004b674b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b674c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b674d: call 0x4bae8c */ r_esp -= 4; W32(r_esp, 0x4b6752u); f_004bae8c();
L_004b6752:; BB(0x004b6752);
    /* 004b6752: fld dword ptr [0x906d4c] */ FPUSH(R_F32((u32)(0x906d4cu)));
    /* 004b6758: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b675b: fcomp dword ptr [edx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xc0u))); FPOP();
    /* 004b6761: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6763: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6764: jae 0x4b6777 */ if (!fC) goto L_004b6777;
L_004b6766:; BB(0x004b6766);
    /* 004b6766: mov eax, edx */ r_eax = r_edx;
    /* 004b6768: mov ecx, dword ptr [eax + 0x7b0] */ r_ecx = R32((u32)(r_eax+0x7b0u));
    /* 004b676e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6770: je 0x4b6777 */ if (fZ) goto L_004b6777;
L_004b6772:; BB(0x004b6772);
    /* 004b6772: call 0x4baf8c */ r_esp -= 4; W32(r_esp, 0x4b6777u); f_004baf8c();
L_004b6777:; BB(0x004b6777);
    /* 004b6777: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b677a: call 0x4b6c98 */ r_esp -= 4; W32(r_esp, 0x4b677fu); f_004b6c98();
    /* 004b677f: fld dword ptr [0x906d50] */ FPUSH(R_F32((u32)(0x906d50u)));
    /* 004b6785: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6788: fcomp dword ptr [edx + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_edx+0xc0u))); FPOP();
    /* 004b678e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6790: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6791: ja 0x4b67d2 */ if ((!fC&&!fZ)) goto L_004b67d2;
L_004b6793:; BB(0x004b6793);
    /* 004b6793: mov ecx, dword ptr [edx + 0x7b0] */ r_ecx = R32((u32)(r_edx+0x7b0u));
    /* 004b6799: mov eax, 0x41500000 */ r_eax = 0x41500000u;
    /* 004b679e: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 004b67a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b67a6: mov dword ptr [edx + 0x730], 2 */ W32((u32)(r_edx+0x730u), 0x2u);
    /* 004b67b0: je 0x4b67b7 */ if (fZ) goto L_004b67b7;
L_004b67b2:; BB(0x004b67b2);
    /* 004b67b2: call 0x4baec4 */ r_esp -= 4; W32(r_esp, 0x4b67b7u); f_004baec4();
L_004b67b7:; BB(0x004b67b7);
    /* 004b67b7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b67ba: add edx, 0x514 */ {  u32 a = r_edx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b67c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b67c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b67c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b67c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b67c5: push 0x3f7 */ { u32 v = 0x3f7u; r_esp -= 4; W32(r_esp, v); }
    /* 004b67ca: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b67cfu); f_00814298();
    /* 004b67cf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6300); r_esp += 8; return;
L_004b67eb:; BB(0x004b67eb);
    /* 004b67eb: push dword ptr [0xaad720] */ { u32 v = R32((u32)(0xaad720u)); r_esp -= 4; W32(r_esp, v); }
    /* 004b67f1: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b67f6u); f_00521388();
    /* 004b67f6: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b67f8:; BB(0x004b67f8);
    /* 004b67f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b67fa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b67fd: jmp 0x4b65df */ goto L_004b65df;
L_004b6802:; BB(0x004b6802);
    /* 004b6802: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6804: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b6807: jmp 0x4b6651 */ goto L_004b6651;
L_004b680c:; BB(0x004b680c);
    /* 004b680c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b680f: mov eax, dword ptr [eax + 0x734] */ r_eax = R32((u32)(r_eax+0x734u));
    /* 004b6815: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004b6818: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b681b: jge 0x4b6828 */ if ((fS==fO)) goto L_004b6828;
L_004b681d:; BB(0x004b681d);
    /* 004b681d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6820: mov dword ptr [edx + 0x734], eax */ W32((u32)(r_edx+0x734u), r_eax);
    /* 004b6826: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6828:; BB(0x004b6828);
    /* 004b6828: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b682b: mov ebx, dword ptr [eax + 0x720] */ r_ebx = R32((u32)(r_eax+0x720u));
    /* 004b6831: mov dword ptr [eax + 0x734], 0 */ W32((u32)(r_eax+0x734u), 0x0u);
    /* 004b683b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b683d: mov dword ptr [eax + 0x730], 1 */ W32((u32)(r_eax+0x730u), 0x1u);
    /* 004b6847: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004b684a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b684c: jle 0x4b685e */ if ((fZ||fS!=fO)) goto L_004b685e;
L_004b684e:; BB(0x004b684e);
    /* 004b684e: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b6850: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004b6853: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004b6856: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b6859: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b685c: jl 0x4b684e */ if ((fS!=fO)) goto L_004b684e;
L_004b685e:; BB(0x004b685e);
    /* 004b685e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6861: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 004b6868: mov eax, 0xd */ r_eax = 0xdu;
    /* 004b686d: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004b6874: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x4b6879u); f_00521324();
    /* 004b6879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b687b: je 0x4b68a3 */ if (fZ) goto L_004b68a3;
L_004b687d:; BB(0x004b687d);
    /* 004b687d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6880: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 004b6886: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004b6889: mov dword ptr [esi + 0x774], eax */ W32((u32)(r_esi+0x774u), r_eax);
    /* 004b688f: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 004b6892: mov dword ptr [esi + 0x778], edx */ W32((u32)(r_esi+0x778u), r_edx);
    /* 004b6898: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 004b689b: mov dword ptr [esi + 0x77c], ebx */ W32((u32)(r_esi+0x77cu), r_ebx);
    /* 004b68a1: jmp 0x4b68c4 */ goto L_004b68c4;
L_004b68a3:; BB(0x004b68a3);
    /* 004b68a3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b68a6: mov dword ptr [eax + 0x774], 0 */ W32((u32)(r_eax+0x774u), 0x0u);
    /* 004b68b0: mov dword ptr [eax + 0x778], 0 */ W32((u32)(r_eax+0x778u), 0x0u);
    /* 004b68ba: mov dword ptr [eax + 0x77c], 0 */ W32((u32)(r_eax+0x77cu), 0x0u);
L_004b68c4:; BB(0x004b68c4);
    /* 004b68c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b68c7: mov edx, dword ptr [eax + 0x7b0] */ r_edx = R32((u32)(r_eax+0x7b0u));
    /* 004b68cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b68cf: je 0x4b68eb */ if (fZ) goto L_004b68eb;
L_004b68d1:; BB(0x004b68d1);
    /* 004b68d1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004b68d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b68da: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004b68de: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b68e1: mov dword ptr [edx + 0x7b0], 0 */ W32((u32)(r_edx+0x7b0u), 0x0u);
L_004b68eb:; BB(0x004b68eb);
    /* 004b68eb: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 004b68f2: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004b68f4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4b68f9u); f_005caba4();
    /* 004b68f9: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b68fc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b68ff: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 004b6902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6904: je 0x4b6974 */ if (fZ) goto L_004b6974;
L_004b6906:; BB(0x004b6906);
    /* 004b6906: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 004b690d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004b6914: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6917: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b691a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b691d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b691e: lea edx, [ebx + 0x4e4] */ r_edx = (u32)(r_ebx+0x4e4u);
    /* 004b6924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6926: call 0x4babbc */ r_esp -= 4; W32(r_esp, 0x4b692bu); f_004babbc();
    /* 004b692b: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_004b6932:; BB(0x004b6932);
    /* 004b6932: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004b6935: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6938: mov dword ptr [edx + 0x7b0], eax */ W32((u32)(r_edx+0x7b0u), r_eax);
    /* 004b693e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004b6945: mov ecx, edx */ r_ecx = r_edx;
    /* 004b6947: call 0x4b6c98 */ r_esp -= 4; W32(r_esp, 0x4b694cu); f_004b6c98();
    /* 004b694c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b694f: call 0x4b6ce4 */ r_esp -= 4; W32(r_esp, 0x4b6954u); f_004b6ce4();
    /* 004b6954: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6957: add edx, 0x514 */ {  u32 a = r_edx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b695d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b695f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6961: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6962: push 0x3f6 */ { u32 v = 0x3f6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6967: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b696cu); f_00814298();
    /* 004b696c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b696f: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6974:; BB(0x004b6974);
    /* 004b6974: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6976: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004b6979: jmp 0x4b6932 */ goto L_004b6932;
L_004b697b:; BB(0x004b697b);
    /* 004b697b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004b697e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6982: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x4b6987u); f_00521388();
    /* 004b6987: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b698c:; BB(0x004b698c);
    /* 004b698c: mov eax, ecx */ r_eax = r_ecx;
    /* 004b698e: mov edx, dword ptr [eax + 0x730] */ r_edx = R32((u32)(r_eax+0x730u));
    /* 004b6994: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b6997: jne 0x4b67d2 */ if (!fZ) goto L_004b67d2;
L_004b699d:; BB(0x004b699d);
    /* 004b699d: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b69a3: mov ebx, dword ptr [eax + 0x6bc] */ r_ebx = R32((u32)(r_eax+0x6bcu));
    /* 004b69a9: mov eax, dword ptr [edx*4 + 0x9abc68] */ r_eax = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b69b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b69b3: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b69b6: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b69bc: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b69c0: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b69c3: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b69c6: ja 0x4b6af4 */ if ((!fC&&!fZ)) goto L_004b6af4;
L_004b69cc:; BB(0x004b69cc);
    /* 004b69cc: mov edx, dword ptr [edx*4 + 0x905880] */ r_edx = R32((u32)(r_edx*4+0x905880u));
    /* 004b69d3: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6b02:; BB(0x004b6b02);
    /* 004b6b02: mov eax, ecx */ r_eax = r_ecx;
    /* 004b6b04: mov edx, dword ptr [eax + 0x730] */ r_edx = R32((u32)(r_eax+0x730u));
    /* 004b6b0a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004b6b0d: jne 0x4b67d2 */ if (!fZ) goto L_004b67d2;
L_004b6b13:; BB(0x004b6b13);
    /* 004b6b13: mov edx, dword ptr [eax + 0x72c] */ r_edx = R32((u32)(r_eax+0x72cu));
    /* 004b6b19: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6b1c: jl 0x4b6b5d */ if ((fS!=fO)) goto L_004b6b5d;
L_004b6b1e:; BB(0x004b6b1e);
    /* 004b6b1e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6b20: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6b22: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b6b24: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b6b2au); call_ind(t); }
    /* 004b6b2a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6b2d: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b6b31: mov esi, dword ptr [ebx + 0x6bc] */ r_esi = R32((u32)(r_ebx+0x6bcu));
    /* 004b6b37: mov word ptr [ebp - 0x4e], ax */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_eax);
    /* 004b6b3b: mov edx, 0x19 */ r_edx = 0x19u;
    /* 004b6b40: mov byte ptr [ebp - 0x50], 0xa9 */ W8((u32)(r_ebp+0xffffffb0u), 0xa9u);
    /* 004b6b44: mov word ptr [ebp - 0x4c], dx */ W16((u32)(r_ebp+0xffffffb4u), (u16)r_edx);
    /* 004b6b48: mov word ptr [ebp - 0x4a], si */ W16((u32)(r_ebp+0xffffffb6u), (u16)r_esi);
    /* 004b6b4c: mov byte ptr [ebp - 0x4f], 2 */ W8((u32)(r_ebp+0xffffffb1u), 0x2u);
    /* 004b6b50: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 004b6b53: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b6b58u); f_008003e0();
    /* 004b6b58: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6b5d:; BB(0x004b6b5d);
    /* 004b6b5d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6b5f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6b61: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004b6b63: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b6b69u); call_ind(t); }
    /* 004b6b69: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6b6c: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004b6b70: mov ebx, dword ptr [esi + 0x6bc] */ r_ebx = R32((u32)(r_esi+0x6bcu));
    /* 004b6b76: movzx edi, word ptr [esi + 0x394] */ r_edi = (u32)R16((u32)(r_esi+0x394u));
    /* 004b6b7d: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004b6b82: mov byte ptr [ebp - 0x5c], 0xaa */ W8((u32)(r_ebp+0xffffffa4u), 0xaau);
    /* 004b6b86: mov word ptr [ebp - 0x5a], ax */ W16((u32)(r_ebp+0xffffffa6u), (u16)r_eax);
    /* 004b6b8a: mov word ptr [ebp - 0x58], dx */ W16((u32)(r_ebp+0xffffffa8u), (u16)r_edx);
    /* 004b6b8e: mov byte ptr [ebp - 0x5b], 3 */ W8((u32)(r_ebp+0xffffffa5u), 0x3u);
    /* 004b6b92: mov word ptr [ebp - 0x56], bx */ W16((u32)(r_ebp+0xffffffaau), (u16)r_ebx);
    /* 004b6b96: mov dword ptr [ebp - 0x54], edi */ W32((u32)(r_ebp+0xffffffacu), r_edi);
    /* 004b6b99: lea ecx, [ebp - 0x5c] */ r_ecx = (u32)(r_ebp+0xffffffa4u);
    /* 004b6b9c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b6ba1u); f_008003e0();
    /* 004b6ba1: jmp 0x4b67d2 */ goto L_004b67d2;
L_004b6ba6:; BB(0x004b6ba6);
    /* 004b6ba6: mov eax, dword ptr [ecx + 0x630] */ r_eax = R32((u32)(r_ecx+0x630u));
    /* 004b6bac: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b6bae: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b6bb1: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b6bb6: mov dword ptr [ecx + 0x630], eax */ W32((u32)(r_ecx+0x630u), r_eax);
    /* 004b6bbc: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b6bc2u); call_ind(t); }
    /* 004b6bc2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004b6bc4:; BB(0x004b6bc4);
    /* 004b6bc4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6bc7: mov ecx, dword ptr [eax + ebx*4 + 0x600] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x600u));
    /* 004b6bce: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b6bd0: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b6bd6u); call_ind(t); }
    /* 004b6bd6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b6bd9: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6bdc: jl 0x4b6bc4 */ if ((fS!=fO)) goto L_004b6bc4;
L_004b6bde:; BB(0x004b6bde);
    /* 004b6bde: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6be1: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b6be6: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004b6bed: mov edx, 3 */ r_edx = 0x3u;
    /* 004b6bf2: mov dword ptr [ecx + 0x6c8], edx */ W32((u32)(r_ecx+0x6c8u), r_edx);
    /* 004b6bf8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6bf9: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b6bfeu); f_004b1e58();
    /* 004b6bfe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6c01: mov ebx, dword ptr [eax + 0x720] */ r_ebx = R32((u32)(r_eax+0x720u));
    /* 004b6c07: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004b6c0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004b6c0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004b6c0e: jle 0x4b6c20 */ if ((fZ||fS!=fO)) goto L_004b6c20;
L_004b6c10:; BB(0x004b6c10);
    /* 004b6c10: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b6c12: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004b6c15: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 004b6c18: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004b6c1b: cmp ecx, dword ptr [ebx + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b6c1e: jl 0x4b6c10 */ if ((fS!=fO)) goto L_004b6c10;
L_004b6c20:; BB(0x004b6c20);
    /* 004b6c20: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6c23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b6c25: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 004b6c28: mov dword ptr [edx + 0x730], eax */ W32((u32)(r_edx+0x730u), r_eax);
    /* 004b6c2e: mov dword ptr [edx + 0x734], eax */ W32((u32)(r_edx+0x734u), r_eax);
    /* 004b6c34: mov dword ptr [edx + 0x738], eax */ W32((u32)(r_edx+0x738u), r_eax);
    /* 004b6c3a: mov dword ptr [edx + 0x750], 0 */ W32((u32)(r_edx+0x750u), 0x0u);
    /* 004b6c44: mov dword ptr [edx + 0x744], eax */ W32((u32)(r_edx+0x744u), r_eax);
    /* 004b6c4a: mov dword ptr [edx + 0x78c], eax */ W32((u32)(r_edx+0x78cu), r_eax);
    /* 004b6c50: mov dword ptr [edx + 0x774], 0 */ W32((u32)(r_edx+0x774u), 0x0u);
    /* 004b6c5a: mov dword ptr [edx + 0x778], 0 */ W32((u32)(r_edx+0x778u), 0x0u);
    /* 004b6c64: mov dword ptr [edx + 0x77c], 0 */ W32((u32)(r_edx+0x77cu), 0x0u);
    /* 004b6c6e: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b69d5(void)
{
    FN_ENTER(0x004b69d5);
    goto L_004b69d5;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b69d5); r_esp += 8; return;
L_004b69b0:; BB(0x004b69b0);
    /* 004b69b0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b69b3: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 004b69b6: mov dword ptr [ecx + 0x6bc], edx */ W32((u32)(r_ecx+0x6bcu), r_edx);
    /* 004b69bc: mov ecx, dword ptr [eax + ebx*8 + 8] */ r_ecx = R32((u32)(r_eax+r_ebx*8+0x8u));
    /* 004b69c0: lea edx, [ecx - 0x1e] */ r_edx = (u32)(r_ecx+0xffffffe2u);
    /* 004b69c3: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b69c6: ja 0x4b6af4 */ if ((!fC&&!fZ)) goto L_004b6af4;
L_004b69cc:; BB(0x004b69cc);
    /* 004b69cc: mov edx, dword ptr [edx*4 + 0x905880] */ r_edx = R32((u32)(r_edx*4+0x905880u));
    /* 004b69d3: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_004b69d5:; BB(0x004b69d5);
    /* 004b69d5: mov ebx, 1 */ r_ebx = 0x1u;
    /* 004b69da: jmp 0x4b69b0 */ goto L_004b69b0;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b69dc(void)
{
    FN_ENTER(0x004b69dc);
    goto L_004b69dc;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b69dc); r_esp += 8; return;
L_004b69dc:; BB(0x004b69dc);
    /* 004b69dc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b69df: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b69e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b69e7: jne 0x4b69f3 */ if (!fZ) goto L_004b69f3;
L_004b69e9:; BB(0x004b69e9);
    /* 004b69e9: mov ecx, 0x15 */ r_ecx = 0x15u;
    /* 004b69ee: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b69f3:; BB(0x004b69f3);
    /* 004b69f3: mov ecx, 0x16 */ r_ecx = 0x16u;
    /* 004b69f8: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b69fd(void)
{
    FN_ENTER(0x004b69fd);
    goto L_004b69fd;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b69fd); r_esp += 8; return;
L_004b69fd:; BB(0x004b69fd);
    /* 004b69fd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a00: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6a06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6a08: jne 0x4b6a14 */ if (!fZ) goto L_004b6a14;
L_004b6a0a:; BB(0x004b6a0a);
    /* 004b6a0a: mov ecx, 0x13 */ r_ecx = 0x13u;
    /* 004b6a0f: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6a14:; BB(0x004b6a14);
    /* 004b6a14: mov ecx, 0x14 */ r_ecx = 0x14u;
    /* 004b6a19: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6a1e(void)
{
    FN_ENTER(0x004b6a1e);
    goto L_004b6a1e;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6a1e); r_esp += 8; return;
L_004b6a1e:; BB(0x004b6a1e);
    /* 004b6a1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a21: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6a27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6a29: jne 0x4b6a35 */ if (!fZ) goto L_004b6a35;
L_004b6a2b:; BB(0x004b6a2b);
    /* 004b6a2b: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 004b6a30: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6a35:; BB(0x004b6a35);
    /* 004b6a35: mov ecx, 0x12 */ r_ecx = 0x12u;
    /* 004b6a3a: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6a3f(void)
{
    FN_ENTER(0x004b6a3f);
    goto L_004b6a3f;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6a3f); r_esp += 8; return;
L_004b6a3f:; BB(0x004b6a3f);
    /* 004b6a3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a42: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6a48: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6a4a: jne 0x4b6a56 */ if (!fZ) goto L_004b6a56;
L_004b6a4c:; BB(0x004b6a4c);
    /* 004b6a4c: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 004b6a51: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6a56:; BB(0x004b6a56);
    /* 004b6a56: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 004b6a5b: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6a60(void)
{
    FN_ENTER(0x004b6a60);
    goto L_004b6a60;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6a60); r_esp += 8; return;
L_004b6a60:; BB(0x004b6a60);
    /* 004b6a60: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a63: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6a69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6a6b: jne 0x4b6a77 */ if (!fZ) goto L_004b6a77;
L_004b6a6d:; BB(0x004b6a6d);
    /* 004b6a6d: mov ecx, 4 */ r_ecx = 0x4u;
    /* 004b6a72: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6a77:; BB(0x004b6a77);
    /* 004b6a77: mov ecx, 0xa */ r_ecx = 0xau;
    /* 004b6a7c: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6a7e(void)
{
    FN_ENTER(0x004b6a7e);
    goto L_004b6a7e;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6a7e); r_esp += 8; return;
L_004b6a7e:; BB(0x004b6a7e);
    /* 004b6a7e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a81: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6a87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6a89: jne 0x4b6a92 */ if (!fZ) goto L_004b6a92;
L_004b6a8b:; BB(0x004b6a8b);
    /* 004b6a8b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 004b6a90: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6a92:; BB(0x004b6a92);
    /* 004b6a92: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 004b6a97: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6a99(void)
{
    FN_ENTER(0x004b6a99);
    goto L_004b6a99;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6a99); r_esp += 8; return;
L_004b6a99:; BB(0x004b6a99);
    /* 004b6a99: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6a9c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6aa1u); f_00520bf4();
    /* 004b6aa1: fcomp dword ptr [0x906d54] */ fx_compare(ST(0), R_F32((u32)(0x906d54u))); FPOP();
    /* 004b6aa7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6aa9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6aaa: jbe 0x4b6ab3 */ if ((fC||fZ)) goto L_004b6ab3;
L_004b6aac:; BB(0x004b6aac);
    /* 004b6aac: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 004b6ab1: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6ab3:; BB(0x004b6ab3);
    /* 004b6ab3: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 004b6ab8: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6aba(void)
{
    FN_ENTER(0x004b6aba);
    goto L_004b6aba;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6aba); r_esp += 8; return;
L_004b6aba:; BB(0x004b6aba);
    /* 004b6aba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6abd: mov edx, dword ptr [eax + 0x6cc] */ r_edx = R32((u32)(r_eax+0x6ccu));
    /* 004b6ac3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6ac5: jne 0x4b6ace */ if (!fZ) goto L_004b6ace;
L_004b6ac7:; BB(0x004b6ac7);
    /* 004b6ac7: mov ecx, 5 */ r_ecx = 0x5u;
    /* 004b6acc: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6ace:; BB(0x004b6ace);
    /* 004b6ace: mov ecx, 9 */ r_ecx = 0x9u;
    /* 004b6ad3: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6ad5(void)
{
    FN_ENTER(0x004b6ad5);
    goto L_004b6ad5;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6ad5); r_esp += 8; return;
L_004b6ad5:; BB(0x004b6ad5);
    /* 004b6ad5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6ad8: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6addu); f_00520bf4();
    /* 004b6add: fcomp dword ptr [0x906d54] */ fx_compare(ST(0), R_F32((u32)(0x906d54u))); FPOP();
    /* 004b6ae3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6ae5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6ae6: jbe 0x4b6aef */ if ((fC||fZ)) goto L_004b6aef;
L_004b6ae8:; BB(0x004b6ae8);
    /* 004b6ae8: mov ecx, 8 */ r_ecx = 0x8u;
    /* 004b6aed: jmp 0x4b6af4 */ goto L_004b6af4;
L_004b6aef:; BB(0x004b6aef);
    /* 004b6aef: mov ecx, 6 */ r_ecx = 0x6u;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6af4(void)
{
    FN_ENTER(0x004b6af4);
    goto L_004b6af4;
L_004b67d2:; BB(0x004b67d2);
    /* 004b67d2: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 004b67d5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004b67d8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004b67db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004b67de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004b67e5: mov esp, ebp */ r_esp = r_ebp;
    /* 004b67e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004b67e8: ret 4 */ FN_RET(0x004b6af4); r_esp += 8; return;
L_004b6af4:; BB(0x004b6af4);
    /* 004b6af4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6af5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004b6af8: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6afdu); f_004b5150();
    /* 004b6afd: jmp 0x4b67d2 */ goto L_004b67d2;
}

void f_004b6c74(void) /* sub_4B6C74 */
{
    FN_ENTER(0x004b6c74);
    /* 004b6c74: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6c75: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b6c77: mov ecx, dword ptr [ebx + 0x710] */ r_ecx = R32((u32)(r_ebx+0x710u));
    /* 004b6c7d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6c7f: je 0x4b6c86 */ if (fZ) goto L_004b6c86;
L_004b6c81:; BB(0x004b6c81);
    /* 004b6c81: call 0x4ba6c0 */ r_esp -= 4; W32(r_esp, 0x4b6c86u); f_004ba6c0();
L_004b6c86:; BB(0x004b6c86);
    /* 004b6c86: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b6c8c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b6c8f: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b6c95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6c96: ret  */ FN_RET(0x004b6c74); r_esp += 4; return;
}

void f_004b6c98(void) /* sub_4B6C98 */
{
    FN_ENTER(0x004b6c98);
    /* 004b6c98: fld dword ptr [0x906d48] */ FPUSH(R_F32((u32)(0x906d48u)));
    /* 004b6c9e: fld dword ptr [ecx + 0x4f0] */ FPUSH(R_F32((u32)(r_ecx+0x4f0u)));
    /* 004b6ca4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004b6ca6: fadd dword ptr [ecx + 0x4e4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4e4u));
    /* 004b6cac: fld dword ptr [ecx + 0x4f4] */ FPUSH(R_F32((u32)(r_ecx+0x4f4u)));
    /* 004b6cb2: fld dword ptr [ecx + 0x4f8] */ FPUSH(R_F32((u32)(r_ecx+0x4f8u)));
    /* 004b6cb8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6cba: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004b6cbc: fadd dword ptr [ecx + 0x4e8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4e8u));
    /* 004b6cc2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004b6cc4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004b6cc6: fadd dword ptr [ecx + 0x4ec] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4ecu));
    /* 004b6ccc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6cce: fstp dword ptr [ecx + 0x714] */ W_F32((u32)(r_ecx+0x714u), ST(0)); FPOP();
    /* 004b6cd4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6cd6: fstp dword ptr [ecx + 0x718] */ W_F32((u32)(r_ecx+0x718u), ST(0)); FPOP();
    /* 004b6cdc: fstp dword ptr [ecx + 0x71c] */ W_F32((u32)(r_ecx+0x71cu), ST(0)); FPOP();
    /* 004b6ce2: ret  */ FN_RET(0x004b6c98); r_esp += 4; return;
}

void f_004b6ce4(void) /* sub_4B6CE4 */
{
    FN_ENTER(0x004b6ce4);
    /* 004b6ce4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6ce5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b6ce7: mov ecx, dword ptr [ebx + 0x710] */ r_ecx = R32((u32)(r_ebx+0x710u));
    /* 004b6ced: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6cef: je 0x4b6cf6 */ if (fZ) goto L_004b6cf6;
L_004b6cf1:; BB(0x004b6cf1);
    /* 004b6cf1: call 0x4ba6b8 */ r_esp -= 4; W32(r_esp, 0x4b6cf6u); f_004ba6b8();
L_004b6cf6:; BB(0x004b6cf6);
    /* 004b6cf6: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b6cfc: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004b6cff: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b6d05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6d06: ret  */ FN_RET(0x004b6ce4); r_esp += 4; return;
}

void f_004b6d08(void) /* sub_4B6D08 */
{
    FN_ENTER(0x004b6d08);
    /* 004b6d08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6d09: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004b6d0c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004b6d0e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004b6d12: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6d15: je 0x4b6fcc */ if (fZ) goto L_004b6fcc;
L_004b6d1b:; BB(0x004b6d1b);
    /* 004b6d1b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6d1e: je 0x4b6f6d */ if (fZ) goto L_004b6f6d;
L_004b6d24:; BB(0x004b6d24);
    /* 004b6d24: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6d27: je 0x4b6e1a */ if (fZ) goto L_004b6e1a;
L_004b6d2d:; BB(0x004b6d2d);
    /* 004b6d2d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6d30: je 0x4b6e13 */ if (fZ) goto L_004b6e13;
L_004b6d36:; BB(0x004b6d36);
    /* 004b6d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6d38: jne 0x4b6e13 */ if (!fZ) goto L_004b6e13;
L_004b6d3e:; BB(0x004b6d3e);
    /* 004b6d3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6d40: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b6d45u); f_007aa094();
    /* 004b6d45: mov edx, dword ptr [ebx + 0x730] */ r_edx = R32((u32)(r_ebx+0x730u));
    /* 004b6d4b: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b6d51: fcom dword ptr [0x906d3c] */ fx_compare(ST(0), R_F32((u32)(0x906d3cu))); 
    /* 004b6d57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d59: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b6d5c: mov dword ptr [ebx + 0x730], edx */ W32((u32)(r_ebx+0x730u), r_edx);
    /* 004b6d62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d63: jb 0x4b6de9 */ if (fC) goto L_004b6de9;
L_004b6d69:; BB(0x004b6d69);
    /* 004b6d69: fcomp dword ptr [0x906d38] */ fx_compare(ST(0), R_F32((u32)(0x906d38u))); FPOP();
    /* 004b6d6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d72: ja 0x4b6deb */ if ((!fC&&!fZ)) goto L_004b6deb;
L_004b6d74:; BB(0x004b6d74);
    /* 004b6d74: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004b6d78: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004b6d7c: fcomp dword ptr [0x906d34] */ fx_compare(ST(0), R_F32((u32)(0x906d34u))); FPOP();
    /* 004b6d82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d85: jb 0x4b6deb */ if (fC) goto L_004b6deb;
L_004b6d87:; BB(0x004b6d87);
    /* 004b6d87: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004b6d8a: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004b6d8d: mov dword ptr [ebx + 0x730], 0 */ W32((u32)(r_ebx+0x730u), 0x0u);
    /* 004b6d97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6d99: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b6d9c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b6d9f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b6da3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b6da7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6dacu); f_00520bf4();
    /* 004b6dac: fld dword ptr [0x906d30] */ FPUSH(R_F32((u32)(0x906d30u)));
    /* 004b6db2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b6db6: fadd dword ptr [0x906d2c] */ ST(0) = ST(0) + R_F32((u32)(0x906d2cu));
    /* 004b6dbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dbe: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b6dc0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dc2: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004b6dc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dc7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b6dcb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b6dce: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 004b6dd6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b6dd9: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6ddf: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b6de4u); f_004be7c0();
    /* 004b6de4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6de7: jmp 0x4b6deb */ goto L_004b6deb;
L_004b6de9:; BB(0x004b6de9);
    /* 004b6de9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004b6deb:; BB(0x004b6deb);
    /* 004b6deb: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6df0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6df2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b6df7u); f_007aaa30();
    /* 004b6df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6df9: je 0x4b6e13 */ if (fZ) goto L_004b6e13;
L_004b6dfb:; BB(0x004b6dfb);
    /* 004b6dfb: add ebx, 0x514 */ {  u32 a = r_ebx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b6e01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e06: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e0b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b6e10u); f_00814298();
    /* 004b6e10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6d08); r_esp += 8; return;
L_004b6e1a:; BB(0x004b6e1a);
    /* 004b6e1a: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b6e21: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6e24: jne 0x4b6e13 */ if (!fZ) goto L_004b6e13;
L_004b6e26:; BB(0x004b6e26);
    /* 004b6e26: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 004b6e2c: mov edx, dword ptr [edx*4 + 0x9abc68] */ r_edx = R32((u32)(r_edx*4+0x9abc68u));
    /* 004b6e33: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b6e39: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b6e3c: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b6e42: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b6e46: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b6e49: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b6e4c: ja 0x4b6f60 */ if ((!fC&&!fZ)) goto L_004b6f60;
L_004b6e52:; BB(0x004b6e52);
    /* 004b6e52: mov ecx, dword ptr [ecx*4 + 0x905920] */ r_ecx = R32((u32)(r_ecx*4+0x905920u));
    /* 004b6e59: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
L_004b6f6d:; BB(0x004b6f6d);
    /* 004b6f6d: movsx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xb8u));
    /* 004b6f74: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6f77: jne 0x4b6e13 */ if (!fZ) goto L_004b6e13;
L_004b6f7d:; BB(0x004b6f7d);
    /* 004b6f7d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f7f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f81: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004b6f83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f85: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4b6f8bu); call_ind(t); }
    /* 004b6f8b: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004b6f8f: mov byte ptr [esp + 0xc], 0xaa */ W8((u32)(r_esp+0xcu), 0xaau);
    /* 004b6f94: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004b6f99: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 004b6f9e: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004b6fa3: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b6fa9: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 004b6fb0: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004b6fb5: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 004b6fba: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004b6fbe: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004b6fc2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b6fc7u); f_008003e0();
    /* 004b6fc7: jmp 0x4b6e13 */ goto L_004b6e13;
L_004b6fcc:; BB(0x004b6fcc);
    /* 004b6fcc: mov eax, dword ptr [ebx + 0x630] */ r_eax = R32((u32)(r_ebx+0x630u));
    /* 004b6fd2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004b6fd4: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004b6fd7: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004b6fdc: mov dword ptr [ebx + 0x630], eax */ W32((u32)(r_ebx+0x630u), r_eax);
    /* 004b6fe2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6fe4: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b6feau); call_ind(t); }
    /* 004b6fea: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004b6fee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6ff0: mov esi, eax */ r_esi = r_eax;
L_004b6ff2:; BB(0x004b6ff2);
    /* 004b6ff2: mov ecx, dword ptr [ebx + esi*4 + 0x600] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x600u));
    /* 004b6ff9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004b6ffb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4b7001u); call_ind(t); }
    /* 004b7001: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004b7004: cmp esi, 0xa */ {  u32 a = r_esi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004b7007: jl 0x4b6ff2 */ if ((fS!=fO)) goto L_004b6ff2;
L_004b7009:; BB(0x004b7009);
    /* 004b7009: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004b700d: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b7012: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004b7019: mov edx, 3 */ r_edx = 0x3u;
    /* 004b701e: mov dword ptr [ebx + 0x6c8], edx */ W32((u32)(r_ebx+0x6c8u), r_edx);
    /* 004b7024: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b7026: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004b7027: call 0x4b1e58 */ r_esp -= 4; W32(r_esp, 0x4b702cu); f_004b1e58();
    /* 004b702c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b702e: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004b7034: mov dword ptr [ebx + 0x72c], eax */ W32((u32)(r_ebx+0x72cu), r_eax);
    /* 004b703a: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6d40(void)
{
    FN_ENTER(0x004b6d40);
    /* 004b6d40: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4b6d45u); f_007aa094();
    /* 004b6d45: mov edx, dword ptr [ebx + 0x730] */ r_edx = R32((u32)(r_ebx+0x730u));
    /* 004b6d4b: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 004b6d51: fcom dword ptr [0x906d3c] */ fx_compare(ST(0), R_F32((u32)(0x906d3cu))); 
    /* 004b6d57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d59: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004b6d5c: mov dword ptr [ebx + 0x730], edx */ W32((u32)(r_ebx+0x730u), r_edx);
    /* 004b6d62: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d63: jb 0x4b6de9 */ if (fC) goto L_004b6de9;
L_004b6d69:; BB(0x004b6d69);
    /* 004b6d69: fcomp dword ptr [0x906d38] */ fx_compare(ST(0), R_F32((u32)(0x906d38u))); FPOP();
    /* 004b6d6f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d71: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d72: ja 0x4b6deb */ if ((!fC&&!fZ)) goto L_004b6deb;
L_004b6d74:; BB(0x004b6d74);
    /* 004b6d74: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004b6d78: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004b6d7c: fcomp dword ptr [0x906d34] */ fx_compare(ST(0), R_F32((u32)(0x906d34u))); FPOP();
    /* 004b6d82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6d84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6d85: jb 0x4b6deb */ if (fC) goto L_004b6deb;
L_004b6d87:; BB(0x004b6d87);
    /* 004b6d87: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 004b6d8a: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004b6d8d: mov dword ptr [ebx + 0x730], 0 */ W32((u32)(r_ebx+0x730u), 0x0u);
    /* 004b6d97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6d99: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004b6d9c: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004b6d9f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004b6da3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004b6da7: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6dacu); f_00520bf4();
    /* 004b6dac: fld dword ptr [0x906d30] */ FPUSH(R_F32((u32)(0x906d30u)));
    /* 004b6db2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004b6db6: fadd dword ptr [0x906d2c] */ ST(0) = ST(0) + R_F32((u32)(0x906d2cu));
    /* 004b6dbc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dbe: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004b6dc0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dc2: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004b6dc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004b6dc7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004b6dcb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004b6dce: mov dword ptr [esp + 4], 0xc0a00000 */ W32((u32)(r_esp+0x4u), 0xc0a00000u);
    /* 004b6dd6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004b6dd9: push 0x201 */ { u32 v = 0x201u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6ddf: call 0x4be7c0 */ r_esp -= 4; W32(r_esp, 0x4b6de4u); f_004be7c0();
    /* 004b6de4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004b6de7: jmp 0x4b6deb */ goto L_004b6deb;
L_004b6de9:; BB(0x004b6de9);
    /* 004b6de9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004b6deb:; BB(0x004b6deb);
    /* 004b6deb: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 004b6df0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6df2: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4b6df7u); f_007aaa30();
    /* 004b6df7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6df9: je 0x4b6e13 */ if (fZ) goto L_004b6e13;
L_004b6dfb:; BB(0x004b6dfb);
    /* 004b6dfb: add ebx, 0x514 */ {  u32 a = r_ebx; u32 b = 0x514u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004b6e01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004b6e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e06: push 0x3ec */ { u32 v = 0x3ecu; r_esp -= 4; W32(r_esp, v); }
    /* 004b6e0b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4b6e10u); f_00814298();
    /* 004b6e10: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6d40); r_esp += 8; return;
}

void f_004b6e5b(void)
{
    FN_ENTER(0x004b6e5b);
    goto L_004b6e5b;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6e5b); r_esp += 8; return;
L_004b6e39:; BB(0x004b6e39);
    /* 004b6e39: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 004b6e3c: mov dword ptr [ebx + 0x6bc], ecx */ W32((u32)(r_ebx+0x6bcu), r_ecx);
    /* 004b6e42: mov eax, dword ptr [edx + eax*8 + 8] */ r_eax = R32((u32)(r_edx+r_eax*8+0x8u));
    /* 004b6e46: lea ecx, [eax - 0x1e] */ r_ecx = (u32)(r_eax+0xffffffe2u);
    /* 004b6e49: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004b6e4c: ja 0x4b6f60 */ if ((!fC&&!fZ)) goto L_004b6f60;
L_004b6e52:; BB(0x004b6e52);
    /* 004b6e52: mov ecx, dword ptr [ecx*4 + 0x905920] */ r_ecx = R32((u32)(r_ecx*4+0x905920u));
    /* 004b6e59: jmp ecx */ { u32 t = r_ecx; jmp_ind(t); return; }
L_004b6e5b:; BB(0x004b6e5b);
    /* 004b6e5b: mov eax, 1 */ r_eax = 0x1u;
    /* 004b6e60: jmp 0x4b6e39 */ goto L_004b6e39;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6e62(void)
{
    FN_ENTER(0x004b6e62);
    goto L_004b6e62;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6e62); r_esp += 8; return;
L_004b6e62:; BB(0x004b6e62);
    /* 004b6e62: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6e68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6e6a: jne 0x4b6e76 */ if (!fZ) goto L_004b6e76;
L_004b6e6c:; BB(0x004b6e6c);
    /* 004b6e6c: mov eax, 0x15 */ r_eax = 0x15u;
    /* 004b6e71: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6e76:; BB(0x004b6e76);
    /* 004b6e76: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004b6e7b: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6e80(void)
{
    FN_ENTER(0x004b6e80);
    goto L_004b6e80;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6e80); r_esp += 8; return;
L_004b6e80:; BB(0x004b6e80);
    /* 004b6e80: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6e86: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6e88: jne 0x4b6e94 */ if (!fZ) goto L_004b6e94;
L_004b6e8a:; BB(0x004b6e8a);
    /* 004b6e8a: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004b6e8f: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6e94:; BB(0x004b6e94);
    /* 004b6e94: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004b6e99: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6e9e(void)
{
    FN_ENTER(0x004b6e9e);
    goto L_004b6e9e;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6e9e); r_esp += 8; return;
L_004b6e9e:; BB(0x004b6e9e);
    /* 004b6e9e: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6ea6: jne 0x4b6eb2 */ if (!fZ) goto L_004b6eb2;
L_004b6ea8:; BB(0x004b6ea8);
    /* 004b6ea8: mov eax, 0x11 */ r_eax = 0x11u;
    /* 004b6ead: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6eb2:; BB(0x004b6eb2);
    /* 004b6eb2: mov eax, 0x12 */ r_eax = 0x12u;
    /* 004b6eb7: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6ebc(void)
{
    FN_ENTER(0x004b6ebc);
    goto L_004b6ebc;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6ebc); r_esp += 8; return;
L_004b6ebc:; BB(0x004b6ebc);
    /* 004b6ebc: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6ec4: jne 0x4b6ed0 */ if (!fZ) goto L_004b6ed0;
L_004b6ec6:; BB(0x004b6ec6);
    /* 004b6ec6: mov eax, 0xf */ r_eax = 0xfu;
    /* 004b6ecb: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6ed0:; BB(0x004b6ed0);
    /* 004b6ed0: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004b6ed5: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6eda(void)
{
    FN_ENTER(0x004b6eda);
    goto L_004b6eda;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6eda); r_esp += 8; return;
L_004b6eda:; BB(0x004b6eda);
    /* 004b6eda: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6ee0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6ee2: jne 0x4b6eeb */ if (!fZ) goto L_004b6eeb;
L_004b6ee4:; BB(0x004b6ee4);
    /* 004b6ee4: mov eax, 4 */ r_eax = 0x4u;
    /* 004b6ee9: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6eeb:; BB(0x004b6eeb);
    /* 004b6eeb: mov eax, 0xa */ r_eax = 0xau;
    /* 004b6ef0: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6ef2(void)
{
    FN_ENTER(0x004b6ef2);
    goto L_004b6ef2;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6ef2); r_esp += 8; return;
L_004b6ef2:; BB(0x004b6ef2);
    /* 004b6ef2: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6ef8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6efa: jne 0x4b6f03 */ if (!fZ) goto L_004b6f03;
L_004b6efc:; BB(0x004b6efc);
    /* 004b6efc: mov eax, 3 */ r_eax = 0x3u;
    /* 004b6f01: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f03:; BB(0x004b6f03);
    /* 004b6f03: mov eax, 0xb */ r_eax = 0xbu;
    /* 004b6f08: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6f0a(void)
{
    FN_ENTER(0x004b6f0a);
    goto L_004b6f0a;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6f0a); r_esp += 8; return;
L_004b6f0a:; BB(0x004b6f0a);
    /* 004b6f0a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f0c: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6f11u); f_00520bf4();
    /* 004b6f11: fcomp dword ptr [0x906d40] */ fx_compare(ST(0), R_F32((u32)(0x906d40u))); FPOP();
    /* 004b6f17: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6f19: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6f1a: jbe 0x4b6f23 */ if ((fC||fZ)) goto L_004b6f23;
L_004b6f1c:; BB(0x004b6f1c);
    /* 004b6f1c: mov eax, 0xc */ r_eax = 0xcu;
    /* 004b6f21: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f23:; BB(0x004b6f23);
    /* 004b6f23: mov eax, 0xe */ r_eax = 0xeu;
    /* 004b6f28: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6f2a(void)
{
    FN_ENTER(0x004b6f2a);
    goto L_004b6f2a;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6f2a); r_esp += 8; return;
L_004b6f2a:; BB(0x004b6f2a);
    /* 004b6f2a: mov eax, dword ptr [ebx + 0x6cc] */ r_eax = R32((u32)(r_ebx+0x6ccu));
    /* 004b6f30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004b6f32: jne 0x4b6f3b */ if (!fZ) goto L_004b6f3b;
L_004b6f34:; BB(0x004b6f34);
    /* 004b6f34: mov eax, 5 */ r_eax = 0x5u;
    /* 004b6f39: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f3b:; BB(0x004b6f3b);
    /* 004b6f3b: mov eax, 9 */ r_eax = 0x9u;
    /* 004b6f40: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6f42(void)
{
    FN_ENTER(0x004b6f42);
    goto L_004b6f42;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6f42); r_esp += 8; return;
L_004b6f42:; BB(0x004b6f42);
    /* 004b6f42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f44: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x4b6f49u); f_00520bf4();
    /* 004b6f49: fcomp dword ptr [0x906d40] */ fx_compare(ST(0), R_F32((u32)(0x906d40u))); FPOP();
    /* 004b6f4f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004b6f51: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004b6f52: jbe 0x4b6f5b */ if ((fC||fZ)) goto L_004b6f5b;
L_004b6f54:; BB(0x004b6f54);
    /* 004b6f54: mov eax, 8 */ r_eax = 0x8u;
    /* 004b6f59: jmp 0x4b6f60 */ goto L_004b6f60;
L_004b6f5b:; BB(0x004b6f5b);
    /* 004b6f5b: mov eax, 6 */ r_eax = 0x6u;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6f60(void)
{
    FN_ENTER(0x004b6f60);
    goto L_004b6f60;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6f60); r_esp += 8; return;
L_004b6f60:; BB(0x004b6f60);
    /* 004b6f60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004b6f61: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004b6f63: call 0x4b5150 */ r_esp -= 4; W32(r_esp, 0x4b6f68u); f_004b5150();
    /* 004b6f68: jmp 0x4b6e13 */ goto L_004b6e13;
}

void f_004b6f92(void)
{
    FN_ENTER(0x004b6f92);
    goto L_004b6f92;
L_004b6e13:; BB(0x004b6e13);
    /* 004b6e13: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004b6e16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004b6e17: ret 4 */ FN_RET(0x004b6f92); r_esp += 8; return;
L_004b6f92:; BB(0x004b6f92);
    /* 004b6f92: or al, 0xaa */ {  u32 a = (u8)r_eax; u32 b = 0xaau; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004b6f94: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004b6f99: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 004b6f9e: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 004b6fa3: mov eax, dword ptr [ebx + 0x6bc] */ r_eax = R32((u32)(r_ebx+0x6bcu));
    /* 004b6fa9: movzx ebx, word ptr [ebx + 0x394] */ r_ebx = (u32)R16((u32)(r_ebx+0x394u));
    /* 004b6fb0: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 004b6fb5: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 004b6fba: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004b6fbe: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004b6fc2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4b6fc7u); f_008003e0();
    /* 004b6fc7: jmp 0x4b6e13 */ goto L_004b6e13;
}

