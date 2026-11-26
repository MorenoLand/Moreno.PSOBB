#include "protos.h"

void f_0067b068(void) /* sub_67B068 */
{
    FN_ENTER(0x0067b068);
    /* 0067b068: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b069: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067b06b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067b06d: call 0x67b08c */ r_esp -= 4; W32(r_esp, 0x67b072u); f_0067b08c();
    /* 0067b072: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067b076: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067b078: jne 0x67b07e */ if (!fZ) goto L_0067b07e;
L_0067b07a:; BB(0x0067b07a);
    /* 0067b07a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b07b: ret 4 */ FN_RET(0x0067b068); r_esp += 8; return;
L_0067b07e:; BB(0x0067b07e);
    /* 0067b07e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b07f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67b084u); f_005c2f74();
    /* 0067b084: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b086: ret 4 */ FN_RET(0x0067b068); r_esp += 8; return;
}

void f_0067b08c(void) /* sub_67B08C */
{
    FN_ENTER(0x0067b08c);
    /* 0067b08c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b08d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067b08f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b091: push 0x8ea158 */ { u32 v = 0x8ea158u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b096: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067b09c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b09d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067b0a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b0a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067b0aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067b0ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067b0b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067b0b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067b0b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b0b9: mov dword ptr [ecx], 0xb38080 */ W32((u32)(r_ecx), 0xb38080u);
    /* 0067b0bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b0c6: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x67b0cbu); f_008171e8();
    /* 0067b0cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067b0ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b0d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b0d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b0d8: ret  */ FN_RET(0x0067b08c); r_esp += 4; return;
}

void f_0067b0dc(void) /* sub_67B0DC */
{
    FN_ENTER(0x0067b0dc);
    /* 0067b0dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067b0df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067b0e1: call 0x67b100 */ r_esp -= 4; W32(r_esp, 0x67b0e6u); f_0067b100();
    /* 0067b0e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067b0ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067b0ec: jne 0x67b0f2 */ if (!fZ) goto L_0067b0f2;
L_0067b0ee:; BB(0x0067b0ee);
    /* 0067b0ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b0ef: ret 4 */ FN_RET(0x0067b0dc); r_esp += 8; return;
L_0067b0f2:; BB(0x0067b0f2);
    /* 0067b0f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b0f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67b0f8u); f_005c2f74();
    /* 0067b0f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b0f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b0fa: ret 4 */ FN_RET(0x0067b0dc); r_esp += 8; return;
}

void f_0067b100(void) /* sub_67B100 */
{
    FN_ENTER(0x0067b100);
    /* 0067b100: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b101: mov ebp, esp */ r_ebp = r_esp;
    /* 0067b103: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b105: push 0x8ea174 */ { u32 v = 0x8ea174u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b10a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067b110: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b111: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067b118: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b11b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067b11e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067b121: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0067b124: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067b127: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067b12a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b12d: mov dword ptr [ecx], 0xb38090 */ W32((u32)(r_ecx), 0xb38090u);
    /* 0067b133: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0067b13a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x67b13fu); f_008171e8();
    /* 0067b13f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067b142: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b149: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b14b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b14c: ret  */ FN_RET(0x0067b100); r_esp += 4; return;
}

void f_0067b150(void) /* sub_67B150 */
{
    FN_ENTER(0x0067b150);
    /* 0067b150: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b151: mov ebx, esp */ r_ebx = r_esp;
    /* 0067b153: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0067b156: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b157: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b158: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b15b: mov edi, ecx */ r_edi = r_ecx;
    /* 0067b15d: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0067b160: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067b163: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067b165: jl 0x67b330 */ if ((fS!=fO)) goto L_0067b330;
L_0067b16b:; BB(0x0067b16b);
    /* 0067b16b: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
L_0067b16e:; BB(0x0067b16e);
    /* 0067b16e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b170: jne 0x67b320 */ if (!fZ) goto L_0067b320;
L_0067b176:; BB(0x0067b176);
    /* 0067b176: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
    /* 0067b17b: or eax, dword ptr [0xa0f684] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f684u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067b181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b182: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0067b187: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x67b18cu); f_007c1100();
    /* 0067b18c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b18e: je 0x67b320 */ if (fZ) goto L_0067b320;
L_0067b194:; BB(0x0067b194);
    /* 0067b194: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0067b199: mov byte ptr [esp], 0x92 */ W8((u32)(r_esp), 0x92u);
    /* 0067b19d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0067b19e: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 0067b1a3: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b1a5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067b1a7: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0067b1aa: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b1ac: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067b1ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067b1b0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0067b1b4: jl 0x67b311 */ if ((fS!=fO)) goto L_0067b311;
L_0067b1ba:; BB(0x0067b1ba);
    /* 0067b1ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b1bd: jle 0x67b207 */ if ((fZ||fS!=fO)) goto L_0067b207;
L_0067b1bf:; BB(0x0067b1bf);
    /* 0067b1bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b1c2: je 0x67b207 */ if (fZ) goto L_0067b207;
L_0067b1c4:; BB(0x0067b1c4);
    /* 0067b1c4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b1c7: jne 0x67b311 */ if (!fZ) goto L_0067b311;
L_0067b1cd:; BB(0x0067b1cd);
    /* 0067b1cd: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b1d3: mov ebp, dword ptr [0xa90058] */ r_ebp = R32((u32)(0xa90058u));
    /* 0067b1d9: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0067b1de: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x67b1e3u); f_007c1100();
    /* 0067b1e3: mov edx, dword ptr [0xa90030] */ r_edx = R32((u32)(0xa90030u));
    /* 0067b1e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b1eb: je 0x67b1f1 */ if (fZ) goto L_0067b1f1;
L_0067b1ed:; BB(0x0067b1ed);
    /* 0067b1ed: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067b1ef: jmp 0x67b1f3 */ goto L_0067b1f3;
L_0067b1f1:; BB(0x0067b1f1);
    /* 0067b1f1: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_0067b1f3:; BB(0x0067b1f3);
    /* 0067b1f3: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 0067b1f6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067b1fa: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0067b1fe: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0067b202: jmp 0x67b311 */ goto L_0067b311;
L_0067b207:; BB(0x0067b207);
    /* 0067b207: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b209: je 0x67b28d */ if (fZ) goto L_0067b28d;
L_0067b20f:; BB(0x0067b20f);
    /* 0067b20f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b212: jne 0x67b242 */ if (!fZ) goto L_0067b242;
L_0067b214:; BB(0x0067b214);
    /* 0067b214: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067b21a: fld dword ptr [0xa90038] */ FPUSH(R_F32((u32)(0xa90038u)));
    /* 0067b220: fld dword ptr [0x93bb5c] */ FPUSH(R_F32((u32)(0x93bb5cu)));
    /* 0067b226: fld dword ptr [0x93bb58] */ FPUSH(R_F32((u32)(0x93bb58u)));
    /* 0067b22c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067b22e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067b232: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b234: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b238: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067b23c: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0067b240: jmp 0x67b2b9 */ goto L_0067b2b9;
L_0067b242:; BB(0x0067b242);
    /* 0067b242: fldz  */ FPUSH(0.0);
    /* 0067b244: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0067b248: fldz  */ FPUSH(0.0);
    /* 0067b24a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067b24e: fldz  */ FPUSH(0.0);
    /* 0067b250: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b254: fldz  */ FPUSH(0.0);
    /* 0067b256: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067b25a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b25d: jne 0x67b2b9 */ if (!fZ) goto L_0067b2b9;
L_0067b25f:; BB(0x0067b25f);
    /* 0067b25f: fld dword ptr [0xa9005c] */ FPUSH(R_F32((u32)(0xa9005cu)));
    /* 0067b265: fld dword ptr [0xa90034] */ FPUSH(R_F32((u32)(0xa90034u)));
    /* 0067b26b: fld dword ptr [0x93bb64] */ FPUSH(R_F32((u32)(0x93bb64u)));
    /* 0067b271: fld dword ptr [0x93bb60] */ FPUSH(R_F32((u32)(0x93bb60u)));
    /* 0067b277: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067b279: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067b27d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b27f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b283: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067b287: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0067b28b: jmp 0x67b2b9 */ goto L_0067b2b9;
L_0067b28d:; BB(0x0067b28d);
    /* 0067b28d: fld dword ptr [0xa90050] */ FPUSH(R_F32((u32)(0xa90050u)));
    /* 0067b293: fld dword ptr [0xa9003c] */ FPUSH(R_F32((u32)(0xa9003cu)));
    /* 0067b299: fld dword ptr [0x93bb54] */ FPUSH(R_F32((u32)(0x93bb54u)));
    /* 0067b29f: fld dword ptr [0x93bb50] */ FPUSH(R_F32((u32)(0x93bb50u)));
    /* 0067b2a5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067b2a7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067b2ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b2ad: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b2b1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0067b2b5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0067b2b9:; BB(0x0067b2b9);
    /* 0067b2b9: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b2bf: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0067b2c4: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x67b2c9u); f_007c1100();
    /* 0067b2c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b2cb: je 0x67b2ec */ if (fZ) goto L_0067b2ec;
L_0067b2cd:; BB(0x0067b2cd);
    /* 0067b2cd: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0067b2d1: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0067b2d5: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 0067b2d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b2db: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b2df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b2e0: jbe 0x67b309 */ if ((fC||fZ)) goto L_0067b309;
L_0067b2e2:; BB(0x0067b2e2);
    /* 0067b2e2: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0067b2e6: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b2ea: jmp 0x67b309 */ goto L_0067b309;
L_0067b2ec:; BB(0x0067b2ec);
    /* 0067b2ec: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0067b2f0: fsubr dword ptr [esp + 0x20] */ ST(0) = R_F32((u32)(r_esp+0x20u)) - ST(0);
    /* 0067b2f4: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 0067b2f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b2fa: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0067b2fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b2ff: jae 0x67b309 */ if (!fC) goto L_0067b309;
L_0067b301:; BB(0x0067b301);
    /* 0067b301: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0067b305: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_0067b309:; BB(0x0067b309);
    /* 0067b309: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0067b30d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0067b311:; BB(0x0067b311);
    /* 0067b311: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0067b314: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x67b319u); f_008003e0();
    /* 0067b319: mov dword ptr [edi + 0x1c], 0x1e */ W32((u32)(r_edi+0x1cu), 0x1eu);
L_0067b320:; BB(0x0067b320);
    /* 0067b320: mov ecx, edi */ r_ecx = r_edi;
    /* 0067b322: call 0x67b340 */ r_esp -= 4; W32(r_esp, 0x67b327u); f_0067b340();
    /* 0067b327: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b32a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b32b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067b32c: mov esp, ebx */ r_esp = r_ebx;
    /* 0067b32e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b32f: ret  */ FN_RET(0x0067b150); r_esp += 4; return;
L_0067b330:; BB(0x0067b330);
    /* 0067b330: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 0067b337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b339: jmp 0x67b16e */ goto L_0067b16e;
}

void f_0067b340(void) /* sub_67B340 */
{
    FN_ENTER(0x0067b340);
    /* 0067b340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b341: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b342: fld dword ptr [0xa90060] */ FPUSH(R_F32((u32)(0xa90060u)));
    /* 0067b348: fld dword ptr [0x93bb4c] */ FPUSH(R_F32((u32)(0x93bb4cu)));
    /* 0067b34e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067b350: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b352: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b353: je 0x67b52d */ if (fZ) goto L_0067b52d;
L_0067b359:; BB(0x0067b359);
    /* 0067b359: fld dword ptr [0xa90070] */ FPUSH(R_F32((u32)(0xa90070u)));
    /* 0067b35f: fsub dword ptr [0xa90050] */ ST(0) = ST(0) - R_F32((u32)(0xa90050u));
    /* 0067b365: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0067b367: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067b369: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0067b36b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b36d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b36e: jae 0x67b37b */ if (!fC) goto L_0067b37b;
L_0067b370:; BB(0x0067b370);
    /* 0067b370: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0067b372: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067b374: mov dword ptr [0xa90060], eax */ W32((u32)(0xa90060u), r_eax);
    /* 0067b379: jmp 0x67b3d4 */ goto L_0067b3d4;
L_0067b37b:; BB(0x0067b37b);
    /* 0067b37b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b37d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b37e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b381: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b386u); f_0082e900();
    /* 0067b386: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b389: push dword ptr [0xa90060] */ { u32 v = R32((u32)(0xa90060u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b38f: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b394u); f_0082e900();
    /* 0067b394: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0067b397: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0067b399: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b39b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b39c: jae 0x67b3ba */ if (!fC) goto L_0067b3ba;
L_0067b39e:; BB(0x0067b39e);
    /* 0067b39e: mov eax, dword ptr [0xa90070] */ r_eax = R32((u32)(0xa90070u));
    /* 0067b3a3: fld dword ptr [0x93bb4c] */ FPUSH(R_F32((u32)(0x93bb4cu)));
    /* 0067b3a9: mov dword ptr [0xa90060], 0 */ W32((u32)(0xa90060u), 0x0u);
    /* 0067b3b3: mov dword ptr [0xa90050], eax */ W32((u32)(0xa90050u), r_eax);
    /* 0067b3b8: jmp 0x67b3d4 */ goto L_0067b3d4;
L_0067b3ba:; BB(0x0067b3ba);
    /* 0067b3ba: fld dword ptr [0xa90050] */ FPUSH(R_F32((u32)(0xa90050u)));
    /* 0067b3c0: fadd dword ptr [0xa90060] */ ST(0) = ST(0) + R_F32((u32)(0xa90060u));
    /* 0067b3c6: fld dword ptr [0x93bb4c] */ FPUSH(R_F32((u32)(0x93bb4cu)));
    /* 0067b3cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b3ce: fstp dword ptr [0xa90050] */ W_F32((u32)(0xa90050u), ST(0)); FPOP();
L_0067b3d4:; BB(0x0067b3d4);
    /* 0067b3d4: fld dword ptr [0xa90064] */ FPUSH(R_F32((u32)(0xa90064u)));
    /* 0067b3da: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067b3dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b3de: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b3df: je 0x67b534 */ if (fZ) goto L_0067b534;
L_0067b3e5:; BB(0x0067b3e5);
    /* 0067b3e5: fld dword ptr [0xa90074] */ FPUSH(R_F32((u32)(0xa90074u)));
    /* 0067b3eb: fsub dword ptr [0xa90054] */ ST(0) = ST(0) - R_F32((u32)(0xa90054u));
    /* 0067b3f1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067b3f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b3f5: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0067b3f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b3f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b3fa: jae 0x67b406 */ if (!fC) goto L_0067b406;
L_0067b3fc:; BB(0x0067b3fc);
    /* 0067b3fc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b3fe: fstp dword ptr [0xa90064] */ W_F32((u32)(0xa90064u), ST(0)); FPOP();
    /* 0067b404: jmp 0x67b451 */ goto L_0067b451;
L_0067b406:; BB(0x0067b406);
    /* 0067b406: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0067b408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b409: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b40c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b411u); f_0082e900();
    /* 0067b411: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b414: push dword ptr [0xa90064] */ { u32 v = R32((u32)(0xa90064u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b41a: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b41fu); f_0082e900();
    /* 0067b41f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0067b422: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0067b424: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b426: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b427: jae 0x67b43f */ if (!fC) goto L_0067b43f;
L_0067b429:; BB(0x0067b429);
    /* 0067b429: mov eax, dword ptr [0xa90074] */ r_eax = R32((u32)(0xa90074u));
    /* 0067b42e: mov dword ptr [0xa90064], 0 */ W32((u32)(0xa90064u), 0x0u);
    /* 0067b438: mov dword ptr [0xa90054], eax */ W32((u32)(0xa90054u), r_eax);
    /* 0067b43d: jmp 0x67b451 */ goto L_0067b451;
L_0067b43f:; BB(0x0067b43f);
    /* 0067b43f: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067b445: fadd dword ptr [0xa90064] */ ST(0) = ST(0) + R_F32((u32)(0xa90064u));
    /* 0067b44b: fstp dword ptr [0xa90054] */ W_F32((u32)(0xa90054u), ST(0)); FPOP();
L_0067b451:; BB(0x0067b451);
    /* 0067b451: mov eax, dword ptr [0xa90068] */ r_eax = R32((u32)(0xa90068u));
    /* 0067b456: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0067b458: je 0x67b4a2 */ if (fZ) goto L_0067b4a2;
L_0067b45a:; BB(0x0067b45a);
    /* 0067b45a: push dword ptr [0xa90078] */ { u32 v = R32((u32)(0xa90078u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b460: push dword ptr [0xa90058] */ { u32 v = R32((u32)(0xa90058u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b466: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x67b46bu); f_007a9018();
    /* 0067b46b: mov edi, eax */ r_edi = r_eax;
    /* 0067b46d: push dword ptr [0xa90068] */ { u32 v = R32((u32)(0xa90068u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b473: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b475: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x67b47au); f_007a9018();
    /* 0067b47a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b47d: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b47f: jge 0x67b497 */ if ((fS==fO)) goto L_0067b497;
L_0067b481:; BB(0x0067b481);
    /* 0067b481: mov eax, dword ptr [0xa90078] */ r_eax = R32((u32)(0xa90078u));
    /* 0067b486: mov dword ptr [0xa90068], 0 */ W32((u32)(0xa90068u), 0x0u);
    /* 0067b490: mov dword ptr [0xa90058], eax */ W32((u32)(0xa90058u), r_eax);
    /* 0067b495: jmp 0x67b4a2 */ goto L_0067b4a2;
L_0067b497:; BB(0x0067b497);
    /* 0067b497: mov eax, dword ptr [0xa90068] */ r_eax = R32((u32)(0xa90068u));
    /* 0067b49c: add dword ptr [0xa90058], eax */ { u32 ad = (u32)(0xa90058u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0067b4a2:; BB(0x0067b4a2);
    /* 0067b4a2: fld dword ptr [0x93bb4c] */ FPUSH(R_F32((u32)(0x93bb4cu)));
    /* 0067b4a8: fld dword ptr [0xa9006c] */ FPUSH(R_F32((u32)(0xa9006cu)));
    /* 0067b4ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0067b4b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b4b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b4b3: je 0x67b53d */ if (fZ) goto L_0067b53d;
L_0067b4b9:; BB(0x0067b4b9);
    /* 0067b4b9: fld dword ptr [0xa9007c] */ FPUSH(R_F32((u32)(0xa9007cu)));
    /* 0067b4bf: fsub dword ptr [0xa9005c] */ ST(0) = ST(0) - R_F32((u32)(0xa9005cu));
    /* 0067b4c5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067b4c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b4c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0067b4cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067b4cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b4cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b4d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b4d2: jae 0x67b4e0 */ if (!fC) goto L_0067b4e0;
L_0067b4d4:; BB(0x0067b4d4);
    /* 0067b4d4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b4d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067b4d8: mov dword ptr [0xa9006c], eax */ W32((u32)(0xa9006cu), r_eax);
    /* 0067b4dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b4de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067b4df: ret  */ FN_RET(0x0067b340); r_esp += 4; return;
L_0067b4e0:; BB(0x0067b4e0);
    /* 0067b4e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b4e1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b4e4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b4e9u); f_0082e900();
    /* 0067b4e9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067b4ec: push dword ptr [0xa9006c] */ { u32 v = R32((u32)(0xa9006cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b4f2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x67b4f7u); f_0082e900();
    /* 0067b4f7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0067b4fa: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0067b4fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b4fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b4ff: jae 0x67b518 */ if (!fC) goto L_0067b518;
L_0067b501:; BB(0x0067b501);
    /* 0067b501: mov eax, dword ptr [0xa9007c] */ r_eax = R32((u32)(0xa9007cu));
    /* 0067b506: mov dword ptr [0xa9006c], 0 */ W32((u32)(0xa9006cu), 0x0u);
    /* 0067b510: mov dword ptr [0xa9005c], eax */ W32((u32)(0xa9005cu), r_eax);
    /* 0067b515: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b516: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067b517: ret  */ FN_RET(0x0067b340); r_esp += 4; return;
L_0067b518:; BB(0x0067b518);
    /* 0067b518: fld dword ptr [0xa9005c] */ FPUSH(R_F32((u32)(0xa9005cu)));
    /* 0067b51e: fadd dword ptr [0xa9006c] */ ST(0) = ST(0) + R_F32((u32)(0xa9006cu));
    /* 0067b524: fstp dword ptr [0xa9005c] */ W_F32((u32)(0xa9005cu), ST(0)); FPOP();
    /* 0067b52a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b52b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067b52c: ret  */ FN_RET(0x0067b340); r_esp += 4; return;
L_0067b52d:; BB(0x0067b52d);
    /* 0067b52d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0067b52f: jmp 0x67b3d4 */ goto L_0067b3d4;
L_0067b534:; BB(0x0067b534);
    /* 0067b534: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b536: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b538: jmp 0x67b451 */ goto L_0067b451;
L_0067b53d:; BB(0x0067b53d);
    /* 0067b53d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b53f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067b541: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b542: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067b543: ret  */ FN_RET(0x0067b340); r_esp += 4; return;
}

void f_0067b544(void) /* sub_67B544 */
{
    FN_ENTER(0x0067b544);
    /* 0067b544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b545: mov ebp, esp */ r_ebp = r_esp;
    /* 0067b547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067b549: push 0x8ea1c6 */ { u32 v = 0x8ea1c6u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b54e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067b554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b555: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067b55c: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b55f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067b562: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0067b565: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0067b568: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0067b56b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b56d: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067b574: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67b579u); f_005caba4();
    /* 0067b579: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067b57c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b57f: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0067b582: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b584: je 0x67b853 */ if (fZ) goto L_0067b853;
L_0067b58a:; BB(0x0067b58a);
    /* 0067b58a: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0067b591: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067b598: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b59b: mov ecx, eax */ r_ecx = r_eax;
    /* 0067b59d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0067b5a0: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x67b5a5u); f_008193cc();
    /* 0067b5a5: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067b5ac: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b5af: mov dword ptr [edx], 0xb38080 */ W32((u32)(r_edx), 0xb38080u);
    /* 0067b5b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067b5b7: mov eax, dword ptr [0x9ca5c8] */ r_eax = R32((u32)(0x9ca5c8u));
    /* 0067b5bc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0067b5bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0067b5c2:; BB(0x0067b5c2);
    /* 0067b5c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067b5c5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0067b5cc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067b5cf: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0067b5d2: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 0067b5d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x67b5dcu); f_005caba4();
    /* 0067b5dc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067b5df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0067b5e2: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0067b5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b5e7: je 0x67b7b1 */ if (fZ) goto L_0067b7b1;
L_0067b5ed:; BB(0x0067b5ed);
    /* 0067b5ed: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0067b5f4: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0067b5fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b5fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0067b601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b602: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x67b607u); f_008193cc();
    /* 0067b607: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067b60a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0067b60d: mov dword ptr [eax], 0xb38090 */ W32((u32)(r_eax), 0xb38090u);
    /* 0067b613: mov ebx, dword ptr [0x9ca5cc] */ r_ebx = R32((u32)(0x9ca5ccu));
    /* 0067b619: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 0067b61c: movsx ebx, word ptr [edx*2 + 0x9ca5d0] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx*2+0x9ca5d0u));
    /* 0067b624: movsx ecx, word ptr [edx*2 + 0x9ca5d2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx*2+0x9ca5d2u));
    /* 0067b62c: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067b62f: je 0x67b653 */ if (fZ) goto L_0067b653;
L_0067b631:; BB(0x0067b631);
    /* 0067b631: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0067b636: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067b638: mov esi, ebx */ r_esi = r_ebx;
    /* 0067b63a: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0067b63d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067b63f: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0067b642: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067b644: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067b646: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067b648: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b64b: je 0x67b823 */ if (fZ) goto L_0067b823;
L_0067b651:; BB(0x0067b651);
    /* 0067b651: jmp 0x67b673 */ goto L_0067b673;
L_0067b653:; BB(0x0067b653);
    /* 0067b653: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0067b658: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067b65a: mov esi, ebx */ r_esi = r_ebx;
    /* 0067b65c: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0067b65f: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067b661: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0067b664: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067b666: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067b668: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067b66a: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b66d: je 0x67b83b */ if (fZ) goto L_0067b83b;
L_0067b673:; BB(0x0067b673);
    /* 0067b673: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0067b676: mov dword ptr [eax + 0x9c], 0x3f800000 */ W32((u32)(r_eax+0x9cu), 0x3f800000u);
    /* 0067b680: mov word ptr [eax + 0x1c], bx */ W16((u32)(r_eax+0x1cu), (u16)r_ebx);
    /* 0067b684: mov word ptr [eax + 0x1e], cx */ W16((u32)(r_eax+0x1eu), (u16)r_ecx);
    /* 0067b688: mov word ptr [eax + 0x20], bx */ W16((u32)(r_eax+0x20u), (u16)r_ebx);
    /* 0067b68c: mov word ptr [eax + 0x22], cx */ W16((u32)(r_eax+0x22u), (u16)r_ecx);
    /* 0067b690: mov word ptr [eax + 0x24], bx */ W16((u32)(r_eax+0x24u), (u16)r_ebx);
    /* 0067b694: mov word ptr [eax + 0x26], cx */ W16((u32)(r_eax+0x26u), (u16)r_ecx);
    /* 0067b698: mov word ptr [eax + 0x28], bx */ W16((u32)(r_eax+0x28u), (u16)r_ebx);
    /* 0067b69c: mov word ptr [eax + 0x2a], cx */ W16((u32)(r_eax+0x2au), (u16)r_ecx);
    /* 0067b6a0: mov word ptr [eax + 0x2c], bx */ W16((u32)(r_eax+0x2cu), (u16)r_ebx);
    /* 0067b6a4: mov word ptr [eax + 0x2e], cx */ W16((u32)(r_eax+0x2eu), (u16)r_ecx);
    /* 0067b6a8: mov word ptr [eax + 0x30], bx */ W16((u32)(r_eax+0x30u), (u16)r_ebx);
    /* 0067b6ac: mov word ptr [eax + 0x32], cx */ W16((u32)(r_eax+0x32u), (u16)r_ecx);
    /* 0067b6b0: mov word ptr [eax + 0x34], bx */ W16((u32)(r_eax+0x34u), (u16)r_ebx);
    /* 0067b6b4: mov word ptr [eax + 0x36], cx */ W16((u32)(r_eax+0x36u), (u16)r_ecx);
    /* 0067b6b8: mov word ptr [eax + 0x38], bx */ W16((u32)(r_eax+0x38u), (u16)r_ebx);
    /* 0067b6bc: mov word ptr [eax + 0x3a], cx */ W16((u32)(r_eax+0x3au), (u16)r_ecx);
    /* 0067b6c0: mov word ptr [eax + 0x3c], bx */ W16((u32)(r_eax+0x3cu), (u16)r_ebx);
    /* 0067b6c4: mov word ptr [eax + 0x3e], cx */ W16((u32)(r_eax+0x3eu), (u16)r_ecx);
    /* 0067b6c8: mov word ptr [eax + 0x40], bx */ W16((u32)(r_eax+0x40u), (u16)r_ebx);
    /* 0067b6cc: mov word ptr [eax + 0x42], cx */ W16((u32)(r_eax+0x42u), (u16)r_ecx);
    /* 0067b6d0: mov word ptr [eax + 0x44], bx */ W16((u32)(r_eax+0x44u), (u16)r_ebx);
    /* 0067b6d4: mov word ptr [eax + 0x46], cx */ W16((u32)(r_eax+0x46u), (u16)r_ecx);
    /* 0067b6d8: mov word ptr [eax + 0x48], bx */ W16((u32)(r_eax+0x48u), (u16)r_ebx);
    /* 0067b6dc: mov word ptr [eax + 0x4a], cx */ W16((u32)(r_eax+0x4au), (u16)r_ecx);
    /* 0067b6e0: mov word ptr [eax + 0x4c], bx */ W16((u32)(r_eax+0x4cu), (u16)r_ebx);
    /* 0067b6e4: mov word ptr [eax + 0x4e], cx */ W16((u32)(r_eax+0x4eu), (u16)r_ecx);
    /* 0067b6e8: mov word ptr [eax + 0x50], bx */ W16((u32)(r_eax+0x50u), (u16)r_ebx);
    /* 0067b6ec: mov word ptr [eax + 0x52], cx */ W16((u32)(r_eax+0x52u), (u16)r_ecx);
    /* 0067b6f0: mov word ptr [eax + 0x54], bx */ W16((u32)(r_eax+0x54u), (u16)r_ebx);
    /* 0067b6f4: mov word ptr [eax + 0x56], cx */ W16((u32)(r_eax+0x56u), (u16)r_ecx);
    /* 0067b6f8: mov word ptr [eax + 0x58], bx */ W16((u32)(r_eax+0x58u), (u16)r_ebx);
    /* 0067b6fc: mov word ptr [eax + 0x5a], cx */ W16((u32)(r_eax+0x5au), (u16)r_ecx);
    /* 0067b700: mov word ptr [eax + 0x5c], bx */ W16((u32)(r_eax+0x5cu), (u16)r_ebx);
    /* 0067b704: mov word ptr [eax + 0x5e], cx */ W16((u32)(r_eax+0x5eu), (u16)r_ecx);
    /* 0067b708: mov word ptr [eax + 0x60], bx */ W16((u32)(r_eax+0x60u), (u16)r_ebx);
    /* 0067b70c: mov word ptr [eax + 0x62], cx */ W16((u32)(r_eax+0x62u), (u16)r_ecx);
    /* 0067b710: mov word ptr [eax + 0x64], bx */ W16((u32)(r_eax+0x64u), (u16)r_ebx);
    /* 0067b714: mov word ptr [eax + 0x66], cx */ W16((u32)(r_eax+0x66u), (u16)r_ecx);
    /* 0067b718: mov word ptr [eax + 0x68], bx */ W16((u32)(r_eax+0x68u), (u16)r_ebx);
    /* 0067b71c: mov word ptr [eax + 0x6a], cx */ W16((u32)(r_eax+0x6au), (u16)r_ecx);
    /* 0067b720: mov word ptr [eax + 0x6c], bx */ W16((u32)(r_eax+0x6cu), (u16)r_ebx);
    /* 0067b724: mov word ptr [eax + 0x6e], cx */ W16((u32)(r_eax+0x6eu), (u16)r_ecx);
    /* 0067b728: mov word ptr [eax + 0x70], bx */ W16((u32)(r_eax+0x70u), (u16)r_ebx);
    /* 0067b72c: mov word ptr [eax + 0x72], cx */ W16((u32)(r_eax+0x72u), (u16)r_ecx);
    /* 0067b730: mov word ptr [eax + 0x74], bx */ W16((u32)(r_eax+0x74u), (u16)r_ebx);
    /* 0067b734: mov word ptr [eax + 0x76], cx */ W16((u32)(r_eax+0x76u), (u16)r_ecx);
    /* 0067b738: mov word ptr [eax + 0x78], bx */ W16((u32)(r_eax+0x78u), (u16)r_ebx);
    /* 0067b73c: mov word ptr [eax + 0x7a], cx */ W16((u32)(r_eax+0x7au), (u16)r_ecx);
    /* 0067b740: mov word ptr [eax + 0x7c], bx */ W16((u32)(r_eax+0x7cu), (u16)r_ebx);
    /* 0067b744: mov word ptr [eax + 0x7e], cx */ W16((u32)(r_eax+0x7eu), (u16)r_ecx);
    /* 0067b748: mov word ptr [eax + 0x80], bx */ W16((u32)(r_eax+0x80u), (u16)r_ebx);
    /* 0067b74f: mov word ptr [eax + 0x82], cx */ W16((u32)(r_eax+0x82u), (u16)r_ecx);
    /* 0067b756: mov word ptr [eax + 0x84], bx */ W16((u32)(r_eax+0x84u), (u16)r_ebx);
    /* 0067b75d: mov word ptr [eax + 0x86], cx */ W16((u32)(r_eax+0x86u), (u16)r_ecx);
    /* 0067b764: mov word ptr [eax + 0x88], bx */ W16((u32)(r_eax+0x88u), (u16)r_ebx);
    /* 0067b76b: mov word ptr [eax + 0x8a], cx */ W16((u32)(r_eax+0x8au), (u16)r_ecx);
    /* 0067b772: mov word ptr [eax + 0x8c], bx */ W16((u32)(r_eax+0x8cu), (u16)r_ebx);
    /* 0067b779: mov word ptr [eax + 0x8e], cx */ W16((u32)(r_eax+0x8eu), (u16)r_ecx);
    /* 0067b780: mov word ptr [eax + 0x90], bx */ W16((u32)(r_eax+0x90u), (u16)r_ebx);
    /* 0067b787: mov word ptr [eax + 0x92], cx */ W16((u32)(r_eax+0x92u), (u16)r_ecx);
    /* 0067b78e: mov word ptr [eax + 0x94], bx */ W16((u32)(r_eax+0x94u), (u16)r_ebx);
    /* 0067b795: mov word ptr [eax + 0x96], cx */ W16((u32)(r_eax+0x96u), (u16)r_ecx);
    /* 0067b79c: mov word ptr [eax + 0x98], bx */ W16((u32)(r_eax+0x98u), (u16)r_ebx);
    /* 0067b7a3: mov word ptr [eax + 0x9a], cx */ W16((u32)(r_eax+0x9au), (u16)r_ecx);
    /* 0067b7aa: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0067b7b1:; BB(0x0067b7b1);
    /* 0067b7b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0067b7b8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0067b7bb: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067b7be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0067b7c1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0067b7c4: jl 0x67b5c2 */ if ((fS!=fO)) goto L_0067b5c2;
L_0067b7ca:; BB(0x0067b7ca);
    /* 0067b7ca: mov eax, dword ptr [0xa90020] */ r_eax = R32((u32)(0xa90020u));
    /* 0067b7cf: mov edx, dword ptr [0xa90024] */ r_edx = R32((u32)(0xa90024u));
    /* 0067b7d5: mov ecx, dword ptr [0xa90028] */ r_ecx = R32((u32)(0xa90028u));
    /* 0067b7db: mov ebx, dword ptr [0xa9002c] */ r_ebx = R32((u32)(0xa9002cu));
    /* 0067b7e1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b7e4: mov dword ptr [esi + 0x1c], 0x1e */ W32((u32)(r_esi+0x1cu), 0x1eu);
    /* 0067b7eb: mov dword ptr [0xa90060], eax */ W32((u32)(0xa90060u), r_eax);
    /* 0067b7f0: mov dword ptr [0xa90064], edx */ W32((u32)(0xa90064u), r_edx);
    /* 0067b7f6: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0067b7fd: mov dword ptr [0xa90068], ecx */ W32((u32)(0xa90068u), r_ecx);
    /* 0067b803: mov dword ptr [0xa9006c], ebx */ W32((u32)(0xa9006cu), r_ebx);
L_0067b809:; BB(0x0067b809);
    /* 0067b809: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067b80c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0067b80f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0067b812: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0067b815: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067b818: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067b81f: mov esp, ebp */ r_esp = r_ebp;
    /* 0067b821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b822: ret  */ FN_RET(0x0067b544); r_esp += 4; return;
L_0067b823:; BB(0x0067b823);
    /* 0067b823: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 0067b826: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b829: jge 0x67b833 */ if ((fS==fO)) goto L_0067b833;
L_0067b82b:; BB(0x0067b82b);
    /* 0067b82b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b82e: jmp 0x67b673 */ goto L_0067b673;
L_0067b833:; BB(0x0067b833);
    /* 0067b833: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b836: jmp 0x67b673 */ goto L_0067b673;
L_0067b83b:; BB(0x0067b83b);
    /* 0067b83b: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 0067b83e: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067b841: jge 0x67b84b */ if ((fS==fO)) goto L_0067b84b;
L_0067b843:; BB(0x0067b843);
    /* 0067b843: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b846: jmp 0x67b673 */ goto L_0067b673;
L_0067b84b:; BB(0x0067b84b);
    /* 0067b84b: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b84e: jmp 0x67b673 */ goto L_0067b673;
L_0067b853:; BB(0x0067b853);
    /* 0067b853: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067b855: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0067b858: jmp 0x67b809 */ goto L_0067b809;
}

void f_0067b85c(void) /* sub_67B85C */
{
    FN_ENTER(0x0067b85c);
    /* 0067b85c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b85d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b85e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b861: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0067b865: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0067b868: mov ebp, dword ptr [ecx + 8] */ r_ebp = R32((u32)(r_ecx+0x8u));
    /* 0067b86b: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0067b86e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0067b872: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0067b873: mov ebx, eax */ r_ebx = r_eax;
    /* 0067b875: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b877: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b879: and ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b87c: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b87e: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0067b880: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b881: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x67b886u); f_0068d5a8();
    /* 0067b886: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067b887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b889: je 0x67b930 */ if (fZ) goto L_0067b930;
L_0067b88f:; BB(0x0067b88f);
    /* 0067b88f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b891: je 0x67b9a2 */ if (fZ) goto L_0067b9a2;
L_0067b897:; BB(0x0067b897);
    /* 0067b897: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b89a: je 0x67b95a */ if (fZ) goto L_0067b95a;
L_0067b8a0:; BB(0x0067b8a0);
    /* 0067b8a0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b8a3: jne 0x67b90d */ if (!fZ) goto L_0067b90d;
L_0067b8a5:; BB(0x0067b8a5);
    /* 0067b8a5: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b8a9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0067b8ac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067b8b0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067b8b5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0067b8b9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0067b8bd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067b8c1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067b8c4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0067b8c8: mov dword ptr [0xa90078], eax */ W32((u32)(0xa90078u), r_eax);
    /* 0067b8cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067b8ce: push dword ptr [0xa90058] */ { u32 v = R32((u32)(0xa90058u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067b8d4: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x67b8d9u); f_007a900c();
    /* 0067b8d9: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0067b8dd: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0067b8e1: fmul dword ptr [0x93bac4] */ ST(0) = ST(0) * R_F32((u32)(0x93bac4u));
    /* 0067b8e7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0067b8eb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0067b8f0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067b8f5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0067b8f9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0067b8fd: fistp dword ptr [0xa90068] */ W32((u32)(0xa90068u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067b903: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0067b907: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b90a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b90b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b90c: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b90d:; BB(0x0067b90d);
    /* 0067b90d: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067b910: jne 0x67b930 */ if (!fZ) goto L_0067b930;
L_0067b912:; BB(0x0067b912);
    /* 0067b912: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b916: fcomp dword ptr [0x93bb34] */ fx_compare(ST(0), R_F32((u32)(0x93bb34u))); FPOP();
    /* 0067b91c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b91e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b91f: jb 0x67b930 */ if (fC) goto L_0067b930;
L_0067b921:; BB(0x0067b921);
    /* 0067b921: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b925: fcomp dword ptr [0x93bb30] */ fx_compare(ST(0), R_F32((u32)(0x93bb30u))); FPOP();
    /* 0067b92b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b92d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b92e: jbe 0x67b936 */ if ((fC||fZ)) goto L_0067b936;
L_0067b930:; BB(0x0067b930);
    /* 0067b930: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b933: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b934: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b935: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b936:; BB(0x0067b936);
    /* 0067b936: mov dword ptr [0xa9007c], ebp */ W32((u32)(0xa9007cu), r_ebp);
    /* 0067b93c: fld dword ptr [0xa9007c] */ FPUSH(R_F32((u32)(0xa9007cu)));
    /* 0067b942: fsub dword ptr [0xa9005c] */ ST(0) = ST(0) - R_F32((u32)(0xa9005cu));
    /* 0067b948: fmul dword ptr [0x93bac4] */ ST(0) = ST(0) * R_F32((u32)(0x93bac4u));
    /* 0067b94e: fstp dword ptr [0xa9006c] */ W_F32((u32)(0xa9006cu), ST(0)); FPOP();
    /* 0067b954: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b957: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b959: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b95a:; BB(0x0067b95a);
    /* 0067b95a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b95e: fcomp dword ptr [0x93bb2c] */ fx_compare(ST(0), R_F32((u32)(0x93bb2cu))); FPOP();
    /* 0067b964: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b966: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b967: jb 0x67b978 */ if (fC) goto L_0067b978;
L_0067b969:; BB(0x0067b969);
    /* 0067b969: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b96d: fcomp dword ptr [0x93bb28] */ fx_compare(ST(0), R_F32((u32)(0x93bb28u))); FPOP();
    /* 0067b973: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b975: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b976: jbe 0x67b97e */ if ((fC||fZ)) goto L_0067b97e;
L_0067b978:; BB(0x0067b978);
    /* 0067b978: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b97b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b97c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b97d: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b97e:; BB(0x0067b97e);
    /* 0067b97e: mov dword ptr [0xa90074], ebp */ W32((u32)(0xa90074u), r_ebp);
    /* 0067b984: fld dword ptr [0xa90074] */ FPUSH(R_F32((u32)(0xa90074u)));
    /* 0067b98a: fsub dword ptr [0xa90054] */ ST(0) = ST(0) - R_F32((u32)(0xa90054u));
    /* 0067b990: fmul dword ptr [0x93bac4] */ ST(0) = ST(0) * R_F32((u32)(0x93bac4u));
    /* 0067b996: fstp dword ptr [0xa90064] */ W_F32((u32)(0xa90064u), ST(0)); FPOP();
    /* 0067b99c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b99f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b9a0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b9a1: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b9a2:; BB(0x0067b9a2);
    /* 0067b9a2: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b9a6: fcomp dword ptr [0x93bb24] */ fx_compare(ST(0), R_F32((u32)(0x93bb24u))); FPOP();
    /* 0067b9ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b9ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b9af: jb 0x67b9c0 */ if (fC) goto L_0067b9c0;
L_0067b9b1:; BB(0x0067b9b1);
    /* 0067b9b1: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0067b9b5: fcomp dword ptr [0x93bb20] */ fx_compare(ST(0), R_F32((u32)(0x93bb20u))); FPOP();
    /* 0067b9bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067b9bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067b9be: jbe 0x67b9c6 */ if ((fC||fZ)) goto L_0067b9c6;
L_0067b9c0:; BB(0x0067b9c0);
    /* 0067b9c0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b9c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b9c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b9c5: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
L_0067b9c6:; BB(0x0067b9c6);
    /* 0067b9c6: mov dword ptr [0xa90070], ebp */ W32((u32)(0xa90070u), r_ebp);
    /* 0067b9cc: fld dword ptr [0xa90070] */ FPUSH(R_F32((u32)(0xa90070u)));
    /* 0067b9d2: fsub dword ptr [0xa90050] */ ST(0) = ST(0) - R_F32((u32)(0xa90050u));
    /* 0067b9d8: fmul dword ptr [0x93bac4] */ ST(0) = ST(0) * R_F32((u32)(0x93bac4u));
    /* 0067b9de: fstp dword ptr [0xa90060] */ W_F32((u32)(0xa90060u), ST(0)); FPOP();
    /* 0067b9e4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067b9e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067b9e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067b9e9: ret  */ FN_RET(0x0067b85c); r_esp += 4; return;
}

void f_0067b9ec(void) /* sub_67B9EC */
{
    FN_ENTER(0x0067b9ec);
    /* 0067b9ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067b9f0: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067b9f3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067b9f5: fld dword ptr [0xa90050] */ FPUSH(R_F32((u32)(0xa90050u)));
    /* 0067b9fb: fadd dword ptr [ebx + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x9cu));
    /* 0067ba01: fcom dword ptr [0x93bb18] */ fx_compare(ST(0), R_F32((u32)(0x93bb18u))); 
    /* 0067ba07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0067ba09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0067ba0a: jae 0x67ba1a */ if (!fC) goto L_0067ba1a;
L_0067ba0c:; BB(0x0067ba0c);
    /* 0067ba0c: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 0067ba12: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067ba15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067ba16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067ba17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067ba18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067ba19: ret  */ FN_RET(0x0067b9ec); r_esp += 4; return;
L_0067ba1a:; BB(0x0067ba1a);
    /* 0067ba1a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067ba1c: movsx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 0067ba20: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 0067ba24: movsx esi, word ptr [ebx + 0x1e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0067ba28: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 0067ba2c: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067ba2e: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 0067ba31: movzx eax, word ptr [ebx + 0x22] */ r_eax = (u32)R16((u32)(r_ebx+0x22u));
    /* 0067ba35: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0067ba39: mov dword ptr [ebx + 0x9c], 0 */ W32((u32)(r_ebx+0x9cu), 0x0u);
    /* 0067ba43: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067ba45: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067ba48: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0067ba4c: movzx eax, word ptr [ebx + 0x94] */ r_eax = (u32)R16((u32)(r_ebx+0x94u));
    /* 0067ba53: mov word ptr [ebx + 0x98], ax */ W16((u32)(r_ebx+0x98u), (u16)r_eax);
    /* 0067ba5a: movzx eax, word ptr [ebx + 0x96] */ r_eax = (u32)R16((u32)(r_ebx+0x96u));
    /* 0067ba61: mov word ptr [ebx + 0x9a], ax */ W16((u32)(r_ebx+0x9au), (u16)r_eax);
    /* 0067ba68: movzx eax, word ptr [ebx + 0x90] */ r_eax = (u32)R16((u32)(r_ebx+0x90u));
    /* 0067ba6f: mov word ptr [ebx + 0x94], ax */ W16((u32)(r_ebx+0x94u), (u16)r_eax);
    /* 0067ba76: movzx eax, word ptr [ebx + 0x92] */ r_eax = (u32)R16((u32)(r_ebx+0x92u));
    /* 0067ba7d: mov word ptr [ebx + 0x96], ax */ W16((u32)(r_ebx+0x96u), (u16)r_eax);
    /* 0067ba84: movzx eax, word ptr [ebx + 0x8c] */ r_eax = (u32)R16((u32)(r_ebx+0x8cu));
    /* 0067ba8b: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 0067ba92: movzx eax, word ptr [ebx + 0x8e] */ r_eax = (u32)R16((u32)(r_ebx+0x8eu));
    /* 0067ba99: mov word ptr [ebx + 0x92], ax */ W16((u32)(r_ebx+0x92u), (u16)r_eax);
    /* 0067baa0: movzx eax, word ptr [ebx + 0x88] */ r_eax = (u32)R16((u32)(r_ebx+0x88u));
    /* 0067baa7: mov word ptr [ebx + 0x8c], ax */ W16((u32)(r_ebx+0x8cu), (u16)r_eax);
    /* 0067baae: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 0067bab5: mov word ptr [ebx + 0x8e], ax */ W16((u32)(r_ebx+0x8eu), (u16)r_eax);
    /* 0067babc: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 0067bac3: mov word ptr [ebx + 0x88], ax */ W16((u32)(r_ebx+0x88u), (u16)r_eax);
    /* 0067baca: movzx eax, word ptr [ebx + 0x86] */ r_eax = (u32)R16((u32)(r_ebx+0x86u));
    /* 0067bad1: mov word ptr [ebx + 0x8a], ax */ W16((u32)(r_ebx+0x8au), (u16)r_eax);
    /* 0067bad8: movzx eax, word ptr [ebx + 0x80] */ r_eax = (u32)R16((u32)(r_ebx+0x80u));
    /* 0067badf: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 0067bae6: movzx eax, word ptr [ebx + 0x82] */ r_eax = (u32)R16((u32)(r_ebx+0x82u));
    /* 0067baed: mov word ptr [ebx + 0x86], ax */ W16((u32)(r_ebx+0x86u), (u16)r_eax);
    /* 0067baf4: movzx eax, word ptr [ebx + 0x7c] */ r_eax = (u32)R16((u32)(r_ebx+0x7cu));
    /* 0067baf8: mov word ptr [ebx + 0x80], ax */ W16((u32)(r_ebx+0x80u), (u16)r_eax);
    /* 0067baff: movzx eax, word ptr [ebx + 0x7e] */ r_eax = (u32)R16((u32)(r_ebx+0x7eu));
    /* 0067bb03: mov word ptr [ebx + 0x82], ax */ W16((u32)(r_ebx+0x82u), (u16)r_eax);
    /* 0067bb0a: movzx eax, word ptr [ebx + 0x78] */ r_eax = (u32)R16((u32)(r_ebx+0x78u));
    /* 0067bb0e: mov word ptr [ebx + 0x7c], ax */ W16((u32)(r_ebx+0x7cu), (u16)r_eax);
    /* 0067bb12: movzx eax, word ptr [ebx + 0x7a] */ r_eax = (u32)R16((u32)(r_ebx+0x7au));
    /* 0067bb16: mov word ptr [ebx + 0x7e], ax */ W16((u32)(r_ebx+0x7eu), (u16)r_eax);
    /* 0067bb1a: movzx eax, word ptr [ebx + 0x74] */ r_eax = (u32)R16((u32)(r_ebx+0x74u));
    /* 0067bb1e: mov word ptr [ebx + 0x78], ax */ W16((u32)(r_ebx+0x78u), (u16)r_eax);
    /* 0067bb22: movzx eax, word ptr [ebx + 0x76] */ r_eax = (u32)R16((u32)(r_ebx+0x76u));
    /* 0067bb26: mov word ptr [ebx + 0x7a], ax */ W16((u32)(r_ebx+0x7au), (u16)r_eax);
    /* 0067bb2a: movzx eax, word ptr [ebx + 0x70] */ r_eax = (u32)R16((u32)(r_ebx+0x70u));
    /* 0067bb2e: mov word ptr [ebx + 0x74], ax */ W16((u32)(r_ebx+0x74u), (u16)r_eax);
    /* 0067bb32: movzx eax, word ptr [ebx + 0x72] */ r_eax = (u32)R16((u32)(r_ebx+0x72u));
    /* 0067bb36: mov word ptr [ebx + 0x76], ax */ W16((u32)(r_ebx+0x76u), (u16)r_eax);
    /* 0067bb3a: movzx eax, word ptr [ebx + 0x6c] */ r_eax = (u32)R16((u32)(r_ebx+0x6cu));
    /* 0067bb3e: mov word ptr [ebx + 0x70], ax */ W16((u32)(r_ebx+0x70u), (u16)r_eax);
    /* 0067bb42: movzx eax, word ptr [ebx + 0x6e] */ r_eax = (u32)R16((u32)(r_ebx+0x6eu));
    /* 0067bb46: mov word ptr [ebx + 0x72], ax */ W16((u32)(r_ebx+0x72u), (u16)r_eax);
    /* 0067bb4a: movzx eax, word ptr [ebx + 0x68] */ r_eax = (u32)R16((u32)(r_ebx+0x68u));
    /* 0067bb4e: mov word ptr [ebx + 0x6c], ax */ W16((u32)(r_ebx+0x6cu), (u16)r_eax);
    /* 0067bb52: movzx eax, word ptr [ebx + 0x6a] */ r_eax = (u32)R16((u32)(r_ebx+0x6au));
    /* 0067bb56: mov word ptr [ebx + 0x6e], ax */ W16((u32)(r_ebx+0x6eu), (u16)r_eax);
    /* 0067bb5a: movzx eax, word ptr [ebx + 0x64] */ r_eax = (u32)R16((u32)(r_ebx+0x64u));
    /* 0067bb5e: mov word ptr [ebx + 0x68], ax */ W16((u32)(r_ebx+0x68u), (u16)r_eax);
    /* 0067bb62: movzx eax, word ptr [ebx + 0x66] */ r_eax = (u32)R16((u32)(r_ebx+0x66u));
    /* 0067bb66: mov word ptr [ebx + 0x6a], ax */ W16((u32)(r_ebx+0x6au), (u16)r_eax);
    /* 0067bb6a: movzx eax, word ptr [ebx + 0x60] */ r_eax = (u32)R16((u32)(r_ebx+0x60u));
    /* 0067bb6e: mov word ptr [ebx + 0x64], ax */ W16((u32)(r_ebx+0x64u), (u16)r_eax);
    /* 0067bb72: movzx eax, word ptr [ebx + 0x62] */ r_eax = (u32)R16((u32)(r_ebx+0x62u));
    /* 0067bb76: mov word ptr [ebx + 0x66], ax */ W16((u32)(r_ebx+0x66u), (u16)r_eax);
    /* 0067bb7a: movzx eax, word ptr [ebx + 0x5c] */ r_eax = (u32)R16((u32)(r_ebx+0x5cu));
    /* 0067bb7e: mov word ptr [ebx + 0x60], ax */ W16((u32)(r_ebx+0x60u), (u16)r_eax);
    /* 0067bb82: movzx eax, word ptr [ebx + 0x5e] */ r_eax = (u32)R16((u32)(r_ebx+0x5eu));
    /* 0067bb86: mov word ptr [ebx + 0x62], ax */ W16((u32)(r_ebx+0x62u), (u16)r_eax);
    /* 0067bb8a: movzx eax, word ptr [ebx + 0x58] */ r_eax = (u32)R16((u32)(r_ebx+0x58u));
    /* 0067bb8e: mov word ptr [ebx + 0x5c], ax */ W16((u32)(r_ebx+0x5cu), (u16)r_eax);
    /* 0067bb92: movzx eax, word ptr [ebx + 0x5a] */ r_eax = (u32)R16((u32)(r_ebx+0x5au));
    /* 0067bb96: mov word ptr [ebx + 0x5e], ax */ W16((u32)(r_ebx+0x5eu), (u16)r_eax);
    /* 0067bb9a: movzx eax, word ptr [ebx + 0x54] */ r_eax = (u32)R16((u32)(r_ebx+0x54u));
    /* 0067bb9e: mov word ptr [ebx + 0x58], ax */ W16((u32)(r_ebx+0x58u), (u16)r_eax);
    /* 0067bba2: movzx eax, word ptr [ebx + 0x56] */ r_eax = (u32)R16((u32)(r_ebx+0x56u));
    /* 0067bba6: mov word ptr [ebx + 0x5a], ax */ W16((u32)(r_ebx+0x5au), (u16)r_eax);
    /* 0067bbaa: movzx eax, word ptr [ebx + 0x50] */ r_eax = (u32)R16((u32)(r_ebx+0x50u));
    /* 0067bbae: mov word ptr [ebx + 0x54], ax */ W16((u32)(r_ebx+0x54u), (u16)r_eax);
    /* 0067bbb2: movzx eax, word ptr [ebx + 0x52] */ r_eax = (u32)R16((u32)(r_ebx+0x52u));
    /* 0067bbb6: mov word ptr [ebx + 0x56], ax */ W16((u32)(r_ebx+0x56u), (u16)r_eax);
    /* 0067bbba: movzx eax, word ptr [ebx + 0x4c] */ r_eax = (u32)R16((u32)(r_ebx+0x4cu));
    /* 0067bbbe: mov word ptr [ebx + 0x50], ax */ W16((u32)(r_ebx+0x50u), (u16)r_eax);
    /* 0067bbc2: movzx eax, word ptr [ebx + 0x4e] */ r_eax = (u32)R16((u32)(r_ebx+0x4eu));
    /* 0067bbc6: mov word ptr [ebx + 0x52], ax */ W16((u32)(r_ebx+0x52u), (u16)r_eax);
    /* 0067bbca: movzx eax, word ptr [ebx + 0x48] */ r_eax = (u32)R16((u32)(r_ebx+0x48u));
    /* 0067bbce: mov word ptr [ebx + 0x4c], ax */ W16((u32)(r_ebx+0x4cu), (u16)r_eax);
    /* 0067bbd2: movzx eax, word ptr [ebx + 0x4a] */ r_eax = (u32)R16((u32)(r_ebx+0x4au));
    /* 0067bbd6: mov word ptr [ebx + 0x4e], ax */ W16((u32)(r_ebx+0x4eu), (u16)r_eax);
    /* 0067bbda: movzx eax, word ptr [ebx + 0x44] */ r_eax = (u32)R16((u32)(r_ebx+0x44u));
    /* 0067bbde: mov word ptr [ebx + 0x48], ax */ W16((u32)(r_ebx+0x48u), (u16)r_eax);
    /* 0067bbe2: movzx eax, word ptr [ebx + 0x46] */ r_eax = (u32)R16((u32)(r_ebx+0x46u));
    /* 0067bbe6: mov word ptr [ebx + 0x4a], ax */ W16((u32)(r_ebx+0x4au), (u16)r_eax);
    /* 0067bbea: movzx eax, word ptr [ebx + 0x40] */ r_eax = (u32)R16((u32)(r_ebx+0x40u));
    /* 0067bbee: mov word ptr [ebx + 0x44], ax */ W16((u32)(r_ebx+0x44u), (u16)r_eax);
    /* 0067bbf2: movzx eax, word ptr [ebx + 0x42] */ r_eax = (u32)R16((u32)(r_ebx+0x42u));
    /* 0067bbf6: mov word ptr [ebx + 0x46], ax */ W16((u32)(r_ebx+0x46u), (u16)r_eax);
    /* 0067bbfa: movzx eax, word ptr [ebx + 0x3c] */ r_eax = (u32)R16((u32)(r_ebx+0x3cu));
    /* 0067bbfe: mov word ptr [ebx + 0x40], ax */ W16((u32)(r_ebx+0x40u), (u16)r_eax);
    /* 0067bc02: movzx eax, word ptr [ebx + 0x3e] */ r_eax = (u32)R16((u32)(r_ebx+0x3eu));
    /* 0067bc06: mov word ptr [ebx + 0x42], ax */ W16((u32)(r_ebx+0x42u), (u16)r_eax);
    /* 0067bc0a: movzx eax, word ptr [ebx + 0x38] */ r_eax = (u32)R16((u32)(r_ebx+0x38u));
    /* 0067bc0e: mov word ptr [ebx + 0x3c], ax */ W16((u32)(r_ebx+0x3cu), (u16)r_eax);
    /* 0067bc12: movzx eax, word ptr [ebx + 0x3a] */ r_eax = (u32)R16((u32)(r_ebx+0x3au));
    /* 0067bc16: mov word ptr [ebx + 0x3e], ax */ W16((u32)(r_ebx+0x3eu), (u16)r_eax);
    /* 0067bc1a: movzx eax, word ptr [ebx + 0x34] */ r_eax = (u32)R16((u32)(r_ebx+0x34u));
    /* 0067bc1e: mov word ptr [ebx + 0x38], ax */ W16((u32)(r_ebx+0x38u), (u16)r_eax);
    /* 0067bc22: movzx eax, word ptr [ebx + 0x36] */ r_eax = (u32)R16((u32)(r_ebx+0x36u));
    /* 0067bc26: mov word ptr [ebx + 0x3a], ax */ W16((u32)(r_ebx+0x3au), (u16)r_eax);
    /* 0067bc2a: movzx eax, word ptr [ebx + 0x30] */ r_eax = (u32)R16((u32)(r_ebx+0x30u));
    /* 0067bc2e: mov word ptr [ebx + 0x34], ax */ W16((u32)(r_ebx+0x34u), (u16)r_eax);
    /* 0067bc32: movzx eax, word ptr [ebx + 0x32] */ r_eax = (u32)R16((u32)(r_ebx+0x32u));
    /* 0067bc36: mov word ptr [ebx + 0x36], ax */ W16((u32)(r_ebx+0x36u), (u16)r_eax);
    /* 0067bc3a: movzx eax, word ptr [ebx + 0x2c] */ r_eax = (u32)R16((u32)(r_ebx+0x2cu));
    /* 0067bc3e: mov word ptr [ebx + 0x30], ax */ W16((u32)(r_ebx+0x30u), (u16)r_eax);
    /* 0067bc42: movzx eax, word ptr [ebx + 0x2e] */ r_eax = (u32)R16((u32)(r_ebx+0x2eu));
    /* 0067bc46: mov word ptr [ebx + 0x32], ax */ W16((u32)(r_ebx+0x32u), (u16)r_eax);
    /* 0067bc4a: movzx eax, word ptr [ebx + 0x28] */ r_eax = (u32)R16((u32)(r_ebx+0x28u));
    /* 0067bc4e: mov word ptr [ebx + 0x2c], ax */ W16((u32)(r_ebx+0x2cu), (u16)r_eax);
    /* 0067bc52: movzx eax, word ptr [ebx + 0x2a] */ r_eax = (u32)R16((u32)(r_ebx+0x2au));
    /* 0067bc56: mov word ptr [ebx + 0x2e], ax */ W16((u32)(r_ebx+0x2eu), (u16)r_eax);
    /* 0067bc5a: movzx eax, word ptr [ebx + 0x24] */ r_eax = (u32)R16((u32)(r_ebx+0x24u));
    /* 0067bc5e: mov word ptr [ebx + 0x28], ax */ W16((u32)(r_ebx+0x28u), (u16)r_eax);
    /* 0067bc62: movzx eax, word ptr [ebx + 0x26] */ r_eax = (u32)R16((u32)(r_ebx+0x26u));
    /* 0067bc66: mov word ptr [ebx + 0x2a], ax */ W16((u32)(r_ebx+0x2au), (u16)r_eax);
    /* 0067bc6a: movzx eax, word ptr [ebx + 0x20] */ r_eax = (u32)R16((u32)(r_ebx+0x20u));
    /* 0067bc6e: mov word ptr [ebx + 0x24], ax */ W16((u32)(r_ebx+0x24u), (u16)r_eax);
    /* 0067bc72: movzx eax, word ptr [ebx + 0x22] */ r_eax = (u32)R16((u32)(r_ebx+0x22u));
    /* 0067bc76: mov word ptr [ebx + 0x26], ax */ W16((u32)(r_ebx+0x26u), (u16)r_eax);
    /* 0067bc7a: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0067bc7e: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 0067bc82: movzx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)R16((u32)(r_ebx+0x1eu));
    /* 0067bc86: mov word ptr [ebx + 0x22], ax */ W16((u32)(r_ebx+0x22u), (u16)r_eax);
    /* 0067bc8a: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0067bc8f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0067bc91: mov eax, ecx */ r_eax = r_ecx;
    /* 0067bc93: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0067bc96: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0067bc98: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0067bc9b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bc9d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0067bc9f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bca1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067bca4: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0067bca7: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0067bcaa: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bcac: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bcae: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0067bcb1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067bcb3: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0067bcb6: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bcb8: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0067bcbc: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0067bcc0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0067bcc2: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0067bcc7: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0067bccb: movsx edi, word ptr [edx + 0x9ca580] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x9ca580u));
    /* 0067bcd2: movsx edx, word ptr [edx + 0x9ca582] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edx+0x9ca582u));
    /* 0067bcd9: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 0067bcdd: cmp edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bcdf: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 0067bce3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0067bce7: jne 0x67bd08 */ if (!fZ) goto L_0067bd08;
L_0067bce9:; BB(0x0067bce9);
    /* 0067bce9: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0067bced: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0067bcf1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bcf3: jne 0x67bd08 */ if (!fZ) goto L_0067bd08;
L_0067bcf5:; BB(0x0067bcf5);
    /* 0067bcf5: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0067bcfd: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0067bd02: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 0067bd06: jmp 0x67bd16 */ goto L_0067bd16;
L_0067bd08:; BB(0x0067bd08);
    /* 0067bd08: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0067bd10: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0067bd12: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
L_0067bd16:; BB(0x0067bd16);
    /* 0067bd16: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 0067bd1a: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0067bd1e: add edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067bd22: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067bd24: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 0067bd27: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0067bd2a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067bd2c: jl 0x67bd4d */ if ((fS!=fO)) goto L_0067bd4d;
L_0067bd2e:; BB(0x0067bd2e);
    /* 0067bd2e: cmp ebp, 0x16 */ {  u32 a = r_ebp; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bd31: jge 0x67bd4d */ if ((fS==fO)) goto L_0067bd4d;
L_0067bd33:; BB(0x0067bd33);
    /* 0067bd33: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067bd35: jl 0x67bd4d */ if ((fS!=fO)) goto L_0067bd4d;
L_0067bd37:; BB(0x0067bd37);
    /* 0067bd37: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bd3a: jge 0x67bd4d */ if ((fS==fO)) goto L_0067bd4d;
L_0067bd3c:; BB(0x0067bd3c);
    /* 0067bd3c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0067bd3f: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0067bd45: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 0067bd49: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067bd4b: jmp 0x67bd60 */ goto L_0067bd60;
L_0067bd4d:; BB(0x0067bd4d);
    /* 0067bd4d: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 0067bd50: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
    /* 0067bd57: mov esi, 1 */ r_esi = 0x1u;
    /* 0067bd5c: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_0067bd60:; BB(0x0067bd60);
    /* 0067bd60: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067bd64: movsx ebp, word ptr [edi + eax*8 + 0x9ca584] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*8+0x9ca584u));
    /* 0067bd6c: movsx edi, word ptr [edi + eax*8 + 0x9ca586] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*8+0x9ca586u));
    /* 0067bd74: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0067bd78: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0067bd7c: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0067bd80: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bd82: jne 0x67bd9a */ if (!fZ) goto L_0067bd9a;
L_0067bd84:; BB(0x0067bd84);
    /* 0067bd84: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0067bd88: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0067bd8c: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bd8e: jne 0x67bd9a */ if (!fZ) goto L_0067bd9a;
L_0067bd90:; BB(0x0067bd90);
    /* 0067bd90: mov dword ptr [esp + 0x10], 1 */ W32((u32)(r_esp+0x10u), 0x1u);
    /* 0067bd98: jmp 0x67bda2 */ goto L_0067bda2;
L_0067bd9a:; BB(0x0067bd9a);
    /* 0067bd9a: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
L_0067bda2:; BB(0x0067bda2);
    /* 0067bda2: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 0067bda6: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0067bdaa: add edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067bdae: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067bdb0: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 0067bdb3: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0067bdb6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067bdb8: jl 0x67bdd7 */ if ((fS!=fO)) goto L_0067bdd7;
L_0067bdba:; BB(0x0067bdba);
    /* 0067bdba: cmp ebp, 0x16 */ {  u32 a = r_ebp; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bdbd: jge 0x67bdd7 */ if ((fS==fO)) goto L_0067bdd7;
L_0067bdbf:; BB(0x0067bdbf);
    /* 0067bdbf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067bdc1: jl 0x67bdd7 */ if ((fS!=fO)) goto L_0067bdd7;
L_0067bdc3:; BB(0x0067bdc3);
    /* 0067bdc3: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bdc6: jge 0x67bdd7 */ if ((fS==fO)) goto L_0067bdd7;
L_0067bdc8:; BB(0x0067bdc8);
    /* 0067bdc8: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0067bdd0: mov edx, 1 */ r_edx = 0x1u;
    /* 0067bdd5: jmp 0x67bde2 */ goto L_0067bde2;
L_0067bdd7:; BB(0x0067bdd7);
    /* 0067bdd7: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 0067bddf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0067bde2:; BB(0x0067bde2);
    /* 0067bde2: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0067bde6: movsx ebp, word ptr [edi + eax*8 + 0x9ca588] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*8+0x9ca588u));
    /* 0067bdee: movsx eax, word ptr [edi + eax*8 + 0x9ca58a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+r_eax*8+0x9ca58au));
    /* 0067bdf6: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0067bdfa: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bdfc: jne 0x67be10 */ if (!fZ) goto L_0067be10;
L_0067bdfe:; BB(0x0067bdfe);
    /* 0067bdfe: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0067be02: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be04: jne 0x67be10 */ if (!fZ) goto L_0067be10;
L_0067be06:; BB(0x0067be06);
    /* 0067be06: mov dword ptr [esp + 0x14], 1 */ W32((u32)(r_esp+0x14u), 0x1u);
    /* 0067be0e: jmp 0x67be18 */ goto L_0067be18;
L_0067be10:; BB(0x0067be10);
    /* 0067be10: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
L_0067be18:; BB(0x0067be18);
    /* 0067be18: add eax, dword ptr [esp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067be1c: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067be1e: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 0067be21: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0067be24: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067be26: jl 0x67be45 */ if ((fS!=fO)) goto L_0067be45;
L_0067be28:; BB(0x0067be28);
    /* 0067be28: cmp ebp, 0x16 */ {  u32 a = r_ebp; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067be2b: jge 0x67be45 */ if ((fS==fO)) goto L_0067be45;
L_0067be2d:; BB(0x0067be2d);
    /* 0067be2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0067be2f: jl 0x67be45 */ if ((fS!=fO)) goto L_0067be45;
L_0067be31:; BB(0x0067be31);
    /* 0067be31: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067be34: jge 0x67be45 */ if ((fS==fO)) goto L_0067be45;
L_0067be36:; BB(0x0067be36);
    /* 0067be36: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0067be3e: mov edx, 2 */ r_edx = 0x2u;
    /* 0067be43: jmp 0x67be50 */ goto L_0067be50;
L_0067be45:; BB(0x0067be45);
    /* 0067be45: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 0067be4d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0067be50:; BB(0x0067be50);
    /* 0067be50: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be53: je 0x67bf61 */ if (fZ) goto L_0067bf61;
L_0067be59:; BB(0x0067be59);
    /* 0067be59: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be5c: jne 0x67bea6 */ if (!fZ) goto L_0067bea6;
L_0067be5e:; BB(0x0067be5e);
    /* 0067be5e: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0067be62: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067be64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be66: jne 0x67be74 */ if (!fZ) goto L_0067be74;
L_0067be68:; BB(0x0067be68);
    /* 0067be68: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 0067be6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be6e: je 0x67bf91 */ if (fZ) goto L_0067bf91;
L_0067be74:; BB(0x0067be74);
    /* 0067be74: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0067be78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be7a: jne 0x67be88 */ if (!fZ) goto L_0067be88;
L_0067be7c:; BB(0x0067be7c);
    /* 0067be7c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0067be80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be82: je 0x67bf95 */ if (fZ) goto L_0067bf95;
L_0067be88:; BB(0x0067be88);
    /* 0067be88: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067be8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be8e: jne 0x67be9c */ if (!fZ) goto L_0067be9c;
L_0067be90:; BB(0x0067be90);
    /* 0067be90: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0067be94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067be96: je 0x67bf9c */ if (fZ) goto L_0067bf9c;
L_0067be9c:; BB(0x0067be9c);
    /* 0067be9c: mov edx, 0xc */ r_edx = 0xcu;
    /* 0067bea1: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bea6:; BB(0x0067bea6);
    /* 0067bea6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bea8: je 0x67beb1 */ if (fZ) goto L_0067beb1;
L_0067beaa:; BB(0x0067beaa);
    /* 0067beaa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067beac: jmp 0x67bf65 */ goto L_0067bf65;
L_0067beb1:; BB(0x0067beb1);
    /* 0067beb1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x67beb6u); f_008587a5();
    /* 0067beb6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0067beba: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067bebe: fdiv dword ptr [0x93bb0c] */ ST(0) = ST(0) / R_F32((u32)(0x93bb0cu));
    /* 0067bec4: fmul dword ptr [0x93bb10] */ ST(0) = ST(0) * R_F32((u32)(0x93bb10u));
    /* 0067beca: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0067bece: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0067bed3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067bed8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0067bedc: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0067bee0: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067bee4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0067bee8: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0067beec: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067beef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bef1: mov ebp, dword ptr [esp + edx] */ r_ebp = R32((u32)(r_esp+r_edx));
    /* 0067bef4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bef6: jne 0x67bf04 */ if (!fZ) goto L_0067bf04;
L_0067bef8:; BB(0x0067bef8);
    /* 0067bef8: mov ebp, dword ptr [esp + eax*4 + 0xc] */ r_ebp = R32((u32)(r_esp+r_eax*4+0xcu));
    /* 0067befc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067befe: je 0x67bfa3 */ if (fZ) goto L_0067bfa3;
L_0067bf04:; BB(0x0067bf04);
    /* 0067bf04: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bf07: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bf0a: jl 0x67bf0e */ if ((fS!=fO)) goto L_0067bf0e;
L_0067bf0c:; BB(0x0067bf0c);
    /* 0067bf0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0067bf0e:; BB(0x0067bf0e);
    /* 0067bf0e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067bf11: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bf13: mov ebp, dword ptr [esp + edx] */ r_ebp = R32((u32)(r_esp+r_edx));
    /* 0067bf16: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bf18: jne 0x67bf26 */ if (!fZ) goto L_0067bf26;
L_0067bf1a:; BB(0x0067bf1a);
    /* 0067bf1a: mov ebp, dword ptr [esp + eax*4 + 0xc] */ r_ebp = R32((u32)(r_esp+r_eax*4+0xcu));
    /* 0067bf1e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bf20: je 0x67bfb1 */ if (fZ) goto L_0067bfb1;
L_0067bf26:; BB(0x0067bf26);
    /* 0067bf26: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bf29: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bf2c: jl 0x67bf30 */ if ((fS!=fO)) goto L_0067bf30;
L_0067bf2e:; BB(0x0067bf2e);
    /* 0067bf2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0067bf30:; BB(0x0067bf30);
    /* 0067bf30: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067bf33: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bf35: mov ebp, dword ptr [esp + edx] */ r_ebp = R32((u32)(r_esp+r_edx));
    /* 0067bf38: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bf3a: jne 0x67bf44 */ if (!fZ) goto L_0067bf44;
L_0067bf3c:; BB(0x0067bf3c);
    /* 0067bf3c: mov ebp, dword ptr [esp + eax*4 + 0xc] */ r_ebp = R32((u32)(r_esp+r_eax*4+0xcu));
    /* 0067bf40: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067bf42: je 0x67bfbf */ if (fZ) goto L_0067bfbf;
L_0067bf44:; BB(0x0067bf44);
    /* 0067bf44: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bf47: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067bf4a: jl 0x67bf4e */ if ((fS!=fO)) goto L_0067bf4e;
L_0067bf4c:; BB(0x0067bf4c);
    /* 0067bf4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0067bf4e:; BB(0x0067bf4e);
    /* 0067bf4e: movsx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 0067bf52: movsx edx, word ptr [ebx + 0x1e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0067bf56: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0067bf5a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0067bf5c: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0067bf5f: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bf61:; BB(0x0067bf61);
    /* 0067bf61: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067bf63: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0067bf65:; BB(0x0067bf65);
    /* 0067bf65: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 0067bf69: movzx eax, word ptr [edx + ebp + 0x9ca580] */ r_eax = (u32)R16((u32)(r_edx+r_ebp+0x9ca580u));
    /* 0067bf71: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 0067bf75: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067bf77: mov word ptr [ebx + 0x1c], cx */ W16((u32)(r_ebx+0x1cu), (u16)r_ecx);
    /* 0067bf7b: movzx edx, word ptr [edx + ebp + 0x9ca582] */ r_edx = (u32)R16((u32)(r_edx+r_ebp+0x9ca582u));
    /* 0067bf83: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0067bf85: mov word ptr [ebx + 0x1e], si */ W16((u32)(r_ebx+0x1eu), (u16)r_esi);
    /* 0067bf89: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067bf8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067bf8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067bf8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067bf8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0067bf90: ret  */ FN_RET(0x0067b9ec); r_esp += 4; return;
L_0067bf91:; BB(0x0067bf91);
    /* 0067bf91: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0067bf93: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bf95:; BB(0x0067bf95);
    /* 0067bf95: mov edx, 4 */ r_edx = 0x4u;
    /* 0067bf9a: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bf9c:; BB(0x0067bf9c);
    /* 0067bf9c: mov edx, 8 */ r_edx = 0x8u;
    /* 0067bfa1: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bfa3:; BB(0x0067bfa3);
    /* 0067bfa3: movsx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 0067bfa7: movsx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0067bfab: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0067bfaf: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bfb1:; BB(0x0067bfb1);
    /* 0067bfb1: movsx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 0067bfb5: movsx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0067bfb9: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0067bfbd: jmp 0x67bf65 */ goto L_0067bf65;
L_0067bfbf:; BB(0x0067bfbf);
    /* 0067bfbf: movsx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x1cu));
    /* 0067bfc3: movsx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x1eu));
    /* 0067bfc7: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0067bfcb: jmp 0x67bf65 */ goto L_0067bf65;
}

void f_0067bfd0(void) /* sub_67BFD0 */
{
    FN_ENTER(0x0067bfd0);
    /* 0067bfd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067bfd1: sub esp, 0x1d4 */ {  u32 a = r_esp; u32 b = 0x1d4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067bfd7: mov edx, ecx */ r_edx = r_ecx;
    /* 0067bfd9: fld dword ptr [0xa9005c] */ FPUSH(R_F32((u32)(0xa9005cu)));
    /* 0067bfdf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0067bfe2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0067bfe6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0067bfeb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0067bfef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0067bff3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0067bff7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0067bffa: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0067bffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067c000: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0067c002: jle 0x67c4b2 */ if ((fZ||fS!=fO)) goto L_0067c4b2;
L_0067c008:; BB(0x0067c008);
    /* 0067c008: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c00e: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c014: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0067c018: mov esi, edx */ r_esi = r_edx;
    /* 0067c01a: lea ecx, [ebx - 1] */ r_ecx = (u32)(r_ebx+0xffffffffu);
    /* 0067c01d: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0067c021: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0067c025: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0067c029: mov ebp, eax */ r_ebp = r_eax;
L_0067c02b:; BB(0x0067c02b);
    /* 0067c02b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c02d: je 0x67c2d8 */ if (fZ) goto L_0067c2d8;
L_0067c033:; BB(0x0067c033);
    /* 0067c033: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0067c037: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067c039: jne 0x67c1fc */ if (!fZ) goto L_0067c1fc;
L_0067c03f:; BB(0x0067c03f);
    /* 0067c03f: movsx eax, word ptr [esi + ebx*4 + 0x16] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*4+0x16u));
    /* 0067c044: movsx edi, word ptr [esi + ebx*4 + 0x14] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*4+0x14u));
    /* 0067c049: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c04b: je 0x67c067 */ if (fZ) goto L_0067c067;
L_0067c04d:; BB(0x0067c04d);
    /* 0067c04d: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0067c051: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c055: fadd dword ptr [0x93bb04] */ ST(0) = ST(0) + R_F32((u32)(0x93bb04u));
    /* 0067c05b: fmul dword ptr [0x93bb08] */ ST(0) = ST(0) * R_F32((u32)(0x93bb08u));
    /* 0067c061: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c065: jmp 0x67c082 */ goto L_0067c082;
L_0067c067:; BB(0x0067c067);
    /* 0067c067: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067c06a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c06c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c06e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c070: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c072: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c074: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c076: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c07a: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c07e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0067c082:; BB(0x0067c082);
    /* 0067c082: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c086: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0067c088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c08a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c08e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0067c091: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067c093: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067c095: lea ecx, [eax + edi*8] */ r_ecx = (u32)(r_eax+r_edi*8);
    /* 0067c098: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c09c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c0a0: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c0a6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c0a8: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0067c0ac: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x67c0b1u); f_0082dcbc();
    /* 0067c0b1: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067c0b5: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c0bb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67c0c0u); f_0082ddd8();
    /* 0067c0c0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0067c0c2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c0c6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c0c8: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c0cc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c0d0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c0d2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c0d4: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0067c0d8: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0067c0da: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c0dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067c0de: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067c0e4: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c0e6: movsx eax, word ptr [esi + ebx*4 + 0x1a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*4+0x1au));
    /* 0067c0eb: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c0f1: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0067c0f3: movsx edi, word ptr [esi + ebx*4 + 0x18] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+r_ebx*4+0x18u));
    /* 0067c0f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c0fa: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067c0fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c100: fchs  */ ST(0) = -ST(0);
    /* 0067c102: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0067c104: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c106: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0067c108: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c10a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c10c: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c112: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067c114: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c116: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0067c11a: je 0x67c136 */ if (fZ) goto L_0067c136;
L_0067c11c:; BB(0x0067c11c);
    /* 0067c11c: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0067c120: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c124: fadd dword ptr [0x93bb04] */ ST(0) = ST(0) + R_F32((u32)(0x93bb04u));
    /* 0067c12a: fmul dword ptr [0x93bb08] */ ST(0) = ST(0) * R_F32((u32)(0x93bb08u));
    /* 0067c130: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c134: jmp 0x67c151 */ goto L_0067c151;
L_0067c136:; BB(0x0067c136);
    /* 0067c136: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067c139: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c13b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c13d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c13f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c141: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c143: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c145: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c149: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c14d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0067c151:; BB(0x0067c151);
    /* 0067c151: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c155: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c157: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c15b: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0067c15e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067c160: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067c162: lea ecx, [eax + edi*8] */ r_ecx = (u32)(r_eax+r_edi*8);
    /* 0067c165: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c169: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c16d: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c173: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c175: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0067c179: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x67c17eu); f_0082dcbc();
    /* 0067c17e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c182: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c188: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67c18du); f_0082ddd8();
    /* 0067c18d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0067c18f: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c193: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c195: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c199: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c19d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c19f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c1a1: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0067c1a5: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0067c1a7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c1a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067c1ab: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067c1b1: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c1b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c1b5: fchs  */ ST(0) = -ST(0);
    /* 0067c1b7: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0067c1b9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c1bb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0067c1bd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c1bf: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c1c5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067c1c7: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 0067c1cd: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c1d3: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0067c1d5: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0067c1d9: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0067c1db: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0067c1dd: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0067c1df: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c1e3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c1e5: fstp dword ptr [esp + ebx*8 + 0x3c] */ W_F32((u32)(r_esp+r_ebx*8+0x3cu), ST(0)); FPOP();
    /* 0067c1e9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c1eb: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0067c1ed: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c1ef: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0067c1f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c1f3: fstp dword ptr [esp + ebx*8 + 0x40] */ W_F32((u32)(r_esp+r_ebx*8+0x40u), ST(0)); FPOP();
    /* 0067c1f7: jmp 0x67c48c */ goto L_0067c48c;
L_0067c1fc:; BB(0x0067c1fc);
    /* 0067c1fc: movsx eax, word ptr [esi + ebp*4 + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x1eu));
    /* 0067c201: movsx edx, word ptr [esi + ebp*4 + 0x1c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+r_ebp*4+0x1cu));
    /* 0067c206: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0067c20a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c20c: je 0x67c228 */ if (fZ) goto L_0067c228;
L_0067c20e:; BB(0x0067c20e);
    /* 0067c20e: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0067c212: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c216: fadd dword ptr [0x93bb04] */ ST(0) = ST(0) + R_F32((u32)(0x93bb04u));
    /* 0067c21c: fmul dword ptr [0x93bb08] */ ST(0) = ST(0) * R_F32((u32)(0x93bb08u));
    /* 0067c222: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c226: jmp 0x67c243 */ goto L_0067c243;
L_0067c228:; BB(0x0067c228);
    /* 0067c228: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0067c22b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c22d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c22f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c231: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c233: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c235: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c237: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c23b: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c23f: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_0067c243:; BB(0x0067c243);
    /* 0067c243: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c247: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0067c249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c24b: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c24f: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0067c252: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c254: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c256: lea ecx, [eax + ecx*8] */ r_ecx = (u32)(r_eax+r_ecx*8);
    /* 0067c259: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c25d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c261: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c267: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c269: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0067c26d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x67c272u); f_0082dcbc();
    /* 0067c272: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067c276: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c27c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67c281u); f_0082ddd8();
    /* 0067c281: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0067c283: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c287: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c289: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c28d: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c291: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c293: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c295: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0067c299: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0067c29b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c29d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067c29f: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067c2a5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c2a7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c2a9: fchs  */ ST(0) = -ST(0);
    /* 0067c2ab: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0067c2ad: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c2af: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0067c2b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c2b3: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c2b9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067c2bb: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c2c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c2c3: fstp dword ptr [esp + edi*4 + 0x44] */ W_F32((u32)(r_esp+r_edi*4+0x44u), ST(0)); FPOP();
    /* 0067c2c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c2c9: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0067c2cb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c2cd: fstp dword ptr [esp + edi*4 + 0x48] */ W_F32((u32)(r_esp+r_edi*4+0x48u), ST(0)); FPOP();
    /* 0067c2d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c2d3: jmp 0x67c48c */ goto L_0067c48c;
L_0067c2d8:; BB(0x0067c2d8);
    /* 0067c2d8: movsx eax, word ptr [esi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x1eu));
    /* 0067c2dc: movsx edi, word ptr [esi + 0x1c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x1cu));
    /* 0067c2e0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c2e2: je 0x67c2fe */ if (fZ) goto L_0067c2fe;
L_0067c2e4:; BB(0x0067c2e4);
    /* 0067c2e4: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0067c2e8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c2ec: fadd dword ptr [0x93bb04] */ ST(0) = ST(0) + R_F32((u32)(0x93bb04u));
    /* 0067c2f2: fmul dword ptr [0x93bb08] */ ST(0) = ST(0) * R_F32((u32)(0x93bb08u));
    /* 0067c2f8: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c2fc: jmp 0x67c319 */ goto L_0067c319;
L_0067c2fe:; BB(0x0067c2fe);
    /* 0067c2fe: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067c301: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c303: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c305: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c307: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c309: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c30b: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c30d: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c311: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c315: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0067c319:; BB(0x0067c319);
    /* 0067c319: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c31d: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0067c31f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c321: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c325: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0067c328: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067c32a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067c32c: lea ecx, [eax + edi*8] */ r_ecx = (u32)(r_eax+r_edi*8);
    /* 0067c32f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c333: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c337: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c33d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c33f: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067c343: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x67c348u); f_0082dcbc();
    /* 0067c348: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0067c34c: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c352: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67c357u); f_0082ddd8();
    /* 0067c357: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0067c359: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c35d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c35f: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0067c363: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0067c367: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c369: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c36b: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c36f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0067c371: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c373: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067c375: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067c37b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c37d: movsx eax, word ptr [esi + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x22u));
    /* 0067c381: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c387: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0067c389: movsx edi, word ptr [esi + 0x20] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0067c38d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c38f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0067c393: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c395: fchs  */ ST(0) = -ST(0);
    /* 0067c397: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0067c399: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c39b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0067c39d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c39f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0067c3a1: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c3a7: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067c3a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0067c3ab: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0067c3af: je 0x67c3cb */ if (fZ) goto L_0067c3cb;
L_0067c3b1:; BB(0x0067c3b1);
    /* 0067c3b1: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0067c3b5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c3b9: fadd dword ptr [0x93bb04] */ ST(0) = ST(0) + R_F32((u32)(0x93bb04u));
    /* 0067c3bf: fmul dword ptr [0x93bb08] */ ST(0) = ST(0) * R_F32((u32)(0x93bb08u));
    /* 0067c3c5: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c3c9: jmp 0x67c3e6 */ goto L_0067c3e6;
L_0067c3cb:; BB(0x0067c3cb);
    /* 0067c3cb: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 0067c3ce: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3d0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3d2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3d4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3d6: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3d8: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0067c3da: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c3de: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c3e2: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_0067c3e6:; BB(0x0067c3e6);
    /* 0067c3e6: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c3ea: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c3ec: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0067c3f0: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0067c3f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0067c3f5: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0067c3f7: lea ecx, [eax + edi*8] */ r_ecx = (u32)(r_eax+r_edi*8);
    /* 0067c3fa: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 0067c3fe: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0067c402: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c408: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0067c40a: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0067c40e: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x67c413u); f_0082dcbc();
    /* 0067c413: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0067c417: mov ecx, dword ptr [0xa90058] */ r_ecx = R32((u32)(0xa90058u));
    /* 0067c41d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67c422u); f_0082ddd8();
    /* 0067c422: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0067c424: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0067c428: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c42a: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c42e: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0067c432: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c434: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c436: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0067c43a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0067c43c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c43e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0067c440: fld dword ptr [0xa90054] */ FPUSH(R_F32((u32)(0xa90054u)));
    /* 0067c446: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0067c448: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c44a: fchs  */ ST(0) = -ST(0);
    /* 0067c44c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0067c44e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c450: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0067c452: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c454: fld dword ptr [0x93bb00] */ FPUSH(R_F32((u32)(0x93bb00u)));
    /* 0067c45a: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0067c45c: fld dword ptr [esi + 0x9c] */ FPUSH(R_F32((u32)(r_esi+0x9cu)));
    /* 0067c462: fld dword ptr [0x93bafc] */ FPUSH(R_F32((u32)(0x93bafcu)));
    /* 0067c468: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0067c46a: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0067c46e: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0067c470: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0067c472: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0067c474: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0067c478: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0067c47a: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0067c47e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0067c480: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0067c482: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0067c484: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0067c486: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0067c488: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
L_0067c48c:; BB(0x0067c48c);
    /* 0067c48c: mov dword ptr [esp + ebp*4 + 0x144], 0x20ffffff */ W32((u32)(r_esp+r_ebp*4+0x144u), 0x20ffffffu);
    /* 0067c497: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0067c49a: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067c49c: jl 0x67c02b */ if ((fS!=fO)) goto L_0067c02b;
L_0067c4a2:; BB(0x0067c4a2);
    /* 0067c4a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067c4a4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0067c4a6: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0067c4aa: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 0067c4ae: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0067c4b2:; BB(0x0067c4b2);
    /* 0067c4b2: mov dword ptr [esp + 0x1cc], 0 */ W32((u32)(r_esp+0x1ccu), 0x0u);
    /* 0067c4bd: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0067c4c1: mov dword ptr [esp + 0x1c4], eax */ W32((u32)(r_esp+0x1c4u), r_eax);
    /* 0067c4c8: lea edx, [esp + 0x144] */ r_edx = (u32)(r_esp+0x144u);
    /* 0067c4cf: mov dword ptr [esp + 0x1c8], edx */ W32((u32)(r_esp+0x1c8u), r_edx);
    /* 0067c4d6: mov dword ptr [esp + 0x1d0], ebx */ W32((u32)(r_esp+0x1d0u), r_ebx);
    /* 0067c4dd: lea ecx, [esp + 0x1c4] */ r_ecx = (u32)(r_esp+0x1c4u);
    /* 0067c4e4: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4e6: push 0xc2ea0000 */ { u32 v = 0xc2ea0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0067c4ed: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x67c4f2u); f_0082b558();
    /* 0067c4f2: add esp, 0x1e4 */ {  u32 a = r_esp; u32 b = 0x1e4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067c4f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067c4f9: ret  */ FN_RET(0x0067bfd0); r_esp += 4; return;
}

