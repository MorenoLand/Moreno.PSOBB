#include "protos.h"

void f_007aa094(void) /* sub_7AA094 */
{
    FN_ENTER(0x007aa094);
    /* 007aa094: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa095: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa097: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aa09a: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa09c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aa09f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0a2: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa0a8: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa0aa: je 0x7aa0ae */ if (fZ) goto L_007aa0ae;
L_007aa0ac:; BB(0x007aa0ac);
    /* 007aa0ac: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa0ad: ret  */ FN_RET(0x007aa094); r_esp += 4; return;
L_007aa0ae:; BB(0x007aa0ae);
    /* 007aa0ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0b1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0b4: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa0ba: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 007aa0c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aa0c2: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0c5: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa0cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0ce: fld dword ptr [eax + 0xc4] */ FPUSH(R_F32((u32)(r_eax+0xc4u)));
    /* 007aa0d4: fld dword ptr [0x97d97c] */ FPUSH(R_F32((u32)(0x97d97cu)));
    /* 007aa0da: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa0dc: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 007aa0df: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0e2: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa0e8: and eax, 0xfffff7d5 */ {  u32 a = r_eax; u32 b = 0xfffff7d5u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007aa0ed: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0f0: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa0f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa0f9: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa0fb: call 0x7a9970 */ r_esp -= 4; W32(r_esp, 0x7aa100u); f_007a9970();
    /* 007aa100: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aa103: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aa108: je 0x7aa15d */ if (fZ) goto L_007aa15d;
L_007aa10a:; BB(0x007aa10a);
    /* 007aa10a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa10d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa110: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa116: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007aa11c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aa11e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aa120: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aa121: jp 0x7aa144 */ if (fP) goto L_007aa144;
L_007aa123:; BB(0x007aa123);
    /* 007aa123: jbe 0x7aa127 */ if ((fC||fZ)) goto L_007aa127;
L_007aa125:; BB(0x007aa125);
    /* 007aa125: jmp 0x7aa144 */ goto L_007aa144;
L_007aa127:; BB(0x007aa127);
    /* 007aa127: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa12a: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa12d: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa133: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 007aa139: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa13b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa13e: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
L_007aa144:; BB(0x007aa144);
    /* 007aa144: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa145: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa148: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa14b: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa152: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007aa156: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa158: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x7aa15du); f_007a9a6c();
L_007aa15d:; BB(0x007aa15d);
    /* 007aa15d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa160: movzx eax, word ptr [eax + 0xf4] */ r_eax = (u32)R16((u32)(r_eax+0xf4u));
    /* 007aa167: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007aa16a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007aa16d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aa170: je 0x7aa1a7 */ if (fZ) goto L_007aa1a7;
L_007aa172:; BB(0x007aa172);
    /* 007aa172: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007aa175: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aa178: je 0x7aa21f */ if (fZ) goto L_007aa21f;
L_007aa17e:; BB(0x007aa17e);
    /* 007aa17e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007aa181: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aa184: je 0x7aa2f9 */ if (fZ) goto L_007aa2f9;
L_007aa18a:; BB(0x007aa18a);
    /* 007aa18a: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007aa18d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aa190: je 0x7aa369 */ if (fZ) goto L_007aa369;
L_007aa196:; BB(0x007aa196);
    /* 007aa196: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007aa199: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007aa19c: je 0x7aa440 */ if (fZ) goto L_007aa440;
L_007aa1a2:; BB(0x007aa1a2);
    /* 007aa1a2: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa1a7:; BB(0x007aa1a7);
    /* 007aa1a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1aa: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1ad: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa1b3: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007aa1b9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aa1bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aa1bd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aa1be: jp 0x7aa45d */ if (fP) goto L_007aa45d;
L_007aa1c4:; BB(0x007aa1c4);
    /* 007aa1c4: jbe 0x7aa1cb */ if ((fC||fZ)) goto L_007aa1cb;
L_007aa1c6:; BB(0x007aa1c6);
    /* 007aa1c6: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa1cb:; BB(0x007aa1cb);
    /* 007aa1cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1d1: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa1d7: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007aa1dd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa1df: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1e2: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa1e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa1e9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa1ec: mov dword ptr [esp], 0x100 */ W32((u32)(r_esp), 0x100u);
    /* 007aa1f3: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa1f5: call 0x7a9928 */ r_esp -= 4; W32(r_esp, 0x7aa1fau); f_007a9928();
    /* 007aa1fa: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 007aa1fd: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aa200: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa202: je 0x7aa45d */ if (fZ) goto L_007aa45d;
L_007aa208:; BB(0x007aa208);
    /* 007aa208: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa20b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa20e: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 007aa214: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
    /* 007aa21a: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa21f:; BB(0x007aa21f);
    /* 007aa21f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa222: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa228: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 007aa22b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aa22d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aa22f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aa230: jp 0x7aa45d */ if (fP) goto L_007aa45d;
L_007aa236:; BB(0x007aa236);
    /* 007aa236: jbe 0x7aa23d */ if ((fC||fZ)) goto L_007aa23d;
L_007aa238:; BB(0x007aa238);
    /* 007aa238: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa23d:; BB(0x007aa23d);
    /* 007aa23d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa240: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa243: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa24a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007aa24d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aa24f: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 007aa255: movzx eax, word ptr [eax + edx*8 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*8+0x2u));
    /* 007aa25a: mov word ptr [ebp - 0x1c], ax */ W16((u32)(r_ebp+0xffffffe4u), (u16)r_eax);
    /* 007aa25e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa25f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa262: movzx edx, word ptr [ebp - 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0xffffffe4u));
    /* 007aa266: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007aa26a: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa26c: call 0x7aab94 */ r_esp -= 4; W32(r_esp, 0x7aa271u); f_007aab94();
    /* 007aa271: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aa274: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aa277: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa279: jne 0x7aa29d */ if (!fZ) goto L_007aa29d;
L_007aa27b:; BB(0x007aa27b);
    /* 007aa27b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa27e: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa281: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa287: fld dword ptr [edx + 0xc4] */ FPUSH(R_F32((u32)(r_edx+0xc4u)));
    /* 007aa28d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa28f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa292: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa298: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa29d:; BB(0x007aa29d);
    /* 007aa29d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2a0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2a3: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa2aa: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007aa2ad: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aa2af: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 007aa2b5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2b8: movzx eax, word ptr [eax + edx*8 + 2] */ r_eax = (u32)R16((u32)(r_eax+r_edx*8+0x2u));
    /* 007aa2bd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 007aa2c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa2c5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2c8: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2cb: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa2d2: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007aa2d6: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa2d8: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x7aa2ddu); f_007a9a6c();
    /* 007aa2dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2e0: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa2e6: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa2eb: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2ee: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa2f4: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa2f9:; BB(0x007aa2f9);
    /* 007aa2f9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa2fc: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa302: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 007aa305: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aa307: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aa309: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aa30a: jp 0x7aa45d */ if (fP) goto L_007aa45d;
L_007aa310:; BB(0x007aa310);
    /* 007aa310: jbe 0x7aa317 */ if ((fC||fZ)) goto L_007aa317;
L_007aa312:; BB(0x007aa312);
    /* 007aa312: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa317:; BB(0x007aa317);
    /* 007aa317: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa31a: mov word ptr [eax + 0xf4], 5 */ W16((u32)(r_eax+0xf4u), 0x5u);
    /* 007aa323: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa326: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa329: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa32f: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 007aa335: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa337: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa33a: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa340: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa343: fld dword ptr [0x97d978] */ FPUSH(R_F32((u32)(0x97d978u)));
    /* 007aa349: fstp dword ptr [eax + 0xc8] */ W_F32((u32)(r_eax+0xc8u), ST(0)); FPOP();
    /* 007aa34f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa352: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa358: or eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa35b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa35e: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa364: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa369:; BB(0x007aa369);
    /* 007aa369: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa36c: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa372: fld dword ptr [0x97d97c] */ FPUSH(R_F32((u32)(0x97d97cu)));
    /* 007aa378: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aa37a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aa37c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aa37d: jp 0x7aa45d */ if (fP) goto L_007aa45d;
L_007aa383:; BB(0x007aa383);
    /* 007aa383: jbe 0x7aa38a */ if ((fC||fZ)) goto L_007aa38a;
L_007aa385:; BB(0x007aa385);
    /* 007aa385: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa38a:; BB(0x007aa38a);
    /* 007aa38a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa38d: fld dword ptr [0x97d978] */ FPUSH(R_F32((u32)(0x97d978u)));
    /* 007aa393: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa399: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa39a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa39d: mov dword ptr [esp], 0x100 */ W32((u32)(r_esp), 0x100u);
    /* 007aa3a4: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa3a6: call 0x7a9928 */ r_esp -= 4; W32(r_esp, 0x7aa3abu); f_007a9928();
    /* 007aa3ab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa3ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa3b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aa3b3: je 0x7aa3db */ if (fZ) goto L_007aa3db;
L_007aa3b5:; BB(0x007aa3b5);
    /* 007aa3b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa3b6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3b9: mov dword ptr [esp], 0x100 */ W32((u32)(r_esp), 0x100u);
    /* 007aa3c0: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa3c2: call 0x7a994c */ r_esp -= 4; W32(r_esp, 0x7aa3c7u); f_007a994c();
    /* 007aa3c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3ca: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3cd: fld dword ptr [eax + 0xd0] */ FPUSH(R_F32((u32)(r_eax+0xd0u)));
    /* 007aa3d3: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
    /* 007aa3d9: jmp 0x7aa400 */ goto L_007aa400;
L_007aa3db:; BB(0x007aa3db);
    /* 007aa3db: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3de: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3e1: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa3e8: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007aa3eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aa3ed: mov eax, dword ptr [eax + 0xd8] */ r_eax = R32((u32)(r_eax+0xd8u));
    /* 007aa3f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa3f6: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 007aa3fa: fstp dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0)); FPOP();
L_007aa400:; BB(0x007aa400);
    /* 007aa400: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa403: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa406: movzx eax, word ptr [eax + 0xf6] */ r_eax = (u32)R16((u32)(r_eax+0xf6u));
    /* 007aa40d: mov word ptr [edx + 0xf4], ax */ W16((u32)(r_edx+0xf4u), (u16)r_eax);
    /* 007aa414: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa417: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa41d: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007aa420: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa423: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa429: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa42c: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa432: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa435: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa438: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa43e: jmp 0x7aa45d */ goto L_007aa45d;
L_007aa440:; BB(0x007aa440);
    /* 007aa440: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa443: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa446: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa44c: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 007aa452: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aa454: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa457: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
L_007aa45d:; BB(0x007aa45d);
    /* 007aa45d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa45e: ret  */ FN_RET(0x007aa094); r_esp += 4; return;
}

void f_007aa460(void) /* sub_7AA460 */
{
    FN_ENTER(0x007aa460);
    /* 007aa460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa461: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa463: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa464: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa466: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa469: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa46c: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa472: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa474: je 0x7aa47d */ if (fZ) goto L_007aa47d;
L_007aa476:; BB(0x007aa476);
    /* 007aa476: mov eax, 1 */ r_eax = 0x1u;
    /* 007aa47b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa47c: ret  */ FN_RET(0x007aa460); r_esp += 4; return;
L_007aa47d:; BB(0x007aa47d);
    /* 007aa47d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa47f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa480: ret  */ FN_RET(0x007aa460); r_esp += 4; return;
}

void f_007aa484(void) /* sub_7AA484 */
{
    FN_ENTER(0x007aa484);
    /* 007aa484: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa485: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa487: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aa48a: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa48c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aa48f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aa492: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa498: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa49a: je 0x7aa4a9 */ if (fZ) goto L_007aa4a9;
L_007aa49c:; BB(0x007aa49c);
    /* 007aa49c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aa49f: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa4a5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa4a7: je 0x7aa4c4 */ if (fZ) goto L_007aa4c4;
L_007aa4a9:; BB(0x007aa4a9);
    /* 007aa4a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aa4ac: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa4ae: call 0x7a9970 */ r_esp -= 4; W32(r_esp, 0x7aa4b3u); f_007a9970();
    /* 007aa4b3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa4b6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa4b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa4bb: jne 0x7aa4c4 */ if (!fZ) goto L_007aa4c4;
L_007aa4bd:; BB(0x007aa4bd);
    /* 007aa4bd: mov eax, 1 */ r_eax = 0x1u;
    /* 007aa4c2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa4c3: ret  */ FN_RET(0x007aa484); r_esp += 4; return;
L_007aa4c4:; BB(0x007aa4c4);
    /* 007aa4c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa4c6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa4c7: ret  */ FN_RET(0x007aa484); r_esp += 4; return;
}

void f_007aa4c8(void) /* sub_7AA4C8 */
{
    FN_ENTER(0x007aa4c8);
    /* 007aa4c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa4c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa4cb: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aa4ce: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa4d0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aa4d3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa4d6: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007aa4da: mov word ptr [eax + 0xb8], dx */ W16((u32)(r_eax+0xb8u), (u16)r_edx);
    /* 007aa4e1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa4e4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa4e7: movzx eax, word ptr [eax + 0xb8] */ r_eax = (u32)R16((u32)(r_eax+0xb8u));
    /* 007aa4ee: mov word ptr [edx + 0xba], ax */ W16((u32)(r_edx+0xbau), (u16)r_eax);
    /* 007aa4f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa4f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa4f9: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa4fc: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa503: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007aa506: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007aa509: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa50b: call 0x7a9e24 */ r_esp -= 4; W32(r_esp, 0x7aa510u); f_007a9e24();
    /* 007aa510: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa511: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa514: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa517: movzx edx, word ptr [edx + 0xb8] */ r_edx = (u32)R16((u32)(r_edx+0xb8u));
    /* 007aa51e: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007aa521: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007aa524: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa526: call 0x7a99b4 */ r_esp -= 4; W32(r_esp, 0x7aa52bu); f_007a99b4();
    /* 007aa52b: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007aa52e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007aa531: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aa534: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa537: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa53a: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007aa53d: fstp dword ptr [edx + 0xc8] */ W_F32((u32)(r_edx+0xc8u), ST(0)); FPOP();
    /* 007aa543: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa546: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa549: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 007aa54c: mov word ptr [edx + 0xf4], ax */ W16((u32)(r_edx+0xf4u), (u16)r_eax);
    /* 007aa553: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa556: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa55c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aa55f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aa562: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007aa565: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007aa568: fld dword ptr [eax*4 + 0x97d988] */ FPUSH(R_F32((u32)(r_eax*4+0x97d988u)));
    /* 007aa56f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aa571: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa574: fstp dword ptr [eax + 0xc4] */ W_F32((u32)(r_eax+0xc4u), ST(0)); FPOP();
    /* 007aa57a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa57d: fld dword ptr [0x97d980] */ FPUSH(R_F32((u32)(0x97d980u)));
    /* 007aa583: fstp dword ptr [eax + 0xc0] */ W_F32((u32)(r_eax+0xc0u), ST(0)); FPOP();
    /* 007aa589: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa58c: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa592: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007aa595: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa598: mov dword ptr [edx + 0xb0], eax */ W32((u32)(r_edx+0xb0u), r_eax);
    /* 007aa59e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aa5a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5a4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007aa5a7: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 007aa5ad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5b0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5b3: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa5b9: mov dword ptr [edx + 0xe4], eax */ W32((u32)(r_edx+0xe4u), r_eax);
    /* 007aa5bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5c2: fld dword ptr [0x97d980] */ FPUSH(R_F32((u32)(0x97d980u)));
    /* 007aa5c8: fstp dword ptr [eax + 0xec] */ W_F32((u32)(r_eax+0xecu), ST(0)); FPOP();
    /* 007aa5ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5d1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5d4: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa5da: mov dword ptr [edx + 0xe8], eax */ W32((u32)(r_edx+0xe8u), r_eax);
    /* 007aa5e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5e3: fld dword ptr [0x97d980] */ FPUSH(R_F32((u32)(0x97d980u)));
    /* 007aa5e9: fstp dword ptr [eax + 0xf0] */ W_F32((u32)(r_eax+0xf0u), ST(0)); FPOP();
    /* 007aa5ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5f2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa5f5: movzx eax, word ptr [eax + 0xb8] */ r_eax = (u32)R16((u32)(r_eax+0xb8u));
    /* 007aa5fc: mov word ptr [edx + 0xbc], ax */ W16((u32)(r_edx+0xbcu), (u16)r_eax);
    /* 007aa603: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa606: mov eax, dword ptr [eax + 0xb4] */ r_eax = R32((u32)(r_eax+0xb4u));
    /* 007aa60c: test eax, 0x20000000 */ {  u32 a = r_eax; u32 b = 0x20000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa611: je 0x7aa61d */ if (fZ) goto L_007aa61d;
L_007aa613:; BB(0x007aa613);
    /* 007aa613: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aa616: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa618: call 0x7a98fc */ r_esp -= 4; W32(r_esp, 0x7aa61du); f_007a98fc();
L_007aa61d:; BB(0x007aa61d);
    /* 007aa61d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa61e: ret 4 */ FN_RET(0x007aa4c8); r_esp += 8; return;
}

void f_007aa624(void) /* sub_7AA624 */
{
    FN_ENTER(0x007aa624);
    /* 007aa624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa625: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa627: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa628: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa62a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa62d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa62e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa631: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007aa634: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007aa637: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa639: call 0x7a99d8 */ r_esp -= 4; W32(r_esp, 0x7aa63eu); f_007a99d8();
    /* 007aa63e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa63f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa642: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 007aa645: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007aa648: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa64a: call 0x7a99f4 */ r_esp -= 4; W32(r_esp, 0x7aa64fu); f_007a99f4();
    /* 007aa64f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa650: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa653: movzx edx, word ptr [ebp + 0x10] */ r_edx = (u32)R16((u32)(r_ebp+0x10u));
    /* 007aa657: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 007aa65b: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa65d: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x7aa662u); f_007aa4c8();
    /* 007aa662: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa663: ret 0xc */ FN_RET(0x007aa624); r_esp += 16; return;
}

void f_007aa668(void) /* sub_7AA668 */
{
    FN_ENTER(0x007aa668);
    /* 007aa668: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa669: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa66b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa66c: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa66e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa671: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x7aa676u); f_0082fa9c();
    /* 007aa676: call 0x7a9a64 */ r_esp -= 4; W32(r_esp, 0x7aa67bu); f_007a9a64();
    /* 007aa67b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa67e: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa684: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa686: je 0x7aa6b7 */ if (fZ) goto L_007aa6b7;
L_007aa688:; BB(0x007aa688);
    /* 007aa688: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa68b: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa68e: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa691: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa694: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa697: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa69c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa6a0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa6a3: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa6a9: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa6ad: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x7aa6b2u); f_008302c4();
    /* 007aa6b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa6b5: jmp 0x7aa6f8 */ goto L_007aa6f8;
L_007aa6b7:; BB(0x007aa6b7);
    /* 007aa6b7: mov eax, dword ptr [0xae6dc0] */ r_eax = R32((u32)(0xae6dc0u));
    /* 007aa6bc: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa6be: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa6c3u); f_0082fac4();
    /* 007aa6c3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa6c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa6c9: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa6cc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa6cf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa6d2: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa6d8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa6dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa6df: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa6e5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa6e9: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7aa6eeu); f_0083046c();
    /* 007aa6ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa6f1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aa6f3: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa6f8u); f_0082fac4();
L_007aa6f8:; BB(0x007aa6f8);
    /* 007aa6f8: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aa6fdu); f_007a9044();
    /* 007aa6fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa6fe: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa701: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aa704: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa707: call 0x7a9a64 */ r_esp -= 4; W32(r_esp, 0x7aa70cu); f_007a9a64();
    /* 007aa70c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aa70d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x7aa712u); f_0082faac();
    /* 007aa712: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa713: ret  */ FN_RET(0x007aa668); r_esp += 4; return;
}

void f_007aa714(void) /* sub_7AA714 */
{
    FN_ENTER(0x007aa714);
    /* 007aa714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa715: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa717: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa718: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa71a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa71d: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x7aa722u); f_0082fa9c();
    /* 007aa722: call 0x7a9a64 */ r_esp -= 4; W32(r_esp, 0x7aa727u); f_007a9a64();
    /* 007aa727: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa72a: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa730: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa732: je 0x7aa759 */ if (fZ) goto L_007aa759;
L_007aa734:; BB(0x007aa734);
    /* 007aa734: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa735: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa738: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa73b: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa73e: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aa744: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa747: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 007aa74d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007aa750: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa752: call 0x83be3c */ r_esp -= 4; W32(r_esp, 0x7aa757u); f_0083be3c();
    /* 007aa757: jmp 0x7aa799 */ goto L_007aa799;
L_007aa759:; BB(0x007aa759);
    /* 007aa759: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa75a: mov eax, dword ptr [0xad93e0] */ r_eax = R32((u32)(0xad93e0u));
    /* 007aa75f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa762: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x7aa767u); f_0083a308();
    /* 007aa767: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aa768: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa769: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa76c: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa76f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa772: mov edx, dword ptr [edx + 0xf8] */ r_edx = R32((u32)(r_edx+0xf8u));
    /* 007aa778: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa77b: fld dword ptr [ecx + 0xc0] */ FPUSH(R_F32((u32)(r_ecx+0xc0u)));
    /* 007aa781: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007aa784: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa786: call 0x83bcf4 */ r_esp -= 4; W32(r_esp, 0x7aa78bu); f_0083bcf4();
    /* 007aa78b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa78c: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007aa793: call 0x83a308 */ r_esp -= 4; W32(r_esp, 0x7aa798u); f_0083a308();
    /* 007aa798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007aa799:; BB(0x007aa799);
    /* 007aa799: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aa79eu); f_007a9044();
    /* 007aa79e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa79f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa7a2: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aa7a5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa7a8: call 0x7a9a64 */ r_esp -= 4; W32(r_esp, 0x7aa7adu); f_007a9a64();
    /* 007aa7ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aa7ae: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x7aa7b3u); f_0082faac();
    /* 007aa7b3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa7b4: ret  */ FN_RET(0x007aa714); r_esp += 4; return;
}

void f_007aa7b8(void) /* sub_7AA7B8 */
{
    FN_ENTER(0x007aa7b8);
    /* 007aa7b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa7b9: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa7bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa7bc: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa7be: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa7c1: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x7aa7c6u); f_0082fa9c();
    /* 007aa7c6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa7c9: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa7cf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa7d1: je 0x7aa802 */ if (fZ) goto L_007aa802;
L_007aa7d3:; BB(0x007aa7d3);
    /* 007aa7d3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa7d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa7d9: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa7dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa7df: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa7e2: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa7e7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa7eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa7ee: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa7f4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa7f8: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x7aa7fdu); f_008302c4();
    /* 007aa7fd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa800: jmp 0x7aa843 */ goto L_007aa843;
L_007aa802:; BB(0x007aa802);
    /* 007aa802: mov eax, dword ptr [0xae6dc0] */ r_eax = R32((u32)(0xae6dc0u));
    /* 007aa807: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa809: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa80eu); f_0082fac4();
    /* 007aa80e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa811: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa814: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa817: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa81a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa81d: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa823: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa827: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa82a: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa830: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa834: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7aa839u); f_0083046c();
    /* 007aa839: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa83c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aa83e: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa843u); f_0082fac4();
L_007aa843:; BB(0x007aa843);
    /* 007aa843: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aa848u); f_007a9044();
    /* 007aa848: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x7aa84du); f_0082faac();
    /* 007aa84d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa84e: ret  */ FN_RET(0x007aa7b8); r_esp += 4; return;
}

void f_007aa850(void) /* sub_7AA850 */
{
    FN_ENTER(0x007aa850);
    /* 007aa850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa851: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa853: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa854: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa856: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa859: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa85c: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa862: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa864: je 0x7aa895 */ if (fZ) goto L_007aa895;
L_007aa866:; BB(0x007aa866);
    /* 007aa866: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa869: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa86c: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa86f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa872: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa875: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa87a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa87e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa881: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa887: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa88b: call 0x8309d8 */ r_esp -= 4; W32(r_esp, 0x7aa890u); f_008309d8();
    /* 007aa890: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007aa893: jmp 0x7aa8c3 */ goto L_007aa8c3;
L_007aa895:; BB(0x007aa895);
    /* 007aa895: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa898: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa89b: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa89e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa8a1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa8a4: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa8aa: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa8ae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa8b1: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa8b7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa8bb: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x7aa8c0u); f_00830a28();
    /* 007aa8c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007aa8c3:; BB(0x007aa8c3);
    /* 007aa8c3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa8c4: ret  */ FN_RET(0x007aa850); r_esp += 4; return;
}

void f_007aa8c8(void) /* sub_7AA8C8 */
{
    FN_ENTER(0x007aa8c8);
    /* 007aa8c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa8c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa8cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa8cc: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa8ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa8d1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa8d4: mov eax, dword ptr [eax + 0xe0] */ r_eax = R32((u32)(r_eax+0xe0u));
    /* 007aa8da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aa8dc: jne 0x7aa8e0 */ if (!fZ) goto L_007aa8e0;
L_007aa8de:; BB(0x007aa8de);
    /* 007aa8de: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa8df: ret  */ FN_RET(0x007aa8c8); r_esp += 4; return;
L_007aa8e0:; BB(0x007aa8e0);
    /* 007aa8e0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa8e3: mov eax, dword ptr [eax + 0xe0] */ r_eax = R32((u32)(r_eax+0xe0u));
    /* 007aa8e9: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
    /* 007aa8ee: mov eax, 0x7a9e0c */ r_eax = 0x7a9e0cu;
    /* 007aa8f3: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa8f5: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa8fau); f_0082fac4();
    /* 007aa8fa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa8fd: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa903: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa905: je 0x7aa946 */ if (fZ) goto L_007aa946;
L_007aa907:; BB(0x007aa907);
    /* 007aa907: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa90a: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa910: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aa915: jne 0x7aa946 */ if (!fZ) goto L_007aa946;
L_007aa917:; BB(0x007aa917);
    /* 007aa917: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa91a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa91d: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa920: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa923: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa926: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa92b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa92f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa932: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa938: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa93c: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x7aa941u); f_008302c4();
    /* 007aa941: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa944: jmp 0x7aa974 */ goto L_007aa974;
L_007aa946:; BB(0x007aa946);
    /* 007aa946: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa949: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa94c: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa94f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa952: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa955: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aa95b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa95f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa962: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa968: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa96c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7aa971u); f_0083046c();
    /* 007aa971: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007aa974:; BB(0x007aa974);
    /* 007aa974: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aa976: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa97bu); f_0082fac4();
    /* 007aa97b: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aa980u); f_007a9044();
    /* 007aa980: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aa981: ret  */ FN_RET(0x007aa8c8); r_esp += 4; return;
}

void f_007aa984(void) /* sub_7AA984 */
{
    FN_ENTER(0x007aa984);
    /* 007aa984: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aa985: mov ebp, esp */ r_ebp = r_esp;
    /* 007aa987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aa988: mov eax, ecx */ r_eax = r_ecx;
    /* 007aa98a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aa98d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa990: mov eax, dword ptr [eax + 0xe0] */ r_eax = R32((u32)(r_eax+0xe0u));
    /* 007aa996: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
    /* 007aa99b: mov eax, 0x7a9e0c */ r_eax = 0x7a9e0cu;
    /* 007aa9a0: mov ecx, eax */ r_ecx = r_eax;
    /* 007aa9a2: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aa9a7u); f_0082fac4();
    /* 007aa9a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9aa: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa9b0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa9b2: je 0x7aa9f3 */ if (fZ) goto L_007aa9f3;
L_007aa9b4:; BB(0x007aa9b4);
    /* 007aa9b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9b7: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa9bd: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aa9c2: jne 0x7aa9f3 */ if (!fZ) goto L_007aa9f3;
L_007aa9c4:; BB(0x007aa9c4);
    /* 007aa9c4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9ca: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa9cd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa9d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9d3: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa9d8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa9dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9df: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa9e5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa9e9: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x7aa9eeu); f_008302c4();
    /* 007aa9ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9f1: jmp 0x7aaa21 */ goto L_007aaa21;
L_007aa9f3:; BB(0x007aa9f3);
    /* 007aa9f3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9f9: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa9fc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa9ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaa02: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aaa08: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aaa0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaa0f: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aaa15: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aaa19: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7aaa1eu); f_0083046c();
    /* 007aaa1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007aaa21:; BB(0x007aaa21);
    /* 007aaa21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aaa23: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aaa28u); f_0082fac4();
    /* 007aaa28: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aaa2du); f_007a9044();
    /* 007aaa2d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaa2e: ret  */ FN_RET(0x007aa984); r_esp += 4; return;
}

void f_007aa9a6(void)
{
    FN_ENTER(0x007aa9a6);
    /* 007aa9a6: add byte ptr [ebx - 0x7f7403bb], cl */ { u32 ad = (u32)(r_ebx+0x808bfc45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007aa9ac: mov al, 0 */ r_eax = (r_eax & 0xffffff00u) | ((0x0u) & 0xffu);
    /* 007aa9ae: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 007aa9b0: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aa9b2: je 0x7aa9f3 */ if (fZ) goto L_007aa9f3;
L_007aa9b4:; BB(0x007aa9b4);
    /* 007aa9b4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9b7: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aa9bd: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aa9c2: jne 0x7aa9f3 */ if (!fZ) goto L_007aa9f3;
L_007aa9c4:; BB(0x007aa9c4);
    /* 007aa9c4: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9c7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9ca: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa9cd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa9d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9d3: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aa9d8: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aa9dc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9df: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aa9e5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aa9e9: call 0x8302c4 */ r_esp -= 4; W32(r_esp, 0x7aa9eeu); f_008302c4();
    /* 007aa9ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9f1: jmp 0x7aaa21 */ goto L_007aaa21;
L_007aa9f3:; BB(0x007aa9f3);
    /* 007aa9f3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007aa9f6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aa9f9: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aa9fc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aa9ff: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaa02: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aaa08: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007aaa0c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaa0f: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aaa15: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007aaa19: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7aaa1eu); f_0083046c();
    /* 007aaa1e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007aaa21:; BB(0x007aaa21);
    /* 007aaa21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aaa23: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aaa28u); f_0082fac4();
    /* 007aaa28: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7aaa2du); f_007a9044();
    /* 007aaa2d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaa2e: ret  */ FN_RET(0x007aa9a6); r_esp += 4; return;
}

void f_007aaa30(void) /* sub_7AAA30 */
{
    FN_ENTER(0x007aaa30);
    /* 007aaa30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aaa31: mov ebp, esp */ r_ebp = r_esp;
    /* 007aaa33: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aaa36: mov eax, ecx */ r_eax = r_ecx;
    /* 007aaa38: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aaa3b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa3e: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aaa44: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aaa46: je 0x7aaa55 */ if (fZ) goto L_007aaa55;
L_007aaa48:; BB(0x007aaa48);
    /* 007aaa48: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa4b: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aaa51: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aaa53: je 0x7aaab1 */ if (fZ) goto L_007aaab1;
L_007aaa55:; BB(0x007aaa55);
    /* 007aaa55: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa58: mov ecx, eax */ r_ecx = r_eax;
    /* 007aaa5a: call 0x7a9970 */ r_esp -= 4; W32(r_esp, 0x7aaa5fu); f_007a9970();
    /* 007aaa5f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aaa62: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaa65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 007aaa67: jne 0x7aaab1 */ if (!fZ) goto L_007aaab1;
L_007aaa69:; BB(0x007aaa69);
    /* 007aaa69: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa6c: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007aaa6f: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aaa75: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aaa77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aaa79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aaa7a: jp 0x7aaab1 */ if (fP) goto L_007aaab1;
L_007aaa7c:; BB(0x007aaa7c);
    /* 007aaa7c: ja 0x7aaa80 */ if ((!fC&&!fZ)) goto L_007aaa80;
L_007aaa7e:; BB(0x007aaa7e);
    /* 007aaa7e: jmp 0x7aaab1 */ goto L_007aaab1;
L_007aaa80:; BB(0x007aaa80);
    /* 007aaa80: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa83: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007aaa86: fld dword ptr [eax + 0xc8] */ FPUSH(R_F32((u32)(r_eax+0xc8u)));
    /* 007aaa8c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aaa8e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 007aaa91: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaa94: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aaa9a: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007aaa9d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007aaa9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007aaaa1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007aaaa2: jp 0x7aaab1 */ if (fP) goto L_007aaab1;
L_007aaaa4:; BB(0x007aaaa4);
    /* 007aaaa4: jae 0x7aaaa8 */ if (!fC) goto L_007aaaa8;
L_007aaaa6:; BB(0x007aaaa6);
    /* 007aaaa6: jmp 0x7aaab1 */ goto L_007aaab1;
L_007aaaa8:; BB(0x007aaaa8);
    /* 007aaaa8: mov eax, 1 */ r_eax = 0x1u;
    /* 007aaaad: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaaae: ret 4 */ FN_RET(0x007aaa30); r_esp += 8; return;
L_007aaab1:; BB(0x007aaab1);
    /* 007aaab1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aaab3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaab4: ret 4 */ FN_RET(0x007aaa30); r_esp += 8; return;
}

void f_007aaab8(void) /* sub_7AAAB8 */
{
    FN_ENTER(0x007aaab8);
    /* 007aaab8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aaab9: mov ebp, esp */ r_ebp = r_esp;
    /* 007aaabb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aaabc: mov eax, ecx */ r_eax = r_ecx;
    /* 007aaabe: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aaac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaac4: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aaaca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aaacc: je 0x7aaad8 */ if (fZ) goto L_007aaad8;
L_007aaace:; BB(0x007aaace);
    /* 007aaace: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaad1: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aaad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aaad6: jne 0x7aaade */ if (!fZ) goto L_007aaade;
L_007aaad8:; BB(0x007aaad8);
    /* 007aaad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aaada: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaadb: ret 4 */ FN_RET(0x007aaab8); r_esp += 8; return;
L_007aaade:; BB(0x007aaade);
    /* 007aaade: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x7aaae3u); f_0082fa9c();
    /* 007aaae3: mov eax, dword ptr [0xaab540] */ r_eax = R32((u32)(0xaab540u));
    /* 007aaae8: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
    /* 007aaaed: mov eax, 0x7a9e0c */ r_eax = 0x7a9e0cu;
    /* 007aaaf2: mov ecx, eax */ r_ecx = r_eax;
    /* 007aaaf4: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aaaf9u); f_0082fac4();
    /* 007aaaf9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aaafa: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aaafd: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aab00: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aab03: mov edx, dword ptr [edx + 0xf8] */ r_edx = R32((u32)(r_edx+0xf8u));
    /* 007aab09: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 007aab0c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007aab0f: mov ecx, eax */ r_ecx = r_eax;
    /* 007aab11: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x7aab16u); f_00830590();
    /* 007aab16: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aab18: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aab1du); f_0082fac4();
    /* 007aab1d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x7aab22u); f_0082faac();
    /* 007aab22: mov eax, 1 */ r_eax = 0x1u;
    /* 007aab27: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aab28: ret 4 */ FN_RET(0x007aaab8); r_esp += 8; return;
}

void f_007aab2c(void) /* sub_7AAB2C */
{
    FN_ENTER(0x007aab2c);
    /* 007aab2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aab2d: mov ebp, esp */ r_ebp = r_esp;
    /* 007aab2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aab30: mov eax, ecx */ r_eax = r_ecx;
    /* 007aab32: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aab35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aab38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aab3a: je 0x7aab46 */ if (fZ) goto L_007aab46;
L_007aab3c:; BB(0x007aab3c);
    /* 007aab3c: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aab3f: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aab42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aab44: jne 0x7aab4c */ if (!fZ) goto L_007aab4c;
L_007aab46:; BB(0x007aab46);
    /* 007aab46: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aab48: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aab49: ret 0xc */ FN_RET(0x007aab2c); r_esp += 16; return;
L_007aab4c:; BB(0x007aab4c);
    /* 007aab4c: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x7aab51u); f_0082fa9c();
    /* 007aab51: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007aab54: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
    /* 007aab59: mov eax, 0x7a9e0c */ r_eax = 0x7a9e0cu;
    /* 007aab5e: mov ecx, eax */ r_ecx = r_eax;
    /* 007aab60: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aab65u); f_0082fac4();
    /* 007aab65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aab66: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aab69: mov eax, dword ptr [eax + 0x34] */ r_eax = R32((u32)(r_eax+0x34u));
    /* 007aab6c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007aab6f: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 007aab72: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007aab75: mov ecx, eax */ r_ecx = r_eax;
    /* 007aab77: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x7aab7cu); f_00830590();
    /* 007aab7c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007aab7e: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7aab83u); f_0082fac4();
    /* 007aab83: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x7aab88u); f_0082faac();
    /* 007aab88: mov eax, 1 */ r_eax = 0x1u;
    /* 007aab8d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aab8e: ret 0xc */ FN_RET(0x007aab2c); r_esp += 16; return;
}

void f_007aab94(void) /* sub_7AAB94 */
{
    FN_ENTER(0x007aab94);
    /* 007aab94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aab95: mov ebp, esp */ r_ebp = r_esp;
    /* 007aab97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007aab98: mov eax, ecx */ r_eax = r_ecx;
    /* 007aab9a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007aab9d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 007aaba1: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007aaba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007aaba6: jge 0x7aabae */ if ((fS==fO)) goto L_007aabae;
L_007aaba8:; BB(0x007aaba8);
    /* 007aaba8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aabaa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aabab: ret 4 */ FN_RET(0x007aab94); r_esp += 8; return;
L_007aabae:; BB(0x007aabae);
    /* 007aabae: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aabb1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 007aabb4: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007aabb8: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 007aabbb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007aabbd: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 007aabc3: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 007aabc7: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
    /* 007aabcd: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 007aabd1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aabd2: ret 4 */ FN_RET(0x007aab94); r_esp += 8; return;
}

void f_007aabd8(void) /* sub_7AABD8 */
{
    FN_ENTER(0x007aabd8);
    /* 007aabd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aabd9: mov ebp, esp */ r_ebp = r_esp;
    /* 007aabdb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aabde: mov eax, ecx */ r_eax = r_ecx;
    /* 007aabe0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aabe3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aabe6: mov eax, dword ptr [eax + 0xb0] */ r_eax = R32((u32)(r_eax+0xb0u));
    /* 007aabec: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007aabee: je 0x7aabf8 */ if (fZ) goto L_007aabf8;
L_007aabf0:; BB(0x007aabf0);
    /* 007aabf0: fld dword ptr [0x97d990] */ FPUSH(R_F32((u32)(0x97d990u)));
    /* 007aabf6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aabf7: ret  */ FN_RET(0x007aabd8); r_esp += 4; return;
L_007aabf8:; BB(0x007aabf8);
    /* 007aabf8: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aabfb: mov ecx, eax */ r_ecx = r_eax;
    /* 007aabfd: call 0x7a99a0 */ r_esp -= 4; W32(r_esp, 0x7aac02u); f_007a99a0();
    /* 007aac02: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 007aac05: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 007aac08: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aac09: ret  */ FN_RET(0x007aabd8); r_esp += 4; return;
}

void f_007aac0c(void) /* sub_7AAC0C */
{
    FN_ENTER(0x007aac0c);
    /* 007aac0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aac0d: mov ebp, esp */ r_ebp = r_esp;
    /* 007aac0f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aac12: mov eax, ecx */ r_eax = r_ecx;
    /* 007aac14: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aac17: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aac1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007aac1d: movzx ecx, word ptr [ebp + 8] */ r_ecx = (u32)R16((u32)(r_ebp+0x8u));
    /* 007aac21: movsx ecx, cx */ r_ecx = (u32)(i32)(i16)(u16)r_ecx;
    /* 007aac24: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 007aac26: mov edx, dword ptr [edx + 0xd8] */ r_edx = R32((u32)(r_edx+0xd8u));
    /* 007aac2c: mov edx, dword ptr [edx + ecx*8 + 4] */ r_edx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 007aac30: mov eax, dword ptr [eax + 0xdc] */ r_eax = R32((u32)(r_eax+0xdcu));
    /* 007aac36: mov eax, dword ptr [eax + edx*8 + 4] */ r_eax = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 007aac3a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007aac3d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007aac40: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aac43: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007aac46: fild dword ptr [ebp - 0x10] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff0u)));
    /* 007aac49: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 007aac4c: fld dword ptr [eax*4 + 0x97d998] */ FPUSH(R_F32((u32)(r_eax*4+0x97d998u)));
    /* 007aac53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aac55: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007aac58: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007aac5b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aac5c: ret 4 */ FN_RET(0x007aac0c); r_esp += 8; return;
}

void f_007aac60(void) /* sub_7AAC60 */
{
    FN_ENTER(0x007aac60);
    /* 007aac60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aac61: mov ebp, esp */ r_ebp = r_esp;
    /* 007aac63: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aac66: mov eax, ecx */ r_eax = r_ecx;
    /* 007aac68: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007aac6b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aac6e: mov eax, dword ptr [eax + 0xf8] */ r_eax = R32((u32)(r_eax+0xf8u));
    /* 007aac74: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aac76: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 007aac79: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 007aac7c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aac7e: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 007aac81: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 007aac84: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 007aac87: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007aac88: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 007aac8b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aac8e: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aac94: fnstcw word ptr [ebp - 0x18] */ W16((u32)(r_ebp+0xffffffe8u), fcw);
    /* 007aac97: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aac9a: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 007aac9e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aaca3: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007aaca6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aaca9: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
    /* 007aacac: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007aacaf: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 007aacb2: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 007aacb5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007aacb8: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 007aacbf: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aacc2: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aacc5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aacc7: jge 0x7aacec */ if ((fS==fO)) goto L_007aacec;
L_007aacc9:; BB(0x007aacc9);
    /* 007aacc9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aaccc: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007aaccf: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 007aacd2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007aacd4: ja 0x7aacec */ if ((!fC&&!fZ)) goto L_007aacec;
L_007aacd6:; BB(0x007aacd6);
    /* 007aacd6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aacd9: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aacdc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007aacdf: inc dword ptr [ebp - 0x48] */ { u32 ad = (u32)(r_ebp+0xffffffb8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007aace2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aace5: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aace8: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aacea: jl 0x7aacc9 */ if ((fS!=fO)) goto L_007aacc9;
L_007aacec:; BB(0x007aacec);
    /* 007aacec: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aacef: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aacf2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007aacf4: jl 0x7aad16 */ if ((fS!=fO)) goto L_007aad16;
L_007aacf6:; BB(0x007aacf6);
    /* 007aacf6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aacf9: fld dword ptr [0x97d9a0] */ FPUSH(R_F32((u32)(0x97d9a0u)));
    /* 007aacff: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007aad01: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007aad04: fld dword ptr [0x97d9a0] */ FPUSH(R_F32((u32)(0x97d9a0u)));
    /* 007aad0a: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007aad0c: fld dword ptr [0x97d9a0] */ FPUSH(R_F32((u32)(0x97d9a0u)));
    /* 007aad12: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aad13: ret 8 */ FN_RET(0x007aac60); r_esp += 12; return;
L_007aad16:; BB(0x007aad16);
    /* 007aad16: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad19: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad1c: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 007aad1e: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007aad20: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aad23: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 007aad26: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007aad29: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007aad2c: fld dword ptr [edx*4 + 0x97d9a8] */ FPUSH(R_F32((u32)(r_edx*4+0x97d9a8u)));
    /* 007aad33: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aad35: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 007aad38: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad3b: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad3e: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 007aad41: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007aad44: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aad46: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 007aad49: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aad4c: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad4f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 007aad51: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 007aad54: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007aad57: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007aad5a: fld dword ptr [edx*4 + 0x97d9a8] */ FPUSH(R_F32((u32)(r_edx*4+0x97d9a8u)));
    /* 007aad61: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aad63: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007aad66: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007aad69: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aad6f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007aad71: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 007aad74: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 007aad77: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 007aad7a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007aad7c: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 007aad7f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007aad81: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 007aad84: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aad87: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007aad8a: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 007aad8d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aad8f: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 007aad92: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aad95: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aad98: fld dword ptr [eax + 0xc0] */ FPUSH(R_F32((u32)(r_eax+0xc0u)));
    /* 007aad9e: fld dword ptr [edx + 0xc8] */ FPUSH(R_F32((u32)(r_edx+0xc8u)));
    /* 007aada4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aada6: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 007aada9: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 007aadac: fnstcw word ptr [ebp - 0x18] */ W16((u32)(r_ebp+0xffffffe8u), fcw);
    /* 007aadaf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007aadb2: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 007aadb6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aadbb: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007aadbe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007aadc1: fldcw word ptr [ebp - 0x10] */ fcw = R16((u32)(r_ebp+0xfffffff0u));
    /* 007aadc4: fistp dword ptr [ebp - 0x50] */ W32((u32)(r_ebp+0xffffffb0u), (u32)fx_int32(ST(0))); FPOP();
    /* 007aadc7: fldcw word ptr [ebp - 0x18] */ fcw = R16((u32)(r_ebp+0xffffffe8u));
    /* 007aadca: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aadcd: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aadd0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aadd2: jge 0x7aadf7 */ if ((fS==fO)) goto L_007aadf7;
L_007aadd4:; BB(0x007aadd4);
    /* 007aadd4: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aadd7: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 007aadda: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 007aaddd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007aaddf: jae 0x7aadf7 */ if (!fC) goto L_007aadf7;
L_007aade1:; BB(0x007aade1);
    /* 007aade1: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aade4: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007aade7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007aadea: inc dword ptr [ebp - 0x48] */ { u32 ad = (u32)(r_ebp+0xffffffb8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007aaded: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aadf0: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aadf3: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aadf5: jl 0x7aadd4 */ if ((fS!=fO)) goto L_007aadd4;
L_007aadf7:; BB(0x007aadf7);
    /* 007aadf7: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 007aadfa: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 007aadfd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007aadff: jl 0x7aae0c */ if ((fS!=fO)) goto L_007aae0c;
L_007aae01:; BB(0x007aae01);
    /* 007aae01: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae04: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007aae07: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 007aae0a: jmp 0x7aae82 */ goto L_007aae82;
L_007aae0c:; BB(0x007aae0c);
    /* 007aae0c: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae0f: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae12: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 007aae14: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007aae16: add edx, dword ptr [eax + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007aae19: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 007aae1c: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007aae1f: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007aae22: fld dword ptr [edx*4 + 0x97d9a8] */ FPUSH(R_F32((u32)(r_edx*4+0x97d9a8u)));
    /* 007aae29: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aae2b: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 007aae2e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae31: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae34: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 007aae37: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 007aae3a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aae3c: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 007aae3f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae42: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aae44: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aae47: fild dword ptr [ebp - 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffff8u)));
    /* 007aae4a: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007aae4d: fld dword ptr [eax*4 + 0x97d9a8] */ FPUSH(R_F32((u32)(r_eax*4+0x97d9a8u)));
    /* 007aae54: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aae56: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007aae59: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007aae5c: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 007aae5f: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007aae61: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 007aae64: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 007aae67: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 007aae6a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007aae6c: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 007aae6f: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007aae71: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 007aae74: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 007aae77: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007aae7a: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 007aae7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007aae7f: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
L_007aae82:; BB(0x007aae82);
    /* 007aae82: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 007aae85: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 007aae88: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007aae8a: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 007aae8d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aae90: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 007aae93: mov ecx, eax */ r_ecx = r_eax;
    /* 007aae95: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7aae9au); f_0082dcbc();
    /* 007aae9a: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 007aae9d: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007aaea0: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 007aaea3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007aaea5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaea8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007aaeaa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007aaead: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 007aaeb0: mov ecx, eax */ r_ecx = r_eax;
    /* 007aaeb2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7aaeb7u); f_0082ddd8();
    /* 007aaeb7: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 007aaeba: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007aaebd: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 007aaec0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007aaec2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007aaec5: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007aaec7: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 007aaeca: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaecb: ret 8 */ FN_RET(0x007aac60); r_esp += 12; return;
}

void f_007aaed0(void) /* sub_7AAED0 */
{
    FN_ENTER(0x007aaed0);
    /* 007aaed0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aaed1: mov ebp, esp */ r_ebp = r_esp;
    /* 007aaed3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007aaed6: mov dword ptr [0xaab51c], eax */ W32((u32)(0xaab51cu), r_eax);
    /* 007aaedb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aaedc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaedf: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007aaee2: call 0x7aaefc */ r_esp -= 4; W32(r_esp, 0x7aaee7u); f_007aaefc();
    /* 007aaee7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007aaee8: add dword ptr [0xaab51c], 8 */ { u32 ad = (u32)(0xaab51cu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007aaeef: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaef4: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 007aaefa: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007aaefb: ret  */ FN_RET(0x007aaed0); r_esp += 4; return;
}

void f_007aaefc(void) /* sub_7AAEFC */
{
    FN_ENTER(0x007aaefc);
    /* 007aaefc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007aaefd: mov ebp, esp */ r_ebp = r_esp;
    /* 007aaeff: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007aaf02: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf07: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 007aaf0a: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 007aaf0c: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf11: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 007aaf18: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaf1b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aaf1d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aaf1f: jne 0x7aaf35 */ if (!fZ) goto L_007aaf35;
L_007aaf21:; BB(0x007aaf21);
    /* 007aaf21: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf26: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aaf29: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aaf2c: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aaf32: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_007aaf35:; BB(0x007aaf35);
    /* 007aaf35: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaf38: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aaf3a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aaf3c: jne 0x7aaf52 */ if (!fZ) goto L_007aaf52;
L_007aaf3e:; BB(0x007aaf3e);
    /* 007aaf3e: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf43: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aaf46: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aaf49: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aaf4f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_007aaf52:; BB(0x007aaf52);
    /* 007aaf52: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaf55: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aaf57: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007aaf59: jne 0x7aaf6f */ if (!fZ) goto L_007aaf6f;
L_007aaf5b:; BB(0x007aaf5b);
    /* 007aaf5b: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf60: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aaf63: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aaf66: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aaf6c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_007aaf6f:; BB(0x007aaf6f);
    /* 007aaf6f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aaf72: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aaf75: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 007aaf78: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aaf7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aaf7d: je 0x7aafce */ if (fZ) goto L_007aafce;
L_007aaf7f:; BB(0x007aaf7f);
    /* 007aaf7f: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aaf84: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aaf87: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aaf8a: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aaf90: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007aaf93: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aaf96: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007aaf98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aaf9a: je 0x7aafb0 */ if (fZ) goto L_007aafb0;
L_007aaf9c:; BB(0x007aaf9c);
    /* 007aaf9c: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aafa1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aafa4: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aafa7: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aafad: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_007aafb0:; BB(0x007aafb0);
    /* 007aafb0: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 007aafb3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aafb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aafb8: je 0x7aafce */ if (fZ) goto L_007aafce;
L_007aafba:; BB(0x007aafba);
    /* 007aafba: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aafbf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aafc2: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aafc5: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aafcb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_007aafce:; BB(0x007aafce);
    /* 007aafce: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007aafd1: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 007aafd4: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007aafd7: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aafda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aafdc: je 0x7ab006 */ if (fZ) goto L_007ab006;
L_007aafde:; BB(0x007aafde);
    /* 007aafde: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007aafe3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007aafe6: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007aafe9: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007aafef: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007aaff2: add dword ptr [0xaab51c], 8 */ { u32 ad = (u32)(0xaab51cu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007aaff9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007aaffa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007aaffd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ab000: call 0x7aaefc */ r_esp -= 4; W32(r_esp, 0x7ab005u); f_007aaefc();
    /* 007ab005: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ab006:; BB(0x007ab006);
    /* 007ab006: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007ab009: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007ab00c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007ab00f: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ab012: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ab014: je 0x7ab040 */ if (fZ) goto L_007ab040;
L_007ab016:; BB(0x007ab016);
    /* 007ab016: mov eax, dword ptr [0xaab51c] */ r_eax = R32((u32)(0xaab51cu));
    /* 007ab01b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007ab01e: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007ab023: mov edx, dword ptr [0xaab51c] */ r_edx = R32((u32)(0xaab51cu));
    /* 007ab029: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007ab02c: add dword ptr [0xaab51c], 8 */ { u32 ad = (u32)(0xaab51cu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007ab033: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab034: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ab037: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ab03a: call 0x7aaefc */ r_esp -= 4; W32(r_esp, 0x7ab03fu); f_007aaefc();
    /* 007ab03f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ab040:; BB(0x007ab040);
    /* 007ab040: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab041: ret  */ FN_RET(0x007aaefc); r_esp += 4; return;
}

