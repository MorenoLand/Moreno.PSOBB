#include "protos.h"

void f_007a31bc(void) /* sub_7A31BC */
{
    FN_ENTER(0x007a31bc);
    /* 007a31bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a31bd: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 007a31c1: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a31c7: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 007a31cc: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 007a31d1: jne 0x7a31f7 */ if (!fZ) goto L_007a31f7;
L_007a31d3:; BB(0x007a31d3);
    /* 007a31d3: movzx edi, byte ptr [ecx] */ r_edi = (u32)R8((u32)(r_ecx));
    /* 007a31d6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a31d8: je 0x7a31e0 */ if (fZ) goto L_007a31e0;
L_007a31da:; BB(0x007a31da);
    /* 007a31da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a31dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a31dd: ret 8 */ FN_RET(0x007a31bc); r_esp += 12; return;
L_007a31e0:; BB(0x007a31e0);
    /* 007a31e0: movzx eax, byte ptr [ecx + 1] */ r_eax = (u32)R8((u32)(r_ecx+0x1u));
    /* 007a31e4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a31e6: jne 0x7a31f1 */ if (!fZ) goto L_007a31f1;
L_007a31e8:; BB(0x007a31e8);
    /* 007a31e8: mov eax, 1 */ r_eax = 0x1u;
    /* 007a31ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a31ee: ret 8 */ FN_RET(0x007a31bc); r_esp += 12; return;
L_007a31f1:; BB(0x007a31f1);
    /* 007a31f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a31f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a31f4: ret 8 */ FN_RET(0x007a31bc); r_esp += 12; return;
L_007a31f7:; BB(0x007a31f7);
    /* 007a31f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a31f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a31fa: ret 8 */ FN_RET(0x007a31bc); r_esp += 12; return;
}

void f_007a3200(void) /* sub_7A3200 */
{
    FN_ENTER(0x007a3200);
    /* 007a3200: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3201: mov esi, ecx */ r_esi = r_ecx;
    /* 007a3203: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 007a3206: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3209: je 0x7a3237 */ if (fZ) goto L_007a3237;
L_007a320b:; BB(0x007a320b);
    /* 007a320b: mov ecx, esi */ r_ecx = r_esi;
    /* 007a320d: call 0x7a32ec */ r_esp -= 4; W32(r_esp, 0x7a3212u); f_007a32ec();
    /* 007a3212: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 007a3215: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3217: je 0x7a3220 */ if (fZ) goto L_007a3220;
L_007a3219:; BB(0x007a3219);
    /* 007a3219: mov eax, 1 */ r_eax = 0x1u;
    /* 007a321e: jmp 0x7a3222 */ goto L_007a3222;
L_007a3220:; BB(0x007a3220);
    /* 007a3220: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3222:; BB(0x007a3222);
    /* 007a3222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3224: je 0x7a3234 */ if (fZ) goto L_007a3234;
L_007a3226:; BB(0x007a3226);
    /* 007a3226: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 007a322d: mov eax, 2 */ r_eax = 0x2u;
    /* 007a3232: jmp 0x7a3237 */ goto L_007a3237;
L_007a3234:; BB(0x007a3234);
    /* 007a3234: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
L_007a3237:; BB(0x007a3237);
    /* 007a3237: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 007a3239: je 0x7a3277 */ if (fZ) goto L_007a3277;
L_007a323b:; BB(0x007a323b);
    /* 007a323b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a323e: je 0x7a32e9 */ if (fZ) goto L_007a32e9;
L_007a3244:; BB(0x007a3244);
    /* 007a3244: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a3247: jne 0x7a32e9 */ if (!fZ) goto L_007a32e9;
L_007a324d:; BB(0x007a324d);
    /* 007a324d: fld dword ptr [0x97cfe8] */ FPUSH(R_F32((u32)(0x97cfe8u)));
    /* 007a3253: fadd dword ptr [esi + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x50u));
    /* 007a3256: fcom dword ptr [0x97cfe4] */ fx_compare(ST(0), R_F32((u32)(0x97cfe4u))); 
    /* 007a325c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a325e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a325f: jbe 0x7a3266 */ if ((fC||fZ)) goto L_007a3266;
L_007a3261:; BB(0x007a3261);
    /* 007a3261: fstp dword ptr [esi + 0x50] */ W_F32((u32)(r_esi+0x50u), ST(0)); FPOP();
    /* 007a3264: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3265: ret  */ FN_RET(0x007a3200); r_esp += 4; return;
L_007a3266:; BB(0x007a3266);
    /* 007a3266: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a3268: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007a326c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3271: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007a3275: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3276: ret  */ FN_RET(0x007a3200); r_esp += 4; return;
L_007a3277:; BB(0x007a3277);
    /* 007a3277: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 007a327a: fsub dword ptr [0x97cfe0] */ ST(0) = ST(0) - R_F32((u32)(0x97cfe0u));
    /* 007a3280: fcom dword ptr [esi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x34u))); 
    /* 007a3283: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3285: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3286: jbe 0x7a328d */ if ((fC||fZ)) goto L_007a328d;
L_007a3288:; BB(0x007a3288);
    /* 007a3288: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 007a328b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a328c: ret  */ FN_RET(0x007a3200); r_esp += 4; return;
L_007a328d:; BB(0x007a328d);
    /* 007a328d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007a328f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007a3292: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007a3295: mov dword ptr [esi + 0x1c], 1 */ W32((u32)(r_esi+0x1cu), 0x1u);
    /* 007a329c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 007a329f: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a32a2: je 0x7a32ab */ if (fZ) goto L_007a32ab;
L_007a32a4:; BB(0x007a32a4);
    /* 007a32a4: mov eax, 1 */ r_eax = 0x1u;
    /* 007a32a9: jmp 0x7a32ad */ goto L_007a32ad;
L_007a32ab:; BB(0x007a32ab);
    /* 007a32ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a32ad:; BB(0x007a32ad);
    /* 007a32ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a32af: jne 0x7a32e9 */ if (!fZ) goto L_007a32e9;
L_007a32b1:; BB(0x007a32b1);
    /* 007a32b1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a32b4: je 0x7a32bd */ if (fZ) goto L_007a32bd;
L_007a32b6:; BB(0x007a32b6);
    /* 007a32b6: mov eax, 1 */ r_eax = 0x1u;
    /* 007a32bb: jmp 0x7a32bf */ goto L_007a32bf;
L_007a32bd:; BB(0x007a32bd);
    /* 007a32bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a32bf:; BB(0x007a32bf);
    /* 007a32bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a32c1: je 0x7a32d7 */ if (fZ) goto L_007a32d7;
L_007a32c3:; BB(0x007a32c3);
    /* 007a32c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32c7: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a32ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a32cb: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32cd: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7a32d2u); f_00814298();
    /* 007a32d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a32d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a32d6: ret  */ FN_RET(0x007a3200); r_esp += 4; return;
L_007a32d7:; BB(0x007a32d7);
    /* 007a32d7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32db: add esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a32de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a32df: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 007a32e1: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7a32e6u); f_00814298();
    /* 007a32e6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007a32e9:; BB(0x007a32e9);
    /* 007a32e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a32ea: ret  */ FN_RET(0x007a3200); r_esp += 4; return;
}

void f_007a32ec(void) /* sub_7A32EC */
{
    FN_ENTER(0x007a32ec);
    /* 007a32ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a32ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a32ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a32ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a32f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a32f2: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a32f5: and eax, 0xfffffff4 */ {  u32 a = r_eax; u32 b = 0xfffffff4u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a32f8: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a32fb: lea ecx, [ebp + 0x24] */ r_ecx = (u32)(r_ebp+0x24u);
    /* 007a32fe: call 0x7a3560 */ r_esp -= 4; W32(r_esp, 0x7a3303u); f_007a3560();
    /* 007a3303: mov ebx, eax */ r_ebx = r_eax;
    /* 007a3305: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3307: je 0x7a354f */ if (fZ) goto L_007a354f;
L_007a330d:; BB(0x007a330d);
    /* 007a330d: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 007a3313: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3315: je 0x7a3541 */ if (fZ) goto L_007a3541;
L_007a331b:; BB(0x007a331b);
    /* 007a331b: movzx edi, word ptr [edx + 0x108c] */ r_edi = (u32)R16((u32)(r_edx+0x108cu));
    /* 007a3322: movzx esi, word ptr [ebp + 0x64] */ r_esi = (u32)R16((u32)(r_ebp+0x64u));
    /* 007a3326: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3328: jne 0x7a3353 */ if (!fZ) goto L_007a3353;
L_007a332a:; BB(0x007a332a);
    /* 007a332a: movzx esi, byte ptr [ebp + 0x60] */ r_esi = (u32)R8((u32)(r_ebp+0x60u));
    /* 007a332e: movzx edi, byte ptr [edx + 0x1088] */ r_edi = (u32)R8((u32)(r_edx+0x1088u));
    /* 007a3335: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3337: jne 0x7a3353 */ if (!fZ) goto L_007a3353;
L_007a3339:; BB(0x007a3339);
    /* 007a3339: movzx esi, byte ptr [ebp + 0x61] */ r_esi = (u32)R8((u32)(r_ebp+0x61u));
    /* 007a333d: movzx edx, byte ptr [edx + 0x1089] */ r_edx = (u32)R8((u32)(r_edx+0x1089u));
    /* 007a3344: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3346: jne 0x7a334f */ if (!fZ) goto L_007a334f;
L_007a3348:; BB(0x007a3348);
    /* 007a3348: mov edx, 1 */ r_edx = 0x1u;
    /* 007a334d: jmp 0x7a3355 */ goto L_007a3355;
L_007a334f:; BB(0x007a334f);
    /* 007a334f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a3351: jmp 0x7a3355 */ goto L_007a3355;
L_007a3353:; BB(0x007a3353);
    /* 007a3353: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007a3355:; BB(0x007a3355);
    /* 007a3355: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3357: jne 0x7a3367 */ if (!fZ) goto L_007a3367;
L_007a3359:; BB(0x007a3359);
    /* 007a3359: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a335c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a335f: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3362: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3363: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3364: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3365: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3366: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3367:; BB(0x007a3367);
    /* 007a3367: movzx esi, byte ptr [ebp + 0x60] */ r_esi = (u32)R8((u32)(r_ebp+0x60u));
    /* 007a336b: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a336e: je 0x7a338b */ if (fZ) goto L_007a338b;
L_007a3370:; BB(0x007a3370);
    /* 007a3370: movzx edx, byte ptr [ebp + 0x61] */ r_edx = (u32)R8((u32)(r_ebp+0x61u));
    /* 007a3374: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3375: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3376: lea ecx, [ebx + 0x538] */ r_ecx = (u32)(r_ebx+0x538u);
    /* 007a337c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a337d: call 0x6aba4c */ r_esp -= 4; W32(r_esp, 0x7a3382u); f_006aba4c();
    /* 007a3382: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3385: je 0x7a3513 */ if (fZ) goto L_007a3513;
L_007a338b:; BB(0x007a338b);
    /* 007a338b: call 0x67e408 */ r_esp -= 4; W32(r_esp, 0x7a3390u); f_0067e408();
    /* 007a3390: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3392: je 0x7a33a2 */ if (fZ) goto L_007a33a2;
L_007a3394:; BB(0x007a3394);
    /* 007a3394: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3397: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a339a: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a339d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a339e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a339f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a33a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a33a1: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a33a2:; BB(0x007a33a2);
    /* 007a33a2: movzx edx, byte ptr [ebp + 0x60] */ r_edx = (u32)R8((u32)(r_ebp+0x60u));
    /* 007a33a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33a8: je 0x7a3505 */ if (fZ) goto L_007a3505;
L_007a33ae:; BB(0x007a33ae);
    /* 007a33ae: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a33b1: je 0x7a34e7 */ if (fZ) goto L_007a34e7;
L_007a33b7:; BB(0x007a33b7);
    /* 007a33b7: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33ba: je 0x7a34ec */ if (fZ) goto L_007a34ec;
L_007a33c0:; BB(0x007a33c0);
    /* 007a33c0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33c3: je 0x7a3436 */ if (fZ) goto L_007a3436;
L_007a33c5:; BB(0x007a33c5);
    /* 007a33c5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a33c8: je 0x7a34e7 */ if (fZ) goto L_007a34e7;
L_007a33ce:; BB(0x007a33ce);
    /* 007a33ce: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33d1: jne 0x7a3428 */ if (!fZ) goto L_007a3428;
L_007a33d3:; BB(0x007a33d3);
    /* 007a33d3: movzx edx, byte ptr [ebp + 0x61] */ r_edx = (u32)R8((u32)(r_ebp+0x61u));
    /* 007a33d7: movsx esi, byte ptr [edx + ebx + 0x528] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edx+r_ebx+0x528u));
    /* 007a33df: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33e2: je 0x7a33f2 */ if (fZ) goto L_007a33f2;
L_007a33e4:; BB(0x007a33e4);
    /* 007a33e4: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a33e7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a33ea: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a33ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a33ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a33ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a33f0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a33f1: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a33f2:; BB(0x007a33f2);
    /* 007a33f2: mov eax, dword ptr [ebx + 0x328] */ r_eax = R32((u32)(r_ebx+0x328u));
    /* 007a33f8: test eax, 0x548000 */ {  u32 a = r_eax; u32 b = 0x548000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a33fd: je 0x7a340d */ if (fZ) goto L_007a340d;
L_007a33ff:; BB(0x007a33ff);
    /* 007a33ff: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3402: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3405: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3408: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3409: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a340a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a340b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a340c: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a340d:; BB(0x007a340d);
    /* 007a340d: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x7a3412u); f_00807d60();
    /* 007a3412: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3414: jne 0x7a34e7 */ if (!fZ) goto L_007a34e7;
L_007a341a:; BB(0x007a341a);
    /* 007a341a: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a341d: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3420: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3423: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3425: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3426: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3427: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3428:; BB(0x007a3428);
    /* 007a3428: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a342b: jne 0x7a34e7 */ if (!fZ) goto L_007a34e7;
L_007a3431:; BB(0x007a3431);
    /* 007a3431: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3432: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3434: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3435: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3436:; BB(0x007a3436);
    /* 007a3436: movzx edx, byte ptr [ebp + 0x61] */ r_edx = (u32)R8((u32)(r_ebp+0x61u));
    /* 007a343a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a343b: lea edi, [ebx + 0x460] */ r_edi = (u32)(r_ebx+0x460u);
    /* 007a3441: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3443: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x7a3448u); f_006ad17c();
    /* 007a3448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3449: call 0x6ad1cc */ r_esp -= 4; W32(r_esp, 0x7a344eu); f_006ad1cc();
    /* 007a344e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a344f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3451: je 0x7a3461 */ if (fZ) goto L_007a3461;
L_007a3453:; BB(0x007a3453);
    /* 007a3453: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3456: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3459: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a345c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a345d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a345e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a345f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3460: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3461:; BB(0x007a3461);
    /* 007a3461: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a3463: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x7a3468u); f_00689410();
    /* 007a3468: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a346a: jne 0x7a3485 */ if (!fZ) goto L_007a3485;
L_007a346c:; BB(0x007a346c);
    /* 007a346c: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 007a346f: test edx, 0x20006 */ {  u32 a = r_edx; u32 b = 0x20006u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3475: je 0x7a3485 */ if (fZ) goto L_007a3485;
L_007a3477:; BB(0x007a3477);
    /* 007a3477: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a347a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a347d: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3480: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3481: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3482: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3483: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3484: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3485:; BB(0x007a3485);
    /* 007a3485: mov edx, dword ptr [ebx + 0x328] */ r_edx = R32((u32)(r_ebx+0x328u));
    /* 007a348b: test edx, 0x548000 */ {  u32 a = r_edx; u32 b = 0x548000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3491: je 0x7a34a1 */ if (fZ) goto L_007a34a1;
L_007a3493:; BB(0x007a3493);
    /* 007a3493: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3496: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3499: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a349c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a349d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a349e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a349f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a34a0: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a34a1:; BB(0x007a34a1);
    /* 007a34a1: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x7a34a6u); f_00807d60();
    /* 007a34a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a34a8: jne 0x7a34b8 */ if (!fZ) goto L_007a34b8;
L_007a34aa:; BB(0x007a34aa);
    /* 007a34aa: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a34ad: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a34b0: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a34b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a34b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a34b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a34b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a34b7: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a34b8:; BB(0x007a34b8);
    /* 007a34b8: movzx esi, byte ptr [ebp + 0x61] */ r_esi = (u32)R8((u32)(r_ebp+0x61u));
    /* 007a34bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a34bd: mov ecx, edi */ r_ecx = r_edi;
    /* 007a34bf: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x7a34c4u); f_006ad17c();
    /* 007a34c4: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 007a34c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a34c9: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007a34cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a34cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a34ce: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x7a34d3u); f_006ded14();
    /* 007a34d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a34d6: movsx edx, word ptr [ebx + 0x336] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x336u));
    /* 007a34dd: movsx eax, word ptr [eax + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x10u));
    /* 007a34e1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a34e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a34e5: jl 0x7a3533 */ if ((fS!=fO)) goto L_007a3533;
L_007a34e7:; BB(0x007a34e7);
    /* 007a34e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a34e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a34e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a34ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a34eb: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a34ec:; BB(0x007a34ec);
    /* 007a34ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a34ee: call 0x699510 */ r_esp -= 4; W32(r_esp, 0x7a34f3u); f_00699510();
    /* 007a34f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a34f5: jne 0x7a34e7 */ if (!fZ) goto L_007a34e7;
L_007a34f7:; BB(0x007a34f7);
    /* 007a34f7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a34fa: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a34fd: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3500: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3502: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3503: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3504: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3505:; BB(0x007a3505);
    /* 007a3505: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3508: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a350b: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a350e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a350f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3510: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3511: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3512: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3513:; BB(0x007a3513);
    /* 007a3513: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007a3518: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 007a351e: mov word ptr [edx + 0x108c], ax */ W16((u32)(r_edx+0x108cu), (u16)r_eax);
    /* 007a3525: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 007a3528: or ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a352b: mov dword ptr [ebp + 0x20], ebx */ W32((u32)(r_ebp+0x20u), r_ebx);
    /* 007a352e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a352f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3530: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3531: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3532: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3533:; BB(0x007a3533);
    /* 007a3533: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3536: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3539: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a353c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a353d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a353e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a353f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3540: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a3541:; BB(0x007a3541);
    /* 007a3541: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3544: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3547: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a354a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a354b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a354c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a354d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a354e: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
L_007a354f:; BB(0x007a354f);
    /* 007a354f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007a3552: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3555: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007a3558: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a3559: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a355a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a355b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a355c: ret  */ FN_RET(0x007a32ec); r_esp += 4; return;
}

void f_007a3560(void) /* sub_7A3560 */
{
    FN_ENTER(0x007a3560);
    /* 007a3560: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 007a3563: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3564: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a3569u); f_0068d5a8();
    /* 007a3569: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a356a: ret  */ FN_RET(0x007a3560); r_esp += 4; return;
}

void f_007a356c(void) /* sub_7A356C */
{
    FN_ENTER(0x007a356c);
    /* 007a356c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a356d: mov esi, ecx */ r_esi = r_ecx;
    /* 007a356f: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 007a3572: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3575: je 0x7a357e */ if (fZ) goto L_007a357e;
L_007a3577:; BB(0x007a3577);
    /* 007a3577: mov eax, 1 */ r_eax = 0x1u;
    /* 007a357c: jmp 0x7a3580 */ goto L_007a3580;
L_007a357e:; BB(0x007a357e);
    /* 007a357e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3580:; BB(0x007a3580);
    /* 007a3580: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3582: jne 0x7a3596 */ if (!fZ) goto L_007a3596;
L_007a3584:; BB(0x007a3584);
    /* 007a3584: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3587: je 0x7a3590 */ if (fZ) goto L_007a3590;
L_007a3589:; BB(0x007a3589);
    /* 007a3589: mov eax, 1 */ r_eax = 0x1u;
    /* 007a358e: jmp 0x7a3592 */ goto L_007a3592;
L_007a3590:; BB(0x007a3590);
    /* 007a3590: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3592:; BB(0x007a3592);
    /* 007a3592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3594: je 0x7a3598 */ if (fZ) goto L_007a3598;
L_007a3596:; BB(0x007a3596);
    /* 007a3596: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3597: ret  */ FN_RET(0x007a356c); r_esp += 4; return;
L_007a3598:; BB(0x007a3598);
    /* 007a3598: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 007a359b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a359d: jl 0x7a35c3 */ if ((fS!=fO)) goto L_007a35c3;
L_007a359f:; BB(0x007a359f);
    /* 007a359f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a35a2: jle 0x7a35ab */ if ((fZ||fS!=fO)) goto L_007a35ab;
L_007a35a4:; BB(0x007a35a4);
    /* 007a35a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a35a7: jne 0x7a35c3 */ if (!fZ) goto L_007a35c3;
L_007a35a9:; BB(0x007a35a9);
    /* 007a35a9: jmp 0x7a35b2 */ goto L_007a35b2;
L_007a35ab:; BB(0x007a35ab);
    /* 007a35ab: mov ecx, esi */ r_ecx = r_esi;
    /* 007a35ad: call 0x7a35c8 */ r_esp -= 4; W32(r_esp, 0x7a35b2u); f_007a35c8();
L_007a35b2:; BB(0x007a35b2);
    /* 007a35b2: mov ecx, 0x9b97a8 */ r_ecx = 0x9b97a8u;
    /* 007a35b7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7a35bcu); f_00829cc8();
    /* 007a35bc: mov ecx, esi */ r_ecx = r_esi;
    /* 007a35be: call 0x7a360c */ r_esp -= 4; W32(r_esp, 0x7a35c3u); f_007a360c();
L_007a35c3:; BB(0x007a35c3);
    /* 007a35c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a35c4: ret  */ FN_RET(0x007a356c); r_esp += 4; return;
}

void f_007a35c8(void) /* sub_7A35C8 */
{
    FN_ENTER(0x007a35c8);
    /* 007a35c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a35c9: mov edi, ecx */ r_edi = r_ecx;
    /* 007a35cb: movzx eax, word ptr [edi + 0x64] */ r_eax = (u32)R16((u32)(r_edi+0x64u));
    /* 007a35cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a35d0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7a35d5u); f_007b4d18();
    /* 007a35d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a35d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a35d8: je 0x7a3609 */ if (fZ) goto L_007a3609;
L_007a35da:; BB(0x007a35da);
    /* 007a35da: movzx edx, word ptr [edi + 0x66] */ r_edx = (u32)R16((u32)(r_edi+0x66u));
    /* 007a35de: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 007a35e4: movzx ecx, dl */ r_ecx = (u32)(u8)r_edx;
    /* 007a35e7: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007a35ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a35ec: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a35ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a35f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a35f2: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a35f4: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 007a35f8: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 007a35fb: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 007a35ff: mov dword ptr [edi + 0x44], ecx */ W32((u32)(r_edi+0x44u), r_ecx);
    /* 007a3602: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 007a3606: mov dword ptr [edi + 0x48], eax */ W32((u32)(r_edi+0x48u), r_eax);
L_007a3609:; BB(0x007a3609);
    /* 007a3609: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a360a: ret  */ FN_RET(0x007a35c8); r_esp += 4; return;
}

void f_007a360c(void) /* sub_7A360C */
{
    FN_ENTER(0x007a360c);
    /* 007a360c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a360d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a360e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a3611: mov esi, ecx */ r_esi = r_ecx;
    /* 007a3613: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7a3618u); f_0082dbac();
    /* 007a3618: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7a361du); f_0082d7b0();
    /* 007a361d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007a3620: push dword ptr [esi + 0x2c] */ { u32 v = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3624: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 007a3627: lea edx, [esi + 0x40] */ r_edx = (u32)(r_esi+0x40u);
    /* 007a362a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a362b: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x7a3630u); f_006ea73c();
    /* 007a3630: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a3633: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007a3636: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3638: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x7a363du); f_008316b4();
    /* 007a363d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 007a3642: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 007a3648: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a364a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7a364fu); f_0082d8bc();
    /* 007a364f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7a3654u); f_0082d7b0();
    /* 007a3654: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3656: mov edx, 0x2aaa */ r_edx = 0x2aaau;
    /* 007a365b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x7a3660u); f_00830c04();
    /* 007a3660: push dword ptr [0x9ff520] */ { u32 v = R32((u32)(0x9ff520u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3666: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3667: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3669: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a366b: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a3670u); f_00830b74();
    /* 007a3670: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3672: call 0x7a3724 */ r_esp -= 4; W32(r_esp, 0x7a3677u); f_007a3724();
    /* 007a3677: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a367c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a367e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3680: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3682: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a3687u); f_00830b74();
    /* 007a3687: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3689: call 0x7a3764 */ r_esp -= 4; W32(r_esp, 0x7a368eu); f_007a3764();
    /* 007a368e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7a3693u); f_0082da80();
    /* 007a3693: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7a3698u); f_0082d7b0();
    /* 007a3698: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a369a: mov edx, 0x7fff */ r_edx = 0x7fffu;
    /* 007a369f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x7a36a4u); f_00830c04();
    /* 007a36a4: push dword ptr [0x9ff520] */ { u32 v = R32((u32)(0x9ff520u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a36aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a36ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a36ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36af: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a36b4u); f_00830b74();
    /* 007a36b4: mov ecx, esi */ r_ecx = r_esi;
    /* 007a36b6: call 0x7a3724 */ r_esp -= 4; W32(r_esp, 0x7a36bbu); f_007a3724();
    /* 007a36bb: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a36c4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36c6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a36cbu); f_00830b74();
    /* 007a36cb: mov ecx, esi */ r_ecx = r_esi;
    /* 007a36cd: call 0x7a3764 */ r_esp -= 4; W32(r_esp, 0x7a36d2u); f_007a3764();
    /* 007a36d2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7a36d7u); f_0082da80();
    /* 007a36d7: mov edx, 0xd554 */ r_edx = 0xd554u;
    /* 007a36dc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a36de: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x7a36e3u); f_00830c04();
    /* 007a36e3: push dword ptr [0x9ff520] */ { u32 v = R32((u32)(0x9ff520u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a36e9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a36ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a36ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36ee: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a36f3u); f_00830b74();
    /* 007a36f3: mov ecx, esi */ r_ecx = r_esi;
    /* 007a36f5: call 0x7a3724 */ r_esp -= 4; W32(r_esp, 0x7a36fau); f_007a3724();
    /* 007a36fa: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a36ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3701: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3703: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3705: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a370au); f_00830b74();
    /* 007a370a: mov ecx, esi */ r_ecx = r_esi;
    /* 007a370c: call 0x7a3764 */ r_esp -= 4; W32(r_esp, 0x7a3711u); f_007a3764();
    /* 007a3711: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7a3716u); f_0082da80();
    /* 007a3716: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x7a371bu); f_0082dab0();
    /* 007a371b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a371e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a371f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3720: ret  */ FN_RET(0x007a360c); r_esp += 4; return;
}

void f_007a3724(void) /* sub_7A3724 */
{
    FN_ENTER(0x007a3724);
    /* 007a3724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3725: fld dword ptr [ecx + 0x50] */ FPUSH(R_F32((u32)(r_ecx+0x50u)));
    /* 007a3728: fcomp dword ptr [0x97cfd4] */ fx_compare(ST(0), R_F32((u32)(0x97cfd4u))); FPOP();
    /* 007a372e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007a3730: lea edi, [ecx + 0x4c] */ r_edi = (u32)(r_ecx+0x4cu);
    /* 007a3733: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007a3734: jbe 0x7a3762 */ if ((fC||fZ)) goto L_007a3762;
L_007a3736:; BB(0x007a3736);
    /* 007a3736: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3738: call 0x7a970c */ r_esp -= 4; W32(r_esp, 0x7a373du); f_007a970c();
    /* 007a373d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a373f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3741: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3743: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3745: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a374a: call 0x7a97fc */ r_esp -= 4; W32(r_esp, 0x7a374fu); f_007a97fc();
    /* 007a374f: push dword ptr [0xaab330] */ { u32 v = R32((u32)(0xaab330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3755: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x7a375au); f_0082e1e8();
    /* 007a375a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a375b: mov ecx, edi */ r_ecx = r_edi;
    /* 007a375d: call 0x7a9758 */ r_esp -= 4; W32(r_esp, 0x7a3762u); f_007a9758();
L_007a3762:; BB(0x007a3762);
    /* 007a3762: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a3763: ret  */ FN_RET(0x007a3724); r_esp += 4; return;
}

void f_007a3764(void) /* sub_7A3764 */
{
    FN_ENTER(0x007a3764);
    /* 007a3764: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3765: mov edi, ecx */ r_edi = r_ecx;
    /* 007a3767: add edi, 0x4c */ {  u32 a = r_edi; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a376a: mov ecx, edi */ r_ecx = r_edi;
    /* 007a376c: call 0x7a970c */ r_esp -= 4; W32(r_esp, 0x7a3771u); f_007a970c();
    /* 007a3771: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3773: call 0x7a97a4 */ r_esp -= 4; W32(r_esp, 0x7a3778u); f_007a97a4();
    /* 007a3778: push dword ptr [0xaab338] */ { u32 v = R32((u32)(0xaab338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a377e: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x7a3783u); f_0082e1e8();
    /* 007a3783: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a3784: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3786: call 0x7a9758 */ r_esp -= 4; W32(r_esp, 0x7a378bu); f_007a9758();
    /* 007a378b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a378c: ret  */ FN_RET(0x007a3764); r_esp += 4; return;
}

void f_007a3790(void) /* sub_7A3790 */
{
    FN_ENTER(0x007a3790);
    /* 007a3790: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a3791: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a3793: movzx ebp, word ptr [ebp + 6] */ r_ebp = (u32)R16((u32)(r_ebp+0x6u));
    /* 007a3797: test ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a379d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a37a1: movzx edx, byte ptr [esp + 0xc] */ r_edx = (u32)R8((u32)(r_esp+0xcu));
    /* 007a37a6: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007a37ab: jne 0x7a37b3 */ if (!fZ) goto L_007a37b3;
L_007a37ad:; BB(0x007a37ad);
    /* 007a37ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a37af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a37b0: ret 0xc */ FN_RET(0x007a3790); r_esp += 16; return;
L_007a37b3:; BB(0x007a37b3);
    /* 007a37b3: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a37b6: jne 0x7a37cb */ if (!fZ) goto L_007a37cb;
L_007a37b8:; BB(0x007a37b8);
    /* 007a37b8: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a37bb: jl 0x7a37ad */ if ((fS!=fO)) goto L_007a37ad;
L_007a37bd:; BB(0x007a37bd);
    /* 007a37bd: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a37c0: jg 0x7a37ad */ if ((!fZ&&fS==fO)) goto L_007a37ad;
L_007a37c2:; BB(0x007a37c2);
    /* 007a37c2: mov eax, 1 */ r_eax = 0x1u;
    /* 007a37c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a37c8: ret 0xc */ FN_RET(0x007a3790); r_esp += 16; return;
L_007a37cb:; BB(0x007a37cb);
    /* 007a37cb: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a37ce: jne 0x7a37ad */ if (!fZ) goto L_007a37ad;
L_007a37d0:; BB(0x007a37d0);
    /* 007a37d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a37d1: call 0x69a0c4 */ r_esp -= 4; W32(r_esp, 0x7a37d6u); f_0069a0c4();
    /* 007a37d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a37d7: ret 0xc */ FN_RET(0x007a3790); r_esp += 16; return;
}

void f_007a37dc(void) /* sub_7A37DC */
{
    FN_ENTER(0x007a37dc);
    /* 007a37dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a37dd: mov ebp, esp */ r_ebp = r_esp;
    /* 007a37df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a37e1: push 0x8f5a00 */ { u32 v = 0x8f5a00u; r_esp -= 4; W32(r_esp, v); }
    /* 007a37e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a37ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a37ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a37f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a37f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a37fa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007a37fd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007a3800: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007a3803: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 007a3807: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a380a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007a380d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007a3810: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a3815u); f_008193cc();
    /* 007a3815: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3818: mov dword ptr [esi], 0xb45f44 */ W32((u32)(r_esi), 0xb45f44u);
    /* 007a381e: lea ebx, [esi + 0x2c] */ r_ebx = (u32)(r_esi+0x2cu);
    /* 007a3821: mov edx, ebx */ r_edx = r_ebx;
    /* 007a3823: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 007a382a: mov ecx, 0xe */ r_ecx = 0xeu;
L_007a382f:; BB(0x007a382f);
    /* 007a382f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a3831: mov word ptr [edx + 2], ax */ W16((u32)(r_edx+0x2u), (u16)r_eax);
    /* 007a3835: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 007a3838: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a383b: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a383e: jne 0x7a382f */ if (!fZ) goto L_007a382f;
L_007a3840:; BB(0x007a3840);
    /* 007a3840: mov dword ptr [esi + 0x24], 0xe */ W32((u32)(r_esi+0x24u), 0xeu);
    /* 007a3847: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 007a384a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a384d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a384f: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 007a3852: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 007a3855: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007a3858: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a385b: mov dword ptr [eax + 0x70], 0xb3a270 */ W32((u32)(r_eax+0x70u), 0xb3a270u);
    /* 007a3862: mov dword ptr [eax + 0x80], 0 */ W32((u32)(r_eax+0x80u), 0x0u);
    /* 007a386c: mov dword ptr [eax + 0x7c], 0 */ W32((u32)(r_eax+0x7cu), 0x0u);
    /* 007a3873: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 007a387a: mov dword ptr [eax + 0x74], 0 */ W32((u32)(r_eax+0x74u), 0x0u);
    /* 007a3881: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007a3888: push 0x7a14ec */ { u32 v = 0x7a14ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a388d: push 0x7a13e8 */ { u32 v = 0x7a13e8u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3892: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3895: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007a3897: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a389c: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 007a38a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a38a2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7a38a7u); f_00858736();
    /* 007a38a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a38aa: mov dword ptr [ecx + 0x1080], 0 */ W32((u32)(r_ecx+0x1080u), 0x0u);
    /* 007a38b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a38b6: mov byte ptr [ecx + 0x1088], dl */ W8((u32)(r_ecx+0x1088u), (u8)r_edx);
    /* 007a38bc: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 007a38c1: mov byte ptr [ecx + 0x1089], dl */ W8((u32)(r_ecx+0x1089u), (u8)r_edx);
    /* 007a38c7: mov word ptr [ecx + 0x108a], dx */ W16((u32)(r_ecx+0x108au), (u16)r_edx);
    /* 007a38ce: mov word ptr [ecx + 0x108c], di */ W16((u32)(r_ecx+0x108cu), (u16)r_edi);
    /* 007a38d5: mov word ptr [ecx + 0x108e], dx */ W16((u32)(r_ecx+0x108eu), (u16)r_edx);
    /* 007a38dc: mov byte ptr [ecx + 0x1090], dl */ W8((u32)(r_ecx+0x1090u), (u8)r_edx);
    /* 007a38e2: mov byte ptr [ecx + 0x1091], dl */ W8((u32)(r_ecx+0x1091u), (u8)r_edx);
    /* 007a38e8: mov word ptr [ecx + 0x1092], dx */ W16((u32)(r_ecx+0x1092u), (u16)r_edx);
    /* 007a38ef: mov word ptr [ecx + 0x1094], di */ W16((u32)(r_ecx+0x1094u), (u16)r_edi);
    /* 007a38f6: mov word ptr [ecx + 0x1096], dx */ W16((u32)(r_ecx+0x1096u), (u16)r_edx);
    /* 007a38fd: mov byte ptr [ecx + 0x1084], dl */ W8((u32)(r_ecx+0x1084u), (u8)r_edx);
    /* 007a3903: mov byte ptr [ecx + 0x1085], dl */ W8((u32)(r_ecx+0x1085u), (u8)r_edx);
    /* 007a3909: mov word ptr [ecx + 0x1086], dx */ W16((u32)(r_ecx+0x1086u), (u16)r_edx);
    /* 007a3910: mov word ptr [ecx + 0x107c], di */ W16((u32)(r_ecx+0x107cu), (u16)r_edi);
    /* 007a3917: mov word ptr [ecx + 0x107e], dx */ W16((u32)(r_ecx+0x107eu), (u16)r_edx);
    /* 007a391e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3921: mov word ptr [eax + 0x1098], di */ W16((u32)(r_eax+0x1098u), (u16)r_edi);
    /* 007a3928: mov word ptr [eax + 0x109a], dx */ W16((u32)(r_eax+0x109au), (u16)r_edx);
    /* 007a392f: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3932: mov word ptr [eax + 0x109c], dx */ W16((u32)(r_eax+0x109cu), (u16)r_edx);
    /* 007a3939: mov dword ptr [esi + 0x10a0], edx */ W32((u32)(r_esi+0x10a0u), r_edx);
    /* 007a393f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3942: mov dword ptr [esi + 0x10a8], 0 */ W32((u32)(r_esi+0x10a8u), 0x0u);
    /* 007a394c: mov word ptr [esi + 0x10a4], di */ W16((u32)(r_esi+0x10a4u), (u16)r_edi);
    /* 007a3953: mov word ptr [esi + 0x10a6], di */ W16((u32)(r_esi+0x10a6u), (u16)r_edi);
    /* 007a395a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a395d: mov dword ptr [esi + 0x10ac], 0x491c4000 */ W32((u32)(r_esi+0x10acu), 0x491c4000u);
    /* 007a3967: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a396a: mov dword ptr [ebx + 0x10b0], 0xb45f40 */ W32((u32)(r_ebx+0x10b0u), 0xb45f40u);
    /* 007a3974: mov byte ptr [ebx + 0x10b4], dl */ W8((u32)(r_ebx+0x10b4u), (u8)r_edx);
    /* 007a397a: mov byte ptr [ebx + 0x10b5], dl */ W8((u32)(r_ebx+0x10b5u), (u8)r_edx);
    /* 007a3980: mov word ptr [ebx + 0x10b6], dx */ W16((u32)(r_ebx+0x10b6u), (u16)r_edx);
    /* 007a3987: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a398a: mov eax, dword ptr [0x9ff660] */ r_eax = R32((u32)(0x9ff660u));
    /* 007a398f: mov dword ptr [ebx + 0x10b8], edx */ W32((u32)(r_ebx+0x10b8u), r_edx);
    /* 007a3995: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3998: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007a399b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a399e: mov word ptr [ecx + 0x20], ax */ W16((u32)(r_ecx+0x20u), (u16)r_eax);
    /* 007a39a2: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 007a39a5: mov eax, ecx */ r_eax = r_ecx;
    /* 007a39a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a39aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a39b1: mov esp, ebp */ r_esp = r_ebp;
    /* 007a39b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a39b4: ret 8 */ FN_RET(0x007a37dc); r_esp += 12; return;
}

void f_007a39b8(void) /* sub_7A39B8 */
{
    FN_ENTER(0x007a39b8);
    /* 007a39b8: movzx eax, word ptr [ecx + 0x10b6] */ r_eax = (u32)R16((u32)(r_ecx+0x10b6u));
    /* 007a39bf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a39c1: jne 0x7a39ce */ if (!fZ) goto L_007a39ce;
L_007a39c3:; BB(0x007a39c3);
    /* 007a39c3: mov dword ptr [ecx + 0x10b8], 1 */ W32((u32)(r_ecx+0x10b8u), 0x1u);
    /* 007a39cd: ret  */ FN_RET(0x007a39b8); r_esp += 4; return;
L_007a39ce:; BB(0x007a39ce);
    /* 007a39ce: mov dword ptr [ecx + 0x10b8], 0 */ W32((u32)(r_ecx+0x10b8u), 0x0u);
    /* 007a39d8: ret  */ FN_RET(0x007a39b8); r_esp += 4; return;
}

void f_007a39dc(void) /* sub_7A39DC */
{
    FN_ENTER(0x007a39dc);
    /* 007a39dc: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a39df: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 007a39e4: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a39e6: je 0x7a39ec */ if (fZ) goto L_007a39ec;
L_007a39e8:; BB(0x007a39e8);
    /* 007a39e8: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a39eb: ret  */ FN_RET(0x007a39dc); r_esp += 4; return;
L_007a39ec:; BB(0x007a39ec);
    /* 007a39ec: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007a39f0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007a39f4: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007a39f8: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 007a39fc: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 007a3a00: lea edx, [ecx + 0x70] */ r_edx = (u32)(r_ecx+0x70u);
    /* 007a3a03: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007a3a07: lea eax, [ecx + 0x86] */ r_eax = (u32)(r_ecx+0x86u);
    /* 007a3a0d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007a3a11: lea eax, [ecx + 0x120] */ r_eax = (u32)(r_ecx+0x120u);
    /* 007a3a17: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a3a1a: mov edx, eax */ r_edx = r_eax;
    /* 007a3a1c: lea eax, [ecx + 0x107e] */ r_eax = (u32)(r_ecx+0x107eu);
    /* 007a3a22: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_007a3a26:; BB(0x007a3a26);
    /* 007a3a26: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 007a3a29: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3a2c: jne 0x7a3a35 */ if (!fZ) goto L_007a3a35;
L_007a3a2e:; BB(0x007a3a2e);
    /* 007a3a2e: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007a3a33: jmp 0x7a3a37 */ goto L_007a3a37;
L_007a3a35:; BB(0x007a3a35);
    /* 007a3a35: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007a3a37:; BB(0x007a3a37);
    /* 007a3a37: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3a39: je 0x7a3c42 */ if (fZ) goto L_007a3c42;
L_007a3a3f:; BB(0x007a3a3f);
    /* 007a3a3f: mov esi, dword ptr [ecx + 0x9a] */ r_esi = R32((u32)(r_ecx+0x9au));
    /* 007a3a45: lea ebp, [edx + 4] */ r_ebp = (u32)(r_edx+0x4u);
    /* 007a3a48: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007a3a4a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a3a4c: jle 0x7a3c42 */ if ((fZ||fS!=fO)) goto L_007a3c42;
L_007a3a52:; BB(0x007a3a52);
    /* 007a3a52: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007a3a56: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007a3a59: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_007a3a5d:; BB(0x007a3a5d);
    /* 007a3a5d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007a3a60: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3a63: je 0x7a3a6c */ if (fZ) goto L_007a3a6c;
L_007a3a65:; BB(0x007a3a65);
    /* 007a3a65: mov eax, 1 */ r_eax = 0x1u;
    /* 007a3a6a: jmp 0x7a3a6e */ goto L_007a3a6e;
L_007a3a6c:; BB(0x007a3a6c);
    /* 007a3a6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3a6e:; BB(0x007a3a6e);
    /* 007a3a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3a70: jne 0x7a3c29 */ if (!fZ) goto L_007a3c29;
L_007a3a76:; BB(0x007a3a76);
    /* 007a3a76: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3a79: je 0x7a3a82 */ if (fZ) goto L_007a3a82;
L_007a3a7b:; BB(0x007a3a7b);
    /* 007a3a7b: mov eax, 1 */ r_eax = 0x1u;
    /* 007a3a80: jmp 0x7a3a84 */ goto L_007a3a84;
L_007a3a82:; BB(0x007a3a82);
    /* 007a3a82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3a84:; BB(0x007a3a84);
    /* 007a3a84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3a86: jne 0x7a3c29 */ if (!fZ) goto L_007a3c29;
L_007a3a8c:; BB(0x007a3a8c);
    /* 007a3a8c: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 007a3a90: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3a95: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3a9b:; BB(0x007a3a9b);
    /* 007a3a9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3a9c: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7a3aa1u); f_007b4d18();
    /* 007a3aa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a3aa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3aa4: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3aaa:; BB(0x007a3aaa);
    /* 007a3aaa: movsx edi, word ptr [ebp + 2] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 007a3aae: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 007a3ab4: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007a3ab8: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 007a3abb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a3abd: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a3abf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a3ac1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a3ac3: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007a3ac5: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 007a3ac8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a3aca: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 007a3ace: mov ecx, edi */ r_ecx = r_edi;
    /* 007a3ad0: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a3ad2: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3ad8:; BB(0x007a3ad8);
    /* 007a3ad8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a3adc: movzx eax, byte ptr [edx - 2] */ r_eax = (u32)R8((u32)(r_edx+0xfffffffeu));
    /* 007a3ae0: movzx ecx, byte ptr [edx - 1] */ r_ecx = (u32)R8((u32)(r_edx+0xffffffffu));
    /* 007a3ae4: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007a3ae8: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007a3aec: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 007a3aef: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 007a3af3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a3af5: je 0x7a3afe */ if (fZ) goto L_007a3afe;
L_007a3af7:; BB(0x007a3af7);
    /* 007a3af7: mov eax, 1 */ r_eax = 0x1u;
    /* 007a3afc: jmp 0x7a3b00 */ goto L_007a3b00;
L_007a3afe:; BB(0x007a3afe);
    /* 007a3afe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3b00:; BB(0x007a3b00);
    /* 007a3b00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3b02: jne 0x7a3b0b */ if (!fZ) goto L_007a3b0b;
L_007a3b04:; BB(0x007a3b04);
    /* 007a3b04: mov eax, 1 */ r_eax = 0x1u;
    /* 007a3b09: jmp 0x7a3b0d */ goto L_007a3b0d;
L_007a3b0b:; BB(0x007a3b0b);
    /* 007a3b0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a3b0d:; BB(0x007a3b0d);
    /* 007a3b0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3b0f: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3b15:; BB(0x007a3b15);
    /* 007a3b15: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007a3b19: movzx edx, word ptr [eax + 0x20] */ r_edx = (u32)R16((u32)(r_eax+0x20u));
    /* 007a3b1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b1e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a3b23u); f_0068d5a8();
    /* 007a3b23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a3b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3b26: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3b2c:; BB(0x007a3b2c);
    /* 007a3b2c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a3b30: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b31: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 007a3b35: lea ecx, [eax + 0x538] */ r_ecx = (u32)(r_eax+0x538u);
    /* 007a3b3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b3d: call 0x6aba4c */ r_esp -= 4; W32(r_esp, 0x7a3b42u); f_006aba4c();
    /* 007a3b42: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007a3b46: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3b49: je 0x7a3c29 */ if (fZ) goto L_007a3c29;
L_007a3b4f:; BB(0x007a3b4f);
    /* 007a3b4f: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 007a3b53: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007a3b57: mov eax, dword ptr [eax + edx*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 007a3b5b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007a3b5f: mov ecx, 0x9b97a8 */ r_ecx = 0x9b97a8u;
    /* 007a3b64: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7a3b69u); f_00829cc8();
    /* 007a3b69: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7a3b6eu); f_0082d7b0();
    /* 007a3b6e: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007a3b72: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007a3b76: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 007a3b7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b7b: lea edi, [edi + eax + 0x1c] */ r_edi = (u32)(r_edi+r_eax+0x1cu);
    /* 007a3b7f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3b81: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x7a3b86u); f_006ea73c();
    /* 007a3b86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a3b89: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 007a3b8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3b8f: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x7a3b94u); f_008316b4();
    /* 007a3b94: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 007a3b99: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 007a3b9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3ba1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7a3ba6u); f_0082d8bc();
    /* 007a3ba6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7a3babu); f_0082dbac();
    /* 007a3bab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3bad: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 007a3bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3bb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3bb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3bb6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a3bbbu); f_00830b74();
    /* 007a3bbb: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007a3bbf: call 0x7a970c */ r_esp -= 4; W32(r_esp, 0x7a3bc4u); f_007a970c();
    /* 007a3bc4: mov eax, 0x9ff630 */ r_eax = 0x9ff630u;
    /* 007a3bc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3bca: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 007a3bce: call 0x7a97d0 */ r_esp -= 4; W32(r_esp, 0x7a3bd3u); f_007a97d0();
    /* 007a3bd3: push dword ptr [0xaab330] */ { u32 v = R32((u32)(0xaab330u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3bd9: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x7a3bdeu); f_0082e1e8();
    /* 007a3bde: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a3bdf: push 0x3e800000 */ { u32 v = 0x3e800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3be4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3be6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3be8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3bea: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x7a3befu); f_00830b74();
    /* 007a3bef: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a3bf3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a3bf5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a3bf7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a3bf9: lea edx, [eax + eax + 0x9ff540] */ r_edx = (u32)(r_eax+r_eax+0x9ff540u);
    /* 007a3c00: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3c01: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 007a3c05: call 0x7a97d0 */ r_esp -= 4; W32(r_esp, 0x7a3c0au); f_007a97d0();
    /* 007a3c0a: push dword ptr [0xaab334] */ { u32 v = R32((u32)(0xaab334u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3c10: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x7a3c15u); f_0082e1e8();
    /* 007a3c15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a3c16: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007a3c1a: call 0x7a9758 */ r_esp -= 4; W32(r_esp, 0x7a3c1fu); f_007a9758();
    /* 007a3c1f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x7a3c24u); f_0082dab0();
    /* 007a3c24: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x7a3c29u); f_0082da80();
L_007a3c29:; BB(0x007a3c29);
    /* 007a3c29: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a3c2c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a3c2f: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a3c31: jl 0x7a3a5d */ if ((fS!=fO)) goto L_007a3a5d;
L_007a3c37:; BB(0x007a3c37);
    /* 007a3c37: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a3c3b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007a3c3e: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
L_007a3c42:; BB(0x007a3c42);
    /* 007a3c42: add ecx, 0x124 */ {  u32 a = r_ecx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3c48: add edx, 0x124 */ {  u32 a = r_edx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a3c4e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a3c50: ja 0x7a3a26 */ if ((!fC&&!fZ)) goto L_007a3a26;
L_007a3c56:; BB(0x007a3c56);
    /* 007a3c56: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007a3c5a: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007a3c5e: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007a3c62: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007a3c66: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a3c69: ret  */ FN_RET(0x007a39dc); r_esp += 4; return;
}

void f_007a3c6c(void) /* sub_7A3C6C */
{
    FN_ENTER(0x007a3c6c);
    /* 007a3c6c: mov ecx, dword ptr [0xaab33c] */ r_ecx = R32((u32)(0xaab33cu));
    /* 007a3c72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3c74: je 0x7a3c89 */ if (fZ) goto L_007a3c89;
L_007a3c76:; BB(0x007a3c76);
    /* 007a3c76: je 0x7a3c7f */ if (fZ) goto L_007a3c7f;
L_007a3c78:; BB(0x007a3c78);
    /* 007a3c78: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3c7a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x7a3c7fu); f_004066a8();
L_007a3c7f:; BB(0x007a3c7f);
    /* 007a3c7f: mov dword ptr [0xaab33c], 0 */ W32((u32)(0xaab33cu), 0x0u);
L_007a3c89:; BB(0x007a3c89);
    /* 007a3c89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3c8b: mov dword ptr [0xaab338], eax */ W32((u32)(0xaab338u), r_eax);
    /* 007a3c90: mov dword ptr [0xaab334], eax */ W32((u32)(0xaab334u), r_eax);
    /* 007a3c95: ret  */ FN_RET(0x007a3c6c); r_esp += 4; return;
}

void f_007a3c98(void) /* sub_7A3C98 */
{
    FN_ENTER(0x007a3c98);
    /* 007a3c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a3c99: mov ebp, esp */ r_ebp = r_esp;
    /* 007a3c9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a3c9d: push 0x8f5a5e */ { u32 v = 0x8f5a5eu; r_esp -= 4; W32(r_esp, v); }
    /* 007a3ca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a3ca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a3ca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a3cb0: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a3cb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a3cb6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007a3cb9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007a3cbc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007a3cbf: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a3cc1: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 007a3cc8: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007a3ccb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3ccd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007a3ccf:; BB(0x007a3ccf);
    /* 007a3ccf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a3cd2: lea edi, [ecx + ecx*8] */ r_edi = (u32)(r_ecx+r_ecx*8);
    /* 007a3cd5: lea edx, [ecx + edi*8] */ r_edx = (u32)(r_ecx+r_edi*8);
    /* 007a3cd8: mov dword ptr [eax + edx*4 + 0xc0], ebx */ W32((u32)(r_eax+r_edx*4+0xc0u), r_ebx);
    /* 007a3cdf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3ce1: mov dword ptr [eax + edx*4 + 0xa8], edi */ W32((u32)(r_eax+r_edx*4+0xa8u), r_edi);
    /* 007a3ce8: mov dword ptr [eax + edx*4 + 0x9c], esi */ W32((u32)(r_eax+r_edx*4+0x9cu), r_esi);
    /* 007a3cef: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3cf1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3cf4: mov dword ptr [eax + edx*4 + 0xa4], edi */ W32((u32)(r_eax+r_edx*4+0xa4u), r_edi);
    /* 007a3cfb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3cfd: mov dword ptr [eax + edx*4 + 0xa0], edi */ W32((u32)(r_eax+r_edx*4+0xa0u), r_edi);
    /* 007a3d04: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3d06: mov dword ptr [eax + edx*4 + 0xac], edi */ W32((u32)(r_eax+r_edx*4+0xacu), r_edi);
    /* 007a3d0d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3d0f: mov dword ptr [eax + edx*4 + 0xb0], edi */ W32((u32)(r_eax+r_edx*4+0xb0u), r_edi);
    /* 007a3d16: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3d18: mov dword ptr [eax + edx*4 + 0xb4], edi */ W32((u32)(r_eax+r_edx*4+0xb4u), r_edi);
    /* 007a3d1f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a3d21: mov dword ptr [eax + edx*4 + 0xb8], edi */ W32((u32)(r_eax+r_edx*4+0xb8u), r_edi);
    /* 007a3d28: cmp ecx, 0xe */ {  u32 a = r_ecx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a3d2b: mov dword ptr [eax + edx*4 + 0xbc], edi */ W32((u32)(r_eax+r_edx*4+0xbcu), r_edi);
    /* 007a3d32: mov dword ptr [eax + edx*4 + 0x88], edi */ W32((u32)(r_eax+r_edx*4+0x88u), r_edi);
    /* 007a3d39: mov dword ptr [eax + edx*4 + 0xc4], edi */ W32((u32)(r_eax+r_edx*4+0xc4u), r_edi);
    /* 007a3d40: mov dword ptr [eax + edx*4 + 0x120], edi */ W32((u32)(r_eax+r_edx*4+0x120u), r_edi);
    /* 007a3d47: jl 0x7a3ccf */ if ((fS!=fO)) goto L_007a3ccf;
L_007a3d49:; BB(0x007a3d49);
    /* 007a3d49: mov ebx, eax */ r_ebx = r_eax;
    /* 007a3d4b: mov edi, dword ptr [ebx + 0x64] */ r_edi = R32((u32)(r_ebx+0x64u));
    /* 007a3d4e: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a3d53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a3d55: mov byte ptr [ebx + 0x1088], al */ W8((u32)(r_ebx+0x1088u), (u8)r_eax);
    /* 007a3d5b: mov dword ptr [ebx + 0x10ac], 0x491c4000 */ W32((u32)(r_ebx+0x10acu), 0x491c4000u);
    /* 007a3d65: mov byte ptr [ebx + 0x1089], al */ W8((u32)(r_ebx+0x1089u), (u8)r_eax);
    /* 007a3d6b: mov word ptr [ebx + 0x108a], ax */ W16((u32)(r_ebx+0x108au), (u16)r_eax);
    /* 007a3d72: mov word ptr [ebx + 0x108c], dx */ W16((u32)(r_ebx+0x108cu), (u16)r_edx);
    /* 007a3d79: mov word ptr [ebx + 0x108e], ax */ W16((u32)(r_ebx+0x108eu), (u16)r_eax);
    /* 007a3d80: mov byte ptr [ebx + 0x1090], al */ W8((u32)(r_ebx+0x1090u), (u8)r_eax);
    /* 007a3d86: mov byte ptr [ebx + 0x1091], al */ W8((u32)(r_ebx+0x1091u), (u8)r_eax);
    /* 007a3d8c: mov word ptr [ebx + 0x1092], ax */ W16((u32)(r_ebx+0x1092u), (u16)r_eax);
    /* 007a3d93: mov word ptr [ebx + 0x1094], dx */ W16((u32)(r_ebx+0x1094u), (u16)r_edx);
    /* 007a3d9a: mov word ptr [ebx + 0x1096], ax */ W16((u32)(r_ebx+0x1096u), (u16)r_eax);
    /* 007a3da1: mov byte ptr [ebx + 0x1084], al */ W8((u32)(r_ebx+0x1084u), (u8)r_eax);
    /* 007a3da7: mov byte ptr [ebx + 0x1085], al */ W8((u32)(r_ebx+0x1085u), (u8)r_eax);
    /* 007a3dad: mov word ptr [ebx + 0x1086], ax */ W16((u32)(r_ebx+0x1086u), (u16)r_eax);
    /* 007a3db4: mov word ptr [ebx + 0x107c], dx */ W16((u32)(r_ebx+0x107cu), (u16)r_edx);
    /* 007a3dbb: mov word ptr [ebx + 0x107e], ax */ W16((u32)(r_ebx+0x107eu), (u16)r_eax);
    /* 007a3dc2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a3dc4: mov dword ptr [ebx + 0x1080], esi */ W32((u32)(r_ebx+0x1080u), r_esi);
    /* 007a3dca: mov word ptr [ebx + 0x1098], dx */ W16((u32)(r_ebx+0x1098u), (u16)r_edx);
    /* 007a3dd1: mov word ptr [ebx + 0x109a], ax */ W16((u32)(r_ebx+0x109au), (u16)r_eax);
    /* 007a3dd8: mov word ptr [ebx + 0x109c], ax */ W16((u32)(r_ebx+0x109cu), (u16)r_eax);
    /* 007a3ddf: mov dword ptr [ebx + 0x10a0], eax */ W32((u32)(r_ebx+0x10a0u), r_eax);
    /* 007a3de5: mov word ptr [ebx + 0x10a4], dx */ W16((u32)(r_ebx+0x10a4u), (u16)r_edx);
    /* 007a3dec: mov word ptr [ebx + 0x10a6], dx */ W16((u32)(r_ebx+0x10a6u), (u16)r_edx);
    /* 007a3df3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a3df5: mov dword ptr [ebx + 0x10a8], ecx */ W32((u32)(r_ebx+0x10a8u), r_ecx);
    /* 007a3dfb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3dfd: je 0x7a3ee2 */ if (fZ) goto L_007a3ee2;
L_007a3e03:; BB(0x007a3e03);
    /* 007a3e03: mov eax, ebx */ r_eax = r_ebx;
    /* 007a3e05: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 007a3e08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3e0a: je 0x7a3e82 */ if (fZ) goto L_007a3e82;
L_007a3e0c:; BB(0x007a3e0c);
    /* 007a3e0c: mov eax, ebx */ r_eax = r_ebx;
    /* 007a3e0e: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 007a3e11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3e13: je 0x7a3e2c */ if (fZ) goto L_007a3e2c;
L_007a3e15:; BB(0x007a3e15);
    /* 007a3e15: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a3e18: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a3e1b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a3e1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a3e21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a3e28: mov esp, ebp */ r_esp = r_ebp;
    /* 007a3e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a3e2b: ret  */ FN_RET(0x007a3c98); r_esp += 4; return;
L_007a3e2c:; BB(0x007a3e2c);
    /* 007a3e2c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007a3e33: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3e35: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a3e3au); f_005caba4();
    /* 007a3e3a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3e3d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a3e40: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007a3e43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3e45: je 0x7a3e7b */ if (fZ) goto L_007a3e7b;
L_007a3e47:; BB(0x007a3e47);
    /* 007a3e47: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007a3e4e: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007a3e55: mov eax, ebx */ r_eax = r_ebx;
    /* 007a3e57: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3e5a: movzx edx, word ptr [eax + 0x20] */ r_edx = (u32)R16((u32)(r_eax+0x20u));
    /* 007a3e5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3e5f: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3e65: call 0x7a3fd4 */ r_esp -= 4; W32(r_esp, 0x7a3e6au); f_007a3fd4();
    /* 007a3e6a: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007a3e71:; BB(0x007a3e71);
    /* 007a3e71: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3e74: mov edx, ebx */ r_edx = r_ebx;
    /* 007a3e76: mov dword ptr [edx + 0x6c], eax */ W32((u32)(r_edx+0x6cu), r_eax);
    /* 007a3e79: jmp 0x7a3e15 */ goto L_007a3e15;
L_007a3e7b:; BB(0x007a3e7b);
    /* 007a3e7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3e7d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3e80: jmp 0x7a3e71 */ goto L_007a3e71;
L_007a3e82:; BB(0x007a3e82);
    /* 007a3e82: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 007a3e89: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3e8b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a3e90u); f_005caba4();
    /* 007a3e90: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3e93: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a3e96: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007a3e99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3e9b: je 0x7a3edb */ if (fZ) goto L_007a3edb;
L_007a3e9d:; BB(0x007a3e9d);
    /* 007a3e9d: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 007a3ea4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007a3eab: mov eax, ebx */ r_eax = r_ebx;
    /* 007a3ead: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3eb0: movzx edx, word ptr [eax + 0x20] */ r_edx = (u32)R16((u32)(r_eax+0x20u));
    /* 007a3eb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3eb5: push dword ptr [0xaca33c] */ { u32 v = R32((u32)(0xaca33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3ebb: call 0x7a3f8c */ r_esp -= 4; W32(r_esp, 0x7a3ec0u); f_007a3f8c();
    /* 007a3ec0: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_007a3ec7:; BB(0x007a3ec7);
    /* 007a3ec7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a3ece: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3ed1: mov edx, ebx */ r_edx = r_ebx;
    /* 007a3ed3: mov dword ptr [edx + 0x68], eax */ W32((u32)(r_edx+0x68u), r_eax);
    /* 007a3ed6: jmp 0x7a3e0c */ goto L_007a3e0c;
L_007a3edb:; BB(0x007a3edb);
    /* 007a3edb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a3edd: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3ee0: jmp 0x7a3ec7 */ goto L_007a3ec7;
L_007a3ee2:; BB(0x007a3ee2);
    /* 007a3ee2: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007a3ee9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007a3eeb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a3ef0u); f_005caba4();
    /* 007a3ef0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3ef3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a3ef6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 007a3ef9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a3efb: je 0x7a3f3b */ if (fZ) goto L_007a3f3b;
L_007a3efd:; BB(0x007a3efd);
    /* 007a3efd: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 007a3f04: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a3f0b: mov eax, ebx */ r_eax = r_ebx;
    /* 007a3f0d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3f10: movzx edx, word ptr [eax + 0x20] */ r_edx = (u32)R16((u32)(r_eax+0x20u));
    /* 007a3f14: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a3f15: push dword ptr [0xaca368] */ { u32 v = R32((u32)(0xaca368u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3f1b: call 0x7a3f44 */ r_esp -= 4; W32(r_esp, 0x7a3f20u); f_007a3f44();
    /* 007a3f20: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_007a3f27:; BB(0x007a3f27);
    /* 007a3f27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a3f2e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a3f31: mov edx, ebx */ r_edx = r_ebx;
    /* 007a3f33: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 007a3f36: jmp 0x7a3e03 */ goto L_007a3e03;
L_007a3f3b:; BB(0x007a3f3b);
    /* 007a3f3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a3f3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007a3f40: jmp 0x7a3f27 */ goto L_007a3f27;
}

void f_007a3f44(void) /* sub_7A3F44 */
{
    FN_ENTER(0x007a3f44);
    /* 007a3f44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3f45: mov esi, ecx */ r_esi = r_ecx;
    /* 007a3f47: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3f4b: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3f4d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a3f52u); f_008193cc();
    /* 007a3f52: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007a3f56: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 007a3f5d: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3f62: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007a3f66: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007a3f6b: mov dword ptr [esi], 0xb45f54 */ W32((u32)(r_esi), 0xb45f54u);
    /* 007a3f71: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007a3f75: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a3f7a: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007a3f7e: mov eax, dword ptr [0x9ff668] */ r_eax = R32((u32)(0x9ff668u));
    /* 007a3f83: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007a3f86: mov eax, esi */ r_eax = r_esi;
    /* 007a3f88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3f89: ret 8 */ FN_RET(0x007a3f44); r_esp += 12; return;
}

void f_007a3f8c(void) /* sub_7A3F8C */
{
    FN_ENTER(0x007a3f8c);
    /* 007a3f8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3f8d: mov esi, ecx */ r_esi = r_ecx;
    /* 007a3f8f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3f93: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3f95: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a3f9au); f_008193cc();
    /* 007a3f9a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007a3f9e: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 007a3fa5: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3faa: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007a3fae: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007a3fb3: mov dword ptr [esi], 0xb45f64 */ W32((u32)(r_esi), 0xb45f64u);
    /* 007a3fb9: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007a3fbd: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a3fc2: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007a3fc6: mov eax, dword ptr [0x9ff66c] */ r_eax = R32((u32)(0x9ff66cu));
    /* 007a3fcb: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007a3fce: mov eax, esi */ r_eax = r_esi;
    /* 007a3fd0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a3fd1: ret 8 */ FN_RET(0x007a3f8c); r_esp += 12; return;
}

void f_007a3fd4(void) /* sub_7A3FD4 */
{
    FN_ENTER(0x007a3fd4);
    /* 007a3fd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a3fd5: mov esi, ecx */ r_esi = r_ecx;
    /* 007a3fd7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a3fdb: mov ecx, esi */ r_ecx = r_esi;
    /* 007a3fdd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a3fe2u); f_008193cc();
    /* 007a3fe2: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 007a3fe6: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 007a3fed: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a3ff2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 007a3ff6: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007a3ffb: mov dword ptr [esi], 0xb45f74 */ W32((u32)(r_esi), 0xb45f74u);
    /* 007a4001: mov word ptr [esi + 0x1c], ax */ W16((u32)(r_esi+0x1cu), (u16)r_eax);
    /* 007a4005: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a400a: mov word ptr [esi + 0x1e], dx */ W16((u32)(r_esi+0x1eu), (u16)r_edx);
    /* 007a400e: mov eax, dword ptr [0x9ff670] */ r_eax = R32((u32)(0x9ff670u));
    /* 007a4013: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007a4016: mov eax, esi */ r_eax = r_esi;
    /* 007a4018: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a4019: ret 8 */ FN_RET(0x007a3fd4); r_esp += 12; return;
}

