#include "protos.h"

void f_005e9010(void) /* sub_5E9010 */
{
    FN_ENTER(0x005e9010);
    /* 005e9010: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9013: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005e9017: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e901d: mov ecx, dword ptr [eax + 0x300] */ r_ecx = R32((u32)(r_eax+0x300u));
    /* 005e9023: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005e9026: mov ecx, dword ptr [eax + 0x304] */ r_ecx = R32((u32)(r_eax+0x304u));
    /* 005e902c: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005e9032: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005e9036: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e903a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 005e903d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005e9041: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e9044: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9049: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e904a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e904b: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5e9050u); f_0077fffc();
    /* 005e9050: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9053: ret 4 */ FN_RET(0x005e9010); r_esp += 8; return;
}

void f_005e9058(void) /* sub_5E9058 */
{
    FN_ENTER(0x005e9058);
    /* 005e9058: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005e905e: test eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9063: je 0x5e9088 */ if (fZ) goto L_005e9088;
L_005e9065:; BB(0x005e9065);
    /* 005e9065: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005e906b: mov eax, 2 */ r_eax = 0x2u;
    /* 005e9070: mov word ptr [edx + 0x8a4], ax */ W16((u32)(r_edx+0x8a4u), (u16)r_eax);
    /* 005e9077: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005e907d: and eax, 0x7fffffff */ {  u32 a = r_eax; u32 b = 0x7fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9082: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
L_005e9088:; BB(0x005e9088);
    /* 005e9088: ret  */ FN_RET(0x005e9058); r_esp += 4; return;
}

void f_005e908c(void) /* sub_5E908C */
{
    FN_ENTER(0x005e908c);
    /* 005e908c: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e9092: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9094: je 0x5e90a5 */ if (fZ) goto L_005e90a5;
L_005e9096:; BB(0x005e9096);
    /* 005e9096: movsx eax, byte ptr [ecx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0xf1u));
    /* 005e909d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e90a0: je 0x5e90a8 */ if (fZ) goto L_005e90a8;
L_005e90a2:; BB(0x005e90a2);
    /* 005e90a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e90a4: ret  */ FN_RET(0x005e908c); r_esp += 4; return;
L_005e90a5:; BB(0x005e90a5);
    /* 005e90a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e90a7: ret  */ FN_RET(0x005e908c); r_esp += 4; return;
L_005e90a8:; BB(0x005e90a8);
    /* 005e90a8: mov eax, 1 */ r_eax = 0x1u;
    /* 005e90ad: ret  */ FN_RET(0x005e908c); r_esp += 4; return;
}

void f_005e90b0(void) /* sub_5E90B0 */
{
    FN_ENTER(0x005e90b0);
    /* 005e90b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e90b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e90b3: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005e90b9: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e90bf: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e90c4u); f_006a2e8c();
    /* 005e90c4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005e90c7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e90ca: je 0x5e90d0 */ if (fZ) goto L_005e90d0;
L_005e90cc:; BB(0x005e90cc);
    /* 005e90cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e90ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e90cf: ret  */ FN_RET(0x005e90b0); r_esp += 4; return;
L_005e90d0:; BB(0x005e90d0);
    /* 005e90d0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e90d2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e90d4: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e90dau); call_ind(t); }
    /* 005e90da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e90dd: jne 0x5e90cc */ if (!fZ) goto L_005e90cc;
L_005e90df:; BB(0x005e90df);
    /* 005e90df: mov eax, 1 */ r_eax = 0x1u;
    /* 005e90e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e90e5: ret  */ FN_RET(0x005e90b0); r_esp += 4; return;
}

void f_005e90e8(void) /* sub_5E90E8 */
{
    FN_ENTER(0x005e90e8);
    /* 005e90e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e90e9: mov esi, ecx */ r_esi = r_ecx;
    /* 005e90eb: mov ecx, esi */ r_ecx = r_esi;
    /* 005e90ed: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e90f2u); f_005e908c();
    /* 005e90f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e90f4: je 0x5e9117 */ if (fZ) goto L_005e9117;
L_005e90f6:; BB(0x005e90f6);
    /* 005e90f6: mov ecx, esi */ r_ecx = r_esi;
    /* 005e90f8: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e90fdu); f_005e8fa4();
    /* 005e90fd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9102: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e9108: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e910a: call dword ptr [eax + 0x114] */ { u32 t = R32((u32)(r_eax+0x114u)); r_esp -= 4; W32(r_esp, 0x5e9110u); call_ind(t); }
    /* 005e9110: mov ecx, esi */ r_ecx = r_esi;
    /* 005e9112: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e9117u); f_005e9058();
L_005e9117:; BB(0x005e9117);
    /* 005e9117: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9118: ret  */ FN_RET(0x005e90e8); r_esp += 4; return;
}

void f_005e911c(void) /* sub_5E911C */
{
    FN_ENTER(0x005e911c);
    /* 005e911c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e911d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e911e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e911f: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9122: mov esi, ecx */ r_esi = r_ecx;
    /* 005e9124: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 005e912b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e912e: je 0x5e9139 */ if (fZ) goto L_005e9139;
L_005e9130:; BB(0x005e9130);
    /* 005e9130: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9133: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9134: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9135: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9136: ret 0x14 */ FN_RET(0x005e911c); r_esp += 24; return;
L_005e9139:; BB(0x005e9139);
    /* 005e9139: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e913f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9141: je 0x5e9130 */ if (fZ) goto L_005e9130;
L_005e9143:; BB(0x005e9143);
    /* 005e9143: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e9147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9149: je 0x5e9130 */ if (fZ) goto L_005e9130;
L_005e914b:; BB(0x005e914b);
    /* 005e914b: lea ecx, [ebx + 0x8a4] */ r_ecx = (u32)(r_ebx+0x8a4u);
    /* 005e9151: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5e9156u); f_006a3250();
    /* 005e9156: movzx edx, word ptr [ebx + 0x8a4] */ r_edx = (u32)R16((u32)(r_ebx+0x8a4u));
    /* 005e915d: fld dword ptr [edx*4 + 0x9cb9dc] */ FPUSH(R_F32((u32)(r_edx*4+0x9cb9dcu)));
    /* 005e9164: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 005e9168: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005e916b: fmul dword ptr [eax*4 + 0x9cb9e8] */ ST(0) = ST(0) * R_F32((u32)(r_eax*4+0x9cb9e8u));
    /* 005e9172: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e9176: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9179: je 0x5e935c */ if (fZ) goto L_005e935c;
L_005e917f:; BB(0x005e917f);
    /* 005e917f: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 005e9183: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 005e9187: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005e9189: mov ebx, dword ptr [esi + 0xf8] */ r_ebx = R32((u32)(r_esi+0xf8u));
    /* 005e918f: lea ebp, [ebp + ebp] */ r_ebp = (u32)(r_ebp+r_ebp);
    /* 005e9193: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e9195: sub ebp, dword ptr [esp + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005e9199: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e919b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e919d: sub ebp, dword ptr [esp + 0x50] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x50u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005e91a1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e91a3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e91a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e91a8: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 005e91ac: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005e91b0: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 005e91b4: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005e91ba: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e91be: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005e91c6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005e91c9: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e91cb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005e91cf: call dword ptr [eax + 0x54] */ { u32 t = R32((u32)(r_eax+0x54u)); r_esp -= 4; W32(r_esp, 0x5e91d2u); call_ind(t); }
    /* 005e91d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e91d4: je 0x5e9130 */ if (fZ) goto L_005e9130;
L_005e91da:; BB(0x005e91da);
    /* 005e91da: fld dword ptr [0x92d60c] */ FPUSH(R_F32((u32)(0x92d60cu)));
    /* 005e91e0: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e91e4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e91e8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e91ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e91ec: je 0x5e9277 */ if (fZ) goto L_005e9277;
L_005e91f2:; BB(0x005e91f2);
    /* 005e91f2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e91f6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e91f9: jne 0x5e9245 */ if (!fZ) goto L_005e9245;
L_005e91fb:; BB(0x005e91fb);
    /* 005e91fb: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e91ff: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005e9203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9204: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005e9206: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005e920b: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9211: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 005e9215: call dword ptr [ebp + 0x5c] */ { u32 t = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, 0x5e9218u); call_ind(t); }
    /* 005e9218: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e921c: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e9220: fld dword ptr [0x92d608] */ FPUSH(R_F32((u32)(0x92d608u)));
    /* 005e9226: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005e9228: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005e922e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9231: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005e9235: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 005e9239: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005e923d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e9240: call dword ptr [ebp + 0x68] */ { u32 t = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, 0x5e9243u); call_ind(t); }
    /* 005e9243: jmp 0x5e9295 */ goto L_005e9295;
L_005e9245:; BB(0x005e9245);
    /* 005e9245: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e9249: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e924c: jne 0x5e9295 */ if (!fZ) goto L_005e9295;
L_005e924e:; BB(0x005e924e);
    /* 005e924e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e9252: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e9254: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e9258: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 005e925e: mov ebx, 2 */ r_ebx = 0x2u;
    /* 005e9263: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9266: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e926c: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 005e9270: call dword ptr [edx + 0x64] */ { u32 t = R32((u32)(r_edx+0x64u)); r_esp -= 4; W32(r_esp, 0x5e9273u); call_ind(t); }
    /* 005e9273: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e9275: jmp 0x5e9295 */ goto L_005e9295;
L_005e9277:; BB(0x005e9277);
    /* 005e9277: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e927b: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005e927f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9280: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005e9282: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e9284: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e928a: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 005e928e: call dword ptr [ebp + 0x5c] */ { u32 t = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, 0x5e9291u); call_ind(t); }
    /* 005e9291: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_005e9295:; BB(0x005e9295);
    /* 005e9295: mov ecx, dword ptr [esi + 0x23c] */ r_ecx = R32((u32)(r_esi+0x23cu));
    /* 005e929b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e929d: je 0x5e92b9 */ if (fZ) goto L_005e92b9;
L_005e929f:; BB(0x005e929f);
    /* 005e929f: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005e92a3: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 005e92a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e92a8: movzx ebp, word ptr [eax + 0x1c] */ r_ebp = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e92ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e92ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e92ae: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e92b4: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x5e92b6u); call_ind(t); }
    /* 005e92b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e92b9:; BB(0x005e92b9);
    /* 005e92b9: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e92bd: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e92c3: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 005e92c7: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 005e92cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e92d1: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005e92d5: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e92d9: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e92dd: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005e92e1: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 005e92e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e92e6: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x5e92ebu); f_0069b4f0();
    /* 005e92eb: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e92f1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e92f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e92f4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e92f7: call dword ptr [eax + 0x134] */ { u32 t = R32((u32)(r_eax+0x134u)); r_esp -= 4; W32(r_esp, 0x5e92fdu); call_ind(t); }
    /* 005e92fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e92fe: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e9302: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9303: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e9309: call 0x6918b4 */ r_esp -= 4; W32(r_esp, 0x5e930eu); f_006918b4();
    /* 005e930e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e9311: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x5e9316u); f_005e4aac();
    /* 005e9316: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 005e931a: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005e9321: movzx edx, byte ptr [esi + 0xf4] */ r_edx = (u32)R8((u32)(r_esi+0xf4u));
    /* 005e9328: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e932e: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005e9331: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005e9335: mov byte ptr [esp + 2], bl */ W8((u32)(r_esp+0x2u), (u8)r_ebx);
    /* 005e9339: mov ebx, dword ptr [esp + 0x44] */ r_ebx = R32((u32)(r_esp+0x44u));
    /* 005e933d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005e9341: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005e9345: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 005e9349: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 005e934c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e934d: call 0x5e5098 */ r_esp -= 4; W32(r_esp, 0x5e9352u); f_005e5098();
    /* 005e9352: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9353: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9356: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9358: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9359: ret 0x14 */ FN_RET(0x005e911c); r_esp += 24; return;
L_005e935c:; BB(0x005e935c);
    /* 005e935c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e935e: mov ecx, esi */ r_ecx = r_esi;
    /* 005e9360: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e9366u); call_ind(t); }
    /* 005e9366: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9368: jne 0x5e917f */ if (!fZ) goto L_005e917f;
L_005e936e:; BB(0x005e936e);
    /* 005e936e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e9372: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e9378: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e937c: jmp 0x5e917f */ goto L_005e917f;
}

void f_005e9384(void) /* sub_5E9384 */
{
    FN_ENTER(0x005e9384);
    /* 005e9384: mov eax, dword ptr [ecx + 0x234] */ r_eax = R32((u32)(r_ecx+0x234u));
    /* 005e938a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e938c: je 0x5e93a2 */ if (fZ) goto L_005e93a2;
L_005e938e:; BB(0x005e938e);
    /* 005e938e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9392: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9396: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9397: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e939d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e939fu); call_ind(t); }
    /* 005e939f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005e93a2:; BB(0x005e93a2);
    /* 005e93a2: ret 8 */ FN_RET(0x005e9384); r_esp += 12; return;
}

void f_005e93a8(void) /* sub_5E93A8 */
{
    FN_ENTER(0x005e93a8);
    /* 005e93a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e93a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e93aa: mov edi, ecx */ r_edi = r_ecx;
    /* 005e93ac: mov ecx, edi */ r_ecx = r_edi;
    /* 005e93ae: call 0x5c5114 */ r_esp -= 4; W32(r_esp, 0x5e93b3u); f_005c5114();
    /* 005e93b3: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e93b6: je 0x5e93dc */ if (fZ) goto L_005e93dc;
L_005e93b8:; BB(0x005e93b8);
    /* 005e93b8: mov ebp, 1 */ r_ebp = 0x1u;
L_005e93bd:; BB(0x005e93bd);
    /* 005e93bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e93bf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e93c0: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e93c5u); f_005e4ba8();
    /* 005e93c5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e93c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e93ca: je 0x5e93d7 */ if (fZ) goto L_005e93d7;
L_005e93cc:; BB(0x005e93cc);
    /* 005e93cc: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005e93cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e93d2: jle 0x5e93d7 */ if ((fZ||fS!=fO)) goto L_005e93d7;
L_005e93d4:; BB(0x005e93d4);
    /* 005e93d4: or ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005e93d7:; BB(0x005e93d7);
    /* 005e93d7: mov eax, ebp */ r_eax = r_ebp;
    /* 005e93d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e93da: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e93db: ret  */ FN_RET(0x005e93a8); r_esp += 4; return;
L_005e93dc:; BB(0x005e93dc);
    /* 005e93dc: mov ebp, 2 */ r_ebp = 0x2u;
    /* 005e93e1: jmp 0x5e93bd */ goto L_005e93bd;
}

void f_005e93e4(void) /* sub_5E93E4 */
{
    FN_ENTER(0x005e93e4);
    /* 005e93e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e93e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e93e6: mov eax, dword ptr [ecx + 0x200] */ r_eax = R32((u32)(r_ecx+0x200u));
    /* 005e93ec: movzx edx, byte ptr [eax + 0x1a] */ r_edx = (u32)R8((u32)(r_eax+0x1au));
    /* 005e93f0: movzx ebx, byte ptr [esp + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+0xcu));
    /* 005e93f5: movzx eax, byte ptr [ecx + 0x1f5] */ r_eax = (u32)R8((u32)(r_ecx+0x1f5u));
    /* 005e93fc: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e93ff: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e9401: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9403: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005e9406: jge 0x5e9410 */ if ((fS==fO)) goto L_005e9410;
L_005e9408:; BB(0x005e9408);
    /* 005e9408: mov byte ptr [ecx + 0x1f5], dl */ W8((u32)(r_ecx+0x1f5u), (u8)r_edx);
    /* 005e940e: jmp 0x5e941d */ goto L_005e941d;
L_005e9410:; BB(0x005e9410);
    /* 005e9410: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 005e9415: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9417: mov byte ptr [ecx + 0x1f5], al */ W8((u32)(r_ecx+0x1f5u), (u8)r_eax);
L_005e941d:; BB(0x005e941d);
    /* 005e941d: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e9422u); f_005c42f4();
    /* 005e9422: mov eax, 1 */ r_eax = 0x1u;
    /* 005e9427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9428: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9429: ret 4 */ FN_RET(0x005e93e4); r_esp += 8; return;
}

void f_005e942c(void) /* sub_5E942C */
{
    FN_ENTER(0x005e942c);
    /* 005e942c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e942d: mov esi, ecx */ r_esi = r_ecx;
    /* 005e942f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e9431: mov ecx, esi */ r_ecx = r_esi;
    /* 005e9433: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e9439u); call_ind(t); }
    /* 005e9439: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e943b: jne 0x5e944d */ if (!fZ) goto L_005e944d;
L_005e943d:; BB(0x005e943d);
    /* 005e943d: movzx eax, byte ptr [esi + 0x1f6] */ r_eax = (u32)R8((u32)(r_esi+0x1f6u));
    /* 005e9444: and eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e9447: mov byte ptr [esi + 0x1f6], al */ W8((u32)(r_esi+0x1f6u), (u8)r_eax);
L_005e944d:; BB(0x005e944d);
    /* 005e944d: mov ecx, esi */ r_ecx = r_esi;
    /* 005e944f: call 0x5e7a20 */ r_esp -= 4; W32(r_esp, 0x5e9454u); f_005e7a20();
    /* 005e9454: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9455: ret  */ FN_RET(0x005e942c); r_esp += 4; return;
}

void f_005e9458(void) /* sub_5E9458 */
{
    FN_ENTER(0x005e9458);
    /* 005e9458: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9459: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e945c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e945e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e9461: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5e9466u); f_005d6a3c();
    /* 005e9466: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e9469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e946a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e946c: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5e9471u); f_005c425c();
    /* 005e9471: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e9474: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5e9479u); f_005d2fb0();
    /* 005e9479: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e947c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e947d: ret  */ FN_RET(0x005e9458); r_esp += 4; return;
}

void f_005e9480(void) /* sub_5E9480 */
{
    FN_ENTER(0x005e9480);
    /* 005e9480: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9481: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e9483: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005e9489: add ebx, 0x1d0 */ {  u32 a = r_ebx; u32 b = 0x1d0u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e948f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9491: je 0x5e949e */ if (fZ) goto L_005e949e;
L_005e9493:; BB(0x005e9493);
    /* 005e9493: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9494: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9496: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e9498: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5e949eu); call_ind(t); }
L_005e949e:; BB(0x005e949e);
    /* 005e949e: mov eax, ebx */ r_eax = r_ebx;
    /* 005e94a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e94a1: ret  */ FN_RET(0x005e9480); r_esp += 4; return;
}

void f_005e94a4(void) /* sub_5E94A4 */
{
    FN_ENTER(0x005e94a4);
    /* 005e94a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005e94a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e94aa: je 0x5e94c6 */ if (fZ) goto L_005e94c6;
L_005e94ac:; BB(0x005e94ac);
    /* 005e94ac: movsx eax, byte ptr [edx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0xf1u));
    /* 005e94b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e94b5: je 0x5e94c6 */ if (fZ) goto L_005e94c6;
L_005e94b7:; BB(0x005e94b7);
    /* 005e94b7: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005e94bd: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e94c0: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
L_005e94c6:; BB(0x005e94c6);
    /* 005e94c6: ret  */ FN_RET(0x005e94a4); r_esp += 4; return;
}

void f_005e94c8(void) /* sub_5E94C8 */
{
    FN_ENTER(0x005e94c8);
    /* 005e94c8: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e94cf: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e94d2: jne 0x5e94e2 */ if (!fZ) goto L_005e94e2;
L_005e94d4:; BB(0x005e94d4);
    /* 005e94d4: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e94db: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e94de: je 0x5e9506 */ if (fZ) goto L_005e9506;
L_005e94e0:; BB(0x005e94e0);
    /* 005e94e0: jmp 0x5e9505 */ goto L_005e9505;
L_005e94e2:; BB(0x005e94e2);
    /* 005e94e2: cmp eax, 0xe8 */ {  u32 a = r_eax; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e94e7: jl 0x5e94fe */ if ((fS!=fO)) goto L_005e94fe;
L_005e94e9:; BB(0x005e94e9);
    /* 005e94e9: cmp eax, 0xeb */ {  u32 a = r_eax; u32 b = 0xebu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e94ee: jle 0x5e94f8 */ if ((fZ||fS!=fO)) goto L_005e94f8;
L_005e94f0:; BB(0x005e94f0);
    /* 005e94f0: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e94f7: ret  */ FN_RET(0x005e94c8); r_esp += 4; return;
L_005e94f8:; BB(0x005e94f8);
    /* 005e94f8: mov eax, 1 */ r_eax = 0x1u;
    /* 005e94fd: ret  */ FN_RET(0x005e94c8); r_esp += 4; return;
L_005e94fe:; BB(0x005e94fe);
    /* 005e94fe: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
L_005e9505:; BB(0x005e9505);
    /* 005e9505: ret  */ FN_RET(0x005e94c8); r_esp += 4; return;
L_005e9506:; BB(0x005e9506);
    /* 005e9506: mov eax, 2 */ r_eax = 0x2u;
    /* 005e950b: ret  */ FN_RET(0x005e94c8); r_esp += 4; return;
}

void f_005e950c(void) /* sub_5E950C */
{
    FN_ENTER(0x005e950c);
    /* 005e950c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e9510: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005e9514: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9517: add ecx, 0x1c8 */ {  u32 a = r_ecx; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e951d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e951f: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e9521: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 005e9525: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 005e9529: ret  */ FN_RET(0x005e950c); r_esp += 4; return;
}

void f_005e952c(void) /* sub_5E952C */
{
    FN_ENTER(0x005e952c);
    /* 005e952c: movzx eax, byte ptr [ecx + 0x1f6] */ r_eax = (u32)R8((u32)(r_ecx+0x1f6u));
    /* 005e9533: ret  */ FN_RET(0x005e952c); r_esp += 4; return;
}

void f_005e9534(void) /* sub_5E9534 */
{
    FN_ENTER(0x005e9534);
    /* 005e9534: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005e953a: test eax, 0x400020 */ {  u32 a = r_eax; u32 b = 0x400020u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e953f: jne 0x5e954f */ if (!fZ) goto L_005e954f;
L_005e9541:; BB(0x005e9541);
    /* 005e9541: movzx eax, byte ptr [ecx + 0x1f6] */ r_eax = (u32)R8((u32)(r_ecx+0x1f6u));
    /* 005e9548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e954a: jne 0x5e954f */ if (!fZ) goto L_005e954f;
L_005e954c:; BB(0x005e954c);
    /* 005e954c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e954e: ret  */ FN_RET(0x005e9534); r_esp += 4; return;
L_005e954f:; BB(0x005e954f);
    /* 005e954f: mov eax, 1 */ r_eax = 0x1u;
    /* 005e9554: ret  */ FN_RET(0x005e9534); r_esp += 4; return;
}

void f_005e9558(void) /* sub_5E9558 */
{
    FN_ENTER(0x005e9558);
    /* 005e9558: mov dword ptr [0xa8dce0], 0x3f800000 */ W32((u32)(0xa8dce0u), 0x3f800000u);
    /* 005e9562: mov dword ptr [0xa8dce4], 0x41000000 */ W32((u32)(0xa8dce4u), 0x41000000u);
    /* 005e956c: mov dword ptr [0xa8dce8], 0x3fc00000 */ W32((u32)(0xa8dce8u), 0x3fc00000u);
    /* 005e9576: ret  */ FN_RET(0x005e9558); r_esp += 4; return;
}

void f_005e9578(void) /* sub_5E9578 */
{
    FN_ENTER(0x005e9578);
    /* 005e9578: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9579: mov edi, ecx */ r_edi = r_ecx;
    /* 005e957b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005e957d: mov ecx, edi */ r_ecx = r_edi;
    /* 005e957f: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x5e9582u); call_ind(t); }
    /* 005e9582: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e9584: je 0x5e958d */ if (fZ) goto L_005e958d;
L_005e9586:; BB(0x005e9586);
    /* 005e9586: mov eax, 0x20000 */ r_eax = 0x20000u;
    /* 005e958b: jmp 0x5e9592 */ goto L_005e9592;
L_005e958d:; BB(0x005e958d);
    /* 005e958d: mov eax, 0x10000 */ r_eax = 0x10000u;
L_005e9592:; BB(0x005e9592);
    /* 005e9592: or dword ptr [edi + 0x1dc], eax */ { u32 ad = (u32)(r_edi+0x1dcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e9599: ret  */ FN_RET(0x005e9578); r_esp += 4; return;
}

void f_005e959c(void) /* sub_5E959C */
{
    FN_ENTER(0x005e959c);
    /* 005e959c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e959d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e959f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e95a1: push 0x8dbbfc */ { u32 v = 0x8dbbfcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e95a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e95ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e95ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e95b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e95b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e95ba: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e95bd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e95c0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e95c3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e95c6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e95c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e95ca: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e95cd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e95d0: call 0x5d1b50 */ r_esp -= 4; W32(r_esp, 0x5e95d5u); f_005d1b50();
    /* 005e95d5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e95dc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e95df: mov dword ptr [ecx], 0xb10200 */ W32((u32)(r_ecx), 0xb10200u);
    /* 005e95e5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005e95e7: call dword ptr [0xb10244] */ { u32 t = R32((u32)(0xb10244u)); r_esp -= 4; W32(r_esp, 0x5e95edu); call_ind(t); }
    /* 005e95ed: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e95f0: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e95f7: cmp eax, 0xe3 */ {  u32 a = r_eax; u32 b = 0xe3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e95fc: jne 0x5e9610 */ if (!fZ) goto L_005e9610;
L_005e95fe:; BB(0x005e95fe);
    /* 005e95fe: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e9605: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9608: je 0x5e98eb */ if (fZ) goto L_005e98eb;
L_005e960e:; BB(0x005e960e);
    /* 005e960e: jmp 0x5e9627 */ goto L_005e9627;
L_005e9610:; BB(0x005e9610);
    /* 005e9610: cmp eax, 0xde */ {  u32 a = r_eax; u32 b = 0xdeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9615: jne 0x5e9627 */ if (!fZ) goto L_005e9627;
L_005e9617:; BB(0x005e9617);
    /* 005e9617: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005e961e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9621: je 0x5e98f7 */ if (fZ) goto L_005e98f7;
L_005e9627:; BB(0x005e9627);
    /* 005e9627: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e962a: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e962fu); f_005d2890();
    /* 005e962f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e9632: mov dword ptr [edx + 0x200], eax */ W32((u32)(r_edx+0x200u), r_eax);
    /* 005e9638: movzx eax, byte ptr [eax + 0x2a] */ r_eax = (u32)R8((u32)(r_eax+0x2au));
    /* 005e963c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e963d: call 0x5e5370 */ r_esp -= 4; W32(r_esp, 0x5e9642u); f_005e5370();
    /* 005e9642: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9643: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e9646: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e9649: mov edi, dword ptr [esi + 0x200] */ r_edi = R32((u32)(r_esi+0x200u));
    /* 005e964f: mov dword ptr [esi + 0x204], eax */ W32((u32)(r_esi+0x204u), r_eax);
    /* 005e9655: movsx eax, byte ptr [edi + 0x1b] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1bu));
    /* 005e9659: mov word ptr [esi + 0x20c], ax */ W16((u32)(r_esi+0x20cu), (u16)r_eax);
    /* 005e9660: mov byte ptr [esi + 0x1f4], 1 */ W8((u32)(r_esi+0x1f4u), 0x1u);
    /* 005e9667: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e9669: mov byte ptr [esi + 0x20e], dl */ W8((u32)(r_esi+0x20eu), (u8)r_edx);
    /* 005e966f: mov byte ptr [esi + 0x20f], dl */ W8((u32)(r_esi+0x20fu), (u8)r_edx);
    /* 005e9675: movzx ebx, byte ptr [ecx + 3] */ r_ebx = (u32)R8((u32)(r_ecx+0x3u));
    /* 005e9679: mov byte ptr [esi + 0x1f5], bl */ W8((u32)(r_esi+0x1f5u), (u8)r_ebx);
    /* 005e967f: call 0x5d2fb0 */ r_esp -= 4; W32(r_esp, 0x5e9684u); f_005d2fb0();
    /* 005e9684: mov ecx, eax */ r_ecx = r_eax;
    /* 005e9686: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e9689: mov edx, dword ptr [eax + 0x200] */ r_edx = R32((u32)(r_eax+0x200u));
    /* 005e968f: movzx edx, byte ptr [edx + 0x1c] */ r_edx = (u32)R8((u32)(r_edx+0x1cu));
    /* 005e9693: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9695: jne 0x5e96a4 */ if (!fZ) goto L_005e96a4;
L_005e9697:; BB(0x005e9697);
    /* 005e9697: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e969a: movzx edx, byte ptr [edx + 4] */ r_edx = (u32)R8((u32)(r_edx+0x4u));
    /* 005e969e: and edx, 0xbf */ {  u32 a = r_edx; u32 b = 0xbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_005e96a4:; BB(0x005e96a4);
    /* 005e96a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e96a6: jne 0x5e96b3 */ if (!fZ) goto L_005e96b3;
L_005e96a8:; BB(0x005e96a8);
    /* 005e96a8: or edx, 0xffffff80 */ {  u32 a = r_edx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e96ab: mov byte ptr [eax + 0x1f6], dl */ W8((u32)(r_eax+0x1f6u), (u8)r_edx);
    /* 005e96b1: jmp 0x5e96b9 */ goto L_005e96b9;
L_005e96b3:; BB(0x005e96b3);
    /* 005e96b3: mov byte ptr [eax + 0x1f6], dl */ W8((u32)(r_eax+0x1f6u), (u8)r_edx);
L_005e96b9:; BB(0x005e96b9);
    /* 005e96b9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e96bc: add eax, 0x1c8 */ {  u32 a = r_eax; u32 b = 0x1c8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e96c1: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e96c4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e96c6: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 005e96ca: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e96cc: mov word ptr [eax + 4], bx */ W16((u32)(r_eax+0x4u), (u16)r_ebx);
    /* 005e96d0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e96d3: mov ebx, dword ptr [esi + 0x200] */ r_ebx = R32((u32)(r_esi+0x200u));
    /* 005e96d9: mov dword ptr [esi + 0x238], 0x5e4678 */ W32((u32)(r_esi+0x238u), 0x5e4678u);
    /* 005e96e3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005e96e5: mov dword ptr [esi + 0x234], edi */ W32((u32)(r_esi+0x234u), r_edi);
    /* 005e96eb: mov dword ptr [esi + 0x23c], edi */ W32((u32)(r_esi+0x23cu), r_edi);
    /* 005e96f1: movzx eax, byte ptr [ebx + 0x1f] */ r_eax = (u32)R8((u32)(r_ebx+0x1fu));
    /* 005e96f5: mov word ptr [esi + 0x1f2], ax */ W16((u32)(r_esi+0x1f2u), (u16)r_eax);
    /* 005e96fc: movzx edx, byte ptr [ebx + 0x20] */ r_edx = (u32)R8((u32)(r_ebx+0x20u));
    /* 005e9700: movzx ecx, byte ptr [ebx + 0x21] */ r_ecx = (u32)R8((u32)(r_ebx+0x21u));
    /* 005e9704: mov byte ptr [esi + 0x1c0], dl */ W8((u32)(r_esi+0x1c0u), (u8)r_edx);
    /* 005e970a: mov byte ptr [esi + 0x1c4], cl */ W8((u32)(r_esi+0x1c4u), (u8)r_ecx);
    /* 005e9710: movzx eax, byte ptr [ebx + 0x22] */ r_eax = (u32)R8((u32)(r_ebx+0x22u));
    /* 005e9714: movzx edx, byte ptr [ebx + 0x23] */ r_edx = (u32)R8((u32)(r_ebx+0x23u));
    /* 005e9718: mov byte ptr [esi + 0x1c1], al */ W8((u32)(r_esi+0x1c1u), (u8)r_eax);
    /* 005e971e: mov byte ptr [esi + 0x1c5], dl */ W8((u32)(r_esi+0x1c5u), (u8)r_edx);
    /* 005e9724: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e9729: mov byte ptr [esi + 0x1c2], al */ W8((u32)(r_esi+0x1c2u), (u8)r_eax);
    /* 005e972f: mov byte ptr [esi + 0x1c6], al */ W8((u32)(r_esi+0x1c6u), (u8)r_eax);
    /* 005e9735: mov byte ptr [esi + 0x1c3], al */ W8((u32)(r_esi+0x1c3u), (u8)r_eax);
    /* 005e973b: mov byte ptr [esi + 0x1c7], al */ W8((u32)(r_esi+0x1c7u), (u8)r_eax);
    /* 005e9741: add esi, 0x1b0 */ {  u32 a = r_esi; u32 b = 0x1b0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9747: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9749: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 005e974b: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 005e974e: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 005e9751: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005e9754: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e9757: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e975e: mov dword ptr [ecx + 0x208], 0x41980000 */ W32((u32)(r_ecx+0x208u), 0x41980000u);
    /* 005e9768: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e976a: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005e9770: mov dword ptr [ecx + 0x1e0], eax */ W32((u32)(r_ecx+0x1e0u), r_eax);
    /* 005e9776: mov dword ptr [ecx + 0x1e4], eax */ W32((u32)(r_ecx+0x1e4u), r_eax);
    /* 005e977c: mov dword ptr [ecx + 0x1e8], eax */ W32((u32)(r_ecx+0x1e8u), r_eax);
    /* 005e9782: cmp edx, 0xed */ {  u32 a = r_edx; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9788: jl 0x5e979f */ if ((fS!=fO)) goto L_005e979f;
L_005e978a:; BB(0x005e978a);
    /* 005e978a: mov byte ptr [ecx + 0x1f7], 1 */ W8((u32)(r_ecx+0x1f7u), 0x1u);
    /* 005e9791: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e9796: mov word ptr [ecx + 0x1f0], ax */ W16((u32)(r_ecx+0x1f0u), (u16)r_eax);
    /* 005e979d: jmp 0x5e97d7 */ goto L_005e97d7;
L_005e979f:; BB(0x005e979f);
    /* 005e979f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e97a0: call 0x5e4dd0 */ r_esp -= 4; W32(r_esp, 0x5e97a5u); f_005e4dd0();
    /* 005e97a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e97a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e97a9: mov byte ptr [ecx + 0x1f7], al */ W8((u32)(r_ecx+0x1f7u), (u8)r_eax);
    /* 005e97af: movsx eax, word ptr [ecx + 0x20c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x20cu));
    /* 005e97b6: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e97b9: je 0x5e9903 */ if (fZ) goto L_005e9903;
L_005e97bf:; BB(0x005e97bf);
    /* 005e97bf: mov eax, dword ptr [ecx + 0x200] */ r_eax = R32((u32)(r_ecx+0x200u));
    /* 005e97c5: movzx edx, byte ptr [eax + 0x24] */ r_edx = (u32)R8((u32)(r_eax+0x24u));
    /* 005e97c9: mov word ptr [ecx + 0x1f0], dx */ W16((u32)(r_ecx+0x1f0u), (u16)r_edx);
    /* 005e97d0: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
L_005e97d7:; BB(0x005e97d7);
    /* 005e97d7: mov dword ptr [ecx + 0x1f8], 0xffffffff */ W32((u32)(r_ecx+0x1f8u), 0xffffffffu);
    /* 005e97e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e97e3: mov dword ptr [ecx + 0x1fc], 0 */ W32((u32)(r_ecx+0x1fcu), 0x0u);
    /* 005e97ed: mov dword ptr [ecx + 0x22c], 0x3f800000 */ W32((u32)(r_ecx+0x22cu), 0x3f800000u);
    /* 005e97f7: mov dword ptr [ecx + 0x230], 0 */ W32((u32)(r_ecx+0x230u), 0x0u);
    /* 005e9801: jne 0x5e9811 */ if (!fZ) goto L_005e9811;
L_005e9803:; BB(0x005e9803);
    /* 005e9803: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e9808: mov word ptr [ecx + 0x20c], ax */ W16((u32)(r_ecx+0x20cu), (u16)r_eax);
    /* 005e980f: jmp 0x5e9823 */ goto L_005e9823;
L_005e9811:; BB(0x005e9811);
    /* 005e9811: mov dword ptr [0xa8d848], 0 */ W32((u32)(0xa8d848u), 0x0u);
    /* 005e981b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e981d: mov dword ptr [ecx + 0x1ec], eax */ W32((u32)(r_ecx+0x1ecu), r_eax);
L_005e9823:; BB(0x005e9823);
    /* 005e9823: call 0x5e9578 */ r_esp -= 4; W32(r_esp, 0x5e9828u); f_005e9578();
    /* 005e9828: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e982b: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005e9831: movzx edx, byte ptr [ecx + 0x2b] */ r_edx = (u32)R8((u32)(r_ecx+0x2bu));
    /* 005e9835: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e9838: je 0x5e9853 */ if (fZ) goto L_005e9853;
L_005e983a:; BB(0x005e983a);
    /* 005e983a: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 005e9840: mov ecx, dword ptr [eax + 0x200] */ r_ecx = R32((u32)(r_eax+0x200u));
    /* 005e9846: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e9849: mov dword ptr [eax + 0x190], edx */ W32((u32)(r_eax+0x190u), r_edx);
    /* 005e984f: movzx edx, byte ptr [ecx + 0x2b] */ r_edx = (u32)R8((u32)(r_ecx+0x2bu));
L_005e9853:; BB(0x005e9853);
    /* 005e9853: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e9856: je 0x5e986e */ if (fZ) goto L_005e986e;
L_005e9858:; BB(0x005e9858);
    /* 005e9858: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005e985e: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e9864: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005e986a: movzx edx, byte ptr [ecx + 0x2b] */ r_edx = (u32)R8((u32)(r_ecx+0x2bu));
L_005e986e:; BB(0x005e986e);
    /* 005e986e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9871: je 0x5e9885 */ if (fZ) goto L_005e9885;
L_005e9873:; BB(0x005e9873);
    /* 005e9873: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005e9879: or edx, 0x80000 */ {  u32 a = r_edx; u32 b = 0x80000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e987f: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
L_005e9885:; BB(0x005e9885);
    /* 005e9885: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9888: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e988b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e988e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e9893: mov byte ptr [eax + 0x211], dl */ W8((u32)(r_eax+0x211u), (u8)r_edx);
    /* 005e9899: mov byte ptr [eax + 0x210], dl */ W8((u32)(r_eax+0x210u), (u8)r_edx);
    /* 005e989f: mov dword ptr [eax + 0x228], 0x3f800000 */ W32((u32)(r_eax+0x228u), 0x3f800000u);
    /* 005e98a9: mov dword ptr [eax + 0x224], 0x3f800000 */ W32((u32)(r_eax+0x224u), 0x3f800000u);
    /* 005e98b3: mov dword ptr [eax + 0x220], 0x3f800000 */ W32((u32)(r_eax+0x220u), 0x3f800000u);
    /* 005e98bd: mov dword ptr [eax + 0x21c], 0x3f800000 */ W32((u32)(r_eax+0x21cu), 0x3f800000u);
    /* 005e98c7: mov dword ptr [eax + 0x218], 0x3f800000 */ W32((u32)(r_eax+0x218u), 0x3f800000u);
    /* 005e98d1: mov dword ptr [eax + 0x214], 0x3f800000 */ W32((u32)(r_eax+0x214u), 0x3f800000u);
    /* 005e98db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e98de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e98e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005e98e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e98e8: ret 8 */ FN_RET(0x005e959c); r_esp += 12; return;
L_005e98eb:; BB(0x005e98eb);
    /* 005e98eb: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98ed: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e98f2u); f_005d240c();
    /* 005e98f2: jmp 0x5e9627 */ goto L_005e9627;
L_005e98f7:; BB(0x005e98f7);
    /* 005e98f7: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005e98f9: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e98feu); f_005d240c();
    /* 005e98fe: jmp 0x5e9627 */ goto L_005e9627;
L_005e9903:; BB(0x005e9903);
    /* 005e9903: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e990a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e990f: mov word ptr [ecx + 0x1f0], ax */ W16((u32)(r_ecx+0x1f0u), (u16)r_eax);
    /* 005e9916: jmp 0x5e97d7 */ goto L_005e97d7;
}

void f_005e991c(void) /* sub_5E991C */
{
    FN_ENTER(0x005e991c);
    /* 005e991c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e991d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e991f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9921: push 0x8dbc24 */ { u32 v = 0x8dbc24u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9926: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e992c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e992d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e9934: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9937: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e993a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e993d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e9940: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e9943: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9948: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e994f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e9954u); f_005caba4();
    /* 005e9954: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9955: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e9958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e995a: je 0x5e9993 */ if (fZ) goto L_005e9993;
L_005e995c:; BB(0x005e995c);
    /* 005e995c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e9963: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e996a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e996d: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9973: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9976: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5e997bu); f_005e959c();
    /* 005e997b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e997e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e9985:; BB(0x005e9985);
    /* 005e9985: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9988: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e998f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9991: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9992: ret  */ FN_RET(0x005e991c); r_esp += 4; return;
L_005e9993:; BB(0x005e9993);
    /* 005e9993: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9995: jmp 0x5e9985 */ goto L_005e9985;
}

void f_005e9998(void) /* sub_5E9998 */
{
    FN_ENTER(0x005e9998);
    /* 005e9998: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9999: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e999b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e999d: call 0x5e99bc */ r_esp -= 4; W32(r_esp, 0x5e99a2u); f_005e99bc();
    /* 005e99a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e99a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e99a8: jne 0x5e99ae */ if (!fZ) goto L_005e99ae;
L_005e99aa:; BB(0x005e99aa);
    /* 005e99aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e99ab: ret 4 */ FN_RET(0x005e9998); r_esp += 8; return;
L_005e99ae:; BB(0x005e99ae);
    /* 005e99ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e99af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e99b4u); f_005c2f74();
    /* 005e99b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e99b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e99b6: ret 4 */ FN_RET(0x005e9998); r_esp += 8; return;
}

void f_005e99bc(void) /* sub_5E99BC */
{
    FN_ENTER(0x005e99bc);
    /* 005e99bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e99bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e99bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e99c1: push 0x8dbc4e */ { u32 v = 0x8dbc4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e99c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e99cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e99cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e99d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e99d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e99da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e99dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e99e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e99e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e99e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e99ed: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e99f0: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005e99f3: mov dword ptr [edx], 0xb10330 */ W32((u32)(r_edx), 0xb10330u);
    /* 005e99f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e99fa: call 0x5e9a28 */ r_esp -= 4; W32(r_esp, 0x5e99ffu); f_005e9a28();
    /* 005e99ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e9a00: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9a03: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e9a06: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e9a0d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e9a10: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e9a15u); f_008171e8();
    /* 005e9a15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e9a18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e9a1f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e9a21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9a22: ret  */ FN_RET(0x005e99bc); r_esp += 4; return;
}

void f_005e9a28(void) /* sub_5E9A28 */
{
    FN_ENTER(0x005e9a28);
    /* 005e9a28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9a2a: je 0x5e9a47 */ if (fZ) goto L_005e9a47;
L_005e9a2c:; BB(0x005e9a2c);
    /* 005e9a2c: mov edx, dword ptr [0xa8dcf0] */ r_edx = R32((u32)(0xa8dcf0u));
    /* 005e9a32: mov ecx, dword ptr [0xa8dcf4] */ r_ecx = R32((u32)(0xa8dcf4u));
    /* 005e9a38: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 005e9a3a: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9a3d: shr eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 005e9a40: mov dword ptr [ecx + eax*4], 0 */ W32((u32)(r_ecx+r_eax*4), 0x0u);
L_005e9a47:; BB(0x005e9a47);
    /* 005e9a47: ret  */ FN_RET(0x005e9a28); r_esp += 4; return;
}

void f_005e9a48(void) /* sub_5E9A48 */
{
    FN_ENTER(0x005e9a48);
    /* 005e9a48: push dword ptr [0xa8dcf4] */ { u32 v = R32((u32)(0xa8dcf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9a4e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e9a53u); f_00857e98();
    /* 005e9a53: push dword ptr [0xa8dcf0] */ { u32 v = R32((u32)(0xa8dcf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9a59: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e9a5eu); f_00857e98();
    /* 005e9a5e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9a60: mov dword ptr [0xa8dcf4], eax */ W32((u32)(0xa8dcf4u), r_eax);
    /* 005e9a65: mov dword ptr [0xa8dcf0], eax */ W32((u32)(0xa8dcf0u), r_eax);
    /* 005e9a6a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9a6d: ret  */ FN_RET(0x005e9a48); r_esp += 4; return;
}

void f_005e9a70(void) /* sub_5E9A70 */
{
    FN_ENTER(0x005e9a70);
    /* 005e9a70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9a71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e9a73: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9a77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e9a79: call 0x5cab88 */ r_esp -= 4; W32(r_esp, 0x5e9a7eu); f_005cab88();
    /* 005e9a7e: mov edx, dword ptr [0xa8dcf4] */ r_edx = R32((u32)(0xa8dcf4u));
    /* 005e9a84: mov dword ptr [ebx], 0xb10330 */ W32((u32)(r_ebx), 0xb10330u);
    /* 005e9a8a: mov eax, dword ptr [0x9c2860] */ r_eax = R32((u32)(0x9c2860u));
    /* 005e9a8f: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005e9a92: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005e9a94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9a96: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9a98: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9a9e:; BB(0x005e9a9e);
    /* 005e9a9e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005e9aa1: mov eax, 1 */ r_eax = 0x1u;
    /* 005e9aa6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9aa8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9aae:; BB(0x005e9aae);
    /* 005e9aae: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e9ab1: mov eax, 2 */ r_eax = 0x2u;
    /* 005e9ab6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ab8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9abe:; BB(0x005e9abe);
    /* 005e9abe: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005e9ac1: mov eax, 3 */ r_eax = 0x3u;
    /* 005e9ac6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ac8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9ace:; BB(0x005e9ace);
    /* 005e9ace: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e9ad1: mov eax, 4 */ r_eax = 0x4u;
    /* 005e9ad6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ad8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9ade:; BB(0x005e9ade);
    /* 005e9ade: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 005e9ae1: mov eax, 5 */ r_eax = 0x5u;
    /* 005e9ae6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ae8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9aee:; BB(0x005e9aee);
    /* 005e9aee: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 005e9af1: mov eax, 6 */ r_eax = 0x6u;
    /* 005e9af6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9af8: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9afe:; BB(0x005e9afe);
    /* 005e9afe: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 005e9b01: mov eax, 7 */ r_eax = 0x7u;
    /* 005e9b06: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b08: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b0e:; BB(0x005e9b0e);
    /* 005e9b0e: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e9b11: mov eax, 8 */ r_eax = 0x8u;
    /* 005e9b16: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b18: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b1a:; BB(0x005e9b1a);
    /* 005e9b1a: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005e9b1d: mov eax, 9 */ r_eax = 0x9u;
    /* 005e9b22: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b24: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b26:; BB(0x005e9b26);
    /* 005e9b26: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 005e9b29: mov eax, 0xa */ r_eax = 0xau;
    /* 005e9b2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b30: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b32:; BB(0x005e9b32);
    /* 005e9b32: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e9b35: mov eax, 0xb */ r_eax = 0xbu;
    /* 005e9b3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b3c: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b3e:; BB(0x005e9b3e);
    /* 005e9b3e: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 005e9b41: mov eax, 0xc */ r_eax = 0xcu;
    /* 005e9b46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b48: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b4a:; BB(0x005e9b4a);
    /* 005e9b4a: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 005e9b4d: mov eax, 0xd */ r_eax = 0xdu;
    /* 005e9b52: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b54: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b56:; BB(0x005e9b56);
    /* 005e9b56: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 005e9b59: mov eax, 0xe */ r_eax = 0xeu;
    /* 005e9b5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b60: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b62:; BB(0x005e9b62);
    /* 005e9b62: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 005e9b65: mov eax, 0xf */ r_eax = 0xfu;
    /* 005e9b6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9b6c: je 0x5e9b88 */ if (fZ) goto L_005e9b88;
L_005e9b6e:; BB(0x005e9b6e);
    /* 005e9b6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e9b70:; BB(0x005e9b70);
    /* 005e9b70: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005e9b74: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 005e9b77: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 005e9b7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9b7c: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 005e9b7f: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 005e9b82: mov eax, ebx */ r_eax = r_ebx;
    /* 005e9b84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9b85: ret 8 */ FN_RET(0x005e9a70); r_esp += 12; return;
L_005e9b88:; BB(0x005e9b88);
    /* 005e9b88: mov dword ptr [edx + eax*4], 1 */ W32((u32)(r_edx+r_eax*4), 0x1u);
    /* 005e9b8f: shl eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005e9b92: add eax, dword ptr [0xa8dcf0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8dcf0u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9b98: jmp 0x5e9b70 */ goto L_005e9b70;
}

void f_005e9b9c(void) /* sub_5E9B9C */
{
    FN_ENTER(0x005e9b9c);
    /* 005e9b9c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9b9d: mov edi, ecx */ r_edi = r_ecx;
    /* 005e9b9f: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 005e9ba2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9ba4: je 0x5e9ba8 */ if (fZ) goto L_005e9ba8;
L_005e9ba6:; BB(0x005e9ba6);
    /* 005e9ba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e9ba7: ret  */ FN_RET(0x005e9b9c); r_esp += 4; return;
L_005e9ba8:; BB(0x005e9ba8);
    /* 005e9ba8: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 005e9bad: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9bb2: je 0x5e9c27 */ if (fZ) goto L_005e9c27;
L_005e9bb4:; BB(0x005e9bb4);
    /* 005e9bb4: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005e9bb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9bb9: je 0x5e9c34 */ if (fZ) goto L_005e9c34;
L_005e9bbb:; BB(0x005e9bbb);
    /* 005e9bbb: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005e9bbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9bc0: je 0x5e9c34 */ if (fZ) goto L_005e9c34;
L_005e9bc2:; BB(0x005e9bc2);
    /* 005e9bc2: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x5e9bc7u); f_0082dbac();
    /* 005e9bc7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e9bcc: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005e9bd1: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x5e9bd6u); f_007a9380();
    /* 005e9bd6: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005e9bdb: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e9be0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e9be5: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x5e9beau); f_007a902c();
    /* 005e9bea: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005e9bed: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e9bf0: jle 0x5e9c0c */ if ((fZ||fS!=fO)) goto L_005e9c0c;
L_005e9bf2:; BB(0x005e9bf2);
    /* 005e9bf2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e9bf4: call 0x82b23c */ r_esp -= 4; W32(r_esp, 0x5e9bf9u); f_0082b23c();
    /* 005e9bf9: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9bfc: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e9bff: call 0x82b284 */ r_esp -= 4; W32(r_esp, 0x5e9c04u); f_0082b284();
    /* 005e9c04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c07: call 0x82b2e8 */ r_esp -= 4; W32(r_esp, 0x5e9c0cu); f_0082b2e8();
L_005e9c0c:; BB(0x005e9c0c);
    /* 005e9c0c: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5e9c11u); f_007a9044();
    /* 005e9c11: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005e9c16: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005e9c1b: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x5e9c20u); f_007a9318();
    /* 005e9c20: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5e9c25u); f_0082dab0();
    /* 005e9c25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e9c26: ret  */ FN_RET(0x005e9b9c); r_esp += 4; return;
L_005e9c27:; BB(0x005e9c27);
    /* 005e9c27: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e9c2b: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9c30: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_005e9c34:; BB(0x005e9c34);
    /* 005e9c34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e9c35: ret  */ FN_RET(0x005e9b9c); r_esp += 4; return;
}

void f_005e9c38(void) /* sub_5E9C38 */
{
    FN_ENTER(0x005e9c38);
    /* 005e9c38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c3a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c3c: mov edx, ecx */ r_edx = r_ecx;
    /* 005e9c3e: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 005e9c41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e9c43: mov esi, ecx */ r_esi = r_ecx;
    /* 005e9c45: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 005e9c48: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e9c4a: test ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9c50: je 0x5e9cb2 */ if (fZ) goto L_005e9cb2;
L_005e9c52:; BB(0x005e9c52);
    /* 005e9c52: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 005e9c55: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9c57: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9c59: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9c5b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9c5d: mov ebx, eax */ r_ebx = r_eax;
    /* 005e9c5f: mov ebp, edx */ r_ebp = r_edx;
L_005e9c61:; BB(0x005e9c61);
    /* 005e9c61: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c63: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 005e9c66: lea eax, [esi + edi + 0xc] */ r_eax = (u32)(r_esi+r_edi+0xcu);
    /* 005e9c6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c6b: call 0x5dd6bc */ r_esp -= 4; W32(r_esp, 0x5e9c70u); f_005dd6bc();
    /* 005e9c70: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c73: mov edi, dword ptr [edi + esi + 0xc] */ r_edi = R32((u32)(r_edi+r_esi+0xcu));
    /* 005e9c77: test edi, 0xff000000 */ {  u32 a = r_edi; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9c7d: je 0x5e9ca9 */ if (fZ) goto L_005e9ca9;
L_005e9c7f:; BB(0x005e9c7f);
    /* 005e9c7f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c81: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 005e9c84: lea edi, [esi + edi + 0x1c] */ r_edi = (u32)(r_esi+r_edi+0x1cu);
    /* 005e9c88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9c89: call 0x5dd6bc */ r_esp -= 4; W32(r_esp, 0x5e9c8eu); f_005dd6bc();
    /* 005e9c8e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9c91: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 005e9c94: add esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e9c97: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e9c9a: mov edi, eax */ r_edi = r_eax;
    /* 005e9c9c: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005e9c9f: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ca1: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005e9ca3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e9ca5: jne 0x5e9c61 */ if (!fZ) goto L_005e9c61;
L_005e9ca7:; BB(0x005e9ca7);
    /* 005e9ca7: jmp 0x5e9cb2 */ goto L_005e9cb2;
L_005e9ca9:; BB(0x005e9ca9);
    /* 005e9ca9: mov eax, ebx */ r_eax = r_ebx;
    /* 005e9cab: mov edx, ebp */ r_edx = r_ebp;
    /* 005e9cad: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9caf: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
L_005e9cb2:; BB(0x005e9cb2);
    /* 005e9cb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9cb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e9cb6: ret  */ FN_RET(0x005e9c38); r_esp += 4; return;
}

void f_005e9cb8(void) /* sub_5E9CB8 */
{
    FN_ENTER(0x005e9cb8);
    /* 005e9cb8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9cbb: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e9cbe: mov esi, ecx */ r_esi = r_ecx;
    /* 005e9cc0: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 005e9cc4: mov ebx, dword ptr [esp + 0x6c] */ r_ebx = R32((u32)(r_esp+0x6cu));
    /* 005e9cc8: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9ccb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ccd: je 0x5e9f3c */ if (fZ) goto L_005e9f3c;
L_005e9cd3:; BB(0x005e9cd3);
    /* 005e9cd3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9cd5: je 0x5e9f3c */ if (fZ) goto L_005e9f3c;
L_005e9cdb:; BB(0x005e9cdb);
    /* 005e9cdb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9cdd: je 0x5e9f3c */ if (fZ) goto L_005e9f3c;
L_005e9ce3:; BB(0x005e9ce3);
    /* 005e9ce3: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e9ce6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ce8: je 0x5e9f33 */ if (fZ) goto L_005e9f33;
L_005e9cee:; BB(0x005e9cee);
    /* 005e9cee: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005e9cf1: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 005e9cf4: fld dword ptr [edx + 0x18] */ FPUSH(R_F32((u32)(r_edx+0x18u)));
    /* 005e9cf7: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005e9cf9: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 005e9cfc: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 005e9cff: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 005e9d01: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 005e9d04: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005e9d06: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 005e9d0a: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005e9d0c: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 005e9d10: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005e9d12: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 005e9d16: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9d18: fst dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0));
    /* 005e9d1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9d1e: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 005e9d22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9d24: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 005e9d28: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9d2a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005e9d2c: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d32: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 005e9d35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9d37: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005e9d3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9d3d: fsubp st(6) */ ST(6) = ST(6) - ST(0); FPOP();
    /* 005e9d3f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005e9d41: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d47: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005e9d4b: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 005e9d4d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9d4f: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d55: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 005e9d58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9d5a: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005e9d5e: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 005e9d60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9d62: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d68: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005e9d6c: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 005e9d6f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005e9d71: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d77: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e9d7b: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 005e9d7e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005e9d80: fdiv dword ptr [0x92d66c] */ ST(0) = ST(0) / R_F32((u32)(0x92d66cu));
    /* 005e9d86: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005e9d8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9d8c: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e9d91u); f_00836208();
    /* 005e9d91: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 005e9d95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9d98: fld dword ptr [0x92d668] */ FPUSH(R_F32((u32)(0x92d668u)));
    /* 005e9d9e: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 005e9da2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e9da4: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 005e9da8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005e9daa: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e9dae: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005e9db2: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005e9db6: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 005e9dba: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 005e9dbe: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9dc0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005e9dc2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005e9dc4: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005e9dc7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005e9dc9: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005e9dcb: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005e9dcf: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005e9dd1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9dd3: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005e9dd7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9dd9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005e9ddb: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005e9ddf: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005e9de1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9de3: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 005e9de7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9de9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005e9deb: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005e9def: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 005e9df1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9df3: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 005e9df7: fsubrp st(5) */ ST(5) = ST(0) - ST(5); FPOP();
    /* 005e9df9: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9dfb: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005e9dff: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9e01: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005e9e03: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005e9e07: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005e9e09: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 005e9e0d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9e0f: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 005e9e13: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9e15: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005e9e17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9e19: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 005e9e1d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9e1f: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 005e9e21: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9e23: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005e9e27: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005e9e29: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005e9e2d: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 005e9e31: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5e9e36u); f_0082df08();
    /* 005e9e36: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e9e38: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005e9e3c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005e9e40: fld dword ptr [0x92d664] */ FPUSH(R_F32((u32)(0x92d664u)));
    /* 005e9e46: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005e9e48: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9e4a: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005e9e4d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005e9e51: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005e9e55: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005e9e59: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005e9e5c: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005e9e5e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9e60: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 005e9e63: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005e9e67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9e69: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 005e9e6b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e9e6d: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 005e9e6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9e71: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 005e9e73: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005e9e75: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9e77: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005e9e7b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9e7d: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 005e9e81: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9e83: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 005e9e87: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005e9e89: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 005e9e8d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005e9e8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005e9e91: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 005e9e95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9e97: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005e9e99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005e9e9b: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005e9e9f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005e9ea1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e9ea3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005e9ea7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ea9: je 0x5e9f45 */ if (fZ) goto L_005e9f45;
L_005e9eaf:; BB(0x005e9eaf);
    /* 005e9eaf: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e9eb2: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9eb5: jne 0x5e9ebd */ if (!fZ) goto L_005e9ebd;
L_005e9eb7:; BB(0x005e9eb7);
    /* 005e9eb7: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9eba: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
L_005e9ebd:; BB(0x005e9ebd);
    /* 005e9ebd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9ebf: je 0x5e9ee0 */ if (fZ) goto L_005e9ee0;
L_005e9ec1:; BB(0x005e9ec1);
    /* 005e9ec1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e9ec3: lea edx, [ecx + 0x20] */ r_edx = (u32)(r_ecx+0x20u);
    /* 005e9ec6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ec8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9eca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ecc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9ece: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ecf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ed0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9ed1: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5e9ed6u); f_00858c80();
    /* 005e9ed6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9ed9: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005e9edd: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
L_005e9ee0:; BB(0x005e9ee0);
    /* 005e9ee0: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 005e9ee2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005e9ee6: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9ee9: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e9eec: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9eef: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005e9ef3: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e9ef6: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9ef9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e9efc: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e9eff: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9f02: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005e9f05: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005e9f08: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e9f0c: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9f0f: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005e9f12: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9f15: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e9f19: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005e9f1c: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e9f1f: and eax, 0x4fffffff */ {  u32 a = r_eax; u32 b = 0x4fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e9f24: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9f27: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005e9f2a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e9f2d: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e9f30: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
L_005e9f33:; BB(0x005e9f33);
    /* 005e9f33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f35: mov ecx, esi */ r_ecx = r_esi;
    /* 005e9f37: call 0x5e9f4c */ r_esp -= 4; W32(r_esp, 0x5e9f3cu); f_005e9f4c();
L_005e9f3c:; BB(0x005e9f3c);
    /* 005e9f3c: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9f3f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9f41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9f42: ret 8 */ FN_RET(0x005e9cb8); r_esp += 12; return;
L_005e9f45:; BB(0x005e9f45);
    /* 005e9f45: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e9f47: jmp 0x5e9f33 */ goto L_005e9f33;
}

void f_005e9f4c(void) /* sub_5E9F4C */
{
    FN_ENTER(0x005e9f4c);
    /* 005e9f4c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f4d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f4f: mov esi, ecx */ r_esi = r_ecx;
    /* 005e9f51: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 005e9f55: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 005e9f59: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005e9f5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9f5e: je 0x5e9fec */ if (fZ) goto L_005e9fec;
L_005e9f64:; BB(0x005e9f64);
    /* 005e9f64: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9f66: je 0x5e9fec */ if (fZ) goto L_005e9fec;
L_005e9f6c:; BB(0x005e9f6c);
    /* 005e9f6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9f6e: je 0x5e9fec */ if (fZ) goto L_005e9fec;
L_005e9f70:; BB(0x005e9f70);
    /* 005e9f70: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 005e9f73: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f76: jne 0x5e9f7e */ if (!fZ) goto L_005e9f7e;
L_005e9f78:; BB(0x005e9f78);
    /* 005e9f78: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f7b: mov dword ptr [esi + 0x20], edx */ W32((u32)(r_esi+0x20u), r_edx);
L_005e9f7e:; BB(0x005e9f7e);
    /* 005e9f7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e9f80: je 0x5e9f9b */ if (fZ) goto L_005e9f9b;
L_005e9f82:; BB(0x005e9f82);
    /* 005e9f82: lea ecx, [eax + 0x20] */ r_ecx = (u32)(r_eax+0x20u);
    /* 005e9f85: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f87: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f89: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f8b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e9f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f8f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e9f90: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x5e9f95u); f_00858c80();
    /* 005e9f95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e9f98: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_005e9f9b:; BB(0x005e9f9b);
    /* 005e9f9b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005e9f9d: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005e9f9f: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9fa2: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005e9fa5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e9fa8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005e9fab: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005e9fae: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 005e9fb1: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9fb4: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e9fb7: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e9fba: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9fbd: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e9fc0: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005e9fc3: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9fc6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005e9fc9: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005e9fcc: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005e9fcf: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005e9fd2: mov dword ptr [eax + 0x18], ebp */ W32((u32)(r_eax+0x18u), r_ebp);
    /* 005e9fd5: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e9fd8: and eax, 0x4fffffff */ {  u32 a = r_eax; u32 b = 0x4fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e9fdd: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 005e9fe0: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005e9fe3: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e9fe6: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e9fe9: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
L_005e9fec:; BB(0x005e9fec);
    /* 005e9fec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e9fed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e9fee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e9fef: ret 8 */ FN_RET(0x005e9f4c); r_esp += 12; return;
}

void f_005e9ff4(void) /* sub_5E9FF4 */
{
    FN_ENTER(0x005e9ff4);
    /* 005e9ff4: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005e9ff7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e9ffa: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005e9ffd: ret  */ FN_RET(0x005e9ff4); r_esp += 4; return;
}

