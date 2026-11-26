#include "protos.h"

void f_0040d120(void)
{
    FN_ENTER(0x0040d120);
    goto L_0040d120;
L_0040d0da:; BB(0x0040d0da);
    /* 0040d0da: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d0dd: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0040d0e0: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0040d0e3: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0040d0e6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0040d0e8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0040d0eb: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040d0ed: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0040d0f0: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
L_0040d0f3:; BB(0x0040d0f3);
    /* 0040d0f3: fld dword ptr [0x8fa1cc] */ FPUSH(R_F32((u32)(0x8fa1ccu)));
    /* 0040d0f9: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0040d0fc: fadd dword ptr [0x8fa1d0] */ ST(0) = ST(0) + R_F32((u32)(0x8fa1d0u));
    /* 0040d102: lea ebx, [edi + esi] */ r_ebx = (u32)(r_edi+r_esi);
    /* 0040d105: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0040d108: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0040d10b: fmul dword ptr [0x8fa1d4] */ ST(0) = ST(0) * R_F32((u32)(0x8fa1d4u));
    /* 0040d111: fadd dword ptr [0x8fa1d8] */ ST(0) = ST(0) + R_F32((u32)(0x8fa1d8u));
    /* 0040d117: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d119: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0040d11c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d11e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0040d120:; BB(0x0040d120);
    /* 0040d120: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0040d123: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d125: fstp dword ptr [edx + eax + 0xa0] */ W_F32((u32)(r_edx+r_eax+0xa0u), ST(0)); FPOP();
    /* 0040d12c: fstp dword ptr [edx + eax + 0xa4] */ W_F32((u32)(r_edx+r_eax+0xa4u), ST(0)); FPOP();
    /* 0040d133: lea ecx, [eax + edx + 0xa0] */ r_ecx = (u32)(r_eax+r_edx+0xa0u);
    /* 0040d13a: mov dword ptr [edx + eax + 0xa8], 0x3dcccccd */ W32((u32)(r_edx+r_eax+0xa8u), 0x3dcccccdu);
    /* 0040d145: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d146: call 0x50a0ec */ r_esp -= 4; W32(r_esp, 0x40d14bu); f_0050a0ec();
    /* 0040d14b: mov edx, eax */ r_edx = r_eax;
    /* 0040d14d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d150: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0040d153: mov dword ptr [eax + ebx*4 + 0x20], edx */ W32((u32)(r_eax+r_ebx*4+0x20u), r_edx);
    /* 0040d157: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d15a: mov ecx, dword ptr [eax + edx*2 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*2+0x20u));
    /* 0040d15e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d160: je 0x40d16f */ if (fZ) goto L_0040d16f;
L_0040d162:; BB(0x0040d162);
    /* 0040d162: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d167: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x40d16cu); f_00508efc();
    /* 0040d16c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
L_0040d16f:; BB(0x0040d16f);
    /* 0040d16f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d172: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d175: jl 0x40d0f3 */ if ((fS!=fO)) goto L_0040d0f3;
L_0040d17b:; BB(0x0040d17b);
    /* 0040d17b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d17e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d181: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0040d184: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d187: jl 0x40d0da */ if ((fS!=fO)) goto L_0040d0da;
L_0040d18d:; BB(0x0040d18d);
    /* 0040d18d: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040d190: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d193: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d196: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d199: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d1a0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d1a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d1a3: ret 8 */ FN_RET(0x0040d120); r_esp += 12; return;
}

void f_0040d234(void) /* sub_40D234 */
{
    FN_ENTER(0x0040d234);
    /* 0040d234: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d235: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d238: mov edx, ecx */ r_edx = r_ecx;
    /* 0040d23a: mov eax, dword ptr [edx + 0x220] */ r_eax = R32((u32)(r_edx+0x220u));
    /* 0040d240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d242: jne 0x40d32a */ if (!fZ) goto L_0040d32a;
L_0040d248:; BB(0x0040d248);
    /* 0040d248: mov eax, dword ptr [edx + 0x224] */ r_eax = R32((u32)(r_edx+0x224u));
    /* 0040d24e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d251: cmp eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d256: jle 0x40d266 */ if ((fZ||fS!=fO)) goto L_0040d266;
L_0040d258:; BB(0x0040d258);
    /* 0040d258: mov dword ptr [edx + 0x224], 0 */ W32((u32)(r_edx+0x224u), 0x0u);
    /* 0040d262: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d264: jmp 0x40d26c */ goto L_0040d26c;
L_0040d266:; BB(0x0040d266);
    /* 0040d266: mov dword ptr [edx + 0x224], eax */ W32((u32)(r_edx+0x224u), r_eax);
L_0040d26c:; BB(0x0040d26c);
    /* 0040d26c: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0040d26f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0040d271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040d273: jle 0x40d32a */ if ((fZ||fS!=fO)) goto L_0040d32a;
L_0040d279:; BB(0x0040d279);
    /* 0040d279: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0040d27d: mov esi, edx */ r_esi = r_edx;
    /* 0040d27f: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0040d282: mov edx, ecx */ r_edx = r_ecx;
    /* 0040d284: jmp 0x40d28c */ goto L_0040d28c;
L_0040d286:; BB(0x0040d286);
    /* 0040d286: mov eax, dword ptr [esi + 0x224] */ r_eax = R32((u32)(r_esi+0x224u));
L_0040d28c:; BB(0x0040d28c);
    /* 0040d28c: lea ecx, [ebx + ebx*4] */ r_ecx = (u32)(r_ebx+r_ebx*4);
    /* 0040d28f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d291: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 0040d294: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d296: jle 0x40d2e4 */ if ((fZ||fS!=fO)) goto L_0040d2e4;
L_0040d298:; BB(0x0040d298);
    /* 0040d298: lea edi, [ecx + ecx + 0x28] */ r_edi = (u32)(r_ecx+r_ecx+0x28u);
    /* 0040d29c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d29e: jge 0x40d2e4 */ if ((fS==fO)) goto L_0040d2e4;
L_0040d2a0:; BB(0x0040d2a0);
    /* 0040d2a0: mov ecx, dword ptr [esi + ebx*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x20u));
    /* 0040d2a4: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0040d2a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d2a9: je 0x40d31d */ if (fZ) goto L_0040d31d;
L_0040d2ab:; BB(0x0040d2ab);
    /* 0040d2ab: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x40d2b0u); f_00509580();
    /* 0040d2b0: fld dword ptr [0x8fa1a4] */ FPUSH(R_F32((u32)(0x8fa1a4u)));
    /* 0040d2b6: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0040d2b9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d2bb: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0040d2be: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d2c0: fadd dword ptr [ecx + esi + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_esi+0xa0u));
    /* 0040d2c7: lea eax, [esi + ecx + 0xa0] */ r_eax = (u32)(r_esi+r_ecx+0xa0u);
    /* 0040d2ce: fstp dword ptr [ecx + esi + 0xa0] */ W_F32((u32)(r_ecx+r_esi+0xa0u), ST(0)); FPOP();
    /* 0040d2d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d2d6: mov ecx, dword ptr [esi + edi*2 + 0x20] */ r_ecx = R32((u32)(r_esi+r_edi*2+0x20u));
    /* 0040d2da: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x40d2dfu); f_00508db8();
    /* 0040d2df: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0040d2e2: jmp 0x40d31d */ goto L_0040d31d;
L_0040d2e4:; BB(0x0040d2e4);
    /* 0040d2e4: mov ecx, dword ptr [esi + ebx*4 + 0x20] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x20u));
    /* 0040d2e8: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0040d2eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d2ed: je 0x40d31d */ if (fZ) goto L_0040d31d;
L_0040d2ef:; BB(0x0040d2ef);
    /* 0040d2ef: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x40d2f4u); f_00508f48();
    /* 0040d2f4: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0040d2f7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d2f9: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0040d2fc: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d2fe: lea eax, [esi + ecx + 0xa0] */ r_eax = (u32)(r_esi+r_ecx+0xa0u);
    /* 0040d305: mov dword ptr [ecx + esi + 0xa0], 0 */ W32((u32)(r_ecx+r_esi+0xa0u), 0x0u);
    /* 0040d310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d311: mov ecx, dword ptr [esi + edi*2 + 0x20] */ r_ecx = R32((u32)(r_esi+r_edi*2+0x20u));
    /* 0040d315: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x40d31au); f_00508db8();
    /* 0040d31a: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
L_0040d31d:; BB(0x0040d31d);
    /* 0040d31d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040d320: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d322: jl 0x40d286 */ if ((fS!=fO)) goto L_0040d286;
L_0040d328:; BB(0x0040d328);
    /* 0040d328: jmp 0x40d32f */ goto L_0040d32f;
L_0040d32a:; BB(0x0040d32a);
    /* 0040d32a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040d32d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d32e: ret  */ FN_RET(0x0040d234); r_esp += 4; return;
L_0040d32f:; BB(0x0040d32f);
    /* 0040d32f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0040d333: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0040d336: jmp 0x40d32a */ goto L_0040d32a;
}

void f_0040d338(void) /* sub_40D338 */
{
    FN_ENTER(0x0040d338);
    /* 0040d338: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d339: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d33b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d33d: push 0x8cc7a4 */ { u32 v = 0x8cc7a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d342: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d348: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d349: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040d350: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d353: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040d356: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040d359: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040d35c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040d35f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040d362: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040d365: mov eax, ecx */ r_eax = r_ecx;
    /* 0040d367: mov dword ptr [eax], 0xaf2ae0 */ W32((u32)(r_eax), 0xaf2ae0u);
    /* 0040d36d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040d36f: mov dword ptr [0xa3ae0c], edx */ W32((u32)(0xa3ae0cu), r_edx);
    /* 0040d375: mov dword ptr [0xa3ae10], edx */ W32((u32)(0xa3ae10u), r_edx);
    /* 0040d37b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040d382: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40d387u); f_008171e8();
    /* 0040d387: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040d38a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040d38c: jne 0x40d39e */ if (!fZ) goto L_0040d39e;
L_0040d38e:; BB(0x0040d38e);
    /* 0040d38e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d391: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d398: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d39a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d39b: ret 4 */ FN_RET(0x0040d338); r_esp += 8; return;
L_0040d39e:; BB(0x0040d39e);
    /* 0040d39e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d3a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d3a2: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40d3a7u); f_005c2f74();
    /* 0040d3a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040d3a8: jmp 0x40d38e */ goto L_0040d38e;
}

void f_0040d3ac(void) /* sub_40D3AC */
{
    FN_ENTER(0x0040d3ac);
    /* 0040d3ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040d3ad: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d3b3: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d3b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040d3ba: jl 0x40d3c0 */ if ((fS!=fO)) goto L_0040d3c0;
L_0040d3bc:; BB(0x0040d3bc);
    /* 0040d3bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040d3bd: ret 4 */ FN_RET(0x0040d3ac); r_esp += 8; return;
L_0040d3c0:; BB(0x0040d3c0);
    /* 0040d3c0: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d3c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3c5: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3cb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3cd: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0040d3cf: mov dword ptr [ecx + edx*4 + 0x1c], edi */ W32((u32)(r_ecx+r_edx*4+0x1cu), r_edi);
    /* 0040d3d3: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d3d9: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d3dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3de: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3e4: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3e6: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0040d3e9: mov dword ptr [ecx + edx*4 + 0x20], edi */ W32((u32)(r_ecx+r_edx*4+0x20u), r_edi);
    /* 0040d3ed: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d3f3: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d3f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3f8: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3fc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d3fe: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d400: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0040d403: mov dword ptr [ecx + edx*4 + 0x24], edi */ W32((u32)(r_ecx+r_edx*4+0x24u), r_edi);
    /* 0040d407: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d40d: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d410: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d412: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d414: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d416: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d418: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d41a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0040d41d: mov dword ptr [ecx + edx*4 + 0x28], edi */ W32((u32)(r_ecx+r_edx*4+0x28u), r_edi);
    /* 0040d421: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d427: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d42a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d42c: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d42e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d430: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d432: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d434: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 0040d437: mov dword ptr [ecx + edx*4 + 0x2c], edi */ W32((u32)(r_ecx+r_edx*4+0x2cu), r_edi);
    /* 0040d43b: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d441: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d444: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d446: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d448: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d44a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d44c: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d44e: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 0040d451: mov dword ptr [ecx + edx*4 + 0x30], edi */ W32((u32)(r_ecx+r_edx*4+0x30u), r_edi);
    /* 0040d455: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d45b: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d45e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d460: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d462: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d464: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d466: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d468: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0040d46b: mov dword ptr [ecx + edx*4 + 0x34], edi */ W32((u32)(r_ecx+r_edx*4+0x34u), r_edi);
    /* 0040d46f: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d475: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d478: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d47a: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d47c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d47e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d480: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d482: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 0040d485: mov dword ptr [ecx + edx*4 + 0x38], edi */ W32((u32)(r_ecx+r_edx*4+0x38u), r_edi);
    /* 0040d489: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d48f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d492: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d494: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d496: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d498: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d49a: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d49c: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 0040d49f: mov dword ptr [ecx + edx*4 + 0x3c], edi */ W32((u32)(r_ecx+r_edx*4+0x3cu), r_edi);
    /* 0040d4a3: mov edx, dword ptr [ecx + 0x150] */ r_edx = R32((u32)(r_ecx+0x150u));
    /* 0040d4a9: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0040d4ac: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d4ae: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040d4b0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d4b2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040d4b4: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040d4b6: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0040d4b9: mov dword ptr [ecx + edi*4 + 0x40], edx */ W32((u32)(r_ecx+r_edi*4+0x40u), r_edx);
    /* 0040d4bd: mov edi, dword ptr [ecx + 0x150] */ r_edi = R32((u32)(r_ecx+0x150u));
    /* 0040d4c3: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 0040d4c6: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0040d4c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4cb: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4cd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4d1: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4d3: mov dword ptr [ecx + edx*4 + 0x44], eax */ W32((u32)(r_ecx+r_edx*4+0x44u), r_eax);
    /* 0040d4d7: mov eax, dword ptr [ecx + 0x150] */ r_eax = R32((u32)(r_ecx+0x150u));
    /* 0040d4dd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0040d4e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4e2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4e8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d4ea: mov eax, dword ptr [ecx + edx*4 + 0x44] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x44u));
    /* 0040d4ee: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040d4f1: mov dword ptr [ecx + edx*4 + 0x44], eax */ W32((u32)(r_ecx+r_edx*4+0x44u), r_eax);
    /* 0040d4f5: mov eax, dword ptr [ecx + 0x150] */ r_eax = R32((u32)(r_ecx+0x150u));
    /* 0040d4fb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0040d4fe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d500: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d502: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d504: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d506: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d508: mov eax, dword ptr [ecx + edx*4 + 0x44] */ r_eax = R32((u32)(r_ecx+r_edx*4+0x44u));
    /* 0040d50c: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040d50f: mov dword ptr [ecx + edx*4 + 0x44], eax */ W32((u32)(r_ecx+r_edx*4+0x44u), r_eax);
    /* 0040d513: add dword ptr [ecx + 0x150], 1 */ { u32 ad = (u32)(r_ecx+0x150u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040d51a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040d51b: ret 4 */ FN_RET(0x0040d3ac); r_esp += 8; return;
}

void f_0040d520(void) /* sub_40D520 */
{
    FN_ENTER(0x0040d520);
    /* 0040d520: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d521: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d523: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d525: push 0x8cc7cc */ { u32 v = 0x8cc7ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d52a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d530: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d531: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040d538: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d53b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040d53e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0040d541: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0040d544: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0040d547: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d549: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0040d54c:; BB(0x0040d54c);
    /* 0040d54c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d54f: mov edx, dword ptr [eax*4 + 0xa3ae0c] */ r_edx = R32((u32)(r_eax*4+0xa3ae0cu));
    /* 0040d556: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040d558: je 0x40d571 */ if (fZ) goto L_0040d571;
L_0040d55a:; BB(0x0040d55a);
    /* 0040d55a: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d55d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d560: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d563: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d566: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d56d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d56f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d570: ret  */ FN_RET(0x0040d520); r_esp += 4; return;
L_0040d571:; BB(0x0040d571);
    /* 0040d571: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040d578: push 0x170 */ { u32 v = 0x170u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d57d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40d582u); f_005caba4();
    /* 0040d582: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d585: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d588: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040d58b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d58d: je 0x40d655 */ if (fZ) goto L_0040d655;
L_0040d593:; BB(0x0040d593);
    /* 0040d593: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0040d59a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d5a1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040d5a4: mov ecx, eax */ r_ecx = r_eax;
    /* 0040d5a6: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40d5abu); f_008193cc();
    /* 0040d5ab: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d5ae: mov dword ptr [edx], 0xaf2ae0 */ W32((u32)(r_edx), 0xaf2ae0u);
    /* 0040d5b4: mov eax, dword ptr [0x9a3150] */ r_eax = R32((u32)(0x9a3150u));
    /* 0040d5b9: mov dword ptr [edx + 0x150], 0 */ W32((u32)(r_edx+0x150u), 0x0u);
    /* 0040d5c3: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040d5c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0040d5c8:; BB(0x0040d5c8);
    /* 0040d5c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040d5cb: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0040d5ce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5d0: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5d2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5d4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5d6: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5d8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5da: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d5dc: lea ebx, [eax + edx + 0x1c] */ r_ebx = (u32)(r_eax+r_edx+0x1cu);
    /* 0040d5e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d5e2: mov dword ptr [ebx], ecx */ W32((u32)(r_ebx), r_ecx);
    /* 0040d5e4: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0040d5e7: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 0040d5ea: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 0040d5ed: mov dword ptr [ebx + 0x10], ecx */ W32((u32)(r_ebx+0x10u), r_ecx);
    /* 0040d5f0: mov dword ptr [ebx + 0x14], ecx */ W32((u32)(r_ebx+0x14u), r_ecx);
    /* 0040d5f3: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 0040d5f6: mov dword ptr [ebx + 0x1c], ecx */ W32((u32)(r_ebx+0x1cu), r_ecx);
    /* 0040d5f9: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 0040d5fc: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 0040d5ff: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 0040d602: mov dword ptr [eax + esi*4 + 0x154], 0 */ W32((u32)(r_eax+r_esi*4+0x154u), 0x0u);
    /* 0040d60d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040d610: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d613: jl 0x40d5c8 */ if ((fS!=fO)) goto L_0040d5c8;
L_0040d615:; BB(0x0040d615);
    /* 0040d615: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0040d61c:; BB(0x0040d61c);
    /* 0040d61c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040d61f: mov dword ptr [edx*4 + 0xa3ae0c], eax */ W32((u32)(r_edx*4+0xa3ae0cu), r_eax);
    /* 0040d626: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040d62d: mov eax, edx */ r_eax = r_edx;
    /* 0040d62f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040d632: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0040d635: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d638: jl 0x40d54c */ if ((fS!=fO)) goto L_0040d54c;
L_0040d63e:; BB(0x0040d63e);
    /* 0040d63e: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d641: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d644: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040d647: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d64a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d651: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d653: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d654: ret  */ FN_RET(0x0040d520); r_esp += 4; return;
L_0040d655:; BB(0x0040d655);
    /* 0040d655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d657: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040d65a: jmp 0x40d61c */ goto L_0040d61c;
}

void f_0040d65c(void) /* sub_40D65C */
{
    FN_ENTER(0x0040d65c);
    /* 0040d65c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040d65d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040d65e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d65f: mov eax, ecx */ r_eax = r_ecx;
    /* 0040d661: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d663: lea edx, [eax + 0x44] */ r_edx = (u32)(r_eax+0x44u);
    /* 0040d666: mov ebx, eax */ r_ebx = r_eax;
L_0040d668:; BB(0x0040d668);
    /* 0040d668: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 0040d66a: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d670: je 0x40d6e5 */ if (fZ) goto L_0040d6e5;
L_0040d672:; BB(0x0040d672);
    /* 0040d672: mov eax, dword ptr [ebx + ecx*4 + 0x154] */ r_eax = R32((u32)(r_ebx+r_ecx*4+0x154u));
    /* 0040d679: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0040d67c: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040d67f: jl 0x40d692 */ if ((fS!=fO)) goto L_0040d692;
L_0040d681:; BB(0x0040d681);
    /* 0040d681: mov eax, dword ptr [edx - 0x20] */ r_eax = R32((u32)(r_edx+0xffffffe0u));
    /* 0040d684: and edi, 0xfffffffd */ {  u32 a = r_edi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0040d687: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0040d689: mov dword ptr [edx - 0x18], eax */ W32((u32)(r_edx+0xffffffe8u), r_eax);
    /* 0040d68c: mov eax, dword ptr [edx - 0x1c] */ r_eax = R32((u32)(r_edx+0xffffffe4u));
    /* 0040d68f: mov dword ptr [edx - 0x14], eax */ W32((u32)(r_edx+0xffffffecu), r_eax);
L_0040d692:; BB(0x0040d692);
    /* 0040d692: fld dword ptr [0x8fa1f0] */ FPUSH(R_F32((u32)(0x8fa1f0u)));
    /* 0040d698: fadd dword ptr [edx - 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xfffffffcu));
    /* 0040d69b: fld dword ptr [0x8fa1f8] */ FPUSH(R_F32((u32)(0x8fa1f8u)));
    /* 0040d6a1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040d6a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040d6a5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040d6a6: ja 0x40d6aa */ if ((!fC&&!fZ)) goto L_0040d6aa;
L_0040d6a8:; BB(0x0040d6a8);
    /* 0040d6a8: fst st(1) */ ST(1) = ST(0);
L_0040d6aa:; BB(0x0040d6aa);
    /* 0040d6aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040d6ac: fstp dword ptr [edx - 4] */ W_F32((u32)(r_edx+0xfffffffcu), ST(0)); FPOP();
    /* 0040d6af: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d6b5: je 0x40d6dd */ if (fZ) goto L_0040d6dd;
L_0040d6b7:; BB(0x0040d6b7);
    /* 0040d6b7: fld dword ptr [0x8fa1f4] */ FPUSH(R_F32((u32)(0x8fa1f4u)));
    /* 0040d6bd: fld dword ptr [edx - 0x20] */ FPUSH(R_F32((u32)(r_edx+0xffffffe0u)));
    /* 0040d6c0: fsub dword ptr [edx - 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xffffffd8u));
    /* 0040d6c3: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0040d6c5: fadd dword ptr [edx - 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xffffffe8u));
    /* 0040d6c8: fld dword ptr [edx - 0x1c] */ FPUSH(R_F32((u32)(r_edx+0xffffffe4u)));
    /* 0040d6cb: fsub dword ptr [edx - 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xffffffdcu));
    /* 0040d6ce: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0040d6d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040d6d2: fadd dword ptr [edx - 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xffffffecu));
    /* 0040d6d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040d6d7: fstp dword ptr [edx - 0x18] */ W_F32((u32)(r_edx+0xffffffe8u), ST(0)); FPOP();
    /* 0040d6da: fstp dword ptr [edx - 0x14] */ W_F32((u32)(r_edx+0xffffffecu), ST(0)); FPOP();
L_0040d6dd:; BB(0x0040d6dd);
    /* 0040d6dd: add dword ptr [ebx + esi*2 + 0x154], 1 */ { u32 ad = (u32)(r_ebx+r_esi*2+0x154u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0040d6e5:; BB(0x0040d6e5);
    /* 0040d6e5: add edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040d6e8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d6eb: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040d6ee: jl 0x40d668 */ if ((fS!=fO)) goto L_0040d668;
L_0040d6f4:; BB(0x0040d6f4);
    /* 0040d6f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d6f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040d6f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040d6f7: ret  */ FN_RET(0x0040d65c); r_esp += 4; return;
}

void f_0040d6f8(void) /* sub_40D6F8 */
{
    FN_ENTER(0x0040d6f8);
    /* 0040d6f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d6f9: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d6fc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040d6fe: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040d703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d705: jne 0x40d70c */ if (!fZ) goto L_0040d70c;
L_0040d707:; BB(0x0040d707);
    /* 0040d707: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040d70a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d70b: ret  */ FN_RET(0x0040d6f8); r_esp += 4; return;
L_0040d70c:; BB(0x0040d70c);
    /* 0040d70c: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d70e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d710: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40d715u); f_0082acfc();
    /* 0040d715: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040d717: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d719: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40d71eu); f_0082acfc();
    /* 0040d71e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d721: mov eax, dword ptr [ebx + 0x150] */ r_eax = R32((u32)(r_ebx+0x150u));
    /* 0040d727: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040d729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0040d72b: jbe 0x40d859 */ if ((fC||fZ)) goto L_0040d859;
L_0040d731:; BB(0x0040d731);
    /* 0040d731: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 0040d735: mov esi, ebx */ r_esi = r_ebx;
    /* 0040d737: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0040d73b: mov dword ptr [esp + 0x58], ebp */ W32((u32)(r_esp+0x58u), r_ebp);
    /* 0040d73f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0040d742: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d744: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d746: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d748: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d74a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d74c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d74e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d750: lea ecx, [ebx + ecx + 0x44] */ r_ecx = (u32)(r_ebx+r_ecx+0x44u);
    /* 0040d754: mov ebp, edx */ r_ebp = r_edx;
    /* 0040d756: mov ebx, ecx */ r_ebx = r_ecx;
L_0040d758:; BB(0x0040d758);
    /* 0040d758: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 0040d75a: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d760: je 0x40d83f */ if (fZ) goto L_0040d83f;
L_0040d766:; BB(0x0040d766);
    /* 0040d766: fld dword ptr [ebx - 4] */ FPUSH(R_F32((u32)(r_ebx+0xfffffffcu)));
    /* 0040d769: fmul dword ptr [0x8fa1ec] */ ST(0) = ST(0) * R_F32((u32)(0x8fa1ecu));
    /* 0040d76f: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 0040d773: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0040d778: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040d77d: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0040d781: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 0040d785: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040d789: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 0040d78d: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0040d791: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0040d799: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040d79c: or ecx, dword ptr [ebx - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xfffffff8u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040d79f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0040d7a2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040d7a6: mov edx, 4 */ r_edx = 0x4u;
    /* 0040d7ab: lea edi, [esp + 0x30] */ r_edi = (u32)(r_esp+0x30u);
    /* 0040d7af: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 0040d7b3: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0040d7b7: mov eax, dword ptr [ebx - 0x18] */ r_eax = R32((u32)(r_ebx+0xffffffe8u));
    /* 0040d7ba: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0040d7bd: mov eax, dword ptr [ebx - 0x14] */ r_eax = R32((u32)(r_ebx+0xffffffecu));
    /* 0040d7c0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0040d7c4: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040d7c8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0040d7ca: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0040d7ce: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0040d7d0: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0040d7d3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0040d7d7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0040d7da: fadd dword ptr [ebx - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xfffffff4u));
    /* 0040d7dd: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 0040d7e0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040d7e4: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0040d7e7: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0040d7eb: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0040d7ed: fadd dword ptr [ebx - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xfffffff0u));
    /* 0040d7f0: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 0040d7f3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0040d7f7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0040d7fa: fadd dword ptr [ebx - 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xfffffff4u));
    /* 0040d7fd: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 0040d800: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040d804: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0040d807: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0040d80b: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0040d80d: fadd dword ptr [ebx - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xfffffff0u));
    /* 0040d810: fstp dword ptr [eax + 0x18] */ W_F32((u32)(r_eax+0x18u), ST(0)); FPOP();
    /* 0040d813: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0040d817: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0040d81a: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0040d81d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040d821: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0040d824: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0040d828: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d82a: push 0xc1f00000 */ { u32 v = 0xc1f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d82f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d831: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x40d836u); f_0082b5d8();
    /* 0040d836: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d839: mov eax, dword ptr [esi + 0x150] */ r_eax = R32((u32)(r_esi+0x150u));
L_0040d83f:; BB(0x0040d83f);
    /* 0040d83f: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040d842: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040d845: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040d847: jb 0x40d758 */ if (fC) goto L_0040d758;
L_0040d84d:; BB(0x0040d84d);
    /* 0040d84d: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
    /* 0040d851: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 0040d855: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
L_0040d859:; BB(0x0040d859);
    /* 0040d859: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d85b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d85d: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40d862u); f_0082acfc();
    /* 0040d862: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d864: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d866: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x40d86bu); f_0082acfc();
    /* 0040d86b: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040d86e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d86f: ret  */ FN_RET(0x0040d6f8); r_esp += 4; return;
}

void f_0040d870(void) /* sub_40D870 */
{
    FN_ENTER(0x0040d870);
    /* 0040d870: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d871: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040d873: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040d875: call 0x40d894 */ r_esp -= 4; W32(r_esp, 0x40d87au); f_0040d894();
    /* 0040d87a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040d87e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040d880: jne 0x40d886 */ if (!fZ) goto L_0040d886;
L_0040d882:; BB(0x0040d882);
    /* 0040d882: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d883: ret 4 */ FN_RET(0x0040d870); r_esp += 8; return;
L_0040d886:; BB(0x0040d886);
    /* 0040d886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040d887: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40d88cu); f_005c2f74();
    /* 0040d88c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040d88d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040d88e: ret 4 */ FN_RET(0x0040d870); r_esp += 8; return;
}

void f_0040d894(void) /* sub_40D894 */
{
    FN_ENTER(0x0040d894);
    /* 0040d894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d895: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d897: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d899: push 0x8cc7e8 */ { u32 v = 0x8cc7e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d89e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d8a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040d8ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d8af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040d8b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040d8b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040d8b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040d8bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040d8be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040d8c1: mov dword ptr [ecx], 0xaf2ba0 */ W32((u32)(r_ecx), 0xaf2ba0u);
    /* 0040d8c7: mov dword ptr [0xa3ae18], 0 */ W32((u32)(0xa3ae18u), 0x0u);
    /* 0040d8d1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040d8d8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40d8ddu); f_008171e8();
    /* 0040d8dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040d8e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040d8e7: mov esp, ebp */ r_esp = r_ebp;
    /* 0040d8e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040d8ea: ret  */ FN_RET(0x0040d894); r_esp += 4; return;
}

void f_0040d8ec(void) /* sub_40D8EC */
{
    FN_ENTER(0x0040d8ec);
    /* 0040d8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0040d8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8f1: push 0x8cc8dc */ { u32 v = 0x8cc8dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040d8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040d8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040d904: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040d907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040d90a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040d90d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040d910: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040d913: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040d916: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040d919: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40d91eu); f_008193cc();
    /* 0040d91e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d925: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040d928: mov dword ptr [edx], 0xaf2ba0 */ W32((u32)(r_edx), 0xaf2ba0u);
    /* 0040d92e: mov eax, dword ptr [0x9a3178] */ r_eax = R32((u32)(0x9a3178u));
    /* 0040d933: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d935: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040d938: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x40d93du); f_007a6198();
    /* 0040d93d: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d93f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040d941: mov dword ptr [0xa3ae1c], eax */ W32((u32)(0xa3ae1cu), r_eax);
    /* 0040d946: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0040d949: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40d94eu); f_005caba4();
    /* 0040d94e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040d951: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 0040d954: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d956: je 0x40d978 */ if (fZ) goto L_0040d978;
L_0040d958:; BB(0x0040d958);
    /* 0040d958: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 0040d95f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040d966: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040d969: mov ecx, dword ptr [ebp - 0x60] */ r_ecx = R32((u32)(r_ebp+0xffffffa0u));
    /* 0040d96c: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x40d971u); f_004010b0();
    /* 0040d971: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_0040d978:; BB(0x0040d978);
    /* 0040d978: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d97f: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0040d986: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d988: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40d98du); f_005caba4();
    /* 0040d98d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040d98e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0040d991: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d993: je 0x40d9b5 */ if (fZ) goto L_0040d9b5;
L_0040d995:; BB(0x0040d995);
    /* 0040d995: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0040d99c: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0040d9a3: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040d9a6: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0040d9a9: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x40d9aeu); f_004012cc();
    /* 0040d9ae: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_0040d9b5:; BB(0x0040d9b5);
    /* 0040d9b5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d9bc: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0040d9c3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0040d9c5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40d9cau); f_005caba4();
    /* 0040d9ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040d9cb: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0040d9ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040d9d0: je 0x40d9f2 */ if (fZ) goto L_0040d9f2;
L_0040d9d2:; BB(0x0040d9d2);
    /* 0040d9d2: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 0040d9d9: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0040d9e0: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040d9e3: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0040d9e6: call 0x410934 */ r_esp -= 4; W32(r_esp, 0x40d9ebu); f_00410934();
    /* 0040d9eb: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0040d9f2:; BB(0x0040d9f2);
    /* 0040d9f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040d9f9: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0040da00: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 0040da05: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40da0au); f_005caba4();
    /* 0040da0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040da0b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0040da0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da10: je 0x40da34 */ if (fZ) goto L_0040da34;
L_0040da12:; BB(0x0040da12);
    /* 0040da12: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0040da19: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0040da20: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0040da23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040da25: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040da28: call 0x415154 */ r_esp -= 4; W32(r_esp, 0x40da2du); f_00415154();
    /* 0040da2d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0040da34:; BB(0x0040da34);
    /* 0040da34: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040da3b: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0040da42: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0040da47: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40da4cu); f_005caba4();
    /* 0040da4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040da4d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0040da50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da52: je 0x40da74 */ if (fZ) goto L_0040da74;
L_0040da54:; BB(0x0040da54);
    /* 0040da54: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 0040da5b: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0040da62: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040da65: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040da68: call 0x41571c */ r_esp -= 4; W32(r_esp, 0x40da6du); f_0041571c();
    /* 0040da6d: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_0040da74:; BB(0x0040da74);
    /* 0040da74: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040da7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040da7d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_0040da80:; BB(0x0040da80);
    /* 0040da80: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0040da87: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040da8c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40da91u); f_005caba4();
    /* 0040da91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040da92: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0040da95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040da97: je 0x40dad0 */ if (fZ) goto L_0040dad0;
L_0040da99:; BB(0x0040da99);
    /* 0040da99: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0040daa0: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 0040daa7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040daaa: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0040daad: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0040dab0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040dab2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0040dab5: lea esi, [ebx + 0x12] */ r_esi = (u32)(r_ebx+0x12u);
    /* 0040dab8: lea edi, [eax + edx + 0x9a3154] */ r_edi = (u32)(r_eax+r_edx+0x9a3154u);
    /* 0040dabf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040dac0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040dac1: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040dac4: call 0x412f2c */ r_esp -= 4; W32(r_esp, 0x40dac9u); f_00412f2c();
    /* 0040dac9: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0040dad0:; BB(0x0040dad0);
    /* 0040dad0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dad7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dada: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040dadd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040dae0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dae3: jl 0x40da80 */ if ((fS!=fO)) goto L_0040da80;
L_0040dae5:; BB(0x0040dae5);
    /* 0040dae5: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0040daec: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0040daf1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40daf6u); f_005caba4();
    /* 0040daf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040daf7: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0040dafa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dafc: je 0x40dc0f */ if (fZ) goto L_0040dc0f;
L_0040db02:; BB(0x0040db02);
    /* 0040db02: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0040db09: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 0040db10: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040db13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db15: push 0x8fa220 */ { u32 v = 0x8fa220u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db1a: push 0x8fa208 */ { u32 v = 0x8fa208u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db1f: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040db22: call 0x412354 */ r_esp -= 4; W32(r_esp, 0x40db27u); f_00412354();
    /* 0040db27: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040db2a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0040db31:; BB(0x0040db31);
    /* 0040db31: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040db34: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 0040db37: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040db3e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0040db40:; BB(0x0040db40);
    /* 0040db40: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0040db43: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040db45: lea edx, [eax + eax + 0x8fa208] */ r_edx = (u32)(r_eax+r_eax+0x8fa208u);
    /* 0040db4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040db4d: call 0x412094 */ r_esp -= 4; W32(r_esp, 0x40db52u); f_00412094();
    /* 0040db52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040db55: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040db58: jge 0x40db62 */ if ((fS==fO)) goto L_0040db62;
L_0040db5a:; BB(0x0040db5a);
    /* 0040db5a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040db5d: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0040db60: jmp 0x40db40 */ goto L_0040db40;
L_0040db62:; BB(0x0040db62);
    /* 0040db62: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0040db69: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0040db6b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40db70u); f_005caba4();
    /* 0040db70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040db71: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0040db74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040db76: je 0x40dc0b */ if (fZ) goto L_0040dc0b;
L_0040db7c:; BB(0x0040db7c);
    /* 0040db7c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0040db83: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0040db8a: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040db8d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040db90: call 0x40b72c */ r_esp -= 4; W32(r_esp, 0x40db95u); f_0040b72c();
    /* 0040db95: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040db98: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0040db9f:; BB(0x0040db9f);
    /* 0040db9f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040dba2: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0040dba5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040dbac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbae: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbb0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40dbb5u); f_00792fe8();
    /* 0040dbb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040dbb8: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040dbbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbbe: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0040dbc1: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x40dbc6u); f_0040b7b4();
    /* 0040dbc6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbc8: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbca: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40dbcfu); f_00792fe8();
    /* 0040dbcf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040dbd2: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040dbd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbd8: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 0040dbdb: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x40dbe0u); f_0040b7b4();
    /* 0040dbe0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbe2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0040dbe4: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040dbe7: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40dbecu); f_004088b8();
    /* 0040dbec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040dbef: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040dbf2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dbf5: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040dbf8: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040dbfb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dbfe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040dc05: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dc07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dc08: ret 4 */ FN_RET(0x0040d8ec); r_esp += 8; return;
L_0040dc0b:; BB(0x0040dc0b);
    /* 0040dc0b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040dc0d: jmp 0x40db9f */ goto L_0040db9f;
L_0040dc0f:; BB(0x0040dc0f);
    /* 0040dc0f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dc11: jmp 0x40db31 */ goto L_0040db31;
}

void f_0040dc18(void) /* sub_40DC18 */
{
    FN_ENTER(0x0040dc18);
    /* 0040dc18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040dc1b: call 0x81e1f4 */ r_esp -= 4; W32(r_esp, 0x40dc20u); f_0081e1f4();
    /* 0040dc20: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 0040dc25: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040dc27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc28: call 0x40e220 */ r_esp -= 4; W32(r_esp, 0x40dc2du); f_0040e220();
    /* 0040dc2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040dc2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc30: je 0x40dc4d */ if (fZ) goto L_0040dc4d;
L_0040dc32:; BB(0x0040dc32);
    /* 0040dc32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040dc34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc37: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc3c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x40dc41u); f_00814298();
    /* 0040dc41: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc43: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x40dc48u); f_007a60dc();
    /* 0040dc48: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040dc4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dc4c: ret  */ FN_RET(0x0040dc18); r_esp += 4; return;
L_0040dc4d:; BB(0x0040dc4d);
    /* 0040dc4d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040dc50: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0040dc53: cmp edx, dword ptr [0xa3ae1c] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa3ae1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc59: je 0x40dc7a */ if (fZ) goto L_0040dc7a;
L_0040dc5b:; BB(0x0040dc5b);
    /* 0040dc5b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dc5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc5f: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc61: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40dc66u); f_00792fe8();
    /* 0040dc66: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040dc69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc6a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dc6c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0040dc6f: call 0x40b7b4 */ r_esp -= 4; W32(r_esp, 0x40dc74u); f_0040b7b4();
    /* 0040dc74: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040dc77: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
L_0040dc7a:; BB(0x0040dc7a);
    /* 0040dc7a: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
    /* 0040dc7d: mov dword ptr [0xa3ae1c], edx */ W32((u32)(0xa3ae1cu), r_edx);
    /* 0040dc83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040dc85: je 0x40dcad */ if (fZ) goto L_0040dcad;
L_0040dc87:; BB(0x0040dc87);
    /* 0040dc87: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040dc8a: jne 0x40dcad */ if (!fZ) goto L_0040dcad;
L_0040dc8c:; BB(0x0040dc8c);
    /* 0040dc8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc8e: je 0x40dca8 */ if (fZ) goto L_0040dca8;
L_0040dc90:; BB(0x0040dc90);
    /* 0040dc90: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dc93: jne 0x40dc9c */ if (!fZ) goto L_0040dc9c;
L_0040dc95:; BB(0x0040dc95);
    /* 0040dc95: call 0x81e1d4 */ r_esp -= 4; W32(r_esp, 0x40dc9au); f_0081e1d4();
    /* 0040dc9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dc9b: ret  */ FN_RET(0x0040dc18); r_esp += 4; return;
L_0040dc9c:; BB(0x0040dc9c);
    /* 0040dc9c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040dc9f: jne 0x40dcad */ if (!fZ) goto L_0040dcad;
L_0040dca1:; BB(0x0040dca1);
    /* 0040dca1: call 0x821560 */ r_esp -= 4; W32(r_esp, 0x40dca6u); f_00821560();
    /* 0040dca6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dca7: ret  */ FN_RET(0x0040dc18); r_esp += 4; return;
L_0040dca8:; BB(0x0040dca8);
    /* 0040dca8: call 0x8215a0 */ r_esp -= 4; W32(r_esp, 0x40dcadu); f_008215a0();
L_0040dcad:; BB(0x0040dcad);
    /* 0040dcad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dcae: ret  */ FN_RET(0x0040dc18); r_esp += 4; return;
}

void f_0040dcb0(void) /* sub_40DCB0 */
{
    FN_ENTER(0x0040dcb0);
    /* 0040dcb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040dcb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040dcb5: call 0x40dcd4 */ r_esp -= 4; W32(r_esp, 0x40dcbau); f_0040dcd4();
    /* 0040dcba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040dcbe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040dcc0: jne 0x40dcc6 */ if (!fZ) goto L_0040dcc6;
L_0040dcc2:; BB(0x0040dcc2);
    /* 0040dcc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040dcc3: ret 4 */ FN_RET(0x0040dcb0); r_esp += 8; return;
L_0040dcc6:; BB(0x0040dcc6);
    /* 0040dcc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcc7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40dcccu); f_005c2f74();
    /* 0040dccc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040dccd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040dcce: ret 4 */ FN_RET(0x0040dcb0); r_esp += 8; return;
}

void f_0040dcd4(void) /* sub_40DCD4 */
{
    FN_ENTER(0x0040dcd4);
    /* 0040dcd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcd5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dcd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcd9: push 0x8cc8f8 */ { u32 v = 0x8cc8f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dcde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040dce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dce5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040dcec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dcef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040dcf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040dcf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040dcf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040dcfb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040dcfe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040dd01: mov dword ptr [ecx], 0xaf2c48 */ W32((u32)(r_ecx), 0xaf2c48u);
    /* 0040dd07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040dd0e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40dd13u); f_008171e8();
    /* 0040dd13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dd16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040dd1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dd1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dd20: ret  */ FN_RET(0x0040dcd4); r_esp += 4; return;
}

void f_0040dd24(void) /* sub_40DD24 */
{
    FN_ENTER(0x0040dd24);
    /* 0040dd24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd25: mov ebp, esp */ r_ebp = r_esp;
    /* 0040dd27: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd29: push 0x8cc914 */ { u32 v = 0x8cc914u; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd2e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040dd34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dd35: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040dd3c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dd3f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040dd42: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040dd45: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040dd48: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040dd4b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040dd4e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040dd51: mov eax, ecx */ r_eax = r_ecx;
    /* 0040dd53: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 0040dd56: mov esi, dword ptr [edi*4 + 0x8fa268] */ r_esi = R32((u32)(r_edi*4+0x8fa268u));
    /* 0040dd5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040dd5f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040dd61: mov dword ptr [eax], 0xaf2c38 */ W32((u32)(r_eax), 0xaf2c38u);
    /* 0040dd67: jle 0x40dda1 */ if ((fZ||fS!=fO)) goto L_0040dda1;
L_0040dd69:; BB(0x0040dd69);
    /* 0040dd69: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dd6c: mov ebx, dword ptr [ecx + edx*4 + 0x20] */ r_ebx = R32((u32)(r_ecx+r_edx*4+0x20u));
    /* 0040dd70: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0040dd73: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dd75: je 0x40dd9a */ if (fZ) goto L_0040dd9a;
L_0040dd77:; BB(0x0040dd77);
    /* 0040dd77: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040dd7b: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040dd81: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040dd85: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040dd88: mov dword ptr [ebx + eax*2 + 0x20], 0 */ W32((u32)(r_ebx+r_eax*2+0x20u), 0x0u);
    /* 0040dd90: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 0040dd93: mov esi, dword ptr [edi*4 + 0x8fa268] */ r_esi = R32((u32)(r_edi*4+0x8fa268u));
L_0040dd9a:; BB(0x0040dd9a);
    /* 0040dd9a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040dd9d: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040dd9f: jl 0x40dd69 */ if ((fS!=fO)) goto L_0040dd69;
L_0040dda1:; BB(0x0040dda1);
    /* 0040dda1: mov dword ptr [0xa3ae2c], 0 */ W32((u32)(0xa3ae2cu), 0x0u);
    /* 0040ddab: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040ddae: je 0x40ddf5 */ if (fZ) goto L_0040ddf5;
L_0040ddb0:; BB(0x0040ddb0);
    /* 0040ddb0: mov dword ptr [0xa3ae24], 0 */ W32((u32)(0xa3ae24u), 0x0u);
L_0040ddba:; BB(0x0040ddba);
    /* 0040ddba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040ddc1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ddc4: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40ddc9u); f_008171e8();
    /* 0040ddc9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040ddcc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040ddce: jne 0x40dde9 */ if (!fZ) goto L_0040dde9;
L_0040ddd0:; BB(0x0040ddd0);
    /* 0040ddd0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040ddd3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040ddd6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040ddd9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040dddc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040dde3: mov esp, ebp */ r_esp = r_ebp;
    /* 0040dde5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040dde6: ret 4 */ FN_RET(0x0040dd24); r_esp += 8; return;
L_0040dde9:; BB(0x0040dde9);
    /* 0040dde9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040ddec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040dded: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40ddf2u); f_005c2f74();
    /* 0040ddf2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040ddf3: jmp 0x40ddd0 */ goto L_0040ddd0;
L_0040ddf5:; BB(0x0040ddf5);
    /* 0040ddf5: mov dword ptr [0xa3ae28], 0 */ W32((u32)(0xa3ae28u), 0x0u);
    /* 0040ddff: jmp 0x40ddba */ goto L_0040ddba;
}

void f_0040de04(void) /* sub_40DE04 */
{
    FN_ENTER(0x0040de04);
    /* 0040de04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040de05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040de07: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040de0b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040de0d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40de12u); f_008193cc();
    /* 0040de12: mov dword ptr [ebx], 0xaf2c48 */ W32((u32)(r_ebx), 0xaf2c48u);
    /* 0040de18: mov eax, dword ptr [0x9a3198] */ r_eax = R32((u32)(0x9a3198u));
    /* 0040de1d: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0040de20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0040de22: mov dword ptr [ebx + 0x20], 5 */ W32((u32)(r_ebx+0x20u), 0x5u);
    /* 0040de29: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0040de2c: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0040de2f: lea edx, [ebx + 0x28] */ r_edx = (u32)(r_ebx+0x28u);
    /* 0040de32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040de34: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0040de36: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040de39: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0040de3c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0040de3f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0040de42: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0040de45: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0040de48: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0040de4b: lea edx, [ebx + 0x48] */ r_edx = (u32)(r_ebx+0x48u);
    /* 0040de4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040de50: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0040de52: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0040de55: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0040de58: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0040de5b: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0040de5e: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0040de61: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0040de64: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0040de67: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0040de6a: mov eax, ebx */ r_eax = r_ebx;
    /* 0040de6c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040de6d: ret 4 */ FN_RET(0x0040de04); r_esp += 8; return;
}

void f_0040de70(void) /* sub_40DE70 */
{
    FN_ENTER(0x0040de70);
    /* 0040de70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040de71: mov edi, ecx */ r_edi = r_ecx;
    /* 0040de73: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 0040de76: mov ecx, edi */ r_ecx = r_edi;
    /* 0040de78: call dword ptr [eax*4 + 0x9a317c] */ { u32 t = R32((u32)(r_eax*4+0x9a317cu)); r_esp -= 4; W32(r_esp, 0x40de7fu); call_ind(t); }
    /* 0040de7f: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 0040de82: cmp edx, dword ptr [edi + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040de85: je 0x40de8b */ if (fZ) goto L_0040de8b;
L_0040de87:; BB(0x0040de87);
    /* 0040de87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040de89: jmp 0x40de91 */ goto L_0040de91;
L_0040de8b:; BB(0x0040de8b);
    /* 0040de8b: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 0040de8e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0040de91:; BB(0x0040de91);
    /* 0040de91: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0040de94: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 0040de97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040de98: ret  */ FN_RET(0x0040de70); r_esp += 4; return;
}

void f_0040de9c(void) /* sub_40DE9C */
{
    FN_ENTER(0x0040de9c);
    /* 0040de9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040de9d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040dea0: mov esi, ecx */ r_esi = r_ecx;
    /* 0040dea2: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0040dea5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040dea7: jne 0x40deae */ if (!fZ) goto L_0040deae;
L_0040dea9:; BB(0x0040dea9);
    /* 0040dea9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040deac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040dead: ret  */ FN_RET(0x0040de9c); r_esp += 4; return;
L_0040deae:; BB(0x0040deae);
    /* 0040deae: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040deb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040deb5: jne 0x40debc */ if (!fZ) goto L_0040debc;
L_0040deb7:; BB(0x0040deb7);
    /* 0040deb7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040deba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040debb: ret  */ FN_RET(0x0040de9c); r_esp += 4; return;
L_0040debc:; BB(0x0040debc);
    /* 0040debc: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040dec1: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40dec6u); f_0082bb30();
    /* 0040dec6: mov ecx, dword ptr [0xa3ae2c] */ r_ecx = R32((u32)(0xa3ae2cu));
    /* 0040decc: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x40ded1u); f_00829cc8();
    /* 0040ded1: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 0040ded4: fmul dword ptr [0x8fa264] */ ST(0) = ST(0) * R_F32((u32)(0x8fa264u));
    /* 0040deda: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0040dedd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0040dee1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040dee6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0040deea: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040deee: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0040def2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0040def5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040def7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0040defb: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0040defe: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0040df04: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40df09u); f_0082bb60();
    /* 0040df09: push 0x3f051eb8 */ { u32 v = 0x3f051eb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040df0e: add esi, 0x48 */ {  u32 a = r_esi; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040df11: mov ecx, esi */ r_ecx = r_esi;
    /* 0040df13: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40df18u); f_0082b440();
    /* 0040df18: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x40df1du); f_004ac444();
    /* 0040df1d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040df20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040df21: ret  */ FN_RET(0x0040de9c); r_esp += 4; return;
}

void f_0040df24(void) /* sub_40DF24 */
{
    FN_ENTER(0x0040df24);
    /* 0040df24: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0040df27: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 0040df2a: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0040df2d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040df30: jl 0x40df56 */ if ((fS!=fO)) goto L_0040df56;
L_0040df32:; BB(0x0040df32);
    /* 0040df32: fld dword ptr [0x8fa254] */ FPUSH(R_F32((u32)(0x8fa254u)));
    /* 0040df38: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0040df3b: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0040df3e: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 0040df41: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0040df44: mov dword ptr [ecx + 0x40], 0x3f800000 */ W32((u32)(r_ecx+0x40u), 0x3f800000u);
    /* 0040df4b: mov dword ptr [ecx + 0x1c], 2 */ W32((u32)(r_ecx+0x1cu), 0x2u);
    /* 0040df52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040df54: jmp 0x40dfa2 */ goto L_0040dfa2;
L_0040df56:; BB(0x0040df56);
    /* 0040df56: fld dword ptr [0x8fa25c] */ FPUSH(R_F32((u32)(0x8fa25cu)));
    /* 0040df5c: fld dword ptr [0x8fa254] */ FPUSH(R_F32((u32)(0x8fa254u)));
    /* 0040df62: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 0040df65: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0040df67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040df69: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0040df6b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040df6d: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 0040df70: fld dword ptr [0x8fa258] */ FPUSH(R_F32((u32)(0x8fa258u)));
    /* 0040df76: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0040df79: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0040df7c: fsub dword ptr [ecx + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x34u));
    /* 0040df7f: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0040df81: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040df83: fadd dword ptr [ecx + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x2cu));
    /* 0040df86: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040df88: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0040df8a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040df8c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040df8e: fst dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0));
    /* 0040df91: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040df93: fst dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0));
    /* 0040df96: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040df97: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040df99: jb 0x40df9d */ if (fC) goto L_0040df9d;
L_0040df9b:; BB(0x0040df9b);
    /* 0040df9b: fst st(1) */ ST(1) = ST(0);
L_0040df9d:; BB(0x0040df9d);
    /* 0040df9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040df9f: fst dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0));
L_0040dfa2:; BB(0x0040dfa2);
    /* 0040dfa2: fld dword ptr [0x8fa250] */ FPUSH(R_F32((u32)(0x8fa250u)));
    /* 0040dfa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040dfaa: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 0040dfad: fld dword ptr [0x8fa24c] */ FPUSH(R_F32((u32)(0x8fa24cu)));
    /* 0040dfb3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040dfb5: fst dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0));
    /* 0040dfb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040dfba: fst dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0));
    /* 0040dfbd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040dfbf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0040dfc1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040dfc3: fstp dword ptr [ecx + 0x50] */ W_F32((u32)(r_ecx+0x50u), ST(0)); FPOP();
    /* 0040dfc6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040dfc8: fstp dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0)); FPOP();
    /* 0040dfcb: ret  */ FN_RET(0x0040df24); r_esp += 4; return;
}

void f_0040dfcc(void) /* sub_40DFCC */
{
    FN_ENTER(0x0040dfcc);
    /* 0040dfcc: fld dword ptr [0x8fa248] */ FPUSH(R_F32((u32)(0x8fa248u)));
    /* 0040dfd2: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 0040dfd5: fcom dword ptr [0x8fa244] */ fx_compare(ST(0), R_F32((u32)(0x8fa244u))); 
    /* 0040dfdb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040dfdd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040dfde: jae 0x40dffd */ if (!fC) goto L_0040dffd;
L_0040dfe0:; BB(0x0040dfe0);
    /* 0040dfe0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040dfe2: fld dword ptr [0x8fa244] */ FPUSH(R_F32((u32)(0x8fa244u)));
    /* 0040dfe8: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 0040dfef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040dff1: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0040dff4: mov dword ptr [ecx + 0x1c], 4 */ W32((u32)(r_ecx+0x1cu), 0x4u);
    /* 0040dffb: jmp 0x40e000 */ goto L_0040e000;
L_0040dffd:; BB(0x0040dffd);
    /* 0040dffd: fst dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0));
L_0040e000:; BB(0x0040e000);
    /* 0040e000: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 0040e003: ret  */ FN_RET(0x0040dfcc); r_esp += 4; return;
}

