#include "protos.h"

void f_0055e430(void) /* sub_55E430 */
{
    FN_ENTER(0x0055e430);
    /* 0055e430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e431: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e434: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0055e436: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 0055e43c: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 0055e442: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0055e444: fmul qword ptr [0x9255c8] */ ST(0) = ST(0) * R_F64((u32)(0x9255c8u));
    /* 0055e44a: fdiv qword ptr [0x9255c0] */ ST(0) = ST(0) / R_F64((u32)(0x9255c0u));
    /* 0055e450: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0055e453: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0055e457: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e45c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0055e460: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0055e464: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0055e468: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0055e46b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0055e46f: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e475: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e478: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x55e47du); f_007a8c74();
    /* 0055e47d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0055e480: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0055e483: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055e486: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055e487: ret  */ FN_RET(0x0055e430); r_esp += 4; return;
}

void f_0055e488(void) /* sub_55E488 */
{
    FN_ENTER(0x0055e488);
    /* 0055e488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055e489: mov ebp, esp */ r_ebp = r_esp;
    /* 0055e48b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055e48d: push 0x8d6650 */ { u32 v = 0x8d6650u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055e498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0055e4a0: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055e4a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0055e4a6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0055e4a9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0055e4ac: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0055e4af: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0055e4b2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0055e4b5: lea eax, [ecx + 0x45c] */ r_eax = (u32)(r_ecx+0x45cu);
    /* 0055e4bb: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e4be: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0055e4c1: je 0x55ea0b */ if (fZ) goto L_0055ea0b;
L_0055e4c7:; BB(0x0055e4c7);
    /* 0055e4c7: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e4ca: je 0x55e8e9 */ if (fZ) goto L_0055e8e9;
L_0055e4d0:; BB(0x0055e4d0);
    /* 0055e4d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e4d2: jne 0x55e875 */ if (!fZ) goto L_0055e875;
L_0055e4d8:; BB(0x0055e4d8);
    /* 0055e4d8: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55e4ddu); f_007aa094();
    /* 0055e4dd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e4e0: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 0055e4e6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e4e9: je 0x55e9c8 */ if (fZ) goto L_0055e9c8;
L_0055e4ef:; BB(0x0055e4ef);
    /* 0055e4ef: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e4f1: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x55e4f6u); f_00521238();
    /* 0055e4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e4f8: je 0x55e913 */ if (fZ) goto L_0055e913;
L_0055e4fe:; BB(0x0055e4fe);
    /* 0055e4fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e501: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55e506u); f_005213d8();
    /* 0055e506: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e509: mov eax, dword ptr [eax + 0x43c] */ r_eax = R32((u32)(r_eax+0x43cu));
    /* 0055e50f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e512: je 0x55e97f */ if (fZ) goto L_0055e97f;
L_0055e518:; BB(0x0055e518);
    /* 0055e518: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e51b: je 0x55e92c */ if (fZ) goto L_0055e92c;
L_0055e521:; BB(0x0055e521);
    /* 0055e521: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e524: je 0x55e6db */ if (fZ) goto L_0055e6db;
L_0055e52a:; BB(0x0055e52a);
    /* 0055e52a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e52d: jne 0x55e678 */ if (!fZ) goto L_0055e678;
L_0055e533:; BB(0x0055e533);
    /* 0055e533: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e536: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 0055e53c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e53f: mov dword ptr [eax + 0x440], edx */ W32((u32)(r_eax+0x440u), r_edx);
    /* 0055e545: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e548: jl 0x55e85d */ if ((fS!=fO)) goto L_0055e85d;
L_0055e54e:; BB(0x0055e54e);
    /* 0055e54e: push 0x9257b8 */ { u32 v = 0x9257b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e553: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e555: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055e55b: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055e560: mov dword ptr [ecx + 0x43c], 5 */ W32((u32)(r_ecx+0x43cu), 0x5u);
    /* 0055e56a: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055e570: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55e575u); f_0055eb88();
    /* 0055e575: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e578: add dword ptr [ecx + 0x410], 1 */ { u32 ad = (u32)(r_ecx+0x410u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0055e57f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55e584u); f_007aa094();
    /* 0055e584: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0055e589: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x55e58eu); f_0082d990();
    /* 0055e58e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e591: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0055e594: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x55e599u); f_0082d838();
    /* 0055e599: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e59c: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0055e59f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e5a1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x55e5a6u); f_0082d8bc();
    /* 0055e5a6: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x55e5abu); f_0082fa9c();
    /* 0055e5ab: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e5ae: fild dword ptr [ecx + 0x440] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x440u)));
    /* 0055e5b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055e5b5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055e5b8: call 0x7aaab8 */ r_esp -= 4; W32(r_esp, 0x55e5bdu); f_007aaab8();
    /* 0055e5bd: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x55e5c2u); f_0082faac();
    /* 0055e5c2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55e5c7u); f_0082da80();
    /* 0055e5c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e5ca: mov dword ptr [eax + 0x440], 0 */ W32((u32)(r_eax+0x440u), 0x0u);
    /* 0055e5d4: mov ecx, dword ptr [0xaab540] */ r_ecx = R32((u32)(0xaab540u));
    /* 0055e5da: add ecx, 0x1c0 */ {  u32 a = r_ecx; u32 b = 0x1c0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e5e0: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x55e5e5u); f_0082d990();
    /* 0055e5e5: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 0055e5ec: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0055e5ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e5f1: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0055e5f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e5f9: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055e600: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0055e603: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x55e608u); f_00830aa0();
    /* 0055e608: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x55e60du); f_0082da80();
    /* 0055e60d: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0055e610: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e613: fadd dword ptr [eax + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3f0u));
    /* 0055e619: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 0055e61c: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0055e623: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e628: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x55e62du); f_005caba4();
    /* 0055e62d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055e62e: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055e631: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e633: je 0x55e66c */ if (fZ) goto L_0055e66c;
L_0055e635:; BB(0x0055e635);
    /* 0055e635: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055e63c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055e643: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e646: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e649: lea esi, [ebp - 0x44] */ r_esi = (u32)(r_ebp+0xffffffbcu);
    /* 0055e64c: mov edx, dword ptr [edi + 0x434] */ r_edx = R32((u32)(r_edi+0x434u));
    /* 0055e652: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e654: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e657: push dword ptr [edi + 0x404] */ { u32 v = R32((u32)(r_edi+0x404u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055e65d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e65e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055e65f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055e660: call 0x55fecc */ r_esp -= 4; W32(r_esp, 0x55e665u); f_0055fecc();
    /* 0055e665: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0055e66c:; BB(0x0055e66c);
    /* 0055e66c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055e673: jmp 0x55e85d */ goto L_0055e85d;
L_0055e678:; BB(0x0055e678);
    /* 0055e678: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e67b: jne 0x55e85d */ if (!fZ) goto L_0055e85d;
L_0055e681:; BB(0x0055e681);
    /* 0055e681: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e684: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 0055e68a: mov ecx, dword ptr [eax + 0x434] */ r_ecx = R32((u32)(r_eax+0x434u));
    /* 0055e690: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e693: mov dword ptr [eax + 0x440], edx */ W32((u32)(r_eax+0x440u), r_edx);
    /* 0055e699: cmp edx, dword ptr [ecx + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e69c: jle 0x55e85d */ if ((fZ||fS!=fO)) goto L_0055e85d;
L_0055e6a2:; BB(0x0055e6a2);
    /* 0055e6a2: mov ecx, dword ptr [eax + 0x434] */ r_ecx = R32((u32)(r_eax+0x434u));
    /* 0055e6a8: mov edx, dword ptr [eax + 0x410] */ r_edx = R32((u32)(r_eax+0x410u));
    /* 0055e6ae: mov dword ptr [eax + 0x440], 0 */ W32((u32)(r_eax+0x440u), 0x0u);
    /* 0055e6b8: cmp edx, dword ptr [ecx + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e6bb: jl 0x55e6cc */ if ((fS!=fO)) goto L_0055e6cc;
L_0055e6bd:; BB(0x0055e6bd);
    /* 0055e6bd: mov dword ptr [eax + 0x43c], 6 */ W32((u32)(r_eax+0x43cu), 0x6u);
    /* 0055e6c7: jmp 0x55e85d */ goto L_0055e85d;
L_0055e6cc:; BB(0x0055e6cc);
    /* 0055e6cc: mov dword ptr [eax + 0x43c], 1 */ W32((u32)(r_eax+0x43cu), 0x1u);
    /* 0055e6d6: jmp 0x55e85d */ goto L_0055e85d;
L_0055e6db:; BB(0x0055e6db);
    /* 0055e6db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e6de: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e6e3u); f_00521410();
    /* 0055e6e3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e6e6: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55e6ebu); f_0055e430();
    /* 0055e6eb: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e6ee: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055e6f1: lea ecx, [ebp - 0x30] */ r_ecx = (u32)(r_ebp+0xffffffd0u);
    /* 0055e6f4: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 0055e6fa: mov ebx, dword ptr [esi + 0x3a0] */ r_ebx = R32((u32)(r_esi+0x3a0u));
    /* 0055e700: mov edi, dword ptr [esi + 0x3a4] */ r_edi = R32((u32)(r_esi+0x3a4u));
    /* 0055e706: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0055e709: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0055e70c: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0055e70f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x55e714u); f_0082f9c4();
    /* 0055e714: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0055e717: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e718: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x55e71du); f_007828e4();
    /* 0055e71d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055e71e: fld dword ptr [0x9256bc] */ FPUSH(R_F32((u32)(0x9256bcu)));
    /* 0055e724: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0055e726: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0055e728: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055e72a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055e72b: jae 0x55e757 */ if (!fC) goto L_0055e757;
L_0055e72d:; BB(0x0055e72d);
    /* 0055e72d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0055e72f: mov ebx, esi */ r_ebx = r_esi;
    /* 0055e731: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 0055e737: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0055e73d: mov ecx, dword ptr [ebx + 0x3a4] */ r_ecx = R32((u32)(r_ebx+0x3a4u));
    /* 0055e743: mov dword ptr [ebx + 0x45c], eax */ W32((u32)(r_ebx+0x45cu), r_eax);
    /* 0055e749: mov dword ptr [ebx + 0x460], edx */ W32((u32)(r_ebx+0x460u), r_edx);
    /* 0055e74f: mov dword ptr [ebx + 0x464], ecx */ W32((u32)(r_ebx+0x464u), r_ecx);
    /* 0055e755: jmp 0x55e78c */ goto L_0055e78c;
L_0055e757:; BB(0x0055e757);
    /* 0055e757: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0055e75a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055e75c: mov eax, esi */ r_eax = r_esi;
    /* 0055e75e: fadd dword ptr [eax + 0x45c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x45cu));
    /* 0055e764: fstp dword ptr [eax + 0x45c] */ W_F32((u32)(r_eax+0x45cu), ST(0)); FPOP();
    /* 0055e76a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0055e76d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0055e76f: fadd dword ptr [eax + 0x460] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x460u));
    /* 0055e775: fstp dword ptr [eax + 0x460] */ W_F32((u32)(r_eax+0x460u), ST(0)); FPOP();
    /* 0055e77b: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0055e77e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0055e780: fadd dword ptr [eax + 0x464] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x464u));
    /* 0055e786: fstp dword ptr [eax + 0x464] */ W_F32((u32)(r_eax+0x464u), ST(0)); FPOP();
L_0055e78c:; BB(0x0055e78c);
    /* 0055e78c: mov eax, esi */ r_eax = r_esi;
    /* 0055e78e: mov edx, dword ptr [eax + 0x440] */ r_edx = R32((u32)(r_eax+0x440u));
    /* 0055e794: mov ecx, dword ptr [eax + 0x434] */ r_ecx = R32((u32)(r_eax+0x434u));
    /* 0055e79a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055e79d: mov dword ptr [eax + 0x440], edx */ W32((u32)(r_eax+0x440u), r_edx);
    /* 0055e7a3: cmp edx, dword ptr [ecx + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055e7a6: jle 0x55e83a */ if ((fZ||fS!=fO)) goto L_0055e83a;
L_0055e7ac:; BB(0x0055e7ac);
    /* 0055e7ac: mov edx, eax */ r_edx = r_eax;
    /* 0055e7ae: mov dword ptr [edx + 0x43c], 4 */ W32((u32)(r_edx+0x43cu), 0x4u);
    /* 0055e7b8: mov eax, 1 */ r_eax = 0x1u;
    /* 0055e7bd: mov word ptr [edx + 0xb8], ax */ W16((u32)(r_edx+0xb8u), (u16)r_eax);
    /* 0055e7c4: mov dword ptr [edx + 0x440], 0 */ W32((u32)(r_edx+0x440u), 0x0u);
    /* 0055e7ce: mov edx, dword ptr [edx + 0x468] */ r_edx = R32((u32)(r_edx+0x468u));
    /* 0055e7d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e7d6: je 0x55e7f1 */ if (fZ) goto L_0055e7f1;
L_0055e7d8:; BB(0x0055e7d8);
    /* 0055e7d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055e7dc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e7e1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055e7e5: mov edx, esi */ r_edx = r_esi;
    /* 0055e7e7: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
L_0055e7f1:; BB(0x0055e7f1);
    /* 0055e7f1: mov eax, esi */ r_eax = r_esi;
    /* 0055e7f3: mov edx, dword ptr [eax + 0x46c] */ r_edx = R32((u32)(r_eax+0x46cu));
    /* 0055e7f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e7fb: je 0x55e816 */ if (fZ) goto L_0055e816;
L_0055e7fd:; BB(0x0055e7fd);
    /* 0055e7fd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055e801: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e806: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055e80a: mov edx, esi */ r_edx = r_esi;
    /* 0055e80c: mov dword ptr [edx + 0x46c], 0 */ W32((u32)(r_edx+0x46cu), 0x0u);
L_0055e816:; BB(0x0055e816);
    /* 0055e816: mov ecx, esi */ r_ecx = r_esi;
    /* 0055e818: push 0x224 */ { u32 v = 0x224u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e81d: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55e822u); f_007879b8();
    /* 0055e822: mov edx, esi */ r_edx = r_esi;
    /* 0055e824: lea ebx, [edx + 0x300] */ r_ebx = (u32)(r_edx+0x300u);
    /* 0055e82a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0055e82c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e82d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e82e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e82f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e830: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x55e835u); f_00814298();
    /* 0055e835: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055e838: jmp 0x55e85d */ goto L_0055e85d;
L_0055e83a:; BB(0x0055e83a);
    /* 0055e83a: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e83c: push 0x221 */ { u32 v = 0x221u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e841: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x55e846u); f_007879b8();
    /* 0055e846: mov ebx, esi */ r_ebx = r_esi;
    /* 0055e848: lea ecx, [ebx + 0x300] */ r_ecx = (u32)(r_ebx+0x300u);
    /* 0055e84e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0055e850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e851: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e852: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e853: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055e854: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055e855: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x55e85au); f_008144b0();
    /* 0055e85a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055e85d:; BB(0x0055e85d);
    /* 0055e85d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e860: call 0x55d460 */ r_esp -= 4; W32(r_esp, 0x55e865u); f_0055d460();
    /* 0055e865: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e868: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055e86a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55e870u); call_ind(t); }
    /* 0055e870: jmp 0x55e913 */ goto L_0055e913;
L_0055e875:; BB(0x0055e875);
    /* 0055e875: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055e878: jne 0x55e913 */ if (!fZ) goto L_0055e913;
L_0055e87e:; BB(0x0055e87e);
    /* 0055e87e: push 0x9257b8 */ { u32 v = 0x9257b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e883: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055e889: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055e88e: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055e894: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55e899u); f_0055eb88();
    /* 0055e899: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e89c: mov edx, dword ptr [eax + 0x468] */ r_edx = R32((u32)(r_eax+0x468u));
    /* 0055e8a2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e8a4: je 0x55e8c0 */ if (fZ) goto L_0055e8c0;
L_0055e8a6:; BB(0x0055e8a6);
    /* 0055e8a6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055e8aa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e8af: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055e8b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e8b6: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
L_0055e8c0:; BB(0x0055e8c0);
    /* 0055e8c0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e8c3: mov edx, dword ptr [eax + 0x46c] */ r_edx = R32((u32)(r_eax+0x46cu));
    /* 0055e8c9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e8cb: je 0x55e913 */ if (fZ) goto L_0055e913;
L_0055e8cd:; BB(0x0055e8cd);
    /* 0055e8cd: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0055e8d1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e8d6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0055e8da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e8dd: mov dword ptr [edx + 0x46c], 0 */ W32((u32)(r_edx+0x46cu), 0x0u);
    /* 0055e8e7: jmp 0x55e913 */ goto L_0055e913;
L_0055e8e9:; BB(0x0055e8e9);
    /* 0055e8e9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055e8eb: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55e8f1u); call_ind(t); }
    /* 0055e8f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e8f3: jne 0x55e913 */ if (!fZ) goto L_0055e913;
L_0055e8f5:; BB(0x0055e8f5);
    /* 0055e8f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e8f8: call 0x55dd5c */ r_esp -= 4; W32(r_esp, 0x55e8fdu); f_0055dd5c();
    /* 0055e8fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e8ff: jne 0x55e913 */ if (!fZ) goto L_0055e913;
L_0055e901:; BB(0x0055e901);
    /* 0055e901: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e904: mov edx, dword ptr [eax + 0x43c] */ r_edx = R32((u32)(r_eax+0x43cu));
    /* 0055e90a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055e90d: je 0x55e9e1 */ if (fZ) goto L_0055e9e1;
L_0055e913:; BB(0x0055e913);
    /* 0055e913: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055e916: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055e919: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055e91c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e91f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055e926: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e929: ret 4 */ FN_RET(0x0055e488); r_esp += 8; return;
L_0055e92c:; BB(0x0055e92c);
    /* 0055e92c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e92f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e934u); f_00521410();
    /* 0055e934: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e937: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55e93cu); f_0055e430();
    /* 0055e93c: push 0x9256c8 */ { u32 v = 0x9256c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e941: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e944: mov dword ptr [ecx + 0x43c], 3 */ W32((u32)(r_ecx+0x43cu), 0x3u);
    /* 0055e94e: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55e953u); f_0055eb88();
    /* 0055e953: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e956: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 0055e95c: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0055e962: mov ecx, dword ptr [ebx + 0x3a4] */ r_ecx = R32((u32)(r_ebx+0x3a4u));
    /* 0055e968: mov dword ptr [ebx + 0x45c], eax */ W32((u32)(r_ebx+0x45cu), r_eax);
    /* 0055e96e: mov dword ptr [ebx + 0x460], edx */ W32((u32)(r_ebx+0x460u), r_edx);
    /* 0055e974: mov dword ptr [ebx + 0x464], ecx */ W32((u32)(r_ebx+0x464u), r_ecx);
    /* 0055e97a: jmp 0x55e85d */ goto L_0055e85d;
L_0055e97f:; BB(0x0055e97f);
    /* 0055e97f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e982: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55e987u); f_00521410();
    /* 0055e987: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e98a: call 0x55ea74 */ r_esp -= 4; W32(r_esp, 0x55e98fu); f_0055ea74();
    /* 0055e98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e991: je 0x55e9b1 */ if (fZ) goto L_0055e9b1;
L_0055e993:; BB(0x0055e993);
    /* 0055e993: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e996: mov eax, dword ptr [edx + 0x3d0] */ r_eax = R32((u32)(r_edx+0x3d0u));
    /* 0055e99c: mov dword ptr [edx + 0x43c], 2 */ W32((u32)(r_edx+0x43cu), 0x2u);
    /* 0055e9a6: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055e9ab: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
L_0055e9b1:; BB(0x0055e9b1);
    /* 0055e9b1: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9b6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055e9b9: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9be: call 0x5215ec */ r_esp -= 4; W32(r_esp, 0x55e9c3u); f_005215ec();
    /* 0055e9c3: jmp 0x55e85d */ goto L_0055e85d;
L_0055e9c8:; BB(0x0055e9c8);
    /* 0055e9c8: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9cd: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e9cf: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55e9d4u); f_00520ea0();
    /* 0055e9d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055e9d6: je 0x55e913 */ if (fZ) goto L_0055e913;
L_0055e9dc:; BB(0x0055e9dc);
    /* 0055e9dc: jmp 0x55e4fe */ goto L_0055e4fe;
L_0055e9e1:; BB(0x0055e9e1);
    /* 0055e9e1: mov edx, dword ptr [eax + 0x3d0] */ r_edx = R32((u32)(r_eax+0x3d0u));
    /* 0055e9e7: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055e9ed: je 0x55e9fd */ if (fZ) goto L_0055e9fd;
L_0055e9ef:; BB(0x0055e9ef);
    /* 0055e9ef: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e9f1: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0055e9f3: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55e9f8u); f_0051f62c();
    /* 0055e9f8: jmp 0x55e913 */ goto L_0055e913;
L_0055e9fd:; BB(0x0055e9fd);
    /* 0055e9fd: mov ecx, eax */ r_ecx = r_eax;
    /* 0055e9ff: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea01: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55ea06u); f_0051f62c();
    /* 0055ea06: jmp 0x55e913 */ goto L_0055e913;
L_0055ea0b:; BB(0x0055ea0b);
    /* 0055ea0b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea0d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55ea12u); f_0051f664();
    /* 0055ea12: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea15: mov eax, dword ptr [ecx + 0x3d0] */ r_eax = R32((u32)(r_ecx+0x3d0u));
    /* 0055ea1b: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ea20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055ea22: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ea27: mov dword ptr [ecx + 0x3d0], eax */ W32((u32)(r_ecx+0x3d0u), r_eax);
    /* 0055ea2d: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55ea33u); call_ind(t); }
    /* 0055ea33: push 0x9257b8 */ { u32 v = 0x9257b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea3b: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0055ea3e: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055ea43: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0055ea46: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55ea4bu); f_0055eb88();
    /* 0055ea4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea4e: mov dword ptr [edx + 0x43c], 1 */ W32((u32)(r_edx+0x43cu), 0x1u);
    /* 0055ea58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ea5a: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 0055ea60: mov dword ptr [edx + 0x468], eax */ W32((u32)(r_edx+0x468u), r_eax);
    /* 0055ea66: mov dword ptr [edx + 0x46c], eax */ W32((u32)(r_edx+0x46cu), r_eax);
    /* 0055ea6c: jmp 0x55e913 */ goto L_0055e913;
}

void f_0055e9e0(void)
{
    FN_ENTER(0x0055e9e0);
    /* 0055e9e0: dec dword ptr [ebx + 0x3d090] */ { u32 ad = (u32)(r_ebx+0x3d090u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0055e9e6: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0055e9e8: ret 0 */ FN_RET(0x0055e9e0); r_esp += 4; return;
}

void f_0055ea49(void)
{
    FN_ENTER(0x0055ea49);
    goto L_0055ea49;
L_0055e913:; BB(0x0055e913);
    /* 0055e913: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055e916: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055e919: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055e91c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055e91f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055e926: mov esp, ebp */ r_esp = r_ebp;
    /* 0055e928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055e929: ret 4 */ FN_RET(0x0055ea49); r_esp += 8; return;
L_0055ea49:; BB(0x0055ea49);
    /* 0055ea49: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0055ea4b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055ea4e: mov dword ptr [edx + 0x43c], 1 */ W32((u32)(r_edx+0x43cu), 0x1u);
    /* 0055ea58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ea5a: mov dword ptr [edx + 0x440], eax */ W32((u32)(r_edx+0x440u), r_eax);
    /* 0055ea60: mov dword ptr [edx + 0x468], eax */ W32((u32)(r_edx+0x468u), r_eax);
    /* 0055ea66: mov dword ptr [edx + 0x46c], eax */ W32((u32)(r_edx+0x46cu), r_eax);
    /* 0055ea6c: jmp 0x55e913 */ goto L_0055e913;
}

void f_0055ea74(void) /* sub_55EA74 */
{
    FN_ENTER(0x0055ea74);
    /* 0055ea74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea76: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea77: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea78: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ea7b: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ea7d: fld dword ptr [edi + 0x3b4] */ FPUSH(R_F32((u32)(r_edi+0x3b4u)));
    /* 0055ea83: fcomp dword ptr [0x9256b4] */ fx_compare(ST(0), R_F32((u32)(0x9256b4u))); FPOP();
    /* 0055ea89: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055ea8b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0055ea8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055ea8e: jae 0x55eb58 */ if (!fC) goto L_0055eb58;
L_0055ea94:; BB(0x0055ea94);
    /* 0055ea94: movzx edx, word ptr [edi + 0x494] */ r_edx = (u32)R16((u32)(r_edi+0x494u));
    /* 0055ea9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ea9c: mov esi, 1 */ r_esi = 0x1u;
    /* 0055eaa1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55eaa6u); f_007b4d18();
    /* 0055eaa6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055eaa7: push dword ptr [edi + 0x398] */ { u32 v = R32((u32)(r_edi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055eaad: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 0055eab3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055eab5: mov ecx, eax */ r_ecx = r_eax;
    /* 0055eab7: call dword ptr [edx + 0x1d8] */ { u32 t = R32((u32)(r_edx+0x1d8u)); r_esp -= 4; W32(r_esp, 0x55eabdu); call_ind(t); }
    /* 0055eabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eabf: jne 0x55eb58 */ if (!fZ) goto L_0055eb58;
L_0055eac5:; BB(0x0055eac5);
    /* 0055eac5: fld dword ptr [0x9256b8] */ FPUSH(R_F32((u32)(0x9256b8u)));
    /* 0055eacb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055eace: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0055ead2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ead3: push dword ptr [0xa73c34] */ { u32 v = R32((u32)(0xa73c34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055ead9: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0055eadb: mov ecx, edi */ r_ecx = r_edi;
    /* 0055eadd: call 0x51f918 */ r_esp -= 4; W32(r_esp, 0x55eae2u); f_0051f918();
    /* 0055eae2: mov edx, eax */ r_edx = r_eax;
    /* 0055eae4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055eae6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0055eae8: jle 0x55eb44 */ if ((fZ||fS!=fO)) goto L_0055eb44;
L_0055eaea:; BB(0x0055eaea);
    /* 0055eaea: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0055eaee: mov ebp, eax */ r_ebp = r_eax;
    /* 0055eaf0: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0055eaf4: mov esi, edi */ r_esi = r_edi;
    /* 0055eaf6: mov edi, edx */ r_edi = r_edx;
L_0055eaf8:; BB(0x0055eaf8);
    /* 0055eaf8: movzx ebx, word ptr [esp + ebp*8 + 0xc] */ r_ebx = (u32)R16((u32)(r_esp+r_ebp*8+0xcu));
    /* 0055eafd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eafe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x55eb03u); f_0068d5a8();
    /* 0055eb03: mov ebx, eax */ r_ebx = r_eax;
    /* 0055eb05: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eb08: cmp ebx, dword ptr [esi + 0x398] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x398u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb0e: je 0x55eb35 */ if (fZ) goto L_0055eb35;
L_0055eb10:; BB(0x0055eb10);
    /* 0055eb10: movzx eax, word ptr [esi + 0x494] */ r_eax = (u32)R16((u32)(r_esi+0x494u));
    /* 0055eb17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb18: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x55eb1du); f_007b4d18();
    /* 0055eb1d: mov ecx, eax */ r_ecx = r_eax;
    /* 0055eb1f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055eb22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb23: mov dword ptr [esi + 0x3c8], ecx */ W32((u32)(r_esi+0x3c8u), r_ecx);
    /* 0055eb29: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0055eb2b: call dword ptr [eax + 0x1d8] */ { u32 t = R32((u32)(r_eax+0x1d8u)); r_esp -= 4; W32(r_esp, 0x55eb31u); call_ind(t); }
    /* 0055eb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb33: jne 0x55eb62 */ if (!fZ) goto L_0055eb62;
L_0055eb35:; BB(0x0055eb35);
    /* 0055eb35: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0055eb38: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055eb3a: jl 0x55eaf8 */ if ((fS!=fO)) goto L_0055eaf8;
L_0055eb3c:; BB(0x0055eb3c);
    /* 0055eb3c: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0055eb40: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0055eb44:; BB(0x0055eb44);
    /* 0055eb44: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055eb46: je 0x55eb58 */ if (fZ) goto L_0055eb58;
L_0055eb48:; BB(0x0055eb48);
    /* 0055eb48: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0055eb4b: fcomp dword ptr [0x9256b4] */ fx_compare(ST(0), R_F32((u32)(0x9256b4u))); FPOP();
    /* 0055eb51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0055eb53: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0055eb54: jbe 0x55eb58 */ if ((fC||fZ)) goto L_0055eb58;
L_0055eb56:; BB(0x0055eb56);
    /* 0055eb56: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0055eb58:; BB(0x0055eb58);
    /* 0055eb58: mov eax, esi */ r_eax = r_esi;
    /* 0055eb5a: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055eb5d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0055eb5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055eb5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055eb60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055eb61: ret  */ FN_RET(0x0055ea74); r_esp += 4; return;
L_0055eb62:; BB(0x0055eb62);
    /* 0055eb62: mov eax, ebp */ r_eax = r_ebp;
    /* 0055eb64: mov edi, esi */ r_edi = r_esi;
    /* 0055eb66: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0055eb6a: push dword ptr [esp + eax*8 + 0x10] */ { u32 v = R32((u32)(r_esp+r_eax*8+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055eb6e: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x55eb73u); f_0082dc9c();
    /* 0055eb73: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055eb76: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0055eb77: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0055eb7c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055eb7e: call 0x521388 */ r_esp -= 4; W32(r_esp, 0x55eb83u); f_00521388();
    /* 0055eb83: jmp 0x55eb44 */ goto L_0055eb44;
}

void f_0055eb88(void) /* sub_55EB88 */
{
    FN_ENTER(0x0055eb88);
    /* 0055eb88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0055eb8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055eb8e: mov dword ptr [ecx + 0x470], edx */ W32((u32)(r_ecx+0x470u), r_edx);
    /* 0055eb94: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055eb97: mov dword ptr [ecx + 0x474], edx */ W32((u32)(r_ecx+0x474u), r_edx);
    /* 0055eb9d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0055eba0: mov dword ptr [ecx + 0x478], edx */ W32((u32)(r_ecx+0x478u), r_edx);
    /* 0055eba6: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0055eba9: mov dword ptr [ecx + 0x47c], eax */ W32((u32)(r_ecx+0x47cu), r_eax);
    /* 0055ebaf: call 0x55cd60 */ r_esp -= 4; W32(r_esp, 0x55ebb4u); f_0055cd60();
    /* 0055ebb4: ret 4 */ FN_RET(0x0055eb88); r_esp += 8; return;
}

void f_0055ebb8(void) /* sub_55EBB8 */
{
    FN_ENTER(0x0055ebb8);
    /* 0055ebb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055ebb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0055ebbb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055ebbf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ebc2: je 0x55ed73 */ if (fZ) goto L_0055ed73;
L_0055ebc8:; BB(0x0055ebc8);
    /* 0055ebc8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ebcb: je 0x55ed66 */ if (fZ) goto L_0055ed66;
L_0055ebd1:; BB(0x0055ebd1);
    /* 0055ebd1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ebd4: je 0x55ed37 */ if (fZ) goto L_0055ed37;
L_0055ebda:; BB(0x0055ebda);
    /* 0055ebda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ebdc: jne 0x55ed66 */ if (!fZ) goto L_0055ed66;
L_0055ebe2:; BB(0x0055ebe2);
    /* 0055ebe2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ebe4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55ebe9u); f_007aa094();
    /* 0055ebe9: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ebee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ebf0: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55ebf5u); f_00520ea0();
    /* 0055ebf5: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055ebfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ebfd: je 0x55ec81 */ if (fZ) goto L_0055ec81;
L_0055ec03:; BB(0x0055ec03);
    /* 0055ec03: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec06: jne 0x55ec2f */ if (!fZ) goto L_0055ec2f;
L_0055ec08:; BB(0x0055ec08);
    /* 0055ec08: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0055ec0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec10: jne 0x55ec1c */ if (!fZ) goto L_0055ec1c;
L_0055ec12:; BB(0x0055ec12);
    /* 0055ec12: mov dword ptr [ebp + 0x43c], 3 */ W32((u32)(r_ebp+0x43cu), 0x3u);
L_0055ec1c:; BB(0x0055ec1c);
    /* 0055ec1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ec1e: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55ec23u); f_0055edbc();
    /* 0055ec23: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ec25: call 0x55fb5c */ r_esp -= 4; W32(r_esp, 0x55ec2au); f_0055fb5c();
    /* 0055ec2a: jmp 0x55ed28 */ goto L_0055ed28;
L_0055ec2f:; BB(0x0055ec2f);
    /* 0055ec2f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec32: jne 0x55ed28 */ if (!fZ) goto L_0055ed28;
L_0055ec38:; BB(0x0055ec38);
    /* 0055ec38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ec3a: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55ec3fu); f_0055edbc();
    /* 0055ec3f: mov eax, dword ptr [ebp + 0x484] */ r_eax = R32((u32)(r_ebp+0x484u));
    /* 0055ec45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec47: jne 0x55ed6a */ if (!fZ) goto L_0055ed6a;
L_0055ec4d:; BB(0x0055ec4d);
    /* 0055ec4d: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0055ec50: fadd dword ptr [ebp + 0x3f8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3f8u));
    /* 0055ec56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ec57: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055ec5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ec5c: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55ec61u); f_0055fb84();
    /* 0055ec61: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055ec67: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec6c: je 0x55ed28 */ if (fZ) goto L_0055ed28;
L_0055ec72:; BB(0x0055ec72);
    /* 0055ec72: mov dword ptr [ebp + 0x43c], 3 */ W32((u32)(r_ebp+0x43cu), 0x3u);
    /* 0055ec7c: jmp 0x55ed28 */ goto L_0055ed28;
L_0055ec81:; BB(0x0055ec81);
    /* 0055ec81: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055ec87: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055ec89: je 0x55ed1a */ if (fZ) goto L_0055ed1a;
L_0055ec8f:; BB(0x0055ec8f);
    /* 0055ec8f: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ec92: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055ec98: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ec9d: je 0x55ecdf */ if (fZ) goto L_0055ecdf;
L_0055ec9f:; BB(0x0055ec9f);
    /* 0055ec9f: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055eca4: mov dword ptr [ebp + 0x43c], 1 */ W32((u32)(r_ebp+0x43cu), 0x1u);
    /* 0055ecae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ecb0: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55ecb5u); f_0055eb88();
    /* 0055ecb5: mov dword ptr [ebp + 0x484], 3 */ W32((u32)(r_ebp+0x484u), 0x3u);
    /* 0055ecbf: mov dword ptr [ebp + 0x488], 1 */ W32((u32)(r_ebp+0x488u), 0x1u);
    /* 0055ecc9: mov dword ptr [ebp + 0x48c], 2 */ W32((u32)(r_ebp+0x48cu), 0x2u);
    /* 0055ecd3: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
    /* 0055ecdd: jmp 0x55ed1a */ goto L_0055ed1a;
L_0055ecdf:; BB(0x0055ecdf);
    /* 0055ecdf: push 0x9257a4 */ { u32 v = 0x9257a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ece4: mov dword ptr [ebp + 0x43c], 2 */ W32((u32)(r_ebp+0x43cu), 0x2u);
    /* 0055ecee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ecf0: call 0x55eb88 */ r_esp -= 4; W32(r_esp, 0x55ecf5u); f_0055eb88();
    /* 0055ecf5: mov dword ptr [ebp + 0x48c], 2 */ W32((u32)(r_ebp+0x48cu), 0x2u);
    /* 0055ecff: mov eax, 3 */ r_eax = 0x3u;
    /* 0055ed04: mov dword ptr [ebp + 0x484], eax */ W32((u32)(r_ebp+0x484u), r_eax);
    /* 0055ed0a: mov dword ptr [ebp + 0x488], eax */ W32((u32)(r_ebp+0x488u), r_eax);
    /* 0055ed10: mov dword ptr [ebp + 0x490], 0 */ W32((u32)(r_ebp+0x490u), 0x0u);
L_0055ed1a:; BB(0x0055ed1a);
    /* 0055ed1a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed1c: call 0x55edbc */ r_esp -= 4; W32(r_esp, 0x55ed21u); f_0055edbc();
    /* 0055ed21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed23: call 0x55fb5c */ r_esp -= 4; W32(r_esp, 0x55ed28u); f_0055fb5c();
L_0055ed28:; BB(0x0055ed28);
    /* 0055ed28: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055ed2b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed2d: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55ed33u); call_ind(t); }
    /* 0055ed33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ed34: ret 4 */ FN_RET(0x0055ebb8); r_esp += 8; return;
L_0055ed37:; BB(0x0055ed37);
    /* 0055ed37: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055ed3a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed3c: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55ed42u); call_ind(t); }
    /* 0055ed42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ed44: jne 0x55ed66 */ if (!fZ) goto L_0055ed66;
L_0055ed46:; BB(0x0055ed46);
    /* 0055ed46: mov eax, dword ptr [ebp + 0x43c] */ r_eax = R32((u32)(r_ebp+0x43cu));
    /* 0055ed4c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ed4f: jne 0x55ed66 */ if (!fZ) goto L_0055ed66;
L_0055ed51:; BB(0x0055ed51);
    /* 0055ed51: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055ed54: mov dword ptr [ebp + 0x410], 0 */ W32((u32)(r_ebp+0x410u), 0x0u);
    /* 0055ed5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed60: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x55ed66u); call_ind(t); }
L_0055ed66:; BB(0x0055ed66);
    /* 0055ed66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055ed67: ret 4 */ FN_RET(0x0055ebb8); r_esp += 8; return;
L_0055ed6a:; BB(0x0055ed6a);
    /* 0055ed6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed6c: call 0x55fb5c */ r_esp -= 4; W32(r_esp, 0x55ed71u); f_0055fb5c();
    /* 0055ed71: jmp 0x55ed28 */ goto L_0055ed28;
L_0055ed73:; BB(0x0055ed73);
    /* 0055ed73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ed75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055ed77: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0055ed7e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed80: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55ed85u); f_0051f664();
    /* 0055ed85: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 0055ed8b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0055ed8e: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ed93: mov dword ptr [ebp + 0x3d0], eax */ W32((u32)(r_ebp+0x3d0u), r_eax);
    /* 0055ed99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055ed9b: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55eda1u); call_ind(t); }
    /* 0055eda1: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0055eda4: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 0055edae: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055edb3: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0055edb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055edb7: ret 4 */ FN_RET(0x0055ebb8); r_esp += 8; return;
}

void f_0055edbc(void) /* sub_55EDBC */
{
    FN_ENTER(0x0055edbc);
    /* 0055edbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0055edbd: mov esi, ecx */ r_esi = r_ecx;
    /* 0055edbf: mov ecx, esi */ r_ecx = r_esi;
    /* 0055edc1: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x55edc6u); f_00520f04();
    /* 0055edc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055edc8: je 0x55eddf */ if (fZ) goto L_0055eddf;
L_0055edca:; BB(0x0055edca);
    /* 0055edca: mov ecx, esi */ r_ecx = r_esi;
    /* 0055edcc: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x55edd1u); f_005213d8();
    /* 0055edd1: mov ecx, esi */ r_ecx = r_esi;
    /* 0055edd3: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x55edd8u); f_00521410();
    /* 0055edd8: mov ecx, esi */ r_ecx = r_esi;
    /* 0055edda: call 0x55e430 */ r_esp -= 4; W32(r_esp, 0x55eddfu); f_0055e430();
L_0055eddf:; BB(0x0055eddf);
    /* 0055eddf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0055ede0: ret  */ FN_RET(0x0055edbc); r_esp += 4; return;
}

void f_0055ede4(void) /* sub_55EDE4 */
{
    FN_ENTER(0x0055ede4);
    /* 0055ede4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055ede5: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ede7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0055edeb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055edee: je 0x55eeb4 */ if (fZ) goto L_0055eeb4;
L_0055edf4:; BB(0x0055edf4);
    /* 0055edf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055edf7: je 0x55ee9a */ if (fZ) goto L_0055ee9a;
L_0055edfd:; BB(0x0055edfd);
    /* 0055edfd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee00: je 0x55ee58 */ if (fZ) goto L_0055ee58;
L_0055ee02:; BB(0x0055ee02);
    /* 0055ee02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee04: jne 0x55ee44 */ if (!fZ) goto L_0055ee44;
L_0055ee06:; BB(0x0055ee06);
    /* 0055ee06: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee08: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55ee0du); f_007aa094();
    /* 0055ee0d: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0055ee13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee16: je 0x55ee2a */ if (fZ) goto L_0055ee2a;
L_0055ee18:; BB(0x0055ee18);
    /* 0055ee18: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee1d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee1f: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x55ee24u); f_00520ea0();
    /* 0055ee24: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
L_0055ee2a:; BB(0x0055ee2a);
    /* 0055ee2a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ee2d: je 0x55ee9e */ if (fZ) goto L_0055ee9e;
L_0055ee2f:; BB(0x0055ee2f);
    /* 0055ee2f: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee31: call 0x55fb70 */ r_esp -= 4; W32(r_esp, 0x55ee36u); f_0055fb70();
L_0055ee36:; BB(0x0055ee36);
    /* 0055ee36: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ee38: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee3a: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x55ee40u); call_ind(t); }
    /* 0055ee40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ee41: ret 4 */ FN_RET(0x0055ede4); r_esp += 8; return;
L_0055ee44:; BB(0x0055ee44);
    /* 0055ee44: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055ee47: jne 0x55ee9a */ if (!fZ) goto L_0055ee9a;
L_0055ee49:; BB(0x0055ee49);
    /* 0055ee49: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055ee4c: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ee51: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0055ee54: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ee55: ret 4 */ FN_RET(0x0055ede4); r_esp += 8; return;
L_0055ee58:; BB(0x0055ee58);
    /* 0055ee58: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ee5a: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee5c: call dword ptr [eax + 0x1b8] */ { u32 t = R32((u32)(r_eax+0x1b8u)); r_esp -= 4; W32(r_esp, 0x55ee62u); call_ind(t); }
    /* 0055ee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ee64: jne 0x55ee9a */ if (!fZ) goto L_0055ee9a;
L_0055ee66:; BB(0x0055ee66);
    /* 0055ee66: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055ee6c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0055ee6e: je 0x55ee86 */ if (fZ) goto L_0055ee86;
L_0055ee70:; BB(0x0055ee70);
    /* 0055ee70: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee72: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ee75: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055ee7b: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee7d: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55ee82u); f_0051f62c();
    /* 0055ee82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ee83: ret 4 */ FN_RET(0x0055ede4); r_esp += 8; return;
L_0055ee86:; BB(0x0055ee86);
    /* 0055ee86: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee88: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x55ee8du); f_00520f04();
    /* 0055ee8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055ee8f: je 0x55ee9a */ if (fZ) goto L_0055ee9a;
L_0055ee91:; BB(0x0055ee91);
    /* 0055ee91: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ee93: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ee95: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55ee9au); f_0051f62c();
L_0055ee9a:; BB(0x0055ee9a);
    /* 0055ee9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ee9b: ret 4 */ FN_RET(0x0055ede4); r_esp += 8; return;
L_0055ee9e:; BB(0x0055ee9e);
    /* 0055ee9e: fld dword ptr [0x9256a8] */ FPUSH(R_F32((u32)(0x9256a8u)));
    /* 0055eea4: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0055eea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055eea8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0055eeab: mov ecx, edi */ r_ecx = r_edi;
    /* 0055eead: call 0x55fb84 */ r_esp -= 4; W32(r_esp, 0x55eeb2u); f_0055fb84();
    /* 0055eeb2: jmp 0x55ee36 */ goto L_0055ee36;
L_0055eeb4:; BB(0x0055eeb4);
    /* 0055eeb4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055eeb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055eeb8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055eebf: mov ecx, edi */ r_ecx = r_edi;
    /* 0055eec1: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55eec6u); f_0051f664();
    /* 0055eec6: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055eecc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0055eece: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055eed3: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055eed9: mov ecx, edi */ r_ecx = r_edi;
    /* 0055eedb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x55eee1u); call_ind(t); }
    /* 0055eee1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055eee4: mov dword ptr [edi + 0x484], 1 */ W32((u32)(r_edi+0x484u), 0x1u);
    /* 0055eeee: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055eef3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0055eef6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055eef7: ret 4 */ FN_RET(0x0055ede4); r_esp += 8; return;
}

void f_0055eefc(void) /* sub_55EEFC */
{
    FN_ENTER(0x0055eefc);
    /* 0055eefc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055eefd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055ef00: mov edi, ecx */ r_edi = r_ecx;
    /* 0055ef02: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0055ef06: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef09: je 0x55efb4 */ if (fZ) goto L_0055efb4;
L_0055ef0f:; BB(0x0055ef0f);
    /* 0055ef0f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef12: je 0x55ef8d */ if (fZ) goto L_0055ef8d;
L_0055ef14:; BB(0x0055ef14);
    /* 0055ef14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef16: jne 0x55ef6c */ if (!fZ) goto L_0055ef6c;
L_0055ef18:; BB(0x0055ef18);
    /* 0055ef18: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef1a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x55ef1fu); f_007aa094();
    /* 0055ef1f: mov eax, dword ptr [edi + 0x43c] */ r_eax = R32((u32)(r_edi+0x43cu));
    /* 0055ef25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef27: jne 0x55ef48 */ if (!fZ) goto L_0055ef48;
L_0055ef29:; BB(0x0055ef29);
    /* 0055ef29: mov eax, dword ptr [edi + 0x3d4] */ r_eax = R32((u32)(r_edi+0x3d4u));
    /* 0055ef2f: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0055ef35: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x55ef38u); call_ind(t); }
    /* 0055ef38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef3a: je 0x55ef54 */ if (fZ) goto L_0055ef54;
L_0055ef3c:; BB(0x0055ef3c);
    /* 0055ef3c: mov dword ptr [edi + 0x43c], 1 */ W32((u32)(r_edi+0x43cu), 0x1u);
    /* 0055ef46: jmp 0x55ef54 */ goto L_0055ef54;
L_0055ef48:; BB(0x0055ef48);
    /* 0055ef48: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef4b: jne 0x55ef54 */ if (!fZ) goto L_0055ef54;
L_0055ef4d:; BB(0x0055ef4d);
    /* 0055ef4d: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef4f: call 0x55fb08 */ r_esp -= 4; W32(r_esp, 0x55ef54u); f_0055fb08();
L_0055ef54:; BB(0x0055ef54);
    /* 0055ef54: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ef56: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef58: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x55ef5eu); call_ind(t); }
    /* 0055ef5e: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef60: call 0x55f048 */ r_esp -= 4; W32(r_esp, 0x55ef65u); f_0055f048();
    /* 0055ef65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ef68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ef69: ret 4 */ FN_RET(0x0055eefc); r_esp += 8; return;
L_0055ef6c:; BB(0x0055ef6c);
    /* 0055ef6c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef6f: jne 0x55efad */ if (!fZ) goto L_0055efad;
L_0055ef71:; BB(0x0055ef71);
    /* 0055ef71: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055ef73: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef75: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x55ef7bu); call_ind(t); }
    /* 0055ef7b: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 0055ef7e: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055ef83: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0055ef86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055ef89: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055ef8a: ret 4 */ FN_RET(0x0055eefc); r_esp += 8; return;
L_0055ef8d:; BB(0x0055ef8d);
    /* 0055ef8d: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055ef93: test eax, 0x80000 */ {  u32 a = r_eax; u32 b = 0x80000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ef98: je 0x55efad */ if (fZ) goto L_0055efad;
L_0055ef9a:; BB(0x0055ef9a);
    /* 0055ef9a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ef9c: mov ecx, edi */ r_ecx = r_edi;
    /* 0055ef9e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x55efa3u); f_0051f62c();
    /* 0055efa3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055efa5: mov ecx, edi */ r_ecx = r_edi;
    /* 0055efa7: call dword ptr [eax + 0x178] */ { u32 t = R32((u32)(r_eax+0x178u)); r_esp -= 4; W32(r_esp, 0x55efadu); call_ind(t); }
L_0055efad:; BB(0x0055efad);
    /* 0055efad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055efb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055efb1: ret 4 */ FN_RET(0x0055eefc); r_esp += 8; return;
L_0055efb4:; BB(0x0055efb4);
    /* 0055efb4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055efb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055efb8: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0055efbf: mov ecx, edi */ r_ecx = r_edi;
    /* 0055efc1: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x55efc6u); f_0051f664();
    /* 0055efc6: mov eax, dword ptr [edi + 0x3d0] */ r_eax = R32((u32)(r_edi+0x3d0u));
    /* 0055efcc: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 0055efcf: or edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0055efd5: and eax, 0xffb7ffff */ {  u32 a = r_eax; u32 b = 0xffb7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0055efda: mov dword ptr [edi + 0x3d0], eax */ W32((u32)(r_edi+0x3d0u), r_eax);
    /* 0055efe0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055efe2: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 0055efe5: mov ecx, edi */ r_ecx = r_edi;
    /* 0055efe7: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x55efedu); call_ind(t); }
    /* 0055efed: mov dword ptr [edi + 0x484], 1 */ W32((u32)(r_edi+0x484u), 0x1u);
    /* 0055eff7: lea ecx, [edi + 0x3d4] */ r_ecx = (u32)(r_edi+0x3d4u);
    /* 0055effd: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x55f002u); f_00576c48();
    /* 0055f002: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0055f005: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0055f008: fadd dword ptr [0x9256a4] */ ST(0) = ST(0) + R_F32((u32)(0x9256a4u));
    /* 0055f00e: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0055f011: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0055f015: fstp dword ptr [edi + 0x400] */ W_F32((u32)(r_edi+0x400u), ST(0)); FPOP();
    /* 0055f01b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0055f01e: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0055f022: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0055f025: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f026: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x55f02bu); f_005789e4();
    /* 0055f02b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f02c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0055f02e: mov ecx, edi */ r_ecx = r_edi;
    /* 0055f030: call dword ptr [eax + 0x174] */ { u32 t = R32((u32)(r_eax+0x174u)); r_esp -= 4; W32(r_esp, 0x55f036u); call_ind(t); }
    /* 0055f036: mov dword ptr [edi + 0x43c], 0 */ W32((u32)(r_edi+0x43cu), 0x0u);
    /* 0055f040: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055f043: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0055f044: ret 4 */ FN_RET(0x0055eefc); r_esp += 8; return;
}

