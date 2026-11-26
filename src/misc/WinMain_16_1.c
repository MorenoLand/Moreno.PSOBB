#include "protos.h"

void f_004584f6(void) /* _WinMain@16_0 */
{
    FN_ENTER(0x004584f6);
    /* 004584f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004584f9: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004584fc: mov dword ptr [eax + 0x3a0], ebx */ W32((u32)(r_eax+0x3a0u), r_ebx);
    /* 00458502: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00458504: jl 0x45851d */ if ((fS!=fO)) goto L_0045851d;
L_00458506:; BB(0x00458506);
    /* 00458506: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00458509: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045850c: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045850f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00458512: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00458519: mov esp, ebp */ r_esp = r_ebp;
    /* 0045851b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045851c: ret  */ FN_RET(0x004584f6); r_esp += 4; return;
L_0045851d:; BB(0x0045851d);
    /* 0045851d: mov dword ptr [eax + 0x37c], 1 */ W32((u32)(r_eax+0x37cu), 0x1u);
    /* 00458527: mov esi, 2 */ r_esi = 0x2u;
L_0045852c:; BB(0x0045852c);
    /* 0045852c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045852f: mov eax, dword ptr [eax + esi*4 + 0x434] */ r_eax = R32((u32)(r_eax+r_esi*4+0x434u));
    /* 00458536: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00458539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045853b: je 0x458552 */ if (fZ) goto L_00458552;
L_0045853d:; BB(0x0045853d);
    /* 0045853d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045853e: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458543u); f_005cdcc0();
    /* 00458543: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458544: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00458547: mov dword ptr [eax + ebx*2 + 0x434], 0 */ W32((u32)(r_eax+r_ebx*2+0x434u), 0x0u);
L_00458552:; BB(0x00458552);
    /* 00458552: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458555: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458558: jl 0x45852c */ if ((fS!=fO)) goto L_0045852c;
L_0045855a:; BB(0x0045855a);
    /* 0045855a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045855d: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 00458563: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458566: je 0x458572 */ if (fZ) goto L_00458572;
L_00458568:; BB(0x00458568);
    /* 00458568: mov dword ptr [eax + 0x3e8], 0 */ W32((u32)(r_eax+0x3e8u), 0x0u);
L_00458572:; BB(0x00458572);
    /* 00458572: mov ecx, eax */ r_ecx = r_eax;
    /* 00458574: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 00458577: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045857e: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458583u); f_00459158();
    /* 00458583: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00458586: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045858c: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0045858f: mov eax, dword ptr [ecx*4 + 0x9a6288] */ r_eax = R32((u32)(r_ecx*4+0x9a6288u));
    /* 00458596: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00458598: je 0x45859f */ if (fZ) goto L_0045859f;
L_0045859a:; BB(0x0045859a);
    /* 0045859a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045859d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45859fu); call_ind(t); }
L_0045859f:; BB(0x0045859f);
    /* 0045859f: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004585a2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004585a5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004585a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004585ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004585b2: mov esp, ebp */ r_esp = r_ebp;
    /* 004585b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004585b5: ret  */ FN_RET(0x004584f6); r_esp += 4; return;
}

void f_00458a35(void) /* _WinMain@16_2_0 */
{
    FN_ENTER(0x00458a35);
    /* 00458a35: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458a3c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458a3e: jne 0x458a52 */ if (!fZ) goto L_00458a52;
L_00458a40:; BB(0x00458a40);
    /* 00458a40: mov dword ptr [0xa45740], 0x25 */ W32((u32)(0xa45740u), 0x25u);
    /* 00458a4a: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458a4d: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458a52:; BB(0x00458a52);
    /* 00458a52: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458a54: jne 0x458a7a */ if (!fZ) goto L_00458a7a;
L_00458a56:; BB(0x00458a56);
    /* 00458a56: mov edx, dword ptr [0xa45774] */ r_edx = R32((u32)(0xa45774u));
    /* 00458a5c: add edx, dword ptr [0xa45740] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45740u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458a62: mov ecx, dword ptr [0xa45778] */ r_ecx = R32((u32)(0xa45778u));
    /* 00458a68: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00458a6a: mov dword ptr [0xa45744], ecx */ W32((u32)(0xa45744u), r_ecx);
    /* 00458a70: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458a73: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
    /* 00458a78: jmp 0x458a80 */ goto L_00458a80;
L_00458a7a:; BB(0x00458a7a);
    /* 00458a7a: mov ecx, dword ptr [0xa45744] */ r_ecx = R32((u32)(0xa45744u));
L_00458a80:; BB(0x00458a80);
    /* 00458a80: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00458a86: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a88: jne 0x458add */ if (!fZ) goto L_00458add;
L_00458a8a:; BB(0x00458a8a);
    /* 00458a8a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00458a8e: push 0xfd */ { u32 v = 0xfdu; r_esp -= 4; W32(r_esp, v); }
    /* 00458a93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458a94: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x458a99u); f_0050b510();
    /* 00458a99: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458a9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458a9e: je 0x458aa9 */ if (fZ) goto L_00458aa9;
L_00458aa0:; BB(0x00458aa0);
    /* 00458aa0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aa2: mov ecx, eax */ r_ecx = r_eax;
    /* 00458aa4: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x458aa9u); f_00508efc();
L_00458aa9:; BB(0x00458aa9);
    /* 00458aa9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458aad: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00458ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ab1: push 0x370 */ { u32 v = 0x370u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ab6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x458abbu); f_00814298();
    /* 00458abb: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00458abd: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00458ac2: call 0x6ff5f8 */ r_esp -= 4; W32(r_esp, 0x458ac7u); f_006ff5f8();
    /* 00458ac7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458aca: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458ad1: mov ecx, dword ptr [0xa45744] */ r_ecx = R32((u32)(0xa45744u));
    /* 00458ad7: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
L_00458add:; BB(0x00458add);
    /* 00458add: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458adf: jg 0x458cfc */ if ((!fZ&&fS==fO)) goto L_00458cfc;
L_00458ae5:; BB(0x00458ae5);
    /* 00458ae5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458ae8: jl 0x458cfc */ if ((fS!=fO)) goto L_00458cfc;
L_00458aee:; BB(0x00458aee);
    /* 00458aee: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458af1: jne 0x458cfc */ if (!fZ) goto L_00458cfc;
L_00458af7:; BB(0x00458af7);
    /* 00458af7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458af9: jne 0x458b17 */ if (!fZ) goto L_00458b17;
L_00458afb:; BB(0x00458afb);
    /* 00458afb: fld dword ptr [0x900200] */ FPUSH(R_F32((u32)(0x900200u)));
    /* 00458b01: mov dword ptr [0xa45748], 0x41a00000 */ W32((u32)(0xa45748u), 0x41a00000u);
    /* 00458b0b: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458b10: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
    /* 00458b15: jmp 0x458b1d */ goto L_00458b1d;
L_00458b17:; BB(0x00458b17);
    /* 00458b17: fld dword ptr [0xa45748] */ FPUSH(R_F32((u32)(0xa45748u)));
L_00458b1d:; BB(0x00458b1d);
    /* 00458b1d: mov eax, dword ptr [ebp + 0x418] */ r_eax = R32((u32)(r_ebp+0x418u));
    /* 00458b23: mov edx, dword ptr [ebp + 0x41c] */ r_edx = R32((u32)(r_ebp+0x41cu));
    /* 00458b29: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 00458b2f: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00458b35: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458b37: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00458b39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458b3b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458b3d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00458b41: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 00458b45: mov eax, dword ptr [ebp + 0x420] */ r_eax = R32((u32)(r_ebp+0x420u));
    /* 00458b4b: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00458b4f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458b51: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 00458b55: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00458b59: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 00458b5d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00458b61: jne 0x458b82 */ if (!fZ) goto L_00458b82;
L_00458b63:; BB(0x00458b63);
    /* 00458b63: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b65: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x458b6au); f_0077a6cc();
    /* 00458b6a: lea edi, [esp + 0x40] */ r_edi = (u32)(r_esp+0x40u);
    /* 00458b6e: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00458b72: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00458b75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458b76: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458b77: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b78: call 0x6ec8ec */ r_esp -= 4; W32(r_esp, 0x458b7du); f_006ec8ec();
    /* 00458b7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458b80: jmp 0x458b9f */ goto L_00458b9f;
L_00458b82:; BB(0x00458b82);
    /* 00458b82: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00458b84: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x458b89u); f_0077a6cc();
    /* 00458b89: lea edi, [esp + 0x40] */ r_edi = (u32)(r_esp+0x40u);
    /* 00458b8d: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00458b91: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458b94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458b95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458b96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00458b97: call 0x6ed87c */ r_esp -= 4; W32(r_esp, 0x458b9cu); f_006ed87c();
    /* 00458b9c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00458b9f:; BB(0x00458b9f);
    /* 00458b9f: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 00458ba3: mov eax, 1 */ r_eax = 0x1u;
    /* 00458ba8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458ba9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458baa: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00458baf: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00458bb4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458bb5: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x458bbau); f_0080575c();
    /* 00458bba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458bbd: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 00458bc3: fld dword ptr [ebp + 0x414] */ FPUSH(R_F32((u32)(r_ebp+0x414u)));
    /* 00458bc9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458bcb: fchs  */ ST(0) = -ST(0);
    /* 00458bcd: fstp dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0)); FPOP();
    /* 00458bd3: fchs  */ ST(0) = -ST(0);
    /* 00458bd5: fstp dword ptr [ebp + 0x414] */ W_F32((u32)(r_ebp+0x414u), ST(0)); FPOP();
    /* 00458bdb: lea edi, [ebp + 0x418] */ r_edi = (u32)(r_ebp+0x418u);
    /* 00458be1: mov ecx, edi */ r_ecx = r_edi;
    /* 00458be3: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x458be8u); f_0083173c();
    /* 00458be8: fcomp dword ptr [0xa4577c] */ fx_compare(ST(0), R_F32((u32)(0xa4577cu))); FPOP();
    /* 00458bee: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00458bf0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00458bf1: ja 0x458bfe */ if ((!fC&&!fZ)) goto L_00458bfe;
L_00458bf3:; BB(0x00458bf3);
    /* 00458bf3: fld dword ptr [ebp + 0x408] */ FPUSH(R_F32((u32)(r_ebp+0x408u)));
    /* 00458bf9: jmp 0x458cbf */ f_00458cbf(); return;
L_00458bfe:; BB(0x00458bfe);
    /* 00458bfe: mov ecx, edi */ r_ecx = r_edi;
    /* 00458c00: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x458c05u); f_0082df08();
    /* 00458c05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00458c07: fld dword ptr [0xa4577c] */ FPUSH(R_F32((u32)(0xa4577cu)));
    /* 00458c0d: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 00458c13: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00458c15: fld dword ptr [ebp + 0x420] */ FPUSH(R_F32((u32)(r_ebp+0x420u)));
    /* 00458c1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458c1d: fst dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0));
    /* 00458c23: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c25: fst dword ptr [ebp + 0x420] */ W_F32((u32)(r_ebp+0x420u), ST(0));
    /* 00458c2b: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00458c2d: fmul qword ptr [0x9000e0] */ ST(0) = ST(0) * R_F64((u32)(0x9000e0u));
    /* 00458c33: fdiv qword ptr [0x9000d8] */ ST(0) = ST(0) / R_F64((u32)(0x9000d8u));
    /* 00458c39: fld dword ptr [ebp + 0x408] */ FPUSH(R_F32((u32)(r_ebp+0x408u)));
    /* 00458c3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c41: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00458c44: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00458c48: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458c4d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00458c51: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00458c55: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00458c59: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00458c5c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00458c60: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00458c66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458c68: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00458c6a: fmul qword ptr [0x9000e0] */ ST(0) = ST(0) * R_F64((u32)(0x9000e0u));
    /* 00458c70: fdiv qword ptr [0x9000d8] */ ST(0) = ST(0) / R_F64((u32)(0x9000d8u));
    /* 00458c76: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00458c79: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00458c7d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458c82: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00458c86: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00458c8a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00458c8e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00458c91: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00458c95: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458c96: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00458c97: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x458c9cu); f_007a900c();
    /* 00458c9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00458c9f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458ca1: mov ecx, edi */ r_ecx = r_edi;
    /* 00458ca3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x458ca8u); f_0082dcbc();
    /* 00458ca8: fchs  */ ST(0) = -ST(0);
    /* 00458caa: fstp dword ptr [ebp + 0x400] */ W_F32((u32)(r_ebp+0x400u), ST(0)); FPOP();
    /* 00458cb0: mov ecx, edi */ r_ecx = r_edi;
    /* 00458cb2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x458cb7u); f_0082ddd8();
    /* 00458cb7: fchs  */ ST(0) = -ST(0);
    /* 00458cb9: fst dword ptr [ebp + 0x408] */ W_F32((u32)(r_ebp+0x408u), ST(0));
    /* 00458cbf: fld dword ptr [0xa45780] */ FPUSH(R_F32((u32)(0xa45780u)));
    /* 00458cc5: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458ccc: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00458cd2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00458cd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458cd6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00458cd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cda: fadd dword ptr [ebp + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x418u));
    /* 00458ce0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458ce2: fadd dword ptr [ebp + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x420u));
    /* 00458ce8: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00458cee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cf0: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
    /* 00458cf6: fstp dword ptr [ebp + 0x420] */ W_F32((u32)(r_ebp+0x420u), ST(0)); FPOP();
L_00458cfc:; BB(0x00458cfc);
    /* 00458cfc: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458cfe: jne 0x458d17 */ if (!fZ) goto L_00458d17;
L_00458d00:; BB(0x00458d00);
    /* 00458d00: mov edi, dword ptr [0xa45778] */ r_edi = R32((u32)(0xa45778u));
    /* 00458d06: mov dword ptr [0xa4574c], edi */ W32((u32)(0xa4574cu), r_edi);
    /* 00458d0c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00458d0f: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d12: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d17:; BB(0x00458d17);
    /* 00458d17: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458d19: jne 0x458d34 */ if (!fZ) goto L_00458d34;
L_00458d1b:; BB(0x00458d1b);
    /* 00458d1b: mov edi, dword ptr [0xa4574c] */ r_edi = R32((u32)(0xa4574cu));
    /* 00458d21: add edi, -0xf */ {  u32 a = r_edi; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458d24: mov dword ptr [0xa45750], edi */ W32((u32)(0xa45750u), r_edi);
    /* 00458d2a: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d2f: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d34:; BB(0x00458d34);
    /* 00458d34: cmp edx, dword ptr [0xa45750] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45750u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d3a: jle 0x458d59 */ if ((fZ||fS!=fO)) goto L_00458d59;
L_00458d3c:; BB(0x00458d3c);
    /* 00458d3c: mov eax, dword ptr [0xa4574c] */ r_eax = R32((u32)(0xa4574cu));
    /* 00458d41: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458d43: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00458d47: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d4b: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d51: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d57: jmp 0x458d92 */ goto L_00458d92;
L_00458d59:; BB(0x00458d59);
    /* 00458d59: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d5c: jl 0x458d6a */ if ((fS!=fO)) goto L_00458d6a;
L_00458d5e:; BB(0x00458d5e);
    /* 00458d5e: mov dword ptr [ebp + 0x3f0], 0x3f800000 */ W32((u32)(r_ebp+0x3f0u), 0x3f800000u);
    /* 00458d68: jmp 0x458d92 */ goto L_00458d92;
L_00458d6a:; BB(0x00458d6a);
    /* 00458d6a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d6d: jle 0x458d88 */ if ((fZ||fS!=fO)) goto L_00458d88;
L_00458d6f:; BB(0x00458d6f);
    /* 00458d6f: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458d72: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00458d76: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d7a: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d80: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d86: jmp 0x458d92 */ goto L_00458d92;
L_00458d88:; BB(0x00458d88);
    /* 00458d88: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
L_00458d92:; BB(0x00458d92);
    /* 00458d92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458d94: call 0x4587d4 */ r_esp -= 4; W32(r_esp, 0x458d99u); f_004587d4();
    /* 00458d99: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00458d9f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458da2: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00458da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00458daa: jge 0x458e38 */ if ((fS==fO)) goto L_00458e38;
L_00458db0:; BB(0x00458db0);
    /* 00458db0: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00458db5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458db8: je 0x458e44 */ if (fZ) goto L_00458e44;
L_00458dbe:; BB(0x00458dbe);
    /* 00458dbe: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00458dc4: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00458dc8: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00458dce: lea eax, [ebp + 0x43c] */ r_eax = (u32)(r_ebp+0x43cu);
    /* 00458dd4: lea edi, [ebp + 0x454] */ r_edi = (u32)(r_ebp+0x454u);
    /* 00458dda: mov esi, eax */ r_esi = r_eax;
L_00458ddc:; BB(0x00458ddc);
    /* 00458ddc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00458dde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458de0: je 0x458def */ if (fZ) goto L_00458def;
L_00458de2:; BB(0x00458de2);
    /* 00458de2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458de3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458de8u); f_005cdcc0();
    /* 00458de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458de9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00458def:; BB(0x00458def);
    /* 00458def: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458df2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458df4: ja 0x458ddc */ if ((!fC&&!fZ)) goto L_00458ddc;
L_00458df6:; BB(0x00458df6);
    /* 00458df6: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00458dfa: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e03: je 0x458e0f */ if (fZ) goto L_00458e0f;
L_00458e05:; BB(0x00458e05);
    /* 00458e05: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_00458e0f:; BB(0x00458e0f);
    /* 00458e0f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00458e12: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458e19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e1b: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458e20u); f_00459158();
    /* 00458e20: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e26: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00458e29: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00458e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e32: je 0x458e38 */ if (fZ) goto L_00458e38;
L_00458e34:; BB(0x00458e34);
    /* 00458e34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458e38u); call_ind(t); }
L_00458e38:; BB(0x00458e38);
    /* 00458e38: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00458e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458e40: mov esp, ebx */ r_esp = r_ebx;
    /* 00458e42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00458e43: ret  */ FN_RET(0x00458a35); r_esp += 4; return;
L_00458e44:; BB(0x00458e44);
    /* 00458e44: movzx eax, word ptr [0xa44ce0] */ r_eax = (u32)R16((u32)(0xa44ce0u));
    /* 00458e4b: movzx edx, word ptr [0xa44ce2] */ r_edx = (u32)R16((u32)(0xa44ce2u));
    /* 00458e52: movzx edi, word ptr [0xa44ce4] */ r_edi = (u32)R16((u32)(0xa44ce4u));
    /* 00458e59: mov word ptr [esp + 0x4c], ax */ W16((u32)(r_esp+0x4cu), (u16)r_eax);
    /* 00458e5e: movzx eax, word ptr [0xa44ce6] */ r_eax = (u32)R16((u32)(0xa44ce6u));
    /* 00458e65: mov word ptr [esp + 0x4e], dx */ W16((u32)(r_esp+0x4eu), (u16)r_edx);
    /* 00458e6a: mov word ptr [esp + 0x50], di */ W16((u32)(r_esp+0x50u), (u16)r_edi);
    /* 00458e6f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00458e71: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 00458e76: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 00458e7d: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 00458e82: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 00458e89: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 00458e8e: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 00458e95: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 00458e9a: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 00458e9f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00458ea3: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 00458ea8: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00458eac: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 00458eb1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00458eb5: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 00458eba: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00458ebe: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 00458ec3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00458ec7: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 00458ecc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00458ed0: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 00458ed5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00458ed9: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 00458ede: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00458ee2: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 00458ee7: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00458eeb: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 00458ef0: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 00458ef7: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 00458efc: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00458f03: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 00458f0a: mov word ptr [esp + 0x88], ax */ W16((u32)(r_esp+0x88u), (u16)r_eax);
    /* 00458f12: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 00458f19: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 00458f21: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 00458f27: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00458f2b: mov eax, 1 */ r_eax = 0x1u;
    /* 00458f30: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 00458f35: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00458f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00458f3c: jle 0x458dbe */ if ((fZ||fS!=fO)) goto L_00458dbe;
L_00458f42:; BB(0x00458f42);
    /* 00458f42: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00458f46: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00458f4a:; BB(0x00458f4a);
    /* 00458f4a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00458f51: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f53: je 0x45905f */ if (fZ) goto L_0045905f;
L_00458f59:; BB(0x00458f59);
    /* 00458f59: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00458f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f5e: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x458f63u); f_00453ab8();
    /* 00458f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f66: je 0x45905a */ if (fZ) goto L_0045905a;
L_00458f6c:; BB(0x00458f6c);
    /* 00458f6c: movzx eax, byte ptr [0xa45784] */ r_eax = (u32)R8((u32)(0xa45784u));
    /* 00458f73: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f75: jne 0x458f89 */ if (!fZ) goto L_00458f89;
L_00458f77:; BB(0x00458f77);
    /* 00458f77: mov dword ptr [0xa45788], 0x41480000 */ W32((u32)(0xa45788u), 0x41480000u);
    /* 00458f81: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458f84: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458f89:; BB(0x00458f89);
    /* 00458f89: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f8b: jne 0x458fef */ if (!fZ) goto L_00458fef;
L_00458f8d:; BB(0x00458f8d);
    /* 00458f8d: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458f93: fld dword ptr [0x9001e8] */ FPUSH(R_F32((u32)(0x9001e8u)));
    /* 00458f99: fld dword ptr [0x9001e4] */ FPUSH(R_F32((u32)(0x9001e4u)));
    /* 00458f9f: fld dword ptr [0x9001e0] */ FPUSH(R_F32((u32)(0x9001e0u)));
    /* 00458fa5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458fa7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fab: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458faf: fstp dword ptr [0xa45794] */ W_F32((u32)(0xa45794u), ST(0)); FPOP();
    /* 00458fb5: fst dword ptr [0xa45798] */ W_F32((u32)(0xa45798u), ST(0));
    /* 00458fbb: fstp dword ptr [0xa457a0] */ W_F32((u32)(0xa457a0u), ST(0)); FPOP();
    /* 00458fc1: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fc9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458fcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fcd: fstp dword ptr [0xa4579c] */ W_F32((u32)(0xa4579cu), ST(0)); FPOP();
    /* 00458fd3: mov dword ptr [0xa4578c], 0 */ W32((u32)(0xa4578cu), 0x0u);
    /* 00458fdd: fchs  */ ST(0) = -ST(0);
    /* 00458fdf: fstp dword ptr [0xa45790] */ W_F32((u32)(0xa45790u), ST(0)); FPOP();
    /* 00458fe5: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458fea: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458fef:; BB(0x00458fef);
    /* 00458fef: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00458ff3: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00458ff7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00458ff9:; BB(0x00458ff9);
    /* 00458ff9: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00458ffd: lea eax, [esp + 0x52] */ r_eax = (u32)(r_esp+0x52u);
    /* 00459001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459002: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 00459008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459009: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x45900eu); f_0044cfc0();
    /* 0045900e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459010: je 0x459047 */ if (fZ) goto L_00459047;
L_00459012:; BB(0x00459012);
    /* 00459012: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00459016: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00459019: fadd dword ptr [ebp + 0xa4578c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4578cu));
    /* 0045901f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00459022: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00459026: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00459029: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0045902d: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00459030: fadd dword ptr [ebp + 0xa45790] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa45790u));
    /* 00459036: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459038: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0045903c: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00459040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459041: call 0x460d34 */ r_esp -= 4; W32(r_esp, 0x459046u); f_00460d34();
    /* 00459046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00459047:; BB(0x00459047);
    /* 00459047: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045904a: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045904d: jl 0x458ff9 */ if ((fS!=fO)) goto L_00458ff9;
L_0045904f:; BB(0x0045904f);
    /* 0045904f: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00459053: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00459058: jmp 0x45905f */ goto L_0045905f;
L_0045905a:; BB(0x0045905a);
    /* 0045905a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0045905f:; BB(0x0045905f);
    /* 0045905f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00459062: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459064: jl 0x458f4a */ if ((fS!=fO)) goto L_00458f4a;
L_0045906a:; BB(0x0045906a);
    /* 0045906a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0045906e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00459072: jmp 0x458dbe */ goto L_00458dbe;
}

void f_00458cbf(void) /* _WinMain@16_1_0 */
{
    FN_ENTER(0x00458cbf);
    /* 00458cbf: fld dword ptr [0xa45780] */ FPUSH(R_F32((u32)(0xa45780u)));
    /* 00458cc5: movzx eax, byte ptr [0xa4573c] */ r_eax = (u32)R8((u32)(0xa4573cu));
    /* 00458ccc: fld dword ptr [ebp + 0x400] */ FPUSH(R_F32((u32)(r_ebp+0x400u)));
    /* 00458cd2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00458cd4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458cd6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00458cd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cda: fadd dword ptr [ebp + 0x418] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x418u));
    /* 00458ce0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458ce2: fadd dword ptr [ebp + 0x420] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x420u));
    /* 00458ce8: mov edx, dword ptr [ebp + 0x3a0] */ r_edx = R32((u32)(r_ebp+0x3a0u));
    /* 00458cee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458cf0: fstp dword ptr [ebp + 0x418] */ W_F32((u32)(r_ebp+0x418u), ST(0)); FPOP();
    /* 00458cf6: fstp dword ptr [ebp + 0x420] */ W_F32((u32)(r_ebp+0x420u), ST(0)); FPOP();
    /* 00458cfc: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458cfe: jne 0x458d17 */ if (!fZ) goto L_00458d17;
L_00458d00:; BB(0x00458d00);
    /* 00458d00: mov edi, dword ptr [0xa45778] */ r_edi = R32((u32)(0xa45778u));
    /* 00458d06: mov dword ptr [0xa4574c], edi */ W32((u32)(0xa4574cu), r_edi);
    /* 00458d0c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00458d0f: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d12: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d17:; BB(0x00458d17);
    /* 00458d17: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458d19: jne 0x458d34 */ if (!fZ) goto L_00458d34;
L_00458d1b:; BB(0x00458d1b);
    /* 00458d1b: mov edi, dword ptr [0xa4574c] */ r_edi = R32((u32)(0xa4574cu));
    /* 00458d21: add edi, -0xf */ {  u32 a = r_edi; u32 b = 0xfffffff1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00458d24: mov dword ptr [0xa45750], edi */ W32((u32)(0xa45750u), r_edi);
    /* 00458d2a: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458d2f: mov byte ptr [0xa4573c], al */ W8((u32)(0xa4573cu), (u8)r_eax);
L_00458d34:; BB(0x00458d34);
    /* 00458d34: cmp edx, dword ptr [0xa45750] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa45750u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d3a: jle 0x458d59 */ if ((fZ||fS!=fO)) goto L_00458d59;
L_00458d3c:; BB(0x00458d3c);
    /* 00458d3c: mov eax, dword ptr [0xa4574c] */ r_eax = R32((u32)(0xa4574cu));
    /* 00458d41: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00458d43: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00458d47: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d4b: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d51: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d57: jmp 0x458d92 */ goto L_00458d92;
L_00458d59:; BB(0x00458d59);
    /* 00458d59: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d5c: jl 0x458d6a */ if ((fS!=fO)) goto L_00458d6a;
L_00458d5e:; BB(0x00458d5e);
    /* 00458d5e: mov dword ptr [ebp + 0x3f0], 0x3f800000 */ W32((u32)(r_ebp+0x3f0u), 0x3f800000u);
    /* 00458d68: jmp 0x458d92 */ goto L_00458d92;
L_00458d6a:; BB(0x00458d6a);
    /* 00458d6a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00458d6d: jle 0x458d88 */ if ((fZ||fS!=fO)) goto L_00458d88;
L_00458d6f:; BB(0x00458d6f);
    /* 00458d6f: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00458d72: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00458d76: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00458d7a: fdiv dword ptr [0x9001f4] */ ST(0) = ST(0) / R_F32((u32)(0x9001f4u));
    /* 00458d80: fstp dword ptr [ebp + 0x3f0] */ W_F32((u32)(r_ebp+0x3f0u), ST(0)); FPOP();
    /* 00458d86: jmp 0x458d92 */ goto L_00458d92;
L_00458d88:; BB(0x00458d88);
    /* 00458d88: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
L_00458d92:; BB(0x00458d92);
    /* 00458d92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458d94: call 0x4587d4 */ r_esp -= 4; W32(r_esp, 0x458d99u); f_004587d4();
    /* 00458d99: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00458d9f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00458da2: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00458da8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00458daa: jge 0x458e38 */ if ((fS==fO)) goto L_00458e38;
L_00458db0:; BB(0x00458db0);
    /* 00458db0: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00458db5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458db8: je 0x458e44 */ if (fZ) goto L_00458e44;
L_00458dbe:; BB(0x00458dbe);
    /* 00458dbe: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 00458dc4: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00458dc8: mov dword ptr [ebp + 0x37c], eax */ W32((u32)(r_ebp+0x37cu), r_eax);
    /* 00458dce: lea eax, [ebp + 0x43c] */ r_eax = (u32)(r_ebp+0x43cu);
    /* 00458dd4: lea edi, [ebp + 0x454] */ r_edi = (u32)(r_ebp+0x454u);
    /* 00458dda: mov esi, eax */ r_esi = r_eax;
L_00458ddc:; BB(0x00458ddc);
    /* 00458ddc: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00458dde: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458de0: je 0x458def */ if (fZ) goto L_00458def;
L_00458de2:; BB(0x00458de2);
    /* 00458de2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00458de3: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x458de8u); f_005cdcc0();
    /* 00458de8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458de9: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00458def:; BB(0x00458def);
    /* 00458def: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00458df2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00458df4: ja 0x458ddc */ if ((!fC&&!fZ)) goto L_00458ddc;
L_00458df6:; BB(0x00458df6);
    /* 00458df6: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00458dfa: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e00: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e03: je 0x458e0f */ if (fZ) goto L_00458e0f;
L_00458e05:; BB(0x00458e05);
    /* 00458e05: mov dword ptr [ebp + 0x3e8], 0 */ W32((u32)(r_ebp+0x3e8u), 0x0u);
L_00458e0f:; BB(0x00458e0f);
    /* 00458e0f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00458e12: push dword ptr [eax*4 + 0x9a6284] */ { u32 v = R32((u32)(r_eax*4+0x9a6284u)); r_esp -= 4; W32(r_esp, v); }
    /* 00458e19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e1b: call 0x459158 */ r_esp -= 4; W32(r_esp, 0x458e20u); f_00459158();
    /* 00458e20: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00458e26: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00458e29: mov eax, dword ptr [edx*4 + 0x9a6288] */ r_eax = R32((u32)(r_edx*4+0x9a6288u));
    /* 00458e30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458e32: je 0x458e38 */ if (fZ) goto L_00458e38;
L_00458e34:; BB(0x00458e34);
    /* 00458e34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00458e36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x458e38u); call_ind(t); }
L_00458e38:; BB(0x00458e38);
    /* 00458e38: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00458e3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00458e3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00458e40: mov esp, ebx */ r_esp = r_ebx;
    /* 00458e42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00458e43: ret  */ FN_RET(0x00458cbf); r_esp += 4; return;
L_00458e44:; BB(0x00458e44);
    /* 00458e44: movzx eax, word ptr [0xa44ce0] */ r_eax = (u32)R16((u32)(0xa44ce0u));
    /* 00458e4b: movzx edx, word ptr [0xa44ce2] */ r_edx = (u32)R16((u32)(0xa44ce2u));
    /* 00458e52: movzx edi, word ptr [0xa44ce4] */ r_edi = (u32)R16((u32)(0xa44ce4u));
    /* 00458e59: mov word ptr [esp + 0x4c], ax */ W16((u32)(r_esp+0x4cu), (u16)r_eax);
    /* 00458e5e: movzx eax, word ptr [0xa44ce6] */ r_eax = (u32)R16((u32)(0xa44ce6u));
    /* 00458e65: mov word ptr [esp + 0x4e], dx */ W16((u32)(r_esp+0x4eu), (u16)r_edx);
    /* 00458e6a: mov word ptr [esp + 0x50], di */ W16((u32)(r_esp+0x50u), (u16)r_edi);
    /* 00458e6f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00458e71: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 00458e76: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 00458e7d: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 00458e82: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 00458e89: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 00458e8e: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 00458e95: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 00458e9a: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 00458e9f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00458ea3: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 00458ea8: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00458eac: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 00458eb1: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00458eb5: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 00458eba: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 00458ebe: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 00458ec3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00458ec7: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 00458ecc: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00458ed0: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 00458ed5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 00458ed9: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 00458ede: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 00458ee2: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 00458ee7: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 00458eeb: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 00458ef0: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 00458ef7: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 00458efc: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00458f03: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 00458f0a: mov word ptr [esp + 0x88], ax */ W16((u32)(r_esp+0x88u), (u16)r_eax);
    /* 00458f12: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 00458f19: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 00458f21: mov eax, dword ptr [ebp + 0x394] */ r_eax = R32((u32)(r_ebp+0x394u));
    /* 00458f27: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00458f2b: mov eax, 1 */ r_eax = 0x1u;
    /* 00458f30: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 00458f35: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00458f3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00458f3c: jle 0x458dbe */ if ((fZ||fS!=fO)) goto L_00458dbe;
L_00458f42:; BB(0x00458f42);
    /* 00458f42: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00458f46: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_00458f4a:; BB(0x00458f4a);
    /* 00458f4a: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00458f51: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f53: je 0x45905f */ if (fZ) goto L_0045905f;
L_00458f59:; BB(0x00458f59);
    /* 00458f59: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00458f5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00458f5e: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x458f63u); f_00453ab8();
    /* 00458f63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00458f64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00458f66: je 0x45905a */ if (fZ) goto L_0045905a;
L_00458f6c:; BB(0x00458f6c);
    /* 00458f6c: movzx eax, byte ptr [0xa45784] */ r_eax = (u32)R8((u32)(0xa45784u));
    /* 00458f73: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f75: jne 0x458f89 */ if (!fZ) goto L_00458f89;
L_00458f77:; BB(0x00458f77);
    /* 00458f77: mov dword ptr [0xa45788], 0x41480000 */ W32((u32)(0xa45788u), 0x41480000u);
    /* 00458f81: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458f84: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458f89:; BB(0x00458f89);
    /* 00458f89: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00458f8b: jne 0x458fef */ if (!fZ) goto L_00458fef;
L_00458f8d:; BB(0x00458f8d);
    /* 00458f8d: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458f93: fld dword ptr [0x9001e8] */ FPUSH(R_F32((u32)(0x9001e8u)));
    /* 00458f99: fld dword ptr [0x9001e4] */ FPUSH(R_F32((u32)(0x9001e4u)));
    /* 00458f9f: fld dword ptr [0x9001e0] */ FPUSH(R_F32((u32)(0x9001e0u)));
    /* 00458fa5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00458fa7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fa9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fab: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00458fad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458faf: fstp dword ptr [0xa45794] */ W_F32((u32)(0xa45794u), ST(0)); FPOP();
    /* 00458fb5: fst dword ptr [0xa45798] */ W_F32((u32)(0xa45798u), ST(0));
    /* 00458fbb: fstp dword ptr [0xa457a0] */ W_F32((u32)(0xa457a0u), ST(0)); FPOP();
    /* 00458fc1: fld dword ptr [0xa45788] */ FPUSH(R_F32((u32)(0xa45788u)));
    /* 00458fc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fc9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00458fcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00458fcd: fstp dword ptr [0xa4579c] */ W_F32((u32)(0xa4579cu), ST(0)); FPOP();
    /* 00458fd3: mov dword ptr [0xa4578c], 0 */ W32((u32)(0xa4578cu), 0x0u);
    /* 00458fdd: fchs  */ ST(0) = -ST(0);
    /* 00458fdf: fstp dword ptr [0xa45790] */ W_F32((u32)(0xa45790u), ST(0)); FPOP();
    /* 00458fe5: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00458fea: mov byte ptr [0xa45784], al */ W8((u32)(0xa45784u), (u8)r_eax);
L_00458fef:; BB(0x00458fef);
    /* 00458fef: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00458ff3: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00458ff7: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00458ff9:; BB(0x00458ff9);
    /* 00458ff9: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00458ffd: lea eax, [esp + 0x52] */ r_eax = (u32)(r_esp+0x52u);
    /* 00459001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00459002: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 00459008: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00459009: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x45900eu); f_0044cfc0();
    /* 0045900e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00459010: je 0x459047 */ if (fZ) goto L_00459047;
L_00459012:; BB(0x00459012);
    /* 00459012: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 00459016: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00459019: fadd dword ptr [ebp + 0xa4578c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4578cu));
    /* 0045901f: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00459022: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00459026: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00459029: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0045902d: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00459030: fadd dword ptr [ebp + 0xa45790] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa45790u));
    /* 00459036: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00459038: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0045903c: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00459040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00459041: call 0x460d34 */ r_esp -= 4; W32(r_esp, 0x459046u); f_00460d34();
    /* 00459046: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00459047:; BB(0x00459047);
    /* 00459047: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045904a: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045904d: jl 0x458ff9 */ if ((fS!=fO)) goto L_00458ff9;
L_0045904f:; BB(0x0045904f);
    /* 0045904f: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00459053: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00459058: jmp 0x45905f */ goto L_0045905f;
L_0045905a:; BB(0x0045905a);
    /* 0045905a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0045905f:; BB(0x0045905f);
    /* 0045905f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00459062: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00459064: jl 0x458f4a */ if ((fS!=fO)) goto L_00458f4a;
L_0045906a:; BB(0x0045906a);
    /* 0045906a: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0045906e: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00459072: jmp 0x458dbe */ goto L_00458dbe;
}

void f_00459106(void) /* _WinMain@16_2 */
{
    FN_ENTER(0x00459106);
    /* 00459106: jmp 0x458a35 */ f_00458a35(); return;
}

void f_00459152(void) /* _WinMain@16_1 */
{
    FN_ENTER(0x00459152);
    /* 00459152: jmp 0x458a35 */ f_00458a35(); return;
}

void f_004600b1(void) /* _WinMain@16_3_0 */
{
    FN_ENTER(0x004600b1);
    /* 004600b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600b3: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600b5:; BB(0x004600b5);
    /* 004600b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004600b7: push dword ptr [0xa45a0c] */ { u32 v = R32((u32)(0xa45a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004600bd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004600bf: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x4600c4u); f_007714cc();
    /* 004600c4: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004600c7: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600cc: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600ce:; BB(0x004600ce);
    /* 004600ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004600cf: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4600d4u); f_0068d5a8();
    /* 004600d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004600d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004600d7: je 0x46010a */ if (fZ) goto L_0046010a;
L_004600d9:; BB(0x004600d9);
    /* 004600d9: movsx edi, word ptr [ebx + 0x2cc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2ccu));
    /* 004600e0: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004600e4: fild dword ptr [esp + 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x2cu)));
    /* 004600e8: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004600ea: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004600ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004600f0: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 004600f5: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004600f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fb: mov ecx, eax */ r_ecx = r_eax;
    /* 004600fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004600fe: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00460102: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00460104: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460105: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x460108u); call_ind(t); }
    /* 00460108: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0046010a:; BB(0x0046010a);
    /* 0046010a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046010c: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x460111u); f_0078730c();
    /* 00460111: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00460117: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046011a: je 0x460143 */ if (fZ) goto L_00460143;
L_0046011c:; BB(0x0046011c);
    /* 0046011c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0046011e: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x460123u); f_007b6880();
    /* 00460123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00460125: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00460126: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x46012bu); f_006946a8();
    /* 0046012b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0046012f: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00460135: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0046013a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046013b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x460140u); f_00805608();
    /* 00460140: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00460143:; BB(0x00460143);
    /* 00460143: add dword ptr [ebx + 0x3c0], 1 */ { u32 ad = (u32)(r_ebx+0x3c0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0046014a: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0046014d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0046014e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0046014f: ret  */ FN_RET(0x004600b1); r_esp += 4; return;
}

void f_00460155(void) /* _WinMain@16_3 */
{
    FN_ENTER(0x00460155);
    /* 00460155: jmp 0x4600b1 */ f_004600b1(); return;
}

void f_00460396(void) /* _WinMain@16_4_0 */
{
    FN_ENTER(0x00460396);
    /* 00460396: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00460399: jne 0x4603b5 */ if (!fZ) goto L_004603b5;
L_0046039b:; BB(0x0046039b);
    /* 0046039b: fld dword ptr [0xa45a0c] */ FPUSH(R_F32((u32)(0xa45a0cu)));
    /* 004603a1: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 004603a3: fstp dword ptr [0xa459b8] */ W_F32((u32)(0xa459b8u), ST(0)); FPOP();
    /* 004603a9: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004603af: mov byte ptr [0xa459b0], dl */ W8((u32)(0xa459b0u), (u8)r_edx);
L_004603b5:; BB(0x004603b5);
    /* 004603b5: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 004603b9: shl edi, 0xd */ { u32 c = (13u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 004603bc: mov ecx, edi */ r_ecx = r_edi;
    /* 004603be: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4603c3u); f_0082dcbc();
    /* 004603c3: fld dword ptr [0xa459b8] */ FPUSH(R_F32((u32)(0xa459b8u)));
    /* 004603c9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004603cb: fadd dword ptr [esi + 0x3cc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3ccu));
    /* 004603d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004603d4: mov ecx, edi */ r_ecx = r_edi;
    /* 004603d6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4603dbu); f_0082ddd8();
    /* 004603db: fld dword ptr [0xa459b8] */ FPUSH(R_F32((u32)(0xa459b8u)));
    /* 004603e1: fld dword ptr [0xa459b4] */ FPUSH(R_F32((u32)(0xa459b4u)));
    /* 004603e7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004603e9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004603eb: fadd dword ptr [esi + 0x3d4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3d4u));
    /* 004603f1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004603f4: fcomp dword ptr [esi + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x38u))); FPOP();
    /* 004603f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004603f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004603fa: mov dword ptr [esi + 0x398], 0 */ W32((u32)(r_esi+0x398u), 0x0u);
    /* 00460404: jbe 0x460416 */ if ((fC||fZ)) goto L_00460416;
L_00460406:; BB(0x00460406);
    /* 00460406: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 0046040c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0046040e: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00460414: jmp 0x460424 */ goto L_00460424;
L_00460416:; BB(0x00460416);
    /* 00460416: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 0046041c: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0046041e: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
L_00460424:; BB(0x00460424);
    /* 00460424: fcomp dword ptr [esi + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x40u))); FPOP();
    /* 00460427: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460429: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0046042a: jbe 0x46043c */ if ((fC||fZ)) goto L_0046043c;
L_0046042c:; BB(0x0046042c);
    /* 0046042c: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00460432: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00460434: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0046043a: jmp 0x46044a */ goto L_0046044a;
L_0046043c:; BB(0x0046043c);
    /* 0046043c: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00460442: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00460444: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
L_0046044a:; BB(0x0046044a);
    /* 0046044a: mov ecx, esi */ r_ecx = r_esi;
    /* 0046044c: call 0x4604bc */ r_esp -= 4; W32(r_esp, 0x460451u); f_004604bc();
    /* 00460451: lea edi, [esi + 0x394] */ r_edi = (u32)(r_esi+0x394u);
    /* 00460457: mov ecx, edi */ r_ecx = r_edi;
    /* 00460459: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x46045eu); f_0083173c();
    /* 0046045e: fcom dword ptr [esi + 0x3a8] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3a8u))); 
    /* 00460464: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00460466: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00460467: ja 0x460473 */ if ((!fC&&!fZ)) goto L_00460473;
L_00460469:; BB(0x00460469);
    /* 00460469: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
    /* 0046046f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00460470: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00460471: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00460472: ret  */ FN_RET(0x00460396); r_esp += 4; return;
L_00460473:; BB(0x00460473);
    /* 00460473: fld dword ptr [0xa459b4] */ FPUSH(R_F32((u32)(0xa459b4u)));
    /* 00460479: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0046047b: fstp dword ptr [esi + 0x3a0] */ W_F32((u32)(r_esi+0x3a0u), ST(0)); FPOP();
    /* 00460481: mov ecx, edi */ r_ecx = r_edi;
    /* 00460483: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x460488u); f_0082df08();
    /* 00460488: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0046048a: fld dword ptr [esi + 0x3a0] */ FPUSH(R_F32((u32)(r_esi+0x3a0u)));
    /* 00460490: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 00460496: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00460498: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 0046049e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004604a0: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 004604a6: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 004604ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004604ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004604ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004604af: ret  */ FN_RET(0x00460396); r_esp += 4; return;
}

void f_004604b7(void) /* _WinMain@16_4 */
{
    FN_ENTER(0x004604b7);
    /* 004604b7: jmp 0x460396 */ f_00460396(); return;
}

void f_00468547(void) /* _WinMain@16_5 */
{
    FN_ENTER(0x00468547);
    /* 00468547: jmp 0x46b768 */ f_0046b768(); return;
}

void f_0046b768(void) /* _WinMain@16_5_0 */
{
    FN_ENTER(0x0046b768);
    /* 0046b768: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0046b769: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0046b76c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b76f: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0046b772: movzx ebx, word ptr [edx + 0xc] */ r_ebx = (u32)R16((u32)(r_edx+0xcu));
    /* 0046b776: mov dword ptr [0xaaecc4], eax */ W32((u32)(0xaaecc4u), r_eax);
    /* 0046b77b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0046b77d: mov word ptr [0xaaecc0], bx */ W16((u32)(0xaaecc0u), (u16)r_ebx);
    /* 0046b784: call dword ptr [esi + 0x14] */ { u32 t = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, 0x46b787u); call_ind(t); }
    /* 0046b787: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b78a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046b78c: mov dword ptr [ecx + 0x1211c], eax */ W32((u32)(r_ecx+0x1211cu), r_eax);
    /* 0046b792: mov dword ptr [ecx + 0x1213c], eax */ W32((u32)(r_ecx+0x1213cu), r_eax);
    /* 0046b798: mov dword ptr [ecx + 0x12140], eax */ W32((u32)(r_ecx+0x12140u), r_eax);
    /* 0046b79e: call 0x46b800 */ r_esp -= 4; W32(r_esp, 0x46b7a3u); f_0046b800();
    /* 0046b7a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046b7a5: je 0x46b7b1 */ if (fZ) goto L_0046b7b1;
L_0046b7a7:; BB(0x0046b7a7);
    /* 0046b7a7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b7aa: mov byte ptr [eax + 0x10074], 1 */ W8((u32)(r_eax+0x10074u), 0x1u);
L_0046b7b1:; BB(0x0046b7b1);
    /* 0046b7b1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046b7b4: mov dword ptr [eax + 0x12128], 1 */ W32((u32)(r_eax+0x12128u), 0x1u);
    /* 0046b7be: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0046b7bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7c1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7c5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046b7c7: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x46b7cdu); call_ind(t); }
    /* 0046b7cd: jmp 0x46b7ed */ goto L_0046b7ed;
L_0046b7ed:; BB(0x0046b7ed);
    /* 0046b7ed: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0046b7ee: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046b7f1: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046b7f4: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046b7f7: mov esp, ebp */ r_esp = r_ebp;
    /* 0046b7f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046b7fa: ret 4 */ FN_RET(0x0046b768); r_esp += 8; return;
}

void f_0046b85b(void) /* _WinMain@16_6 */
{
    FN_ENTER(0x0046b85b);
    /* 0046b85b: jmp 0x46ea7c */ f_0046ea7c(); return;
}

void f_0046ea7c(void) /* _WinMain@16_6_0 */
{
    FN_ENTER(0x0046ea7c);
    /* 0046ea7c: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0046ea7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0046ea80: mov edi, dword ptr [0xa95df0] */ r_edi = R32((u32)(0xa95df0u));
    /* 0046ea86: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 0046ea89: mov ecx, 0xaf0 */ r_ecx = 0xaf0u;
    /* 0046ea8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0046ea8f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0046ea92: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0046ea94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046ea95: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0046ea98: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0046ea9a: mov ebx, dword ptr [0xa95df0] */ r_ebx = R32((u32)(0xa95df0u));
    /* 0046eaa0: lea eax, [ebx + 0x114] */ r_eax = (u32)(r_ebx+0x114u);
    /* 0046eaa6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046eaa7: call 0x7917c0 */ r_esp -= 4; W32(r_esp, 0x46eaacu); f_007917c0();
    /* 0046eaac: mov esi, eax */ r_esi = r_eax;
    /* 0046eaae: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0046eab1: add ebx, 0x280 */ {  u32 a = r_ebx; u32 b = 0x280u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0046eab7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0046eab8: call 0x791818 */ r_esp -= 4; W32(r_esp, 0x46eabdu); f_00791818();
    /* 0046eabd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0046eabe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eac0: jne 0x46ead9 */ if (!fZ) goto L_0046ead9;
L_0046eac2:; BB(0x0046eac2);
    /* 0046eac2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0046eac4: jne 0x46ead9 */ if (!fZ) goto L_0046ead9;
L_0046eac6:; BB(0x0046eac6);
    /* 0046eac6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046eac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0046eacb: mov dword ptr [ecx + 0x1212c], eax */ W32((u32)(r_ecx+0x1212cu), r_eax);
    /* 0046ead1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0046ead2: call 0x46eb20 */ r_esp -= 4; W32(r_esp, 0x46ead7u); f_0046eb20();
    /* 0046ead7: jmp 0x46eae1 */ goto L_0046eae1;
L_0046ead9:; BB(0x0046ead9);
    /* 0046ead9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0046eadc: call 0x46eb60 */ r_esp -= 4; W32(r_esp, 0x46eae1u); f_0046eb60();
L_0046eae1:; BB(0x0046eae1);
    /* 0046eae1: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0046eae2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0046eae8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0046eaea: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x46eaf0u); call_ind(t); }
    /* 0046eaf0: jmp 0x46eb10 */ goto L_0046eb10;
L_0046eb10:; BB(0x0046eb10);
    /* 0046eb10: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0046eb11: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0046eb14: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0046eb17: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0046eb1a: mov esp, ebp */ r_esp = r_ebp;
    /* 0046eb1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0046eb1d: ret 4 */ FN_RET(0x0046ea7c); r_esp += 8; return;
}

void f_0046ec8f(void) /* _WinMain@16_7 */
{
    FN_ENTER(0x0046ec8f);
    /* 0046ec8f: jmp 0x471eb0 */ f_00471eb0(); return;
}

void f_00471eb0(void) /* _WinMain@16_7_0 */
{
    FN_ENTER(0x00471eb0);
    /* 00471eb0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00471eb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00471eb4: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00471eb7: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00471eba: jne 0x471ecf */ if (!fZ) goto L_00471ecf;
L_00471ebc:; BB(0x00471ebc);
    /* 00471ebc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471ebf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00471ec1: mov dword ptr [ecx + 0x1212c], eax */ W32((u32)(r_ecx+0x1212cu), r_eax);
    /* 00471ec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00471ec8: call 0x46eb20 */ r_esp -= 4; W32(r_esp, 0x471ecdu); f_0046eb20();
    /* 00471ecd: jmp 0x471ee6 */ goto L_00471ee6;
L_00471ecf:; BB(0x00471ecf);
    /* 00471ecf: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00471ed2: mov dword ptr [eax + 0x12130], 7 */ W32((u32)(r_eax+0x12130u), 0x7u);
    /* 00471edc: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
L_00471ee6:; BB(0x00471ee6);
    /* 00471ee6: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00471ee7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00471ee9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471eeb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00471eed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00471eef: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x471ef5u); call_ind(t); }
    /* 00471ef5: jmp 0x471f15 */ goto L_00471f15;
L_00471f15:; BB(0x00471f15);
    /* 00471f15: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00471f16: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00471f19: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00471f1c: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00471f1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00471f21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00471f22: ret 4 */ FN_RET(0x00471eb0); r_esp += 8; return;
}

void f_00471f63(void) /* _WinMain@16_8 */
{
    FN_ENTER(0x00471f63);
    /* 00471f63: jmp 0x475184 */ f_00475184(); return;
}

void f_00475184(void) /* _WinMain@16_8_0 */
{
    FN_ENTER(0x00475184);
    /* 00475184: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00475185: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00475188: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0047518b: call 0x47524c */ r_esp -= 4; W32(r_esp, 0x475190u); f_0047524c();
    /* 00475190: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00475193: mov edx, dword ptr [eax + 0x1212c] */ r_edx = R32((u32)(r_eax+0x1212cu));
    /* 00475199: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0047519c: mov dword ptr [eax + 0x1212c], edx */ W32((u32)(r_eax+0x1212cu), r_edx);
    /* 004751a2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004751a5: jge 0x4751b1 */ if ((fS==fO)) goto L_004751b1;
L_004751a7:; BB(0x004751a7);
    /* 004751a7: mov ecx, eax */ r_ecx = r_eax;
    /* 004751a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004751aa: call 0x46eb20 */ r_esp -= 4; W32(r_esp, 0x4751afu); f_0046eb20();
    /* 004751af: jmp 0x4751fb */ goto L_004751fb;
L_004751b1:; BB(0x004751b1);
    /* 004751b1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004751b8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004751ba: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4751bfu); f_005caba4();
    /* 004751bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004751c0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004751c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004751c5: je 0x475244 */ if (fZ) goto L_00475244;
L_004751c7:; BB(0x004751c7);
    /* 004751c7: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004751ce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004751d5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004751d8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004751db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004751dc: call 0x482640 */ r_esp -= 4; W32(r_esp, 0x4751e1u); f_00482640();
    /* 004751e1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004751e4: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004751eb:; BB(0x004751eb);
    /* 004751eb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004751ee: mov dword ptr [eax + 0x12138], edx */ W32((u32)(r_eax+0x12138u), r_edx);
    /* 004751f4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004751fb:; BB(0x004751fb);
    /* 004751fb: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 004751fc: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004751fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475200: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00475202: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00475204: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x47520au); call_ind(t); }
    /* 0047520a: jmp 0x47522a */ goto L_0047522a;
L_0047522a:; BB(0x0047522a);
    /* 0047522a: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0047522b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0047522e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00475231: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00475234: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00475237: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0047523e: mov esp, ebp */ r_esp = r_ebp;
    /* 00475240: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00475241: ret 4 */ FN_RET(0x00475184); r_esp += 8; return;
L_00475244:; BB(0x00475244);
    /* 00475244: mov edx, 0 */ r_edx = 0x0u;
    /* 00475249: jmp 0x4751eb */ goto L_004751eb;
}

void f_0047538f(void) /* _WinMain@16_9 */
{
    FN_ENTER(0x0047538f);
    /* 0047538f: jmp 0x4785b0 */ f_004785b0(); return;
}

void f_004785b0(void) /* _WinMain@16_9_0 */
{
    FN_ENTER(0x004785b0);
    /* 004785b0: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004785b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004785b4: mov edx, dword ptr [eax + 0x12124] */ r_edx = R32((u32)(r_eax+0x12124u));
    /* 004785ba: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004785bc: jne 0x478662 */ if (!fZ) goto L_00478662;
L_004785c2:; BB(0x004785c2);
    /* 004785c2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004785c5: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004785c8: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004785cb: jne 0x478641 */ if (!fZ) goto L_00478641;
L_004785cd:; BB(0x004785cd);
    /* 004785cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004785d0: mov edx, dword ptr [eax + 0x1212c] */ r_edx = R32((u32)(r_eax+0x1212cu));
    /* 004785d6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004785d9: mov dword ptr [eax + 0x1212c], edx */ W32((u32)(r_eax+0x1212cu), r_edx);
    /* 004785df: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004785e2: jge 0x4785f1 */ if ((fS==fO)) goto L_004785f1;
L_004785e4:; BB(0x004785e4);
    /* 004785e4: mov ecx, eax */ r_ecx = r_eax;
    /* 004785e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004785e7: call 0x46eb20 */ r_esp -= 4; W32(r_esp, 0x4785ecu); f_0046eb20();
    /* 004785ec: jmp 0x478680 */ goto L_00478680;
L_004785f1:; BB(0x004785f1);
    /* 004785f1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004785f8: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004785fa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4785ffu); f_005caba4();
    /* 004785ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00478600: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00478603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00478605: je 0x4786c9 */ if (fZ) goto L_004786c9;
L_0047860b:; BB(0x0047860b);
    /* 0047860b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00478612: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00478619: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047861c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0047861f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00478620: call 0x482640 */ r_esp -= 4; W32(r_esp, 0x478625u); f_00482640();
    /* 00478625: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00478628: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0047862f:; BB(0x0047862f);
    /* 0047862f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00478632: mov dword ptr [eax + 0x12138], edx */ W32((u32)(r_eax+0x12138u), r_edx);
    /* 00478638: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0047863f: jmp 0x478680 */ goto L_00478680;
L_00478641:; BB(0x00478641);
    /* 00478641: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00478644: call 0x4786d4 */ r_esp -= 4; W32(r_esp, 0x478649u); f_004786d4();
    /* 00478649: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047864c: mov dword ptr [eax + 0x12130], 7 */ W32((u32)(r_eax+0x12130u), 0x7u);
    /* 00478656: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 00478660: jmp 0x478680 */ goto L_00478680;
L_00478662:; BB(0x00478662);
    /* 00478662: mov ecx, eax */ r_ecx = r_eax;
    /* 00478664: call 0x4786d4 */ r_esp -= 4; W32(r_esp, 0x478669u); f_004786d4();
    /* 00478669: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0047866c: mov dword ptr [eax + 0x12130], 0xf */ W32((u32)(r_eax+0x12130u), 0xfu);
    /* 00478676: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
L_00478680:; BB(0x00478680);
    /* 00478680: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00478681: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00478683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00478687: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00478689: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x47868fu); call_ind(t); }
    /* 0047868f: jmp 0x4786af */ goto L_004786af;
L_004786af:; BB(0x004786af);
    /* 004786af: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 004786b0: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004786b3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004786b6: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004786b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004786bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004786c3: mov esp, ebp */ r_esp = r_ebp;
    /* 004786c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004786c6: ret 4 */ FN_RET(0x004785b0); r_esp += 8; return;
L_004786c9:; BB(0x004786c9);
    /* 004786c9: mov edx, 0 */ r_edx = 0x0u;
    /* 004786ce: jmp 0x47862f */ goto L_0047862f;
}

void f_00478726(void) /* _WinMain@16_10 */
{
    FN_ENTER(0x00478726);
    /* 00478726: jmp 0x47b947 */ f_0047b947(); return;
}

void f_0047b947(void) /* _WinMain@16_10_0 */
{
    FN_ENTER(0x0047b947);
    /* 0047b947: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0047b948: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0047b94b: lea edi, [ebp - 0x820] */ r_edi = (u32)(r_ebp+0xfffff7e0u);
    /* 0047b951: mov ecx, 0x808 */ r_ecx = 0x808u;
    /* 0047b956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b957: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0047b95a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0047b95c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047b95d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0047b960: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0047b962: mov ecx, dword ptr [0xa46c34] */ r_ecx = R32((u32)(0xa46c34u));
    /* 0047b968: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0047b96a: je 0x47b9d8 */ if (fZ) goto L_0047b9d8;
L_0047b96c:; BB(0x0047b96c);
    /* 0047b96c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b96e: lea eax, [ebp - 0x818] */ r_eax = (u32)(r_ebp+0xfffff7e8u);
    /* 0047b974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b975: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x47b97au); f_0073ae38();
    /* 0047b97a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047b97d: call 0x4786d4 */ r_esp -= 4; W32(r_esp, 0x47b982u); f_004786d4();
    /* 0047b982: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047b985: mov dword ptr [eax + 0x12130], 0 */ W32((u32)(r_eax+0x12130u), 0x0u);
    /* 0047b98f: mov dword ptr [eax + 0x12120], 2 */ W32((u32)(r_eax+0x12120u), 0x2u);
    /* 0047b999: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0047b99a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b99c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b99e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9a0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9a2: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x47b9a8u); call_ind(t); }
    /* 0047b9a8: jmp 0x47b9c8 */ goto L_0047b9c8;
L_0047b9c8:; BB(0x0047b9c8);
    /* 0047b9c8: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0047b9c9: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047b9cc: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047b9cf: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047b9d2: mov esp, ebp */ r_esp = r_ebp;
    /* 0047b9d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047b9d5: ret 4 */ FN_RET(0x0047b947); r_esp += 8; return;
L_0047b9d8:; BB(0x0047b9d8);
    /* 0047b9d8: mov dword ptr [ebp - 0x18], 0x440b8000 */ W32((u32)(r_ebp+0xffffffe8u), 0x440b8000u);
    /* 0047b9df: push 0xdc */ { u32 v = 0xdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9e4: mov dword ptr [ebp - 0x14], 0x43600000 */ W32((u32)(r_ebp+0xffffffecu), 0x43600000u);
    /* 0047b9eb: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x47b9f0u); f_0073ec50();
    /* 0047b9f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0047b9f1: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0047b9f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9f5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0047b9f6: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x47b9fbu); f_0073a888();
    /* 0047b9fb: mov ecx, eax */ r_ecx = r_eax;
    /* 0047b9fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0047ba00: mov dword ptr [0xa46c34], ecx */ W32((u32)(0xa46c34u), r_ecx);
    /* 0047ba06: jmp 0x47b96c */ goto L_0047b96c;
}

void f_0047ba2f(void) /* _WinMain@16_11 */
{
    FN_ENTER(0x0047ba2f);
    /* 0047ba2f: jmp 0x47ec50 */ f_0047ec50(); return;
}

void f_0047ec50(void) /* _WinMain@16_11_0 */
{
    FN_ENTER(0x0047ec50);
    /* 0047ec50: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0047ec51: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0047ec54: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0047ec56: mov byte ptr [ebp - 0x16], 0x1d */ W8((u32)(r_ebp+0xffffffeau), 0x1du);
    /* 0047ec5a: mov esi, 8 */ r_esi = 0x8u;
    /* 0047ec5f: mov word ptr [ebp - 0x18], si */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_esi);
    /* 0047ec63: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 0047ec66: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec68: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0047ec6a: mov byte ptr [ebp - 0x15], al */ W8((u32)(r_ebp+0xffffffebu), (u8)r_eax);
    /* 0047ec6d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec6e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0047ec71: call dword ptr [ebx + 0x20] */ { u32 t = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, 0x47ec74u); call_ind(t); }
    /* 0047ec74: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 0047ec75: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec7b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0047ec7d: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x47ec83u); call_ind(t); }
    /* 0047ec83: jmp 0x47eca3 */ goto L_0047eca3;
L_0047eca3:; BB(0x0047eca3);
    /* 0047eca3: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0047eca4: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0047eca7: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0047ecaa: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0047ecad: mov esp, ebp */ r_esp = r_ebp;
    /* 0047ecaf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0047ecb0: ret 4 */ FN_RET(0x0047ec50); r_esp += 8; return;
}

void f_0047ecef(void) /* _WinMain@16_12 */
{
    FN_ENTER(0x0047ecef);
    /* 0047ecef: jmp 0x481f10 */ f_00481f10(); return;
}

void f_00481f10(void) /* _WinMain@16_12_0 */
{
    FN_ENTER(0x00481f10);
    /* 00481f10: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00481f11: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481f14: movzx eax, byte ptr [eax + 3] */ r_eax = (u32)R8((u32)(r_eax+0x3u));
    /* 00481f18: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f1b: jne 0x481f59 */ if (!fZ) goto L_00481f59;
L_00481f1d:; BB(0x00481f1d);
    /* 00481f1d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481f20: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00481f23: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 00481f26: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 00481f2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481f2c: call 0x5bc114 */ r_esp -= 4; W32(r_esp, 0x481f31u); f_005bc114();
    /* 00481f31: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f34: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00481f36: mov byte ptr [ebp - 0x16], 0xeb */ W8((u32)(r_ebp+0xffffffeau), 0xebu);
    /* 00481f3a: mov eax, 8 */ r_eax = 0x8u;
    /* 00481f3f: mov byte ptr [ebp - 0x15], 3 */ W8((u32)(r_ebp+0xffffffebu), 0x3u);
    /* 00481f43: mov word ptr [ebp - 0x18], ax */ W16((u32)(r_ebp+0xffffffe8u), (u16)r_eax);
    /* 00481f47: mov dword ptr [ebp - 0x14], 0 */ W32((u32)(r_ebp+0xffffffecu), 0x0u);
    /* 00481f4e: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 00481f51: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00481f53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481f54: call dword ptr [ebx + 0x20] */ { u32 t = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, 0x481f57u); call_ind(t); }
    /* 00481f57: jmp 0x481fa4 */ goto L_00481fa4;
L_00481f59:; BB(0x00481f59);
    /* 00481f59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f5c: jne 0x481fa4 */ if (!fZ) goto L_00481fa4;
L_00481f5e:; BB(0x00481f5e);
    /* 00481f5e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00481f61: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00481f64: lea edx, [eax + 0xc] */ r_edx = (u32)(r_eax+0xcu);
    /* 00481f67: mov ecx, 0xa8d4e0 */ r_ecx = 0xa8d4e0u;
    /* 00481f6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00481f6d: call 0x5bc264 */ r_esp -= 4; W32(r_esp, 0x481f72u); f_005bc264();
    /* 00481f72: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00481f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00481f77: jne 0x481fe3 */ if (!fZ) goto L_00481fe3;
L_00481f79:; BB(0x00481f79);
    /* 00481f79: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00481f7c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481f7f: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00481f82: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 00481f84: mov eax, 8 */ r_eax = 0x8u;
    /* 00481f89: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00481f8c: mov byte ptr [ebp - 0x1e], 0xeb */ W8((u32)(r_ebp+0xffffffe2u), 0xebu);
    /* 00481f90: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 00481f94: mov byte ptr [ebp - 0x1d], 3 */ W8((u32)(r_ebp+0xffffffe3u), 0x3u);
    /* 00481f98: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00481f9b: lea esi, [ebp - 0x20] */ r_esi = (u32)(r_ebp+0xffffffe0u);
    /* 00481f9e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00481fa1: call dword ptr [edi + 0x20] */ { u32 t = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, 0x481fa4u); call_ind(t); }
L_00481fa4:; BB(0x00481fa4);
    /* 00481fa4: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00481fa5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fa7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fa9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00481fab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00481fad: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x481fb3u); call_ind(t); }
    /* 00481fb3: jmp 0x481fd3 */ goto L_00481fd3;
L_00481fd3:; BB(0x00481fd3);
    /* 00481fd3: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 00481fd4: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00481fd7: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00481fda: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00481fdd: mov esp, ebp */ r_esp = r_ebp;
    /* 00481fdf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00481fe0: ret 4 */ FN_RET(0x00481f10); r_esp += 8; return;
L_00481fe3:; BB(0x00481fe3);
    /* 00481fe3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00481fe6: call 0x48240c */ r_esp -= 4; W32(r_esp, 0x481febu); f_0048240c();
    /* 00481feb: jmp 0x481fa4 */ goto L_00481fa4;
}

void f_004c5fb4(void) /* _WinMain@16_13 */
{
    FN_ENTER(0x004c5fb4);
    /* 004c5fb4: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c5fe0(void) /* _WinMain@16_14 */
{
    FN_ENTER(0x004c5fe0);
    /* 004c5fe0: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c6075(void) /* _WinMain@16_13_0 */
{
    FN_ENTER(0x004c6075);
    /* 004c6075: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004c6078: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c607b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c607e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c6081: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c6088: mov esp, ebp */ r_esp = r_ebp;
    /* 004c608a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c608b: ret 4 */ FN_RET(0x004c6075); r_esp += 8; return;
}

void f_004c61b2(void) /* _WinMain@16_15 */
{
    FN_ENTER(0x004c61b2);
    /* 004c61b2: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c61e7(void) /* _WinMain@16_16 */
{
    FN_ENTER(0x004c61e7);
    /* 004c61e7: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c6285(void) /* _WinMain@16_17 */
{
    FN_ENTER(0x004c6285);
    /* 004c6285: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c632d(void) /* _WinMain@16_18 */
{
    FN_ENTER(0x004c632d);
    /* 004c632d: jmp 0x4c6075 */ f_004c6075(); return;
}

void f_004c8b7c(void) /* _WinMain@16_19 */
{
    FN_ENTER(0x004c8b7c);
    /* 004c8b7c: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8b7c); r_esp += 8; return;
}

void f_004c8bdf(void) /* _WinMain@16_20 */
{
    FN_ENTER(0x004c8bdf);
    /* 004c8bdf: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8bdf); r_esp += 8; return;
}

void f_004c8c08(void) /* _WinMain@16_22 */
{
    FN_ENTER(0x004c8c08);
    /* 004c8c08: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8c08); r_esp += 8; return;
}

void f_004c8c6e(void) /* _WinMain@16_23 */
{
    FN_ENTER(0x004c8c6e);
    /* 004c8c6e: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8c6e); r_esp += 8; return;
}

void f_004c8cfe(void) /* _WinMain@16_24 */
{
    FN_ENTER(0x004c8cfe);
    /* 004c8cfe: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8cfe); r_esp += 8; return;
}

void f_004c8da6(void) /* _WinMain@16_25 */
{
    FN_ENTER(0x004c8da6);
    /* 004c8da6: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c8dd1(void) /* _WinMain@16_26 */
{
    FN_ENTER(0x004c8dd1);
    /* 004c8dd1: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c8ded(void) /* _WinMain@16_27 */
{
    FN_ENTER(0x004c8ded);
    /* 004c8ded: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c8ea3(void) /* _WinMain@16_25_0 */
{
    FN_ENTER(0x004c8ea3);
    /* 004c8ea3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8ea6: je 0x4c8ead */ if (fZ) goto L_004c8ead;
L_004c8ea8:; BB(0x004c8ea8);
    /* 004c8ea8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c8eab: jne 0x4c8ef6 */ if (!fZ) goto L_004c8ef6;
L_004c8ead:; BB(0x004c8ead);
    /* 004c8ead: fld dword ptr [0xa4856c] */ FPUSH(R_F32((u32)(0xa4856cu)));
    /* 004c8eb3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8eb6: fadd dword ptr [edx + 0x874] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x874u));
    /* 004c8ebc: fld dword ptr [0x908540] */ FPUSH(R_F32((u32)(0x908540u)));
    /* 004c8ec2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8ec4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8ec6: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 004c8ec9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8eca: fld dword ptr [0x908814] */ FPUSH(R_F32((u32)(0x908814u)));
    /* 004c8ed0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c8ed2: jb 0x4c8ed6 */ if (fC) goto L_004c8ed6;
L_004c8ed4:; BB(0x004c8ed4);
    /* 004c8ed4: fst st(3) */ ST(3) = ST(0);
L_004c8ed6:; BB(0x004c8ed6);
    /* 004c8ed6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8ed8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c8eda: fst dword ptr [edx + 0x874] */ W_F32((u32)(r_edx+0x874u), ST(0));
    /* 004c8ee0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004c8ee2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8ee4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8ee6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8ee7: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 004c8eed: jb 0x4c8ef1 */ if (fC) goto L_004c8ef1;
L_004c8eef:; BB(0x004c8eef);
    /* 004c8eef: fst st(1) */ ST(1) = ST(0);
L_004c8ef1:; BB(0x004c8ef1);
    /* 004c8ef1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8ef3: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_004c8ef6:; BB(0x004c8ef6);
    /* 004c8ef6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8ef9: je 0x4c8f05 */ if (fZ) goto L_004c8f05;
L_004c8efb:; BB(0x004c8efb);
    /* 004c8efb: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c8efe: je 0x4c8f05 */ if (fZ) goto L_004c8f05;
L_004c8f00:; BB(0x004c8f00);
    /* 004c8f00: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c8f03: jne 0x4c8f25 */ if (!fZ) goto L_004c8f25;
L_004c8f05:; BB(0x004c8f05);
    /* 004c8f05: fld dword ptr [0x908534] */ FPUSH(R_F32((u32)(0x908534u)));
    /* 004c8f0b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c8f0e: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 004c8f11: fld dword ptr [0x908814] */ FPUSH(R_F32((u32)(0x908814u)));
    /* 004c8f17: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004c8f19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c8f1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c8f1c: jb 0x4c8f20 */ if (fC) goto L_004c8f20;
L_004c8f1e:; BB(0x004c8f1e);
    /* 004c8f1e: fst st(1) */ ST(1) = ST(0);
L_004c8f20:; BB(0x004c8f20);
    /* 004c8f20: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c8f22: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8ea3); r_esp += 8; return;
}

void f_004c8fa6(void) /* _WinMain@16_28 */
{
    FN_ENTER(0x004c8fa6);
    goto L_004c8fa6;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8fa6); r_esp += 8; return;
L_004c8fa6:; BB(0x004c8fa6);
    /* 004c8fa6: jmp 0x4c8f25 */ goto L_004c8f25;
}

void f_004c90c6(void) /* _WinMain@16_29 */
{
    FN_ENTER(0x004c90c6);
    /* 004c90c6: jmp 0x4c914a */ f_004c914a(); return;
}

void f_004c914a(void) /* _WinMain@16_29_0 */
{
    FN_ENTER(0x004c914a);
    /* 004c914a: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004c9151: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 004c9153: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4c9158u); f_005caba4();
    /* 004c9158: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c9159: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 004c915c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c915e: je 0x4c91a6 */ if (fZ) goto L_004c91a6;
L_004c9160:; BB(0x004c9160);
    /* 004c9160: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 004c9167: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004c916e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c9171: lea esi, [ebp - 0x54] */ r_esi = (u32)(r_ebp+0xffffffacu);
    /* 004c9174: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 004c9178: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c9179: lea ecx, [ebx + 0x3cc] */ r_ecx = (u32)(r_ebx+0x3ccu);
    /* 004c917f: push dword ptr [ebx + 0x76c] */ { u32 v = R32((u32)(r_ebx+0x76cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c9185: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004c9186: lea edi, [ebx + 0x418] */ r_edi = (u32)(r_ebx+0x418u);
    /* 004c918c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c918d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004c918e: mov ecx, eax */ r_ecx = r_eax;
    /* 004c9190: call 0x4cf34c */ r_esp -= 4; W32(r_esp, 0x4c9195u); f_004cf34c();
    /* 004c9195: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 004c919c: jmp 0x4c91a6 */ goto L_004c91a6;
L_004c91a6:; BB(0x004c91a6);
    /* 004c91a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004c91a9: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 004c91ac: sub eax, dword ptr [edx + 0x86c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x86cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004c91b2: mov dword ptr [edx + 0x5c], eax */ W32((u32)(r_edx+0x5cu), r_eax);
    /* 004c91b5: mov eax, dword ptr [edx + 0x85c] */ r_eax = R32((u32)(r_edx+0x85cu));
    /* 004c91bb: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c9205(void) /* _WinMain@16_30 */
{
    FN_ENTER(0x004c9205);
    /* 004c9205: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c9212(void) /* _WinMain@16_31 */
{
    FN_ENTER(0x004c9212);
    /* 004c9212: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c928e(void) /* _WinMain@16_32 */
{
    FN_ENTER(0x004c928e);
    /* 004c928e: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c9299(void) /* _WinMain@16_33 */
{
    FN_ENTER(0x004c9299);
    /* 004c9299: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c92bd(void) /* _WinMain@16_34 */
{
    FN_ENTER(0x004c92bd);
    /* 004c92bd: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_004c92f0(void) /* _WinMain@16_35 */
{
    FN_ENTER(0x004c92f0);
    /* 004c92f0: jmp 0x4c8ea3 */ f_004c8ea3(); return;
}

void f_0050d6af(void) /* _WinMain@16_36 */
{
    FN_ENTER(0x0050d6af);
    /* 0050d6af: jmp 0x50d8ea */ goto L_0050d8ea;
L_0050d6b4:; BB(0x0050d6b4);
    /* 0050d6b4: mov ecx, dword ptr [0xa72cd0] */ r_ecx = R32((u32)(0xa72cd0u));
    /* 0050d6ba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d6bd: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 0050d6c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c4: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6c8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6cc: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d6ce: mov dword ptr [edx + 0x80], eax */ W32((u32)(r_edx+0x80u), r_eax);
    /* 0050d6d4: mov esi, 0xa72c28 */ r_esi = 0xa72c28u;
    /* 0050d6d9: mov edi, ecx */ r_edi = r_ecx;
L_0050d6db:; BB(0x0050d6db);
    /* 0050d6db: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0050d6dd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d6e0: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0050d6e2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050d6e5: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050d6e7: jne 0x50d6db */ if (!fZ) goto L_0050d6db;
L_0050d6e9:; BB(0x0050d6e9);
    /* 0050d6e9: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d6ec: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6ee: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6f0: mov ebx, dword ptr [ecx + 0x10] */ r_ebx = R32((u32)(r_ecx+0x10u));
    /* 0050d6f3: mov dword ptr [0xa72c38], ebx */ W32((u32)(0xa72c38u), r_ebx);
    /* 0050d6f9: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d6fb: mov esi, dword ptr [ecx + 0x14] */ r_esi = R32((u32)(r_ecx+0x14u));
    /* 0050d6fe: lea ebx, [edi + 0x50] */ r_ebx = (u32)(r_edi+0x50u);
    /* 0050d701: mov dword ptr [0xa72c3c], esi */ W32((u32)(0xa72c3cu), r_esi);
    /* 0050d707: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d708: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0050d70b: mov dword ptr [0xa72c40], eax */ W32((u32)(0xa72c40u), r_eax);
    /* 0050d710: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 0050d713: mov dword ptr [0xa72c44], edx */ W32((u32)(0xa72c44u), r_edx);
    /* 0050d719: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 0050d71c: mov dword ptr [0xa72c48], eax */ W32((u32)(0xa72c48u), r_eax);
    /* 0050d721: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0050d724: mov dword ptr [0xa72c4c], eax */ W32((u32)(0xa72c4cu), r_eax);
    /* 0050d729: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0050d72c: mov dword ptr [0xa72c50], eax */ W32((u32)(0xa72c50u), r_eax);
    /* 0050d731: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0050d734: mov dword ptr [0xa72c54], eax */ W32((u32)(0xa72c54u), r_eax);
    /* 0050d739: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0050d73c: mov dword ptr [0xa72c58], eax */ W32((u32)(0xa72c58u), r_eax);
    /* 0050d741: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 0050d744: mov dword ptr [0xa72c5c], eax */ W32((u32)(0xa72c5cu), r_eax);
    /* 0050d749: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0050d74c: mov dword ptr [0xa72c60], eax */ W32((u32)(0xa72c60u), r_eax);
    /* 0050d751: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 0050d754: mov dword ptr [0xa72c64], eax */ W32((u32)(0xa72c64u), r_eax);
    /* 0050d759: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 0050d75c: mov dword ptr [0xa72c68], eax */ W32((u32)(0xa72c68u), r_eax);
    /* 0050d761: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 0050d764: mov dword ptr [0xa72c6c], eax */ W32((u32)(0xa72c6cu), r_eax);
    /* 0050d769: mov eax, dword ptr [ecx + 0x48] */ r_eax = R32((u32)(r_ecx+0x48u));
    /* 0050d76c: mov dword ptr [0xa72c70], eax */ W32((u32)(0xa72c70u), r_eax);
    /* 0050d771: mov eax, dword ptr [ecx + 0x4c] */ r_eax = R32((u32)(r_ecx+0x4cu));
    /* 0050d774: mov dword ptr [0xa72c74], eax */ W32((u32)(0xa72c74u), r_eax);
    /* 0050d779: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 0050d77c: mov dword ptr [0xa72c78], eax */ W32((u32)(0xa72c78u), r_eax);
    /* 0050d781: mov eax, dword ptr [ecx + 0x54] */ r_eax = R32((u32)(r_ecx+0x54u));
    /* 0050d784: mov dword ptr [0xa72c7c], eax */ W32((u32)(0xa72c7cu), r_eax);
    /* 0050d789: mov eax, dword ptr [ecx + 0x58] */ r_eax = R32((u32)(r_ecx+0x58u));
    /* 0050d78c: mov dword ptr [0xa72c80], eax */ W32((u32)(0xa72c80u), r_eax);
    /* 0050d791: mov eax, dword ptr [ecx + 0x5c] */ r_eax = R32((u32)(r_ecx+0x5cu));
    /* 0050d794: mov dword ptr [0xa72c84], eax */ W32((u32)(0xa72c84u), r_eax);
    /* 0050d799: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 0050d79c: mov dword ptr [0xa72c88], eax */ W32((u32)(0xa72c88u), r_eax);
    /* 0050d7a1: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0050d7a4: mov dword ptr [0xa72c8c], eax */ W32((u32)(0xa72c8cu), r_eax);
    /* 0050d7a9: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 0050d7ac: mov dword ptr [0xa72c90], eax */ W32((u32)(0xa72c90u), r_eax);
    /* 0050d7b1: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 0050d7b4: mov dword ptr [0xa72c94], eax */ W32((u32)(0xa72c94u), r_eax);
    /* 0050d7b9: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 0050d7bc: mov dword ptr [0xa72c98], eax */ W32((u32)(0xa72c98u), r_eax);
    /* 0050d7c1: mov eax, dword ptr [ecx + 0x74] */ r_eax = R32((u32)(r_ecx+0x74u));
    /* 0050d7c4: mov dword ptr [0xa72c9c], eax */ W32((u32)(0xa72c9cu), r_eax);
    /* 0050d7c9: mov eax, dword ptr [ecx + 0x78] */ r_eax = R32((u32)(r_ecx+0x78u));
    /* 0050d7cc: mov dword ptr [0xa72ca0], eax */ W32((u32)(0xa72ca0u), r_eax);
    /* 0050d7d1: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 0050d7d4: mov dword ptr [0xa72ca4], eax */ W32((u32)(0xa72ca4u), r_eax);
    /* 0050d7d9: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 0050d7df: mov dword ptr [0xa72ca8], eax */ W32((u32)(0xa72ca8u), r_eax);
    /* 0050d7e4: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 0050d7ea: mov dword ptr [0xa72cac], eax */ W32((u32)(0xa72cacu), r_eax);
    /* 0050d7ef: movzx eax, byte ptr [ecx + 0x88] */ r_eax = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050d7f6: mov byte ptr [0xa72cb0], al */ W8((u32)(0xa72cb0u), (u8)r_eax);
    /* 0050d7fb: movzx eax, byte ptr [ecx + 0x89] */ r_eax = (u32)R8((u32)(r_ecx+0x89u));
    /* 0050d802: mov byte ptr [0xa72cb1], al */ W8((u32)(0xa72cb1u), (u8)r_eax);
    /* 0050d807: movzx eax, byte ptr [ecx + 0x8a] */ r_eax = (u32)R8((u32)(r_ecx+0x8au));
    /* 0050d80e: mov byte ptr [0xa72cb2], al */ W8((u32)(0xa72cb2u), (u8)r_eax);
    /* 0050d813: movzx eax, byte ptr [ecx + 0x8b] */ r_eax = (u32)R8((u32)(r_ecx+0x8bu));
    /* 0050d81a: mov byte ptr [0xa72cb3], al */ W8((u32)(0xa72cb3u), (u8)r_eax);
    /* 0050d81f: movzx eax, byte ptr [ecx + 0x8c] */ r_eax = (u32)R8((u32)(r_ecx+0x8cu));
    /* 0050d826: mov byte ptr [0xa72cb4], al */ W8((u32)(0xa72cb4u), (u8)r_eax);
    /* 0050d82b: movzx eax, byte ptr [ecx + 0x8d] */ r_eax = (u32)R8((u32)(r_ecx+0x8du));
    /* 0050d832: mov byte ptr [0xa72cb5], al */ W8((u32)(0xa72cb5u), (u8)r_eax);
    /* 0050d837: movzx eax, byte ptr [ecx + 0x8e] */ r_eax = (u32)R8((u32)(r_ecx+0x8eu));
    /* 0050d83e: mov byte ptr [0xa72cb6], al */ W8((u32)(0xa72cb6u), (u8)r_eax);
    /* 0050d843: movzx eax, byte ptr [ecx + 0x8f] */ r_eax = (u32)R8((u32)(r_ecx+0x8fu));
    /* 0050d84a: mov byte ptr [0xa72cb7], al */ W8((u32)(0xa72cb7u), (u8)r_eax);
    /* 0050d84f: movzx eax, byte ptr [ecx + 0x90] */ r_eax = (u32)R8((u32)(r_ecx+0x90u));
    /* 0050d856: mov byte ptr [0xa72cb8], al */ W8((u32)(0xa72cb8u), (u8)r_eax);
    /* 0050d85b: movzx eax, byte ptr [ecx + 0x91] */ r_eax = (u32)R8((u32)(r_ecx+0x91u));
    /* 0050d862: mov byte ptr [0xa72cb9], al */ W8((u32)(0xa72cb9u), (u8)r_eax);
    /* 0050d867: movzx eax, byte ptr [ecx + 0x92] */ r_eax = (u32)R8((u32)(r_ecx+0x92u));
    /* 0050d86e: mov byte ptr [0xa72cba], al */ W8((u32)(0xa72cbau), (u8)r_eax);
    /* 0050d873: movzx eax, byte ptr [ecx + 0x93] */ r_eax = (u32)R8((u32)(r_ecx+0x93u));
    /* 0050d87a: mov byte ptr [0xa72cbb], al */ W8((u32)(0xa72cbbu), (u8)r_eax);
    /* 0050d87f: movzx eax, byte ptr [ecx + 0x94] */ r_eax = (u32)R8((u32)(r_ecx+0x94u));
    /* 0050d886: mov byte ptr [0xa72cbc], al */ W8((u32)(0xa72cbcu), (u8)r_eax);
    /* 0050d88b: movzx eax, byte ptr [ecx + 0x95] */ r_eax = (u32)R8((u32)(r_ecx+0x95u));
    /* 0050d892: mov byte ptr [0xa72cbd], al */ W8((u32)(0xa72cbdu), (u8)r_eax);
    /* 0050d897: movzx eax, byte ptr [ecx + 0x96] */ r_eax = (u32)R8((u32)(r_ecx+0x96u));
    /* 0050d89e: mov byte ptr [0xa72cbe], al */ W8((u32)(0xa72cbeu), (u8)r_eax);
    /* 0050d8a3: movzx ecx, byte ptr [ecx + 0x97] */ r_ecx = (u32)R8((u32)(r_ecx+0x97u));
    /* 0050d8aa: mov byte ptr [0xa72cbf], cl */ W8((u32)(0xa72cbfu), (u8)r_ecx);
    /* 0050d8b0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0050d8b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8b4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50d8b9u); f_0061cdb0();
    /* 0050d8b9: mov eax, edi */ r_eax = r_edi;
    /* 0050d8bb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8bd: push dword ptr [eax + 0x80] */ { u32 v = R32((u32)(r_eax+0x80u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050d8c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d8c4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x50d8c9u); f_00858900();
    /* 0050d8c9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050d8cc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0050d8d3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050d8d6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050d8d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050d8dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050d8df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050d8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0050d8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050d8e9: ret  */ FN_RET(0x0050d6af); r_esp += 4; return;
L_0050d8ea:; BB(0x0050d8ea);
    /* 0050d8ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0050d8ec:; BB(0x0050d8ec);
    /* 0050d8ec: lea edi, [eax + eax*4] */ r_edi = (u32)(r_eax+r_eax*4);
    /* 0050d8ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f3: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f7: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8f9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d8fb: add edi, dword ptr [0xa72ccc] */ {  u32 a = r_edi; u32 b = R32((u32)(0xa72cccu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050d901: mov esi, 0x9bb100 */ r_esi = 0x9bb100u;
    /* 0050d906: mov ecx, 0x98 */ r_ecx = 0x98u;
    /* 0050d90b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050d90c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0050d90f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0050d911: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050d912: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050d915: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0050d917: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050d91a: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050d91d: jl 0x50d8ec */ if ((fS!=fO)) goto L_0050d8ec;
L_0050d91f:; BB(0x0050d91f);
    /* 0050d91f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050d922: mov esi, dword ptr [eax + 0x70] */ r_esi = R32((u32)(r_eax+0x70u));
    /* 0050d925: jmp 0x50d6b4 */ goto L_0050d6b4;
}

void f_005130ce(void) /* _WinMain@16_37_1 */
{
    FN_ENTER(0x005130ce);
    /* 005130ce: mov dword ptr [0xa72d0c], eax */ W32((u32)(0xa72d0cu), r_eax);
    /* 005130d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005130da: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005130e1: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005130e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5130e8u); f_008581c5();
    /* 005130e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005130e9: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005130ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005130ee: je 0x513389 */ if (fZ) goto L_00513389;
L_005130f4:; BB(0x005130f4);
    /* 005130f4: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005130fb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00513102: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513105: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00513107: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051310c: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513111: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513116: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x51311bu); f_005795a0();
    /* 0051311b: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051311e: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00513125: mov dword ptr [0xa72d14], eax */ W32((u32)(0xa72d14u), r_eax);
    /* 0051312a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513131: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00513138: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051313a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51313fu); f_008581c5();
    /* 0051313f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513140: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00513143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513145: je 0x513382 */ if (fZ) goto L_00513382;
L_0051314b:; BB(0x0051314b);
    /* 0051314b: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00513152: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00513159: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051315c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051315e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513163: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513168: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051316d: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x513172u); f_005795a0();
    /* 00513172: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513175: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0051317c: mov dword ptr [0xa72d18], eax */ W32((u32)(0xa72d18u), r_eax);
    /* 00513181: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513188: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 0051318d: mov ebx, dword ptr [0x9bb334] */ r_ebx = R32((u32)(0x9bb334u));
    /* 00513193: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 00513199: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051319b: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005131a3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131a9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131ad: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131b0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131b5u); f_00579a28();
    /* 005131b5: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 005131ba: mov ebx, dword ptr [0x9bb344] */ r_ebx = R32((u32)(0x9bb344u));
    /* 005131c0: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 005131c6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005131c8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131ce: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005131d0: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131d6: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131da: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131dd: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131e2u); f_00579a28();
    /* 005131e2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131e4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131e9u); f_008581c5();
    /* 005131e9: mov dword ptr [0xa72d08], eax */ W32((u32)(0xa72d08u), r_eax);
    /* 005131ee: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131f5u); f_008581c5();
    /* 005131f5: mov dword ptr [0xa72d04], eax */ W32((u32)(0xa72d04u), r_eax);
    /* 005131fa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x513201u); f_008581c5();
    /* 00513201: mov dword ptr [0xa72d00], eax */ W32((u32)(0xa72d00u), r_eax);
    /* 00513206: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00513208: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51320du); f_008581c5();
    /* 0051320d: mov dword ptr [0xa72cfc], eax */ W32((u32)(0xa72cfcu), r_eax);
    /* 00513212: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00513214: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513219u); f_0077a684();
    /* 00513219: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051321f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00513221: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513223: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513228u); f_0077a684();
    /* 00513228: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051322e: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00513230: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513233: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513238u); f_0077a684();
    /* 00513238: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051323e: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00513240: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513243: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513248u); f_0077a698();
    /* 00513248: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051324e: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00513250: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513252: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513257u); f_0077a698();
    /* 00513257: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051325d: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051325f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513262: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513267u); f_0077a698();
    /* 00513267: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051326d: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051326f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513272: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513277u); f_0077a6b4();
    /* 00513277: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051327d: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051327f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513281: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513286u); f_0077a6b4();
    /* 00513286: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051328c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051328e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513291: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513296u); f_0077a6b4();
    /* 00513296: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051329c: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051329e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132a1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132a6u); f_0077a6cc();
    /* 005132a6: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ac: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 005132ae: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005132b0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132b5u); f_0077a6cc();
    /* 005132b5: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132bb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005132bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005132c0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132c5u); f_0077a6cc();
    /* 005132c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005132c8: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ce: mov esi, dword ptr [0x9205b4] */ r_esi = R32((u32)(0x9205b4u));
    /* 005132d4: movzx edi, word ptr [0x9205b8] */ r_edi = (u32)R16((u32)(0x9205b8u));
    /* 005132db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132de: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 005132e4: mov dword ptr [0xa72d10], 0 */ W32((u32)(0xa72d10u), 0x0u);
    /* 005132ee: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005132f1: mov eax, 0x2f */ r_eax = 0x2fu;
    /* 005132f6: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005132fa: movzx eax, word ptr [0x9205ba] */ r_eax = (u32)R16((u32)(0x9205bau));
    /* 00513301: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 00513305: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0051330a: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0051330e: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00513312: movzx eax, word ptr [0x9205bc] */ r_eax = (u32)R16((u32)(0x9205bcu));
    /* 00513319: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 0051331d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00513323: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00513326: mov ebx, 0x31 */ r_ebx = 0x31u;
    /* 0051332b: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0051332f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00513331:; BB(0x00513331);
    /* 00513331: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00513334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513337: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051333d: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513342: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00513345: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 0051334a: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051334e: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513352: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513353: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x513358u); f_00608470();
    /* 00513358: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051335b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051335e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513361: jge 0x51336b */ if ((fS==fO)) goto L_0051336b;
L_00513363:; BB(0x00513363);
    /* 00513363: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 00513369: jmp 0x513331 */ goto L_00513331;
L_0051336b:; BB(0x0051336b);
    /* 0051336b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051336e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513371: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00513374: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00513377: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051337e: mov esp, ebp */ r_esp = r_ebp;
    /* 00513380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513381: ret  */ FN_RET(0x005130ce); r_esp += 4; return;
L_00513382:; BB(0x00513382);
    /* 00513382: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00513384: jmp 0x51317c */ f_0051317c(); return;
L_00513389:; BB(0x00513389);
    /* 00513389: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051338b: jmp 0x513125 */ f_00513125(); return;
}

void f_00513125(void) /* _WinMain@16_38_0 */
{
    FN_ENTER(0x00513125);
    /* 00513125: mov dword ptr [0xa72d14], eax */ W32((u32)(0xa72d14u), r_eax);
    /* 0051312a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513131: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00513138: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051313a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51313fu); f_008581c5();
    /* 0051313f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00513140: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00513143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00513145: je 0x513382 */ if (fZ) goto L_00513382;
L_0051314b:; BB(0x0051314b);
    /* 0051314b: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00513152: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00513159: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051315c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051315e: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513163: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513168: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051316d: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x513172u); f_005795a0();
    /* 00513172: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00513175: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0051317c: mov dword ptr [0xa72d18], eax */ W32((u32)(0xa72d18u), r_eax);
    /* 00513181: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513188: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 0051318d: mov ebx, dword ptr [0x9bb334] */ r_ebx = R32((u32)(0x9bb334u));
    /* 00513193: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 00513199: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051319b: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005131a3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131a9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131ad: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131b0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131b5u); f_00579a28();
    /* 005131b5: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 005131ba: mov ebx, dword ptr [0x9bb344] */ r_ebx = R32((u32)(0x9bb344u));
    /* 005131c0: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 005131c6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005131c8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131ce: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005131d0: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131d6: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131da: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131dd: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131e2u); f_00579a28();
    /* 005131e2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131e4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131e9u); f_008581c5();
    /* 005131e9: mov dword ptr [0xa72d08], eax */ W32((u32)(0xa72d08u), r_eax);
    /* 005131ee: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131f5u); f_008581c5();
    /* 005131f5: mov dword ptr [0xa72d04], eax */ W32((u32)(0xa72d04u), r_eax);
    /* 005131fa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x513201u); f_008581c5();
    /* 00513201: mov dword ptr [0xa72d00], eax */ W32((u32)(0xa72d00u), r_eax);
    /* 00513206: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00513208: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51320du); f_008581c5();
    /* 0051320d: mov dword ptr [0xa72cfc], eax */ W32((u32)(0xa72cfcu), r_eax);
    /* 00513212: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00513214: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513219u); f_0077a684();
    /* 00513219: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051321f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00513221: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513223: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513228u); f_0077a684();
    /* 00513228: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051322e: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00513230: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513233: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513238u); f_0077a684();
    /* 00513238: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051323e: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00513240: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513243: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513248u); f_0077a698();
    /* 00513248: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051324e: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00513250: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513252: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513257u); f_0077a698();
    /* 00513257: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051325d: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051325f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513262: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513267u); f_0077a698();
    /* 00513267: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051326d: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051326f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513272: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513277u); f_0077a6b4();
    /* 00513277: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051327d: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051327f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513281: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513286u); f_0077a6b4();
    /* 00513286: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051328c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051328e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513291: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513296u); f_0077a6b4();
    /* 00513296: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051329c: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051329e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132a1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132a6u); f_0077a6cc();
    /* 005132a6: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ac: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 005132ae: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005132b0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132b5u); f_0077a6cc();
    /* 005132b5: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132bb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005132bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005132c0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132c5u); f_0077a6cc();
    /* 005132c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005132c8: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ce: mov esi, dword ptr [0x9205b4] */ r_esi = R32((u32)(0x9205b4u));
    /* 005132d4: movzx edi, word ptr [0x9205b8] */ r_edi = (u32)R16((u32)(0x9205b8u));
    /* 005132db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132de: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 005132e4: mov dword ptr [0xa72d10], 0 */ W32((u32)(0xa72d10u), 0x0u);
    /* 005132ee: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005132f1: mov eax, 0x2f */ r_eax = 0x2fu;
    /* 005132f6: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005132fa: movzx eax, word ptr [0x9205ba] */ r_eax = (u32)R16((u32)(0x9205bau));
    /* 00513301: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 00513305: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0051330a: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0051330e: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00513312: movzx eax, word ptr [0x9205bc] */ r_eax = (u32)R16((u32)(0x9205bcu));
    /* 00513319: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 0051331d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00513323: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00513326: mov ebx, 0x31 */ r_ebx = 0x31u;
    /* 0051332b: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0051332f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00513331:; BB(0x00513331);
    /* 00513331: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00513334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513337: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051333d: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513342: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00513345: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 0051334a: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051334e: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513352: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513353: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x513358u); f_00608470();
    /* 00513358: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051335b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051335e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513361: jge 0x51336b */ if ((fS==fO)) goto L_0051336b;
L_00513363:; BB(0x00513363);
    /* 00513363: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 00513369: jmp 0x513331 */ goto L_00513331;
L_0051336b:; BB(0x0051336b);
    /* 0051336b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051336e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513371: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00513374: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00513377: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051337e: mov esp, ebp */ r_esp = r_ebp;
    /* 00513380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513381: ret  */ FN_RET(0x00513125); r_esp += 4; return;
L_00513382:; BB(0x00513382);
    /* 00513382: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00513384: jmp 0x51317c */ f_0051317c(); return;
}

void f_0051317c(void) /* _WinMain@16_37_0 */
{
    FN_ENTER(0x0051317c);
    /* 0051317c: mov dword ptr [0xa72d18], eax */ W32((u32)(0xa72d18u), r_eax);
    /* 00513181: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00513188: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 0051318d: mov ebx, dword ptr [0x9bb334] */ r_ebx = R32((u32)(0x9bb334u));
    /* 00513193: mov ecx, dword ptr [0xa72d14] */ r_ecx = R32((u32)(0xa72d14u));
    /* 00513199: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051319b: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005131a3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131a9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131ad: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131b0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131b5u); f_00579a28();
    /* 005131b5: mov eax, dword ptr [0xa72d0c] */ r_eax = R32((u32)(0xa72d0cu));
    /* 005131ba: mov ebx, dword ptr [0x9bb344] */ r_ebx = R32((u32)(0x9bb344u));
    /* 005131c0: mov ecx, dword ptr [0xa72d18] */ r_ecx = R32((u32)(0xa72d18u));
    /* 005131c6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005131c8: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005131ce: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005131d0: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005131d6: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131da: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005131dd: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5131e2u); f_00579a28();
    /* 005131e2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131e4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131e9u); f_008581c5();
    /* 005131e9: mov dword ptr [0xa72d08], eax */ W32((u32)(0xa72d08u), r_eax);
    /* 005131ee: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5131f5u); f_008581c5();
    /* 005131f5: mov dword ptr [0xa72d04], eax */ W32((u32)(0xa72d04u), r_eax);
    /* 005131fa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005131fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x513201u); f_008581c5();
    /* 00513201: mov dword ptr [0xa72d00], eax */ W32((u32)(0xa72d00u), r_eax);
    /* 00513206: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00513208: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51320du); f_008581c5();
    /* 0051320d: mov dword ptr [0xa72cfc], eax */ W32((u32)(0xa72cfcu), r_eax);
    /* 00513212: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00513214: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513219u); f_0077a684();
    /* 00513219: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051321f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00513221: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513223: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513228u); f_0077a684();
    /* 00513228: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051322e: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00513230: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513233: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x513238u); f_0077a684();
    /* 00513238: mov edx, dword ptr [0xa72d08] */ r_edx = R32((u32)(0xa72d08u));
    /* 0051323e: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00513240: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513243: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513248u); f_0077a698();
    /* 00513248: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051324e: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00513250: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513252: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513257u); f_0077a698();
    /* 00513257: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051325d: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051325f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513262: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x513267u); f_0077a698();
    /* 00513267: mov edx, dword ptr [0xa72d04] */ r_edx = R32((u32)(0xa72d04u));
    /* 0051326d: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051326f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00513272: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513277u); f_0077a6b4();
    /* 00513277: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051327d: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051327f: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00513281: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513286u); f_0077a6b4();
    /* 00513286: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051328c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051328e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00513291: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x513296u); f_0077a6b4();
    /* 00513296: mov edx, dword ptr [0xa72d00] */ r_edx = R32((u32)(0xa72d00u));
    /* 0051329c: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051329e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132a1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132a6u); f_0077a6cc();
    /* 005132a6: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ac: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 005132ae: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005132b0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132b5u); f_0077a6cc();
    /* 005132b5: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132bb: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005132bd: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005132c0: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5132c5u); f_0077a6cc();
    /* 005132c5: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005132c8: mov edx, dword ptr [0xa72cfc] */ r_edx = R32((u32)(0xa72cfcu));
    /* 005132ce: mov esi, dword ptr [0x9205b4] */ r_esi = R32((u32)(0x9205b4u));
    /* 005132d4: movzx edi, word ptr [0x9205b8] */ r_edi = (u32)R16((u32)(0x9205b8u));
    /* 005132db: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005132de: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 005132e4: mov dword ptr [0xa72d10], 0 */ W32((u32)(0xa72d10u), 0x0u);
    /* 005132ee: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005132f1: mov eax, 0x2f */ r_eax = 0x2fu;
    /* 005132f6: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005132fa: movzx eax, word ptr [0x9205ba] */ r_eax = (u32)R16((u32)(0x9205bau));
    /* 00513301: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 00513305: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0051330a: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0051330e: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00513312: movzx eax, word ptr [0x9205bc] */ r_eax = (u32)R16((u32)(0x9205bcu));
    /* 00513319: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 0051331d: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00513323: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00513326: mov ebx, 0x31 */ r_ebx = 0x31u;
    /* 0051332b: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0051332f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00513331:; BB(0x00513331);
    /* 00513331: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00513334: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00513335: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00513337: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0051333d: push 0x40f00000 */ { u32 v = 0x40f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00513342: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00513345: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 0051334a: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051334e: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00513352: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00513353: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x513358u); f_00608470();
    /* 00513358: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051335b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0051335e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00513361: jge 0x51336b */ if ((fS==fO)) goto L_0051336b;
L_00513363:; BB(0x00513363);
    /* 00513363: mov edx, dword ptr [0xa72d0c] */ r_edx = R32((u32)(0xa72d0cu));
    /* 00513369: jmp 0x513331 */ goto L_00513331;
L_0051336b:; BB(0x0051336b);
    /* 0051336b: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0051336e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00513371: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00513374: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00513377: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0051337e: mov esp, ebp */ r_esp = r_ebp;
    /* 00513380: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00513381: ret  */ FN_RET(0x0051317c); r_esp += 4; return;
}

void f_00513392(void) /* _WinMain@16_37 */
{
    FN_ENTER(0x00513392);
    /* 00513392: jmp 0x5130ce */ f_005130ce(); return;
}

void f_0051619e(void) /* _WinMain@16_38_1 */
{
    FN_ENTER(0x0051619e);
    /* 0051619e: mov dword ptr [0xa72d38], eax */ W32((u32)(0xa72d38u), r_eax);
    /* 005161a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005161aa: jmp 0x516201 */ goto L_00516201;
L_00516201:; BB(0x00516201);
    /* 00516201: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00516208: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051620a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x51620fu); f_008581c5();
    /* 0051620f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00516210: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00516213: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00516215: je 0x516454 */ if (fZ) goto L_00516454;
L_0051621b:; BB(0x0051621b);
    /* 0051621b: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00516222: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00516229: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0051622c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051622e: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 00516233: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00516238: push dword ptr [0xa72d24] */ { u32 v = R32((u32)(0xa72d24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051623e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x516243u); f_005795a0();
    /* 00516243: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00516246: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_0051624d:; BB(0x0051624d);
    /* 0051624d: mov dword ptr [0xa72d4c], eax */ W32((u32)(0xa72d4cu), r_eax);
    /* 00516252: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00516259: mov eax, dword ptr [0xa72d38] */ r_eax = R32((u32)(0xa72d38u));
    /* 0051625e: mov edi, dword ptr [0x9bb454] */ r_edi = R32((u32)(0x9bb454u));
    /* 00516264: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0051626a: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 00516270: lea ebx, [ebp - 0x4c] */ r_ebx = (u32)(r_ebp+0xffffffb4u);
    /* 00516273: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 0051627a: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 0051627d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051627e: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00516285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00516286: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0051628d: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 0051628f: mov dword ptr [ebp - 0x40], 0xc1a00000 */ W32((u32)(r_ebp+0xffffffc0u), 0xc1a00000u);
    /* 00516296: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0051629d: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005162a4: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005162a8: push dword ptr [ecx + 0x18] */ { u32 v = R32((u32)(r_ecx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005162ab: mov ecx, dword ptr [0xa72d4c] */ r_ecx = R32((u32)(0xa72d4cu));
    /* 005162b1: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5162b6u); f_00579be8();
    /* 005162b6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162b8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162bdu); f_008581c5();
    /* 005162bd: mov dword ptr [0xa72d48], eax */ W32((u32)(0xa72d48u), r_eax);
    /* 005162c2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005162c4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162c9u); f_008581c5();
    /* 005162c9: mov dword ptr [0xa72d44], eax */ W32((u32)(0xa72d44u), r_eax);
    /* 005162ce: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162d0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162d5u); f_008581c5();
    /* 005162d5: mov dword ptr [0xa72d40], eax */ W32((u32)(0xa72d40u), r_eax);
    /* 005162da: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005162dc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5162e1u); f_008581c5();
    /* 005162e1: mov dword ptr [0xa72d3c], eax */ W32((u32)(0xa72d3cu), r_eax);
    /* 005162e6: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 005162e8: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5162edu); f_0077a684();
    /* 005162ed: mov edx, dword ptr [0xa72d48] */ r_edx = R32((u32)(0xa72d48u));
    /* 005162f3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005162f5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005162f7: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5162fcu); f_0077a684();
    /* 005162fc: mov edx, dword ptr [0xa72d48] */ r_edx = R32((u32)(0xa72d48u));
    /* 00516302: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516304: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516307: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51630cu); f_0077a698();
    /* 0051630c: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516312: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516314: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516316: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51631bu); f_0077a698();
    /* 0051631b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516321: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00516323: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516326: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51632bu); f_0077a698();
    /* 0051632b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516331: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00516333: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00516336: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51633bu); f_0077a698();
    /* 0051633b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516341: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00516343: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00516346: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51634bu); f_0077a698();
    /* 0051634b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516351: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00516353: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00516356: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x51635bu); f_0077a698();
    /* 0051635b: mov edx, dword ptr [0xa72d44] */ r_edx = R32((u32)(0xa72d44u));
    /* 00516361: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516363: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00516366: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51636bu); f_0077a6b4();
    /* 0051636b: mov edx, dword ptr [0xa72d40] */ r_edx = R32((u32)(0xa72d40u));
    /* 00516371: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516373: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516375: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x51637au); f_0077a6b4();
    /* 0051637a: mov edx, dword ptr [0xa72d40] */ r_edx = R32((u32)(0xa72d40u));
    /* 00516380: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00516382: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00516385: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x51638au); f_0077a6cc();
    /* 0051638a: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 00516390: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00516392: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00516394: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x516399u); f_0077a6cc();
    /* 00516399: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051639c: mov edx, dword ptr [0xa72d3c] */ r_edx = R32((u32)(0xa72d3cu));
    /* 005163a2: mov esi, dword ptr [0x920810] */ r_esi = R32((u32)(0x920810u));
    /* 005163a8: movzx edi, word ptr [0x920814] */ r_edi = (u32)R16((u32)(0x920814u));
    /* 005163af: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005163b2: mov edx, dword ptr [0xa72d38] */ r_edx = R32((u32)(0xa72d38u));
    /* 005163b8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005163bb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005163bf: mov eax, 0x32 */ r_eax = 0x32u;
    /* 005163c4: mov ecx, 0x33 */ r_ecx = 0x33u;
    /* 005163c9: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005163cd: movzx eax, word ptr [0x920816] */ r_eax = (u32)R16((u32)(0x920816u));
    /* 005163d4: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005163d8: mov ebx, 0x34 */ r_ebx = 0x34u;
    /* 005163dd: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005163e1: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005163e5: movzx eax, word ptr [0x920818] */ r_eax = (u32)R16((u32)(0x920818u));
    /* 005163ec: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005163f0: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005163f6: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005163f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005163fb:; BB(0x005163fb);
    /* 005163fb: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005163fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005163ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00516401: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00516407: push dword ptr [0x9bb598] */ { u32 v = R32((u32)(0x9bb598u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051640d: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00516410: movsx esi, word ptr [ebp + ecx - 0x34] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffccu));
    /* 00516415: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00516419: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051641d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051641e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x516423u); f_00608470();
    /* 00516423: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00516426: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00516429: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051642c: jge 0x516436 */ if ((fS==fO)) goto L_00516436;
L_0051642e:; BB(0x0051642e);
    /* 0051642e: mov edx, dword ptr [0xa72d38] */ r_edx = R32((u32)(0xa72d38u));
    /* 00516434: jmp 0x5163fb */ goto L_005163fb;
L_00516436:; BB(0x00516436);
    /* 00516436: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00516439: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0051643c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0051643f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00516442: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00516449: mov esp, ebp */ r_esp = r_ebp;
    /* 0051644b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051644c: ret  */ FN_RET(0x0051619e); r_esp += 4; return;
L_00516454:; BB(0x00516454);
    /* 00516454: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00516456: jmp 0x51624d */ goto L_0051624d;
}

void f_0051644f(void) /* _WinMain@16_38 */
{
    FN_ENTER(0x0051644f);
    /* 0051644f: jmp 0x51619e */ f_0051619e(); return;
}

void f_0052564a(void) /* _WinMain@16_39_1 */
{
    FN_ENTER(0x0052564a);
    /* 0052564a: mov dword ptr [0xa72edc], eax */ W32((u32)(0xa72edcu), r_eax);
    /* 0052564f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00525656: mov dword ptr [0xa72ef8], 0 */ W32((u32)(0xa72ef8u), 0x0u);
    /* 00525660: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00525662: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525664: mov dword ptr [0xa72ef4], 0 */ W32((u32)(0xa72ef4u), 0x0u);
    /* 0052566e: mov dword ptr [0xa72f14], eax */ W32((u32)(0xa72f14u), r_eax);
    /* 00525673: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00525676: mov dword ptr [0xa72ef0], 0 */ W32((u32)(0xa72ef0u), 0x0u);
    /* 00525680: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525685u); f_008581c5();
    /* 00525685: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00525686: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00525689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052568b: je 0x52584f */ if (fZ) goto L_0052584f;
L_00525691:; BB(0x00525691);
    /* 00525691: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00525698: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0052569f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005256a2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005256a4: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005256a9: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005256ae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005256b0: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5256b5u); f_005795a0();
    /* 005256b5: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005256b8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005256bf: mov dword ptr [0xa72f18], eax */ W32((u32)(0xa72f18u), r_eax);
    /* 005256c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005256cb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005256d2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005256d4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5256d9u); f_008581c5();
    /* 005256d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005256da: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005256dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005256df: je 0x525848 */ if (fZ) goto L_00525848;
L_005256e5:; BB(0x005256e5);
    /* 005256e5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005256ec: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005256f3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005256f6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005256f8: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005256fd: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525704: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x525709u); f_005795a0();
    /* 00525709: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0052570c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00525713: mov dword ptr [0xa72f1c], eax */ W32((u32)(0xa72f1cu), r_eax);
    /* 00525718: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052571f: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525724: mov ebx, dword ptr [0x9bbac4] */ r_ebx = R32((u32)(0x9bbac4u));
    /* 0052572a: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 00525730: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00525732: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525738: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052573a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00525740: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525744: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525747: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x52574cu); f_00579a28();
    /* 0052574c: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525751: mov ebx, dword ptr [0x9bbad4] */ r_ebx = R32((u32)(0x9bbad4u));
    /* 00525757: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 0052575d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052575f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525765: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525767: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0052576d: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525771: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525774: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x525779u); f_00579a28();
    /* 00525779: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052577b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525780u); f_008581c5();
    /* 00525780: mov dword ptr [0xa72ee8], eax */ W32((u32)(0xa72ee8u), r_eax);
    /* 00525785: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525787: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x52578cu); f_0077a684();
    /* 0052578c: mov dword ptr [0xa72eec], eax */ W32((u32)(0xa72eecu), r_eax);
    /* 00525791: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00525793: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x525798u); f_0077a698();
    /* 00525798: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 0052579e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 005257a0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005257a2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257a7u); f_0077a698();
    /* 005257a7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257ad: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005257af: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005257b2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257b7u); f_0077a698();
    /* 005257b7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257bd: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005257c2: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5257c7u); f_0077a6b4();
    /* 005257c7: mov dword ptr [0xa72ee4], eax */ W32((u32)(0xa72ee4u), r_eax);
    /* 005257cc: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257ce: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5257d3u); f_0077a6cc();
    /* 005257d3: movzx edx, word ptr [0x921744] */ r_edx = (u32)R16((u32)(0x921744u));
    /* 005257da: movzx ecx, word ptr [0x921746] */ r_ecx = (u32)R16((u32)(0x921746u));
    /* 005257e1: movzx ebx, word ptr [0x921748] */ r_ebx = (u32)R16((u32)(0x921748u));
    /* 005257e8: mov edi, dword ptr [0xa72edc] */ r_edi = R32((u32)(0xa72edcu));
    /* 005257ee: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005257f4: mov dword ptr [0xa72ee0], eax */ W32((u32)(0xa72ee0u), r_eax);
    /* 005257f9: mov eax, dword ptr [0x921740] */ r_eax = R32((u32)(0x921740u));
    /* 005257fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00525801: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00525805: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0052580b: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0052580f: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00525813: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00525816: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00525819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052581a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052581c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525821: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00525824: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525827: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00525829: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x52582eu); f_00608470();
    /* 0052582e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525831: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525834: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525837: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052583a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052583d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525844: mov esp, ebp */ r_esp = r_ebp;
    /* 00525846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525847: ret  */ FN_RET(0x0052564a); r_esp += 4; return;
L_00525848:; BB(0x00525848);
    /* 00525848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052584a: jmp 0x525713 */ f_00525713(); return;
L_0052584f:; BB(0x0052584f);
    /* 0052584f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00525851: jmp 0x5256bf */ f_005256bf(); return;
}

void f_005256bf(void) /* _WinMain@16_40_0 */
{
    FN_ENTER(0x005256bf);
    /* 005256bf: mov dword ptr [0xa72f18], eax */ W32((u32)(0xa72f18u), r_eax);
    /* 005256c4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005256cb: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005256d2: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005256d4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5256d9u); f_008581c5();
    /* 005256d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005256da: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005256dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005256df: je 0x525848 */ if (fZ) goto L_00525848;
L_005256e5:; BB(0x005256e5);
    /* 005256e5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005256ec: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005256f3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005256f6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005256f8: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005256fd: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525702: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00525704: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x525709u); f_005795a0();
    /* 00525709: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0052570c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00525713: mov dword ptr [0xa72f1c], eax */ W32((u32)(0xa72f1cu), r_eax);
    /* 00525718: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052571f: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525724: mov ebx, dword ptr [0x9bbac4] */ r_ebx = R32((u32)(0x9bbac4u));
    /* 0052572a: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 00525730: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00525732: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525738: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052573a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00525740: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525744: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525747: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x52574cu); f_00579a28();
    /* 0052574c: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525751: mov ebx, dword ptr [0x9bbad4] */ r_ebx = R32((u32)(0x9bbad4u));
    /* 00525757: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 0052575d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052575f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525765: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525767: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0052576d: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525771: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525774: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x525779u); f_00579a28();
    /* 00525779: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052577b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525780u); f_008581c5();
    /* 00525780: mov dword ptr [0xa72ee8], eax */ W32((u32)(0xa72ee8u), r_eax);
    /* 00525785: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525787: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x52578cu); f_0077a684();
    /* 0052578c: mov dword ptr [0xa72eec], eax */ W32((u32)(0xa72eecu), r_eax);
    /* 00525791: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00525793: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x525798u); f_0077a698();
    /* 00525798: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 0052579e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 005257a0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005257a2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257a7u); f_0077a698();
    /* 005257a7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257ad: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005257af: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005257b2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257b7u); f_0077a698();
    /* 005257b7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257bd: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005257c2: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5257c7u); f_0077a6b4();
    /* 005257c7: mov dword ptr [0xa72ee4], eax */ W32((u32)(0xa72ee4u), r_eax);
    /* 005257cc: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257ce: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5257d3u); f_0077a6cc();
    /* 005257d3: movzx edx, word ptr [0x921744] */ r_edx = (u32)R16((u32)(0x921744u));
    /* 005257da: movzx ecx, word ptr [0x921746] */ r_ecx = (u32)R16((u32)(0x921746u));
    /* 005257e1: movzx ebx, word ptr [0x921748] */ r_ebx = (u32)R16((u32)(0x921748u));
    /* 005257e8: mov edi, dword ptr [0xa72edc] */ r_edi = R32((u32)(0xa72edcu));
    /* 005257ee: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005257f4: mov dword ptr [0xa72ee0], eax */ W32((u32)(0xa72ee0u), r_eax);
    /* 005257f9: mov eax, dword ptr [0x921740] */ r_eax = R32((u32)(0x921740u));
    /* 005257fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00525801: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00525805: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0052580b: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0052580f: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00525813: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00525816: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00525819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052581a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052581c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525821: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00525824: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525827: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00525829: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x52582eu); f_00608470();
    /* 0052582e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525831: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525834: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525837: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052583a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052583d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525844: mov esp, ebp */ r_esp = r_ebp;
    /* 00525846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525847: ret  */ FN_RET(0x005256bf); r_esp += 4; return;
L_00525848:; BB(0x00525848);
    /* 00525848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0052584a: jmp 0x525713 */ f_00525713(); return;
}

void f_00525713(void) /* _WinMain@16_39_0 */
{
    FN_ENTER(0x00525713);
    /* 00525713: mov dword ptr [0xa72f1c], eax */ W32((u32)(0xa72f1cu), r_eax);
    /* 00525718: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052571f: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525724: mov ebx, dword ptr [0x9bbac4] */ r_ebx = R32((u32)(0x9bbac4u));
    /* 0052572a: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 00525730: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00525732: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525738: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0052573a: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00525740: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525744: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525747: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x52574cu); f_00579a28();
    /* 0052574c: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00525751: mov ebx, dword ptr [0x9bbad4] */ r_ebx = R32((u32)(0x9bbad4u));
    /* 00525757: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 0052575d: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052575f: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00525765: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00525767: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0052576d: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525771: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525774: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x525779u); f_00579a28();
    /* 00525779: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0052577b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x525780u); f_008581c5();
    /* 00525780: mov dword ptr [0xa72ee8], eax */ W32((u32)(0xa72ee8u), r_eax);
    /* 00525785: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00525787: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x52578cu); f_0077a684();
    /* 0052578c: mov dword ptr [0xa72eec], eax */ W32((u32)(0xa72eecu), r_eax);
    /* 00525791: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00525793: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x525798u); f_0077a698();
    /* 00525798: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 0052579e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 005257a0: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005257a2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257a7u); f_0077a698();
    /* 005257a7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257ad: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005257af: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005257b2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5257b7u); f_0077a698();
    /* 005257b7: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 005257bd: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005257c2: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5257c7u); f_0077a6b4();
    /* 005257c7: mov dword ptr [0xa72ee4], eax */ W32((u32)(0xa72ee4u), r_eax);
    /* 005257cc: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 005257ce: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5257d3u); f_0077a6cc();
    /* 005257d3: movzx edx, word ptr [0x921744] */ r_edx = (u32)R16((u32)(0x921744u));
    /* 005257da: movzx ecx, word ptr [0x921746] */ r_ecx = (u32)R16((u32)(0x921746u));
    /* 005257e1: movzx ebx, word ptr [0x921748] */ r_ebx = (u32)R16((u32)(0x921748u));
    /* 005257e8: mov edi, dword ptr [0xa72edc] */ r_edi = R32((u32)(0xa72edcu));
    /* 005257ee: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005257f4: mov dword ptr [0xa72ee0], eax */ W32((u32)(0xa72ee0u), r_eax);
    /* 005257f9: mov eax, dword ptr [0x921740] */ r_eax = R32((u32)(0x921740u));
    /* 005257fe: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00525801: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00525805: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0052580b: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0052580f: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00525813: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00525816: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00525819: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052581a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052581c: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00525821: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00525824: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00525827: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00525829: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x52582eu); f_00608470();
    /* 0052582e: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00525831: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00525834: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00525837: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0052583a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0052583d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00525844: mov esp, ebp */ r_esp = r_ebp;
    /* 00525846: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00525847: ret  */ FN_RET(0x00525713); r_esp += 4; return;
}

void f_00525858(void) /* _WinMain@16_39 */
{
    FN_ENTER(0x00525858);
    /* 00525858: jmp 0x52564a */ f_0052564a(); return;
}

void f_0052fcfe(void) /* _WinMain@16_40 */
{
    FN_ENTER(0x0052fcfe);
    /* 0052fcfe: jmp 0x52fdd5 */ f_0052fdd5(); return;
}

void f_0052fdd5(void) /* _WinMain@16_40_1 */
{
    FN_ENTER(0x0052fdd5);
    /* 0052fdd5: mov ecx, dword ptr [edi + 0x41c] */ r_ecx = R32((u32)(r_edi+0x41cu));
    /* 0052fddb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fddd: je 0x52fdfa */ if (fZ) goto L_0052fdfa;
L_0052fddf:; BB(0x0052fddf);
    /* 0052fddf: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fde4u); f_008173b4();
    /* 0052fde4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fde6: je 0x52fdfa */ if (fZ) goto L_0052fdfa;
L_0052fde8:; BB(0x0052fde8);
    /* 0052fde8: mov ecx, dword ptr [edi + 0x41c] */ r_ecx = R32((u32)(r_edi+0x41cu));
    /* 0052fdee: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fdf4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fdf5: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fdfau); f_00508db8();
L_0052fdfa:; BB(0x0052fdfa);
    /* 0052fdfa: mov ecx, dword ptr [edi + 0x420] */ r_ecx = R32((u32)(r_edi+0x420u));
    /* 0052fe00: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe02: je 0x52fe1f */ if (fZ) goto L_0052fe1f;
L_0052fe04:; BB(0x0052fe04);
    /* 0052fe04: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fe09u); f_008173b4();
    /* 0052fe09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe0b: je 0x52fe1f */ if (fZ) goto L_0052fe1f;
L_0052fe0d:; BB(0x0052fe0d);
    /* 0052fe0d: mov ecx, dword ptr [edi + 0x420] */ r_ecx = R32((u32)(r_edi+0x420u));
    /* 0052fe13: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fe19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe1a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fe1fu); f_00508db8();
L_0052fe1f:; BB(0x0052fe1f);
    /* 0052fe1f: mov ecx, dword ptr [edi + 0x424] */ r_ecx = R32((u32)(r_edi+0x424u));
    /* 0052fe25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe27: je 0x52fe44 */ if (fZ) goto L_0052fe44;
L_0052fe29:; BB(0x0052fe29);
    /* 0052fe29: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52fe2eu); f_008173b4();
    /* 0052fe2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe30: je 0x52fe44 */ if (fZ) goto L_0052fe44;
L_0052fe32:; BB(0x0052fe32);
    /* 0052fe32: mov ecx, dword ptr [edi + 0x424] */ r_ecx = R32((u32)(r_edi+0x424u));
    /* 0052fe38: lea eax, [edi + 0x3b8] */ r_eax = (u32)(r_edi+0x3b8u);
    /* 0052fe3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052fe3f: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x52fe44u); f_00508db8();
L_0052fe44:; BB(0x0052fe44);
    /* 0052fe44: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 0052fe4a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052fe4d: jne 0x530077 */ if (!fZ) goto L_00530077;
L_0052fe53:; BB(0x0052fe53);
    /* 0052fe53: jmp 0x53005a */ goto L_0053005a;
L_0053005a:; BB(0x0053005a);
    /* 0053005a: mov ecx, edi */ r_ecx = r_edi;
    /* 0053005c: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x530061u); f_007b6880();
    /* 00530061: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00530063: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00530065: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053006a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053006b: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x530070u); f_00805608();
    /* 00530070: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00530073: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00530074: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00530075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00530076: ret  */ FN_RET(0x0052fdd5); r_esp += 4; return;
L_00530077:; BB(0x00530077);
    /* 00530077: mov dword ptr [edi + 0x3a4], 0x1e */ W32((u32)(r_edi+0x3a4u), 0x1eu);
    /* 00530081: mov eax, 3 */ r_eax = 0x3u;
    /* 00530086: mov word ptr [edi + 0x330], ax */ W16((u32)(r_edi+0x330u), (u16)r_eax);
    /* 0053008d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0053008f: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
    /* 00530096: mov ecx, edi */ r_ecx = r_edi;
    /* 00530098: call 0x53140c */ r_esp -= 4; W32(r_esp, 0x53009du); f_0053140c();
    /* 0053009d: jmp 0x53005a */ goto L_0053005a;
}

void f_005312b0(void) /* _WinMain@16_41_0 */
{
    FN_ENTER(0x005312b0);
    /* 005312b0: mov dword ptr [0xa7337c], eax */ W32((u32)(0xa7337cu), r_eax);
    /* 005312b5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005312bc: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312be: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5312c3u); f_0077a684();
    /* 005312c3: mov dword ptr [0xa73368], eax */ W32((u32)(0xa73368u), r_eax);
    /* 005312c8: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312ca: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312cfu); f_0077a698();
    /* 005312cf: mov dword ptr [0xa73358], eax */ W32((u32)(0xa73358u), r_eax);
    /* 005312d4: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 005312d6: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312dbu); f_0077a698();
    /* 005312db: mov dword ptr [0xa7335c], eax */ W32((u32)(0xa7335cu), r_eax);
    /* 005312e0: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005312e2: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312e7u); f_0077a698();
    /* 005312e7: mov dword ptr [0xa73360], eax */ W32((u32)(0xa73360u), r_eax);
    /* 005312ec: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 005312ee: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5312f3u); f_0077a698();
    /* 005312f3: mov dword ptr [0xa73364], eax */ W32((u32)(0xa73364u), r_eax);
    /* 005312f8: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005312fa: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5312ffu); f_0077a6b4();
    /* 005312ff: mov dword ptr [0xa73354], eax */ W32((u32)(0xa73354u), r_eax);
    /* 00531304: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00531306: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x53130bu); f_0077a6cc();
    /* 0053130b: movzx edx, word ptr [0x9224bc] */ r_edx = (u32)R16((u32)(0x9224bcu));
    /* 00531312: movzx ecx, word ptr [0x9224be] */ r_ecx = (u32)R16((u32)(0x9224beu));
    /* 00531319: movzx ebx, word ptr [0x9224c0] */ r_ebx = (u32)R16((u32)(0x9224c0u));
    /* 00531320: mov edi, dword ptr [0xa7337c] */ r_edi = R32((u32)(0xa7337cu));
    /* 00531326: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0053132c: mov dword ptr [0xa7336c], eax */ W32((u32)(0xa7336cu), r_eax);
    /* 00531331: mov eax, dword ptr [0x9224b8] */ r_eax = R32((u32)(0x9224b8u));
    /* 00531336: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00531339: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0053133d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00531343: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00531347: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0053134b: mov dword ptr [0xa733b0], 0 */ W32((u32)(0xa733b0u), 0x0u);
    /* 00531355: mov dword ptr [0xa733ac], 0 */ W32((u32)(0xa733acu), 0x0u);
    /* 0053135f: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00531362: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00531365: mov dword ptr [0xa733a8], 0 */ W32((u32)(0xa733a8u), 0x0u);
    /* 0053136f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00531370: mov dword ptr [0xa733a4], 0 */ W32((u32)(0xa733a4u), 0x0u);
    /* 0053137a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053137c: push dword ptr [0x9bc4f4] */ { u32 v = R32((u32)(0x9bc4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00531382: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00531385: mov dword ptr [0xa733a0], 0 */ W32((u32)(0xa733a0u), 0x0u);
    /* 0053138f: mov dword ptr [0xa7339c], 0 */ W32((u32)(0xa7339cu), 0x0u);
    /* 00531399: mov dword ptr [0xa73398], 0 */ W32((u32)(0xa73398u), 0x0u);
    /* 005313a3: mov dword ptr [0xa73394], 0 */ W32((u32)(0xa73394u), 0x0u);
    /* 005313ad: mov dword ptr [0xa73390], 0 */ W32((u32)(0xa73390u), 0x0u);
    /* 005313b7: mov dword ptr [0xa7338c], 0 */ W32((u32)(0xa7338cu), 0x0u);
    /* 005313c1: mov dword ptr [0xa73388], 0 */ W32((u32)(0xa73388u), 0x0u);
    /* 005313cb: mov dword ptr [0xa73384], 0 */ W32((u32)(0xa73384u), 0x0u);
    /* 005313d5: mov dword ptr [0xa73380], 0 */ W32((u32)(0xa73380u), 0x0u);
    /* 005313df: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005313e2: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 005313e4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5313e9u); f_00608470();
    /* 005313e9: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005313ec: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005313ef: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005313f2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005313f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005313f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005313ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00531401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00531402: ret  */ FN_RET(0x005312b0); r_esp += 4; return;
}

void f_00531405(void) /* _WinMain@16_41 */
{
    FN_ENTER(0x00531405);
    /* 00531405: jmp 0x5312b0 */ f_005312b0(); return;
}

void f_00531878(void) /* _WinMain@16_42_0 */
{
    FN_ENTER(0x00531878);
    /* 00531878: mov dword ptr [0xa73480], eax */ W32((u32)(0xa73480u), r_eax);
    /* 0053187d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00531884: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 0053188a: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 0053188d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053188f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00531892:; BB(0x00531892);
    /* 00531892: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00531895: mov ebx, dword ptr [eax*4 + 0x9bc664] */ r_ebx = R32((u32)(r_eax*4+0x9bc664u));
    /* 0053189c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0053189f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005318a1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005318a3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005318a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318a8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005318aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318ae: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005318b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318b2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318b4: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_005318b7:; BB(0x005318b7);
    /* 005318b7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005318ba: lea edx, [eax + ebx] */ r_edx = (u32)(r_eax+r_ebx);
    /* 005318bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005318be: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005318bf: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5318c4u); f_0078e934();
    /* 005318c4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005318c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005318c9: je 0x5318e1 */ if (fZ) goto L_005318e1;
L_005318cb:; BB(0x005318cb);
    /* 005318cb: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005318cd: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005318d0: jne 0x5318e1 */ if (!fZ) goto L_005318e1;
L_005318d2:; BB(0x005318d2);
    /* 005318d2: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005318d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005318d7: mov dword ptr [edx + ecx*4 + 0xa733c0], eax */ W32((u32)(r_edx+r_ecx*4+0xa733c0u), r_eax);
    /* 005318de: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005318e1:; BB(0x005318e1);
    /* 005318e1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005318e4: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005318e7: jl 0x5318b7 */ if ((fS!=fO)) goto L_005318b7;
L_005318e9:; BB(0x005318e9);
    /* 005318e9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005318ec: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005318ef: mov dword ptr [eax + edi*4 + 0xa733c0], 0 */ W32((u32)(r_eax+r_edi*4+0xa733c0u), 0x0u);
    /* 005318fa: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005318fd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00531900: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531903: jl 0x531892 */ if ((fS!=fO)) goto L_00531892;
L_00531905:; BB(0x00531905);
    /* 00531905: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00531907:; BB(0x00531907);
    /* 00531907: mov ecx, dword ptr [0xa73480] */ r_ecx = R32((u32)(0xa73480u));
    /* 0053190d: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00531910: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00531913: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531915: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00531917: movsx edx, word ptr [eax + 0x9bc584] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x9bc584u));
    /* 0053191e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053191f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x531924u); f_005b8610();
    /* 00531924: movsx edx, word ptr [ebx*8 + 0x9bc586] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*8+0x9bc586u));
    /* 0053192c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0053192d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053192e: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x531933u); f_0078e934();
    /* 00531933: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531936: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00531939: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0053193c: mov dword ptr [ebx*8 + 0x9bc580], edx */ W32((u32)(r_ebx*8+0x9bc580u), r_edx);
    /* 00531943: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00531946: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00531949: jl 0x531907 */ if ((fS!=fO)) goto L_00531907;
L_0053194b:; BB(0x0053194b);
    /* 0053194b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053194d:; BB(0x0053194d);
    /* 0053194d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053194f: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x531954u); f_0077a684();
    /* 00531954: mov dword ptr [ebx*4 + 0xa734c4], eax */ W32((u32)(r_ebx*4+0xa734c4u), r_eax);
    /* 0053195b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053195d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x531962u); f_0077a698();
    /* 00531962: mov dword ptr [ebx*4 + 0xa734bc], eax */ W32((u32)(r_ebx*4+0xa734bcu), r_eax);
    /* 00531969: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0053196b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x531970u); f_0077a6b4();
    /* 00531970: mov dword ptr [ebx*4 + 0xa734b4], eax */ W32((u32)(r_ebx*4+0xa734b4u), r_eax);
    /* 00531977: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00531979: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x53197eu); f_0077a6cc();
    /* 0053197e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00531981: mov dword ptr [ebx*4 + 0xa734ac], eax */ W32((u32)(r_ebx*4+0xa734acu), r_eax);
    /* 00531988: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053198b: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053198e: jl 0x53194d */ if ((fS!=fO)) goto L_0053194d;
L_00531990:; BB(0x00531990);
    /* 00531990: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00531992: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x531997u); f_0077a684();
    /* 00531997: mov dword ptr [0xa734e8], eax */ W32((u32)(0xa734e8u), r_eax);
    /* 0053199c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0053199e: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5319a3u); f_0077a698();
    /* 005319a3: mov dword ptr [0xa734e4], eax */ W32((u32)(0xa734e4u), r_eax);
    /* 005319a8: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005319aa: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5319afu); f_0077a6b4();
    /* 005319af: mov dword ptr [0xa734e0], eax */ W32((u32)(0xa734e0u), r_eax);
    /* 005319b4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005319b6: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5319bbu); f_0077a6cc();
    /* 005319bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005319be: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005319c1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005319c4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005319c7: mov dword ptr [0xa734dc], eax */ W32((u32)(0xa734dcu), r_eax);
    /* 005319cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005319cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005319d6: mov esp, ebp */ r_esp = r_ebp;
    /* 005319d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005319d9: ret  */ FN_RET(0x00531878); r_esp += 4; return;
}

void f_005319dc(void) /* _WinMain@16_42 */
{
    FN_ENTER(0x005319dc);
    /* 005319dc: jmp 0x531878 */ f_00531878(); return;
}

void f_00533ff8(void) /* _WinMain@16_43_0 */
{
    FN_ENTER(0x00533ff8);
    /* 00533ff8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00533fff: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00534006: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 0053400b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x534010u); f_005caba4();
    /* 00534010: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00534013: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00534016: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00534019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053401b: je 0x5341f5 */ if (fZ) goto L_005341f5;
L_00534021:; BB(0x00534021);
    /* 00534021: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00534028: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053402f: mov ecx, eax */ r_ecx = r_eax;
    /* 00534031: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00534034: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00534037: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00534038: call 0x5316a4 */ r_esp -= 4; W32(r_esp, 0x53403du); f_005316a4();
    /* 0053403d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00534044: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534047: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0053404a: mov dword ptr [ecx], 0xb01b40 */ W32((u32)(r_ecx), 0xb01b40u);
    /* 00534050: mov eax, dword ptr [0x9bc740] */ r_eax = R32((u32)(0x9bc740u));
    /* 00534055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00534056: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00534059: call dword ptr [0xb01c8c] */ { u32 t = R32((u32)(0xb01c8cu)); r_esp -= 4; W32(r_esp, 0x53405fu); call_ind(t); }
    /* 0053405f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534062: mov esi, dword ptr [0xa73480] */ r_esi = R32((u32)(0xa73480u));
    /* 00534068: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053406a: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0053406d: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00534070: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00534073: push 0x9bc77c */ { u32 v = 0x9bc77cu; r_esp -= 4; W32(r_esp, v); }
    /* 00534078: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0053407e: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 00534084: mov dword ptr [ecx + 0x2ac], ebx */ W32((u32)(r_ecx+0x2acu), r_ebx);
    /* 0053408a: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 00534090: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 00534096: mov dword ptr [ecx + 0x2a0], ebx */ W32((u32)(r_ecx+0x2a0u), r_ebx);
    /* 0053409c: mov edi, dword ptr [esi + 0x430] */ r_edi = R32((u32)(r_esi+0x430u));
    /* 005340a2: mov dword ptr [ecx + 0xdc], edi */ W32((u32)(r_ecx+0xdcu), r_edi);
    /* 005340a8: mov dword ptr [ecx + 0xd8], 0x9bc680 */ W32((u32)(r_ecx+0xd8u), 0x9bc680u);
    /* 005340b2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5340b7u); f_007b9a88();
    /* 005340b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005340ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005340bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005340bd: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005340c4: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5340c9u); f_007aa4c8();
    /* 005340c9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005340cc: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005340d3: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005340da: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 005340e1: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005340e8: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 005340ef: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 005340f6: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 005340fd: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x534102u); f_0078730c();
    /* 00534102: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534105: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x53410au); f_00786bbc();
    /* 0053410a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053410d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00534110: mov eax, dword ptr [edx + 0x390] */ r_eax = R32((u32)(r_edx+0x390u));
    /* 00534116: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0053411b: mov dword ptr [edx + 0x390], eax */ W32((u32)(r_edx+0x390u), r_eax);
    /* 00534121: mov dword ptr [edx + 0x3c0], 0 */ W32((u32)(r_edx+0x3c0u), 0x0u);
    /* 0053412b: mov dword ptr [edx + 0x3c4], 0 */ W32((u32)(r_edx+0x3c4u), 0x0u);
    /* 00534135: movsx ebx, word ptr [ecx + 0xa] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0xau));
    /* 00534139: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053413b: je 0x534144 */ if (fZ) goto L_00534144;
L_0053413d:; BB(0x0053413d);
    /* 0053413d: mov ecx, edx */ r_ecx = r_edx;
    /* 0053413f: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x534144u); f_0052ca40();
L_00534144:; BB(0x00534144);
    /* 00534144: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00534147: mov dword ptr [ecx + 0x3b4], 0x41c80000 */ W32((u32)(r_ecx+0x3b4u), 0x41c80000u);
    /* 00534151: mov eax, 4 */ r_eax = 0x4u;
    /* 00534156: mov word ptr [ecx + 0x3e0], ax */ W16((u32)(r_ecx+0x3e0u), (u16)r_eax);
    /* 0053415d: mov dword ptr [ecx + 0x3b8], 0x42200000 */ W32((u32)(r_ecx+0x3b8u), 0x42200000u);
    /* 00534167: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0053416c: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 00534172: mov dword ptr [ecx + 0x3bc], 0x41c80000 */ W32((u32)(r_ecx+0x3bcu), 0x41c80000u);
    /* 0053417c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053417e: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 00534184: mov dword ptr [ecx + 0x3d4], edx */ W32((u32)(r_ecx+0x3d4u), r_edx);
    /* 0053418a: mov dword ptr [ecx + 0x3d8], edx */ W32((u32)(r_ecx+0x3d8u), r_edx);
    /* 00534190: call 0x532960 */ r_esp -= 4; W32(r_esp, 0x534195u); f_00532960();
    /* 00534195: push dword ptr [0xa734b4] */ { u32 v = R32((u32)(0xa734b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053419b: push dword ptr [0xa734bc] */ { u32 v = R32((u32)(0xa734bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005341a1: push dword ptr [0xa734c4] */ { u32 v = R32((u32)(0xa734c4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005341a7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005341aa: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5341afu); f_007868f8();
    /* 005341af: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005341b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005341b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005341b6: mov dword ptr [ecx + 0x3e4], eax */ W32((u32)(r_ecx+0x3e4u), r_eax);
    /* 005341bc: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 005341c2: mov dword ptr [ecx + 0x3ec], eax */ W32((u32)(r_ecx+0x3ecu), r_eax);
    /* 005341c8: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 005341ce: call dword ptr [edx + 0x150] */ { u32 t = R32((u32)(r_edx+0x150u)); r_esp -= 4; W32(r_esp, 0x5341d4u); call_ind(t); }
    /* 005341d4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005341db:; BB(0x005341db);
    /* 005341db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005341de: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005341e1: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005341e4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005341e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005341ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005341f1: mov esp, ebp */ r_esp = r_ebp;
    /* 005341f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005341f4: ret  */ FN_RET(0x00533ff8); r_esp += 4; return;
L_005341f5:; BB(0x005341f5);
    /* 005341f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005341f7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005341fa: jmp 0x5341db */ goto L_005341db;
}

void f_00534201(void) /* _WinMain@16_43 */
{
    FN_ENTER(0x00534201);
    /* 00534201: jmp 0x533ff8 */ f_00533ff8(); return;
}

void f_005363c4(void) /* _WinMain@16_44_1 */
{
    FN_ENTER(0x005363c4);
    /* 005363c4: mov dword ptr [0xa7350c], eax */ W32((u32)(0xa7350cu), r_eax);
    /* 005363c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005363d0: mov dword ptr [0x9bc8ec], 0x40e00000 */ W32((u32)(0x9bc8ecu), 0x40e00000u);
    /* 005363da: mov dword ptr [0x9bc918], 0x40e00000 */ W32((u32)(0x9bc918u), 0x40e00000u);
    /* 005363e4: mov dword ptr [0x9bc944], 0x41000000 */ W32((u32)(0x9bc944u), 0x41000000u);
    /* 005363ee: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005363f5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005363f7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5363fcu); f_008581c5();
    /* 005363fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005363fd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536402: je 0x5366a2 */ if (fZ) goto L_005366a2;
L_00536408:; BB(0x00536408);
    /* 00536408: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0053640f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00536416: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536419: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0053641b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536420: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536425: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053642a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x53642fu); f_005795a0();
    /* 0053642f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536432: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00536439: mov dword ptr [0xa73510], eax */ W32((u32)(0xa73510u), r_eax);
    /* 0053643e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00536445: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053644c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0053644e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536453u); f_008581c5();
    /* 00536453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00536454: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536459: je 0x53669b */ if (fZ) goto L_0053669b;
L_0053645f:; BB(0x0053645f);
    /* 0053645f: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00536466: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053646d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536470: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536472: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536477: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053647c: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536481: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x536486u); f_005795a0();
    /* 00536486: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536489: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00536490: mov dword ptr [0xa73514], eax */ W32((u32)(0xa73514u), r_eax);
    /* 00536495: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053649c: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364a1: mov ebx, dword ptr [0x9bc9b4] */ r_ebx = R32((u32)(0x9bc9b4u));
    /* 005364a7: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 005364ad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005364af: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005364b7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364bd: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c4: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364c9u); f_00579a28();
    /* 005364c9: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364ce: mov ebx, dword ptr [0x9bc9c4] */ r_ebx = R32((u32)(0x9bc9c4u));
    /* 005364d4: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 005364da: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005364dc: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005364e4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364ea: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364ee: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364f1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364f6u); f_00579a28();
    /* 005364f6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005364f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5364fdu); f_008581c5();
    /* 005364fd: mov dword ptr [0xa73508], eax */ W32((u32)(0xa73508u), r_eax);
    /* 00536502: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536504: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536509u); f_008581c5();
    /* 00536509: mov dword ptr [0xa73504], eax */ W32((u32)(0xa73504u), r_eax);
    /* 0053650e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536510: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536515u); f_008581c5();
    /* 00536515: mov dword ptr [0xa73500], eax */ W32((u32)(0xa73500u), r_eax);
    /* 0053651a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053651c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536521u); f_008581c5();
    /* 00536521: mov dword ptr [0xa734fc], eax */ W32((u32)(0xa734fcu), r_eax);
    /* 00536526: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536528: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53652du); f_0077a684();
    /* 0053652d: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536533: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536535: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536537: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53653cu); f_0077a684();
    /* 0053653c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536542: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00536544: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536547: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53654cu); f_0077a684();
    /* 0053654c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536552: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00536554: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536557: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53655cu); f_0077a698();
    /* 0053655c: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536562: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00536564: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536566: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53656bu); f_0077a698();
    /* 0053656b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536571: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00536573: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536576: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53657bu); f_0077a698();
    /* 0053657b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536581: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00536583: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536586: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53658bu); f_0077a6b4();
    /* 0053658b: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 00536591: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536593: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536595: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53659au); f_0077a6b4();
    /* 0053659a: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365a0: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365a2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365a5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5365aau); f_0077a6b4();
    /* 005365aa: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365b0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005365b2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365b5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365bau); f_0077a6cc();
    /* 005365ba: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365c0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005365c2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005365c4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365c9u); f_0077a6cc();
    /* 005365c9: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365cf: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365d1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365d4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365d9u); f_0077a6cc();
    /* 005365d9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005365dc: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365e2: mov esi, dword ptr [0x922b98] */ r_esi = R32((u32)(0x922b98u));
    /* 005365e8: movzx edi, word ptr [0x922b9c] */ r_edi = (u32)R16((u32)(0x922b9cu));
    /* 005365ef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365f2: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 005365f8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005365fb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005365ff: mov eax, 2 */ r_eax = 0x2u;
    /* 00536604: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00536609: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0053660d: movzx eax, word ptr [0x922b9e] */ r_eax = (u32)R16((u32)(0x922b9eu));
    /* 00536614: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00536618: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0053661d: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00536621: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00536625: movzx eax, word ptr [0x922ba0] */ r_eax = (u32)R16((u32)(0x922ba0u));
    /* 0053662c: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 00536630: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00536636: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00536639: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053663b:; BB(0x0053663b);
    /* 0053663b: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 00536640: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00536643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536644: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0053664a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0053664d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053664f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00536652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536654: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00536656: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536658: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053665a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053665c: push dword ptr [edx*4 + 0x9bc8ec] */ { u32 v = R32((u32)(r_edx*4+0x9bc8ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536663: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536667: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053666b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053666c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x536671u); f_00608470();
    /* 00536671: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536674: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536677: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053667a: jge 0x536684 */ if ((fS==fO)) goto L_00536684;
L_0053667c:; BB(0x0053667c);
    /* 0053667c: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 00536682: jmp 0x53663b */ goto L_0053663b;
L_00536684:; BB(0x00536684);
    /* 00536684: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536687: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053668a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053668d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536697: mov esp, ebp */ r_esp = r_ebp;
    /* 00536699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053669a: ret  */ FN_RET(0x005363c4); r_esp += 4; return;
L_0053669b:; BB(0x0053669b);
    /* 0053669b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053669d: jmp 0x536490 */ f_00536490(); return;
L_005366a2:; BB(0x005366a2);
    /* 005366a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005366a4: jmp 0x536439 */ f_00536439(); return;
}

void f_00536439(void) /* _WinMain@16_45_0 */
{
    FN_ENTER(0x00536439);
    /* 00536439: mov dword ptr [0xa73510], eax */ W32((u32)(0xa73510u), r_eax);
    /* 0053643e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00536445: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053644c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0053644e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536453u); f_008581c5();
    /* 00536453: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00536454: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00536457: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00536459: je 0x53669b */ if (fZ) goto L_0053669b;
L_0053645f:; BB(0x0053645f);
    /* 0053645f: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00536466: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0053646d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536470: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00536472: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536477: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053647c: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00536481: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x536486u); f_005795a0();
    /* 00536486: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00536489: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00536490: mov dword ptr [0xa73514], eax */ W32((u32)(0xa73514u), r_eax);
    /* 00536495: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053649c: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364a1: mov ebx, dword ptr [0x9bc9b4] */ r_ebx = R32((u32)(0x9bc9b4u));
    /* 005364a7: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 005364ad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005364af: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005364b7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364bd: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c4: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364c9u); f_00579a28();
    /* 005364c9: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364ce: mov ebx, dword ptr [0x9bc9c4] */ r_ebx = R32((u32)(0x9bc9c4u));
    /* 005364d4: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 005364da: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005364dc: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005364e4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364ea: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364ee: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364f1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364f6u); f_00579a28();
    /* 005364f6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005364f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5364fdu); f_008581c5();
    /* 005364fd: mov dword ptr [0xa73508], eax */ W32((u32)(0xa73508u), r_eax);
    /* 00536502: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536504: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536509u); f_008581c5();
    /* 00536509: mov dword ptr [0xa73504], eax */ W32((u32)(0xa73504u), r_eax);
    /* 0053650e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536510: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536515u); f_008581c5();
    /* 00536515: mov dword ptr [0xa73500], eax */ W32((u32)(0xa73500u), r_eax);
    /* 0053651a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053651c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536521u); f_008581c5();
    /* 00536521: mov dword ptr [0xa734fc], eax */ W32((u32)(0xa734fcu), r_eax);
    /* 00536526: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536528: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53652du); f_0077a684();
    /* 0053652d: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536533: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536535: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536537: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53653cu); f_0077a684();
    /* 0053653c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536542: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00536544: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536547: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53654cu); f_0077a684();
    /* 0053654c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536552: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00536554: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536557: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53655cu); f_0077a698();
    /* 0053655c: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536562: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00536564: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536566: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53656bu); f_0077a698();
    /* 0053656b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536571: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00536573: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536576: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53657bu); f_0077a698();
    /* 0053657b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536581: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00536583: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536586: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53658bu); f_0077a6b4();
    /* 0053658b: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 00536591: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536593: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536595: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53659au); f_0077a6b4();
    /* 0053659a: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365a0: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365a2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365a5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5365aau); f_0077a6b4();
    /* 005365aa: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365b0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005365b2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365b5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365bau); f_0077a6cc();
    /* 005365ba: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365c0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005365c2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005365c4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365c9u); f_0077a6cc();
    /* 005365c9: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365cf: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365d1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365d4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365d9u); f_0077a6cc();
    /* 005365d9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005365dc: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365e2: mov esi, dword ptr [0x922b98] */ r_esi = R32((u32)(0x922b98u));
    /* 005365e8: movzx edi, word ptr [0x922b9c] */ r_edi = (u32)R16((u32)(0x922b9cu));
    /* 005365ef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365f2: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 005365f8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005365fb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005365ff: mov eax, 2 */ r_eax = 0x2u;
    /* 00536604: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00536609: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0053660d: movzx eax, word ptr [0x922b9e] */ r_eax = (u32)R16((u32)(0x922b9eu));
    /* 00536614: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00536618: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0053661d: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00536621: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00536625: movzx eax, word ptr [0x922ba0] */ r_eax = (u32)R16((u32)(0x922ba0u));
    /* 0053662c: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 00536630: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00536636: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00536639: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053663b:; BB(0x0053663b);
    /* 0053663b: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 00536640: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00536643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536644: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0053664a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0053664d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053664f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00536652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536654: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00536656: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536658: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053665a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053665c: push dword ptr [edx*4 + 0x9bc8ec] */ { u32 v = R32((u32)(r_edx*4+0x9bc8ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536663: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536667: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053666b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053666c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x536671u); f_00608470();
    /* 00536671: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536674: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536677: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053667a: jge 0x536684 */ if ((fS==fO)) goto L_00536684;
L_0053667c:; BB(0x0053667c);
    /* 0053667c: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 00536682: jmp 0x53663b */ goto L_0053663b;
L_00536684:; BB(0x00536684);
    /* 00536684: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536687: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053668a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053668d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536697: mov esp, ebp */ r_esp = r_ebp;
    /* 00536699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053669a: ret  */ FN_RET(0x00536439); r_esp += 4; return;
L_0053669b:; BB(0x0053669b);
    /* 0053669b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053669d: jmp 0x536490 */ f_00536490(); return;
}

void f_00536490(void) /* _WinMain@16_44_0 */
{
    FN_ENTER(0x00536490);
    /* 00536490: mov dword ptr [0xa73514], eax */ W32((u32)(0xa73514u), r_eax);
    /* 00536495: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053649c: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364a1: mov ebx, dword ptr [0x9bc9b4] */ r_ebx = R32((u32)(0x9bc9b4u));
    /* 005364a7: mov ecx, dword ptr [0xa73510] */ r_ecx = R32((u32)(0xa73510u));
    /* 005364ad: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005364af: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364b5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005364b7: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364bd: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c1: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364c4: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364c9u); f_00579a28();
    /* 005364c9: mov eax, dword ptr [0xa7350c] */ r_eax = R32((u32)(0xa7350cu));
    /* 005364ce: mov ebx, dword ptr [0x9bc9c4] */ r_ebx = R32((u32)(0x9bc9c4u));
    /* 005364d4: mov ecx, dword ptr [0xa73514] */ r_ecx = R32((u32)(0xa73514u));
    /* 005364da: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005364dc: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005364e2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005364e4: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005364ea: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364ee: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005364f1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5364f6u); f_00579a28();
    /* 005364f6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005364f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5364fdu); f_008581c5();
    /* 005364fd: mov dword ptr [0xa73508], eax */ W32((u32)(0xa73508u), r_eax);
    /* 00536502: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536504: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536509u); f_008581c5();
    /* 00536509: mov dword ptr [0xa73504], eax */ W32((u32)(0xa73504u), r_eax);
    /* 0053650e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00536510: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536515u); f_008581c5();
    /* 00536515: mov dword ptr [0xa73500], eax */ W32((u32)(0xa73500u), r_eax);
    /* 0053651a: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0053651c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x536521u); f_008581c5();
    /* 00536521: mov dword ptr [0xa734fc], eax */ W32((u32)(0xa734fcu), r_eax);
    /* 00536526: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536528: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53652du); f_0077a684();
    /* 0053652d: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536533: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00536535: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536537: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53653cu); f_0077a684();
    /* 0053653c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536542: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 00536544: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536547: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53654cu); f_0077a684();
    /* 0053654c: mov edx, dword ptr [0xa73508] */ r_edx = R32((u32)(0xa73508u));
    /* 00536552: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00536554: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536557: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53655cu); f_0077a698();
    /* 0053655c: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536562: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00536564: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536566: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53656bu); f_0077a698();
    /* 0053656b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536571: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00536573: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00536576: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x53657bu); f_0077a698();
    /* 0053657b: mov edx, dword ptr [0xa73504] */ r_edx = R32((u32)(0xa73504u));
    /* 00536581: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00536583: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00536586: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53658bu); f_0077a6b4();
    /* 0053658b: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 00536591: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00536593: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00536595: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x53659au); f_0077a6b4();
    /* 0053659a: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365a0: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365a2: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365a5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5365aau); f_0077a6b4();
    /* 005365aa: mov edx, dword ptr [0xa73500] */ r_edx = R32((u32)(0xa73500u));
    /* 005365b0: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 005365b2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365b5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365bau); f_0077a6cc();
    /* 005365ba: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365c0: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005365c2: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005365c4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365c9u); f_0077a6cc();
    /* 005365c9: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365cf: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 005365d1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005365d4: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5365d9u); f_0077a6cc();
    /* 005365d9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005365dc: mov edx, dword ptr [0xa734fc] */ r_edx = R32((u32)(0xa734fcu));
    /* 005365e2: mov esi, dword ptr [0x922b98] */ r_esi = R32((u32)(0x922b98u));
    /* 005365e8: movzx edi, word ptr [0x922b9c] */ r_edi = (u32)R16((u32)(0x922b9cu));
    /* 005365ef: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005365f2: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 005365f8: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005365fb: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005365ff: mov eax, 2 */ r_eax = 0x2u;
    /* 00536604: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00536609: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 0053660d: movzx eax, word ptr [0x922b9e] */ r_eax = (u32)R16((u32)(0x922b9eu));
    /* 00536614: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00536618: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0053661d: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00536621: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 00536625: movzx eax, word ptr [0x922ba0] */ r_eax = (u32)R16((u32)(0x922ba0u));
    /* 0053662c: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 00536630: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00536636: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00536639: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0053663b:; BB(0x0053663b);
    /* 0053663b: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 00536640: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00536643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00536644: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 0053664a: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0053664d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053664f: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00536652: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536654: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00536656: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00536658: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0053665a: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0053665c: push dword ptr [edx*4 + 0x9bc8ec] */ { u32 v = R32((u32)(r_edx*4+0x9bc8ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536663: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00536667: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053666b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053666c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x536671u); f_00608470();
    /* 00536671: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00536674: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00536677: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0053667a: jge 0x536684 */ if ((fS==fO)) goto L_00536684;
L_0053667c:; BB(0x0053667c);
    /* 0053667c: mov edx, dword ptr [0xa7350c] */ r_edx = R32((u32)(0xa7350cu));
    /* 00536682: jmp 0x53663b */ goto L_0053663b;
L_00536684:; BB(0x00536684);
    /* 00536684: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00536687: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053668a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053668d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00536690: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00536697: mov esp, ebp */ r_esp = r_ebp;
    /* 00536699: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053669a: ret  */ FN_RET(0x00536490); r_esp += 4; return;
}

void f_005366ab(void) /* _WinMain@16_44 */
{
    FN_ENTER(0x005366ab);
    /* 005366ab: jmp 0x5363c4 */ f_005363c4(); return;
}

void f_005392ed(void) /* _WinMain@16_46_0 */
{
    FN_ENTER(0x005392ed);
    /* 005392ed: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005392f0: mov dword ptr [0xa735d4], eax */ W32((u32)(0xa735d4u), r_eax);
    /* 005392f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005392fc: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00539306: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00539308: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53930du); f_008581c5();
    /* 0053930d: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00539310: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00539313: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00539319: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053931b: je 0x5394b9 */ if (fZ) goto L_005394b9;
L_00539321:; BB(0x00539321);
    /* 00539321: mov dword ptr [ebp - 0x90], 1 */ W32((u32)(r_ebp+0xffffff70u), 0x1u);
    /* 0053932b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00539332: mov ecx, eax */ r_ecx = r_eax;
    /* 00539334: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00539336: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0053933b: push 0x41880000 */ { u32 v = 0x41880000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539340: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539345: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x53934au); f_005795a0();
    /* 0053934a: mov dword ptr [ebp - 0x90], 0 */ W32((u32)(r_ebp+0xffffff70u), 0x0u);
    /* 00539354: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00539357: mov dword ptr [0xa735d0], eax */ W32((u32)(0xa735d0u), r_eax);
    /* 0053935c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00539363: mov ecx, dword ptr [0xa735a8] */ r_ecx = R32((u32)(0xa735a8u));
    /* 00539369: mov eax, dword ptr [0x9bcac4] */ r_eax = R32((u32)(0x9bcac4u));
    /* 0053936e: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00539374: mov esi, 0x2e */ r_esi = 0x2eu;
    /* 00539379: mov edi, 0x45 */ r_edi = 0x45u;
    /* 0053937e: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 00539384: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0053938b: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 00539391: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00539398: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0053939b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005393a2: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 005393a5: mov edi, dword ptr [ecx + 0x430] */ r_edi = R32((u32)(r_ecx+0x430u));
    /* 005393ab: lea esi, [ebp - 0x88] */ r_esi = (u32)(r_ebp+0xffffff78u);
    /* 005393b1: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005393b4: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005393bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393bc: mov ecx, dword ptr [0xa735d0] */ r_ecx = R32((u32)(0xa735d0u));
    /* 005393c2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005393c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005393ca: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005393d1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005393d8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005393df: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005393e6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005393ed: mov dword ptr [ebp - 0x78], 0x41200000 */ W32((u32)(r_ebp+0xffffff88u), 0x41200000u);
    /* 005393f4: mov dword ptr [ebp - 0x60], 0x41200000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41200000u);
    /* 005393fb: push dword ptr [edi + eax*8 + 4] */ { u32 v = R32((u32)(r_edi+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005393ff: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539402: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x539407u); f_00579794();
    /* 00539407: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539409: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53940eu); f_0077a684();
    /* 0053940e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053940f: mov dword ptr [0xa735bc], eax */ W32((u32)(0xa735bcu), r_eax);
    /* 00539414: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00539416:; BB(0x00539416);
    /* 00539416: push dword ptr [esi*4 + 0x922e68] */ { u32 v = R32((u32)(r_esi*4+0x922e68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053941d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x539422u); f_0077a698();
    /* 00539422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539423: mov dword ptr [esi*4 + 0xa735b4], eax */ W32((u32)(r_esi*4+0xa735b4u), r_eax);
    /* 0053942a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053942d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539430: jl 0x539416 */ if ((fS!=fO)) goto L_00539416;
L_00539432:; BB(0x00539432);
    /* 00539432: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539434: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x539439u); f_0077a6b4();
    /* 00539439: mov dword ptr [0xa735b0], eax */ W32((u32)(0xa735b0u), r_eax);
    /* 0053943e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539440: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x539445u); f_0077a6cc();
    /* 00539445: movzx edx, word ptr [0x922e2c] */ r_edx = (u32)R16((u32)(0x922e2cu));
    /* 0053944c: movzx ecx, word ptr [0x922e2e] */ r_ecx = (u32)R16((u32)(0x922e2eu));
    /* 00539453: movzx esi, word ptr [0x922e30] */ r_esi = (u32)R16((u32)(0x922e30u));
    /* 0053945a: mov dword ptr [0xa735ac], eax */ W32((u32)(0xa735acu), r_eax);
    /* 0053945f: mov eax, dword ptr [0x922e28] */ r_eax = R32((u32)(0x922e28u));
    /* 00539464: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00539467: mov eax, dword ptr [0xa735a8] */ r_eax = R32((u32)(0xa735a8u));
    /* 0053946c: mov edi, dword ptr [eax + 0x430] */ r_edi = R32((u32)(r_eax+0x430u));
    /* 00539472: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 00539476: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053947c: mov word ptr [ebp - 0x3e], cx */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_ecx);
    /* 00539480: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
    /* 00539484: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00539487: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0053948a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053948b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053948d: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539492: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00539495: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539498: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0053949a: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53949fu); f_00608470();
    /* 0053949f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005394a2: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005394a5: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005394a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005394ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005394b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005394b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394b5: mov esp, ebx */ r_esp = r_ebx;
    /* 005394b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005394b8: ret  */ FN_RET(0x005392ed); r_esp += 4; return;
L_005394b9:; BB(0x005394b9);
    /* 005394b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005394bb: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005394be: jmp 0x539354 */ f_00539354(); return;
}

void f_00539354(void) /* _WinMain@16_45_1 */
{
    FN_ENTER(0x00539354);
    /* 00539354: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00539357: mov dword ptr [0xa735d0], eax */ W32((u32)(0xa735d0u), r_eax);
    /* 0053935c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00539363: mov ecx, dword ptr [0xa735a8] */ r_ecx = R32((u32)(0xa735a8u));
    /* 00539369: mov eax, dword ptr [0x9bcac4] */ r_eax = R32((u32)(0x9bcac4u));
    /* 0053936e: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00539374: mov esi, 0x2e */ r_esi = 0x2eu;
    /* 00539379: mov edi, 0x45 */ r_edi = 0x45u;
    /* 0053937e: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 00539384: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0053938b: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 00539391: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00539398: mov dword ptr [ebp - 0x80], edi */ W32((u32)(r_ebp+0xffffff80u), r_edi);
    /* 0053939b: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005393a2: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 005393a5: mov edi, dword ptr [ecx + 0x430] */ r_edi = R32((u32)(r_ecx+0x430u));
    /* 005393ab: lea esi, [ebp - 0x88] */ r_esi = (u32)(r_ebp+0xffffff78u);
    /* 005393b1: lea ecx, [ebp - 0x78] */ r_ecx = (u32)(r_ebp+0xffffff88u);
    /* 005393b4: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005393bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005393bc: mov ecx, dword ptr [0xa735d0] */ r_ecx = R32((u32)(0xa735d0u));
    /* 005393c2: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005393c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005393ca: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005393d1: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005393d8: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005393df: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005393e6: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005393ed: mov dword ptr [ebp - 0x78], 0x41200000 */ W32((u32)(r_ebp+0xffffff88u), 0x41200000u);
    /* 005393f4: mov dword ptr [ebp - 0x60], 0x41200000 */ W32((u32)(r_ebp+0xffffffa0u), 0x41200000u);
    /* 005393fb: push dword ptr [edi + eax*8 + 4] */ { u32 v = R32((u32)(r_edi+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005393ff: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539402: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x539407u); f_00579794();
    /* 00539407: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539409: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x53940eu); f_0077a684();
    /* 0053940e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053940f: mov dword ptr [0xa735bc], eax */ W32((u32)(0xa735bcu), r_eax);
    /* 00539414: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00539416:; BB(0x00539416);
    /* 00539416: push dword ptr [esi*4 + 0x922e68] */ { u32 v = R32((u32)(r_esi*4+0x922e68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053941d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x539422u); f_0077a698();
    /* 00539422: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00539423: mov dword ptr [esi*4 + 0xa735b4], eax */ W32((u32)(r_esi*4+0xa735b4u), r_eax);
    /* 0053942a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053942d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00539430: jl 0x539416 */ if ((fS!=fO)) goto L_00539416;
L_00539432:; BB(0x00539432);
    /* 00539432: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539434: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x539439u); f_0077a6b4();
    /* 00539439: mov dword ptr [0xa735b0], eax */ W32((u32)(0xa735b0u), r_eax);
    /* 0053943e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00539440: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x539445u); f_0077a6cc();
    /* 00539445: movzx edx, word ptr [0x922e2c] */ r_edx = (u32)R16((u32)(0x922e2cu));
    /* 0053944c: movzx ecx, word ptr [0x922e2e] */ r_ecx = (u32)R16((u32)(0x922e2eu));
    /* 00539453: movzx esi, word ptr [0x922e30] */ r_esi = (u32)R16((u32)(0x922e30u));
    /* 0053945a: mov dword ptr [0xa735ac], eax */ W32((u32)(0xa735acu), r_eax);
    /* 0053945f: mov eax, dword ptr [0x922e28] */ r_eax = R32((u32)(0x922e28u));
    /* 00539464: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00539467: mov eax, dword ptr [0xa735a8] */ r_eax = R32((u32)(0xa735a8u));
    /* 0053946c: mov edi, dword ptr [eax + 0x430] */ r_edi = R32((u32)(r_eax+0x430u));
    /* 00539472: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 00539476: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053947c: mov word ptr [ebp - 0x3e], cx */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_ecx);
    /* 00539480: mov word ptr [ebp - 0x3c], si */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_esi);
    /* 00539484: mov dword ptr [ebp - 0x48], edi */ W32((u32)(r_ebp+0xffffffb8u), r_edi);
    /* 00539487: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 0053948a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053948b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053948d: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00539492: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00539495: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00539498: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0053949a: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53949fu); f_00608470();
    /* 0053949f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005394a2: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 005394a5: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 005394a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005394ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005394b2: mov esp, ebp */ r_esp = r_ebp;
    /* 005394b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005394b5: mov esp, ebx */ r_esp = r_ebx;
    /* 005394b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005394b8: ret  */ FN_RET(0x00539354); r_esp += 4; return;
}

void f_005394c8(void) /* _WinMain@16_46 */
{
    FN_ENTER(0x005394c8);
    /* 005394c8: jmp 0x5392ed */ f_005392ed(); return;
}

void f_0053ca5d(void) /* _WinMain@16_47_0 */
{
    FN_ENTER(0x0053ca5d);
    /* 0053ca5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053ca60: mov dword ptr [0xa7363c], eax */ W32((u32)(0xa7363cu), r_eax);
    /* 0053ca65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053ca6c: mov ebx, dword ptr [0xa73628] */ r_ebx = R32((u32)(0xa73628u));
    /* 0053ca72: mov ecx, dword ptr [ebx + 0x430] */ r_ecx = R32((u32)(r_ebx+0x430u));
    /* 0053ca78: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 0053ca7f: mov eax, 0x1a */ r_eax = 0x1au;
    /* 0053ca84: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0053ca8b: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 0053ca91: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 0053ca96: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 0053ca9d: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0053caa3: mov eax, dword ptr [0x9bcd04] */ r_eax = R32((u32)(0x9bcd04u));
    /* 0053caa8: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 0053caaf: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 0053cab5: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 0053cabc: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0053cac2: mov edx, dword ptr [ebx + 0x42c] */ r_edx = R32((u32)(r_ebx+0x42cu));
    /* 0053cac8: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 0053cacf: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 0053cad6: lea edi, [ebp - 0x90] */ r_edi = (u32)(r_ebp+0xffffff70u);
    /* 0053cadc: lea esi, [ebp - 0x80] */ r_esi = (u32)(r_ebp+0xffffff80u);
    /* 0053cadf: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0053cae6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0053cae7: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 0053caee: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0053caef: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0053caf6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0053cafd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 0053cb04: push dword ptr [ecx + eax*8 + 4] */ { u32 v = R32((u32)(r_ecx+r_eax*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cb08: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cb0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cb0e: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x53cb13u); f_00579794();
    /* 0053cb13: mov eax, dword ptr [0xa7363c] */ r_eax = R32((u32)(0xa7363cu));
    /* 0053cb18: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 0053cb1b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0053cb1d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0053cb1f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0053cb21: jle 0x53cbf3 */ if ((fZ||fS!=fO)) goto L_0053cbf3;
L_0053cb27:; BB(0x0053cb27);
    /* 0053cb27: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 0053cb2a: lea edx, [ebp - 0x50] */ r_edx = (u32)(r_ebp+0xffffffb0u);
    /* 0053cb2d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0053cb2f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0053cb32: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0053cb35: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0053cb38: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0053cb3b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0053cb3e: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0053cb41: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0053cb44: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0053cb47: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0053cb4a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0053cb4d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0053cb50: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x53cb55u); f_0082f9c4();
    /* 0053cb55: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0053cb58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cb59: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x53cb5eu); f_00782868();
    /* 0053cb5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0053cb5f: fld dword ptr [0x9231a8] */ FPUSH(R_F32((u32)(0x9231a8u)));
    /* 0053cb65: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0053cb67: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 0053cb6a: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053cb6d: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0053cb70: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0053cb73: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0053cb76: mov edx, dword ptr [ebp - 0x4c] */ r_edx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053cb79: mov dword ptr [esi + 0x10], edx */ W32((u32)(r_esi+0x10u), r_edx);
    /* 0053cb7c: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0053cb7f: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053cb82: mov dword ptr [esi + 0x14], ecx */ W32((u32)(r_esi+0x14u), r_ecx);
    /* 0053cb85: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0053cb88: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0053cb8a: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0053cb8c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053cb8e: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0053cb91: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0053cb94: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053cb96: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cb98: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 0053cb9b: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0053cb9e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cba0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cba2: fld dword ptr [0x9231a4] */ FPUSH(R_F32((u32)(0x9231a4u)));
    /* 0053cba8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cbaa: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 0053cbad: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 0053cbb0: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0053cbb3: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 0053cbb6: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0053cbb9: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0053cbbc: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0053cbbf: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0053cbc2: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0053cbc5: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 0053cbc8: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0053cbcb: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0053cbcd: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0053cbcf: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0053cbd1: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0053cbd4: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0053cbd7: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0053cbd9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cbdb: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0053cbde: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0053cbe1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0053cbe3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0053cbe5: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0053cbe8: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0053cbeb: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0053cbed: jl 0x53cb27 */ if ((fS!=fO)) goto L_0053cb27;
L_0053cbf3:; BB(0x0053cbf3);
    /* 0053cbf3: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053cbfa: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cbfc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x53cc01u); f_008581c5();
    /* 0053cc01: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053cc04: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0053cc07: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0053cc0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0053cc0c: je 0x53ccc3 */ if (fZ) goto L_0053ccc3;
L_0053cc12:; BB(0x0053cc12);
    /* 0053cc12: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0053cc19: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0053cc20: mov eax, dword ptr [0xa73628] */ r_eax = R32((u32)(0xa73628u));
    /* 0053cc25: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cc28: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc2a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0053cc30: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cc33: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x53cc38u); f_0052d584();
    /* 0053cc38: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0053cc3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cc42: mov dword ptr [0xa73640], eax */ W32((u32)(0xa73640u), r_eax);
    /* 0053cc47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cc4e: call 0x53df30 */ r_esp -= 4; W32(r_esp, 0x53cc53u); f_0053df30();
    /* 0053cc53: mov eax, dword ptr [0x923140] */ r_eax = R32((u32)(0x923140u));
    /* 0053cc58: movzx edx, word ptr [0x923144] */ r_edx = (u32)R16((u32)(0x923144u));
    /* 0053cc5f: movzx ecx, word ptr [0x923146] */ r_ecx = (u32)R16((u32)(0x923146u));
    /* 0053cc66: movzx ebx, word ptr [0x923148] */ r_ebx = (u32)R16((u32)(0x923148u));
    /* 0053cc6d: mov edi, dword ptr [0xa73628] */ r_edi = R32((u32)(0xa73628u));
    /* 0053cc73: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0053cc79: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053cc7c: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 0053cc80: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0053cc86: mov word ptr [ebp - 0x26], cx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ecx);
    /* 0053cc8a: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 0053cc8e: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0053cc91: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0053cc94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc97: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9c: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cca2: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cca4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53cca9u); f_00608470();
    /* 0053cca9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ccac: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053ccaf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ccb2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ccb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ccb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ccbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ccc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ccc2: ret  */ FN_RET(0x0053ca5d); r_esp += 4; return;
L_0053ccc3:; BB(0x0053ccc3);
    /* 0053ccc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0053ccc5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0053ccc8: jmp 0x53cc3f */ f_0053cc3f(); return;
}

void f_0053cc3f(void) /* _WinMain@16_45_2 */
{
    FN_ENTER(0x0053cc3f);
    /* 0053cc3f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0053cc42: mov dword ptr [0xa73640], eax */ W32((u32)(0xa73640u), r_eax);
    /* 0053cc47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0053cc4e: call 0x53df30 */ r_esp -= 4; W32(r_esp, 0x53cc53u); f_0053df30();
    /* 0053cc53: mov eax, dword ptr [0x923140] */ r_eax = R32((u32)(0x923140u));
    /* 0053cc58: movzx edx, word ptr [0x923144] */ r_edx = (u32)R16((u32)(0x923144u));
    /* 0053cc5f: movzx ecx, word ptr [0x923146] */ r_ecx = (u32)R16((u32)(0x923146u));
    /* 0053cc66: movzx ebx, word ptr [0x923148] */ r_ebx = (u32)R16((u32)(0x923148u));
    /* 0053cc6d: mov edi, dword ptr [0xa73628] */ r_edi = R32((u32)(0xa73628u));
    /* 0053cc73: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0053cc79: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0053cc7c: mov word ptr [ebp - 0x28], dx */ W16((u32)(r_ebp+0xffffffd8u), (u16)r_edx);
    /* 0053cc80: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0053cc86: mov word ptr [ebp - 0x26], cx */ W16((u32)(r_ebp+0xffffffdau), (u16)r_ecx);
    /* 0053cc8a: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 0053cc8e: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0053cc91: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0053cc94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc95: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc97: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9c: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cc9f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0053cca2: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0053cca4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x53cca9u); f_00608470();
    /* 0053cca9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0053ccac: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0053ccaf: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0053ccb2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0053ccb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0053ccb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0053ccbf: mov esp, ebp */ r_esp = r_ebp;
    /* 0053ccc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0053ccc2: ret  */ FN_RET(0x0053cc3f); r_esp += 4; return;
}

void f_0053ccd2(void) /* _WinMain@16_47 */
{
    FN_ENTER(0x0053ccd2);
    /* 0053ccd2: jmp 0x53ca5d */ f_0053ca5d(); return;
}

void f_0054220f(void) /* _WinMain@16_48_0 */
{
    FN_ENTER(0x0054220f);
    /* 0054220f: mov dword ptr [0xa7376c], eax */ W32((u32)(0xa7376cu), r_eax);
    /* 00542214: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054221b: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542222: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00542224: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x542229u); f_008581c5();
    /* 00542229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054222a: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0054222d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054222f: je 0x542390 */ if (fZ) goto L_00542390;
L_00542235:; BB(0x00542235);
    /* 00542235: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0054223c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00542243: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542248: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054224b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00542251: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542254: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x542259u); f_00511b74();
    /* 00542259: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0054225c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00542263: mov dword ptr [0xa73768], eax */ W32((u32)(0xa73768u), r_eax);
    /* 00542268: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054226f: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542274: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00542276: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0054227c: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0054227f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542280: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x542285u); f_0078e934();
    /* 00542285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00542287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0054228b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054228e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542291: mov dword ptr [0xa73764], edx */ W32((u32)(0xa73764u), r_edx);
    /* 00542297: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x54229cu); f_0078e934();
    /* 0054229c: mov ecx, dword ptr [0xa73724] */ r_ecx = R32((u32)(0xa73724u));
    /* 005422a2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005422a4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422a7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422aa: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 005422b0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005422b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422b4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422b7: mov dword ptr [0xa73760], edx */ W32((u32)(0xa73760u), r_edx);
    /* 005422bd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422c2u); f_0078e934();
    /* 005422c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005422c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422c5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422c8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422cb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422ce: mov dword ptr [0xa7375c], edx */ W32((u32)(0xa7375cu), r_edx);
    /* 005422d4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422d9u); f_0078e934();
    /* 005422d9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422dc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422df: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422e2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422e5: mov dword ptr [0xa73758], edx */ W32((u32)(0xa73758u), r_edx);
    /* 005422eb: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5422f0u); f_0052d360();
    /* 005422f0: mov ecx, dword ptr [0x923514] */ r_ecx = R32((u32)(0x923514u));
    /* 005422f6: movzx ebx, word ptr [0x923518] */ r_ebx = (u32)R16((u32)(0x923518u));
    /* 005422fd: movzx esi, word ptr [0x92351a] */ r_esi = (u32)R16((u32)(0x92351au));
    /* 00542304: movzx edi, word ptr [0x92351c] */ r_edi = (u32)R16((u32)(0x92351cu));
    /* 0054230b: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00542310: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00542315: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00542319: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 0054231d: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542323: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00542329: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0054232c: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00542330: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00542332: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00542336: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 0054233a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0054233d:; BB(0x0054233d);
    /* 0054233d: movsx esi, word ptr [ebp + ebx*2 - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 00542342: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00542345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542346: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0054234c: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0054234f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542354: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542359: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054235c: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542361: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x542366u); f_00608470();
    /* 00542366: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542369: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054236c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054236f: jge 0x542379 */ if ((fS==fO)) goto L_00542379;
L_00542371:; BB(0x00542371);
    /* 00542371: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542377: jmp 0x54233d */ goto L_0054233d;
L_00542379:; BB(0x00542379);
    /* 00542379: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054237c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054237f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054238c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054238e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054238f: ret  */ FN_RET(0x0054220f); r_esp += 4; return;
L_00542390:; BB(0x00542390);
    /* 00542390: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00542392: jmp 0x542263 */ f_00542263(); return;
}

void f_00542263(void) /* _WinMain@16_45_3 */
{
    FN_ENTER(0x00542263);
    /* 00542263: mov dword ptr [0xa73768], eax */ W32((u32)(0xa73768u), r_eax);
    /* 00542268: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054226f: mov eax, dword ptr [0xa73724] */ r_eax = R32((u32)(0xa73724u));
    /* 00542274: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00542276: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0054227c: mov ebx, dword ptr [edx + 0x18] */ r_ebx = R32((u32)(r_edx+0x18u));
    /* 0054227f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542280: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x542285u); f_0078e934();
    /* 00542285: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00542287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00542288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0054228b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054228e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00542291: mov dword ptr [0xa73764], edx */ W32((u32)(0xa73764u), r_edx);
    /* 00542297: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x54229cu); f_0078e934();
    /* 0054229c: mov ecx, dword ptr [0xa73724] */ r_ecx = R32((u32)(0xa73724u));
    /* 005422a2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005422a4: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422a7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422aa: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 005422b0: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005422b3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422b4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422b7: mov dword ptr [0xa73760], edx */ W32((u32)(0xa73760u), r_edx);
    /* 005422bd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422c2u); f_0078e934();
    /* 005422c2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005422c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005422c5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422c8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422cb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422ce: mov dword ptr [0xa7375c], edx */ W32((u32)(0xa7375cu), r_edx);
    /* 005422d4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5422d9u); f_0078e934();
    /* 005422d9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005422dc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005422df: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005422e2: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005422e5: mov dword ptr [0xa73758], edx */ W32((u32)(0xa73758u), r_edx);
    /* 005422eb: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5422f0u); f_0052d360();
    /* 005422f0: mov ecx, dword ptr [0x923514] */ r_ecx = R32((u32)(0x923514u));
    /* 005422f6: movzx ebx, word ptr [0x923518] */ r_ebx = (u32)R16((u32)(0x923518u));
    /* 005422fd: movzx esi, word ptr [0x92351a] */ r_esi = (u32)R16((u32)(0x92351au));
    /* 00542304: movzx edi, word ptr [0x92351c] */ r_edi = (u32)R16((u32)(0x92351cu));
    /* 0054230b: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00542310: mov edx, 0x18 */ r_edx = 0x18u;
    /* 00542315: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00542319: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 0054231d: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542323: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00542329: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0054232c: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00542330: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00542332: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00542336: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 0054233a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_0054233d:; BB(0x0054233d);
    /* 0054233d: movsx esi, word ptr [ebp + ebx*2 - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 00542342: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00542345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00542346: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 0054234c: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 0054234f: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542354: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00542359: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054235c: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00542360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00542361: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x542366u); f_00608470();
    /* 00542366: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00542369: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0054236c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054236f: jge 0x542379 */ if ((fS==fO)) goto L_00542379;
L_00542371:; BB(0x00542371);
    /* 00542371: mov edx, dword ptr [0xa73724] */ r_edx = R32((u32)(0xa73724u));
    /* 00542377: jmp 0x54233d */ goto L_0054233d;
L_00542379:; BB(0x00542379);
    /* 00542379: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0054237c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0054237f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00542382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00542385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054238c: mov esp, ebp */ r_esp = r_ebp;
    /* 0054238e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054238f: ret  */ FN_RET(0x00542263); r_esp += 4; return;
}

void f_00542399(void) /* _WinMain@16_48 */
{
    FN_ENTER(0x00542399);
    /* 00542399: jmp 0x54220f */ f_0054220f(); return;
}

void f_00543b20(void) /* _WinMain@16_45_4 */
{
    FN_ENTER(0x00543b20);
    /* 00543b20: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00543b27: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00543b2e: push 0x3b0 */ { u32 v = 0x3b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00543b33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x543b38u); f_005caba4();
    /* 00543b38: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00543b3b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00543b3e: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00543b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00543b43: je 0x543c74 */ if (fZ) goto L_00543c74;
L_00543b49:; BB(0x00543b49);
    /* 00543b49: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00543b50: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00543b57: mov ecx, eax */ r_ecx = r_eax;
    /* 00543b59: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00543b5c: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00543b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00543b60: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x543b65u); f_007865e8();
    /* 00543b65: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00543b6c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00543b6f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b72: mov dword ptr [ecx], 0xb03180 */ W32((u32)(r_ecx), 0xb03180u);
    /* 00543b78: mov eax, dword ptr [0x9bcf58] */ r_eax = R32((u32)(0x9bcf58u));
    /* 00543b7d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00543b80: call dword ptr [0xb032cc] */ { u32 t = R32((u32)(0xb032ccu)); r_esp -= 4; W32(r_esp, 0x543b86u); call_ind(t); }
    /* 00543b86: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b89: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x543b8eu); f_007b4f54();
    /* 00543b8e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543b91: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00543b94: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00543b97: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 00543b9a: mov esi, dword ptr [ecx + 0x30] */ r_esi = R32((u32)(r_ecx+0x30u));
    /* 00543b9d: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 00543ba3: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00543bad: or esi, 0x6000800 */ {  u32 a = r_esi; u32 b = 0x6000800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00543bb3: mov dword ptr [ecx + 0x304], edx */ W32((u32)(r_ecx+0x304u), r_edx);
    /* 00543bb9: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00543bbb: mov dword ptr [ecx + 0x308], ebx */ W32((u32)(r_ecx+0x308u), r_ebx);
    /* 00543bc1: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00543bc4: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x543bc9u); f_00787550();
    /* 00543bc9: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00543bcc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00543bd1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00543bd6: mov dword ptr [ecx + 0x388], edx */ W32((u32)(r_ecx+0x388u), r_edx);
    /* 00543bdc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543bde: mov dword ptr [ecx + 0x384], ebx */ W32((u32)(r_ecx+0x384u), r_ebx);
    /* 00543be4: mov word ptr [ecx + 0x38c], ax */ W16((u32)(r_ecx+0x38cu), (u16)r_eax);
    /* 00543beb: mov word ptr [ecx + 0x38e], ax */ W16((u32)(r_ecx+0x38eu), (u16)r_eax);
    /* 00543bf2: mov word ptr [ecx + 0x390], ax */ W16((u32)(r_ecx+0x390u), (u16)r_eax);
    /* 00543bf9: mov word ptr [ecx + 0x392], ax */ W16((u32)(r_ecx+0x392u), (u16)r_eax);
    /* 00543c00: mov word ptr [ecx + 0x394], ax */ W16((u32)(r_ecx+0x394u), (u16)r_eax);
    /* 00543c07: mov word ptr [ecx + 0x396], ax */ W16((u32)(r_ecx+0x396u), (u16)r_eax);
    /* 00543c0e: mov word ptr [ecx + 0x398], ax */ W16((u32)(r_ecx+0x398u), (u16)r_eax);
    /* 00543c15: mov word ptr [ecx + 0x39a], ax */ W16((u32)(r_ecx+0x39au), (u16)r_eax);
    /* 00543c1c: mov word ptr [ecx + 0x39c], ax */ W16((u32)(r_ecx+0x39cu), (u16)r_eax);
    /* 00543c23: mov word ptr [ecx + 0x39e], ax */ W16((u32)(r_ecx+0x39eu), (u16)r_eax);
    /* 00543c2a: mov word ptr [ecx + 0x3a0], ax */ W16((u32)(r_ecx+0x3a0u), (u16)r_eax);
    /* 00543c31: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 00543c38: mov word ptr [ecx + 0x3a4], ax */ W16((u32)(r_ecx+0x3a4u), (u16)r_eax);
    /* 00543c3f: mov word ptr [ecx + 0x3a6], ax */ W16((u32)(r_ecx+0x3a6u), (u16)r_eax);
    /* 00543c46: mov word ptr [ecx + 0x3a8], ax */ W16((u32)(r_ecx+0x3a8u), (u16)r_eax);
    /* 00543c4d: mov word ptr [ecx + 0x3aa], ax */ W16((u32)(r_ecx+0x3aau), (u16)r_eax);
    /* 00543c54: mov dword ptr [ecx + 0x3ac], edx */ W32((u32)(r_ecx+0x3acu), r_edx);
    /* 00543c5a: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
L_00543c5d:; BB(0x00543c5d);
    /* 00543c5d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00543c60: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00543c63: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00543c66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00543c69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00543c70: mov esp, ebp */ r_esp = r_ebp;
    /* 00543c72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00543c73: ret  */ FN_RET(0x00543b20); r_esp += 4; return;
L_00543c74:; BB(0x00543c74);
    /* 00543c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00543c76: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00543c79: jmp 0x543c5d */ goto L_00543c5d;
}

void f_00543c80(void) /* _WinMain@16_45 */
{
    FN_ENTER(0x00543c80);
    /* 00543c80: jmp 0x543b20 */ f_00543b20(); return;
}

void f_00544544(void) /* _WinMain@16_49 */
{
    FN_ENTER(0x00544544);
    /* 00544544: jmp 0x5445cc */ f_005445cc(); return;
}

void f_005445cc(void) /* _WinMain@16_49_0 */
{
    FN_ENTER(0x005445cc);
    /* 005445cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005445ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005445d0: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005445d3: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005445d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005445d9: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5445deu); f_00805608();
    /* 005445de: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005445e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005445e1: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5445e6u); f_006946a8();
    /* 005445e6: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005445e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005445ea: ret  */ FN_RET(0x005445cc); r_esp += 4; return;
}

void f_00546320(void) /* _WinMain@16_50_0 */
{
    FN_ENTER(0x00546320);
    /* 00546320: mov dword ptr [0xa73838], ecx */ W32((u32)(0xa73838u), r_ecx);
    /* 00546326: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054632d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054632f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x546334u); f_005b8610();
    /* 00546334: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054633a: mov dword ptr [0xa7380c], eax */ W32((u32)(0xa7380cu), r_eax);
    /* 0054633f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546341: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x546346u); f_005b8624();
    /* 00546346: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054634c: mov dword ptr [0xa73804], eax */ W32((u32)(0xa73804u), r_eax);
    /* 00546351: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00546353: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x546358u); f_005b8624();
    /* 00546358: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 0054635e: mov dword ptr [0xa73808], eax */ W32((u32)(0xa73808u), r_eax);
    /* 00546363: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00546365: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x54636au); f_005b8610();
    /* 0054636a: mov ecx, dword ptr [0xa73838] */ r_ecx = R32((u32)(0xa73838u));
    /* 00546370: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00546372: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00546375: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00546378: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 0054637b: mov dword ptr [0xa737fc], ebx */ W32((u32)(0xa737fcu), r_ebx);
    /* 00546381: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x546386u); f_005b8610();
    /* 00546386: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00546389: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054638c: mov dword ptr [0xa73800], edx */ W32((u32)(0xa73800u), r_edx);
    /* 00546392: call 0x54752c */ r_esp -= 4; W32(r_esp, 0x546397u); f_0054752c();
    /* 00546397: call 0x546b14 */ r_esp -= 4; W32(r_esp, 0x54639cu); f_00546b14();
    /* 0054639c: push 0x923c6c */ { u32 v = 0x923c6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005463a1: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x5463a6u); f_008009dc();
    /* 005463a6: mov dword ptr [0xa73834], eax */ W32((u32)(0xa73834u), r_eax);
    /* 005463ab: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463ad: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5463b2u); f_0077a684();
    /* 005463b2: mov dword ptr [0xa73830], eax */ W32((u32)(0xa73830u), r_eax);
    /* 005463b7: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463b9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5463beu); f_0077a698();
    /* 005463be: mov dword ptr [0xa7382c], eax */ W32((u32)(0xa7382cu), r_eax);
    /* 005463c3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463c5: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5463cau); f_0077a6b4();
    /* 005463ca: mov dword ptr [0xa73828], eax */ W32((u32)(0xa73828u), r_eax);
    /* 005463cf: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005463d1: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5463d6u); f_0077a6cc();
    /* 005463d6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005463d9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005463dc: mov dword ptr [0xa73824], eax */ W32((u32)(0xa73824u), r_eax);
    /* 005463e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005463e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005463eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005463ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005463ee: ret  */ FN_RET(0x00546320); r_esp += 4; return;
}

void f_005463f1(void) /* _WinMain@16_50 */
{
    FN_ENTER(0x005463f1);
    /* 005463f1: jmp 0x546320 */ f_00546320(); return;
}

void f_00549e2c(void) /* _WinMain@16_51_0 */
{
    FN_ENTER(0x00549e2c);
    /* 00549e2c: mov dword ptr [0xa738c8], edi */ W32((u32)(0xa738c8u), r_edi);
    /* 00549e32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00549e39: jmp 0x549e91 */ goto L_00549e91;
L_00549e91:; BB(0x00549e91);
    /* 00549e91: mov eax, dword ptr [0x923d8c] */ r_eax = R32((u32)(0x923d8cu));
    /* 00549e96: movzx edx, word ptr [0x923d90] */ r_edx = (u32)R16((u32)(0x923d90u));
    /* 00549e9d: movzx ecx, word ptr [0x923d92] */ r_ecx = (u32)R16((u32)(0x923d92u));
    /* 00549ea4: movzx ebx, word ptr [0x923d94] */ r_ebx = (u32)R16((u32)(0x923d94u));
    /* 00549eab: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00549eb1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00549eb4: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00549eba: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 00549ebe: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 00549ec2: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 00549ec6: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00549ec9: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 00549ecc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00549ecd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549ecf: push dword ptr [0x9bd2fc] */ { u32 v = R32((u32)(0x9bd2fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549ed5: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549ed8: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549edb: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00549edd: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x549ee2u); f_00608470();
    /* 00549ee2: mov eax, dword ptr [0x923d7c] */ r_eax = R32((u32)(0x923d7cu));
    /* 00549ee7: movzx edx, word ptr [0x923d80] */ r_edx = (u32)R16((u32)(0x923d80u));
    /* 00549eee: movzx ecx, word ptr [0x923d82] */ r_ecx = (u32)R16((u32)(0x923d82u));
    /* 00549ef5: movzx ebx, word ptr [0x923d84] */ r_ebx = (u32)R16((u32)(0x923d84u));
    /* 00549efc: mov edi, dword ptr [0xa738c8] */ r_edi = R32((u32)(0xa738c8u));
    /* 00549f02: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00549f08: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00549f0b: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00549f0f: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00549f15: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00549f19: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 00549f1d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00549f20: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00549f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00549f24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f26: push dword ptr [0x9bd2fc] */ { u32 v = R32((u32)(0x9bd2fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f2c: push dword ptr [edx + 0x1c] */ { u32 v = R32((u32)(r_edx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f2f: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00549f32: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f34: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x549f39u); f_00608470();
    /* 00549f39: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00549f3b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x549f40u); f_0077a6cc();
    /* 00549f40: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00549f43: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00549f46: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00549f49: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00549f4c: mov dword ptr [0xa738cc], eax */ W32((u32)(0xa738ccu), r_eax);
    /* 00549f51: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00549f54: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00549f5b: mov esp, ebp */ r_esp = r_ebp;
    /* 00549f5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00549f5e: ret  */ FN_RET(0x00549e2c); r_esp += 4; return;
}

void f_00549f61(void) /* _WinMain@16_51 */
{
    FN_ENTER(0x00549f61);
    /* 00549f61: jmp 0x549e2c */ f_00549e2c(); return;
}

void f_00551214(void) /* _WinMain@16_53_1 */
{
    FN_ENTER(0x00551214);
    /* 00551214: mov dword ptr [0xa73974], eax */ W32((u32)(0xa73974u), r_eax);
    /* 00551219: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551220: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00551222: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00551228: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0055122b: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0055122e: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 00551231: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00551234: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00551237: mov dword ptr [0xa7399c], 0 */ W32((u32)(0xa7399cu), 0x0u);
    /* 00551241: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551243: mov dword ptr [0xa73998], 0 */ W32((u32)(0xa73998u), 0x0u);
    /* 0055124d: mov dword ptr [0xa73970], edi */ W32((u32)(0xa73970u), r_edi);
    /* 00551253: mov dword ptr [0xa7396c], eax */ W32((u32)(0xa7396cu), r_eax);
    /* 00551258: mov dword ptr [0xa73994], 0 */ W32((u32)(0xa73994u), 0x0u);
    /* 00551262: mov dword ptr [0xa739a4], eax */ W32((u32)(0xa739a4u), r_eax);
    /* 00551267: mov dword ptr [0xa739a0], eax */ W32((u32)(0xa739a0u), r_eax);
    /* 0055126c: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0055126f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551274u); f_008581c5();
    /* 00551274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551275: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551278: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055127a: je 0x551500 */ if (fZ) goto L_00551500;
L_00551280:; BB(0x00551280);
    /* 00551280: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00551287: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055128e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551291: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551293: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551298: push 0x42700000 */ { u32 v = 0x42700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055129d: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005512a2: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5512a7u); f_005795a0();
    /* 005512a7: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 005512aa: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005512b1: mov dword ptr [0xa73990], eax */ W32((u32)(0xa73990u), r_eax);
    /* 005512b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005512bd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005512c4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005512c6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5512cbu); f_008581c5();
    /* 005512cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005512cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005512cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005512d1: je 0x5514f9 */ if (fZ) goto L_005514f9;
L_005512d7:; BB(0x005512d7);
    /* 005512d7: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005512de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005512e5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005512e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ef: push dword ptr [0xa73950] */ { u32 v = R32((u32)(0xa73950u)); r_esp -= 4; W32(r_esp, v); }
    /* 005512f5: push dword ptr [0xa7394c] */ { u32 v = R32((u32)(0xa7394cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005512fb: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551300u); f_005795a0();
    /* 00551300: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551303: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0055130a: mov dword ptr [0xa7398c], eax */ W32((u32)(0xa7398cu), r_eax);
    /* 0055130f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551316: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055131d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055131f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551324u); f_008581c5();
    /* 00551324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551325: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055132a: je 0x5514f2 */ if (fZ) goto L_005514f2;
L_00551330:; BB(0x00551330);
    /* 00551330: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00551337: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055133e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551343: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551348: push dword ptr [0xa73958] */ { u32 v = R32((u32)(0xa73958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055134e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551350: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551355u); f_005795a0();
    /* 00551355: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551358: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055135f: mov dword ptr [0xa73988], eax */ W32((u32)(0xa73988u), r_eax);
    /* 00551364: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055136b: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 00551370: mov ebx, dword ptr [0x9bd604] */ r_ebx = R32((u32)(0x9bd604u));
    /* 00551376: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 0055137c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055137e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551384: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055138c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x551398u); f_00579a28();
    /* 00551398: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 0055139d: mov ebx, dword ptr [0x9bd624] */ r_ebx = R32((u32)(0x9bd624u));
    /* 005513a3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 005513a9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005513ab: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005513b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005513b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005513b9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513bd: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513c0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5513c5u); f_00579a28();
    /* 005513c5: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 005513ca: mov edi, dword ptr [0x9bd614] */ r_edi = R32((u32)(0x9bd614u));
    /* 005513d0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005513d6: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005513dc: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005513df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005513e6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513ea: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005513f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005513f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005513f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005513fb: mov dword ptr [ebp - 0x38], 0xc1200000 */ W32((u32)(r_ebp+0xffffffc8u), 0xc1200000u);
    /* 00551402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551409: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00551410: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551414: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551417: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055141d: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x551422u); f_00579be8();
    /* 00551422: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551429u); f_008581c5();
    /* 00551429: mov dword ptr [0xa73980], eax */ W32((u32)(0xa73980u), r_eax);
    /* 0055142e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00551430: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x551435u); f_0077a684();
    /* 00551435: mov dword ptr [0xa73984], eax */ W32((u32)(0xa73984u), r_eax);
    /* 0055143a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055143c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551441u); f_0077a698();
    /* 00551441: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551447: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00551449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055144b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551450u); f_0077a698();
    /* 00551450: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551456: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00551458: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0055145b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551460u); f_0077a698();
    /* 00551460: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551466: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551468: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055146b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x551470u); f_0077a6b4();
    /* 00551470: mov dword ptr [0xa7397c], eax */ W32((u32)(0xa7397cu), r_eax);
    /* 00551475: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551477: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55147cu); f_0077a6cc();
    /* 0055147c: movzx edx, word ptr [0x924504] */ r_edx = (u32)R16((u32)(0x924504u));
    /* 00551483: movzx ecx, word ptr [0x924506] */ r_ecx = (u32)R16((u32)(0x924506u));
    /* 0055148a: movzx ebx, word ptr [0x924508] */ r_ebx = (u32)R16((u32)(0x924508u));
    /* 00551491: mov edi, dword ptr [0xa73974] */ r_edi = R32((u32)(0xa73974u));
    /* 00551497: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055149d: mov dword ptr [0xa73978], eax */ W32((u32)(0xa73978u), r_eax);
    /* 005514a2: mov eax, dword ptr [0x924500] */ r_eax = R32((u32)(0x924500u));
    /* 005514a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005514aa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005514ae: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005514b4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005514b8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005514bc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005514bf: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005514c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005514c5: push dword ptr [0x9bd704] */ { u32 v = R32((u32)(0x9bd704u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514cb: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514d1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005514d3: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5514d8u); f_00608470();
    /* 005514d8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005514db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005514de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005514ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005514f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005514f1: ret  */ FN_RET(0x00551214); r_esp += 4; return;
L_005514f2:; BB(0x005514f2);
    /* 005514f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514f4: jmp 0x55135f */ f_0055135f(); return;
L_005514f9:; BB(0x005514f9);
    /* 005514f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514fb: jmp 0x55130a */ f_0055130a(); return;
L_00551500:; BB(0x00551500);
    /* 00551500: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00551502: jmp 0x5512b1 */ f_005512b1(); return;
}

void f_005512b1(void) /* _WinMain@16_52_1 */
{
    FN_ENTER(0x005512b1);
    /* 005512b1: mov dword ptr [0xa73990], eax */ W32((u32)(0xa73990u), r_eax);
    /* 005512b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005512bd: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 005512c4: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005512c6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5512cbu); f_008581c5();
    /* 005512cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005512cc: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 005512cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005512d1: je 0x5514f9 */ if (fZ) goto L_005514f9;
L_005512d7:; BB(0x005512d7);
    /* 005512d7: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 005512de: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005512e5: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 005512e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ea: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005512ef: push dword ptr [0xa73950] */ { u32 v = R32((u32)(0xa73950u)); r_esp -= 4; W32(r_esp, v); }
    /* 005512f5: push dword ptr [0xa7394c] */ { u32 v = R32((u32)(0xa7394cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005512fb: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551300u); f_005795a0();
    /* 00551300: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551303: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0055130a: mov dword ptr [0xa7398c], eax */ W32((u32)(0xa7398cu), r_eax);
    /* 0055130f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551316: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055131d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055131f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551324u); f_008581c5();
    /* 00551324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551325: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055132a: je 0x5514f2 */ if (fZ) goto L_005514f2;
L_00551330:; BB(0x00551330);
    /* 00551330: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00551337: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055133e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551343: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551348: push dword ptr [0xa73958] */ { u32 v = R32((u32)(0xa73958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055134e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551350: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551355u); f_005795a0();
    /* 00551355: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551358: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055135f: mov dword ptr [0xa73988], eax */ W32((u32)(0xa73988u), r_eax);
    /* 00551364: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055136b: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 00551370: mov ebx, dword ptr [0x9bd604] */ r_ebx = R32((u32)(0x9bd604u));
    /* 00551376: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 0055137c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055137e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551384: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055138c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x551398u); f_00579a28();
    /* 00551398: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 0055139d: mov ebx, dword ptr [0x9bd624] */ r_ebx = R32((u32)(0x9bd624u));
    /* 005513a3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 005513a9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005513ab: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005513b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005513b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005513b9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513bd: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513c0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5513c5u); f_00579a28();
    /* 005513c5: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 005513ca: mov edi, dword ptr [0x9bd614] */ r_edi = R32((u32)(0x9bd614u));
    /* 005513d0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005513d6: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005513dc: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005513df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005513e6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513ea: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005513f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005513f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005513f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005513fb: mov dword ptr [ebp - 0x38], 0xc1200000 */ W32((u32)(r_ebp+0xffffffc8u), 0xc1200000u);
    /* 00551402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551409: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00551410: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551414: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551417: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055141d: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x551422u); f_00579be8();
    /* 00551422: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551429u); f_008581c5();
    /* 00551429: mov dword ptr [0xa73980], eax */ W32((u32)(0xa73980u), r_eax);
    /* 0055142e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00551430: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x551435u); f_0077a684();
    /* 00551435: mov dword ptr [0xa73984], eax */ W32((u32)(0xa73984u), r_eax);
    /* 0055143a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055143c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551441u); f_0077a698();
    /* 00551441: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551447: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00551449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055144b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551450u); f_0077a698();
    /* 00551450: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551456: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00551458: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0055145b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551460u); f_0077a698();
    /* 00551460: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551466: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551468: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055146b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x551470u); f_0077a6b4();
    /* 00551470: mov dword ptr [0xa7397c], eax */ W32((u32)(0xa7397cu), r_eax);
    /* 00551475: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551477: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55147cu); f_0077a6cc();
    /* 0055147c: movzx edx, word ptr [0x924504] */ r_edx = (u32)R16((u32)(0x924504u));
    /* 00551483: movzx ecx, word ptr [0x924506] */ r_ecx = (u32)R16((u32)(0x924506u));
    /* 0055148a: movzx ebx, word ptr [0x924508] */ r_ebx = (u32)R16((u32)(0x924508u));
    /* 00551491: mov edi, dword ptr [0xa73974] */ r_edi = R32((u32)(0xa73974u));
    /* 00551497: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055149d: mov dword ptr [0xa73978], eax */ W32((u32)(0xa73978u), r_eax);
    /* 005514a2: mov eax, dword ptr [0x924500] */ r_eax = R32((u32)(0x924500u));
    /* 005514a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005514aa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005514ae: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005514b4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005514b8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005514bc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005514bf: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005514c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005514c5: push dword ptr [0x9bd704] */ { u32 v = R32((u32)(0x9bd704u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514cb: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514d1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005514d3: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5514d8u); f_00608470();
    /* 005514d8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005514db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005514de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005514ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005514f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005514f1: ret  */ FN_RET(0x005512b1); r_esp += 4; return;
L_005514f2:; BB(0x005514f2);
    /* 005514f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514f4: jmp 0x55135f */ f_0055135f(); return;
L_005514f9:; BB(0x005514f9);
    /* 005514f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514fb: jmp 0x55130a */ f_0055130a(); return;
}

void f_0055130a(void) /* _WinMain@16_53_0 */
{
    FN_ENTER(0x0055130a);
    /* 0055130a: mov dword ptr [0xa7398c], eax */ W32((u32)(0xa7398cu), r_eax);
    /* 0055130f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00551316: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055131d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0055131f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551324u); f_008581c5();
    /* 00551324: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00551325: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00551328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055132a: je 0x5514f2 */ if (fZ) goto L_005514f2;
L_00551330:; BB(0x00551330);
    /* 00551330: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00551337: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055133e: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551341: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00551343: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00551348: push dword ptr [0xa73958] */ { u32 v = R32((u32)(0xa73958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055134e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00551350: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x551355u); f_005795a0();
    /* 00551355: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 00551358: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 0055135f: mov dword ptr [0xa73988], eax */ W32((u32)(0xa73988u), r_eax);
    /* 00551364: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055136b: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 00551370: mov ebx, dword ptr [0x9bd604] */ r_ebx = R32((u32)(0x9bd604u));
    /* 00551376: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 0055137c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055137e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551384: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055138c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x551398u); f_00579a28();
    /* 00551398: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 0055139d: mov ebx, dword ptr [0x9bd624] */ r_ebx = R32((u32)(0x9bd624u));
    /* 005513a3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 005513a9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005513ab: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005513b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005513b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005513b9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513bd: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513c0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5513c5u); f_00579a28();
    /* 005513c5: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 005513ca: mov edi, dword ptr [0x9bd614] */ r_edi = R32((u32)(0x9bd614u));
    /* 005513d0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005513d6: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005513dc: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005513df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005513e6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513ea: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005513f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005513f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005513f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005513fb: mov dword ptr [ebp - 0x38], 0xc1200000 */ W32((u32)(r_ebp+0xffffffc8u), 0xc1200000u);
    /* 00551402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551409: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00551410: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551414: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551417: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055141d: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x551422u); f_00579be8();
    /* 00551422: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551429u); f_008581c5();
    /* 00551429: mov dword ptr [0xa73980], eax */ W32((u32)(0xa73980u), r_eax);
    /* 0055142e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00551430: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x551435u); f_0077a684();
    /* 00551435: mov dword ptr [0xa73984], eax */ W32((u32)(0xa73984u), r_eax);
    /* 0055143a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055143c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551441u); f_0077a698();
    /* 00551441: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551447: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00551449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055144b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551450u); f_0077a698();
    /* 00551450: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551456: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00551458: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0055145b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551460u); f_0077a698();
    /* 00551460: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551466: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551468: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055146b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x551470u); f_0077a6b4();
    /* 00551470: mov dword ptr [0xa7397c], eax */ W32((u32)(0xa7397cu), r_eax);
    /* 00551475: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551477: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55147cu); f_0077a6cc();
    /* 0055147c: movzx edx, word ptr [0x924504] */ r_edx = (u32)R16((u32)(0x924504u));
    /* 00551483: movzx ecx, word ptr [0x924506] */ r_ecx = (u32)R16((u32)(0x924506u));
    /* 0055148a: movzx ebx, word ptr [0x924508] */ r_ebx = (u32)R16((u32)(0x924508u));
    /* 00551491: mov edi, dword ptr [0xa73974] */ r_edi = R32((u32)(0xa73974u));
    /* 00551497: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055149d: mov dword ptr [0xa73978], eax */ W32((u32)(0xa73978u), r_eax);
    /* 005514a2: mov eax, dword ptr [0x924500] */ r_eax = R32((u32)(0x924500u));
    /* 005514a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005514aa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005514ae: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005514b4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005514b8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005514bc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005514bf: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005514c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005514c5: push dword ptr [0x9bd704] */ { u32 v = R32((u32)(0x9bd704u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514cb: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514d1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005514d3: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5514d8u); f_00608470();
    /* 005514d8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005514db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005514de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005514ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005514f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005514f1: ret  */ FN_RET(0x0055130a); r_esp += 4; return;
L_005514f2:; BB(0x005514f2);
    /* 005514f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005514f4: jmp 0x55135f */ f_0055135f(); return;
}

void f_0055135f(void) /* _WinMain@16_52_0 */
{
    FN_ENTER(0x0055135f);
    /* 0055135f: mov dword ptr [0xa73988], eax */ W32((u32)(0xa73988u), r_eax);
    /* 00551364: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055136b: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 00551370: mov ebx, dword ptr [0x9bd604] */ r_ebx = R32((u32)(0x9bd604u));
    /* 00551376: mov ecx, dword ptr [0xa73990] */ r_ecx = R32((u32)(0xa73990u));
    /* 0055137c: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0055137e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00551384: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00551386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055138c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x551398u); f_00579a28();
    /* 00551398: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 0055139d: mov ebx, dword ptr [0x9bd624] */ r_ebx = R32((u32)(0x9bd624u));
    /* 005513a3: mov ecx, dword ptr [0xa7398c] */ r_ecx = R32((u32)(0xa7398cu));
    /* 005513a9: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005513ab: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005513b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005513b3: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005513b9: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513bd: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005513c0: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5513c5u); f_00579a28();
    /* 005513c5: mov eax, dword ptr [0xa73974] */ r_eax = R32((u32)(0xa73974u));
    /* 005513ca: mov edi, dword ptr [0x9bd614] */ r_edi = R32((u32)(0x9bd614u));
    /* 005513d0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005513d6: mov esi, dword ptr [eax + 0x430] */ r_esi = R32((u32)(r_eax+0x430u));
    /* 005513dc: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005513df: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005513e6: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005513e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005513ea: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005513f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005513f2: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 005513f9: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 005513fb: mov dword ptr [ebp - 0x38], 0xc1200000 */ W32((u32)(r_ebp+0xffffffc8u), 0xc1200000u);
    /* 00551402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00551409: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 00551410: push dword ptr [esi + edi*8 + 4] */ { u32 v = R32((u32)(r_esi+r_edi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551414: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00551417: mov ecx, dword ptr [0xa73988] */ r_ecx = R32((u32)(0xa73988u));
    /* 0055141d: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x551422u); f_00579be8();
    /* 00551422: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00551424: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x551429u); f_008581c5();
    /* 00551429: mov dword ptr [0xa73980], eax */ W32((u32)(0xa73980u), r_eax);
    /* 0055142e: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00551430: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x551435u); f_0077a684();
    /* 00551435: mov dword ptr [0xa73984], eax */ W32((u32)(0xa73984u), r_eax);
    /* 0055143a: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0055143c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551441u); f_0077a698();
    /* 00551441: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551447: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 00551449: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055144b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551450u); f_0077a698();
    /* 00551450: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551456: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 00551458: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0055145b: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x551460u); f_0077a698();
    /* 00551460: mov edx, dword ptr [0xa73980] */ r_edx = R32((u32)(0xa73980u));
    /* 00551466: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551468: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055146b: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x551470u); f_0077a6b4();
    /* 00551470: mov dword ptr [0xa7397c], eax */ W32((u32)(0xa7397cu), r_eax);
    /* 00551475: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 00551477: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55147cu); f_0077a6cc();
    /* 0055147c: movzx edx, word ptr [0x924504] */ r_edx = (u32)R16((u32)(0x924504u));
    /* 00551483: movzx ecx, word ptr [0x924506] */ r_ecx = (u32)R16((u32)(0x924506u));
    /* 0055148a: movzx ebx, word ptr [0x924508] */ r_ebx = (u32)R16((u32)(0x924508u));
    /* 00551491: mov edi, dword ptr [0xa73974] */ r_edi = R32((u32)(0xa73974u));
    /* 00551497: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055149d: mov dword ptr [0xa73978], eax */ W32((u32)(0xa73978u), r_eax);
    /* 005514a2: mov eax, dword ptr [0x924500] */ r_eax = R32((u32)(0x924500u));
    /* 005514a7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005514aa: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005514ae: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005514b4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005514b8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005514bc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005514bf: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005514c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005514c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005514c5: push dword ptr [0x9bd704] */ { u32 v = R32((u32)(0x9bd704u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514cb: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005514ce: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005514d1: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005514d3: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5514d8u); f_00608470();
    /* 005514d8: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005514db: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005514de: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005514e1: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005514e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005514e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005514ee: mov esp, ebp */ r_esp = r_ebp;
    /* 005514f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005514f1: ret  */ FN_RET(0x0055135f); r_esp += 4; return;
}

void f_00551509(void) /* _WinMain@16_53 */
{
    FN_ENTER(0x00551509);
    /* 00551509: jmp 0x551214 */ f_00551214(); return;
}

void f_0055222a(void) /* _WinMain@16_52_3 */
{
    FN_ENTER(0x0055222a);
    /* 0055222a: mov dword ptr [0xa739e0], eax */ W32((u32)(0xa739e0u), r_eax);
    /* 0055222f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00552236: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00552238: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0055223e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00552241: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00552244: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 00552247: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 0055224a: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0055224d: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00552250: mov dword ptr [0xa739d4], edx */ W32((u32)(0xa739d4u), r_edx);
    /* 00552256: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00552259: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 0055225c: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0055225f: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 00552262: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00552265: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00552268: mov dword ptr [0xa739d8], edx */ W32((u32)(0xa739d8u), r_edx);
    /* 0055226e: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 00552271: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00552274: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00552277: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055227a: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055227d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00552280: mov dword ptr [0xa739dc], eax */ W32((u32)(0xa739dcu), r_eax);
    /* 00552285: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552287: mov dword ptr [0xa739c8], eax */ W32((u32)(0xa739c8u), r_eax);
    /* 0055228c: mov dword ptr [0xa739cc], eax */ W32((u32)(0xa739ccu), r_eax);
    /* 00552291: mov dword ptr [0xa739d0], eax */ W32((u32)(0xa739d0u), r_eax);
    /* 00552296: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00552299: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55229eu); f_008581c5();
    /* 0055229e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055229f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005522a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522a4: je 0x552544 */ if (fZ) goto L_00552544;
L_005522aa:; BB(0x005522aa);
    /* 005522aa: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005522b1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005522b8: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 005522bb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005522bd: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522c2: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522c7: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005522cc: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5522d1u); f_005795a0();
    /* 005522d1: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 005522d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005522db: mov dword ptr [0xa739e4], eax */ W32((u32)(0xa739e4u), r_eax);
    /* 005522e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005522e7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005522ee: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005522f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5522f5u); f_008581c5();
    /* 005522f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005522f6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005522f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522fb: je 0x55253d */ if (fZ) goto L_0055253d;
L_00552301:; BB(0x00552301);
    /* 00552301: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00552308: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055230f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00552312: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552314: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552319: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055231e: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552323: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x552328u); f_005795a0();
    /* 00552328: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055232b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00552332: mov dword ptr [0xa739e8], eax */ W32((u32)(0xa739e8u), r_eax);
    /* 00552337: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055233e: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552343: mov ebx, dword ptr [0x9bd874] */ r_ebx = R32((u32)(0x9bd874u));
    /* 00552349: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 0055234f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00552351: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552357: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00552359: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055235f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552363: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552366: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x55236bu); f_00579a28();
    /* 0055236b: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552370: mov ebx, dword ptr [0x9bd884] */ r_ebx = R32((u32)(0x9bd884u));
    /* 00552376: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 0055237c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055237e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552384: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00552386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055238c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x552398u); f_00579a28();
    /* 00552398: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055239a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55239fu); f_008581c5();
    /* 0055239f: mov dword ptr [0xa739c4], eax */ W32((u32)(0xa739c4u), r_eax);
    /* 005523a4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523a6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523abu); f_008581c5();
    /* 005523ab: mov dword ptr [0xa739c0], eax */ W32((u32)(0xa739c0u), r_eax);
    /* 005523b0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523b7u); f_008581c5();
    /* 005523b7: mov dword ptr [0xa739bc], eax */ W32((u32)(0xa739bcu), r_eax);
    /* 005523bc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523be: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523c3u); f_008581c5();
    /* 005523c3: mov dword ptr [0xa739b8], eax */ W32((u32)(0xa739b8u), r_eax);
    /* 005523c8: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005523ca: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523cfu); f_0077a684();
    /* 005523cf: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523d5: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005523d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005523d9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523deu); f_0077a684();
    /* 005523de: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523e4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005523e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005523e9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523eeu); f_0077a684();
    /* 005523ee: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523f4: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005523f6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005523f9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5523feu); f_0077a698();
    /* 005523fe: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552404: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00552406: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552408: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55240du); f_0077a698();
    /* 0055240d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552413: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552415: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552418: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55241du); f_0077a698();
    /* 0055241d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552423: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552425: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552428: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55242du); f_0077a6b4();
    /* 0055242d: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552433: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552435: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552437: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55243cu); f_0077a6b4();
    /* 0055243c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552442: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552444: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552447: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55244cu); f_0077a6b4();
    /* 0055244c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552452: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552454: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552457: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55245cu); f_0077a6cc();
    /* 0055245c: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552462: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552464: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552466: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55246bu); f_0077a6cc();
    /* 0055246b: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552471: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552473: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552476: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55247bu); f_0077a6cc();
    /* 0055247b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055247e: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552484: mov esi, dword ptr [0x9247d8] */ r_esi = R32((u32)(0x9247d8u));
    /* 0055248a: movzx edi, word ptr [0x9247dc] */ r_edi = (u32)R16((u32)(0x9247dcu));
    /* 00552491: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552494: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 0055249a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0055249d: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005524a1: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005524a6: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 005524ab: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005524af: movzx eax, word ptr [0x9247de] */ r_eax = (u32)R16((u32)(0x9247deu));
    /* 005524b6: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005524ba: mov ebx, 0x1d */ r_ebx = 0x1du;
    /* 005524bf: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005524c3: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005524c7: movzx eax, word ptr [0x9247e0] */ r_eax = (u32)R16((u32)(0x9247e0u));
    /* 005524ce: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005524d2: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005524d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005524db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005524dd:; BB(0x005524dd);
    /* 005524dd: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 005524e2: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005524e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524e6: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005524ec: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005524ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005524f1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005524f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524f6: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fc: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524fe: push dword ptr [edx*4 + 0x9bd7ac] */ { u32 v = R32((u32)(r_edx*4+0x9bd7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552505: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552509: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055250d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055250e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x552513u); f_00608470();
    /* 00552513: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552516: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00552519: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055251c: jge 0x552526 */ if ((fS==fO)) goto L_00552526;
L_0055251e:; BB(0x0055251e);
    /* 0055251e: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 00552524: jmp 0x5524dd */ goto L_005524dd;
L_00552526:; BB(0x00552526);
    /* 00552526: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552529: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055252c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055252f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552539: mov esp, ebp */ r_esp = r_ebp;
    /* 0055253b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055253c: ret  */ FN_RET(0x0055222a); r_esp += 4; return;
L_0055253d:; BB(0x0055253d);
    /* 0055253d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055253f: jmp 0x552332 */ f_00552332(); return;
L_00552544:; BB(0x00552544);
    /* 00552544: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00552546: jmp 0x5522db */ f_005522db(); return;
}

void f_005522db(void) /* _WinMain@16_54_0 */
{
    FN_ENTER(0x005522db);
    /* 005522db: mov dword ptr [0xa739e4], eax */ W32((u32)(0xa739e4u), r_eax);
    /* 005522e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005522e7: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005522ee: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005522f0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5522f5u); f_008581c5();
    /* 005522f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005522f6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005522f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005522fb: je 0x55253d */ if (fZ) goto L_0055253d;
L_00552301:; BB(0x00552301);
    /* 00552301: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00552308: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055230f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00552312: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00552314: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552319: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055231e: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00552323: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x552328u); f_005795a0();
    /* 00552328: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055232b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00552332: mov dword ptr [0xa739e8], eax */ W32((u32)(0xa739e8u), r_eax);
    /* 00552337: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055233e: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552343: mov ebx, dword ptr [0x9bd874] */ r_ebx = R32((u32)(0x9bd874u));
    /* 00552349: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 0055234f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00552351: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552357: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00552359: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055235f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552363: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552366: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x55236bu); f_00579a28();
    /* 0055236b: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552370: mov ebx, dword ptr [0x9bd884] */ r_ebx = R32((u32)(0x9bd884u));
    /* 00552376: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 0055237c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055237e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552384: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00552386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055238c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x552398u); f_00579a28();
    /* 00552398: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055239a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55239fu); f_008581c5();
    /* 0055239f: mov dword ptr [0xa739c4], eax */ W32((u32)(0xa739c4u), r_eax);
    /* 005523a4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523a6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523abu); f_008581c5();
    /* 005523ab: mov dword ptr [0xa739c0], eax */ W32((u32)(0xa739c0u), r_eax);
    /* 005523b0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523b7u); f_008581c5();
    /* 005523b7: mov dword ptr [0xa739bc], eax */ W32((u32)(0xa739bcu), r_eax);
    /* 005523bc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523be: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523c3u); f_008581c5();
    /* 005523c3: mov dword ptr [0xa739b8], eax */ W32((u32)(0xa739b8u), r_eax);
    /* 005523c8: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005523ca: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523cfu); f_0077a684();
    /* 005523cf: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523d5: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005523d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005523d9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523deu); f_0077a684();
    /* 005523de: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523e4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005523e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005523e9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523eeu); f_0077a684();
    /* 005523ee: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523f4: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005523f6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005523f9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5523feu); f_0077a698();
    /* 005523fe: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552404: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00552406: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552408: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55240du); f_0077a698();
    /* 0055240d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552413: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552415: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552418: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55241du); f_0077a698();
    /* 0055241d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552423: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552425: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552428: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55242du); f_0077a6b4();
    /* 0055242d: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552433: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552435: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552437: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55243cu); f_0077a6b4();
    /* 0055243c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552442: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552444: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552447: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55244cu); f_0077a6b4();
    /* 0055244c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552452: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552454: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552457: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55245cu); f_0077a6cc();
    /* 0055245c: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552462: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552464: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552466: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55246bu); f_0077a6cc();
    /* 0055246b: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552471: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552473: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552476: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55247bu); f_0077a6cc();
    /* 0055247b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055247e: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552484: mov esi, dword ptr [0x9247d8] */ r_esi = R32((u32)(0x9247d8u));
    /* 0055248a: movzx edi, word ptr [0x9247dc] */ r_edi = (u32)R16((u32)(0x9247dcu));
    /* 00552491: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552494: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 0055249a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0055249d: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005524a1: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005524a6: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 005524ab: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005524af: movzx eax, word ptr [0x9247de] */ r_eax = (u32)R16((u32)(0x9247deu));
    /* 005524b6: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005524ba: mov ebx, 0x1d */ r_ebx = 0x1du;
    /* 005524bf: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005524c3: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005524c7: movzx eax, word ptr [0x9247e0] */ r_eax = (u32)R16((u32)(0x9247e0u));
    /* 005524ce: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005524d2: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005524d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005524db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005524dd:; BB(0x005524dd);
    /* 005524dd: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 005524e2: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005524e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524e6: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005524ec: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005524ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005524f1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005524f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524f6: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fc: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524fe: push dword ptr [edx*4 + 0x9bd7ac] */ { u32 v = R32((u32)(r_edx*4+0x9bd7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552505: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552509: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055250d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055250e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x552513u); f_00608470();
    /* 00552513: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552516: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00552519: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055251c: jge 0x552526 */ if ((fS==fO)) goto L_00552526;
L_0055251e:; BB(0x0055251e);
    /* 0055251e: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 00552524: jmp 0x5524dd */ goto L_005524dd;
L_00552526:; BB(0x00552526);
    /* 00552526: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552529: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055252c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055252f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552539: mov esp, ebp */ r_esp = r_ebp;
    /* 0055253b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055253c: ret  */ FN_RET(0x005522db); r_esp += 4; return;
L_0055253d:; BB(0x0055253d);
    /* 0055253d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055253f: jmp 0x552332 */ f_00552332(); return;
}

void f_00552332(void) /* _WinMain@16_52_2 */
{
    FN_ENTER(0x00552332);
    /* 00552332: mov dword ptr [0xa739e8], eax */ W32((u32)(0xa739e8u), r_eax);
    /* 00552337: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055233e: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552343: mov ebx, dword ptr [0x9bd874] */ r_ebx = R32((u32)(0x9bd874u));
    /* 00552349: mov ecx, dword ptr [0xa739e4] */ r_ecx = R32((u32)(0xa739e4u));
    /* 0055234f: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00552351: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552357: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00552359: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055235f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552363: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552366: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x55236bu); f_00579a28();
    /* 0055236b: mov eax, dword ptr [0xa739e0] */ r_eax = R32((u32)(0xa739e0u));
    /* 00552370: mov ebx, dword ptr [0x9bd884] */ r_ebx = R32((u32)(0x9bd884u));
    /* 00552376: mov ecx, dword ptr [0xa739e8] */ r_ecx = R32((u32)(0xa739e8u));
    /* 0055237c: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0055237e: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00552384: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00552386: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0055238c: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552390: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00552393: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x552398u); f_00579a28();
    /* 00552398: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0055239a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55239fu); f_008581c5();
    /* 0055239f: mov dword ptr [0xa739c4], eax */ W32((u32)(0xa739c4u), r_eax);
    /* 005523a4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523a6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523abu); f_008581c5();
    /* 005523ab: mov dword ptr [0xa739c0], eax */ W32((u32)(0xa739c0u), r_eax);
    /* 005523b0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523b2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523b7u); f_008581c5();
    /* 005523b7: mov dword ptr [0xa739bc], eax */ W32((u32)(0xa739bcu), r_eax);
    /* 005523bc: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005523be: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5523c3u); f_008581c5();
    /* 005523c3: mov dword ptr [0xa739b8], eax */ W32((u32)(0xa739b8u), r_eax);
    /* 005523c8: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 005523ca: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523cfu); f_0077a684();
    /* 005523cf: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523d5: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 005523d7: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005523d9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523deu); f_0077a684();
    /* 005523de: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523e4: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 005523e6: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005523e9: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5523eeu); f_0077a684();
    /* 005523ee: mov edx, dword ptr [0xa739c4] */ r_edx = R32((u32)(0xa739c4u));
    /* 005523f4: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005523f6: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005523f9: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5523feu); f_0077a698();
    /* 005523fe: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552404: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 00552406: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552408: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55240du); f_0077a698();
    /* 0055240d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552413: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00552415: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552418: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x55241du); f_0077a698();
    /* 0055241d: mov edx, dword ptr [0xa739c0] */ r_edx = R32((u32)(0xa739c0u));
    /* 00552423: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552425: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552428: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55242du); f_0077a6b4();
    /* 0055242d: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552433: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552435: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552437: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55243cu); f_0077a6b4();
    /* 0055243c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552442: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552444: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552447: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x55244cu); f_0077a6b4();
    /* 0055244c: mov edx, dword ptr [0xa739bc] */ r_edx = R32((u32)(0xa739bcu));
    /* 00552452: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00552454: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552457: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55245cu); f_0077a6cc();
    /* 0055245c: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552462: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00552464: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00552466: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55246bu); f_0077a6cc();
    /* 0055246b: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552471: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00552473: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00552476: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55247bu); f_0077a6cc();
    /* 0055247b: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055247e: mov edx, dword ptr [0xa739b8] */ r_edx = R32((u32)(0xa739b8u));
    /* 00552484: mov esi, dword ptr [0x9247d8] */ r_esi = R32((u32)(0x9247d8u));
    /* 0055248a: movzx edi, word ptr [0x9247dc] */ r_edi = (u32)R16((u32)(0x9247dcu));
    /* 00552491: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00552494: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 0055249a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0055249d: mov word ptr [ebp - 0x24], di */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edi);
    /* 005524a1: mov eax, 0x1b */ r_eax = 0x1bu;
    /* 005524a6: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 005524ab: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005524af: movzx eax, word ptr [0x9247de] */ r_eax = (u32)R16((u32)(0x9247deu));
    /* 005524b6: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 005524ba: mov ebx, 0x1d */ r_ebx = 0x1du;
    /* 005524bf: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 005524c3: mov word ptr [ebp - 0x22], ax */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_eax);
    /* 005524c7: movzx eax, word ptr [0x9247e0] */ r_eax = (u32)R16((u32)(0x9247e0u));
    /* 005524ce: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005524d2: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005524d8: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005524db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005524dd:; BB(0x005524dd);
    /* 005524dd: movsx edi, word ptr [ebp + ebx*2 - 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffccu));
    /* 005524e2: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005524e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005524e6: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005524ec: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005524ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005524f1: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005524f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524f6: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524f8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005524fc: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005524fe: push dword ptr [edx*4 + 0x9bd7ac] */ { u32 v = R32((u32)(r_edx*4+0x9bd7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552505: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00552509: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055250d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0055250e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x552513u); f_00608470();
    /* 00552513: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00552516: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00552519: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0055251c: jge 0x552526 */ if ((fS==fO)) goto L_00552526;
L_0055251e:; BB(0x0055251e);
    /* 0055251e: mov edx, dword ptr [0xa739e0] */ r_edx = R32((u32)(0xa739e0u));
    /* 00552524: jmp 0x5524dd */ goto L_005524dd;
L_00552526:; BB(0x00552526);
    /* 00552526: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00552529: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055252c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055252f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00552532: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00552539: mov esp, ebp */ r_esp = r_ebp;
    /* 0055253b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055253c: ret  */ FN_RET(0x00552332); r_esp += 4; return;
}

void f_0055254d(void) /* _WinMain@16_52 */
{
    FN_ENTER(0x0055254d);
    /* 0055254d: jmp 0x55222a */ f_0055222a(); return;
}

void f_00554190(void) /* _WinMain@16_54_1 */
{
    FN_ENTER(0x00554190);
    /* 00554190: mov dword ptr [0xa73a10], eax */ W32((u32)(0xa73a10u), r_eax);
    /* 00554195: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055419c: jmp 0x5541f3 */ goto L_005541f3;
L_005541f3:; BB(0x005541f3);
    /* 005541f3: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005541fa: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005541fc: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554201u); f_008581c5();
    /* 00554201: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554202: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00554205: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00554207: je 0x554473 */ if (fZ) goto L_00554473;
L_0055420d:; BB(0x0055420d);
    /* 0055420d: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 00554214: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0055421b: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0055421e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00554220: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00554225: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055422a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055422c: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x554231u); f_005795a0();
    /* 00554231: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554234: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0055423b:; BB(0x0055423b);
    /* 0055423b: mov dword ptr [0xa73a18], eax */ W32((u32)(0xa73a18u), r_eax);
    /* 00554240: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00554247: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0055424e: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00554250: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554255u); f_008581c5();
    /* 00554255: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00554256: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00554259: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055425b: je 0x55446c */ if (fZ) goto L_0055446c;
L_00554261:; BB(0x00554261);
    /* 00554261: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 00554268: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0055426f: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554272: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00554274: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00554279: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055427e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554280: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x554285u); f_005795a0();
    /* 00554285: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00554288: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0055428f:; BB(0x0055428f);
    /* 0055428f: mov dword ptr [0xa73a1c], eax */ W32((u32)(0xa73a1cu), r_eax);
    /* 00554294: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055429b: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5542a0u); f_0082fa9c();
    /* 005542a0: mov eax, dword ptr [0xa73a10] */ r_eax = R32((u32)(0xa73a10u));
    /* 005542a5: mov ebx, dword ptr [0x9bd9f4] */ r_ebx = R32((u32)(0x9bd9f4u));
    /* 005542ab: mov ecx, dword ptr [0xa73a18] */ r_ecx = R32((u32)(0xa73a18u));
    /* 005542b1: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 005542b3: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005542b9: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005542bb: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005542c1: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542c5: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542c8: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5542cdu); f_00579a28();
    /* 005542cd: mov eax, dword ptr [0xa73a10] */ r_eax = R32((u32)(0xa73a10u));
    /* 005542d2: mov ebx, dword ptr [0x9bda04] */ r_ebx = R32((u32)(0x9bda04u));
    /* 005542d8: mov ecx, dword ptr [0xa73a1c] */ r_ecx = R32((u32)(0xa73a1cu));
    /* 005542de: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 005542e0: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005542e6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005542e8: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005542ee: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542f2: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005542f5: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5542fau); f_00579a28();
    /* 005542fa: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5542ffu); f_0082faac();
    /* 005542ff: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554301: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554306u); f_008581c5();
    /* 00554306: mov dword ptr [0xa73a0c], eax */ W32((u32)(0xa73a0cu), r_eax);
    /* 0055430b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0055430d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x554312u); f_008581c5();
    /* 00554312: mov dword ptr [0xa73a08], eax */ W32((u32)(0xa73a08u), r_eax);
    /* 00554317: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554319: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55431eu); f_008581c5();
    /* 0055431e: mov dword ptr [0xa73a04], eax */ W32((u32)(0xa73a04u), r_eax);
    /* 00554323: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00554325: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55432au); f_008581c5();
    /* 0055432a: mov dword ptr [0xa73a00], eax */ W32((u32)(0xa73a00u), r_eax);
    /* 0055432f: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00554331: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x554336u); f_0077a684();
    /* 00554336: mov edx, dword ptr [0xa73a0c] */ r_edx = R32((u32)(0xa73a0cu));
    /* 0055433c: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0055433e: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00554340: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x554345u); f_0077a684();
    /* 00554345: mov edx, dword ptr [0xa73a0c] */ r_edx = R32((u32)(0xa73a0cu));
    /* 0055434b: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0055434d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00554350: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554355u); f_0077a698();
    /* 00554355: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055435b: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0055435d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055435f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x554364u); f_0077a698();
    /* 00554364: mov edx, dword ptr [0xa73a08] */ r_edx = R32((u32)(0xa73a08u));
    /* 0055436a: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055436c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055436f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554374u); f_0077a6b4();
    /* 00554374: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 0055437a: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055437c: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055437e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x554383u); f_0077a6b4();
    /* 00554383: mov edx, dword ptr [0xa73a04] */ r_edx = R32((u32)(0xa73a04u));
    /* 00554389: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0055438b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0055438e: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x554393u); f_0077a6cc();
    /* 00554393: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 00554399: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0055439b: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0055439d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5543a2u); f_0077a6cc();
    /* 005543a2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005543a5: mov edx, dword ptr [0xa73a00] */ r_edx = R32((u32)(0xa73a00u));
    /* 005543ab: mov ebx, dword ptr [0x9248dc] */ r_ebx = R32((u32)(0x9248dcu));
    /* 005543b1: movzx esi, word ptr [0x9248e0] */ r_esi = (u32)R16((u32)(0x9248e0u));
    /* 005543b8: movzx edi, word ptr [0x9248e2] */ r_edi = (u32)R16((u32)(0x9248e2u));
    /* 005543bf: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005543c2: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 005543c8: mov dword ptr [0xa73a14], 0 */ W32((u32)(0xa73a14u), 0x0u);
    /* 005543d2: mov eax, 0x45 */ r_eax = 0x45u;
    /* 005543d7: mov ecx, 0x4f */ r_ecx = 0x4fu;
    /* 005543dc: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 005543e0: movzx eax, word ptr [0x9248e4] */ r_eax = (u32)R16((u32)(0x9248e4u));
    /* 005543e7: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 005543eb: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005543ee: mov word ptr [ebp - 0x24], si */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_esi);
    /* 005543f2: mov word ptr [ebp - 0x22], di */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_edi);
    /* 005543f6: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005543fa: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00554400: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00554402: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00554405:; BB(0x00554405);
    /* 00554405: movsx edi, word ptr [ebp + ebx*2 - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 0055440a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055440d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055440e: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00554414: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00554417: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00554419: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0055441c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055441e: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554420: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554422: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00554424: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00554426: push dword ptr [edx*4 + 0x9bd96c] */ { u32 v = R32((u32)(r_edx*4+0x9bd96cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055442d: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00554431: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00554435: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00554436: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55443bu); f_00608470();
    /* 0055443b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055443e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00554441: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00554444: jge 0x55444e */ if ((fS==fO)) goto L_0055444e;
L_00554446:; BB(0x00554446);
    /* 00554446: mov edx, dword ptr [0xa73a10] */ r_edx = R32((u32)(0xa73a10u));
    /* 0055444c: jmp 0x554405 */ goto L_00554405;
L_0055444e:; BB(0x0055444e);
    /* 0055444e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00554451: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00554454: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00554457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055445a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00554461: mov esp, ebp */ r_esp = r_ebp;
    /* 00554463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00554464: ret  */ FN_RET(0x00554190); r_esp += 4; return;
L_0055446c:; BB(0x0055446c);
    /* 0055446c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055446e: jmp 0x55428f */ goto L_0055428f;
L_00554473:; BB(0x00554473);
    /* 00554473: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00554475: jmp 0x55423b */ goto L_0055423b;
}

void f_00554467(void) /* _WinMain@16_54 */
{
    FN_ENTER(0x00554467);
    /* 00554467: jmp 0x554190 */ f_00554190(); return;
}

void f_00556668(void) /* _WinMain@16_55_0 */
{
    FN_ENTER(0x00556668);
    /* 00556668: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055666f: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556676: push 0x424 */ { u32 v = 0x424u; r_esp -= 4; W32(r_esp, v); }
    /* 0055667b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x556680u); f_005caba4();
    /* 00556680: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00556683: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556686: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00556689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055668b: je 0x55691a */ if (fZ) goto L_0055691a;
L_00556691:; BB(0x00556691);
    /* 00556691: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556698: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055669f: mov ecx, eax */ r_ecx = r_eax;
    /* 005566a1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005566a4: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 005566a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005566a8: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x5566adu); f_0052c3fc();
    /* 005566ad: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005566b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005566b7: mov dword ptr [eax], 0xb04760 */ W32((u32)(r_eax), 0xb04760u);
    /* 005566bd: lea ecx, [eax + 0x3b8] */ r_ecx = (u32)(r_eax+0x3b8u);
    /* 005566c3: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x5566c8u); f_00576a48();
    /* 005566c8: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005566cf: mov eax, dword ptr [0x9bdd3c] */ r_eax = R32((u32)(0x9bdd3cu));
    /* 005566d4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005566d7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 005566da: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005566dc: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005566df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005566e0: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x5566e6u); call_ind(t); }
    /* 005566e6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005566e9: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005566ec: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 005566ef: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 005566f2: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005566f5: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 005566f8: mov dword ptr [esi + 0x48], eax */ W32((u32)(r_esi+0x48u), r_eax);
    /* 005566fb: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 005566fe: mov dword ptr [esi + 0x2a4], ecx */ W32((u32)(r_esi+0x2a4u), r_ecx);
    /* 00556704: mov dword ptr [esi + 0x2a8], eax */ W32((u32)(r_esi+0x2a8u), r_eax);
    /* 0055670a: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 00556710: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00556716: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 0055671c: mov dword ptr [esi + 0x29c], eax */ W32((u32)(r_esi+0x29cu), r_eax);
    /* 00556722: mov dword ptr [esi + 0x2a0], edx */ W32((u32)(r_esi+0x2a0u), r_edx);
    /* 00556728: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 0055672e: mov dword ptr [esi + 0xdc], ebx */ W32((u32)(r_esi+0xdcu), r_ebx);
    /* 00556734: movsx eax, word ptr [edi + 0x3c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x3cu));
    /* 00556738: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055673a: je 0x556743 */ if (fZ) goto L_00556743;
L_0055673c:; BB(0x0055673c);
    /* 0055673c: mov edx, 1 */ r_edx = 0x1u;
    /* 00556741: jmp 0x556745 */ goto L_00556745;
L_00556743:; BB(0x00556743);
    /* 00556743: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00556745:; BB(0x00556745);
    /* 00556745: mov eax, esi */ r_eax = r_esi;
    /* 00556747: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0055674a: mov dword ptr [eax + 0x370], edx */ W32((u32)(r_eax+0x370u), r_edx);
    /* 00556750: movsx esi, word ptr [ebx + 0x3e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x3eu));
    /* 00556754: mov dword ptr [eax + 0x374], esi */ W32((u32)(r_eax+0x374u), r_esi);
    /* 0055675a: mov edi, dword ptr [ecx + 0x42c] */ r_edi = R32((u32)(r_ecx+0x42cu));
    /* 00556760: mov ebx, dword ptr [edi + 8] */ r_ebx = R32((u32)(r_edi+0x8u));
    /* 00556763: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 00556766: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556768: jne 0x556775 */ if (!fZ) goto L_00556775;
L_0055676a:; BB(0x0055676a);
    /* 0055676a: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 00556770: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00556773: jmp 0x55677a */ goto L_0055677a;
L_00556775:; BB(0x00556775);
    /* 00556775: mov eax, dword ptr [0xa73b1c] */ r_eax = R32((u32)(0xa73b1cu));
L_0055677a:; BB(0x0055677a);
    /* 0055677a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055677d: mov dword ptr [ecx + 0xd8], 0x9bdbe0 */ W32((u32)(r_ecx+0xd8u), 0x9bdbe0u);
    /* 00556787: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0055678a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055678c: push 0x9bdd5c */ { u32 v = 0x9bdd5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556791: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x556796u); f_007b9a88();
    /* 00556796: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556799: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 0055679f: push dword ptr [eax*4 + 0xa73afc] */ { u32 v = R32((u32)(r_eax*4+0xa73afcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005567a6: push dword ptr [eax*4 + 0xa73b04] */ { u32 v = R32((u32)(r_eax*4+0xa73b04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005567ad: push dword ptr [eax*4 + 0xa73b0c] */ { u32 v = R32((u32)(r_eax*4+0xa73b0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005567b4: mov dword ptr [ecx + 0x358], 0x9bdd40 */ W32((u32)(r_ecx+0x358u), 0x9bdd40u);
    /* 005567be: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x5567c3u); f_007868f8();
    /* 005567c3: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567c6: call 0x55468c */ r_esp -= 4; W32(r_esp, 0x5567cbu); f_0055468c();
    /* 005567cb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567ce: mov eax, 5 */ r_eax = 0x5u;
    /* 005567d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005567d4: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005567db: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5567e0u); f_007aa4c8();
    /* 005567e0: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005567e3: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 005567ea: movsx ebx, word ptr [ecx + 0x2bc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005567f1: movzx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)R16((u32)(r_ecx+0x2beu));
    /* 005567f8: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 005567ff: mov word ptr [ecx + 0x334], bx */ W16((u32)(r_ecx+0x334u), (u16)r_ebx);
    /* 00556806: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 0055680d: mov word ptr [ecx + 0x346], bx */ W16((u32)(r_ecx+0x346u), (u16)r_ebx);
    /* 00556814: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00556816: mov word ptr [ecx + 0x39a], si */ W16((u32)(r_ecx+0x39au), (u16)r_esi);
    /* 0055681d: mov dword ptr [ecx + 0x39c], esi */ W32((u32)(r_ecx+0x39cu), r_esi);
    /* 00556823: mov dword ptr [ecx + 0x3a0], esi */ W32((u32)(r_ecx+0x3a0u), r_esi);
    /* 00556829: mov dword ptr [ecx + 0x3a4], esi */ W32((u32)(r_ecx+0x3a4u), r_esi);
    /* 0055682f: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x556834u); f_0078730c();
    /* 00556834: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556837: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x55683cu); f_00786bbc();
    /* 0055683c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055683f: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 00556845: mov ebx, dword ptr [ecx + 0x370] */ r_ebx = R32((u32)(r_ecx+0x370u));
    /* 0055684b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0055684e: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 00556854: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00556856: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 00556860: mov word ptr [ecx + 0x398], dx */ W16((u32)(r_ecx+0x398u), (u16)r_edx);
    /* 00556867: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556869: je 0x556874 */ if (fZ) goto L_00556874;
L_0055686b:; BB(0x0055686b);
    /* 0055686b: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0055686d: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x556872u); f_00787550();
    /* 00556872: jmp 0x55687b */ goto L_0055687b;
L_00556874:; BB(0x00556874);
    /* 00556874: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556876: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x55687bu); f_00787550();
L_0055687b:; BB(0x0055687b);
    /* 0055687b: push 0xa0707070 */ { u32 v = 0xa0707070u; r_esp -= 4; W32(r_esp, v); }
    /* 00556880: push 0xffffff */ { u32 v = 0xffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00556885: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x55688au); f_00578cc4();
    /* 0055688a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055688d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556890: mov dword ptr [edx + 0x3b4], eax */ W32((u32)(r_edx+0x3b4u), r_eax);
    /* 00556896: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00556899: movsx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0055689d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055689f: je 0x5568a8 */ if (fZ) goto L_005568a8;
L_005568a1:; BB(0x005568a1);
    /* 005568a1: mov ecx, edx */ r_ecx = r_edx;
    /* 005568a3: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x5568a8u); f_0052ca40();
L_005568a8:; BB(0x005568a8);
    /* 005568a8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005568ab: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005568b1: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 005568b4: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 005568b8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005568bd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005568c0: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 005568c3: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 005568c6: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 005568c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005568cb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 005568ce: mov dword ptr [ecx + 0x3b0], edx */ W32((u32)(r_ecx+0x3b0u), r_edx);
    /* 005568d4: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 005568db: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005568dd: je 0x5568e6 */ if (fZ) goto L_005568e6;
L_005568df:; BB(0x005568df);
    /* 005568df: mov eax, 0x435c0000 */ r_eax = 0x435c0000u;
    /* 005568e4: jmp 0x5568eb */ goto L_005568eb;
L_005568e6:; BB(0x005568e6);
    /* 005568e6: mov eax, 0x432a0000 */ r_eax = 0x432a0000u;
L_005568eb:; BB(0x005568eb);
    /* 005568eb: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 005568f1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005568f3: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5568f9u); call_ind(t); }
    /* 005568f9: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00556900:; BB(0x00556900);
    /* 00556900: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00556903: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00556906: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00556909: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055690c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055690f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556916: mov esp, ebp */ r_esp = r_ebp;
    /* 00556918: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556919: ret  */ FN_RET(0x00556668); r_esp += 4; return;
L_0055691a:; BB(0x0055691a);
    /* 0055691a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0055691c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0055691f: jmp 0x556900 */ goto L_00556900;
}

void f_00556926(void) /* _WinMain@16_55 */
{
    FN_ENTER(0x00556926);
    /* 00556926: jmp 0x556668 */ f_00556668(); return;
}

void f_00556a4e(void) /* _WinMain@16_57_2 */
{
    FN_ENTER(0x00556a4e);
    /* 00556a4e: mov dword ptr [0xa73b18], eax */ W32((u32)(0xa73b18u), r_eax);
    /* 00556a53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556a5a: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 00556a60: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00556a63: mov dword ptr [0xa73b14], edx */ W32((u32)(0xa73b14u), r_edx);
    /* 00556a69: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x556a6eu); f_00520e6c();
    /* 00556a6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556a70: je 0x556a84 */ if (fZ) goto L_00556a84;
L_00556a72:; BB(0x00556a72);
    /* 00556a72: push 0x924e54 */ { u32 v = 0x924e54u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a77: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x556a7cu); f_008009dc();
    /* 00556a7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556a7d: mov dword ptr [0xa73b1c], eax */ W32((u32)(0xa73b1cu), r_eax);
    /* 00556a82: jmp 0x556a94 */ goto L_00556a94;
L_00556a84:; BB(0x00556a84);
    /* 00556a84: push 0x924e68 */ { u32 v = 0x924e68u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a89: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x556a8eu); f_008009dc();
    /* 00556a8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556a8f: mov dword ptr [0xa73b1c], eax */ W32((u32)(0xa73b1cu), r_eax);
L_00556a94:; BB(0x00556a94);
    /* 00556a94: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556a99: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00556a9b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556aa1: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556aa4: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556aa9u); f_0078e934();
    /* 00556aa9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556aac: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 00556ab3: call 0x54752c */ r_esp -= 4; W32(r_esp, 0x556ab8u); f_0054752c();
    /* 00556ab8: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556abd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00556abf: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556ac5: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556ac8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556acdu); f_0078e934();
    /* 00556acd: mov dword ptr [0xa73aec], eax */ W32((u32)(0xa73aecu), r_eax);
    /* 00556ad2: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556ad7: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00556ad9: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556adf: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556ae2: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556ae7u); f_0078e934();
    /* 00556ae7: mov dword ptr [0xa73af0], eax */ W32((u32)(0xa73af0u), r_eax);
    /* 00556aec: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556af1: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00556af3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556af9: push dword ptr [edx + 0x18] */ { u32 v = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556afc: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556b01u); f_0078e934();
    /* 00556b01: or dword ptr [eax], 8 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00556b04: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b06: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00556b0d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556b12u); f_008581c5();
    /* 00556b12: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556b15: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00556b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b1a: je 0x556ec0 */ if (fZ) goto L_00556ec0;
L_00556b20:; BB(0x00556b20);
    /* 00556b20: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00556b27: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00556b2e: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556b33: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00556b36: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556b3c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556b3f: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x556b44u); f_00511b74();
    /* 00556b44: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00556b47: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00556b4e: mov dword ptr [0xa73b20], eax */ W32((u32)(0xa73b20u), r_eax);
    /* 00556b53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556b5a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556b61: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556b68u); f_008581c5();
    /* 00556b68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556b69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b6e: je 0x556eb9 */ if (fZ) goto L_00556eb9;
L_00556b74:; BB(0x00556b74);
    /* 00556b74: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00556b7b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00556b82: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b87: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b8c: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b91: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b96: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556b9bu); f_005795a0();
    /* 00556b9b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b9e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556ba5: mov dword ptr [0xa73ac8], eax */ W32((u32)(0xa73ac8u), r_eax);
    /* 00556baa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556bb1: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bb9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556bbeu); f_005b8610();
    /* 00556bbe: mov ebx, eax */ r_ebx = r_eax;
    /* 00556bc0: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bc8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556bcdu); f_005b8638();
    /* 00556bcd: mov ecx, dword ptr [0xa73ac8] */ r_ecx = R32((u32)(0xa73ac8u));
    /* 00556bd3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556bdeu); f_00579a28();
    /* 00556bde: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556be5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556be7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556becu); f_008581c5();
    /* 00556bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556bed: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bf2: je 0x556eb2 */ if (fZ) goto L_00556eb2;
L_00556bf8:; BB(0x00556bf8);
    /* 00556bf8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00556bff: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00556c06: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c0b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c10: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c15: push 0x42100000 */ { u32 v = 0x42100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c1a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556c1fu); f_005795a0();
    /* 00556c1f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c22: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556c29: mov dword ptr [0xa73ad0], eax */ W32((u32)(0xa73ad0u), r_eax);
    /* 00556c2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556c35: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c3d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556c42u); f_005b8610();
    /* 00556c42: mov ebx, eax */ r_ebx = r_eax;
    /* 00556c44: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c4c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556c51u); f_005b8638();
    /* 00556c51: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 00556c57: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c59: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5d: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556c62u); f_00579a28();
    /* 00556c62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556c69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556c70u); f_008581c5();
    /* 00556c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556c76: je 0x556eab */ if (fZ) goto L_00556eab;
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556c83: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00556c8a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c8f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c94: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c99: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c9e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556ca3u); f_005795a0();
    /* 00556ca3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556ca6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556a4e); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
L_00556eab:; BB(0x00556eab);
    /* 00556eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ead: jmp 0x556cad */ f_00556cad(); return;
L_00556eb2:; BB(0x00556eb2);
    /* 00556eb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556eb4: jmp 0x556c29 */ f_00556c29(); return;
L_00556eb9:; BB(0x00556eb9);
    /* 00556eb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ebb: jmp 0x556ba5 */ f_00556ba5(); return;
L_00556ec0:; BB(0x00556ec0);
    /* 00556ec0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ec2: jmp 0x556b4e */ f_00556b4e(); return;
}

void f_00556b4e(void) /* _WinMain@16_56_2 */
{
    FN_ENTER(0x00556b4e);
    /* 00556b4e: mov dword ptr [0xa73b20], eax */ W32((u32)(0xa73b20u), r_eax);
    /* 00556b53: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556b5a: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556b61: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556b68u); f_008581c5();
    /* 00556b68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556b69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556b6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556b6e: je 0x556eb9 */ if (fZ) goto L_00556eb9;
L_00556b74:; BB(0x00556b74);
    /* 00556b74: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00556b7b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00556b82: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b85: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b87: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b8c: push 0x420c0000 */ { u32 v = 0x420c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b91: push 0x41e00000 */ { u32 v = 0x41e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556b96: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556b9bu); f_005795a0();
    /* 00556b9b: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556b9e: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00556ba5: mov dword ptr [0xa73ac8], eax */ W32((u32)(0xa73ac8u), r_eax);
    /* 00556baa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556bb1: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bb9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556bbeu); f_005b8610();
    /* 00556bbe: mov ebx, eax */ r_ebx = r_eax;
    /* 00556bc0: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bc8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556bcdu); f_005b8638();
    /* 00556bcd: mov ecx, dword ptr [0xa73ac8] */ r_ecx = R32((u32)(0xa73ac8u));
    /* 00556bd3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556bdeu); f_00579a28();
    /* 00556bde: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556be5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556be7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556becu); f_008581c5();
    /* 00556bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556bed: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bf2: je 0x556eb2 */ if (fZ) goto L_00556eb2;
L_00556bf8:; BB(0x00556bf8);
    /* 00556bf8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00556bff: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00556c06: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c0b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c10: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c15: push 0x42100000 */ { u32 v = 0x42100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c1a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556c1fu); f_005795a0();
    /* 00556c1f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c22: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556c29: mov dword ptr [0xa73ad0], eax */ W32((u32)(0xa73ad0u), r_eax);
    /* 00556c2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556c35: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c3d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556c42u); f_005b8610();
    /* 00556c42: mov ebx, eax */ r_ebx = r_eax;
    /* 00556c44: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c4c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556c51u); f_005b8638();
    /* 00556c51: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 00556c57: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c59: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5d: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556c62u); f_00579a28();
    /* 00556c62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556c69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556c70u); f_008581c5();
    /* 00556c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556c76: je 0x556eab */ if (fZ) goto L_00556eab;
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556c83: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00556c8a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c8f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c94: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c99: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c9e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556ca3u); f_005795a0();
    /* 00556ca3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556ca6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556b4e); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
L_00556eab:; BB(0x00556eab);
    /* 00556eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ead: jmp 0x556cad */ f_00556cad(); return;
L_00556eb2:; BB(0x00556eb2);
    /* 00556eb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556eb4: jmp 0x556c29 */ f_00556c29(); return;
L_00556eb9:; BB(0x00556eb9);
    /* 00556eb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ebb: jmp 0x556ba5 */ f_00556ba5(); return;
}

void f_00556ba5(void) /* _WinMain@16_57_1 */
{
    FN_ENTER(0x00556ba5);
    /* 00556ba5: mov dword ptr [0xa73ac8], eax */ W32((u32)(0xa73ac8u), r_eax);
    /* 00556baa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556bb1: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bb7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bb9: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556bbeu); f_005b8610();
    /* 00556bbe: mov ebx, eax */ r_ebx = r_eax;
    /* 00556bc0: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556bc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bc8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556bcdu); f_005b8638();
    /* 00556bcd: mov ecx, dword ptr [0xa73ac8] */ r_ecx = R32((u32)(0xa73ac8u));
    /* 00556bd3: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556bd9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556bdeu); f_00579a28();
    /* 00556bde: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556be5: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556be7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556becu); f_008581c5();
    /* 00556bec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556bed: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556bf2: je 0x556eb2 */ if (fZ) goto L_00556eb2;
L_00556bf8:; BB(0x00556bf8);
    /* 00556bf8: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 00556bff: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00556c06: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c0b: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c10: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c15: push 0x42100000 */ { u32 v = 0x42100000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c1a: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556c1fu); f_005795a0();
    /* 00556c1f: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c22: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 00556c29: mov dword ptr [0xa73ad0], eax */ W32((u32)(0xa73ad0u), r_eax);
    /* 00556c2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556c35: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c3d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556c42u); f_005b8610();
    /* 00556c42: mov ebx, eax */ r_ebx = r_eax;
    /* 00556c44: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c4c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556c51u); f_005b8638();
    /* 00556c51: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 00556c57: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c59: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5d: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556c62u); f_00579a28();
    /* 00556c62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556c69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556c70u); f_008581c5();
    /* 00556c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556c76: je 0x556eab */ if (fZ) goto L_00556eab;
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556c83: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00556c8a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c8f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c94: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c99: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c9e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556ca3u); f_005795a0();
    /* 00556ca3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556ca6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556ba5); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
L_00556eab:; BB(0x00556eab);
    /* 00556eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ead: jmp 0x556cad */ f_00556cad(); return;
L_00556eb2:; BB(0x00556eb2);
    /* 00556eb2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556eb4: jmp 0x556c29 */ f_00556c29(); return;
}

void f_00556c29(void) /* _WinMain@16_56_1 */
{
    FN_ENTER(0x00556c29);
    /* 00556c29: mov dword ptr [0xa73ad0], eax */ W32((u32)(0xa73ad0u), r_eax);
    /* 00556c2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556c35: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c3d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556c42u); f_005b8610();
    /* 00556c42: mov ebx, eax */ r_ebx = r_eax;
    /* 00556c44: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556c4a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c4c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556c51u); f_005b8638();
    /* 00556c51: mov ecx, dword ptr [0xa73ad0] */ r_ecx = R32((u32)(0xa73ad0u));
    /* 00556c57: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c59: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556c5d: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556c62u); f_00579a28();
    /* 00556c62: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556c69: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c6b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556c70u); f_008581c5();
    /* 00556c70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556c71: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556c74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556c76: je 0x556eab */ if (fZ) goto L_00556eab;
L_00556c7c:; BB(0x00556c7c);
    /* 00556c7c: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00556c83: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00556c8a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c8f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c94: push 0x42180000 */ { u32 v = 0x42180000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c99: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556c9e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556ca3u); f_005795a0();
    /* 00556ca3: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556ca6: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556c29); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
L_00556eab:; BB(0x00556eab);
    /* 00556eab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ead: jmp 0x556cad */ f_00556cad(); return;
}

void f_00556cad(void) /* _WinMain@16_57_0 */
{
    FN_ENTER(0x00556cad);
    /* 00556cad: mov dword ptr [0xa73acc], eax */ W32((u32)(0xa73accu), r_eax);
    /* 00556cb2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556cb9: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cbf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cc1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556cc6u); f_005b8610();
    /* 00556cc6: mov ebx, eax */ r_ebx = r_eax;
    /* 00556cc8: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556cce: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cd0: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556cd5u); f_005b8638();
    /* 00556cd5: mov ecx, dword ptr [0xa73acc] */ r_ecx = R32((u32)(0xa73accu));
    /* 00556cdb: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00556cdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556ce1: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556ce6u); f_00579a28();
    /* 00556ce6: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556ced: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00556cef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x556cf4u); f_008581c5();
    /* 00556cf4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00556cf5: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00556cf8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00556cfa: je 0x556ea4 */ if (fZ) goto L_00556ea4;
L_00556d00:; BB(0x00556d00);
    /* 00556d00: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 00556d07: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 00556d0e: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d11: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d13: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d18: push 0x42680000 */ { u32 v = 0x42680000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d1d: push 0x42480000 */ { u32 v = 0x42480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d22: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x556d27u); f_005795a0();
    /* 00556d27: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00556d2a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556cad); r_esp += 4; return;
L_00556ea4:; BB(0x00556ea4);
    /* 00556ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00556ea6: jmp 0x556d31 */ f_00556d31(); return;
}

void f_00556d31(void) /* _WinMain@16_56_0 */
{
    FN_ENTER(0x00556d31);
    /* 00556d31: mov dword ptr [0xa73ad4], eax */ W32((u32)(0xa73ad4u), r_eax);
    /* 00556d36: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00556d3d: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d43: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d45: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x556d4au); f_005b8610();
    /* 00556d4a: mov ebx, eax */ r_ebx = r_eax;
    /* 00556d4c: mov ecx, dword ptr [0xa73b18] */ r_ecx = R32((u32)(0xa73b18u));
    /* 00556d52: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d54: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x556d59u); f_005b8638();
    /* 00556d59: mov ecx, dword ptr [0xa73ad4] */ r_ecx = R32((u32)(0xa73ad4u));
    /* 00556d5f: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 00556d61: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00556d63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d65: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x556d6au); f_00579a28();
    /* 00556d6a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00556d6c:; BB(0x00556d6c);
    /* 00556d6c: lea ebx, [esi + 0x1b] */ r_ebx = (u32)(r_esi+0x1bu);
    /* 00556d6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d70: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x556d75u); f_0077a684();
    /* 00556d75: mov dword ptr [esi*4 + 0xa73b0c], eax */ W32((u32)(r_esi*4+0xa73b0cu), r_eax);
    /* 00556d7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d7d: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x556d82u); f_0077a698();
    /* 00556d82: mov dword ptr [esi*4 + 0xa73b04], eax */ W32((u32)(r_esi*4+0xa73b04u), r_eax);
    /* 00556d89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d8a: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x556d8fu); f_0077a6b4();
    /* 00556d8f: mov dword ptr [esi*4 + 0xa73afc], eax */ W32((u32)(r_esi*4+0xa73afcu), r_eax);
    /* 00556d96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00556d97: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x556d9cu); f_0077a6cc();
    /* 00556d9c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556d9f: mov dword ptr [esi*4 + 0xa73af4], eax */ W32((u32)(r_esi*4+0xa73af4u), r_eax);
    /* 00556da6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00556da9: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dac: jl 0x556d6c */ if ((fS!=fO)) goto L_00556d6c;
L_00556dae:; BB(0x00556dae);
    /* 00556dae: mov eax, dword ptr [0xa73b18] */ r_eax = R32((u32)(0xa73b18u));
    /* 00556db3: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00556db9: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00556dbc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00556dbe:; BB(0x00556dbe);
    /* 00556dbe: movsx eax, word ptr [ebx*2 + 0x9bdb80] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9bdb80u));
    /* 00556dc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556dc8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x556dcdu); f_0078e934();
    /* 00556dcd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556dd0: mov dword ptr [ebp + ebx*4 - 0x3c], eax */ W32((u32)(r_ebp+r_ebx*4+0xffffffc4u), r_eax);
    /* 00556dd4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556dd7: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00556dda: jl 0x556dbe */ if ((fS!=fO)) goto L_00556dbe;
L_00556ddc:; BB(0x00556ddc);
    /* 00556ddc: push 0xa73a38 */ { u32 v = 0xa73a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00556de1: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556de4: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556de9u); f_0052cb44();
    /* 00556de9: push 0xa73a48 */ { u32 v = 0xa73a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dee: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556df1: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556df6u); f_0052cb44();
    /* 00556df6: push 0xa73a78 */ { u32 v = 0xa73a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00556dfb: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556dfe: call 0x52cb44 */ r_esp -= 4; W32(r_esp, 0x556e03u); f_0052cb44();
    /* 00556e03: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e06: mov ecx, dword ptr [0x924ba0] */ r_ecx = R32((u32)(0x924ba0u));
    /* 00556e0c: movzx ebx, word ptr [0x924ba4] */ r_ebx = (u32)R16((u32)(0x924ba4u));
    /* 00556e13: movzx esi, word ptr [0x924ba6] */ r_esi = (u32)R16((u32)(0x924ba6u));
    /* 00556e1a: movzx edi, word ptr [0x924ba8] */ r_edi = (u32)R16((u32)(0x924ba8u));
    /* 00556e21: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00556e26: mov edx, 0x1f */ r_edx = 0x1fu;
    /* 00556e2b: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00556e2f: mov word ptr [ebp - 0x2e], dx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_edx);
    /* 00556e33: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e39: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 00556e3f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00556e42: mov word ptr [ebp - 0x24], bx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_ebx);
    /* 00556e46: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e48: mov word ptr [ebp - 0x22], si */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_esi);
    /* 00556e4c: mov word ptr [ebp - 0x20], di */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_edi);
    /* 00556e50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_00556e53:; BB(0x00556e53);
    /* 00556e53: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00556e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00556e57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e59: mov edx, dword ptr [edx + 0x42c] */ r_edx = R32((u32)(r_edx+0x42cu));
    /* 00556e5f: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00556e64: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00556e67: movsx esi, word ptr [ebp + ecx - 0x30] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ecx+0xffffffd0u));
    /* 00556e6c: push dword ptr [edx + ecx*8 + 0xc] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e70: push dword ptr [edx + ecx*8 + 8] */ { u32 v = R32((u32)(r_edx+r_ecx*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00556e74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00556e75: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x556e7au); f_00608470();
    /* 00556e7a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00556e7d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00556e80: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00556e83: jge 0x556e8d */ if ((fS==fO)) goto L_00556e8d;
L_00556e85:; BB(0x00556e85);
    /* 00556e85: mov edx, dword ptr [0xa73b18] */ r_edx = R32((u32)(0xa73b18u));
    /* 00556e8b: jmp 0x556e53 */ goto L_00556e53;
L_00556e8d:; BB(0x00556e8d);
    /* 00556e8d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00556e90: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00556e93: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00556e96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00556e99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00556ea0: mov esp, ebp */ r_esp = r_ebp;
    /* 00556ea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00556ea3: ret  */ FN_RET(0x00556d31); r_esp += 4; return;
}

void f_00556ec9(void) /* _WinMain@16_57 */
{
    FN_ENTER(0x00556ec9);
    /* 00556ec9: jmp 0x556a4e */ f_00556a4e(); return;
}

void f_0055801e(void) /* _WinMain@16_56_4 */
{
    FN_ENTER(0x0055801e);
    /* 0055801e: mov dword ptr [0xa73b90], eax */ W32((u32)(0xa73b90u), r_eax);
    /* 00558023: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055802a: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00558031: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00558033: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x558038u); f_008581c5();
    /* 00558038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00558039: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055803c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055803e: je 0x558324 */ if (fZ) goto L_00558324;
L_00558044:; BB(0x00558044);
    /* 00558044: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 0055804b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00558052: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558058: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0055805a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55805fu); f_005b8610();
    /* 0055805f: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00558062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00558063: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x558068u); f_00511b74();
    /* 00558068: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055806b: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00558072: mov dword ptr [0xa73b8c], eax */ W32((u32)(0xa73b8cu), r_eax);
    /* 00558077: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055807e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00558085: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00558087: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55808cu); f_008581c5();
    /* 0055808c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055808d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00558090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558092: je 0x55831d */ if (fZ) goto L_0055831d;
L_00558098:; BB(0x00558098);
    /* 00558098: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0055809f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005580a6: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005580ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5580b3u); f_005b8610();
    /* 005580b3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005580b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005580b7: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x5580bcu); f_00511b74();
    /* 005580bc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005580bf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005580c6: mov dword ptr [0xa73b88], eax */ W32((u32)(0xa73b88u), r_eax);
    /* 005580cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005580d2: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580d4: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5580d9u); f_0077a684();
    /* 005580d9: mov dword ptr [0xa73bd8], eax */ W32((u32)(0xa73bd8u), r_eax);
    /* 005580de: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580e0: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5580e5u); f_0077a698();
    /* 005580e5: mov dword ptr [0xa73bd4], eax */ W32((u32)(0xa73bd4u), r_eax);
    /* 005580ea: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ec: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5580f1u); f_0077a6b4();
    /* 005580f1: mov dword ptr [0xa73bd0], eax */ W32((u32)(0xa73bd0u), r_eax);
    /* 005580f6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580f8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5580fdu); f_0077a6cc();
    /* 005580fd: mov dword ptr [0xa73bcc], eax */ W32((u32)(0xa73bccu), r_eax);
    /* 00558102: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558104: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x558109u); f_0077a684();
    /* 00558109: mov dword ptr [0xa73c14], eax */ W32((u32)(0xa73c14u), r_eax);
    /* 0055810e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558110: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x558115u); f_0077a698();
    /* 00558115: mov dword ptr [0xa73c10], eax */ W32((u32)(0xa73c10u), r_eax);
    /* 0055811a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055811c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x558121u); f_0077a6b4();
    /* 00558121: mov dword ptr [0xa73c0c], eax */ W32((u32)(0xa73c0cu), r_eax);
    /* 00558126: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558128: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55812du); f_0077a6cc();
    /* 0055812d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558130: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558136: mov dword ptr [0xa73c08], eax */ W32((u32)(0xa73c08u), r_eax);
    /* 0055813b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055813d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558142u); f_005b8610();
    /* 00558142: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055814a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055814d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558150: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558153: mov dword ptr [0xa73b4c], ebx */ W32((u32)(0xa73b4cu), r_ebx);
    /* 00558159: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55815eu); f_005b8610();
    /* 0055815e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558160: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558163: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558166: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558169: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0055816c: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055816f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00558172: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558175: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055817b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055817e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558181: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558184: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00558187: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055818a: mov dword ptr [0xa73b50], eax */ W32((u32)(0xa73b50u), r_eax);
    /* 0055818f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558194u); f_005b8610();
    /* 00558194: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558196: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558199: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0055819c: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0055819f: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581a2: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581a5: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581a8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581ab: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581b1: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ba: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581bd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c3: mov dword ptr [0xa73b54], eax */ W32((u32)(0xa73b54u), r_eax);
    /* 005581c8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5581cdu); f_005b8610();
    /* 005581cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005581cf: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581d2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005581d5: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005581d8: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581db: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581de: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581e1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581e4: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581ea: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ed: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f6: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581f9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581ff: mov dword ptr [0xa73b58], eax */ W32((u32)(0xa73b58u), r_eax);
    /* 00558204: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558209u); f_005b8610();
    /* 00558209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055820b: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055820e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558211: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558214: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00558217: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055821a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0055821d: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558220: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558226: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558229: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558232: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558235: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558238: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823e: mov dword ptr [0xa73b5c], eax */ W32((u32)(0xa73b5cu), r_eax);
    /* 00558243: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558248u); f_005b8610();
    /* 00558248: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055824e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558250: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558253: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558256: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558259: mov dword ptr [0xa73b60], ebx */ W32((u32)(0xa73b60u), r_ebx);
    /* 0055825f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558264u); f_005b8610();
    /* 00558264: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055826a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055826c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055826f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558272: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558275: mov dword ptr [0xa73b64], ebx */ W32((u32)(0xa73b64u), r_ebx);
    /* 0055827b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558280u); f_005b8610();
    /* 00558280: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558286: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055828b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055828e: mov dword ptr [0xa73b6c], edx */ W32((u32)(0xa73b6cu), r_edx);
    /* 00558294: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558299u); f_005b8610();
    /* 00558299: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055829c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055829f: mov dword ptr [0xa73b68], edx */ W32((u32)(0xa73b68u), r_edx);
    /* 005582a5: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5582aau); f_0052d360();
    /* 005582aa: mov eax, dword ptr [0x924f14] */ r_eax = R32((u32)(0x924f14u));
    /* 005582af: movzx edx, word ptr [0x924f18] */ r_edx = (u32)R16((u32)(0x924f18u));
    /* 005582b6: movzx ecx, word ptr [0x924f1a] */ r_ecx = (u32)R16((u32)(0x924f1au));
    /* 005582bd: movzx ebx, word ptr [0x924f1c] */ r_ebx = (u32)R16((u32)(0x924f1cu));
    /* 005582c4: mov edi, dword ptr [0xa73b90] */ r_edi = R32((u32)(0xa73b90u));
    /* 005582ca: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005582d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005582d3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005582d7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005582dd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005582e1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005582e5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005582e8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005582eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005582ec: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f1: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005582f9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005582fc: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005582fe: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x558303u); f_00608470();
    /* 00558303: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00558306: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558309: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055830c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055830f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558312: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558319: mov esp, ebp */ r_esp = r_ebp;
    /* 0055831b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055831c: ret  */ FN_RET(0x0055801e); r_esp += 4; return;
L_0055831d:; BB(0x0055831d);
    /* 0055831d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055831f: jmp 0x5580c6 */ f_005580c6(); return;
L_00558324:; BB(0x00558324);
    /* 00558324: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00558326: jmp 0x558072 */ f_00558072(); return;
}

void f_00558072(void) /* _WinMain@16_58_0 */
{
    FN_ENTER(0x00558072);
    /* 00558072: mov dword ptr [0xa73b8c], eax */ W32((u32)(0xa73b8cu), r_eax);
    /* 00558077: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055807e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00558085: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00558087: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55808cu); f_008581c5();
    /* 0055808c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055808d: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00558090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00558092: je 0x55831d */ if (fZ) goto L_0055831d;
L_00558098:; BB(0x00558098);
    /* 00558098: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0055809f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005580a6: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005580ac: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5580b3u); f_005b8610();
    /* 005580b3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005580b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005580b7: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x5580bcu); f_00511b74();
    /* 005580bc: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005580bf: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005580c6: mov dword ptr [0xa73b88], eax */ W32((u32)(0xa73b88u), r_eax);
    /* 005580cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005580d2: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580d4: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5580d9u); f_0077a684();
    /* 005580d9: mov dword ptr [0xa73bd8], eax */ W32((u32)(0xa73bd8u), r_eax);
    /* 005580de: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580e0: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5580e5u); f_0077a698();
    /* 005580e5: mov dword ptr [0xa73bd4], eax */ W32((u32)(0xa73bd4u), r_eax);
    /* 005580ea: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ec: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5580f1u); f_0077a6b4();
    /* 005580f1: mov dword ptr [0xa73bd0], eax */ W32((u32)(0xa73bd0u), r_eax);
    /* 005580f6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580f8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5580fdu); f_0077a6cc();
    /* 005580fd: mov dword ptr [0xa73bcc], eax */ W32((u32)(0xa73bccu), r_eax);
    /* 00558102: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558104: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x558109u); f_0077a684();
    /* 00558109: mov dword ptr [0xa73c14], eax */ W32((u32)(0xa73c14u), r_eax);
    /* 0055810e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558110: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x558115u); f_0077a698();
    /* 00558115: mov dword ptr [0xa73c10], eax */ W32((u32)(0xa73c10u), r_eax);
    /* 0055811a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055811c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x558121u); f_0077a6b4();
    /* 00558121: mov dword ptr [0xa73c0c], eax */ W32((u32)(0xa73c0cu), r_eax);
    /* 00558126: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558128: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55812du); f_0077a6cc();
    /* 0055812d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558130: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558136: mov dword ptr [0xa73c08], eax */ W32((u32)(0xa73c08u), r_eax);
    /* 0055813b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055813d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558142u); f_005b8610();
    /* 00558142: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055814a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055814d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558150: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558153: mov dword ptr [0xa73b4c], ebx */ W32((u32)(0xa73b4cu), r_ebx);
    /* 00558159: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55815eu); f_005b8610();
    /* 0055815e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558160: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558163: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558166: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558169: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0055816c: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055816f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00558172: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558175: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055817b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055817e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558181: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558184: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00558187: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055818a: mov dword ptr [0xa73b50], eax */ W32((u32)(0xa73b50u), r_eax);
    /* 0055818f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558194u); f_005b8610();
    /* 00558194: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558196: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558199: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0055819c: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0055819f: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581a2: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581a5: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581a8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581ab: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581b1: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ba: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581bd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c3: mov dword ptr [0xa73b54], eax */ W32((u32)(0xa73b54u), r_eax);
    /* 005581c8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5581cdu); f_005b8610();
    /* 005581cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005581cf: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581d2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005581d5: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005581d8: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581db: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581de: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581e1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581e4: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581ea: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ed: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f6: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581f9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581ff: mov dword ptr [0xa73b58], eax */ W32((u32)(0xa73b58u), r_eax);
    /* 00558204: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558209u); f_005b8610();
    /* 00558209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055820b: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055820e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558211: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558214: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00558217: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055821a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0055821d: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558220: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558226: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558229: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558232: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558235: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558238: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823e: mov dword ptr [0xa73b5c], eax */ W32((u32)(0xa73b5cu), r_eax);
    /* 00558243: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558248u); f_005b8610();
    /* 00558248: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055824e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558250: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558253: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558256: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558259: mov dword ptr [0xa73b60], ebx */ W32((u32)(0xa73b60u), r_ebx);
    /* 0055825f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558264u); f_005b8610();
    /* 00558264: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055826a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055826c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055826f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558272: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558275: mov dword ptr [0xa73b64], ebx */ W32((u32)(0xa73b64u), r_ebx);
    /* 0055827b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558280u); f_005b8610();
    /* 00558280: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558286: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055828b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055828e: mov dword ptr [0xa73b6c], edx */ W32((u32)(0xa73b6cu), r_edx);
    /* 00558294: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558299u); f_005b8610();
    /* 00558299: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055829c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055829f: mov dword ptr [0xa73b68], edx */ W32((u32)(0xa73b68u), r_edx);
    /* 005582a5: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5582aau); f_0052d360();
    /* 005582aa: mov eax, dword ptr [0x924f14] */ r_eax = R32((u32)(0x924f14u));
    /* 005582af: movzx edx, word ptr [0x924f18] */ r_edx = (u32)R16((u32)(0x924f18u));
    /* 005582b6: movzx ecx, word ptr [0x924f1a] */ r_ecx = (u32)R16((u32)(0x924f1au));
    /* 005582bd: movzx ebx, word ptr [0x924f1c] */ r_ebx = (u32)R16((u32)(0x924f1cu));
    /* 005582c4: mov edi, dword ptr [0xa73b90] */ r_edi = R32((u32)(0xa73b90u));
    /* 005582ca: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005582d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005582d3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005582d7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005582dd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005582e1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005582e5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005582e8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005582eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005582ec: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f1: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005582f9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005582fc: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005582fe: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x558303u); f_00608470();
    /* 00558303: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00558306: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558309: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055830c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055830f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558312: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558319: mov esp, ebp */ r_esp = r_ebp;
    /* 0055831b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055831c: ret  */ FN_RET(0x00558072); r_esp += 4; return;
L_0055831d:; BB(0x0055831d);
    /* 0055831d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055831f: jmp 0x5580c6 */ f_005580c6(); return;
}

void f_005580c6(void) /* _WinMain@16_56_3 */
{
    FN_ENTER(0x005580c6);
    /* 005580c6: mov dword ptr [0xa73b88], eax */ W32((u32)(0xa73b88u), r_eax);
    /* 005580cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005580d2: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580d4: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5580d9u); f_0077a684();
    /* 005580d9: mov dword ptr [0xa73bd8], eax */ W32((u32)(0xa73bd8u), r_eax);
    /* 005580de: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580e0: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5580e5u); f_0077a698();
    /* 005580e5: mov dword ptr [0xa73bd4], eax */ W32((u32)(0xa73bd4u), r_eax);
    /* 005580ea: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580ec: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5580f1u); f_0077a6b4();
    /* 005580f1: mov dword ptr [0xa73bd0], eax */ W32((u32)(0xa73bd0u), r_eax);
    /* 005580f6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005580f8: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5580fdu); f_0077a6cc();
    /* 005580fd: mov dword ptr [0xa73bcc], eax */ W32((u32)(0xa73bccu), r_eax);
    /* 00558102: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558104: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x558109u); f_0077a684();
    /* 00558109: mov dword ptr [0xa73c14], eax */ W32((u32)(0xa73c14u), r_eax);
    /* 0055810e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558110: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x558115u); f_0077a698();
    /* 00558115: mov dword ptr [0xa73c10], eax */ W32((u32)(0xa73c10u), r_eax);
    /* 0055811a: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0055811c: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x558121u); f_0077a6b4();
    /* 00558121: mov dword ptr [0xa73c0c], eax */ W32((u32)(0xa73c0cu), r_eax);
    /* 00558126: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00558128: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x55812du); f_0077a6cc();
    /* 0055812d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00558130: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558136: mov dword ptr [0xa73c08], eax */ W32((u32)(0xa73c08u), r_eax);
    /* 0055813b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055813d: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558142u); f_005b8610();
    /* 00558142: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0055814a: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055814d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558150: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558153: mov dword ptr [0xa73b4c], ebx */ W32((u32)(0xa73b4cu), r_ebx);
    /* 00558159: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x55815eu); f_005b8610();
    /* 0055815e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558160: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558163: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558166: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558169: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0055816c: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055816f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00558172: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558175: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055817b: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055817e: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558181: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558184: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00558187: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055818a: mov dword ptr [0xa73b50], eax */ W32((u32)(0xa73b50u), r_eax);
    /* 0055818f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558194u); f_005b8610();
    /* 00558194: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00558196: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558199: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0055819c: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 0055819f: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581a2: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581a5: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581a8: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581ab: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581b1: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b4: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581b7: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ba: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581bd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581c3: mov dword ptr [0xa73b54], eax */ W32((u32)(0xa73b54u), r_eax);
    /* 005581c8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5581cdu); f_005b8610();
    /* 005581cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005581cf: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581d2: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005581d5: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005581d8: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 005581db: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 005581de: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 005581e1: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 005581e4: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 005581ea: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581ed: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f0: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f3: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005581f6: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 005581f9: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005581ff: mov dword ptr [0xa73b58], eax */ W32((u32)(0xa73b58u), r_eax);
    /* 00558204: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558209u); f_005b8610();
    /* 00558209: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055820b: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055820e: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00558211: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 00558214: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 00558217: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 0055821a: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0055821d: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00558220: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558226: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558229: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822c: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 0055822f: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558232: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00558235: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558238: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055823e: mov dword ptr [0xa73b5c], eax */ W32((u32)(0xa73b5cu), r_eax);
    /* 00558243: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558248u); f_005b8610();
    /* 00558248: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055824e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00558250: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00558253: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558256: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558259: mov dword ptr [0xa73b60], ebx */ W32((u32)(0xa73b60u), r_ebx);
    /* 0055825f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558264u); f_005b8610();
    /* 00558264: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 0055826a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0055826c: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 0055826f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00558272: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 00558275: mov dword ptr [0xa73b64], ebx */ W32((u32)(0xa73b64u), r_ebx);
    /* 0055827b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558280u); f_005b8610();
    /* 00558280: mov ecx, dword ptr [0xa73b90] */ r_ecx = R32((u32)(0xa73b90u));
    /* 00558286: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00558288: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055828b: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055828e: mov dword ptr [0xa73b6c], edx */ W32((u32)(0xa73b6cu), r_edx);
    /* 00558294: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x558299u); f_005b8610();
    /* 00558299: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055829c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055829f: mov dword ptr [0xa73b68], edx */ W32((u32)(0xa73b68u), r_edx);
    /* 005582a5: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x5582aau); f_0052d360();
    /* 005582aa: mov eax, dword ptr [0x924f14] */ r_eax = R32((u32)(0x924f14u));
    /* 005582af: movzx edx, word ptr [0x924f18] */ r_edx = (u32)R16((u32)(0x924f18u));
    /* 005582b6: movzx ecx, word ptr [0x924f1a] */ r_ecx = (u32)R16((u32)(0x924f1au));
    /* 005582bd: movzx ebx, word ptr [0x924f1c] */ r_ebx = (u32)R16((u32)(0x924f1cu));
    /* 005582c4: mov edi, dword ptr [0xa73b90] */ r_edi = R32((u32)(0xa73b90u));
    /* 005582ca: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005582d0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005582d3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005582d7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005582dd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005582e1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005582e5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005582e8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005582eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005582ec: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f1: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005582f6: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005582f9: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005582fc: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 005582fe: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x558303u); f_00608470();
    /* 00558303: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00558306: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00558309: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055830c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055830f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00558312: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00558319: mov esp, ebp */ r_esp = r_ebp;
    /* 0055831b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055831c: ret  */ FN_RET(0x005580c6); r_esp += 4; return;
}

void f_0055832d(void) /* _WinMain@16_56 */
{
    FN_ENTER(0x0055832d);
    /* 0055832d: jmp 0x55801e */ f_0055801e(); return;
}

void f_0055f508(void) /* _WinMain@16_58 */
{
    FN_ENTER(0x0055f508);
    /* 0055f508: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f508); r_esp += 4; return;
}

void f_0055f54b(void) /* _WinMain@16_59 */
{
    FN_ENTER(0x0055f54b);
    /* 0055f54b: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f54b); r_esp += 4; return;
}

void f_0055f5d1(void) /* _WinMain@16_60 */
{
    FN_ENTER(0x0055f5d1);
    /* 0055f5d1: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f5d1); r_esp += 4; return;
}

void f_0055f611(void) /* _WinMain@16_61 */
{
    FN_ENTER(0x0055f611);
    /* 0055f611: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f611); r_esp += 4; return;
}

void f_0055f628(void) /* _WinMain@16_62 */
{
    FN_ENTER(0x0055f628);
    /* 0055f628: jmp 0x55f6ea */ goto L_0055f6ea;
L_0055f6ea:; BB(0x0055f6ea);
    /* 0055f6ea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6ec: call 0x55ce28 */ r_esp -= 4; W32(r_esp, 0x55f6f1u); f_0055ce28();
    /* 0055f6f1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6f3: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x55f6f8u); f_006401f0();
    /* 0055f6f8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0055f6fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0055f6fd: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x55f703u); call_ind(t); }
    /* 0055f703: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f704: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055f705: ret  */ FN_RET(0x0055f628); r_esp += 4; return;
}

void f_0055f915(void) /* _WinMain@16_64_0 */
{
    FN_ENTER(0x0055f915);
    /* 0055f915: mov dword ptr [0xa73c84], eax */ W32((u32)(0xa73c84u), r_eax);
    /* 0055f91a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055f921: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0055f928: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f92a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x55f92fu); f_008581c5();
    /* 0055f92f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0055f930: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0055f933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055f935: je 0x55fa14 */ if (fZ) goto L_0055fa14;
L_0055f93b:; BB(0x0055f93b);
    /* 0055f93b: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0055f942: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0055f949: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f94e: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f951: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f957: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f95a: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x55f95fu); f_00511b74();
    /* 0055f95f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055f962: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0055f969: mov dword ptr [0xa73c80], eax */ W32((u32)(0xa73c80u), r_eax);
    /* 0055f96e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055f975: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f97a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f97c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f982: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f985: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x55f98au); f_0078e934();
    /* 0055f98a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f98d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055f990: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055f993: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f996: mov dword ptr [0xa73c7c], edx */ W32((u32)(0xa73c7cu), r_edx);
    /* 0055f99c: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x55f9a1u); f_0052d360();
    /* 0055f9a1: mov eax, dword ptr [0x9255b4] */ r_eax = R32((u32)(0x9255b4u));
    /* 0055f9a6: movzx edx, word ptr [0x9255b8] */ r_edx = (u32)R16((u32)(0x9255b8u));
    /* 0055f9ad: movzx ecx, word ptr [0x9255ba] */ r_ecx = (u32)R16((u32)(0x9255bau));
    /* 0055f9b4: movzx ebx, word ptr [0x9255bc] */ r_ebx = (u32)R16((u32)(0x9255bcu));
    /* 0055f9bb: mov edi, dword ptr [0xa73c48] */ r_edi = R32((u32)(0xa73c48u));
    /* 0055f9c1: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055f9c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0055f9ca: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0055f9ce: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0055f9d4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0055f9d8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0055f9dc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0055f9df: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055f9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e8: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9ed: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f5: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55f9fau); f_00608470();
    /* 0055f9fa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055f9fd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055fa00: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055fa03: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055fa06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055fa09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055fa10: mov esp, ebp */ r_esp = r_ebp;
    /* 0055fa12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fa13: ret  */ FN_RET(0x0055f915); r_esp += 4; return;
L_0055fa14:; BB(0x0055fa14);
    /* 0055fa14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa16: jmp 0x55f969 */ f_0055f969(); return;
}

void f_0055f969(void) /* _WinMain@16_63_0 */
{
    FN_ENTER(0x0055f969);
    /* 0055f969: mov dword ptr [0xa73c80], eax */ W32((u32)(0xa73c80u), r_eax);
    /* 0055f96e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0055f975: mov eax, dword ptr [0xa73c48] */ r_eax = R32((u32)(0xa73c48u));
    /* 0055f97a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f97c: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0055f982: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f985: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x55f98au); f_0078e934();
    /* 0055f98a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0055f98d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0055f990: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0055f993: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f996: mov dword ptr [0xa73c7c], edx */ W32((u32)(0xa73c7cu), r_edx);
    /* 0055f99c: call 0x52d360 */ r_esp -= 4; W32(r_esp, 0x55f9a1u); f_0052d360();
    /* 0055f9a1: mov eax, dword ptr [0x9255b4] */ r_eax = R32((u32)(0x9255b4u));
    /* 0055f9a6: movzx edx, word ptr [0x9255b8] */ r_edx = (u32)R16((u32)(0x9255b8u));
    /* 0055f9ad: movzx ecx, word ptr [0x9255ba] */ r_ecx = (u32)R16((u32)(0x9255bau));
    /* 0055f9b4: movzx ebx, word ptr [0x9255bc] */ r_ebx = (u32)R16((u32)(0x9255bcu));
    /* 0055f9bb: mov edi, dword ptr [0xa73c48] */ r_edi = R32((u32)(0xa73c48u));
    /* 0055f9c1: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0055f9c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0055f9ca: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0055f9ce: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0055f9d4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0055f9d8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0055f9dc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0055f9df: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0055f9e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9e8: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9ed: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f0: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0055f9f5: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x55f9fau); f_00608470();
    /* 0055f9fa: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0055f9fd: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055fa00: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055fa03: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055fa06: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0055fa09: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0055fa10: mov esp, ebp */ r_esp = r_ebp;
    /* 0055fa12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fa13: ret  */ FN_RET(0x0055f969); r_esp += 4; return;
}

void f_0055fa1d(void) /* _WinMain@16_64 */
{
    FN_ENTER(0x0055fa1d);
    /* 0055fa1d: jmp 0x55f915 */ f_0055f915(); return;
}

void f_005644bc(void) /* _WinMain@16_63_1 */
{
    FN_ENTER(0x005644bc);
    /* 005644bc: mov dword ptr [0xa73ce0], eax */ W32((u32)(0xa73ce0u), r_eax);
    /* 005644c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005644c8: jmp 0x56451f */ goto L_0056451f;
L_0056451f:; BB(0x0056451f);
    /* 0056451f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00564521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00564523: mov dword ptr [0xa73cf8], eax */ W32((u32)(0xa73cf8u), r_eax);
    /* 00564528: mov dword ptr [0xa73cf4], eax */ W32((u32)(0xa73cf4u), r_eax);
    /* 0056452d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x564532u); f_008581c5();
    /* 00564532: mov dword ptr [0xa73cec], eax */ W32((u32)(0xa73cecu), r_eax);
    /* 00564537: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564539: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56453eu); f_0077a684();
    /* 0056453e: mov dword ptr [0xa73cf0], eax */ W32((u32)(0xa73cf0u), r_eax);
    /* 00564543: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564545: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56454au); f_0077a698();
    /* 0056454a: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 00564550: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 00564552: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00564554: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x564559u); f_0077a698();
    /* 00564559: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 0056455f: push 0x3f */ { u32 v = 0x3fu; r_esp -= 4; W32(r_esp, v); }
    /* 00564561: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00564564: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x564569u); f_0077a698();
    /* 00564569: mov edx, dword ptr [0xa73cec] */ r_edx = R32((u32)(0xa73cecu));
    /* 0056456f: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564571: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00564574: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x564579u); f_0077a6b4();
    /* 00564579: mov dword ptr [0xa73ce8], eax */ W32((u32)(0xa73ce8u), r_eax);
    /* 0056457e: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 00564580: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x564585u); f_0077a6cc();
    /* 00564585: movzx edx, word ptr [0x925964] */ r_edx = (u32)R16((u32)(0x925964u));
    /* 0056458c: movzx ecx, word ptr [0x925966] */ r_ecx = (u32)R16((u32)(0x925966u));
    /* 00564593: movzx ebx, word ptr [0x925968] */ r_ebx = (u32)R16((u32)(0x925968u));
    /* 0056459a: mov edi, dword ptr [0xa73ce0] */ r_edi = R32((u32)(0xa73ce0u));
    /* 005645a0: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005645a6: mov dword ptr [0xa73ce4], eax */ W32((u32)(0xa73ce4u), r_eax);
    /* 005645ab: mov eax, dword ptr [0x925960] */ r_eax = R32((u32)(0x925960u));
    /* 005645b0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005645b3: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005645b7: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005645bd: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005645c1: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005645c5: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005645c8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005645cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005645cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005645ce: push dword ptr [0x9be0ec] */ { u32 v = R32((u32)(0x9be0ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005645d4: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005645d7: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005645da: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005645dc: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5645e1u); f_00608470();
    /* 005645e1: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005645e4: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005645e7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005645ea: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005645ed: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005645f0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005645f7: mov esp, ebp */ r_esp = r_ebp;
    /* 005645f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005645fa: ret  */ FN_RET(0x005644bc); r_esp += 4; return;
}

void f_005645fd(void) /* _WinMain@16_63 */
{
    FN_ENTER(0x005645fd);
    /* 005645fd: jmp 0x5644bc */ f_005644bc(); return;
}

void f_0056c35c(void) /* _WinMain@16_65_0 */
{
    FN_ENTER(0x0056c35c);
    /* 0056c35c: mov dword ptr [0xa73db0], eax */ W32((u32)(0xa73db0u), r_eax);
    /* 0056c361: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c368: jmp 0x56c3bf */ goto L_0056c3bf;
L_0056c3bf:; BB(0x0056c3bf);
    /* 0056c3bf: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3c1: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56c3c6u); f_0077a684();
    /* 0056c3c6: mov dword ptr [0xa73da8], eax */ W32((u32)(0xa73da8u), r_eax);
    /* 0056c3cb: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3cd: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56c3d2u); f_0077a698();
    /* 0056c3d2: mov dword ptr [0xa73da4], eax */ W32((u32)(0xa73da4u), r_eax);
    /* 0056c3d7: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3d9: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x56c3deu); f_0077a6b4();
    /* 0056c3de: mov dword ptr [0xa73da0], eax */ W32((u32)(0xa73da0u), r_eax);
    /* 0056c3e3: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3e5: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x56c3eau); f_0077a6cc();
    /* 0056c3ea: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056c3f1: mov dword ptr [0xa73d9c], eax */ W32((u32)(0xa73d9cu), r_eax);
    /* 0056c3f6: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c3f8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56c3fdu); f_008581c5();
    /* 0056c3fd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056c400: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056c403: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056c405: je 0x56c4ca */ if (fZ) goto L_0056c4ca;
L_0056c40b:; BB(0x0056c40b);
    /* 0056c40b: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056c412: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056c419: mov eax, dword ptr [0xa73db0] */ r_eax = R32((u32)(0xa73db0u));
    /* 0056c41e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056c421: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056c427: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c42a: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x56c42fu); f_00511b74();
    /* 0056c42f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056c432: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0056c439:; BB(0x0056c439);
    /* 0056c439: mov dword ptr [0xa73dac], eax */ W32((u32)(0xa73dacu), r_eax);
    /* 0056c43e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056c445: call 0x56d4ec */ r_esp -= 4; W32(r_esp, 0x56c44au); f_0056d4ec();
    /* 0056c44a: call 0x56c8a4 */ r_esp -= 4; W32(r_esp, 0x56c44fu); f_0056c8a4();
    /* 0056c44f: mov eax, dword ptr [0x926214] */ r_eax = R32((u32)(0x926214u));
    /* 0056c454: movzx edx, word ptr [0x926218] */ r_edx = (u32)R16((u32)(0x926218u));
    /* 0056c45b: movzx ecx, word ptr [0x92621a] */ r_ecx = (u32)R16((u32)(0x92621au));
    /* 0056c462: movzx ebx, word ptr [0x92621c] */ r_ebx = (u32)R16((u32)(0x92621cu));
    /* 0056c469: mov edi, dword ptr [0xa73db0] */ r_edi = R32((u32)(0xa73db0u));
    /* 0056c46f: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0056c475: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056c478: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0056c47c: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0056c482: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0056c486: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0056c48a: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0056c48d: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0056c490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056c491: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c496: push dword ptr [0x9be56c] */ { u32 v = R32((u32)(0x9be56cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c49c: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c49f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056c4a2: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0056c4a4: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56c4a9u); f_00608470();
    /* 0056c4a9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056c4ac: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056c4af: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056c4b2: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056c4b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056c4b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056c4bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0056c4c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056c4c2: ret  */ FN_RET(0x0056c35c); r_esp += 4; return;
L_0056c4ca:; BB(0x0056c4ca);
    /* 0056c4ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056c4cc: jmp 0x56c439 */ goto L_0056c439;
}

void f_0056c4c5(void) /* _WinMain@16_65 */
{
    FN_ENTER(0x0056c4c5);
    /* 0056c4c5: jmp 0x56c35c */ f_0056c35c(); return;
}

void f_0056f95c(void) /* _WinMain@16_66_0 */
{
    FN_ENTER(0x0056f95c);
    /* 0056f95c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f963: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056f96a: push 0x464 */ { u32 v = 0x464u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f96f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f974u); f_005caba4();
    /* 0056f974: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056f977: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f97a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f97d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f97f: je 0x56fbbd */ if (fZ) goto L_0056fbbd;
L_0056f985:; BB(0x0056f985);
    /* 0056f985: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0056f98c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056f993: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f995: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f998: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0056f99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f99c: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x56f9a1u); f_0052c3fc();
    /* 0056f9a1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056f9a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9ab: mov dword ptr [eax], 0xb05f80 */ W32((u32)(r_eax), 0xb05f80u);
    /* 0056f9b1: lea ecx, [eax + 0x3d8] */ r_ecx = (u32)(r_eax+0x3d8u);
    /* 0056f9b7: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x56f9bcu); f_00576a48();
    /* 0056f9bc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056f9c3: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9c8: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9d2: lea edx, [eax + 0x3f4] */ r_edx = (u32)(r_eax+0x3f4u);
    /* 0056f9d8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9db: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x56f9e0u); f_00858736();
    /* 0056f9e0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056f9e7: mov eax, dword ptr [0x9be814] */ r_eax = R32((u32)(0x9be814u));
    /* 0056f9ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056f9f2: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0056f9f4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056f9f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9f8: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x56f9feu); call_ind(t); }
    /* 0056f9fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa01: mov esi, dword ptr [0xa73ed8] */ r_esi = R32((u32)(0xa73ed8u));
    /* 0056fa07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa09: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0056fa0c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0056fa0f: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0056fa12: push 0x9be834 */ { u32 v = 0x9be834u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa17: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0056fa1d: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 0056fa23: mov dword ptr [ecx + 0x2ac], ebx */ W32((u32)(r_ecx+0x2acu), r_ebx);
    /* 0056fa29: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 0056fa2f: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 0056fa35: mov dword ptr [ecx + 0x2a0], ebx */ W32((u32)(r_ecx+0x2a0u), r_ebx);
    /* 0056fa3b: mov edi, dword ptr [esi + 0x430] */ r_edi = R32((u32)(r_esi+0x430u));
    /* 0056fa41: mov dword ptr [ecx + 0xdc], edi */ W32((u32)(r_ecx+0xdcu), r_edi);
    /* 0056fa47: mov dword ptr [ecx + 0xd8], 0x9be740 */ W32((u32)(r_ecx+0xd8u), 0x9be740u);
    /* 0056fa51: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x56fa56u); f_007b9a88();
    /* 0056fa56: push dword ptr [0xa73ee0] */ { u32 v = R32((u32)(0xa73ee0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa5c: push dword ptr [0xa73ee4] */ { u32 v = R32((u32)(0xa73ee4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa62: push dword ptr [0xa73ee8] */ { u32 v = R32((u32)(0xa73ee8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa6b: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 0056fa75: mov dword ptr [ecx + 0x358], 0x9be818 */ W32((u32)(r_ecx+0x358u), 0x9be818u);
    /* 0056fa7f: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x56fa84u); f_007868f8();
    /* 0056fa84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa87: call 0x56d5a4 */ r_esp -= 4; W32(r_esp, 0x56fa8cu); f_0056d5a4();
    /* 0056fa8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fa91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa92: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056fa99: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x56fa9eu); f_007aa4c8();
    /* 0056fa9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056faa1: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0056faa6: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0056faa8: movzx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0056faaf: movsx edi, word ptr [ecx + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0056fab6: movzx esi, word ptr [ecx + 0x2be] */ r_esi = (u32)R16((u32)(r_ecx+0x2beu));
    /* 0056fabd: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056fabf: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0056fac6: mov word ptr [ecx + 0x334], di */ W16((u32)(r_ecx+0x334u), (u16)r_edi);
    /* 0056facd: mov word ptr [ecx + 0x336], si */ W16((u32)(r_ecx+0x336u), (u16)r_esi);
    /* 0056fad4: mov word ptr [ecx + 0x346], di */ W16((u32)(r_ecx+0x346u), (u16)r_edi);
    /* 0056fadb: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0056fade: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056fae0: mov dword ptr [ecx + 0x3b8], edx */ W32((u32)(r_ecx+0x3b8u), r_edx);
    /* 0056fae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fae8: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0056faee: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 0056faf4: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0056fafa: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0056fb00: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 0056fb06: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x56fb0bu); f_00787550();
    /* 0056fb0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb0e: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 0056fb14: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056fb17: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0056fb1d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x56fb22u); f_0078730c();
    /* 0056fb22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb25: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x56fb2au); f_00786bbc();
    /* 0056fb2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb2d: mov esi, dword ptr [0xa73ed8] */ r_esi = R32((u32)(0xa73ed8u));
    /* 0056fb33: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0056fb36: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056fb3c: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0056fb3f: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0056fb45: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0056fb48: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0056fb4b: mov edi, dword ptr [esi + 0x42c] */ r_edi = R32((u32)(r_esi+0x42cu));
    /* 0056fb51: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0056fb54: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0056fb57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056fb5a: movsx eax, word ptr [eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0056fb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fb60: je 0x56fb6a */ if (fZ) goto L_0056fb6a;
L_0056fb62:; BB(0x0056fb62);
    /* 0056fb62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb65: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x56fb6au); f_0052ca40();
L_0056fb6a:; BB(0x0056fb6a);
    /* 0056fb6a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fb6c:; BB(0x0056fb6c);
    /* 0056fb6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb6f: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0056fb72: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056fb74: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0056fb77: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb7b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb7d: lea ecx, [edx + esi + 0x3f4] */ r_ecx = (u32)(r_edx+r_esi+0x3f4u);
    /* 0056fb84: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x56fb89u); f_0057739c();
    /* 0056fb89: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fb8c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fb8f: jl 0x56fb6c */ if ((fS!=fO)) goto L_0056fb6c;
L_0056fb91:; BB(0x0056fb91);
    /* 0056fb91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056fb96: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x56fb9cu); call_ind(t); }
    /* 0056fb9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0056fba3:; BB(0x0056fba3);
    /* 0056fba3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fba6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056fba9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056fbac: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fbaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056fbb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056fbb9: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fbbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fbbc: ret  */ FN_RET(0x0056f95c); r_esp += 4; return;
L_0056fbbd:; BB(0x0056fbbd);
    /* 0056fbbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056fbbf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056fbc2: jmp 0x56fba3 */ goto L_0056fba3;
}

void f_0056fbc9(void) /* _WinMain@16_66 */
{
    FN_ENTER(0x0056fbc9);
    /* 0056fbc9: jmp 0x56f95c */ f_0056f95c(); return;
}

void f_0056fca2(void) /* _WinMain@16_68_0 */
{
    FN_ENTER(0x0056fca2);
    /* 0056fca2: mov dword ptr [0xa73ed8], eax */ W32((u32)(0xa73ed8u), r_eax);
    /* 0056fca7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fcae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fcb0:; BB(0x0056fcb0);
    /* 0056fcb0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056fcb6: movsx eax, word ptr [ebx*2 + 0x9be87c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9be87cu));
    /* 0056fcbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcbf: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fcc2: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fcc7u); f_0078e934();
    /* 0056fcc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fcca: mov dword ptr [ebx*4 + 0xa73e00], eax */ W32((u32)(r_ebx*4+0xa73e00u), r_eax);
    /* 0056fcd1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fcd4: cmp ebx, 0x16 */ {  u32 a = r_ebx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fcd7: jge 0x56fce0 */ if ((fS==fO)) goto L_0056fce0;
L_0056fcd9:; BB(0x0056fcd9);
    /* 0056fcd9: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fcde: jmp 0x56fcb0 */ goto L_0056fcb0;
L_0056fce0:; BB(0x0056fce0);
    /* 0056fce0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fce2:; BB(0x0056fce2);
    /* 0056fce2: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fce7: movsx edx, word ptr [ebx*2 + 0x9be87c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9be87cu));
    /* 0056fcef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcf0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0056fcf6: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fcf9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fcfeu); f_0078e934();
    /* 0056fcfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fd01: mov dword ptr [ebx*4 + 0xa73ea4], eax */ W32((u32)(r_ebx*4+0xa73ea4u), r_eax);
    /* 0056fd08: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fd0b: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fd0e: jl 0x56fce2 */ if ((fS!=fO)) goto L_0056fce2;
L_0056fd10:; BB(0x0056fd10);
    /* 0056fd10: mov edx, dword ptr [0xa73ea4] */ r_edx = R32((u32)(0xa73ea4u));
    /* 0056fd16: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fd18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fd1a: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd1d: mov ecx, dword ptr [0xa73ea8] */ r_ecx = R32((u32)(0xa73ea8u));
    /* 0056fd23: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0056fd26: mov ebx, dword ptr [0xa73eac] */ r_ebx = R32((u32)(0xa73eacu));
    /* 0056fd2c: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0056fd2f: mov esi, dword ptr [0xa73eb0] */ r_esi = R32((u32)(0xa73eb0u));
    /* 0056fd35: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056fd38: mov edi, dword ptr [0xa73eb4] */ r_edi = R32((u32)(0xa73eb4u));
    /* 0056fd3e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056fd41: mov edx, dword ptr [0xa73eb8] */ r_edx = R32((u32)(0xa73eb8u));
    /* 0056fd47: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd4a: mov edx, dword ptr [0xa73ebc] */ r_edx = R32((u32)(0xa73ebcu));
    /* 0056fd50: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd53: mov edx, dword ptr [0xa73ec0] */ r_edx = R32((u32)(0xa73ec0u));
    /* 0056fd59: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd5c: mov edx, dword ptr [0xa73ec4] */ r_edx = R32((u32)(0xa73ec4u));
    /* 0056fd62: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd65: mov edx, dword ptr [0xa73ec8] */ r_edx = R32((u32)(0xa73ec8u));
    /* 0056fd6b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd6e: mov edx, dword ptr [0xa73ecc] */ r_edx = R32((u32)(0xa73eccu));
    /* 0056fd74: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd77: mov edx, dword ptr [0xa73ed0] */ r_edx = R32((u32)(0xa73ed0u));
    /* 0056fd7d: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd80: mov edx, dword ptr [0xa73ed4] */ r_edx = R32((u32)(0xa73ed4u));
    /* 0056fd86: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd89: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fd8e: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0056fd94: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fd97: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fd9cu); f_0078e934();
    /* 0056fd9c: mov dword ptr [0xa73e58], eax */ W32((u32)(0xa73e58u), r_eax);
    /* 0056fda1: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fda6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fda8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056fdae: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fdb1: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fdb6u); f_0078e934();
    /* 0056fdb6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056fdbd: mov dword ptr [0xa73e5c], eax */ W32((u32)(0xa73e5cu), r_eax);
    /* 0056fdc2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdc4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56fdc9u); f_008581c5();
    /* 0056fdc9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fdcc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056fdcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fdd1: je 0x56fee8 */ if (fZ) goto L_0056fee8;
L_0056fdd7:; BB(0x0056fdd7);
    /* 0056fdd7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056fdde: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056fde5: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 0056fdeb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fded: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x56fdf2u); f_005b8638();
    /* 0056fdf2: push 0x42580000 */ { u32 v = 0x42580000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdf7: mov edx, dword ptr [0xa73ed8] */ r_edx = R32((u32)(0xa73ed8u));
    /* 0056fdfd: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 0056fe03: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056fe06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe07: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fe0a: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x56fe0fu); f_00511bb4();
    /* 0056fe0f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056fe12: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056fe19: mov dword ptr [0xa73eec], eax */ W32((u32)(0xa73eecu), r_eax);
    /* 0056fe1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fe25: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe27: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56fe2cu); f_0077a684();
    /* 0056fe2c: mov dword ptr [0xa73ee8], eax */ W32((u32)(0xa73ee8u), r_eax);
    /* 0056fe31: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe33: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56fe38u); f_0077a698();
    /* 0056fe38: mov dword ptr [0xa73ee4], eax */ W32((u32)(0xa73ee4u), r_eax);
    /* 0056fe3d: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe3f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x56fe44u); f_0077a6b4();
    /* 0056fe44: mov dword ptr [0xa73ee0], eax */ W32((u32)(0xa73ee0u), r_eax);
    /* 0056fe49: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe4b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x56fe50u); f_0077a6cc();
    /* 0056fe50: movzx edx, word ptr [0x9267d4] */ r_edx = (u32)R16((u32)(0x9267d4u));
    /* 0056fe57: movzx ecx, word ptr [0x9267d6] */ r_ecx = (u32)R16((u32)(0x9267d6u));
    /* 0056fe5e: movzx ebx, word ptr [0x9267d8] */ r_ebx = (u32)R16((u32)(0x9267d8u));
    /* 0056fe65: mov edi, dword ptr [0xa73ed8] */ r_edi = R32((u32)(0xa73ed8u));
    /* 0056fe6b: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0056fe71: mov dword ptr [0xa73edc], eax */ W32((u32)(0xa73edcu), r_eax);
    /* 0056fe76: mov eax, dword ptr [0x9267d0] */ r_eax = R32((u32)(0x9267d0u));
    /* 0056fe7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056fe7e: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0056fe82: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0056fe88: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0056fe8c: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0056fe90: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0056fe93: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0056fe96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe99: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe9e: push dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea1: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feabu); f_00608470();
    /* 0056feab: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056feb0: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0056feb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056feb4: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0056feba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056febc: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec1: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec4: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec7: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec9: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feceu); f_00608470();
    /* 0056fece: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056fed1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fed4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056fed7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056feda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056fedd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056fee4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fee7: ret  */ FN_RET(0x0056fca2); r_esp += 4; return;
L_0056fee8:; BB(0x0056fee8);
    /* 0056fee8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056feea: jmp 0x56fe19 */ f_0056fe19(); return;
}

void f_0056fe19(void) /* _WinMain@16_67_0 */
{
    FN_ENTER(0x0056fe19);
    /* 0056fe19: mov dword ptr [0xa73eec], eax */ W32((u32)(0xa73eecu), r_eax);
    /* 0056fe1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fe25: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe27: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56fe2cu); f_0077a684();
    /* 0056fe2c: mov dword ptr [0xa73ee8], eax */ W32((u32)(0xa73ee8u), r_eax);
    /* 0056fe31: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe33: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56fe38u); f_0077a698();
    /* 0056fe38: mov dword ptr [0xa73ee4], eax */ W32((u32)(0xa73ee4u), r_eax);
    /* 0056fe3d: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe3f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x56fe44u); f_0077a6b4();
    /* 0056fe44: mov dword ptr [0xa73ee0], eax */ W32((u32)(0xa73ee0u), r_eax);
    /* 0056fe49: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe4b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x56fe50u); f_0077a6cc();
    /* 0056fe50: movzx edx, word ptr [0x9267d4] */ r_edx = (u32)R16((u32)(0x9267d4u));
    /* 0056fe57: movzx ecx, word ptr [0x9267d6] */ r_ecx = (u32)R16((u32)(0x9267d6u));
    /* 0056fe5e: movzx ebx, word ptr [0x9267d8] */ r_ebx = (u32)R16((u32)(0x9267d8u));
    /* 0056fe65: mov edi, dword ptr [0xa73ed8] */ r_edi = R32((u32)(0xa73ed8u));
    /* 0056fe6b: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0056fe71: mov dword ptr [0xa73edc], eax */ W32((u32)(0xa73edcu), r_eax);
    /* 0056fe76: mov eax, dword ptr [0x9267d0] */ r_eax = R32((u32)(0x9267d0u));
    /* 0056fe7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056fe7e: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0056fe82: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0056fe88: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0056fe8c: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0056fe90: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0056fe93: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0056fe96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe99: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe9e: push dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea1: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feabu); f_00608470();
    /* 0056feab: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056feb0: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0056feb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056feb4: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0056feba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056febc: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec1: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec4: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec7: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec9: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feceu); f_00608470();
    /* 0056fece: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056fed1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fed4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056fed7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056feda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056fedd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056fee4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fee7: ret  */ FN_RET(0x0056fe19); r_esp += 4; return;
}

void f_0056fef1(void) /* _WinMain@16_68 */
{
    FN_ENTER(0x0056fef1);
    /* 0056fef1: jmp 0x56fca2 */ f_0056fca2(); return;
}

void f_0057376c(void) /* _WinMain@16_69_0 */
{
    FN_ENTER(0x0057376c);
    /* 0057376c: mov dword ptr [0xa73f94], eax */ W32((u32)(0xa73f94u), r_eax);
    /* 00573771: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00573778: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0057377f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00573781: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x573786u); f_008581c5();
    /* 00573786: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00573787: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0057378a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057378c: je 0x5738a1 */ if (fZ) goto L_005738a1;
L_00573792:; BB(0x00573792);
    /* 00573792: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00573799: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005737a0: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 005737a3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005737a5: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005737aa: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005737af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005737b1: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5737b6u); f_005795a0();
    /* 005737b6: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005737b9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005737c0: mov dword ptr [0xa73f98], eax */ W32((u32)(0xa73f98u), r_eax);
    /* 005737c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005737cc: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5737d1u); f_0082fa9c();
    /* 005737d1: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 005737d6: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 005737dc: mov ecx, dword ptr [0xa73f94] */ r_ecx = R32((u32)(0xa73f94u));
    /* 005737e2: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005737e4: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005737ea: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005737ec: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005737f2: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f6: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5737feu); f_00579a28();
    /* 005737fe: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 00573803: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 00573809: mov ecx, dword ptr [0xa73f98] */ r_ecx = R32((u32)(0xa73f98u));
    /* 0057380f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00573811: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00573817: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00573819: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0057381f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573823: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573826: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x57382bu); f_00579a28();
    /* 0057382b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x573830u); f_0082faac();
    /* 00573830: mov eax, dword ptr [0x926ad0] */ r_eax = R32((u32)(0x926ad0u));
    /* 00573835: movzx edx, word ptr [0x926ad4] */ r_edx = (u32)R16((u32)(0x926ad4u));
    /* 0057383c: movzx ecx, word ptr [0x926ad6] */ r_ecx = (u32)R16((u32)(0x926ad6u));
    /* 00573843: movzx ebx, word ptr [0x926ad8] */ r_ebx = (u32)R16((u32)(0x926ad8u));
    /* 0057384a: mov edi, dword ptr [0xa73f44] */ r_edi = R32((u32)(0xa73f44u));
    /* 00573850: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00573856: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00573859: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0057385d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00573863: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00573867: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0057386b: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057386e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00573871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573874: push dword ptr [0x9be94c] */ { u32 v = R32((u32)(0x9be94cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387a: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573880: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00573882: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x573887u); f_00608470();
    /* 00573887: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057388a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057388d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00573890: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00573893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057389d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057389f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005738a0: ret  */ FN_RET(0x0057376c); r_esp += 4; return;
L_005738a1:; BB(0x005738a1);
    /* 005738a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005738a3: jmp 0x5737c0 */ f_005737c0(); return;
}

void f_005737c0(void) /* _WinMain@16_67_1 */
{
    FN_ENTER(0x005737c0);
    /* 005737c0: mov dword ptr [0xa73f98], eax */ W32((u32)(0xa73f98u), r_eax);
    /* 005737c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005737cc: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5737d1u); f_0082fa9c();
    /* 005737d1: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 005737d6: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 005737dc: mov ecx, dword ptr [0xa73f94] */ r_ecx = R32((u32)(0xa73f94u));
    /* 005737e2: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 005737e4: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 005737ea: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005737ec: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005737f2: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f6: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005737f9: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x5737feu); f_00579a28();
    /* 005737fe: mov eax, dword ptr [0xa73f44] */ r_eax = R32((u32)(0xa73f44u));
    /* 00573803: mov ebx, dword ptr [0x9bea24] */ r_ebx = R32((u32)(0x9bea24u));
    /* 00573809: mov ecx, dword ptr [0xa73f98] */ r_ecx = R32((u32)(0xa73f98u));
    /* 0057380f: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00573811: mov esi, dword ptr [eax + 0x42c] */ r_esi = R32((u32)(r_eax+0x42cu));
    /* 00573817: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00573819: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0057381f: push dword ptr [edx + ebx*8 + 4] */ { u32 v = R32((u32)(r_edx+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573823: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573826: call 0x579a28 */ r_esp -= 4; W32(r_esp, 0x57382bu); f_00579a28();
    /* 0057382b: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x573830u); f_0082faac();
    /* 00573830: mov eax, dword ptr [0x926ad0] */ r_eax = R32((u32)(0x926ad0u));
    /* 00573835: movzx edx, word ptr [0x926ad4] */ r_edx = (u32)R16((u32)(0x926ad4u));
    /* 0057383c: movzx ecx, word ptr [0x926ad6] */ r_ecx = (u32)R16((u32)(0x926ad6u));
    /* 00573843: movzx ebx, word ptr [0x926ad8] */ r_ebx = (u32)R16((u32)(0x926ad8u));
    /* 0057384a: mov edi, dword ptr [0xa73f44] */ r_edi = R32((u32)(0xa73f44u));
    /* 00573850: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00573856: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00573859: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0057385d: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00573863: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00573867: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0057386b: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057386e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00573871: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00573872: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00573874: push dword ptr [0x9be94c] */ { u32 v = R32((u32)(0x9be94cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387a: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057387d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00573880: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00573882: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x573887u); f_00608470();
    /* 00573887: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057388a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057388d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00573890: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00573893: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00573896: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057389d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057389f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005738a0: ret  */ FN_RET(0x005737c0); r_esp += 4; return;
}

void f_005738aa(void) /* _WinMain@16_69 */
{
    FN_ENTER(0x005738aa);
    /* 005738aa: jmp 0x57376c */ f_0057376c(); return;
}

void f_00576348(void) /* _WinMain@16_67_2 */
{
    FN_ENTER(0x00576348);
    /* 00576348: mov dword ptr [0xa7403c], eax */ W32((u32)(0xa7403cu), r_eax);
    /* 0057634d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576354: jmp 0x5763ab */ goto L_005763ab;
L_005763ab:; BB(0x005763ab);
    /* 005763ab: mov dword ptr [0x9beb6c], 0x40e00000 */ W32((u32)(0x9beb6cu), 0x40e00000u);
    /* 005763b5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763b7: mov dword ptr [0x9beb98], 0x40e00000 */ W32((u32)(0x9beb98u), 0x40e00000u);
    /* 005763c1: mov dword ptr [0x9bebc4], 0x41000000 */ W32((u32)(0x9bebc4u), 0x41000000u);
    /* 005763cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763d0u); f_008581c5();
    /* 005763d0: mov dword ptr [0xa74038], eax */ W32((u32)(0xa74038u), r_eax);
    /* 005763d5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763dcu); f_008581c5();
    /* 005763dc: mov dword ptr [0xa74034], eax */ W32((u32)(0xa74034u), r_eax);
    /* 005763e1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763e8u); f_008581c5();
    /* 005763e8: mov dword ptr [0xa74030], eax */ W32((u32)(0xa74030u), r_eax);
    /* 005763ed: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763f4u); f_008581c5();
    /* 005763f4: mov dword ptr [0xa7402c], eax */ W32((u32)(0xa7402cu), r_eax);
    /* 005763f9: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005763fb: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x576400u); f_0077a684();
    /* 00576400: mov edx, dword ptr [0xa74038] */ r_edx = R32((u32)(0xa74038u));
    /* 00576406: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576408: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0057640a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57640fu); f_0077a684();
    /* 0057640f: mov edx, dword ptr [0xa74038] */ r_edx = R32((u32)(0xa74038u));
    /* 00576415: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00576417: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057641a: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57641fu); f_0077a698();
    /* 0057641f: mov edx, dword ptr [0xa74034] */ r_edx = R32((u32)(0xa74034u));
    /* 00576425: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00576427: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576429: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57642eu); f_0077a698();
    /* 0057642e: mov edx, dword ptr [0xa74034] */ r_edx = R32((u32)(0xa74034u));
    /* 00576434: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00576436: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00576439: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57643eu); f_0077a6b4();
    /* 0057643e: mov edx, dword ptr [0xa74030] */ r_edx = R32((u32)(0xa74030u));
    /* 00576444: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00576446: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576448: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57644du); f_0077a6b4();
    /* 0057644d: mov edx, dword ptr [0xa74030] */ r_edx = R32((u32)(0xa74030u));
    /* 00576453: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00576455: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00576458: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57645du); f_0077a6cc();
    /* 0057645d: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 00576463: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00576465: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576467: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57646cu); f_0077a6cc();
    /* 0057646c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057646f: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 00576475: mov ebx, dword ptr [0x926f20] */ r_ebx = R32((u32)(0x926f20u));
    /* 0057647b: movzx esi, word ptr [0x926f24] */ r_esi = (u32)R16((u32)(0x926f24u));
    /* 00576482: movzx edi, word ptr [0x926f26] */ r_edi = (u32)R16((u32)(0x926f26u));
    /* 00576489: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057648c: mov edx, dword ptr [0xa7403c] */ r_edx = R32((u32)(0xa7403cu));
    /* 00576492: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00576495: mov word ptr [ebp - 0x24], si */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_esi);
    /* 00576499: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 0057649e: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 005764a2: movzx eax, word ptr [0x926f28] */ r_eax = (u32)R16((u32)(0x926f28u));
    /* 005764a9: mov word ptr [ebp - 0x22], di */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_edi);
    /* 005764ad: mov ecx, 0x2e */ r_ecx = 0x2eu;
    /* 005764b2: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 005764b6: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005764ba: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005764c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005764c2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005764c5:; BB(0x005764c5);
    /* 005764c5: movsx edi, word ptr [ebp + ebx*2 - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 005764ca: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005764cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005764ce: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005764d4: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005764d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005764d9: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005764dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764de: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005764e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764e4: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005764e6: push dword ptr [edx*4 + 0x9beb6c] */ { u32 v = R32((u32)(r_edx*4+0x9beb6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005764ed: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005764f1: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005764f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005764f6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5764fbu); f_00608470();
    /* 005764fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005764fe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00576501: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00576504: jge 0x57650e */ if ((fS==fO)) goto L_0057650e;
L_00576506:; BB(0x00576506);
    /* 00576506: mov edx, dword ptr [0xa7403c] */ r_edx = R32((u32)(0xa7403cu));
    /* 0057650c: jmp 0x5764c5 */ goto L_005764c5;
L_0057650e:; BB(0x0057650e);
    /* 0057650e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576511: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576514: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576517: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057651a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576521: mov esp, ebp */ r_esp = r_ebp;
    /* 00576523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576524: ret  */ FN_RET(0x00576348); r_esp += 4; return;
}

void f_00576527(void) /* _WinMain@16_67 */
{
    FN_ENTER(0x00576527);
    /* 00576527: jmp 0x576348 */ f_00576348(); return;
}

void f_0057fb50(void) /* _WinMain@16_70_0 */
{
    FN_ENTER(0x0057fb50);
    /* 0057fb50: mov dword ptr [0xa74194], eax */ W32((u32)(0xa74194u), r_eax);
    /* 0057fb55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0057fb5c: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb5e: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57fb63u); f_0077a684();
    /* 0057fb63: mov dword ptr [0xa74190], eax */ W32((u32)(0xa74190u), r_eax);
    /* 0057fb68: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb6a: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57fb6fu); f_0077a698();
    /* 0057fb6f: mov dword ptr [0xa7418c], eax */ W32((u32)(0xa7418cu), r_eax);
    /* 0057fb74: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb76: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57fb7bu); f_0077a6b4();
    /* 0057fb7b: mov dword ptr [0xa74188], eax */ W32((u32)(0xa74188u), r_eax);
    /* 0057fb80: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0057fb82: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57fb87u); f_0077a6cc();
    /* 0057fb87: movzx edx, word ptr [0x927854] */ r_edx = (u32)R16((u32)(0x927854u));
    /* 0057fb8e: movzx ecx, word ptr [0x927856] */ r_ecx = (u32)R16((u32)(0x927856u));
    /* 0057fb95: movzx ebx, word ptr [0x927858] */ r_ebx = (u32)R16((u32)(0x927858u));
    /* 0057fb9c: mov edi, dword ptr [0xa74194] */ r_edi = R32((u32)(0xa74194u));
    /* 0057fba2: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0057fba8: mov dword ptr [0xa74184], eax */ W32((u32)(0xa74184u), r_eax);
    /* 0057fbad: mov eax, dword ptr [0x927850] */ r_eax = R32((u32)(0x927850u));
    /* 0057fbb2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0057fbb5: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0057fbb9: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0057fbbf: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0057fbc3: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0057fbc7: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0057fbca: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0057fbcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd0: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd5: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057fbd8: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057fbdb: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0057fbdd: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x57fbe2u); f_00608470();
    /* 0057fbe2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057fbe5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0057fbe8: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057fbeb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0057fbee: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057fbf1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057fbf8: mov esp, ebp */ r_esp = r_ebp;
    /* 0057fbfa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057fbfb: ret  */ FN_RET(0x0057fb50); r_esp += 4; return;
}

void f_0057fbfe(void) /* _WinMain@16_70 */
{
    FN_ENTER(0x0057fbfe);
    /* 0057fbfe: jmp 0x57fb50 */ f_0057fb50(); return;
}

void f_0058092c(void) /* _WinMain@16_71_0 */
{
    FN_ENTER(0x0058092c);
    /* 0058092c: mov dword ptr [0xa741cc], edi */ W32((u32)(0xa741ccu), r_edi);
    /* 00580932: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00580939: mov eax, dword ptr [0x927c5c] */ r_eax = R32((u32)(0x927c5cu));
    /* 0058093e: movzx edx, word ptr [0x927c60] */ r_edx = (u32)R16((u32)(0x927c60u));
    /* 00580945: movzx ecx, word ptr [0x927c62] */ r_ecx = (u32)R16((u32)(0x927c62u));
    /* 0058094c: movzx ebx, word ptr [0x927c64] */ r_ebx = (u32)R16((u32)(0x927c64u));
    /* 00580953: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00580959: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0058095c: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00580962: mov word ptr [ebp - 0x34], dx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edx);
    /* 00580966: mov word ptr [ebp - 0x32], cx */ W16((u32)(r_ebp+0xffffffceu), (u16)r_ecx);
    /* 0058096a: mov word ptr [ebp - 0x30], bx */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_ebx);
    /* 0058096e: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00580971: lea edi, [ebp - 0x3c] */ r_edi = (u32)(r_ebp+0xffffffc4u);
    /* 00580974: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00580975: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00580977: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058097c: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058097f: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00580982: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00580984: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x580989u); f_00608470();
    /* 00580989: mov eax, dword ptr [0x927c4c] */ r_eax = R32((u32)(0x927c4cu));
    /* 0058098e: movzx edx, word ptr [0x927c50] */ r_edx = (u32)R16((u32)(0x927c50u));
    /* 00580995: movzx ecx, word ptr [0x927c52] */ r_ecx = (u32)R16((u32)(0x927c52u));
    /* 0058099c: movzx ebx, word ptr [0x927c54] */ r_ebx = (u32)R16((u32)(0x927c54u));
    /* 005809a3: mov edi, dword ptr [0xa741cc] */ r_edi = R32((u32)(0xa741ccu));
    /* 005809a9: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005809af: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005809b2: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 005809b6: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 005809bc: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 005809c0: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 005809c4: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005809c7: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005809ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005809cb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005809cd: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005809d2: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005809d5: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005809d8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005809da: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5809dfu); f_00608470();
    /* 005809df: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005809e2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005809e5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005809e8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005809eb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005809ee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005809f5: mov esp, ebp */ r_esp = r_ebp;
    /* 005809f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005809f8: ret  */ FN_RET(0x0058092c); r_esp += 4; return;
}

void f_005809fb(void) /* _WinMain@16_71 */
{
    FN_ENTER(0x005809fb);
    /* 005809fb: jmp 0x58092c */ f_0058092c(); return;
}

void f_005834c0(void) /* _WinMain@16_72_0 */
{
    FN_ENTER(0x005834c0);
    /* 005834c0: mov dword ptr [0xa742a4], edi */ W32((u32)(0xa742a4u), r_edi);
    /* 005834c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005834cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005834cf: je 0x583553 */ if (fZ) goto L_00583553;
L_005834d5:; BB(0x005834d5);
    /* 005834d5: mov eax, dword ptr [0x927d38] */ r_eax = R32((u32)(0x927d38u));
    /* 005834da: movzx edx, word ptr [0x927d3c] */ r_edx = (u32)R16((u32)(0x927d3cu));
    /* 005834e1: movzx ecx, word ptr [0x927d3e] */ r_ecx = (u32)R16((u32)(0x927d3eu));
    /* 005834e8: movzx ebx, word ptr [0x927d40] */ r_ebx = (u32)R16((u32)(0x927d40u));
    /* 005834ef: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 005834f5: fld dword ptr [0x927db8] */ FPUSH(R_F32((u32)(0x927db8u)));
    /* 005834fb: fmul dword ptr [0xa74284] */ ST(0) = ST(0) * R_F32((u32)(0xa74284u));
    /* 00583501: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00583504: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00583507: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0058350b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00583513: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 00583517: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0058351d: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 00583521: mov edi, 0x23 */ r_edi = 0x23u;
    /* 00583526: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0058352a: mov word ptr [esp], di */ W16((u32)(r_esp), (u16)r_edi);
    /* 0058352e: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00583531: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00583534: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00583538: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0058353b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0058353f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00583542: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00583546: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58354bu); f_00608470();
    /* 0058354b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058354e: call 0x587220 */ r_esp -= 4; W32(r_esp, 0x583553u); f_00587220();
L_00583553:; BB(0x00583553);
    /* 00583553: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00583556: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00583559: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058355c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058355f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00583566: mov esp, ebp */ r_esp = r_ebp;
    /* 00583568: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00583569: ret  */ FN_RET(0x005834c0); r_esp += 4; return;
}

void f_0058356c(void) /* _WinMain@16_72 */
{
    FN_ENTER(0x0058356c);
    /* 0058356c: jmp 0x5834c0 */ f_005834c0(); return;
}

void f_005905d9(void) /* _WinMain@16_73_0 */
{
    FN_ENTER(0x005905d9);
L_005905d9:; BB(0x005905d9);
    /* 005905d9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005905dc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005905de: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005905e1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005905e3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005905e5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 005905e8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 005905eb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 005905ef: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 005905f3: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 005905f7: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 005905fb: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590601: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590603: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00590607: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059060a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 0059060e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00590612: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00590616: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 0059061a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 0059061e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590623: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00590625: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00590629: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 0059062d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00590631: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00590635: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00590639: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 0059063d: mov esi, dword ptr [0xa7444c] */ r_esi = R32((u32)(0xa7444cu));
    /* 00590643: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00590645: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00590649: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 0059064d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00590651: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00590655: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00590659: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 0059065d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590660: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590662: jg 0x59066e */ if ((!fZ&&fS==fO)) goto L_0059066e;
L_00590664:; BB(0x00590664);
    /* 00590664: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 00590669: jmp 0x5905d9 */ goto L_005905d9;
L_0059066e:; BB(0x0059066e);
    /* 0059066e: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
L_00590673:; BB(0x00590673);
    /* 00590673: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00590675: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00590678: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059067a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 0059067d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0059067f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00590682: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00590685: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00590689: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 0059068d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00590691: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00590695: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00590698: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0059069b: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0059069d: jge 0x5906a6 */ if ((fS==fO)) goto L_005906a6;
L_0059069f:; BB(0x0059069f);
    /* 0059069f: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 005906a4: jmp 0x590673 */ goto L_00590673;
L_005906a6:; BB(0x005906a6);
    /* 005906a6: mov eax, dword ptr [0xa7444c] */ r_eax = R32((u32)(0xa7444cu));
    /* 005906ab: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005906ae: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 005906b1: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 005906b4: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 005906b7: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 005906ba: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 005906bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906bf:; BB(0x005906bf);
    /* 005906bf: push dword ptr [ebx*4 + 0x928b90] */ { u32 v = R32((u32)(r_ebx*4+0x928b90u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906c6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5906cbu); f_0077a684();
    /* 005906cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906cc: mov dword ptr [ebx*4 + 0xa74470], eax */ W32((u32)(r_ebx*4+0xa74470u), r_eax);
    /* 005906d3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906d6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906d9: jl 0x5906bf */ if ((fS!=fO)) goto L_005906bf;
L_005906db:; BB(0x005906db);
    /* 005906db: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906dd:; BB(0x005906dd);
    /* 005906dd: push dword ptr [ebx*4 + 0x928b88] */ { u32 v = R32((u32)(r_ebx*4+0x928b88u)); r_esp -= 4; W32(r_esp, v); }
    /* 005906e4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5906e9u); f_0077a698();
    /* 005906e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005906ea: mov dword ptr [ebx*4 + 0xa74468], eax */ W32((u32)(r_ebx*4+0xa74468u), r_eax);
    /* 005906f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005906f4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005906f7: jl 0x5906dd */ if ((fS!=fO)) goto L_005906dd;
L_005906f9:; BB(0x005906f9);
    /* 005906f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005906fb:; BB(0x005906fb);
    /* 005906fb: push dword ptr [ebx*4 + 0x928b80] */ { u32 v = R32((u32)(r_ebx*4+0x928b80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590702: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x590707u); f_0077a6b4();
    /* 00590707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590708: mov dword ptr [ebx*4 + 0xa74460], eax */ W32((u32)(r_ebx*4+0xa74460u), r_eax);
    /* 0059070f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590712: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590715: jl 0x5906fb */ if ((fS!=fO)) goto L_005906fb;
L_00590717:; BB(0x00590717);
    /* 00590717: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00590719:; BB(0x00590719);
    /* 00590719: push dword ptr [ebx*4 + 0x928b78] */ { u32 v = R32((u32)(r_ebx*4+0x928b78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590720: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x590725u); f_0077a6cc();
    /* 00590725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590726: mov dword ptr [ebx*4 + 0xa74458], eax */ W32((u32)(r_ebx*4+0xa74458u), r_eax);
    /* 0059072d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00590730: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00590733: jl 0x590719 */ if ((fS!=fO)) goto L_00590719;
L_00590735:; BB(0x00590735);
    /* 00590735: mov edx, dword ptr [0xa74458] */ r_edx = R32((u32)(0xa74458u));
    /* 0059073b: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590741: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 00590747: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00590749: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0059074c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059074e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00590750: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00590756: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00590757: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00590759: jae 0x59075d */ if (!fC) goto L_0059075d;
L_0059075b:; BB(0x0059075b);
    /* 0059075b: fst st(1) */ ST(1) = ST(0);
L_0059075d:; BB(0x0059075d);
    /* 0059075d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059075f: fstp dword ptr [0x9bf908] */ W_F32((u32)(0x9bf908u), ST(0)); FPOP();
    /* 00590765: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00590768: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059076a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0059076c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0059076d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0059076f: jae 0x590773 */ if (!fC) goto L_00590773;
L_00590771:; BB(0x00590771);
    /* 00590771: fst st(1) */ ST(1) = ST(0);
L_00590773:; BB(0x00590773);
    /* 00590773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00590775: fstp dword ptr [0x9bf8d8] */ W_F32((u32)(0x9bf8d8u), ST(0)); FPOP();
    /* 0059077b: mov dword ptr [0xa744a0], 0 */ W32((u32)(0xa744a0u), 0x0u);
    /* 00590785: mov dword ptr [0xa74494], 0 */ W32((u32)(0xa74494u), 0x0u);
    /* 0059078f: mov dword ptr [0xa74498], 0 */ W32((u32)(0xa74498u), 0x0u);
    /* 00590799: mov dword ptr [0xa7449c], 0 */ W32((u32)(0xa7449cu), 0x0u);
    /* 005907a3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005907a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907a7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907acu); f_0078e934();
    /* 005907ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907af: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907b4: je 0x590baa */ if (fZ) goto L_00590baa;
L_005907ba:; BB(0x005907ba);
    /* 005907ba: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907bd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907c0: mov dword ptr [0xa74488], eax */ W32((u32)(0xa74488u), r_eax);
L_005907c5:; BB(0x005907c5);
    /* 005907c5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005907c7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907c8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907cdu); f_0078e934();
    /* 005907cd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907d0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907d5: je 0x590b9b */ if (fZ) goto L_00590b9b;
L_005907db:; BB(0x005907db);
    /* 005907db: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907de: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005907e1: mov dword ptr [0xa7448c], eax */ W32((u32)(0xa7448cu), r_eax);
L_005907e6:; BB(0x005907e6);
    /* 005907e6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005907e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005907e9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5907eeu); f_0078e934();
    /* 005907ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005907f1: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005907f6: je 0x590b8c */ if (fZ) goto L_00590b8c;
L_005907fc:; BB(0x005907fc);
    /* 005907fc: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005907ff: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00590802: mov dword ptr [0xa74490], eax */ W32((u32)(0xa74490u), r_eax);
L_00590807:; BB(0x00590807);
    /* 00590807: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 0059080c: mov ecx, dword ptr [0x9bf8e4] */ r_ecx = R32((u32)(0x9bf8e4u));
    /* 00590812: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00590818: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 0059081c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0059081f: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 00590826: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00590828: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x59082du); f_008581c5();
    /* 0059082d: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590830: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590833: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00590836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590838: je 0x590b82 */ if (fZ) goto L_00590b82;
L_0059083e:; BB(0x0059083e);
    /* 0059083e: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 00590845: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0059084c: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590851: mov esi, ebx */ r_esi = r_ebx;
    /* 00590853: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590856: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0059085c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 0059085f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00590862: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590865: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00590868: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0059086c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0059086f: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 00590872: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00590875: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00590878: fadd dword ptr [edi*4 + 0x928af8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928af8u));
    /* 0059087f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590883: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x590888u); f_00511bb4();
    /* 00590888: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
L_0059088f:; BB(0x0059088f);
    /* 0059088f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590892: mov dword ptr [0xa74484], eax */ W32((u32)(0xa74484u), r_eax);
    /* 00590897: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059089e: mov ecx, dword ptr [0xa74454] */ r_ecx = R32((u32)(0xa74454u));
    /* 005908a4: mov esi, dword ptr [0x9bf8f4] */ r_esi = R32((u32)(0x9bf8f4u));
    /* 005908aa: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005908b0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005908b3: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 005908b9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005908bc: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005908c3: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005908ca: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005908cc: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005908d3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005908da: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005908e1: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005908e8: mov edi, dword ptr [ebx + esi*8 + 4] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005908ec: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005908f3: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005908f6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5908fbu); f_008581c5();
    /* 005908fb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005908fc: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005908ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590901: je 0x590b7b */ if (fZ) goto L_00590b7b;
L_00590907:; BB(0x00590907);
    /* 00590907: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 0059090e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00590915: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590918: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091a: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 0059091f: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590924: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590929: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x59092eu); f_005795a0();
    /* 0059092e: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590931: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00590938:; BB(0x00590938);
    /* 00590938: mov dword ptr [0xa74478], eax */ W32((u32)(0xa74478u), r_eax);
    /* 0059093d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590944: mov ebx, edi */ r_ebx = r_edi;
    /* 00590946: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590949: mov ecx, dword ptr [0xa74478] */ r_ecx = R32((u32)(0xa74478u));
    /* 0059094f: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590952: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590957: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590959: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0059095a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0059095b: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590960u); f_00579be8();
    /* 00590960: mov edx, dword ptr [0xa74454] */ r_edx = R32((u32)(0xa74454u));
    /* 00590966: mov ebx, dword ptr [0x9bf904] */ r_ebx = R32((u32)(0x9bf904u));
    /* 0059096c: mov edi, dword ptr [0xa74458] */ r_edi = R32((u32)(0xa74458u));
    /* 00590972: fld dword ptr [0x928bc0] */ FPUSH(R_F32((u32)(0x928bc0u)));
    /* 00590978: mov ecx, dword ptr [edx + 0x430] */ r_ecx = R32((u32)(r_edx+0x430u));
    /* 0059097e: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 00590985: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590987: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 0059098e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 00590995: mov esi, dword ptr [ecx + ebx*8 + 4] */ r_esi = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 00590999: fld dword ptr [edi + 0xc] */ FPUSH(R_F32((u32)(r_edi+0xcu)));
    /* 0059099c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0059099e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005909a0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005909a3: mov dword ptr [ebp - 0x5c], 0xc1200000 */ W32((u32)(r_ebp+0xffffffa4u), 0xc1200000u);
    /* 005909aa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005909ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005909ad: jae 0x5909b1 */ if (!fC) goto L_005909b1;
L_005909af:; BB(0x005909af);
    /* 005909af: fst st(1) */ ST(1) = ST(0);
L_005909b1:; BB(0x005909b1);
    /* 005909b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005909b3: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 005909b6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005909bd: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 005909c4: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005909cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5909d0u); f_008581c5();
    /* 005909d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005909d1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005909d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005909d6: je 0x590b74 */ if (fZ) goto L_00590b74;
L_005909dc:; BB(0x005909dc);
    /* 005909dc: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005909e3: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005909ea: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005909ed: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 005909f0: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005909f3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005909f7: mov dword ptr [esp], 0x40c00000 */ W32((u32)(r_esp), 0x40c00000u);
    /* 005909fe: mov dword ptr [esp + 4], 0x41600000 */ W32((u32)(r_esp+0x4u), 0x41600000u);
    /* 00590a06: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590a0e: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590a13u); f_005795a0();
    /* 00590a13: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a16: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_00590a1d:; BB(0x00590a1d);
    /* 00590a1d: mov dword ptr [0xa74480], eax */ W32((u32)(0xa74480u), r_eax);
    /* 00590a22: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590a29: mov ebx, esi */ r_ebx = r_esi;
    /* 00590a2b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00590a2e: mov ecx, dword ptr [0xa74480] */ r_ecx = R32((u32)(0xa74480u));
    /* 00590a34: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590a37: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590a3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3c: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590a3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590a40: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590a45u); f_00579be8();
    /* 00590a45: mov dword ptr [ebp - 0x5c], 0x41200000 */ W32((u32)(r_ebp+0xffffffa4u), 0x41200000u);
    /* 00590a4c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00590a4e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 00590a55: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00590a5c: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 00590a63: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x590a68u); f_008581c5();
    /* 00590a68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00590a69: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00590a6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00590a6e: je 0x590b6d */ if (fZ) goto L_00590b6d;
L_00590a74:; BB(0x00590a74);
    /* 00590a74: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00590a7b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00590a82: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00590a85: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590a88: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00590a8b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00590a8f: mov dword ptr [esp], 0x41880000 */ W32((u32)(r_esp), 0x41880000u);
    /* 00590a96: mov dword ptr [esp + 4], 0x41b80000 */ W32((u32)(r_esp+0x4u), 0x41b80000u);
    /* 00590a9e: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 00590aa6: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x590aabu); f_005795a0();
    /* 00590aab: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00590aae: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
L_00590ab5:; BB(0x00590ab5);
    /* 00590ab5: mov dword ptr [0xa7447c], eax */ W32((u32)(0xa7447cu), r_eax);
    /* 00590aba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00590ac1: mov ecx, dword ptr [0xa7447c] */ r_ecx = R32((u32)(0xa7447cu));
    /* 00590ac7: lea edx, [ebp - 0x68] */ r_edx = (u32)(r_ebp+0xffffff98u);
    /* 00590aca: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 00590acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590ace: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590acf: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00590ad3: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x590ad8u); f_00579be8();
    /* 00590ad8: mov eax, dword ptr [0x928ae8] */ r_eax = R32((u32)(0x928ae8u));
    /* 00590add: movzx edx, word ptr [0x928aec] */ r_edx = (u32)R16((u32)(0x928aecu));
    /* 00590ae4: movzx ecx, word ptr [0x928aee] */ r_ecx = (u32)R16((u32)(0x928aeeu));
    /* 00590aeb: movzx ebx, word ptr [0x928af0] */ r_ebx = (u32)R16((u32)(0x928af0u));
    /* 00590af2: mov edi, dword ptr [0xa74454] */ r_edi = R32((u32)(0xa74454u));
    /* 00590af8: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 00590afe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00590b01: mov word ptr [ebp - 0x38], dx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edx);
    /* 00590b05: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 00590b0b: mov word ptr [ebp - 0x36], cx */ W16((u32)(r_ebp+0xffffffcau), (u16)r_ecx);
    /* 00590b0f: mov word ptr [ebp - 0x34], bx */ W16((u32)(r_ebp+0xffffffccu), (u16)r_ebx);
    /* 00590b13: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 00590b16: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 00590b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b1c: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b21: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b24: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b27: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b29: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b2eu); f_00608470();
    /* 00590b2e: mov eax, dword ptr [0xa74454] */ r_eax = R32((u32)(0xa74454u));
    /* 00590b33: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00590b36: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00590b37: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00590b3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b3f: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b44: push 0xa7444c */ { u32 v = 0xa7444cu; r_esp -= 4; W32(r_esp, v); }
    /* 00590b49: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00590b4c: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00590b4e: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x590b53u); f_00608470();
    /* 00590b53: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00590b56: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00590b59: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00590b5c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00590b5f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00590b62: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00590b69: mov esp, ebp */ r_esp = r_ebp;
    /* 00590b6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00590b6c: ret  */ FN_RET(0x005905d9); r_esp += 4; return;
L_00590b6d:; BB(0x00590b6d);
    /* 00590b6d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b6f: jmp 0x590ab5 */ goto L_00590ab5;
L_00590b74:; BB(0x00590b74);
    /* 00590b74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b76: jmp 0x590a1d */ goto L_00590a1d;
L_00590b7b:; BB(0x00590b7b);
    /* 00590b7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b7d: jmp 0x590938 */ goto L_00590938;
L_00590b82:; BB(0x00590b82);
    /* 00590b82: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00590b84: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00590b87: jmp 0x59088f */ goto L_0059088f;
L_00590b8c:; BB(0x00590b8c);
    /* 00590b8c: mov dword ptr [0xa74490], 0 */ W32((u32)(0xa74490u), 0x0u);
    /* 00590b96: jmp 0x590807 */ goto L_00590807;
L_00590b9b:; BB(0x00590b9b);
    /* 00590b9b: mov dword ptr [0xa7448c], 0 */ W32((u32)(0xa7448cu), 0x0u);
    /* 00590ba5: jmp 0x5907e6 */ goto L_005907e6;
L_00590baa:; BB(0x00590baa);
    /* 00590baa: mov dword ptr [0xa74488], 0 */ W32((u32)(0xa74488u), 0x0u);
    /* 00590bb4: jmp 0x5907c5 */ goto L_005907c5;
}

void f_00594ce9(void) /* _WinMain@16_73_1 */
{
    FN_ENTER(0x00594ce9);
L_00594ce9:; BB(0x00594ce9);
    /* 00594ce9: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00594cec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594cee: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00594cf1: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00594cf3: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00594cf5: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 00594cf8: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 00594cfb: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 00594cff: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 00594d03: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 00594d07: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 00594d0b: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d11: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d13: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 00594d17: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594d1a: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 00594d1e: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 00594d22: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 00594d26: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 00594d2a: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 00594d2e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d33: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00594d35: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 00594d39: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 00594d3d: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 00594d41: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 00594d45: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 00594d49: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 00594d4d: mov esi, dword ptr [0xa744d4] */ r_esi = R32((u32)(0xa744d4u));
    /* 00594d53: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00594d55: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 00594d59: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 00594d5d: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 00594d61: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 00594d65: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 00594d69: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 00594d6d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594d70: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594d72: jg 0x594d7e */ if ((!fZ&&fS==fO)) goto L_00594d7e;
L_00594d74:; BB(0x00594d74);
    /* 00594d74: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594d79: jmp 0x594ce9 */ goto L_00594ce9;
L_00594d7e:; BB(0x00594d7e);
    /* 00594d7e: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
L_00594d83:; BB(0x00594d83);
    /* 00594d83: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00594d85: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00594d88: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594d8a: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 00594d8d: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00594d8f: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 00594d92: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 00594d95: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 00594d99: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 00594d9d: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 00594da1: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 00594da5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00594da8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00594dab: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594dad: jge 0x594db6 */ if ((fS==fO)) goto L_00594db6;
L_00594daf:; BB(0x00594daf);
    /* 00594daf: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594db4: jmp 0x594d83 */ goto L_00594d83;
L_00594db6:; BB(0x00594db6);
    /* 00594db6: mov eax, dword ptr [0xa744d4] */ r_eax = R32((u32)(0xa744d4u));
    /* 00594dbb: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00594dbe: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 00594dc1: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 00594dc4: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00594dc7: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00594dca: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 00594dcd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594dcf:; BB(0x00594dcf);
    /* 00594dcf: push dword ptr [ebx*4 + 0x928fb8] */ { u32 v = R32((u32)(r_ebx*4+0x928fb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594dd6: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x594ddbu); f_0077a684();
    /* 00594ddb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594ddc: mov dword ptr [ebx*4 + 0xa744f8], eax */ W32((u32)(r_ebx*4+0xa744f8u), r_eax);
    /* 00594de3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594de6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594de9: jl 0x594dcf */ if ((fS!=fO)) goto L_00594dcf;
L_00594deb:; BB(0x00594deb);
    /* 00594deb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594ded:; BB(0x00594ded);
    /* 00594ded: push dword ptr [ebx*4 + 0x928fb0] */ { u32 v = R32((u32)(r_ebx*4+0x928fb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594df4: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x594df9u); f_0077a698();
    /* 00594df9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594dfa: mov dword ptr [ebx*4 + 0xa744f0], eax */ W32((u32)(r_ebx*4+0xa744f0u), r_eax);
    /* 00594e01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e04: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e07: jl 0x594ded */ if ((fS!=fO)) goto L_00594ded;
L_00594e09:; BB(0x00594e09);
    /* 00594e09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e0b:; BB(0x00594e0b);
    /* 00594e0b: push dword ptr [ebx*4 + 0x928fa8] */ { u32 v = R32((u32)(r_ebx*4+0x928fa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e12: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x594e17u); f_0077a6b4();
    /* 00594e17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e18: mov dword ptr [ebx*4 + 0xa744e8], eax */ W32((u32)(r_ebx*4+0xa744e8u), r_eax);
    /* 00594e1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e22: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e25: jl 0x594e0b */ if ((fS!=fO)) goto L_00594e0b;
L_00594e27:; BB(0x00594e27);
    /* 00594e27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00594e29:; BB(0x00594e29);
    /* 00594e29: push dword ptr [ebx*4 + 0x928fa0] */ { u32 v = R32((u32)(r_ebx*4+0x928fa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00594e30: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x594e35u); f_0077a6cc();
    /* 00594e35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00594e36: mov dword ptr [ebx*4 + 0xa744e0], eax */ W32((u32)(r_ebx*4+0xa744e0u), r_eax);
    /* 00594e3d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00594e40: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00594e43: jl 0x594e29 */ if ((fS!=fO)) goto L_00594e29;
L_00594e45:; BB(0x00594e45);
    /* 00594e45: mov edx, dword ptr [0xa744e0] */ r_edx = R32((u32)(0xa744e0u));
    /* 00594e4b: fld dword ptr [0x928fc4] */ FPUSH(R_F32((u32)(0x928fc4u)));
    /* 00594e51: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594e57: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00594e59: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00594e5c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e5e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e60: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 00594e66: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e67: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e69: jae 0x594e6d */ if (!fC) goto L_00594e6d;
L_00594e6b:; BB(0x00594e6b);
    /* 00594e6b: fst st(1) */ ST(1) = ST(0);
L_00594e6d:; BB(0x00594e6d);
    /* 00594e6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e6f: fstp dword ptr [0x9bfa78] */ W_F32((u32)(0x9bfa78u), ST(0)); FPOP();
    /* 00594e75: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00594e78: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00594e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00594e7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00594e7d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00594e7f: jae 0x594e83 */ if (!fC) goto L_00594e83;
L_00594e81:; BB(0x00594e81);
    /* 00594e81: fst st(1) */ ST(1) = ST(0);
L_00594e83:; BB(0x00594e83);
    /* 00594e83: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00594e85: fstp dword ptr [0x9bfa48] */ W_F32((u32)(0x9bfa48u), ST(0)); FPOP();
    /* 00594e8b: mov dword ptr [0xa7451c], 0 */ W32((u32)(0xa7451cu), 0x0u);
    /* 00594e95: mov dword ptr [0xa74510], 0 */ W32((u32)(0xa74510u), 0x0u);
    /* 00594e9f: mov dword ptr [0xa74514], 0 */ W32((u32)(0xa74514u), 0x0u);
    /* 00594ea9: mov dword ptr [0xa74518], 0 */ W32((u32)(0xa74518u), 0x0u);
    /* 00594eb3: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00594eb6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594eb7: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594ebcu); f_0078e934();
    /* 00594ebc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ebf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ec2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ec4: je 0x5950e0 */ if (fZ) goto L_005950e0;
L_00594eca:; BB(0x00594eca);
    /* 00594eca: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ecd: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ed0: mov dword ptr [0xa74504], eax */ W32((u32)(0xa74504u), r_eax);
L_00594ed5:; BB(0x00594ed5);
    /* 00594ed5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ed8: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594eddu); f_0078e934();
    /* 00594edd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594ee0: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594ee3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594ee5: je 0x5950d1 */ if (fZ) goto L_005950d1;
L_00594eeb:; BB(0x00594eeb);
    /* 00594eeb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594eee: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594ef1: mov dword ptr [0xa74508], eax */ W32((u32)(0xa74508u), r_eax);
L_00594ef6:; BB(0x00594ef6);
    /* 00594ef6: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00594ef9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x594efeu); f_0078e934();
    /* 00594efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f01: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f06: je 0x5950c2 */ if (fZ) goto L_005950c2;
L_00594f0c:; BB(0x00594f0c);
    /* 00594f0c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00594f0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00594f12: mov dword ptr [0xa7450c], eax */ W32((u32)(0xa7450cu), r_eax);
L_00594f17:; BB(0x00594f17);
    /* 00594f17: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f1c: mov ecx, dword ptr [0x9bfa54] */ r_ecx = R32((u32)(0x9bfa54u));
    /* 00594f22: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00594f28: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 00594f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00594f2f: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 00594f36: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00594f38: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x594f3du); f_008581c5();
    /* 00594f3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00594f40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f43: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00594f46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00594f48: je 0x5950b8 */ if (fZ) goto L_005950b8;
L_00594f4e:; BB(0x00594f4e);
    /* 00594f4e: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 00594f55: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00594f5c: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00594f61: mov esi, ebx */ r_esi = r_ebx;
    /* 00594f63: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594f66: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00594f6c: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 00594f6f: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00594f72: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00594f75: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00594f78: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00594f7c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00594f7f: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00594f82: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 00594f85: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00594f88: fadd dword ptr [edi*4 + 0x928f58] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x928f58u));
    /* 00594f8f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00594f93: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x594f98u); f_00511bb4();
    /* 00594f98: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_00594f9f:; BB(0x00594f9f);
    /* 00594f9f: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00594fa2: mov dword ptr [0xa74500], eax */ W32((u32)(0xa74500u), r_eax);
    /* 00594fa7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00594fae: mov eax, dword ptr [0x928f4c] */ r_eax = R32((u32)(0x928f4cu));
    /* 00594fb3: movzx edx, word ptr [0x928f50] */ r_edx = (u32)R16((u32)(0x928f50u));
    /* 00594fba: movzx ecx, word ptr [0x928f52] */ r_ecx = (u32)R16((u32)(0x928f52u));
    /* 00594fc1: movzx ebx, word ptr [0x928f54] */ r_ebx = (u32)R16((u32)(0x928f54u));
    /* 00594fc8: mov esi, dword ptr [0x928f3c] */ r_esi = R32((u32)(0x928f3cu));
    /* 00594fce: movzx edi, word ptr [0x928f40] */ r_edi = (u32)R16((u32)(0x928f40u));
    /* 00594fd5: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00594fd8: movzx eax, word ptr [0x928f42] */ r_eax = (u32)R16((u32)(0x928f42u));
    /* 00594fdf: mov word ptr [ebp - 0x44], dx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_edx);
    /* 00594fe3: mov word ptr [ebp - 0x42], cx */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_ecx);
    /* 00594fe7: mov ecx, dword ptr [0xa744dc] */ r_ecx = R32((u32)(0xa744dcu));
    /* 00594fed: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 00594ff3: mov word ptr [ebp - 0x40], bx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_ebx);
    /* 00594ff7: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00594ffa: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00594ffd: mov word ptr [ebp - 0x34], di */ W16((u32)(r_ebp+0xffffffccu), (u16)r_edi);
    /* 00595001: mov word ptr [ebp - 0x32], ax */ W16((u32)(r_ebp+0xffffffceu), (u16)r_eax);
    /* 00595005: movzx eax, word ptr [0x928f44] */ r_eax = (u32)R16((u32)(0x928f44u));
    /* 0059500c: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 00595010: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00595013: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00595019: lea eax, [ebp - 0x4c] */ r_eax = (u32)(r_ebp+0xffffffb4u);
    /* 0059501c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059501d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059501f: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595024: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00595027: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059502a: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0059502c: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595031u); f_00608470();
    /* 00595031: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 00595036: lea edx, [ebp - 0x4c] */ r_edx = (u32)(r_ebp+0xffffffb4u);
    /* 00595039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059503a: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595040: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595042: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00595047: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0059504c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059504f: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00595051: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595056u); f_00608470();
    /* 00595056: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059505b: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 0059505e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0059505f: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595065: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00595067: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059506c: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059506f: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595072: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00595074: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x595079u); f_00608470();
    /* 00595079: mov eax, dword ptr [0xa744dc] */ r_eax = R32((u32)(0xa744dcu));
    /* 0059507e: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 00595081: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00595082: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 00595088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508a: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059508f: push 0xa744d4 */ { u32 v = 0xa744d4u; r_esp -= 4; W32(r_esp, v); }
    /* 00595094: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00595097: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00595099: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59509eu); f_00608470();
    /* 0059509e: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005950a1: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005950a4: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005950a7: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005950aa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005950ad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005950b4: mov esp, ebp */ r_esp = r_ebp;
    /* 005950b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005950b7: ret  */ FN_RET(0x00594ce9); r_esp += 4; return;
L_005950b8:; BB(0x005950b8);
    /* 005950b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005950ba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005950bd: jmp 0x594f9f */ goto L_00594f9f;
L_005950c2:; BB(0x005950c2);
    /* 005950c2: mov dword ptr [0xa7450c], 0 */ W32((u32)(0xa7450cu), 0x0u);
    /* 005950cc: jmp 0x594f17 */ goto L_00594f17;
L_005950d1:; BB(0x005950d1);
    /* 005950d1: mov dword ptr [0xa74508], 0 */ W32((u32)(0xa74508u), 0x0u);
    /* 005950db: jmp 0x594ef6 */ goto L_00594ef6;
L_005950e0:; BB(0x005950e0);
    /* 005950e0: mov dword ptr [0xa74504], 0 */ W32((u32)(0xa74504u), 0x0u);
    /* 005950ea: jmp 0x594ed5 */ goto L_00594ed5;
}

void f_0059d7c0(void) /* _WinMain@16_73_2 */
{
    FN_ENTER(0x0059d7c0);
    /* 0059d7c0: mov dword ptr [0xa746f8], eax */ W32((u32)(0xa746f8u), r_eax);
    /* 0059d7c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0059d7cc: mov eax, dword ptr [0x929894] */ r_eax = R32((u32)(0x929894u));
    /* 0059d7d1: movzx edx, word ptr [0x929898] */ r_edx = (u32)R16((u32)(0x929898u));
    /* 0059d7d8: movzx ecx, word ptr [0x92989a] */ r_ecx = (u32)R16((u32)(0x92989au));
    /* 0059d7df: movzx ebx, word ptr [0x92989c] */ r_ebx = (u32)R16((u32)(0x92989cu));
    /* 0059d7e6: mov edi, dword ptr [0xa7470c] */ r_edi = R32((u32)(0xa7470cu));
    /* 0059d7ec: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0059d7f2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0059d7f5: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0059d7f9: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0059d7ff: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0059d803: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0059d807: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0059d80a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0059d80d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0059d80e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0059d813: push dword ptr [0x9bff6c] */ { u32 v = R32((u32)(0x9bff6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d819: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d81c: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0059d81f: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0059d821: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x59d826u); f_00608470();
    /* 0059d826: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0059d829: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0059d82c: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0059d82f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0059d832: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0059d835: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0059d83c: mov esp, ebp */ r_esp = r_ebp;
    /* 0059d83e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0059d83f: ret  */ FN_RET(0x0059d7c0); r_esp += 4; return;
}

void f_0059d842(void) /* _WinMain@16_73 */
{
    FN_ENTER(0x0059d842);
    /* 0059d842: jmp 0x59d7c0 */ f_0059d7c0(); return;
}

void f_005a1615(void) /* _WinMain@16_74_0 */
{
    FN_ENTER(0x005a1615);
L_005a1615:; BB(0x005a1615);
    /* 005a1615: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005a1618: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a161a: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005a161d: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a161f: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005a1621: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 005a1624: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 005a1627: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 005a162b: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 005a162f: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 005a1633: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 005a1637: mov esi, dword ptr [0xa74738] */ r_esi = R32((u32)(0xa74738u));
    /* 005a163d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a163f: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 005a1643: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1646: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 005a164a: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 005a164e: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 005a1652: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 005a1656: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 005a165a: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a165f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005a1661: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 005a1665: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 005a1669: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 005a166d: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 005a1671: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 005a1675: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 005a1679: mov esi, dword ptr [0xa74738] */ r_esi = R32((u32)(0xa74738u));
    /* 005a167f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a1681: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 005a1685: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 005a1689: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 005a168d: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 005a1691: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 005a1695: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 005a1699: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a169c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a169e: jg 0x5a16aa */ if ((!fZ&&fS==fO)) goto L_005a16aa;
L_005a16a0:; BB(0x005a16a0);
    /* 005a16a0: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a16a5: jmp 0x5a1615 */ goto L_005a1615;
L_005a16aa:; BB(0x005a16aa);
    /* 005a16aa: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
L_005a16af:; BB(0x005a16af);
    /* 005a16af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a16b1: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 005a16b4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a16b6: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 005a16b9: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a16bb: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 005a16be: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 005a16c1: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 005a16c5: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 005a16c9: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 005a16cd: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 005a16d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a16d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a16d7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a16d9: jge 0x5a16e2 */ if ((fS==fO)) goto L_005a16e2;
L_005a16db:; BB(0x005a16db);
    /* 005a16db: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a16e0: jmp 0x5a16af */ goto L_005a16af;
L_005a16e2:; BB(0x005a16e2);
    /* 005a16e2: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a16e7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005a16ea: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005a16ed: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005a16f0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005a16f3: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005a16f6: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 005a16f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a16fb:; BB(0x005a16fb);
    /* 005a16fb: push dword ptr [ebx*4 + 0x929c18] */ { u32 v = R32((u32)(r_ebx*4+0x929c18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1702: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a1707u); f_0077a684();
    /* 005a1707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1708: mov dword ptr [ebx*4 + 0xa7475c], eax */ W32((u32)(r_ebx*4+0xa7475cu), r_eax);
    /* 005a170f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a1712: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1715: jl 0x5a16fb */ if ((fS!=fO)) goto L_005a16fb;
L_005a1717:; BB(0x005a1717);
    /* 005a1717: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1719:; BB(0x005a1719);
    /* 005a1719: push dword ptr [ebx*4 + 0x929c10] */ { u32 v = R32((u32)(r_ebx*4+0x929c10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1720: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a1725u); f_0077a698();
    /* 005a1725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1726: mov dword ptr [ebx*4 + 0xa74754], eax */ W32((u32)(r_ebx*4+0xa74754u), r_eax);
    /* 005a172d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a1730: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1733: jl 0x5a1719 */ if ((fS!=fO)) goto L_005a1719;
L_005a1735:; BB(0x005a1735);
    /* 005a1735: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1737:; BB(0x005a1737);
    /* 005a1737: push dword ptr [ebx*4 + 0x929c08] */ { u32 v = R32((u32)(r_ebx*4+0x929c08u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a173e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a1743u); f_0077a6b4();
    /* 005a1743: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1744: mov dword ptr [ebx*4 + 0xa7474c], eax */ W32((u32)(r_ebx*4+0xa7474cu), r_eax);
    /* 005a174b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a174e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1751: jl 0x5a1737 */ if ((fS!=fO)) goto L_005a1737;
L_005a1753:; BB(0x005a1753);
    /* 005a1753: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1755:; BB(0x005a1755);
    /* 005a1755: push dword ptr [ebx*4 + 0x929c00] */ { u32 v = R32((u32)(r_ebx*4+0x929c00u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a175c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a1761u); f_0077a6cc();
    /* 005a1761: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1762: mov dword ptr [ebx*4 + 0xa74744], eax */ W32((u32)(r_ebx*4+0xa74744u), r_eax);
    /* 005a1769: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a176c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a176f: jl 0x5a1755 */ if ((fS!=fO)) goto L_005a1755;
L_005a1771:; BB(0x005a1771);
    /* 005a1771: mov edx, dword ptr [0xa74744] */ r_edx = R32((u32)(0xa74744u));
    /* 005a1777: fld dword ptr [0x929c34] */ FPUSH(R_F32((u32)(0x929c34u)));
    /* 005a177d: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a1783: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1785: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005a1788: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a178a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a178c: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 005a1792: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a1793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a1795: jae 0x5a1799 */ if (!fC) goto L_005a1799;
L_005a1797:; BB(0x005a1797);
    /* 005a1797: fst st(1) */ ST(1) = ST(0);
L_005a1799:; BB(0x005a1799);
    /* 005a1799: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a179b: fstp dword ptr [0x9c0018] */ W_F32((u32)(0x9c0018u), ST(0)); FPOP();
    /* 005a17a1: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005a17a4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a17a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a17a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a17a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a17ab: jae 0x5a17af */ if (!fC) goto L_005a17af;
L_005a17ad:; BB(0x005a17ad);
    /* 005a17ad: fst st(1) */ ST(1) = ST(0);
L_005a17af:; BB(0x005a17af);
    /* 005a17af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a17b1: fstp dword ptr [0x9bffe8] */ W_F32((u32)(0x9bffe8u), ST(0)); FPOP();
    /* 005a17b7: mov dword ptr [0xa74788], 0 */ W32((u32)(0xa74788u), 0x0u);
    /* 005a17c1: mov dword ptr [0xa7477c], 0 */ W32((u32)(0xa7477cu), 0x0u);
    /* 005a17cb: mov dword ptr [0xa74780], 0 */ W32((u32)(0xa74780u), 0x0u);
    /* 005a17d5: mov dword ptr [0xa74784], 0 */ W32((u32)(0xa74784u), 0x0u);
    /* 005a17df: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005a17e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a17e3: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a17e8u); f_0078e934();
    /* 005a17e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a17eb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a17ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a17f0: je 0x5a1a92 */ if (fZ) goto L_005a1a92;
L_005a17f6:; BB(0x005a17f6);
    /* 005a17f6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a17f9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a17fc: mov dword ptr [0xa74770], eax */ W32((u32)(0xa74770u), r_eax);
L_005a1801:; BB(0x005a1801);
    /* 005a1801: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1803: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1804: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a1809u); f_0078e934();
    /* 005a1809: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a180c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a180f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1811: je 0x5a1a83 */ if (fZ) goto L_005a1a83;
L_005a1817:; BB(0x005a1817);
    /* 005a1817: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a181a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a181d: mov dword ptr [0xa74774], eax */ W32((u32)(0xa74774u), r_eax);
L_005a1822:; BB(0x005a1822);
    /* 005a1822: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1825: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a182au); f_0078e934();
    /* 005a182a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a182d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a1830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1832: je 0x5a1a74 */ if (fZ) goto L_005a1a74;
L_005a1838:; BB(0x005a1838);
    /* 005a1838: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a183b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a183e: mov dword ptr [0xa74778], eax */ W32((u32)(0xa74778u), r_eax);
L_005a1843:; BB(0x005a1843);
    /* 005a1843: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1848: mov ecx, dword ptr [0x9bfff4] */ r_ecx = R32((u32)(0x9bfff4u));
    /* 005a184e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a1854: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005a1858: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a185b: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005a1862: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1864: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a1869u); f_008581c5();
    /* 005a1869: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a186c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a186f: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005a1872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1874: je 0x5a1a6a */ if (fZ) goto L_005a1a6a;
L_005a187a:; BB(0x005a187a);
    /* 005a187a: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 005a1881: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1888: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a188d: mov esi, ebx */ r_esi = r_ebx;
    /* 005a188f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1892: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005a1898: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 005a189b: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 005a189e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a18a1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005a18a4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005a18a8: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a18ab: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005a18ae: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 005a18b1: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005a18b4: fadd dword ptr [edi*4 + 0x929bb8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x929bb8u));
    /* 005a18bb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a18bf: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x5a18c4u); f_00511bb4();
    /* 005a18c4: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005a18cb:; BB(0x005a18cb);
    /* 005a18cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a18ce: mov dword ptr [0xa7476c], eax */ W32((u32)(0xa7476cu), r_eax);
    /* 005a18d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a18da: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a18e0: mov esi, dword ptr [0x9c0004] */ r_esi = R32((u32)(0x9c0004u));
    /* 005a18e6: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005a18ec: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005a18ef: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 005a18f5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a18f8: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005a18ff: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005a1906: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1908: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005a190f: mov dword ptr [ebp - 0x64], 0xc1200000 */ W32((u32)(r_ebp+0xffffff9cu), 0xc1200000u);
    /* 005a1916: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005a191d: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005a1924: mov edi, dword ptr [ebx + esi*8 + 4] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005a1928: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005a192f: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005a1932: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a1937u); f_008581c5();
    /* 005a1937: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a193a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a193d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a1940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1942: je 0x5a1a60 */ if (fZ) goto L_005a1a60;
L_005a1948:; BB(0x005a1948);
    /* 005a1948: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005a194f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a1956: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1958: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a195a: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005a195f: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1964: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1969: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a196eu); f_005795a0();
    /* 005a196e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005a1975:; BB(0x005a1975);
    /* 005a1975: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1978: mov dword ptr [0xa74768], eax */ W32((u32)(0xa74768u), r_eax);
    /* 005a197d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1984: mov ebx, edi */ r_ebx = r_edi;
    /* 005a1986: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a1989: mov ecx, dword ptr [0xa74768] */ r_ecx = R32((u32)(0xa74768u));
    /* 005a198f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005a1992: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005a1995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1997: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1999: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a199a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a199b: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5a19a0u); f_00579be8();
    /* 005a19a0: mov eax, dword ptr [0x929bac] */ r_eax = R32((u32)(0x929bacu));
    /* 005a19a5: movzx edx, word ptr [0x929bb0] */ r_edx = (u32)R16((u32)(0x929bb0u));
    /* 005a19ac: movzx ecx, word ptr [0x929bb2] */ r_ecx = (u32)R16((u32)(0x929bb2u));
    /* 005a19b3: movzx ebx, word ptr [0x929bb4] */ r_ebx = (u32)R16((u32)(0x929bb4u));
    /* 005a19ba: mov esi, dword ptr [0x929b9c] */ r_esi = R32((u32)(0x929b9cu));
    /* 005a19c0: movzx edi, word ptr [0x929ba0] */ r_edi = (u32)R16((u32)(0x929ba0u));
    /* 005a19c7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a19ca: movzx eax, word ptr [0x929ba2] */ r_eax = (u32)R16((u32)(0x929ba2u));
    /* 005a19d1: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
    /* 005a19d5: mov word ptr [ebp - 0x46], cx */ W16((u32)(r_ebp+0xffffffbau), (u16)r_ecx);
    /* 005a19d9: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a19df: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 005a19e5: mov word ptr [ebp - 0x44], bx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ebx);
    /* 005a19e9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005a19ec: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 005a19ef: mov word ptr [ebp - 0x38], di */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edi);
    /* 005a19f3: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 005a19f7: movzx eax, word ptr [0x929ba4] */ r_eax = (u32)R16((u32)(0x929ba4u));
    /* 005a19fe: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005a1a02: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005a1a05: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 005a1a0b: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005a1a0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a11: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a16: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a19: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a1c: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a1e: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x5a1a23u); f_0060895c();
    /* 005a1a23: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1a28: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005a1a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a2c: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005a1a32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a34: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a39: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a3c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a3f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a41: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x5a1a46u); f_0060895c();
    /* 005a1a46: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1a49: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a1a4c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1a4f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1a52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1a55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1a5f: ret  */ FN_RET(0x005a1615); r_esp += 4; return;
L_005a1a60:; BB(0x005a1a60);
    /* 005a1a60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1a62: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1a65: jmp 0x5a1975 */ goto L_005a1975;
L_005a1a6a:; BB(0x005a1a6a);
    /* 005a1a6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1a6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1a6f: jmp 0x5a18cb */ goto L_005a18cb;
L_005a1a74:; BB(0x005a1a74);
    /* 005a1a74: mov dword ptr [0xa74778], 0 */ W32((u32)(0xa74778u), 0x0u);
    /* 005a1a7e: jmp 0x5a1843 */ goto L_005a1843;
L_005a1a83:; BB(0x005a1a83);
    /* 005a1a83: mov dword ptr [0xa74774], 0 */ W32((u32)(0xa74774u), 0x0u);
    /* 005a1a8d: jmp 0x5a1822 */ goto L_005a1822;
L_005a1a92:; BB(0x005a1a92);
    /* 005a1a92: mov dword ptr [0xa74770], 0 */ W32((u32)(0xa74770u), 0x0u);
    /* 005a1a9c: jmp 0x5a1801 */ goto L_005a1801;
}

void f_005b642e(void) /* _WinMain@16_74 */
{
    FN_ENTER(0x005b642e);
    /* 005b642e: jmp 0x5b64ed */ f_005b64ed(); return;
}

void f_005b6447(void) /* _WinMain@16_75 */
{
    FN_ENTER(0x005b6447);
    /* 005b6447: jmp 0x5b64ed */ f_005b64ed(); return;
}

void f_005b6460(void) /* _WinMain@16_76 */
{
    FN_ENTER(0x005b6460);
    /* 005b6460: jmp 0x5b64ed */ f_005b64ed(); return;
}

