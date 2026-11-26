#include "protos.h"

void f_0040b0f8(void) /* sub_40B0F8 */
{
    FN_ENTER(0x0040b0f8);
    /* 0040b0f8: mov ecx, dword ptr [0xa3ad78] */ r_ecx = R32((u32)(0xa3ad78u));
    /* 0040b0fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b100: je 0x40b111 */ if (fZ) goto L_0040b111;
L_0040b102:; BB(0x0040b102);
    /* 0040b102: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x40b107u); f_00829de0();
    /* 0040b107: mov dword ptr [0xa3ad78], 0 */ W32((u32)(0xa3ad78u), 0x0u);
L_0040b111:; BB(0x0040b111);
    /* 0040b111: ret  */ FN_RET(0x0040b0f8); r_esp += 4; return;
}

void f_0040b114(void) /* sub_40B114 */
{
    FN_ENTER(0x0040b114);
    /* 0040b114: mov eax, 0x9a30d4 */ r_eax = 0x9a30d4u;
    /* 0040b119: mov dword ptr [0xa3ad78], eax */ W32((u32)(0xa3ad78u), r_eax);
    /* 0040b11e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b11f: push 0x8f9d00 */ { u32 v = 0x8f9d00u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b124: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x40b129u); f_0081a934();
    /* 0040b129: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b12c: ret  */ FN_RET(0x0040b114); r_esp += 4; return;
}

void f_0040b130(void) /* sub_40B130 */
{
    FN_ENTER(0x0040b130);
    /* 0040b130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b131: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040b133: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040b135: call 0x40b154 */ r_esp -= 4; W32(r_esp, 0x40b13au); f_0040b154();
    /* 0040b13a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040b13e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b140: jne 0x40b146 */ if (!fZ) goto L_0040b146;
L_0040b142:; BB(0x0040b142);
    /* 0040b142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b143: ret 4 */ FN_RET(0x0040b130); r_esp += 8; return;
L_0040b146:; BB(0x0040b146);
    /* 0040b146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b147: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40b14cu); f_005c2f74();
    /* 0040b14c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b14d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b14e: ret 4 */ FN_RET(0x0040b130); r_esp += 8; return;
}

void f_0040b154(void) /* sub_40B154 */
{
    FN_ENTER(0x0040b154);
    /* 0040b154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b155: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b157: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b159: push 0x8cc580 */ { u32 v = 0x8cc580u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b15e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b165: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b16c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b16f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b172: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040b175: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040b178: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040b17b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040b17e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040b181: mov dword ptr [ecx], 0xaf27b0 */ W32((u32)(r_ecx), 0xaf27b0u);
    /* 0040b187: mov eax, dword ptr [0xa3adc4] */ r_eax = R32((u32)(0xa3adc4u));
    /* 0040b18c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b18e: je 0x40b19a */ if (fZ) goto L_0040b19a;
L_0040b190:; BB(0x0040b190);
    /* 0040b190: mov dword ptr [0xa3adc4], 0 */ W32((u32)(0xa3adc4u), 0x0u);
L_0040b19a:; BB(0x0040b19a);
    /* 0040b19a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040b1a1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40b1a6u); f_008171e8();
    /* 0040b1a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b1a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040b1b0: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b1b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b1b3: ret  */ FN_RET(0x0040b154); r_esp += 4; return;
}

void f_0040b1b4(void) /* sub_40B1B4 */
{
    FN_ENTER(0x0040b1b4);
    /* 0040b1b4: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 0040b1bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b1bd: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 0040b1c4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0040b1c6: mov edx, 0xff */ r_edx = 0xffu;
    /* 0040b1cb: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0040b1ce: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 0040b1d5: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0040b1d8: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0040b1db: mov eax, ecx */ r_eax = r_ecx;
    /* 0040b1dd: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 0040b1e4: mov dword ptr [ecx + 0x20], 0x8f8818 */ W32((u32)(r_ecx+0x20u), 0x8f8818u);
    /* 0040b1eb: ret  */ FN_RET(0x0040b1b4); r_esp += 4; return;
}

void f_0040b1ec(void) /* sub_40B1EC */
{
    FN_ENTER(0x0040b1ec);
    /* 0040b1ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1ed: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b1ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1f1: push 0x8cc5a8 */ { u32 v = 0x8cc5a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b1fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b1fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b204: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b207: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b20a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040b20d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040b210: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040b213: mov eax, dword ptr [0xa3adc4] */ r_eax = R32((u32)(0xa3adc4u));
    /* 0040b218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b21a: je 0x40b233 */ if (fZ) goto L_0040b233;
L_0040b21c:; BB(0x0040b21c);
    /* 0040b21c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040b21f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040b222: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040b225: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b228: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040b22f: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b232: ret  */ FN_RET(0x0040b1ec); r_esp += 4; return;
L_0040b233:; BB(0x0040b233);
    /* 0040b233: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0040b23a: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b23f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40b244u); f_005caba4();
    /* 0040b244: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040b247: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b24a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0040b24d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b24f: je 0x40b36d */ if (fZ) goto L_0040b36d;
L_0040b255:; BB(0x0040b255);
    /* 0040b255: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0040b25c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040b263: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b266: mov ecx, eax */ r_ecx = r_eax;
    /* 0040b268: call 0x40b378 */ r_esp -= 4; W32(r_esp, 0x40b26du); f_0040b378();
    /* 0040b26d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0040b274:; BB(0x0040b274);
    /* 0040b274: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b277: mov dword ptr [0xa3adc4], eax */ W32((u32)(0xa3adc4u), r_eax);
    /* 0040b27c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b27e: je 0x40b21c */ if (fZ) goto L_0040b21c;
L_0040b280:; BB(0x0040b280);
    /* 0040b280: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b283: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0040b286: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0040b289: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0040b28b: fld dword ptr [0x8f9e5c] */ FPUSH(R_F32((u32)(0x8f9e5cu)));
    /* 0040b291: fld dword ptr [0x8f9e6c] */ FPUSH(R_F32((u32)(0x8f9e6cu)));
    /* 0040b297: mov dword ptr [eax + 0x144], ecx */ W32((u32)(r_eax+0x144u), r_ecx);
    /* 0040b29d: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0040b2a0: mov dword ptr [eax + 0x148], esi */ W32((u32)(r_eax+0x148u), r_esi);
    /* 0040b2a6: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 0040b2a9: mov dword ptr [eax + 0x14c], edx */ W32((u32)(r_eax+0x14cu), r_edx);
    /* 0040b2af: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b2b2: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0040b2b5: mov dword ptr [eax + 0x150], edx */ W32((u32)(r_eax+0x150u), r_edx);
    /* 0040b2bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b2bd: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b2c0: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0040b2c3: mov dword ptr [eax + 0x154], edx */ W32((u32)(r_eax+0x154u), r_edx);
    /* 0040b2c9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b2cc: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0040b2cf: mov dword ptr [eax + 0x198], edx */ W32((u32)(r_eax+0x198u), r_edx);
    /* 0040b2d5: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b2d8: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 0040b2db: mov dword ptr [eax + 0x19c], edx */ W32((u32)(r_eax+0x19cu), r_edx);
    /* 0040b2e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0040b2e4: mov edx, dword ptr [edx + 0x20] */ r_edx = R32((u32)(r_edx+0x20u));
    /* 0040b2e7: mov dword ptr [eax + 0x1a0], edx */ W32((u32)(r_eax+0x1a0u), r_edx);
    /* 0040b2ed: mov dword ptr [eax + 0x1a4], 1 */ W32((u32)(r_eax+0x1a4u), 0x1u);
L_0040b2f7:; BB(0x0040b2f7);
    /* 0040b2f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b2fa: mov ebx, dword ptr [edx + 0x144] */ r_ebx = R32((u32)(r_edx+0x144u));
    /* 0040b300: fld dword ptr [ebx*8 + 0xa3ada0] */ FPUSH(R_F32((u32)(r_ebx*8+0xa3ada0u)));
    /* 0040b307: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b309: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040b30c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b30e: fstp dword ptr [edx + eax*8 + 0x2c] */ W_F32((u32)(r_edx+r_eax*8+0x2cu), ST(0)); FPOP();
    /* 0040b312: mov esi, dword ptr [edx + 0x144] */ r_esi = R32((u32)(r_edx+0x144u));
    /* 0040b318: fld dword ptr [esi*8 + 0xa3ada4] */ FPUSH(R_F32((u32)(r_esi*8+0xa3ada4u)));
    /* 0040b31f: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b321: fstp dword ptr [edx + eax*8 + 0x30] */ W_F32((u32)(r_edx+r_eax*8+0x30u), ST(0)); FPOP();
    /* 0040b325: mov edi, dword ptr [edx + 0x144] */ r_edi = R32((u32)(r_edx+0x144u));
    /* 0040b32b: fld dword ptr [edi*8 + 0xa3ada0] */ FPUSH(R_F32((u32)(r_edi*8+0xa3ada0u)));
    /* 0040b332: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040b334: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b336: fstp dword ptr [edx + eax*8 + 0x34] */ W_F32((u32)(r_edx+r_eax*8+0x34u), ST(0)); FPOP();
    /* 0040b33a: mov ebx, dword ptr [edx + 0x144] */ r_ebx = R32((u32)(r_edx+0x144u));
    /* 0040b340: fld dword ptr [ebx*8 + 0xa3ada4] */ FPUSH(R_F32((u32)(r_ebx*8+0xa3ada4u)));
    /* 0040b347: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040b349: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b34b: fstp dword ptr [edx + eax*8 + 0x38] */ W_F32((u32)(r_edx+r_eax*8+0x38u), ST(0)); FPOP();
    /* 0040b34f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040b352: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 0040b355: mov dword ptr [edx + ecx*4 + 0x11c], eax */ W32((u32)(r_edx+r_ecx*4+0x11cu), r_eax);
    /* 0040b35c: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b35f: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040b362: jb 0x40b2f7 */ if (fC) goto L_0040b2f7;
L_0040b364:; BB(0x0040b364);
    /* 0040b364: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b368: jmp 0x40b21c */ goto L_0040b21c;
L_0040b36d:; BB(0x0040b36d);
    /* 0040b36d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040b36f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040b372: jmp 0x40b274 */ goto L_0040b274;
}

void f_0040b378(void) /* sub_40B378 */
{
    FN_ENTER(0x0040b378);
    /* 0040b378: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b379: mov edi, ecx */ r_edi = r_ecx;
    /* 0040b37b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b37f: mov ecx, edi */ r_ecx = r_edi;
    /* 0040b381: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40b386u); f_008193cc();
    /* 0040b386: mov dword ptr [edi], 0xaf27b0 */ W32((u32)(r_edi), 0xaf27b0u);
    /* 0040b38c: mov edx, dword ptr [0x9a30f0] */ r_edx = R32((u32)(0x9a30f0u));
    /* 0040b392: mov eax, dword ptr [0xa3b1d4] */ r_eax = R32((u32)(0xa3b1d4u));
    /* 0040b397: mov dword ptr [edi + 0x13c], 0xffffffff */ W32((u32)(r_edi+0x13cu), 0xffffffffu);
    /* 0040b3a1: mov dword ptr [0xa3adc0], eax */ W32((u32)(0xa3adc0u), r_eax);
    /* 0040b3a6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0040b3a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b3ab: mov dword ptr [edi + 0x140], edx */ W32((u32)(r_edi+0x140u), r_edx);
    /* 0040b3b1: mov dword ptr [edi + 0x1a4], edx */ W32((u32)(r_edi+0x1a4u), r_edx);
    /* 0040b3b7: mov eax, edi */ r_eax = r_edi;
    /* 0040b3b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040b3ba: ret 4 */ FN_RET(0x0040b378); r_esp += 8; return;
}

void f_0040b3c0(void) /* sub_40B3C0 */
{
    FN_ENTER(0x0040b3c0);
    /* 0040b3c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b3c3: mov edi, ecx */ r_edi = r_ecx;
    /* 0040b3c5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0040b3c9: fld dword ptr [0x8f9e58] */ FPUSH(R_F32((u32)(0x8f9e58u)));
    /* 0040b3cf: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0040b3d1: fld dword ptr [0x8f9e6c] */ FPUSH(R_F32((u32)(0x8f9e6cu)));
    /* 0040b3d7: mov dword ptr [edi + 0x144], eax */ W32((u32)(r_edi+0x144u), r_eax);
    /* 0040b3dd: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0040b3e0: mov dword ptr [edi + 0x148], edx */ W32((u32)(r_edi+0x148u), r_edx);
    /* 0040b3e6: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 0040b3e9: mov dword ptr [edi + 0x14c], edx */ W32((u32)(r_edi+0x14cu), r_edx);
    /* 0040b3ef: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0040b3f2: mov dword ptr [edi + 0x150], edx */ W32((u32)(r_edi+0x150u), r_edx);
    /* 0040b3f8: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0040b3fb: mov dword ptr [edi + 0x154], edx */ W32((u32)(r_edi+0x154u), r_edx);
    /* 0040b401: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0040b404: mov dword ptr [edi + 0x198], edx */ W32((u32)(r_edi+0x198u), r_edx);
    /* 0040b40a: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 0040b40d: mov dword ptr [edi + 0x19c], edx */ W32((u32)(r_edi+0x19cu), r_edx);
    /* 0040b413: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0040b416: mov dword ptr [edi + 0x1a0], edx */ W32((u32)(r_edi+0x1a0u), r_edx);
    /* 0040b41c: lea ebx, [edi + 0x11c] */ r_ebx = (u32)(r_edi+0x11cu);
    /* 0040b422: lea ecx, [edi + 0x2c] */ r_ecx = (u32)(r_edi+0x2cu);
    /* 0040b425: mov dword ptr [edi + 0x1a4], 1 */ W32((u32)(r_edi+0x1a4u), 0x1u);
    /* 0040b42f: lea edx, [edi + 0x13c] */ r_edx = (u32)(r_edi+0x13cu);
    /* 0040b435: jmp 0x40b43d */ goto L_0040b43d;
L_0040b437:; BB(0x0040b437);
    /* 0040b437: mov eax, dword ptr [edi + 0x144] */ r_eax = R32((u32)(r_edi+0x144u));
L_0040b43d:; BB(0x0040b43d);
    /* 0040b43d: fld dword ptr [eax*8 + 0xa3ada0] */ FPUSH(R_F32((u32)(r_eax*8+0xa3ada0u)));
    /* 0040b444: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b446: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0040b448: mov eax, dword ptr [edi + 0x144] */ r_eax = R32((u32)(r_edi+0x144u));
    /* 0040b44e: fld dword ptr [eax*8 + 0xa3ada4] */ FPUSH(R_F32((u32)(r_eax*8+0xa3ada4u)));
    /* 0040b455: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b457: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0040b45a: mov eax, dword ptr [edi + 0x144] */ r_eax = R32((u32)(r_edi+0x144u));
    /* 0040b460: fld dword ptr [eax*8 + 0xa3ada0] */ FPUSH(R_F32((u32)(r_eax*8+0xa3ada0u)));
    /* 0040b467: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040b469: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b46b: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0040b46e: mov eax, dword ptr [edi + 0x144] */ r_eax = R32((u32)(r_edi+0x144u));
    /* 0040b474: fld dword ptr [eax*8 + 0xa3ada4] */ FPUSH(R_F32((u32)(r_eax*8+0xa3ada4u)));
    /* 0040b47b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040b47d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040b47f: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0040b482: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b485: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0040b488: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0040b48a: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040b48d: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040b48f: ja 0x40b437 */ if ((!fC&&!fZ)) goto L_0040b437;
L_0040b491:; BB(0x0040b491);
    /* 0040b491: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b493: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b495: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b496: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b497: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040b498: ret 4 */ FN_RET(0x0040b3c0); r_esp += 8; return;
}

void f_0040b49c(void) /* sub_40B49C */
{
    FN_ENTER(0x0040b49c);
    /* 0040b49c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b49d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b49e: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b4a1: mov eax, dword ptr [ecx + 0x1a4] */ r_eax = R32((u32)(r_ecx+0x1a4u));
    /* 0040b4a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b4a9: je 0x40b5cd */ if (fZ) goto L_0040b5cd;
L_0040b4af:; BB(0x0040b4af);
    /* 0040b4af: mov eax, dword ptr [ecx + 0x13c] */ r_eax = R32((u32)(r_ecx+0x13cu));
    /* 0040b4b5: cmp eax, dword ptr [ecx + 0x19c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x19cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b4bb: jge 0x40b4c6 */ if ((fS==fO)) goto L_0040b4c6;
L_0040b4bd:; BB(0x0040b4bd);
    /* 0040b4bd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b4c0: mov dword ptr [ecx + 0x13c], eax */ W32((u32)(r_ecx+0x13cu), r_eax);
L_0040b4c6:; BB(0x0040b4c6);
    /* 0040b4c6: lea edx, [ecx + 0x11c] */ r_edx = (u32)(r_ecx+0x11cu);
    /* 0040b4cc: lea eax, [ecx + 0x13c] */ r_eax = (u32)(r_ecx+0x13cu);
L_0040b4d2:; BB(0x0040b4d2);
    /* 0040b4d2: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 0040b4d4: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b4da: jae 0x40b4e2 */ if (!fC) goto L_0040b4e2;
L_0040b4dc:; BB(0x0040b4dc);
    /* 0040b4dc: add esi, dword ptr [ecx + 0x198] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x198u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0040b4e2:; BB(0x0040b4e2);
    /* 0040b4e2: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 0040b4e7: cmp esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b4ed: jb 0x40b4f1 */ if (fC) goto L_0040b4f1;
L_0040b4ef:; BB(0x0040b4ef);
    /* 0040b4ef: mov esi, ebx */ r_esi = r_ebx;
L_0040b4f1:; BB(0x0040b4f1);
    /* 0040b4f1: mov dword ptr [edx], esi */ W32((u32)(r_edx), r_esi);
    /* 0040b4f3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b4f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040b4f8: ja 0x40b4d2 */ if ((!fC&&!fZ)) goto L_0040b4d2;
L_0040b4fa:; BB(0x0040b4fa);
    /* 0040b4fa: mov ebx, dword ptr [ecx + 0x13c] */ r_ebx = R32((u32)(r_ecx+0x13cu));
    /* 0040b500: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
    /* 0040b506: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b508: jne 0x40b51e */ if (!fZ) goto L_0040b51e;
L_0040b50a:; BB(0x0040b50a);
    /* 0040b50a: mov eax, dword ptr [ecx + 0x140] */ r_eax = R32((u32)(r_ecx+0x140u));
    /* 0040b510: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0040b513: jge 0x40b51e */ if ((fS==fO)) goto L_0040b51e;
L_0040b515:; BB(0x0040b515);
    /* 0040b515: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b518: mov dword ptr [ecx + 0x140], eax */ W32((u32)(r_ecx+0x140u), r_eax);
L_0040b51e:; BB(0x0040b51e);
    /* 0040b51e: fld dword ptr [0x8f9e54] */ FPUSH(R_F32((u32)(0x8f9e54u)));
    /* 0040b524: fld dword ptr [0x8f9e6c] */ FPUSH(R_F32((u32)(0x8f9e6cu)));
    /* 0040b52a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040b52c: jmp 0x40b53a */ goto L_0040b53a;
L_0040b52e:; BB(0x0040b52e);
    /* 0040b52e: mov ebx, dword ptr [ecx + 0x13c] */ r_ebx = R32((u32)(r_ecx+0x13cu));
    /* 0040b534: mov edx, dword ptr [ecx + 0x19c] */ r_edx = R32((u32)(r_ecx+0x19cu));
L_0040b53a:; BB(0x0040b53a);
    /* 0040b53a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0040b53c: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b53e: je 0x40b548 */ if (fZ) goto L_0040b548;
L_0040b540:; BB(0x0040b540);
    /* 0040b540: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b542: jae 0x40b557 */ if (!fC) goto L_0040b557;
L_0040b544:; BB(0x0040b544);
    /* 0040b544: mov esi, eax */ r_esi = r_eax;
    /* 0040b546: jmp 0x40b557 */ goto L_0040b557;
L_0040b548:; BB(0x0040b548);
    /* 0040b548: cmp eax, dword ptr [ecx + 0x140] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x140u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040b54e: jbe 0x40b557 */ if ((fC||fZ)) goto L_0040b557;
L_0040b550:; BB(0x0040b550);
    /* 0040b550: mov esi, eax */ r_esi = r_eax;
    /* 0040b552: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0040b554: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0040b557:; BB(0x0040b557);
    /* 0040b557: fld dword ptr [ecx + 0x148] */ FPUSH(R_F32((u32)(r_ecx+0x148u)));
    /* 0040b55d: fld dword ptr [ecx + 0x150] */ FPUSH(R_F32((u32)(r_ecx+0x150u)));
    /* 0040b563: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0040b565: fld dword ptr [ecx + 0x154] */ FPUSH(R_F32((u32)(r_ecx+0x154u)));
    /* 0040b56b: fsub dword ptr [ecx + 0x14c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x14cu));
    /* 0040b571: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0040b573: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040b575: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040b578: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0040b57b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0040b57e: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0040b581: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0040b583: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040b585: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0040b587: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b589: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0040b58b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b58d: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0040b58f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b591: fst dword ptr [esp + eax*8 + 8] */ W_F32((u32)(r_esp+r_eax*8+0x8u), ST(0));
    /* 0040b595: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b597: fst dword ptr [esp + eax*8 + 0xc] */ W_F32((u32)(r_esp+r_eax*8+0xcu), ST(0));
    /* 0040b59b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040b59d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040b59f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040b5a1: fst dword ptr [ecx + edx*8 + 0x1c] */ W_F32((u32)(r_ecx+r_edx*8+0x1cu), ST(0));
    /* 0040b5a5: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0040b5a7: fld dword ptr [ecx + 0x14c] */ FPUSH(R_F32((u32)(r_ecx+0x14cu)));
    /* 0040b5ad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b5af: fstp dword ptr [ecx + edx*8 + 0x24] */ W_F32((u32)(r_ecx+r_edx*8+0x24u), ST(0)); FPOP();
    /* 0040b5b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040b5b5: fst dword ptr [ecx + edx*8 + 0x20] */ W_F32((u32)(r_ecx+r_edx*8+0x20u), ST(0));
    /* 0040b5b9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0040b5bb: fstp dword ptr [ecx + edx*8 + 0x28] */ W_F32((u32)(r_ecx+r_edx*8+0x28u), ST(0)); FPOP();
    /* 0040b5bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b5c2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b5c5: jb 0x40b52e */ if (fC) goto L_0040b52e;
L_0040b5cb:; BB(0x0040b5cb);
    /* 0040b5cb: jmp 0x40b5d3 */ goto L_0040b5d3;
L_0040b5cd:; BB(0x0040b5cd);
    /* 0040b5cd: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b5d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b5d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b5d2: ret  */ FN_RET(0x0040b49c); r_esp += 4; return;
L_0040b5d3:; BB(0x0040b5d3);
    /* 0040b5d3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b5d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040b5d7: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b5da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b5db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b5dc: ret  */ FN_RET(0x0040b49c); r_esp += 4; return;
}

void f_0040b5e0(void) /* sub_40B5E0 */
{
    FN_ENTER(0x0040b5e0);
    /* 0040b5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b5e1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b5e4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0040b5e6: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040b5eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b5ed: jne 0x40b5f4 */ if (!fZ) goto L_0040b5f4;
L_0040b5ef:; BB(0x0040b5ef);
    /* 0040b5ef: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b5f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b5f3: ret  */ FN_RET(0x0040b5e0); r_esp += 4; return;
L_0040b5f4:; BB(0x0040b5f4);
    /* 0040b5f4: mov ecx, dword ptr [0xa3adc0] */ r_ecx = R32((u32)(0xa3adc0u));
    /* 0040b5fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b5fc: je 0x40b62b */ if (fZ) goto L_0040b62b;
L_0040b5fe:; BB(0x0040b5fe);
    /* 0040b5fe: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x40b603u); f_00829cc8();
    /* 0040b603: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0040b608: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x40b60du); f_0082bb30();
    /* 0040b60d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b60f: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0040b614: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x40b619u); f_0082bb60();
    /* 0040b619: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b61e: lea ecx, [ebp + 0x1c] */ r_ecx = (u32)(r_ebp+0x1cu);
    /* 0040b621: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x40b626u); f_0082b440();
    /* 0040b626: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x40b62bu); f_004ac444();
L_0040b62b:; BB(0x0040b62b);
    /* 0040b62b: fld dword ptr [0x8f9e48] */ FPUSH(R_F32((u32)(0x8f9e48u)));
    /* 0040b631: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 0040b634: fld dword ptr [0x8f9e4c] */ FPUSH(R_F32((u32)(0x8f9e4cu)));
    /* 0040b63a: fadd dword ptr [ebp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x20u));
    /* 0040b63d: mov eax, dword ptr [ebp + 0x1a0] */ r_eax = R32((u32)(r_ebp+0x1a0u));
    /* 0040b643: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b645: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0040b648: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0040b64c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0040b650: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x40b655u); f_007ab534();
    /* 0040b655: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b659: ret  */ FN_RET(0x0040b5e0); r_esp += 4; return;
}

void f_0040b6b0(void) /* sub_40B6B0 */
{
    FN_ENTER(0x0040b6b0);
    /* 0040b6b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040b6b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040b6b5: call 0x40b6d4 */ r_esp -= 4; W32(r_esp, 0x40b6bau); f_0040b6d4();
    /* 0040b6ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040b6be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b6c0: jne 0x40b6c6 */ if (!fZ) goto L_0040b6c6;
L_0040b6c2:; BB(0x0040b6c2);
    /* 0040b6c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b6c3: ret 4 */ FN_RET(0x0040b6b0); r_esp += 8; return;
L_0040b6c6:; BB(0x0040b6c6);
    /* 0040b6c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40b6ccu); f_005c2f74();
    /* 0040b6cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b6cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b6ce: ret 4 */ FN_RET(0x0040b6b0); r_esp += 8; return;
}

void f_0040b6d4(void) /* sub_40B6D4 */
{
    FN_ENTER(0x0040b6d4);
    /* 0040b6d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b6d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6d9: push 0x8cc5c4 */ { u32 v = 0x8cc5c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b6e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b6e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b6ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b6ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b6f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040b6f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040b6f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040b6fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040b6fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040b701: mov dword ptr [ecx], 0xaf2810 */ W32((u32)(r_ecx), 0xaf2810u);
    /* 0040b707: mov dword ptr [0xa3adcc], 0 */ W32((u32)(0xa3adccu), 0x0u);
    /* 0040b711: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040b718: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40b71du); f_008171e8();
    /* 0040b71d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b720: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040b727: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b729: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b72a: ret  */ FN_RET(0x0040b6d4); r_esp += 4; return;
}

void f_0040b72c(void) /* sub_40B72C */
{
    FN_ENTER(0x0040b72c);
    /* 0040b72c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b72d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b72f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b731: push 0x8cc5e0 */ { u32 v = 0x8cc5e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b736: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b73c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b73d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b744: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b747: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b74a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040b74d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040b750: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040b753: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b756: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0040b759: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40b75eu); f_008193cc();
    /* 0040b75e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040b765: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040b768: mov dword ptr [ebx], 0xaf2810 */ W32((u32)(r_ebx), 0xaf2810u);
    /* 0040b76e: mov edx, 0x8f8818 */ r_edx = 0x8f8818u;
    /* 0040b773: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b775: mov eax, dword ptr [0x9a30f4] */ r_eax = R32((u32)(0x9a30f4u));
    /* 0040b77a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b77c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b77e: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0040b781: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b782: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 0040b785: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 0040b788: mov dword ptr [ebx + 0x3c], ecx */ W32((u32)(r_ebx+0x3cu), r_ecx);
    /* 0040b78b: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 0040b78e: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 0040b791: mov dword ptr [ebx + 0x40], ecx */ W32((u32)(r_ebx+0x40u), r_ecx);
    /* 0040b794: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x40b799u); f_004088b8();
    /* 0040b799: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b79c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040b79f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b7a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b7a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040b7ac: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b7ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b7af: ret 4 */ FN_RET(0x0040b72c); r_esp += 8; return;
}

void f_0040b7b4(void) /* sub_40B7B4 */
{
    FN_ENTER(0x0040b7b4);
    /* 0040b7b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0040b7b8: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040b7bc: cmp eax, dword ptr [ecx + edx*4 + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+r_edx*4+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040b7c0: je 0x40b7ce */ if (fZ) goto L_0040b7ce;
L_0040b7c2:; BB(0x0040b7c2);
    /* 0040b7c2: mov dword ptr [ecx + edx*4 + 0x3c], 0 */ W32((u32)(r_ecx+r_edx*4+0x3cu), 0x0u);
    /* 0040b7ca: mov dword ptr [ecx + edx*4 + 0x1c], eax */ W32((u32)(r_ecx+r_edx*4+0x1cu), r_eax);
L_0040b7ce:; BB(0x0040b7ce);
    /* 0040b7ce: mov dword ptr [ecx + edx*4 + 0x24], eax */ W32((u32)(r_ecx+r_edx*4+0x24u), r_eax);
    /* 0040b7d2: ret 8 */ FN_RET(0x0040b7b4); r_esp += 12; return;
}

void f_0040b7d8(void) /* sub_40B7D8 */
{
    FN_ENTER(0x0040b7d8);
    /* 0040b7d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040b7d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b7da: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b7dd: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b7df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040b7e1: mov ebx, eax */ r_ebx = r_eax;
    /* 0040b7e3: mov esi, edx */ r_esi = r_edx;
L_0040b7e5:; BB(0x0040b7e5);
    /* 0040b7e5: push dword ptr [esi + ebx*4 + 0x1c] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b7e9: mov eax, dword ptr [esi + ebx*4 + 0x3c] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x3cu));
    /* 0040b7ed: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040b7f0: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0040b7f5: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b7fa: jb 0x40b7fe */ if (fC) goto L_0040b7fe;
L_0040b7fc:; BB(0x0040b7fc);
    /* 0040b7fc: mov eax, ecx */ r_eax = r_ecx;
L_0040b7fe:; BB(0x0040b7fe);
    /* 0040b7fe: mov dword ptr [esi + ebx*4 + 0x3c], eax */ W32((u32)(r_esi+r_ebx*4+0x3cu), r_eax);
    /* 0040b802: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x40b807u); f_007ac344();
    /* 0040b807: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b808: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0040b80b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0040b80e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0040b812: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0040b816: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040b819: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040b81b: fadd dword ptr [eax*4 + 0x8f9e78] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8f9e78u));
    /* 0040b822: fsubr dword ptr [0x8f9e8c] */ ST(0) = R_F32((u32)(0x8f9e8cu)) - ST(0);
    /* 0040b828: fdiv dword ptr [0x8f9e88] */ ST(0) = ST(0) / R_F32((u32)(0x8f9e88u));
    /* 0040b82e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040b830: fstp dword ptr [esi + ebx*8 + 0x2c] */ W_F32((u32)(r_esi+r_ebx*8+0x2cu), ST(0)); FPOP();
    /* 0040b834: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0040b837: fadd dword ptr [ecx*4 + 0x8f9e78] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8f9e78u));
    /* 0040b83e: fmul dword ptr [0x8f9e84] */ ST(0) = ST(0) * R_F32((u32)(0x8f9e84u));
    /* 0040b844: fadd dword ptr [0x8f9e80] */ ST(0) = ST(0) + R_F32((u32)(0x8f9e80u));
    /* 0040b84a: fstp dword ptr [esi + ebx*8 + 0x30] */ W_F32((u32)(r_esi+r_ebx*8+0x30u), ST(0)); FPOP();
    /* 0040b84e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040b851: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b854: jb 0x40b7e5 */ if (fC) goto L_0040b7e5;
L_0040b856:; BB(0x0040b856);
    /* 0040b856: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b859: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040b85a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040b85b: ret  */ FN_RET(0x0040b7d8); r_esp += 4; return;
}

void f_0040b85c(void) /* sub_40B85C */
{
    FN_ENTER(0x0040b85c);
    /* 0040b85c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b85f: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b861: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 0040b866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b868: jne 0x40b86e */ if (!fZ) goto L_0040b86e;
L_0040b86a:; BB(0x0040b86a);
    /* 0040b86a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b86d: ret  */ FN_RET(0x0040b85c); r_esp += 4; return;
L_0040b86e:; BB(0x0040b86e);
    /* 0040b86e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0040b872: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0040b875: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040b877: mov ebx, eax */ r_ebx = r_eax;
    /* 0040b879: mov esi, edx */ r_esi = r_edx;
L_0040b87b:; BB(0x0040b87b);
    /* 0040b87b: mov ecx, dword ptr [esi + ebx*4 + 0x3c] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x3cu));
    /* 0040b87f: shl ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0040b882: or ecx, 0xffffff */ {  u32 a = r_ecx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040b888: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040b889: push dword ptr [esi + ebx*4 + 0x1c] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b88d: push dword ptr [esi + ebx*8 + 0x30] */ { u32 v = R32((u32)(r_esi+r_ebx*8+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b891: push dword ptr [esi + ebx*8 + 0x2c] */ { u32 v = R32((u32)(r_esi+r_ebx*8+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b895: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x40b89au); f_007ac12c();
    /* 0040b89a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040b89d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040b8a0: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040b8a3: jb 0x40b87b */ if (fC) goto L_0040b87b;
L_0040b8a5:; BB(0x0040b8a5);
    /* 0040b8a5: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0040b8a9: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0040b8ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040b8af: ret  */ FN_RET(0x0040b85c); r_esp += 4; return;
}

void f_0040b8b0(void) /* sub_40B8B0 */
{
    FN_ENTER(0x0040b8b0);
    /* 0040b8b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b8b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b8b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b8b5: push 0x8cc5fc */ { u32 v = 0x8cc5fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b8ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b8c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b8c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b8c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b8cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b8ce: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040b8d1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040b8d4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040b8d7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040b8da: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040b8dd: mov eax, ecx */ r_eax = r_ecx;
    /* 0040b8df: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0040b8e2: mov dword ptr [eax], 0xaf2870 */ W32((u32)(r_eax), 0xaf2870u);
    /* 0040b8e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b8ea: je 0x40b902 */ if (fZ) goto L_0040b902;
L_0040b8ec:; BB(0x0040b8ec);
    /* 0040b8ec: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040b8f0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040b8f5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040b8f9: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b8fb: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
L_0040b902:; BB(0x0040b902);
    /* 0040b902: mov eax, ecx */ r_eax = r_ecx;
    /* 0040b904: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0040b907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b909: je 0x40b921 */ if (fZ) goto L_0040b921;
L_0040b90b:; BB(0x0040b90b);
    /* 0040b90b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040b90f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040b914: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040b918: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b91a: mov dword ptr [edx + 0x20], 0 */ W32((u32)(r_edx+0x20u), 0x0u);
L_0040b921:; BB(0x0040b921);
    /* 0040b921: mov eax, ecx */ r_eax = r_ecx;
    /* 0040b923: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0040b926: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b928: je 0x40b940 */ if (fZ) goto L_0040b940;
L_0040b92a:; BB(0x0040b92a);
    /* 0040b92a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040b92e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040b933: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040b937: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b939: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
L_0040b940:; BB(0x0040b940);
    /* 0040b940: mov eax, ecx */ r_eax = r_ecx;
    /* 0040b942: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0040b945: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040b947: je 0x40b95f */ if (fZ) goto L_0040b95f;
L_0040b949:; BB(0x0040b949);
    /* 0040b949: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040b94d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040b952: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0040b956: mov edx, ecx */ r_edx = r_ecx;
    /* 0040b958: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
L_0040b95f:; BB(0x0040b95f);
    /* 0040b95f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040b966: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40b96bu); f_008171e8();
    /* 0040b96b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040b96e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040b970: jne 0x40b982 */ if (!fZ) goto L_0040b982;
L_0040b972:; BB(0x0040b972);
    /* 0040b972: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040b975: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040b97c: mov esp, ebp */ r_esp = r_ebp;
    /* 0040b97e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040b97f: ret 4 */ FN_RET(0x0040b8b0); r_esp += 8; return;
L_0040b982:; BB(0x0040b982);
    /* 0040b982: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040b985: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b986: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40b98bu); f_005c2f74();
    /* 0040b98b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040b98c: jmp 0x40b972 */ goto L_0040b972;
}

void f_0040b990(void) /* sub_40B990 */
{
    FN_ENTER(0x0040b990);
    /* 0040b990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040b991: mov ebp, esp */ r_ebp = r_esp;
    /* 0040b993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040b995: push 0x8cc618 */ { u32 v = 0x8cc618u; r_esp -= 4; W32(r_esp, v); }
    /* 0040b99a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040b9a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040b9a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040b9a8: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040b9ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040b9ae: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0040b9b1: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0040b9b4: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0040b9b7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040b9ba: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0040b9bd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40b9c2u); f_008193cc();
    /* 0040b9c2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040b9c9: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040b9cc: mov dword ptr [edx], 0xaf2870 */ W32((u32)(r_edx), 0xaf2870u);
    /* 0040b9d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040b9d4: mov ebx, dword ptr [0x9a30fc] */ r_ebx = R32((u32)(0x9a30fcu));
    /* 0040b9da: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 0040b9dd: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 0040b9e3: mov dword ptr [edx + 0xc0], eax */ W32((u32)(r_edx+0xc0u), r_eax);
    /* 0040b9e9: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 0040b9ef: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0040b9f1: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0040b9f6: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0040b9f9: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0040b9fc: fadd dword ptr [0x8f9e98] */ ST(0) = ST(0) + R_F32((u32)(0x8f9e98u));
    /* 0040ba02: mov esi, 0x77 */ r_esi = 0x77u;
    /* 0040ba07: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0040ba0a: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0040ba0d: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0040ba10: fadd dword ptr [0x8f9e98] */ ST(0) = ST(0) + R_F32((u32)(0x8f9e98u));
    /* 0040ba16: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0040ba19: mov edi, 0x3f */ r_edi = 0x3fu;
    /* 0040ba1e: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0040ba21: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 0040ba24: fadd dword ptr [0x8f9e98] */ ST(0) = ST(0) + R_F32((u32)(0x8f9e98u));
    /* 0040ba2a: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
L_0040ba2d:; BB(0x0040ba2d);
    /* 0040ba2d: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 0040ba30: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0040ba33: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0040ba36: fld dword ptr [0x8f9ec0] */ FPUSH(R_F32((u32)(0x8f9ec0u)));
    /* 0040ba3c: fld dword ptr [0x8f9ec4] */ FPUSH(R_F32((u32)(0x8f9ec4u)));
    /* 0040ba42: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040ba45: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ba4a: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0040ba4d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ba4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040ba51: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0040ba53: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0040ba56: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0040ba58: fst dword ptr [eax + edx + 0xc8] */ W_F32((u32)(r_eax+r_edx+0xc8u), ST(0));
    /* 0040ba5f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0040ba61: fstp dword ptr [eax + edx + 0xcc] */ W_F32((u32)(r_eax+r_edx+0xccu), ST(0)); FPOP();
    /* 0040ba68: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040ba6a: fstp dword ptr [eax + edx + 0xd0] */ W_F32((u32)(r_eax+r_edx+0xd0u), ST(0)); FPOP();
    /* 0040ba71: fstp dword ptr [eax + edx + 0xd4] */ W_F32((u32)(r_eax+r_edx+0xd4u), ST(0)); FPOP();
    /* 0040ba78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040ba7a: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0040ba80: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 0040ba86: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0040ba88: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040ba8a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0040ba8d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040ba8f: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0040ba92: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040ba94: fstp dword ptr [eax + edx + 0x2c] */ W_F32((u32)(r_eax+r_edx+0x2cu), ST(0)); FPOP();
    /* 0040ba98: lea esi, [edx + eax + 0x2c] */ r_esi = (u32)(r_edx+r_eax+0x2cu);
    /* 0040ba9c: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 0040baa2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040baa4: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 0040baaa: fstp dword ptr [eax + edx + 0x30] */ W_F32((u32)(r_eax+r_edx+0x30u), ST(0)); FPOP();
    /* 0040baae: lea ecx, [edx + eax + 0x5c] */ r_ecx = (u32)(r_edx+r_eax+0x5cu);
    /* 0040bab2: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 0040bab5: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0040babb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040babd: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 0040bac3: fstp dword ptr [eax + edx + 0x34] */ W_F32((u32)(r_eax+r_edx+0x34u), ST(0)); FPOP();
    /* 0040bac7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0040baca: mov dword ptr [eax + edx + 0x60], 0 */ W32((u32)(r_eax+r_edx+0x60u), 0x0u);
    /* 0040bad2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bad3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bad5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bad6: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040bad8: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 0040badb: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040badd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040badf: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0040bae1: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0040bae4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bae6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bae8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040baea: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040baec: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040baee: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040baf0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040baf3: mov dword ptr [eax + edx + 0x5c], edi */ W32((u32)(r_eax+r_edx+0x5cu), r_edi);
    /* 0040baf7: mov dword ptr [eax + edx + 0x64], edi */ W32((u32)(r_eax+r_edx+0x64u), r_edi);
    /* 0040bafb: call 0x50a664 */ r_esp -= 4; W32(r_esp, 0x40bb00u); f_0050a664();
    /* 0040bb00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040bb03: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0040bb06: mov dword ptr [edx + ebx*4 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*4+0x1cu), r_eax);
    /* 0040bb0a: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040bb0d: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040bb10: jb 0x40ba2d */ if (fC) goto L_0040ba2d;
L_0040bb16:; BB(0x0040bb16);
    /* 0040bb16: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040bb19: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0040bb1c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040bb1f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040bb21: mov dword ptr [edx + 0x8c], ecx */ W32((u32)(r_edx+0x8cu), r_ecx);
    /* 0040bb27: mov dword ptr [edx + 0x98], ecx */ W32((u32)(r_edx+0x98u), r_ecx);
    /* 0040bb2d: mov dword ptr [edx + 0x94], 0x5b */ W32((u32)(r_edx+0x94u), 0x5bu);
    /* 0040bb37: mov eax, 0xffffffa5 */ r_eax = 0xffffffa5u;
    /* 0040bb3c: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0040bb42: mov dword ptr [edx + 0xa4], ecx */ W32((u32)(r_edx+0xa4u), r_ecx);
    /* 0040bb48: mov dword ptr [edx + 0xac], 0xb6 */ W32((u32)(r_edx+0xacu), 0xb6u);
    /* 0040bb52: mov dword ptr [edx + 0xb0], ecx */ W32((u32)(r_edx+0xb0u), r_ecx);
    /* 0040bb58: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 0040bb5e: mov eax, edx */ r_eax = r_edx;
    /* 0040bb60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040bb63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040bb6a: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bb6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bb6d: ret 4 */ FN_RET(0x0040b990); r_esp += 8; return;
}

void f_0040bb70(void) /* sub_40BB70 */
{
    FN_ENTER(0x0040bb70);
    /* 0040bb70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb74: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bb77: mov esi, ecx */ r_esi = r_ecx;
    /* 0040bb79: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0040bb7e: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bb84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bb85: call 0x40e210 */ r_esp -= 4; W32(r_esp, 0x40bb8au); f_0040e210();
    /* 0040bb8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040bb8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bb8d: je 0x40bbb9 */ if (fZ) goto L_0040bbb9;
L_0040bb8f:; BB(0x0040bb8f);
    /* 0040bb8f: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0040bb95: mov dword ptr [esi + 0xc0], 0 */ W32((u32)(r_esi+0xc0u), 0x0u);
    /* 0040bb9f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040bba2: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040bba5: jb 0x40bbb3 */ if (fC) goto L_0040bbb3;
L_0040bba7:; BB(0x0040bba7);
    /* 0040bba7: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 0040bbb1: jmp 0x40bbb9 */ goto L_0040bbb9;
L_0040bbb3:; BB(0x0040bbb3);
    /* 0040bbb3: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
L_0040bbb9:; BB(0x0040bbb9);
    /* 0040bbb9: movsx ebx, word ptr [0xaae8b0] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xaae8b0u));
    /* 0040bbc0: movsx ecx, word ptr [0xaae8b2] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xaae8b2u));
    /* 0040bbc7: mov eax, ebx */ r_eax = r_ebx;
    /* 0040bbc9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040bbca: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040bbcc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bbce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040bbd0: jle 0x40be4c */ if ((fZ||fS!=fO)) goto L_0040be4c;
L_0040bbd6:; BB(0x0040bbd6);
    /* 0040bbd6: fld dword ptr [0x9a30f8] */ FPUSH(R_F32((u32)(0x9a30f8u)));
    /* 0040bbdc: fld dword ptr [0x8f9ebc] */ FPUSH(R_F32((u32)(0x8f9ebcu)));
    /* 0040bbe2: fld dword ptr [0x8f9eb8] */ FPUSH(R_F32((u32)(0x8f9eb8u)));
    /* 0040bbe8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0040bbeb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0040bbee: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0040bbf0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bbf4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bbf9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bbfe: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bc02: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bc06: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bc0a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bc0e: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0040bc12: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0040bc16: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bc1a: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0040bc1c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040bc1e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bc22: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bc27: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bc2c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bc30: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bc34: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bc38: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bc3c: mov eax, ebp */ r_eax = r_ebp;
    /* 0040bc3e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0040bc42: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bc44: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040bc48: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bc4c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bc4e: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040bc50: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bc54: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bc59: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bc5e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bc62: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bc66: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bc6a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bc6e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0040bc73: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0040bc77: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bc79: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0040bc7c: mov eax, edi */ r_eax = r_edi;
    /* 0040bc7e: mov ebx, edx */ r_ebx = r_edx;
    /* 0040bc80: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0040bc82: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0040bc84: mov dword ptr [esi + 0x8c], ebx */ W32((u32)(r_esi+0x8cu), r_ebx);
    /* 0040bc8a: add dword ptr [esi + 0x5c], ebx */ { u32 ad = (u32)(r_esi+0x5cu);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bc8d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bc8f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040bc91: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0040bc93: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040bc97: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bc9b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bc9d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040bc9f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bca3: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bca8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bcad: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bcb1: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bcb5: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bcb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bcbd: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0040bcc2: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 0040bcc6: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bcc8: mov eax, ecx */ r_eax = r_ecx;
    /* 0040bcca: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0040bccd: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0040bccf: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040bcd1: mov dword ptr [esi + 0x94], edx */ W32((u32)(r_esi+0x94u), r_edx);
    /* 0040bcd7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0040bcdb: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0040bcdf: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040bce1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0040bce5: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bce9: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0040bced: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bcef: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040bcf1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bcf5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bcfa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bcff: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bd03: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bd07: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bd0b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bd0f: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bd13: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0040bd17: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bd19: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040bd1b: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0040bd1f: mov edx, eax */ r_edx = r_eax;
    /* 0040bd21: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0040bd23: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0040bd26: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040bd28: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bd2c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bd31: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bd36: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bd3a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bd3e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bd42: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bd46: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040bd4a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040bd4c: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0040bd4e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0040bd52: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0040bd55: mov dword ptr [esi + 0x98], edx */ W32((u32)(r_esi+0x98u), r_edx);
    /* 0040bd5b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0040bd5f: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0040bd64: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bd66: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0040bd69: mov eax, ecx */ r_eax = r_ecx;
    /* 0040bd6b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040bd6d: mov dword ptr [esi + 0xa0], edx */ W32((u32)(r_esi+0xa0u), r_edx);
    /* 0040bd73: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0040bd76: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bd78: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040bd7c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0040bd81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040bd86: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040bd8a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0040bd8e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0040bd92: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040bd96: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0040bd9a: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0040bd9c: mov dword ptr [esi + 0xa4], ecx */ W32((u32)(r_esi+0xa4u), r_ecx);
    /* 0040bda2: add dword ptr [esi + 0x74], ecx */ { u32 ad = (u32)(r_esi+0x74u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bda5: mov eax, 0x2aaaaaab */ r_eax = 0x2aaaaaabu;
    /* 0040bdaa: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0040bdac: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 0040bdaf: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0040bdb3: add dword ptr [esi + 0x68], eax */ { u32 ad = (u32)(r_esi+0x68u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bdb6: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0040bdbc: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0040bdbe: add dword ptr [esi + 0x80], eax */ { u32 ad = (u32)(r_esi+0x80u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bdc4: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0040bdc8: mov dword ptr [esi + 0xac], edx */ W32((u32)(r_esi+0xacu), r_edx);
L_0040bdce:; BB(0x0040bdce);
    /* 0040bdce: mov edx, dword ptr [esi + 0xac] */ r_edx = R32((u32)(r_esi+0xacu));
    /* 0040bdd4: mov ebx, dword ptr [esi + 0xb8] */ r_ebx = R32((u32)(r_esi+0xb8u));
    /* 0040bdda: add dword ptr [esi + 0x64], eax */ { u32 ad = (u32)(r_esi+0x64u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bddd: mov eax, dword ptr [esi + 0xa0] */ r_eax = R32((u32)(r_esi+0xa0u));
    /* 0040bde3: add dword ptr [esi + 0x70], eax */ { u32 ad = (u32)(r_esi+0x70u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bde6: lea edi, [esi + 0x1c] */ r_edi = (u32)(r_esi+0x1cu);
    /* 0040bde9: lea ebp, [esi + 0x5c] */ r_ebp = (u32)(r_esi+0x5cu);
    /* 0040bdec: add dword ptr [esi + 0x7c], edx */ { u32 ad = (u32)(r_esi+0x7cu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bdef: add dword ptr [esi + 0x88], ebx */ { u32 ad = (u32)(r_esi+0x88u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040bdf5: lea ebx, [esi + 0x2c] */ r_ebx = (u32)(r_esi+0x2cu);
L_0040bdf8:; BB(0x0040bdf8);
    /* 0040bdf8: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0040bdfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040bdfc: je 0x40be18 */ if (fZ) goto L_0040be18;
L_0040bdfe:; BB(0x0040bdfe);
    /* 0040bdfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bdff: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x40be04u); f_00508dd0();
    /* 0040be04: mov eax, dword ptr [esi + 0xbc] */ r_eax = R32((u32)(r_esi+0xbcu));
    /* 0040be0a: push dword ptr [eax*4 + 0x8f9ea0] */ { u32 v = R32((u32)(r_eax*4+0x8f9ea0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040be11: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0040be13: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x40be18u); f_00508ee4();
L_0040be18:; BB(0x0040be18);
    /* 0040be18: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0040be1b: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040be1e: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0040be20: ja 0x40bdf8 */ if ((!fC&&!fZ)) goto L_0040bdf8;
L_0040be22:; BB(0x0040be22);
    /* 0040be22: mov edx, dword ptr [esi + 0xc0] */ r_edx = R32((u32)(r_esi+0xc0u));
    /* 0040be28: add dword ptr [esi + 0xc4], 1 */ { u32 ad = (u32)(r_esi+0xc4u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0040be2f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0040be32: mov eax, 0xc */ r_eax = 0xcu;
    /* 0040be37: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0040be3a: jb 0x40be3e */ if (fC) goto L_0040be3e;
L_0040be3c:; BB(0x0040be3c);
    /* 0040be3c: mov edx, eax */ r_edx = r_eax;
L_0040be3e:; BB(0x0040be3e);
    /* 0040be3e: mov dword ptr [esi + 0xc0], edx */ W32((u32)(r_esi+0xc0u), r_edx);
    /* 0040be44: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040be47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040be48: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040be49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040be4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040be4b: ret  */ FN_RET(0x0040bb70); r_esp += 4; return;
L_0040be4c:; BB(0x0040be4c);
    /* 0040be4c: mov eax, ecx */ r_eax = r_ecx;
    /* 0040be4e: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0040be4f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040be51: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0040be53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0040be55: jg 0x40bbd6 */ if ((!fZ&&fS==fO)) goto L_0040bbd6;
L_0040be5b:; BB(0x0040be5b);
    /* 0040be5b: mov eax, dword ptr [esi + 0x94] */ r_eax = R32((u32)(r_esi+0x94u));
    /* 0040be61: jmp 0x40bdce */ goto L_0040bdce;
}

void f_0040be68(void) /* sub_40BE68 */
{
    FN_ENTER(0x0040be68);
    /* 0040be68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040be69: mov ebp, esp */ r_ebp = r_esp;
    /* 0040be6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040be6d: push 0x8cc634 */ { u32 v = 0x8cc634u; r_esp -= 4; W32(r_esp, v); }
    /* 0040be72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040be78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040be79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040be80: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040be83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040be86: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040be89: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040be8c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040be8f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0040be92: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040be95: mov edx, ecx */ r_edx = r_ecx;
    /* 0040be97: mov ebx, dword ptr [edx + 0x20] */ r_ebx = R32((u32)(r_edx+0x20u));
    /* 0040be9a: mov dword ptr [edx], 0xaf28d0 */ W32((u32)(r_edx), 0xaf28d0u);
    /* 0040bea0: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040bea4: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040beaa: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040beae: mov edi, dword ptr [edx + 0x24] */ r_edi = R32((u32)(r_edx+0x24u));
    /* 0040beb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0040beb3: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0040beb6: movzx esi, word ptr [edi + 8] */ r_esi = (u32)R16((u32)(r_edi+0x8u));
    /* 0040beba: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0040bec0: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0040bec4: mov ebx, dword ptr [edx + 0x28] */ r_ebx = R32((u32)(r_edx+0x28u));
    /* 0040bec7: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0040beca: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040bece: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bed4: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040bed8: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0040bedb: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 0040bede: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040bee2: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bee8: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040beec: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 0040beef: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 0040bef2: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 0040bef6: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0040befc: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0040bf00: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0040bf03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0040bf0a: mov ecx, edx */ r_ecx = r_edx;
    /* 0040bf0c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40bf11u); f_008171e8();
    /* 0040bf11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0040bf14: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040bf16: jne 0x40bf31 */ if (!fZ) goto L_0040bf31;
L_0040bf18:; BB(0x0040bf18);
    /* 0040bf18: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040bf1b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040bf1e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040bf21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040bf24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040bf2b: mov esp, ebp */ r_esp = r_ebp;
    /* 0040bf2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040bf2e: ret 4 */ FN_RET(0x0040be68); r_esp += 8; return;
L_0040bf31:; BB(0x0040bf31);
    /* 0040bf31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf35: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x40bf3au); f_005c2f74();
    /* 0040bf3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040bf3b: jmp 0x40bf18 */ goto L_0040bf18;
}

void f_0040bf40(void) /* sub_40BF40 */
{
    FN_ENTER(0x0040bf40);
    /* 0040bf40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf41: mov ebp, esp */ r_ebp = r_esp;
    /* 0040bf43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf45: push 0x8cc650 */ { u32 v = 0x8cc650u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040bf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040bf51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0040bf58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040bf5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040bf5e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0040bf61: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0040bf64: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0040bf67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0040bf6a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040bf6d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0040bf70: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0040bf73: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x40bf78u); f_008193cc();
    /* 0040bf78: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040bf7f: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040bf82: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0040bf85: fld dword ptr [0x8f9edc] */ FPUSH(R_F32((u32)(0x8f9edcu)));
    /* 0040bf8b: mov dword ptr [eax], 0xaf28d0 */ W32((u32)(r_eax), 0xaf28d0u);
    /* 0040bf91: mov edx, dword ptr [0x9a3100] */ r_edx = R32((u32)(0x9a3100u));
    /* 0040bf97: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0040bf9a: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0040bf9c: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0040bf9f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0040bfa2: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 0040bfa5: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0040bfa8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0040bfab: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 0040bfb1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bfb3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0040bfb5: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0040bfbb: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0040bfbe: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 0040bfc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bfc6: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 0040bfcc: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0040bfcf: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0040bfd5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040bfd7: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 0040bfdd: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
L_0040bfe0:; BB(0x0040bfe0);
    /* 0040bfe0: mov dword ptr [eax + esi*4 + 0x20], 0 */ W32((u32)(r_eax+r_esi*4+0x20u), 0x0u);
    /* 0040bfe8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfea: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0040bfed: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040bff0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0040bff3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bff5: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0040bff8: lea edi, [ecx + edx + 0x9a3104] */ r_edi = (u32)(r_ecx+r_edx+0x9a3104u);
    /* 0040bfff: push dword ptr [ecx + 0x8f9ec8] */ { u32 v = R32((u32)(r_ecx+0x8f9ec8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c005: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c007: call 0x50a3a0 */ r_esp -= 4; W32(r_esp, 0x40c00cu); f_0050a3a0();
    /* 0040c00c: mov edx, eax */ r_edx = r_eax;
    /* 0040c00e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c011: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c014: mov dword ptr [eax + ebx*2 + 0x20], edx */ W32((u32)(r_eax+r_ebx*2+0x20u), r_edx);
    /* 0040c018: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040c01b: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c01e: jb 0x40bfe0 */ if (fC) goto L_0040bfe0;
L_0040c020:; BB(0x0040c020);
    /* 0040c020: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c023: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c026: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040c029: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c02c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c033: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c036: ret 8 */ FN_RET(0x0040bf40); r_esp += 12; return;
}

void f_0040bf80(void)
{
    FN_ENTER(0x0040bf80);
    /* 0040bf80: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0040bf81: fmul qword ptr [ebx + 0x5d9ec75] */ ST(0) = ST(0) * R_F64((u32)(r_ebx+0x5d9ec75u));
    /* 0040bf87: fcomp qword ptr [esi + 0xc7008f] */ fx_compare(ST(0), R_F64((u32)(r_esi+0xc7008fu))); FPOP();
    /* 0040bf8d: shr byte ptr [eax], 1 */ { u32 ad = (u32)(r_eax); u32 c = (1u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); W8(ad, r); fC = (c <= 8) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 7) & 1; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0040bf8f: scasd eax, dword ptr es:[edi] */ { u32 a = r_eax; u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_edi += rt_df ? -4 : 4;  }
    /* 0040bf90: add byte ptr [ebx - 0x65ceffeb], cl */ { u32 ad = (u32)(r_ebx+0x9a310015u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040bf96: add byte ptr [ecx + 0xe8b0450], cl */ { u32 ad = (u32)(r_ecx+0xe8b0450u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0040bf9c: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 0040bf9f: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0040bfa2: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 0040bfa5: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 0040bfa8: mov dword ptr [eax + 0x3c], edi */ W32((u32)(r_eax+0x3cu), r_edi);
    /* 0040bfab: fld dword ptr [0xa4878c] */ FPUSH(R_F32((u32)(0xa4878cu)));
    /* 0040bfb1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bfb3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0040bfb5: fadd dword ptr [0xa48780] */ ST(0) = ST(0) + R_F32((u32)(0xa48780u));
    /* 0040bfbb: fstp dword ptr [eax + 0x34] */ W_F32((u32)(r_eax+0x34u), ST(0)); FPOP();
    /* 0040bfbe: fld dword ptr [0xa48790] */ FPUSH(R_F32((u32)(0xa48790u)));
    /* 0040bfc4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0040bfc6: fadd dword ptr [0xa48784] */ ST(0) = ST(0) + R_F32((u32)(0xa48784u));
    /* 0040bfcc: fstp dword ptr [eax + 0x38] */ W_F32((u32)(r_eax+0x38u), ST(0)); FPOP();
    /* 0040bfcf: fld dword ptr [0xa48794] */ FPUSH(R_F32((u32)(0xa48794u)));
    /* 0040bfd5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0040bfd7: fadd dword ptr [0xa48788] */ ST(0) = ST(0) + R_F32((u32)(0xa48788u));
    /* 0040bfdd: fstp dword ptr [eax + 0x3c] */ W_F32((u32)(r_eax+0x3cu), ST(0)); FPOP();
L_0040bfe0:; BB(0x0040bfe0);
    /* 0040bfe0: mov dword ptr [eax + esi*4 + 0x20], 0 */ W32((u32)(r_eax+r_esi*4+0x20u), 0x0u);
    /* 0040bfe8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040bfea: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0040bfed: add eax, 0x34 */ {  u32 a = r_eax; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0040bff0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0040bff3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040bff5: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0040bff8: lea edi, [ecx + edx + 0x9a3104] */ r_edi = (u32)(r_ecx+r_edx+0x9a3104u);
    /* 0040bfff: push dword ptr [ecx + 0x8f9ec8] */ { u32 v = R32((u32)(r_ecx+0x8f9ec8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040c005: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040c006: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040c007: call 0x50a3a0 */ r_esp -= 4; W32(r_esp, 0x40c00cu); f_0050a3a0();
    /* 0040c00c: mov edx, eax */ r_edx = r_eax;
    /* 0040c00e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0040c011: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0040c014: mov dword ptr [eax + ebx*2 + 0x20], edx */ W32((u32)(r_eax+r_ebx*2+0x20u), r_edx);
    /* 0040c018: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040c01b: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0040c01e: jb 0x40bfe0 */ if (fC) goto L_0040bfe0;
L_0040c020:; BB(0x0040c020);
    /* 0040c020: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040c023: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0040c026: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040c029: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040c02c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040c033: mov esp, ebp */ r_esp = r_ebp;
    /* 0040c035: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040c036: ret 8 */ FN_RET(0x0040bf80); r_esp += 12; return;
}

