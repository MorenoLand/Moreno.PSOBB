#include "protos.h"

void f_0045a010(void) /* sub_45A010 */
{
    FN_ENTER(0x0045a010);
    /* 0045a010: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a011: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a012: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 0045a018: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045a01a: je 0x45a06c */ if (fZ) goto L_0045a06c;
L_0045a01c:; BB(0x0045a01c);
    /* 0045a01c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0045a020: mov edi, dword ptr [ecx + 0x3a8] */ r_edi = R32((u32)(r_ecx+0x3a8u));
    /* 0045a026: sar edi, 0xc */ { u32 c = (12u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0045a029: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045a02c: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a02f: mov esi, edi */ r_esi = r_edi;
    /* 0045a031: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045a034: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a036: mov esi, dword ptr [ecx + 0x3b4] */ r_esi = R32((u32)(r_ecx+0x3b4u));
    /* 0045a03c: mov ecx, dword ptr [ecx + 0x3b8] */ r_ecx = R32((u32)(r_ecx+0x3b8u));
    /* 0045a042: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045a045: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a047: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045a04a: shl esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045a04d: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a04f: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a052: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045a055: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a057: movzx ecx, word ptr [esp + 0x10] */ r_ecx = (u32)R16((u32)(r_esp+0x10u));
    /* 0045a05c: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a05f: shl ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045a062: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a064: mov ecx, edx */ r_ecx = r_edx;
    /* 0045a066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a067: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45a06cu); f_0044cf88();
L_0045a06c:; BB(0x0045a06c);
    /* 0045a06c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a06d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a06e: ret 8 */ FN_RET(0x0045a010); r_esp += 12; return;
}

void f_0045a074(void) /* sub_45A074 */
{
    FN_ENTER(0x0045a074);
    /* 0045a074: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a077: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0045a07b: fld dword ptr [0x900138] */ FPUSH(R_F32((u32)(0x900138u)));
    /* 0045a081: fmul dword ptr [0xa457c4] */ ST(0) = ST(0) * R_F32((u32)(0xa457c4u));
    /* 0045a087: fld dword ptr [0xa457b0] */ FPUSH(R_F32((u32)(0xa457b0u)));
    /* 0045a08d: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0045a08f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a091: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0045a093: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045a096: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045a09a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a09f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045a0a3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045a0a7: fistp dword ptr [ecx + 0x3b4] */ W32((u32)(r_ecx+0x3b4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a0ad: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045a0b0: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0045a0b3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0045a0b5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045a0b7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045a0ba: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045a0be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a0c3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045a0c7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045a0cb: fistp dword ptr [ecx + 0x3b8] */ W32((u32)(r_ecx+0x3b8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a0d1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045a0d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a0d7: ret 4 */ FN_RET(0x0045a074); r_esp += 8; return;
}

void f_0045a0dc(void) /* sub_45A0DC */
{
    FN_ENTER(0x0045a0dc);
    /* 0045a0dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0dd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a0de: mov edx, dword ptr [ecx + 0x394] */ r_edx = R32((u32)(r_ecx+0x394u));
    /* 0045a0e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045a0e6: je 0x45a13a */ if (fZ) goto L_0045a13a;
L_0045a0e8:; BB(0x0045a0e8);
    /* 0045a0e8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0045a0ec: mov esi, dword ptr [ecx + 0x3a8] */ r_esi = R32((u32)(r_ecx+0x3a8u));
    /* 0045a0f2: sar esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0045a0f5: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045a0f8: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a0fb: mov ebx, esi */ r_ebx = r_esi;
    /* 0045a0fd: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045a100: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a102: mov ebx, dword ptr [ecx + 0x3b4] */ r_ebx = R32((u32)(r_ecx+0x3b4u));
    /* 0045a108: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045a10b: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a10d: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045a110: shl ebx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045a113: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a115: mov ebx, dword ptr [ecx + 0x3b8] */ r_ebx = R32((u32)(r_ecx+0x3b8u));
    /* 0045a11b: movzx ecx, word ptr [ecx + 0x3cc] */ r_ecx = (u32)R16((u32)(r_ecx+0x3ccu));
    /* 0045a122: and ebx, 0xf */ {  u32 a = r_ebx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0045a125: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0045a128: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a12a: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045a12d: shl ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0045a130: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a132: mov ecx, edx */ r_ecx = r_edx;
    /* 0045a134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a135: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45a13au); f_0044cf88();
L_0045a13a:; BB(0x0045a13a);
    /* 0045a13a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a13b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a13c: ret 4 */ FN_RET(0x0045a0dc); r_esp += 8; return;
}

void f_0045a140(void) /* sub_45A140 */
{
    FN_ENTER(0x0045a140);
    /* 0045a140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a141: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a142: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a143: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a146: mov esi, ecx */ r_esi = r_ecx;
    /* 0045a148: call 0x44d084 */ r_esp -= 4; W32(r_esp, 0x45a14du); f_0044d084();
    /* 0045a14d: mov ebp, eax */ r_ebp = r_eax;
    /* 0045a14f: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0045a156: cmp edx, dword ptr [esi + 0x3f4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a15c: jg 0x45a181 */ if ((!fZ&&fS==fO)) goto L_0045a181;
L_0045a15e:; BB(0x0045a15e);
    /* 0045a15e: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0045a161: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a167: je 0x45a181 */ if (fZ) goto L_0045a181;
L_0045a169:; BB(0x0045a169);
    /* 0045a169: push 0x9a61d0 */ { u32 v = 0x9a61d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a16e: push 0x9a61c0 */ { u32 v = 0x9a61c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a173: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a175: call 0x453b6c */ r_esp -= 4; W32(r_esp, 0x45a17au); f_00453b6c();
    /* 0045a17a: mov edi, eax */ r_edi = r_eax;
    /* 0045a17c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a17f: jmp 0x45a197 */ goto L_0045a197;
L_0045a181:; BB(0x0045a181);
    /* 0045a181: push 0x9a61b4 */ { u32 v = 0x9a61b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a186: push 0x9a61a8 */ { u32 v = 0x9a61a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a18b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a18d: call 0x453b6c */ r_esp -= 4; W32(r_esp, 0x45a192u); f_00453b6c();
    /* 0045a192: mov edi, eax */ r_edi = r_eax;
    /* 0045a194: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045a197:; BB(0x0045a197);
    /* 0045a197: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a19a: jl 0x45a2f6 */ if ((fS!=fO)) goto L_0045a2f6;
L_0045a1a0:; BB(0x0045a1a0);
    /* 0045a1a0: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a1a3: jle 0x45a1be */ if ((fZ||fS!=fO)) goto L_0045a1be;
L_0045a1a5:; BB(0x0045a1a5);
    /* 0045a1a5: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a1a8: jne 0x45a2f6 */ if (!fZ) goto L_0045a2f6;
L_0045a1ae:; BB(0x0045a1ae);
    /* 0045a1ae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a1af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a1b0: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a1b2: call 0x45a010 */ r_esp -= 4; W32(r_esp, 0x45a1b7u); f_0045a010();
    /* 0045a1b7: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a1ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a1bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a1bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a1bd: ret  */ FN_RET(0x0045a140); r_esp += 4; return;
L_0045a1be:; BB(0x0045a1be);
    /* 0045a1be: movzx edx, byte ptr [0xa457a8] */ r_edx = (u32)R8((u32)(0xa457a8u));
    /* 0045a1c5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045a1c8: jne 0x45a1e0 */ if (!fZ) goto L_0045a1e0;
L_0045a1ca:; BB(0x0045a1ca);
    /* 0045a1ca: mov dword ptr [0xa457ac], 0x440c0000 */ W32((u32)(0xa457acu), 0x440c0000u);
    /* 0045a1d4: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a1da: mov byte ptr [0xa457a8], dl */ W8((u32)(0xa457a8u), (u8)r_edx);
L_0045a1e0:; BB(0x0045a1e0);
    /* 0045a1e0: fld dword ptr [0x900130] */ FPUSH(R_F32((u32)(0x900130u)));
    /* 0045a1e6: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045a1ec: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a1ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045a1f0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045a1f2: jle 0x45a3cd */ if ((fZ||fS!=fO)) goto L_0045a3cd;
L_0045a1f8:; BB(0x0045a1f8);
    /* 0045a1f8: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0045a1fc: fldz  */ FPUSH(0.0);
    /* 0045a1fe: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0045a202: fldz  */ FPUSH(0.0);
    /* 0045a204: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0045a208: fldz  */ FPUSH(0.0);
    /* 0045a20a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0045a20e: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0045a212: mov dword ptr [esp + 0x34], ebx */ W32((u32)(r_esp+0x34u), r_ebx);
    /* 0045a216: mov ebx, eax */ r_ebx = r_eax;
L_0045a218:; BB(0x0045a218);
    /* 0045a218: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0045a21f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a221: je 0x45a2aa */ if (fZ) goto L_0045a2aa;
L_0045a227:; BB(0x0045a227);
    /* 0045a227: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 0045a22b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a22c: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45a231u); f_00453ab8();
    /* 0045a231: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045a232: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a234: jne 0x45a23e */ if (!fZ) goto L_0045a23e;
L_0045a236:; BB(0x0045a236);
    /* 0045a236: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045a23c: jmp 0x45a2aa */ goto L_0045a2aa;
L_0045a23e:; BB(0x0045a23e);
    /* 0045a23e: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0045a241: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045a249: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0045a24c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045a24f: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0045a252: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045a256: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0045a259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a25a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a25b: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45a260u); f_00836208();
    /* 0045a260: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045a263: fcom dword ptr [0xa457ac] */ fx_compare(ST(0), R_F32((u32)(0xa457acu))); 
    /* 0045a269: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a26b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a26c: ja 0x45a2a2 */ if ((!fC&&!fZ)) goto L_0045a2a2;
L_0045a26e:; BB(0x0045a26e);
    /* 0045a26e: fcom dword ptr [esp + 0x44] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x44u))); 
    /* 0045a272: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a274: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a275: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045a27b: jbe 0x45a29e */ if ((fC||fZ)) goto L_0045a29e;
L_0045a27d:; BB(0x0045a27d);
    /* 0045a27d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045a281: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045a285: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a287: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0045a28b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045a28e: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0045a292: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0045a296: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0045a29a: mov ebp, edi */ r_ebp = r_edi;
    /* 0045a29c: jmp 0x45a2aa */ goto L_0045a2aa;
L_0045a29e:; BB(0x0045a29e);
    /* 0045a29e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a2a0: jmp 0x45a2aa */ goto L_0045a2aa;
L_0045a2a2:; BB(0x0045a2a2);
    /* 0045a2a2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a2a4: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
L_0045a2aa:; BB(0x0045a2aa);
    /* 0045a2aa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045a2ad: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a2af: jl 0x45a218 */ if ((fS!=fO)) goto L_0045a218;
L_0045a2b5:; BB(0x0045a2b5);
    /* 0045a2b5: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0045a2b9: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 0045a2bd: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0045a2c1: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0045a2c5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a2c7: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0045a2cb: je 0x45a305 */ if (fZ) goto L_0045a305;
L_0045a2cd:; BB(0x0045a2cd);
    /* 0045a2cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a2cf: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045a2d3: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0045a2d7: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_0045a2db:; BB(0x0045a2db);
    /* 0045a2db: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045a2df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a2e2: call 0x45a074 */ r_esp -= 4; W32(r_esp, 0x45a2e7u); f_0045a074();
    /* 0045a2e7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a2ea: call 0x45a0dc */ r_esp -= 4; W32(r_esp, 0x45a2efu); f_0045a0dc();
    /* 0045a2ef: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a2f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a2f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a2f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a2f5: ret  */ FN_RET(0x0045a140); r_esp += 4; return;
L_0045a2f6:; BB(0x0045a2f6);
    /* 0045a2f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a2f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a2f9: call 0x45a0dc */ r_esp -= 4; W32(r_esp, 0x45a2feu); f_0045a0dc();
    /* 0045a2fe: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a301: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a302: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a303: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a304: ret  */ FN_RET(0x0045a140); r_esp += 4; return;
L_0045a305:; BB(0x0045a305);
    /* 0045a305: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0045a307: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a309: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045a30b:; BB(0x0045a30b);
    /* 0045a30b: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a30d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a312u); f_007751b0();
    /* 0045a312: fld dword ptr [0x90012c] */ FPUSH(R_F32((u32)(0x90012cu)));
    /* 0045a318: fsub dword ptr [0xa457b0] */ ST(0) = ST(0) - R_F32((u32)(0xa457b0u));
    /* 0045a31e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045a320: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0045a324: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a326: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a32bu); f_007751b0();
    /* 0045a32b: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0045a32f: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0045a332: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0045a335: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a337: fchs  */ ST(0) = -ST(0);
    /* 0045a339: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a33b: fchs  */ ST(0) = -ST(0);
    /* 0045a33d: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0045a33f: fmul qword ptr [0x9000c0] */ ST(0) = ST(0) * R_F64((u32)(0x9000c0u));
    /* 0045a345: fdiv qword ptr [0x9000b8] */ ST(0) = ST(0) / R_F64((u32)(0x9000b8u));
    /* 0045a34b: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0045a34f: fmul dword ptr [0x900128] */ ST(0) = ST(0) * R_F32((u32)(0x900128u));
    /* 0045a355: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0045a359: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0045a35e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a363: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0045a367: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0045a36b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a36f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0045a373: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0045a377: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0045a37b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0045a380: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a385: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0045a389: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0045a38d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a391: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0045a395: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0045a399: lea ebp, [edx + ebp - 0x6000] */ r_ebp = (u32)(r_edx+r_ebp+0xffffa000u);
    /* 0045a3a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045a3a2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45a3a7u); f_0082dcbc();
    /* 0045a3a7: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0045a3ab: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045a3af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045a3b1: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0045a3b9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45a3beu); f_0082ddd8();
    /* 0045a3be: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0045a3c2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045a3c4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0045a3c8: jmp 0x45a2db */ goto L_0045a2db;
L_0045a3cd:; BB(0x0045a3cd);
    /* 0045a3cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a3cf: jmp 0x45a30b */ goto L_0045a30b;
}

void f_0045a3d4(void) /* sub_45A3D4 */
{
    FN_ENTER(0x0045a3d4);
    /* 0045a3d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a3d5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a3d8: mov esi, ecx */ r_esi = r_ecx;
    /* 0045a3da: mov eax, dword ptr [esi + 0x3e8] */ r_eax = R32((u32)(r_esi+0x3e8u));
    /* 0045a3e0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a3e3: jge 0x45a491 */ if ((fS==fO)) goto L_0045a491;
L_0045a3e9:; BB(0x0045a3e9);
    /* 0045a3e9: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a3eb: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a3f0u); f_007751b0();
    /* 0045a3f0: fcomp dword ptr [0x900040] */ fx_compare(ST(0), R_F32((u32)(0x900040u))); FPOP();
    /* 0045a3f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a3f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a3f9: jae 0x45a491 */ if (!fC) goto L_0045a491;
L_0045a3ff:; BB(0x0045a3ff);
    /* 0045a3ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a401: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a406u); f_007751b0();
    /* 0045a406: fld dword ptr [0x900124] */ FPUSH(R_F32((u32)(0x900124u)));
    /* 0045a40c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045a40e: mov edx, dword ptr [esi + 0x3a8] */ r_edx = R32((u32)(r_esi+0x3a8u));
    /* 0045a414: mov ecx, dword ptr [esi + 0x394] */ r_ecx = R32((u32)(r_esi+0x394u));
    /* 0045a41a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045a41d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045a421: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a426: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045a42a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045a42e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a432: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045a435: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045a439: lea eax, [edx + eax + 0x2000] */ r_eax = (u32)(r_edx+r_eax+0x2000u);
    /* 0045a440: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a442: je 0x45a48c */ if (fZ) goto L_0045a48c;
L_0045a444:; BB(0x0045a444);
    /* 0045a444: sar edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045a447: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045a44a: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045a44d: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045a450: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a453: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a456: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a459: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a45b: mov eax, dword ptr [esi + 0x3b4] */ r_eax = R32((u32)(r_esi+0x3b4u));
    /* 0045a461: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a464: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a467: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a469: mov eax, dword ptr [esi + 0x3b8] */ r_eax = R32((u32)(r_esi+0x3b8u));
    /* 0045a46f: movzx esi, word ptr [esi + 0x3cc] */ r_esi = (u32)R16((u32)(r_esi+0x3ccu));
    /* 0045a476: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a479: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a47c: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a47e: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045a481: shl esi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045a484: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a487: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45a48cu); f_0044cf88();
L_0045a48c:; BB(0x0045a48c);
    /* 0045a48c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a48f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a490: ret  */ FN_RET(0x0045a3d4); r_esp += 4; return;
L_0045a491:; BB(0x0045a491);
    /* 0045a491: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a493: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a498u); f_007751b0();
    /* 0045a498: fcomp dword ptr [0x90003c] */ fx_compare(ST(0), R_F32((u32)(0x90003cu))); FPOP();
    /* 0045a49e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a4a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a4a1: jae 0x45a4dc */ if (!fC) goto L_0045a4dc;
L_0045a4a3:; BB(0x0045a4a3);
    /* 0045a4a3: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0045a4a9: mov eax, ecx */ r_eax = r_ecx;
    /* 0045a4ab: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 0045a4ae: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a4b0: jge 0x45a4b6 */ if ((fS==fO)) goto L_0045a4b6;
L_0045a4b2:; BB(0x0045a4b2);
    /* 0045a4b2: mov eax, edx */ r_eax = r_edx;
    /* 0045a4b4: mov edx, ecx */ r_edx = r_ecx;
L_0045a4b6:; BB(0x0045a4b6);
    /* 0045a4b6: mov ecx, 9 */ r_ecx = 0x9u;
    /* 0045a4bb: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a4be: jge 0x45a4c2 */ if ((fS==fO)) goto L_0045a4c2;
L_0045a4c0:; BB(0x0045a4c0);
    /* 0045a4c0: mov eax, ecx */ r_eax = r_ecx;
L_0045a4c2:; BB(0x0045a4c2);
    /* 0045a4c2: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 0045a4c7: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a4ca: jle 0x45a4ce */ if ((fZ||fS!=fO)) goto L_0045a4ce;
L_0045a4cc:; BB(0x0045a4cc);
    /* 0045a4cc: mov edx, ecx */ r_edx = r_ecx;
L_0045a4ce:; BB(0x0045a4ce);
    /* 0045a4ce: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a4d0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4d2: call 0x45a4e8 */ r_esp -= 4; W32(r_esp, 0x45a4d7u); f_0045a4e8();
    /* 0045a4d7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a4da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a4db: ret  */ FN_RET(0x0045a3d4); r_esp += 4; return;
L_0045a4dc:; BB(0x0045a4dc);
    /* 0045a4dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0045a4de: call 0x45a140 */ r_esp -= 4; W32(r_esp, 0x45a4e3u); f_0045a140();
    /* 0045a4e3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a4e6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a4e7: ret  */ FN_RET(0x0045a3d4); r_esp += 4; return;
}

void f_0045a4e8(void) /* sub_45A4E8 */
{
    FN_ENTER(0x0045a4e8);
    /* 0045a4e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a4eb: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a4ee: mov edi, ecx */ r_edi = r_ecx;
    /* 0045a4f0: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0045a4f4: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0045a4f8: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a4fb: jl 0x45a5f6 */ if ((fS!=fO)) goto L_0045a5f6;
L_0045a501:; BB(0x0045a501);
    /* 0045a501: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a504: jg 0x45a5f6 */ if ((!fZ&&fS==fO)) goto L_0045a5f6;
L_0045a50a:; BB(0x0045a50a);
    /* 0045a50a: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a50d: jl 0x45a5f6 */ if ((fS!=fO)) goto L_0045a5f6;
L_0045a513:; BB(0x0045a513);
    /* 0045a513: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a516: jg 0x45a5f6 */ if ((!fZ&&fS==fO)) goto L_0045a5f6;
L_0045a51c:; BB(0x0045a51c);
    /* 0045a51c: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a51e: jge 0x45a526 */ if ((fS==fO)) goto L_0045a526;
L_0045a520:; BB(0x0045a520);
    /* 0045a520: mov eax, ebx */ r_eax = r_ebx;
    /* 0045a522: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0045a524: mov ebp, eax */ r_ebp = r_eax;
L_0045a526:; BB(0x0045a526);
    /* 0045a526: mov eax, ebx */ r_eax = r_ebx;
    /* 0045a528: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045a52a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045a52d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045a530: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0045a533: fdivr dword ptr [0x900120] */ ST(0) = R_F32((u32)(0x900120u)) / ST(0);
    /* 0045a539: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a53b: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0045a53f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045a543: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a548u); f_007751b0();
    /* 0045a548: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a54a: jge 0x45a617 */ if ((fS==fO)) goto L_0045a617;
L_0045a550:; BB(0x0045a550);
    /* 0045a550: mov eax, ebx */ r_eax = r_ebx;
    /* 0045a552: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045a554: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a557: jl 0x45a5c8 */ if ((fS!=fO)) goto L_0045a5c8;
L_0045a559:; BB(0x0045a559);
    /* 0045a559: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045a55d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_0045a561:; BB(0x0045a561);
    /* 0045a561: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a563: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a565: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a567: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a568: jb 0x45a607 */ if (fC) goto L_0045a607;
L_0045a56e:; BB(0x0045a56e);
    /* 0045a56e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a570: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a572: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a574: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a576: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a579: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a57a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a57c: ja 0x45a607 */ if ((!fC&&!fZ)) goto L_0045a607;
L_0045a582:; BB(0x0045a582);
    /* 0045a582: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a584: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a586: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a588: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a58a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a58d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a58e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a590: ja 0x45a607 */ if ((!fC&&!fZ)) goto L_0045a607;
L_0045a592:; BB(0x0045a592);
    /* 0045a592: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a594: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a596: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a598: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a59a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a59d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a59e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5a0: ja 0x45a607 */ if ((!fC&&!fZ)) goto L_0045a607;
L_0045a5a2:; BB(0x0045a5a2);
    /* 0045a5a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5a4: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a5a6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a5a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a5aa: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a5ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a5ae: ja 0x45a60f */ if ((!fC&&!fZ)) goto L_0045a60f;
L_0045a5b0:; BB(0x0045a5b0);
    /* 0045a5b0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a5b2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a5b5: lea eax, [ebx - 6] */ r_eax = (u32)(r_ebx+0xfffffffau);
    /* 0045a5b8: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a5ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5bc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a5be: jle 0x45a561 */ if ((fZ||fS!=fO)) goto L_0045a561;
L_0045a5c0:; BB(0x0045a5c0);
    /* 0045a5c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5c2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045a5c6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045a5c8:; BB(0x0045a5c8);
    /* 0045a5c8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045a5cc: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
L_0045a5d0:; BB(0x0045a5d0);
    /* 0045a5d0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a5d2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045a5d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a5d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a5d7: jb 0x45a5ff */ if (fC) goto L_0045a5ff;
L_0045a5d9:; BB(0x0045a5d9);
    /* 0045a5d9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5db: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0045a5dd: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045a5e0: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045a5e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a5e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a5e6: jl 0x45a5d0 */ if ((fS!=fO)) goto L_0045a5d0;
L_0045a5e8:; BB(0x0045a5e8);
    /* 0045a5e8: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0045a5ea: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a5ec: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045a5ee:; BB(0x0045a5ee);
    /* 0045a5ee: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a5ef: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a5f1: call 0x45a0dc */ r_esp -= 4; W32(r_esp, 0x45a5f6u); f_0045a0dc();
L_0045a5f6:; BB(0x0045a5f6);
    /* 0045a5f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a5f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a5fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a5fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a5fc: ret 8 */ FN_RET(0x0045a4e8); r_esp += 12; return;
L_0045a5ff:; BB(0x0045a5ff);
    /* 0045a5ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a601: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a603: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a605: jmp 0x45a5ee */ goto L_0045a5ee;
L_0045a607:; BB(0x0045a607);
    /* 0045a607: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a609: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a60b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a60d: jmp 0x45a5ee */ goto L_0045a5ee;
L_0045a60f:; BB(0x0045a60f);
    /* 0045a60f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a611: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045a613: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a615: jmp 0x45a5ee */ goto L_0045a5ee;
L_0045a617:; BB(0x0045a617);
    /* 0045a617: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a619: jmp 0x45a5ee */ goto L_0045a5ee;
}

void f_0045a61c(void) /* sub_45A61C */
{
    FN_ENTER(0x0045a61c);
    /* 0045a61c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a61d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045a61f: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0045a622: mov dword ptr [ebx + 0x3f0], 0 */ W32((u32)(r_ebx+0x3f0u), 0x0u);
    /* 0045a62c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a62e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a631: push 0x37e */ { u32 v = 0x37eu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a636: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45a63bu); f_00814298();
    /* 0045a63b: mov eax, dword ptr [0xa457fc] */ r_eax = R32((u32)(0xa457fcu));
    /* 0045a640: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 0045a646: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a649: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a64a: ret  */ FN_RET(0x0045a61c); r_esp += 4; return;
}

void f_0045a64c(void) /* sub_45A64C */
{
    FN_ENTER(0x0045a64c);
    /* 0045a64c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a64d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a650: mov edi, ecx */ r_edi = r_ecx;
    /* 0045a652: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 0045a658: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a65a: jne 0x45a70b */ if (!fZ) goto L_0045a70b;
L_0045a660:; BB(0x0045a660);
    /* 0045a660: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a662: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a667u); f_007751b0();
    /* 0045a667: fcomp dword ptr [0x900118] */ fx_compare(ST(0), R_F32((u32)(0x900118u))); FPOP();
    /* 0045a66d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a66f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a670: jae 0x45a67e */ if (!fC) goto L_0045a67e;
L_0045a672:; BB(0x0045a672);
    /* 0045a672: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a674: call 0x45a140 */ r_esp -= 4; W32(r_esp, 0x45a679u); f_0045a140();
    /* 0045a679: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a67c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a67d: ret  */ FN_RET(0x0045a64c); r_esp += 4; return;
L_0045a67e:; BB(0x0045a67e);
    /* 0045a67e: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a680: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x45a685u); f_007751b0();
    /* 0045a685: fld dword ptr [0x900114] */ FPUSH(R_F32((u32)(0x900114u)));
    /* 0045a68b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045a68d: mov edx, dword ptr [edi + 0x3a8] */ r_edx = R32((u32)(r_edi+0x3a8u));
    /* 0045a693: mov ecx, dword ptr [edi + 0x394] */ r_ecx = R32((u32)(r_edi+0x394u));
    /* 0045a699: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045a69c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045a6a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a6a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045a6a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045a6ad: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a6b1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045a6b4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0045a6b8: lea eax, [edx + eax + 0x2000] */ r_eax = (u32)(r_edx+r_eax+0x2000u);
    /* 0045a6bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045a6c1: je 0x45a70b */ if (fZ) goto L_0045a70b;
L_0045a6c3:; BB(0x0045a6c3);
    /* 0045a6c3: sar edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045a6c6: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045a6c9: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045a6cc: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045a6cf: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a6d2: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a6d5: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a6d8: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a6da: mov eax, dword ptr [edi + 0x3b4] */ r_eax = R32((u32)(r_edi+0x3b4u));
    /* 0045a6e0: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a6e3: shl eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a6e6: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a6e8: mov eax, dword ptr [edi + 0x3b8] */ r_eax = R32((u32)(r_edi+0x3b8u));
    /* 0045a6ee: movzx edi, word ptr [edi + 0x3cc] */ r_edi = (u32)R16((u32)(r_edi+0x3ccu));
    /* 0045a6f5: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045a6f8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0045a6fb: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a6fd: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0045a700: shl edi, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0045a703: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045a705: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a706: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45a70bu); f_0044cf88();
L_0045a70b:; BB(0x0045a70b);
    /* 0045a70b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a70e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a70f: ret  */ FN_RET(0x0045a64c); r_esp += 4; return;
}

void f_0045a710(void) /* sub_45A710 */
{
    FN_ENTER(0x0045a710);
    /* 0045a710: mov eax, dword ptr [0xa457f8] */ r_eax = R32((u32)(0xa457f8u));
    /* 0045a715: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a71b: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a725: ret  */ FN_RET(0x0045a710); r_esp += 4; return;
}

void f_0045a728(void) /* sub_45A728 */
{
    FN_ENTER(0x0045a728);
    /* 0045a728: mov eax, dword ptr [0xa457f4] */ r_eax = R32((u32)(0xa457f4u));
    /* 0045a72d: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a733: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a73d: ret  */ FN_RET(0x0045a728); r_esp += 4; return;
}

void f_0045a740(void) /* sub_45A740 */
{
    FN_ENTER(0x0045a740);
    /* 0045a740: mov eax, dword ptr [0xa457f0] */ r_eax = R32((u32)(0xa457f0u));
    /* 0045a745: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a74b: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a755: ret  */ FN_RET(0x0045a740); r_esp += 4; return;
}

void f_0045a758(void) /* sub_45A758 */
{
    FN_ENTER(0x0045a758);
    /* 0045a758: mov eax, dword ptr [0xa457ec] */ r_eax = R32((u32)(0xa457ecu));
    /* 0045a75d: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a763: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a76d: ret  */ FN_RET(0x0045a758); r_esp += 4; return;
}

void f_0045a770(void)
{
    FN_ENTER(0x0045a770);
    /* 0045a770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a771: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045a773: mov dword ptr [ebp + 0x3f0], 0 */ W32((u32)(r_ebp+0x3f0u), 0x0u);
    /* 0045a77d: call 0x454300 */ r_esp -= 4; W32(r_esp, 0x45a782u); f_00454300();
    /* 0045a782: mov eax, dword ptr [0xa457e8] */ r_eax = R32((u32)(0xa457e8u));
    /* 0045a787: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 0045a78d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a78e: ret  */ FN_RET(0x0045a770); r_esp += 4; return;
}

void f_0045a790(void) /* sub_45A790 */
{
    FN_ENTER(0x0045a790);
    /* 0045a790: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a791: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045a792: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a795: mov esi, ecx */ r_esi = r_ecx;
    /* 0045a797: mov eax, dword ptr [esi + 0x3bc] */ r_eax = R32((u32)(r_esi+0x3bcu));
    /* 0045a79d: mov dword ptr [esi + 0x400], eax */ W32((u32)(r_esi+0x400u), r_eax);
    /* 0045a7a3: mov eax, dword ptr [esi + 0x3c0] */ r_eax = R32((u32)(r_esi+0x3c0u));
    /* 0045a7a9: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 0045a7af: mov eax, dword ptr [esi + 0x3c4] */ r_eax = R32((u32)(r_esi+0x3c4u));
    /* 0045a7b5: mov dword ptr [esi + 0x408], eax */ W32((u32)(r_esi+0x408u), r_eax);
    /* 0045a7bb: lea edi, [esi + 0x400] */ r_edi = (u32)(r_esi+0x400u);
    /* 0045a7c1: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0045a7c4: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a7c6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45a7cbu); f_0082f9c4();
    /* 0045a7cb: mov dword ptr [esi + 0x404], 0 */ W32((u32)(r_esi+0x404u), 0x0u);
    /* 0045a7d5: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a7d7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45a7dcu); f_0083173c();
    /* 0045a7dc: fcomp dword ptr [0x9000f8] */ fx_compare(ST(0), R_F32((u32)(0x9000f8u))); FPOP();
    /* 0045a7e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045a7e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045a7e5: ja 0x45a813 */ if ((!fC&&!fZ)) goto L_0045a813;
L_0045a7e7:; BB(0x0045a7e7);
    /* 0045a7e7: fld dword ptr [0x9000f4] */ FPUSH(R_F32((u32)(0x9000f4u)));
    /* 0045a7ed: fld dword ptr [0x9000fc] */ FPUSH(R_F32((u32)(0x9000fcu)));
    /* 0045a7f3: mov dword ptr [esi + 0x400], 0x3f800000 */ W32((u32)(r_esi+0x400u), 0x3f800000u);
    /* 0045a7fd: mov dword ptr [esi + 0x404], 0 */ W32((u32)(r_esi+0x404u), 0x0u);
    /* 0045a807: mov dword ptr [esi + 0x408], 0 */ W32((u32)(r_esi+0x408u), 0x0u);
    /* 0045a811: jmp 0x45a828 */ goto L_0045a828;
L_0045a813:; BB(0x0045a813);
    /* 0045a813: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a815: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45a81au); f_0082df08();
    /* 0045a81a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a81c: fld dword ptr [esi + 0x400] */ FPUSH(R_F32((u32)(r_esi+0x400u)));
    /* 0045a822: fld dword ptr [esi + 0x408] */ FPUSH(R_F32((u32)(r_esi+0x408u)));
L_0045a828:; BB(0x0045a828);
    /* 0045a828: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0045a82a: fmul qword ptr [0x9000b0] */ ST(0) = ST(0) * R_F64((u32)(0x9000b0u));
    /* 0045a830: fdiv qword ptr [0x9000a8] */ ST(0) = ST(0) / R_F64((u32)(0x9000a8u));
    /* 0045a836: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0045a839: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0045a83d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045a842: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045a846: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045a84a: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045a84e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0045a851: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045a857: add eax, -6 */ {  u32 a = r_eax; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0045a85a: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0045a85e: jne 0x45a868 */ if (!fZ) goto L_0045a868;
L_0045a860:; BB(0x0045a860);
    /* 0045a860: add edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045a866: jmp 0x45a86e */ goto L_0045a86e;
L_0045a868:; BB(0x0045a868);
    /* 0045a868: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0045a86e:; BB(0x0045a86e);
    /* 0045a86e: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a870: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x45a875u); f_0082dcbc();
    /* 0045a875: fstp dword ptr [esi + 0x40c] */ W_F32((u32)(r_esi+0x40cu), ST(0)); FPOP();
    /* 0045a87b: mov ecx, edi */ r_ecx = r_edi;
    /* 0045a87d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x45a882u); f_0082ddd8();
    /* 0045a882: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0045a885: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0045a888: fstp dword ptr [esi + 0x414] */ W_F32((u32)(r_esi+0x414u), ST(0)); FPOP();
    /* 0045a88e: mov dword ptr [esi + 0x418], edx */ W32((u32)(r_esi+0x418u), r_edx);
    /* 0045a894: mov dword ptr [esi + 0x420], edi */ W32((u32)(r_esi+0x420u), r_edi);
    /* 0045a89a: mov dword ptr [esi + 0x410], 0 */ W32((u32)(r_esi+0x410u), 0x0u);
    /* 0045a8a4: lea ecx, [esi + 0x418] */ r_ecx = (u32)(r_esi+0x418u);
    /* 0045a8aa: mov dword ptr [esi + 0x41c], 0 */ W32((u32)(r_esi+0x41cu), 0x0u);
    /* 0045a8b4: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45a8b9u); f_0082df08();
    /* 0045a8b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045a8bb: fld dword ptr [0xa4577c] */ FPUSH(R_F32((u32)(0xa4577cu)));
    /* 0045a8c1: mov eax, dword ptr [0xa45778] */ r_eax = R32((u32)(0xa45778u));
    /* 0045a8c6: fld dword ptr [esi + 0x418] */ FPUSH(R_F32((u32)(r_esi+0x418u)));
    /* 0045a8cc: fld dword ptr [esi + 0x420] */ FPUSH(R_F32((u32)(r_esi+0x420u)));
    /* 0045a8d2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a8d4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0045a8d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045a8d8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045a8da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045a8dc: fstp dword ptr [esi + 0x418] */ W_F32((u32)(r_esi+0x418u), ST(0)); FPOP();
    /* 0045a8e2: fstp dword ptr [esi + 0x420] */ W_F32((u32)(r_esi+0x420u), ST(0)); FPOP();
    /* 0045a8e8: mov dword ptr [esi + 0x3a0], eax */ W32((u32)(r_esi+0x3a0u), r_eax);
    /* 0045a8ee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a8f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045a8f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045a8f3: ret  */ FN_RET(0x0045a790); r_esp += 4; return;
}

void f_0045a8f4(void) /* sub_45A8F4 */
{
    FN_ENTER(0x0045a8f4);
    /* 0045a8f4: mov eax, dword ptr [0xa457e4] */ r_eax = R32((u32)(0xa457e4u));
    /* 0045a8f9: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a8ff: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a909: ret  */ FN_RET(0x0045a8f4); r_esp += 4; return;
}

void f_0045a90c(void) /* sub_45A90C */
{
    FN_ENTER(0x0045a90c);
    /* 0045a90c: mov eax, dword ptr [ecx + 0x424] */ r_eax = R32((u32)(r_ecx+0x424u));
    /* 0045a912: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a918: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a922: add dword ptr [ecx + 0x3e8], 1 */ { u32 ad = (u32)(r_ecx+0x3e8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045a929: ret  */ FN_RET(0x0045a90c); r_esp += 4; return;
}

void f_0045a92c(void) /* sub_45A92C */
{
    FN_ENTER(0x0045a92c);
    /* 0045a92c: mov eax, dword ptr [0xa457e0] */ r_eax = R32((u32)(0xa457e0u));
    /* 0045a931: mov dword ptr [ecx + 0x3a0], eax */ W32((u32)(r_ecx+0x3a0u), r_eax);
    /* 0045a937: ret  */ FN_RET(0x0045a92c); r_esp += 4; return;
}

void f_0045a938(void) /* sub_45A938 */
{
    FN_ENTER(0x0045a938);
    /* 0045a938: mov dword ptr [ecx + 0x3f0], 0 */ W32((u32)(r_ecx+0x3f0u), 0x0u);
    /* 0045a942: mov dword ptr [ecx + 0x3a0], 0x3c */ W32((u32)(r_ecx+0x3a0u), 0x3cu);
    /* 0045a94c: ret  */ FN_RET(0x0045a938); r_esp += 4; return;
}

void f_0045a950(void) /* sub_45A950 */
{
    FN_ENTER(0x0045a950);
    /* 0045a950: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a951: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045a953: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045a955: call 0x579780 */ r_esp -= 4; W32(r_esp, 0x45a95au); f_00579780();
    /* 0045a95a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045a95e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045a960: jne 0x45a966 */ if (!fZ) goto L_0045a966;
L_0045a962:; BB(0x0045a962);
    /* 0045a962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a963: ret 4 */ FN_RET(0x0045a950); r_esp += 8; return;
L_0045a966:; BB(0x0045a966);
    /* 0045a966: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a967: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x45a96cu); f_00857e98();
    /* 0045a96c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045a96d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a96e: ret 4 */ FN_RET(0x0045a950); r_esp += 8; return;
}

void f_0045a974(void) /* sub_45A974 */
{
    FN_ENTER(0x0045a974);
    /* 0045a974: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a975: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045a977: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0045a979: call 0x45a998 */ r_esp -= 4; W32(r_esp, 0x45a97eu); f_0045a998();
    /* 0045a97e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0045a982: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045a984: jne 0x45a98a */ if (!fZ) goto L_0045a98a;
L_0045a986:; BB(0x0045a986);
    /* 0045a986: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a987: ret 4 */ FN_RET(0x0045a974); r_esp += 8; return;
L_0045a98a:; BB(0x0045a98a);
    /* 0045a98a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045a98b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45a990u); f_005c2f74();
    /* 0045a990: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045a991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045a992: ret 4 */ FN_RET(0x0045a974); r_esp += 8; return;
}

void f_0045a998(void) /* sub_45A998 */
{
    FN_ENTER(0x0045a998);
    /* 0045a998: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a999: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a99b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a99d: push 0x8cf3f0 */ { u32 v = 0x8cf3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045a9a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045a9b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045a9b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045a9b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0045a9b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0045a9bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0045a9bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0045a9c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045a9c5: mov dword ptr [ecx], 0xaf7bc0 */ W32((u32)(r_ecx), 0xaf7bc0u);
    /* 0045a9cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045a9d2: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x45a9d7u); f_008171e8();
    /* 0045a9d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045a9da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045a9e1: mov esp, ebp */ r_esp = r_ebp;
    /* 0045a9e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045a9e4: ret  */ FN_RET(0x0045a998); r_esp += 4; return;
}

void f_0045a9e8(void) /* sub_45A9E8 */
{
    FN_ENTER(0x0045a9e8);
    /* 0045a9e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9e9: mov ebp, esp */ r_ebp = r_esp;
    /* 0045a9eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9ed: push 0x8cf40c */ { u32 v = 0x8cf40cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045a9f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045a9f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045aa00: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045aa03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045aa06: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0045aa09: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0045aa0c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0045aa0f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045aa12: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0045aa15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045aa1c: mov eax, ecx */ r_eax = r_ecx;
    /* 0045aa1e: mov dword ptr [eax], 0xaf7a60 */ W32((u32)(r_eax), 0xaf7a60u);
    /* 0045aa24: lea ecx, [eax + 0x380] */ r_ecx = (u32)(r_eax+0x380u);
    /* 0045aa2a: call 0x48ead0 */ r_esp -= 4; W32(r_esp, 0x45aa2fu); f_0048ead0();
    /* 0045aa2f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0045aa31:; BB(0x0045aa31);
    /* 0045aa31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aa34: mov eax, dword ptr [eax + esi*4 + 0x40c] */ r_eax = R32((u32)(r_eax+r_esi*4+0x40cu));
    /* 0045aa3b: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045aa3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aa40: je 0x45aa57 */ if (fZ) goto L_0045aa57;
L_0045aa42:; BB(0x0045aa42);
    /* 0045aa42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa43: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45aa48u); f_005cdcc0();
    /* 0045aa48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045aa49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aa4c: mov dword ptr [eax + ebx*2 + 0x40c], 0 */ W32((u32)(r_eax+r_ebx*2+0x40cu), 0x0u);
L_0045aa57:; BB(0x0045aa57);
    /* 0045aa57: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045aa5a: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045aa5d: jl 0x45aa31 */ if ((fS!=fO)) goto L_0045aa31;
L_0045aa5f:; BB(0x0045aa5f);
    /* 0045aa5f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aa62: mov ecx, dword ptr [eax + 0x524] */ r_ecx = R32((u32)(r_eax+0x524u));
    /* 0045aa68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aa6a: je 0x45aa82 */ if (fZ) goto L_0045aa82;
L_0045aa6c:; BB(0x0045aa6c);
    /* 0045aa6c: je 0x45aa75 */ if (fZ) goto L_0045aa75;
L_0045aa6e:; BB(0x0045aa6e);
    /* 0045aa6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aa70: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x45aa75u); f_0045a950();
L_0045aa75:; BB(0x0045aa75);
    /* 0045aa75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aa78: mov dword ptr [eax + 0x524], 0 */ W32((u32)(r_eax+0x524u), 0x0u);
L_0045aa82:; BB(0x0045aa82);
    /* 0045aa82: mov edx, dword ptr [eax + 0x52c] */ r_edx = R32((u32)(r_eax+0x52cu));
    /* 0045aa88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aa8a: je 0x45aaa6 */ if (fZ) goto L_0045aaa6;
L_0045aa8c:; BB(0x0045aa8c);
    /* 0045aa8c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0045aa90: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045aa95: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0045aa99: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aa9c: mov dword ptr [edx + 0x52c], 0 */ W32((u32)(r_edx+0x52cu), 0x0u);
L_0045aaa6:; BB(0x0045aaa6);
    /* 0045aaa6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aaa9: mov ecx, dword ptr [eax + 0x528] */ r_ecx = R32((u32)(r_eax+0x528u));
    /* 0045aaaf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aab1: je 0x45aac9 */ if (fZ) goto L_0045aac9;
L_0045aab3:; BB(0x0045aab3);
    /* 0045aab3: je 0x45aabc */ if (fZ) goto L_0045aabc;
L_0045aab5:; BB(0x0045aab5);
    /* 0045aab5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aab7: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x45aabcu); f_0045a950();
L_0045aabc:; BB(0x0045aabc);
    /* 0045aabc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aabf: mov dword ptr [eax + 0x528], 0 */ W32((u32)(r_eax+0x528u), 0x0u);
L_0045aac9:; BB(0x0045aac9);
    /* 0045aac9: mov edx, dword ptr [eax + 0x530] */ r_edx = R32((u32)(r_eax+0x530u));
    /* 0045aacf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aad1: je 0x45aaed */ if (fZ) goto L_0045aaed;
L_0045aad3:; BB(0x0045aad3);
    /* 0045aad3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0045aad7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045aadc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0045aae0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aae3: mov dword ptr [edx + 0x530], 0 */ W32((u32)(r_edx+0x530u), 0x0u);
L_0045aaed:; BB(0x0045aaed);
    /* 0045aaed: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0045aaef:; BB(0x0045aaef);
    /* 0045aaef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aaf2: mov ecx, dword ptr [eax + esi*4 + 0x440] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x440u));
    /* 0045aaf9: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0045aafc: call 0x5883f0 */ r_esp -= 4; W32(r_esp, 0x45ab01u); f_005883f0();
    /* 0045ab01: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ab04: mov dword ptr [eax + ebx*2 + 0x440], 0 */ W32((u32)(r_eax+r_ebx*2+0x440u), 0x0u);
    /* 0045ab0f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045ab12: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ab15: jl 0x45aaef */ if ((fS!=fO)) goto L_0045aaef;
L_0045ab17:; BB(0x0045ab17);
    /* 0045ab17: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ab19: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x45ab1eu); f_007b9c8c();
    /* 0045ab1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ab21: mov dword ptr [eax + 0x39c], 0 */ W32((u32)(r_eax+0x39cu), 0x0u);
    /* 0045ab2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045ab32: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ab34: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x45ab39u); f_0078638c();
    /* 0045ab39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0045ab3c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045ab3e: jne 0x45ab59 */ if (!fZ) goto L_0045ab59;
L_0045ab40:; BB(0x0045ab40);
    /* 0045ab40: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045ab43: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0045ab46: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045ab49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045ab4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045ab53: mov esp, ebp */ r_esp = r_ebp;
    /* 0045ab55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ab56: ret 4 */ FN_RET(0x0045a9e8); r_esp += 8; return;
L_0045ab59:; BB(0x0045ab59);
    /* 0045ab59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ab5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab5d: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x45ab62u); f_005c2f74();
    /* 0045ab62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ab63: jmp 0x45ab40 */ goto L_0045ab40;
}

void f_0045ab68(void) /* sub_45AB68 */
{
    FN_ENTER(0x0045ab68);
    /* 0045ab68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab6a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045ab6b: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ab6e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045ab70: movzx edi, word ptr [ebx + 0x20] */ r_edi = (u32)R16((u32)(r_ebx+0x20u));
    /* 0045ab74: lea esi, [edi + 0x71c] */ r_esi = (u32)(r_edi+0x71cu);
    /* 0045ab7a: call 0x520db8 */ r_esp -= 4; W32(r_esp, 0x45ab7fu); f_00520db8();
    /* 0045ab7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ab81: jne 0x45ac9b */ if (!fZ) goto L_0045ac9b;
L_0045ab87:; BB(0x0045ab87);
    /* 0045ab87: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0045ab8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045ab8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045ab91: jle 0x45ac6c */ if ((fZ||fS!=fO)) goto L_0045ac6c;
L_0045ab97:; BB(0x0045ab97);
    /* 0045ab97: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 0045ab9b: mov ebx, eax */ r_ebx = r_eax;
    /* 0045ab9d: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
L_0045aba1:; BB(0x0045aba1);
    /* 0045aba1: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 0045aba8: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0045abac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045abad: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45abb2u); f_00453ab8();
    /* 0045abb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045abb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045abb5: je 0x45ac55 */ if (fZ) goto L_0045ac55;
L_0045abbb:; BB(0x0045abbb);
    /* 0045abbb: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 0045abbe: fsub dword ptr [0xa45860] */ ST(0) = ST(0) - R_F32((u32)(0xa45860u));
    /* 0045abc4: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0045abc7: fsub dword ptr [0xa45864] */ ST(0) = ST(0) - R_F32((u32)(0xa45864u));
    /* 0045abcd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045abcf: fchs  */ ST(0) = -ST(0);
    /* 0045abd1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045abd3: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0045abd5: fmul qword ptr [0x900368] */ ST(0) = ST(0) * R_F64((u32)(0x900368u));
    /* 0045abdb: fdiv qword ptr [0x900360] */ ST(0) = ST(0) / R_F64((u32)(0x900360u));
    /* 0045abe1: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0045abe5: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0045abea: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045abef: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0045abf3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0045abf7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045abfb: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0045abff: movzx edx, word ptr [esp + 0x18] */ r_edx = (u32)R16((u32)(r_esp+0x18u));
    /* 0045ac04: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac06: jl 0x45ac55 */ if ((fS!=fO)) goto L_0045ac55;
L_0045ac08:; BB(0x0045ac08);
    /* 0045ac08: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac0a: jge 0x45ac55 */ if ((fS==fO)) goto L_0045ac55;
L_0045ac0c:; BB(0x0045ac0c);
    /* 0045ac0c: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0045ac10: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0045ac13: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0045ac1a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0045ac1e: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac20: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x45ac25u); f_0077a684();
    /* 0045ac25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ac26: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0045ac29: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0045ac2d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0045ac31: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0045ac34: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045ac38: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0045ac3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ac3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac41: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac43: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045ac47: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045ac4b: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0045ac4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ac50: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x45ac53u); call_ind(t); }
    /* 0045ac53: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045ac55:; BB(0x0045ac55);
    /* 0045ac55: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045ac58: cmp ebx, dword ptr [0xaae168] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaae168u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac5e: jl 0x45aba1 */ if ((fS!=fO)) goto L_0045aba1;
L_0045ac64:; BB(0x0045ac64);
    /* 0045ac64: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0045ac68: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_0045ac6c:; BB(0x0045ac6c);
    /* 0045ac6c: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0045ac6f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045ac72: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 0045ac75: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ac78: jl 0x45ac8e */ if ((fS!=fO)) goto L_0045ac8e;
L_0045ac7a:; BB(0x0045ac7a);
    /* 0045ac7a: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0045ac7e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ac83: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 0045ac87: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ac8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ac8b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ac8c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ac8d: ret  */ FN_RET(0x0045ab68); r_esp += 4; return;
L_0045ac8e:; BB(0x0045ac8e);
    /* 0045ac8e: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 0045ac91: add dword ptr [ebx + 0x20], eax */ { u32 ad = (u32)(r_ebx+0x20u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0045ac94: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ac97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ac98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045ac99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045ac9a: ret  */ FN_RET(0x0045ab68); r_esp += 4; return;
L_0045ac9b:; BB(0x0045ac9b);
    /* 0045ac9b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ac9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045ac9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045aca0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045aca1: ret  */ FN_RET(0x0045ab68); r_esp += 4; return;
}

void f_0045aca4(void) /* sub_45ACA4 */
{
    FN_ENTER(0x0045aca4);
    /* 0045aca4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0045aca7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045aca9: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0045acae: mov dword ptr [ecx + 0x3f0], 0x3f800000 */ W32((u32)(r_ecx+0x3f0u), 0x3f800000u);
    /* 0045acb8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045acba: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0045acbd: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0045acc0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045acc1: push 0x391 */ { u32 v = 0x391u; r_esp -= 4; W32(r_esp, v); }
    /* 0045acc6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45accbu); f_00814298();
    /* 0045accb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045acce: ret  */ FN_RET(0x0045aca4); r_esp += 4; return;
}

void f_0045acd0(void) /* sub_45ACD0 */
{
    FN_ENTER(0x0045acd0);
    /* 0045acd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045acd1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045acd4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0045acd6: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045acdc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045acdf: je 0x45ad64 */ if (fZ) goto L_0045ad64;
L_0045ace5:; BB(0x0045ace5);
    /* 0045ace5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ace8: je 0x45ad64 */ if (fZ) goto L_0045ad64;
L_0045acea:; BB(0x0045acea);
    /* 0045acea: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045acef: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045acf2: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0045acf6: mov word ptr [ebp + 0x3c0], ax */ W16((u32)(r_ebp+0x3c0u), (u16)r_eax);
    /* 0045acfd: mov word ptr [ebp + 0x3c2], ax */ W16((u32)(r_ebp+0x3c2u), (u16)r_eax);
    /* 0045ad04: lea edx, [ebp + 0x42c] */ r_edx = (u32)(r_ebp+0x42cu);
    /* 0045ad0a: lea eax, [ebp + 0x440] */ r_eax = (u32)(r_ebp+0x440u);
    /* 0045ad10: mov esi, eax */ r_esi = r_eax;
    /* 0045ad12: mov edi, edx */ r_edi = r_edx;
L_0045ad14:; BB(0x0045ad14);
    /* 0045ad14: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045ad16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad18: je 0x45ad27 */ if (fZ) goto L_0045ad27;
L_0045ad1a:; BB(0x0045ad1a);
    /* 0045ad1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad1b: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x45ad20u); f_005cdcc0();
    /* 0045ad20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045ad21: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_0045ad27:; BB(0x0045ad27);
    /* 0045ad27: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045ad2a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045ad2c: ja 0x45ad14 */ if ((!fC&&!fZ)) goto L_0045ad14;
L_0045ad2e:; BB(0x0045ad2e);
    /* 0045ad2e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0045ad31: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0045ad35: push dword ptr [0x9a6560] */ { u32 v = R32((u32)(0x9a6560u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045ad3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ad3d: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 0045ad47: call 0x45d43c */ r_esp -= 4; W32(r_esp, 0x45ad4cu); f_0045d43c();
    /* 0045ad4c: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 0045ad52: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045ad55: mov eax, dword ptr [edx*4 + 0x9a6528] */ r_eax = R32((u32)(r_edx*4+0x9a6528u));
    /* 0045ad5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ad5e: je 0x45ad64 */ if (fZ) goto L_0045ad64;
L_0045ad60:; BB(0x0045ad60);
    /* 0045ad60: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0045ad62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ad64u); call_ind(t); }
L_0045ad64:; BB(0x0045ad64);
    /* 0045ad64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045ad67: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045ad68: ret  */ FN_RET(0x0045acd0); r_esp += 4; return;
}

void f_0045ad6c(void) /* sub_45AD6C */
{
    FN_ENTER(0x0045ad6c);
    /* 0045ad6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad6d: mov ebp, esp */ r_ebp = r_esp;
    /* 0045ad6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad71: push 0x8cf434 */ { u32 v = 0x8cf434u; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0045ad7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ad7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0045ad84: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045ad8a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0045ad8d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0045ad90: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0045ad93: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0045ad96: movzx eax, word ptr [ecx + 0x3c2] */ r_eax = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045ad9d: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0045ada0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ada5: je 0x45adc1 */ if (fZ) goto L_0045adc1;
L_0045ada7:; BB(0x0045ada7);
    /* 0045ada7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ada8: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45adadu); f_00453ab8();
    /* 0045adad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045adae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045adb0: jne 0x45adc1 */ if (!fZ) goto L_0045adc1;
L_0045adb2:; BB(0x0045adb2);
    /* 0045adb2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adb5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045adba: mov word ptr [edx + 0x3c2], ax */ W16((u32)(r_edx+0x3c2u), (u16)r_eax);
L_0045adc1:; BB(0x0045adc1);
    /* 0045adc1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adc4: movzx eax, word ptr [eax + 0x3c0] */ r_eax = (u32)R16((u32)(r_eax+0x3c0u));
    /* 0045adcb: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045add0: je 0x45adec */ if (fZ) goto L_0045adec;
L_0045add2:; BB(0x0045add2);
    /* 0045add2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045add3: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45add8u); f_00453ab8();
    /* 0045add8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045add9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045addb: jne 0x45adec */ if (!fZ) goto L_0045adec;
L_0045addd:; BB(0x0045addd);
    /* 0045addd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ade0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045ade5: mov word ptr [edx + 0x3c0], ax */ W16((u32)(r_edx+0x3c0u), (u16)r_eax);
L_0045adec:; BB(0x0045adec);
    /* 0045adec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adef: mov edx, dword ptr [eax + 0x394] */ r_edx = R32((u32)(r_eax+0x394u));
    /* 0045adf5: mov ecx, dword ptr [edx + 0x380] */ r_ecx = R32((u32)(r_edx+0x380u));
    /* 0045adfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045adfd: jne 0x45ae2d */ if (!fZ) goto L_0045ae2d;
L_0045adff:; BB(0x0045adff);
    /* 0045adff: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae05: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae0c: mov eax, dword ptr [edx + 0x9a652c] */ r_eax = R32((u32)(r_edx+0x9a652cu));
    /* 0045ae12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae14: je 0x45ae3a */ if (fZ) goto L_0045ae3a;
L_0045ae16:; BB(0x0045ae16);
    /* 0045ae16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae1bu); call_ind(t); }
    /* 0045ae1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae1e: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae24: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae2b: jmp 0x45ae3a */ goto L_0045ae3a;
L_0045ae2d:; BB(0x0045ae2d);
    /* 0045ae2d: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae33: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae38: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0045ae3a:; BB(0x0045ae3a);
    /* 0045ae3a: mov eax, dword ptr [edx + 0x9a6530] */ r_eax = R32((u32)(r_edx+0x9a6530u));
    /* 0045ae40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae42: je 0x45ae49 */ if (fZ) goto L_0045ae49;
L_0045ae44:; BB(0x0045ae44);
    /* 0045ae44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae49u); call_ind(t); }
L_0045ae49:; BB(0x0045ae49);
    /* 0045ae49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae4c: call 0x45b4b4 */ r_esp -= 4; W32(r_esp, 0x45ae51u); f_0045b4b4();
    /* 0045ae51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae54: call 0x45b628 */ r_esp -= 4; W32(r_esp, 0x45ae59u); f_0045b628();
    /* 0045ae59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae5c: mov edx, dword ptr [eax + 0x3a8] */ r_edx = R32((u32)(r_eax+0x3a8u));
    /* 0045ae62: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae65: je 0x45ae8d */ if (fZ) goto L_0045ae8d;
L_0045ae67:; BB(0x0045ae67);
    /* 0045ae67: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ae69: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 0045ae6f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045ae72: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ae75: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0045ae78: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x45ae7du); f_007b6880();
    /* 0045ae7d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae83: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x45ae88u); f_006946a8();
    /* 0045ae88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ae8b: jmp 0x45ae9c */ goto L_0045ae9c;
L_0045ae8d:; BB(0x0045ae8d);
    /* 0045ae8d: mov ecx, dword ptr [eax + 0x39c] */ r_ecx = R32((u32)(r_eax+0x39cu));
    /* 0045ae93: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0045ae96: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae99: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
L_0045ae9c:; BB(0x0045ae9c);
    /* 0045ae9c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae9f: call 0x45b64c */ r_esp -= 4; W32(r_esp, 0x45aea4u); f_0045b64c();
    /* 0045aea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aea7: call 0x45b9b8 */ r_esp -= 4; W32(r_esp, 0x45aeacu); f_0045b9b8();
    /* 0045aeac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aeaf: fild dword ptr [ecx + 0x3d8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3d8u)));
    /* 0045aeb5: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0045aebb: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 0045aec1: sub eax, dword ptr [ecx + 0x3d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3d8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045aec7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045aeca: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0045aecd: fmul dword ptr [ecx + 0x3b8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3b8u));
    /* 0045aed3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045aed5: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0045aed8: movzx ecx, word ptr [ecx + 0x3c2] */ r_ecx = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045aedf: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aee5: je 0x45b49c */ if (fZ) goto L_0045b49c;
L_0045aeeb:; BB(0x0045aeeb);
    /* 0045aeeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aeee: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045aef4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aef7: je 0x45b48d */ if (fZ) goto L_0045b48d;
L_0045aefd:; BB(0x0045aefd);
    /* 0045aefd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af00: je 0x45b47e */ if (fZ) goto L_0045b47e;
L_0045af06:; BB(0x0045af06);
    /* 0045af06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af09: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045af10: cmp ebx, dword ptr [edx + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af16: jl 0x45b21d */ if ((fS!=fO)) goto L_0045b21d;
L_0045af1c:; BB(0x0045af1c);
    /* 0045af1c: mov dword ptr [edx + 0x3ec], ebx */ W32((u32)(r_edx+0x3ecu), r_ebx);
L_0045af22:; BB(0x0045af22);
    /* 0045af22: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af25: je 0x45af9f */ if (fZ) goto L_0045af9f;
L_0045af27:; BB(0x0045af27);
    /* 0045af27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af2a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0045af31: lea edx, [eax + 0x494] */ r_edx = (u32)(r_eax+0x494u);
    /* 0045af37: lea ecx, [eax + 0x4a0] */ r_ecx = (u32)(r_eax+0x4a0u);
    /* 0045af3d: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0045af40: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0045af43: lea ebx, [eax + 0x4dc] */ r_ebx = (u32)(r_eax+0x4dcu);
    /* 0045af49: lea esi, [eax + 0x4e8] */ r_esi = (u32)(r_eax+0x4e8u);
    /* 0045af4f: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0045af52: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0045af55: lea esi, [ebp - 0x78] */ r_esi = (u32)(r_ebp+0xffffff88u);
    /* 0045af58: lea edi, [eax + 0x44c] */ r_edi = (u32)(r_eax+0x44cu);
    /* 0045af5e: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0045af61: lea edx, [eax + 0x458] */ r_edx = (u32)(r_eax+0x458u);
    /* 0045af67: lea eax, [eax + 0x464] */ r_eax = (u32)(r_eax+0x464u);
    /* 0045af6d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045af6f: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0045af72: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_0045af75:; BB(0x0045af75);
    /* 0045af75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af78: mov ecx, dword ptr [eax + ebx*4 + 0x40c] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x40cu));
    /* 0045af7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af81: je 0x45af8f */ if (fZ) goto L_0045af8f;
L_0045af83:; BB(0x0045af83);
    /* 0045af83: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0045af85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af87: je 0x45af8f */ if (fZ) goto L_0045af8f;
L_0045af89:; BB(0x0045af89);
    /* 0045af89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045af8a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45af8fu); f_00508db8();
L_0045af8f:; BB(0x0045af8f);
    /* 0045af8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045af92: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045af95: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af98: jl 0x45af75 */ if ((fS!=fO)) goto L_0045af75;
L_0045af9a:; BB(0x0045af9a);
    /* 0045af9a: jmp 0x45b403 */ goto L_0045b403;
L_0045af9f:; BB(0x0045af9f);
    /* 0045af9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045afa2: movzx ecx, word ptr [eax + 0x3c2] */ r_ecx = (u32)R16((u32)(r_eax+0x3c2u));
    /* 0045afa9: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afaf: je 0x45b3ce */ if (fZ) goto L_0045b3ce;
L_0045afb5:; BB(0x0045afb5);
    /* 0045afb5: fld dword ptr [0x9002b8] */ FPUSH(R_F32((u32)(0x9002b8u)));
    /* 0045afbb: mov edx, eax */ r_edx = r_eax;
    /* 0045afbd: fadd dword ptr [edx + 0x3d0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3d0u));
    /* 0045afc3: fcom dword ptr [0x90049c] */ fx_compare(ST(0), R_F32((u32)(0x90049cu))); 
    /* 0045afc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045afcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045afcc: jbe 0x45afdd */ if ((fC||fZ)) goto L_0045afdd;
L_0045afce:; BB(0x0045afce);
    /* 0045afce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045afd0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045afd5: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 0045afdb: jmp 0x45afe5 */ goto L_0045afe5;
L_0045afdd:; BB(0x0045afdd);
    /* 0045afdd: mov eax, edx */ r_eax = r_edx;
    /* 0045afdf: fstp dword ptr [eax + 0x3d0] */ W_F32((u32)(r_eax+0x3d0u), ST(0)); FPOP();
L_0045afe5:; BB(0x0045afe5);
    /* 0045afe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045afe6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45afebu); f_0068d5a8();
    /* 0045afeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045afec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afee: jne 0x45affd */ if (!fZ) goto L_0045affd;
L_0045aff0:; BB(0x0045aff0);
    /* 0045aff0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aff3: mov dword ptr [eax + 0x3d0], 0 */ W32((u32)(r_eax+0x3d0u), 0x0u);
L_0045affd:; BB(0x0045affd);
    /* 0045affd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b000: call 0x45bbb0 */ r_esp -= 4; W32(r_esp, 0x45b005u); f_0045bbb0();
    /* 0045b005: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b008: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045b00f: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 0045b015: call 0x45bc44 */ r_esp -= 4; W32(r_esp, 0x45b01au); f_0045bc44();
    /* 0045b01a: fld dword ptr [0x9002b4] */ FPUSH(R_F32((u32)(0x9002b4u)));
    /* 0045b020: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b023: fadd dword ptr [edx + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3e4u));
    /* 0045b029: fcom dword ptr [0x90049c] */ fx_compare(ST(0), R_F32((u32)(0x90049cu))); 
    /* 0045b02f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b031: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b032: jb 0x45b044 */ if (fC) goto L_0045b044;
L_0045b034:; BB(0x0045b034);
    /* 0045b034: fadd dword ptr [0x900494] */ ST(0) = ST(0) + R_F32((u32)(0x900494u));
    /* 0045b03a: mov eax, edx */ r_eax = r_edx;
    /* 0045b03c: fstp dword ptr [eax + 0x3e4] */ W_F32((u32)(r_eax+0x3e4u), ST(0)); FPOP();
    /* 0045b042: jmp 0x45b04c */ goto L_0045b04c;
L_0045b044:; BB(0x0045b044);
    /* 0045b044: mov eax, edx */ r_eax = r_edx;
    /* 0045b046: fstp dword ptr [eax + 0x3e4] */ W_F32((u32)(r_eax+0x3e4u), ST(0)); FPOP();
L_0045b04c:; BB(0x0045b04c);
    /* 0045b04c: movzx eax, byte ptr [0xa4580c] */ r_eax = (u32)R8((u32)(0xa4580cu));
    /* 0045b053: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b055: jne 0x45b06b */ if (!fZ) goto L_0045b06b;
L_0045b057:; BB(0x0045b057);
    /* 0045b057: mov dword ptr [0xa45810], 0x41e80000 */ W32((u32)(0xa45810u), 0x41e80000u);
    /* 0045b061: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045b066: mov byte ptr [0xa4580c], al */ W8((u32)(0xa4580cu), (u8)r_eax);
L_0045b06b:; BB(0x0045b06b);
    /* 0045b06b: fld dword ptr [0xa45810] */ FPUSH(R_F32((u32)(0xa45810u)));
    /* 0045b071: fld dword ptr [edx + 0x3fc] */ FPUSH(R_F32((u32)(r_edx+0x3fcu)));
    /* 0045b077: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045b079: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b07b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b07c: ja 0x45b080 */ if ((!fC&&!fZ)) goto L_0045b080;
L_0045b07e:; BB(0x0045b07e);
    /* 0045b07e: fst st(1) */ ST(1) = ST(0);
L_0045b080:; BB(0x0045b080);
    /* 0045b080: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b082: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0045b085: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0045b08c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b08e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x45b093u); f_008581c5();
    /* 0045b093: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b096: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b099: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0045b09c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b09e: je 0x45b3c4 */ if (fZ) goto L_0045b3c4;
L_0045b0a4:; BB(0x0045b0a4);
    /* 0045b0a4: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0045b0ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045b0b2: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0045b0b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b0b7: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b0ba: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0045b0bd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045b0c1: mov dword ptr [esp + 8], 0x3f19999a */ W32((u32)(r_esp+0x8u), 0x3f19999au);
    /* 0045b0c9: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 0045b0d1: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x45b0d6u); f_005795a0();
    /* 0045b0d6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0045b0dd:; BB(0x0045b0dd);
    /* 0045b0dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045b0e4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45b0e9u); f_0082fa9c();
    /* 0045b0e9: push dword ptr [0x9a6754] */ { u32 v = R32((u32)(0x9a6754u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b0ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b0f2: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 0045b0f8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45b0fdu); f_005b8610();
    /* 0045b0fd: mov ebx, eax */ r_ebx = r_eax;
    /* 0045b0ff: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b102: mov edx, dword ptr [edi + 0x3f8] */ r_edx = R32((u32)(r_edi+0x3f8u));
    /* 0045b108: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 0045b10e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 0045b111: push dword ptr [esi*4 + 0x9a6448] */ { u32 v = R32((u32)(r_esi*4+0x9a6448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b118: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45b11du); f_005b8638();
    /* 0045b11d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b122: push 0x9a6420 */ { u32 v = 0x9a6420u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b129: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x45b12eu); f_00579794();
    /* 0045b12e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45b133u); f_0082faac();
    /* 0045b133: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0045b136: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b13a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045b13d: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x45b142u); f_00579de0();
    /* 0045b142: mov esi, eax */ r_esi = r_eax;
    /* 0045b144: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45b149u); f_0082d7b0();
    /* 0045b149: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b14b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x45b150u); f_00830cd8();
    /* 0045b150: mov edx, edi */ r_edx = r_edi;
    /* 0045b152: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0045b155: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45b15au); f_0082d838();
    /* 0045b15a: mov ebx, edi */ r_ebx = r_edi;
    /* 0045b15c: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0045b15f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b161: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45b166u); f_0082d8bc();
    /* 0045b166: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 0045b169: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b16a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b16c: mov edx, esi */ r_edx = r_esi;
    /* 0045b16e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45b173u); f_00830aa0();
    /* 0045b173: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 0045b176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b177: lea edx, [esi + 0xc] */ r_edx = (u32)(r_esi+0xcu);
    /* 0045b17a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b17c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45b181u); f_00830aa0();
    /* 0045b181: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45b186u); f_0082da80();
    /* 0045b186: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b188: je 0x45b1b1 */ if (fZ) goto L_0045b1b1;
L_0045b18a:; BB(0x0045b18a);
    /* 0045b18a: mov eax, edi */ r_eax = r_edi;
    /* 0045b18c: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0045b192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b194: je 0x45b19f */ if (fZ) goto L_0045b19f;
L_0045b196:; BB(0x0045b196);
    /* 0045b196: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0045b199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b19a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b19fu); f_00508db8();
L_0045b19f:; BB(0x0045b19f);
    /* 0045b19f: mov eax, edi */ r_eax = r_edi;
    /* 0045b1a1: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 0045b1a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b1a9: je 0x45b1b1 */ if (fZ) goto L_0045b1b1;
L_0045b1ab:; BB(0x0045b1ab);
    /* 0045b1ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1ac: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b1b1u); f_00508db8();
L_0045b1b1:; BB(0x0045b1b1);
    /* 0045b1b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b1b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0045b1b6: je 0x45b1c1 */ if (fZ) goto L_0045b1c1;
L_0045b1b8:; BB(0x0045b1b8);
    /* 0045b1b8: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b1ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1bc: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x45b1c1u); f_0045a950();
L_0045b1c1:; BB(0x0045b1c1);
    /* 0045b1c1: fld dword ptr [0x9002b0] */ FPUSH(R_F32((u32)(0x9002b0u)));
    /* 0045b1c7: fadd dword ptr [edi + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f0u));
    /* 0045b1cd: fld dword ptr [0x900498] */ FPUSH(R_F32((u32)(0x900498u)));
    /* 0045b1d3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045b1d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b1d7: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0045b1de: movsx ecx, word ptr [edi + 0x346] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 0045b1e5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045b1e8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b1eb: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045b1ee: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0045b1f1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045b1f4: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0045b1f7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045b1f9: fstp dword ptr [edi + 0x3f4] */ W_F32((u32)(r_edi+0x3f4u), ST(0)); FPOP();
    /* 0045b1ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b200: jb 0x45b204 */ if (fC) goto L_0045b204;
L_0045b202:; BB(0x0045b202);
    /* 0045b202: fst st(1) */ ST(1) = ST(0);
L_0045b204:; BB(0x0045b204);
    /* 0045b204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b206: fstp dword ptr [edi + 0x3f0] */ W_F32((u32)(r_edi+0x3f0u), ST(0)); FPOP();
    /* 0045b20c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045b20f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b212: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045b219: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b21b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b21c: ret  */ FN_RET(0x0045ad6c); r_esp += 4; return;
L_0045b21d:; BB(0x0045b21d);
    /* 0045b21d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b21e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45b223u); f_0068d5a8();
    /* 0045b223: mov ebx, eax */ r_ebx = r_eax;
    /* 0045b225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b228: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b22a: je 0x45b469 */ if (fZ) goto L_0045b469;
L_0045b230:; BB(0x0045b230);
    /* 0045b230: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b233: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045b23a: mov esi, dword ptr [ecx + 0x3ec] */ r_esi = R32((u32)(r_ecx+0x3ecu));
    /* 0045b240: movzx edi, word ptr [ecx + 0x3c2] */ r_edi = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045b247: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0045b249: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b24a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b24b: call 0x453a2c */ r_esp -= 4; W32(r_esp, 0x45b250u); f_00453a2c();
    /* 0045b250: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b253: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0045b25a: movzx ecx, word ptr [esi + 0x3c2] */ r_ecx = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045b261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b262: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 0045b268: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b26a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b26b: call 0x4535e0 */ r_esp -= 4; W32(r_esp, 0x45b270u); f_004535e0();
    /* 0045b270: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b273: movzx edx, byte ptr [0xa45868] */ r_edx = (u32)R8((u32)(0xa45868u));
    /* 0045b27a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b27d: jne 0x45b295 */ if (!fZ) goto L_0045b295;
L_0045b27f:; BB(0x0045b27f);
    /* 0045b27f: mov dword ptr [0xa4586c], 0x41c80000 */ W32((u32)(0xa4586cu), 0x41c80000u);
    /* 0045b289: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b28f: mov byte ptr [0xa45868], dl */ W8((u32)(0xa45868u), (u8)r_edx);
L_0045b295:; BB(0x0045b295);
    /* 0045b295: mov esi, dword ptr [ebx + 0x300] */ r_esi = R32((u32)(r_ebx+0x300u));
    /* 0045b29b: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 0045b2a1: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0045b2a7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b2aa: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045b2b0: mov edx, dword ptr [ebx + 0x48c] */ r_edx = R32((u32)(r_ebx+0x48cu));
    /* 0045b2b6: mov dword ptr [ebp - 0x9c], esi */ W32((u32)(r_ebp+0xffffff64u), r_esi);
    /* 0045b2bc: mov dword ptr [ebp - 0x98], edi */ W32((u32)(r_ebp+0xffffff68u), r_edi);
    /* 0045b2c2: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0045b2c8: mov eax, dword ptr [ebx + 0x490] */ r_eax = R32((u32)(r_ebx+0x490u));
    /* 0045b2ce: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0045b2d4: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0045b2da: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0045b2e0: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0045b2e6: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0045b2e9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0045b2ec: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b2f2: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0045b2f8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45b2fdu); f_0082f9c4();
    /* 0045b2fd: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b303: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45b308u); f_0083173c();
    /* 0045b308: fcomp dword ptr [0x9004a4] */ fx_compare(ST(0), R_F32((u32)(0x9004a4u))); FPOP();
    /* 0045b30e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b310: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b311: jbe 0x45b45c */ if ((fC||fZ)) goto L_0045b45c;
L_0045b317:; BB(0x0045b317);
    /* 0045b317: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b31d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45b322u); f_0082df08();
    /* 0045b322: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b324: fld dword ptr [0xa4586c] */ FPUSH(R_F32((u32)(0xa4586cu)));
    /* 0045b32a: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 0045b330: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045b332: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 0045b335: fld dword ptr [ebp - 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff84u)));
    /* 0045b338: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b33a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045b33c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045b33e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045b340: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b342: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 0045b348: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b34a: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 0045b34d: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 0045b350: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0045b352:; BB(0x0045b352);
    /* 0045b352: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 0045b358: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b35a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b35b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45b360u); f_0050b510();
    /* 0045b360: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b365: je 0x45b370 */ if (fZ) goto L_0045b370;
L_0045b367:; BB(0x0045b367);
    /* 0045b367: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b369: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b36b: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45b370u); f_00508efc();
L_0045b370:; BB(0x0045b370);
    /* 0045b370: lea ecx, [ebp - 0x9c] */ r_ecx = (u32)(r_ebp+0xffffff64u);
    /* 0045b376: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b37c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b381u); f_0082ebac();
    /* 0045b381: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0045b387: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 0045b38d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b38e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b38f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45b394u); f_00836208();
    /* 0045b394: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b397: fld dword ptr [0x9004a0] */ FPUSH(R_F32((u32)(0x9004a0u)));
    /* 0045b39d: fmul dword ptr [0xa4586c] */ ST(0) = ST(0) * R_F32((u32)(0xa4586cu));
    /* 0045b3a3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0045b3a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b3a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b3a8: jae 0x45b44e */ if (!fC) goto L_0045b44e;
L_0045b3ae:; BB(0x0045b3ae);
    /* 0045b3ae: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045b3b1: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b3b4: jl 0x45b352 */ if ((fS!=fO)) goto L_0045b352;
L_0045b3b6:; BB(0x0045b3b6);
    /* 0045b3b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b3b9: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b3bf: jmp 0x45af22 */ goto L_0045af22;
L_0045b3c4:; BB(0x0045b3c4);
    /* 0045b3c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045b3c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b3c9: jmp 0x45b0dd */ goto L_0045b0dd;
L_0045b3ce:; BB(0x0045b3ce);
    /* 0045b3ce: mov edx, eax */ r_edx = r_eax;
    /* 0045b3d0: fld dword ptr [edx + 0x3d0] */ FPUSH(R_F32((u32)(r_edx+0x3d0u)));
    /* 0045b3d6: fsub dword ptr [0x9002b8] */ ST(0) = ST(0) - R_F32((u32)(0x9002b8u));
    /* 0045b3dc: fcom dword ptr [0x900498] */ fx_compare(ST(0), R_F32((u32)(0x900498u))); 
    /* 0045b3e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b3e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b3e5: jae 0x45b3f6 */ if (!fC) goto L_0045b3f6;
L_0045b3e7:; BB(0x0045b3e7);
    /* 0045b3e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b3e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045b3eb: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 0045b3f1: jmp 0x45affd */ goto L_0045affd;
L_0045b3f6:; BB(0x0045b3f6);
    /* 0045b3f6: mov eax, edx */ r_eax = r_edx;
    /* 0045b3f8: fstp dword ptr [eax + 0x3d0] */ W_F32((u32)(r_eax+0x3d0u), ST(0)); FPOP();
    /* 0045b3fe: jmp 0x45affd */ goto L_0045affd;
L_0045b403:; BB(0x0045b403);
    /* 0045b403: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b406: movzx edx, word ptr [eax + 0x3c2] */ r_edx = (u32)R16((u32)(r_eax+0x3c2u));
    /* 0045b40d: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b413: je 0x45b43c */ if (fZ) goto L_0045b43c;
L_0045b415:; BB(0x0045b415);
    /* 0045b415: mov edx, eax */ r_edx = r_eax;
    /* 0045b417: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 0045b41d: lea eax, [edx + 0x488] */ r_eax = (u32)(r_edx+0x488u);
    /* 0045b423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b424: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b429u); f_00508db8();
L_0045b429:; BB(0x0045b429);
    /* 0045b429: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b42c: lea ecx, [eax + 0x380] */ r_ecx = (u32)(r_eax+0x380u);
    /* 0045b432: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x45b437u); f_0044d180();
    /* 0045b437: jmp 0x45af9f */ goto L_0045af9f;
L_0045b43c:; BB(0x0045b43c);
    /* 0045b43c: push 0xa45870 */ { u32 v = 0xa45870u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b441: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 0045b447: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b44cu); f_00508db8();
    /* 0045b44c: jmp 0x45b429 */ goto L_0045b429;
L_0045b44e:; BB(0x0045b44e);
    /* 0045b44e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b451: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b457: jmp 0x45af22 */ goto L_0045af22;
L_0045b45c:; BB(0x0045b45c);
    /* 0045b45c: mov eax, ebx */ r_eax = r_ebx;
    /* 0045b45e: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b464: jmp 0x45af22 */ goto L_0045af22;
L_0045b469:; BB(0x0045b469);
    /* 0045b469: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b46c: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 0045b472: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b479: jmp 0x45af1c */ goto L_0045af1c;
L_0045b47e:; BB(0x0045b47e);
    /* 0045b47e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b481: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b488: jmp 0x45af1c */ goto L_0045af1c;
L_0045b48d:; BB(0x0045b48d);
    /* 0045b48d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b490: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b497: jmp 0x45af1c */ goto L_0045af1c;
L_0045b49c:; BB(0x0045b49c);
    /* 0045b49c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b49f: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 0045b4a5: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b4ac: jmp 0x45af1c */ goto L_0045af1c;
}

void f_0045ada0(void)
{
    FN_ENTER(0x0045ada0);
    /* 0045ada0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ada5: je 0x45adc1 */ if (fZ) goto L_0045adc1;
L_0045ada7:; BB(0x0045ada7);
    /* 0045ada7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ada8: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45adadu); f_00453ab8();
    /* 0045adad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045adae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045adb0: jne 0x45adc1 */ if (!fZ) goto L_0045adc1;
L_0045adb2:; BB(0x0045adb2);
    /* 0045adb2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adb5: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045adba: mov word ptr [edx + 0x3c2], ax */ W16((u32)(r_edx+0x3c2u), (u16)r_eax);
L_0045adc1:; BB(0x0045adc1);
    /* 0045adc1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adc4: movzx eax, word ptr [eax + 0x3c0] */ r_eax = (u32)R16((u32)(r_eax+0x3c0u));
    /* 0045adcb: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045add0: je 0x45adec */ if (fZ) goto L_0045adec;
L_0045add2:; BB(0x0045add2);
    /* 0045add2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045add3: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x45add8u); f_00453ab8();
    /* 0045add8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045add9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045addb: jne 0x45adec */ if (!fZ) goto L_0045adec;
L_0045addd:; BB(0x0045addd);
    /* 0045addd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ade0: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0045ade5: mov word ptr [edx + 0x3c0], ax */ W16((u32)(r_edx+0x3c0u), (u16)r_eax);
L_0045adec:; BB(0x0045adec);
    /* 0045adec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045adef: mov edx, dword ptr [eax + 0x394] */ r_edx = R32((u32)(r_eax+0x394u));
    /* 0045adf5: mov ecx, dword ptr [edx + 0x380] */ r_ecx = R32((u32)(r_edx+0x380u));
    /* 0045adfb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045adfd: jne 0x45ae2d */ if (!fZ) goto L_0045ae2d;
L_0045adff:; BB(0x0045adff);
    /* 0045adff: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae05: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae0c: mov eax, dword ptr [edx + 0x9a652c] */ r_eax = R32((u32)(r_edx+0x9a652cu));
    /* 0045ae12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae14: je 0x45ae3a */ if (fZ) goto L_0045ae3a;
L_0045ae16:; BB(0x0045ae16);
    /* 0045ae16: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae19: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae1bu); call_ind(t); }
    /* 0045ae1b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae1e: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae24: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae2b: jmp 0x45ae3a */ goto L_0045ae3a;
L_0045ae2d:; BB(0x0045ae2d);
    /* 0045ae2d: mov edx, dword ptr [eax + 0x37c] */ r_edx = R32((u32)(r_eax+0x37cu));
    /* 0045ae33: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045ae36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae38: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0045ae3a:; BB(0x0045ae3a);
    /* 0045ae3a: mov eax, dword ptr [edx + 0x9a6530] */ r_eax = R32((u32)(r_edx+0x9a6530u));
    /* 0045ae40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae42: je 0x45ae49 */ if (fZ) goto L_0045ae49;
L_0045ae44:; BB(0x0045ae44);
    /* 0045ae44: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x45ae49u); call_ind(t); }
L_0045ae49:; BB(0x0045ae49);
    /* 0045ae49: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae4c: call 0x45b4b4 */ r_esp -= 4; W32(r_esp, 0x45ae51u); f_0045b4b4();
    /* 0045ae51: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae54: call 0x45b628 */ r_esp -= 4; W32(r_esp, 0x45ae59u); f_0045b628();
    /* 0045ae59: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae5c: mov edx, dword ptr [eax + 0x3a8] */ r_edx = R32((u32)(r_eax+0x3a8u));
    /* 0045ae62: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045ae65: je 0x45ae8d */ if (fZ) goto L_0045ae8d;
L_0045ae67:; BB(0x0045ae67);
    /* 0045ae67: mov ecx, eax */ r_ecx = r_eax;
    /* 0045ae69: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 0045ae6f: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0045ae72: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045ae75: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0045ae78: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x45ae7du); f_007b6880();
    /* 0045ae7d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045ae83: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x45ae88u); f_006946a8();
    /* 0045ae88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045ae8b: jmp 0x45ae9c */ goto L_0045ae9c;
L_0045ae8d:; BB(0x0045ae8d);
    /* 0045ae8d: mov ecx, dword ptr [eax + 0x39c] */ r_ecx = R32((u32)(r_eax+0x39cu));
    /* 0045ae93: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0045ae96: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045ae99: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
L_0045ae9c:; BB(0x0045ae9c);
    /* 0045ae9c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045ae9f: call 0x45b64c */ r_esp -= 4; W32(r_esp, 0x45aea4u); f_0045b64c();
    /* 0045aea4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aea7: call 0x45b9b8 */ r_esp -= 4; W32(r_esp, 0x45aeacu); f_0045b9b8();
    /* 0045aeac: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aeaf: fild dword ptr [ecx + 0x3d8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x3d8u)));
    /* 0045aeb5: mov eax, dword ptr [ecx + 0x3d4] */ r_eax = R32((u32)(r_ecx+0x3d4u));
    /* 0045aebb: mov edx, dword ptr [ecx + 0x39c] */ r_edx = R32((u32)(r_ecx+0x39cu));
    /* 0045aec1: sub eax, dword ptr [ecx + 0x3d8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3d8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045aec7: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0045aeca: fild dword ptr [ebp - 0x38] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc8u)));
    /* 0045aecd: fmul dword ptr [ecx + 0x3b8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x3b8u));
    /* 0045aed3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0045aed5: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0045aed8: movzx ecx, word ptr [ecx + 0x3c2] */ r_ecx = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045aedf: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aee5: je 0x45b49c */ if (fZ) goto L_0045b49c;
L_0045aeeb:; BB(0x0045aeeb);
    /* 0045aeeb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aeee: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045aef4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045aef7: je 0x45b48d */ if (fZ) goto L_0045b48d;
L_0045aefd:; BB(0x0045aefd);
    /* 0045aefd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af00: je 0x45b47e */ if (fZ) goto L_0045b47e;
L_0045af06:; BB(0x0045af06);
    /* 0045af06: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af09: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045af10: cmp ebx, dword ptr [edx + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af16: jl 0x45b21d */ if ((fS!=fO)) goto L_0045b21d;
L_0045af1c:; BB(0x0045af1c);
    /* 0045af1c: mov dword ptr [edx + 0x3ec], ebx */ W32((u32)(r_edx+0x3ecu), r_ebx);
L_0045af22:; BB(0x0045af22);
    /* 0045af22: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af25: je 0x45af9f */ if (fZ) goto L_0045af9f;
L_0045af27:; BB(0x0045af27);
    /* 0045af27: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af2a: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 0045af31: lea edx, [eax + 0x494] */ r_edx = (u32)(r_eax+0x494u);
    /* 0045af37: lea ecx, [eax + 0x4a0] */ r_ecx = (u32)(r_eax+0x4a0u);
    /* 0045af3d: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 0045af40: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 0045af43: lea ebx, [eax + 0x4dc] */ r_ebx = (u32)(r_eax+0x4dcu);
    /* 0045af49: lea esi, [eax + 0x4e8] */ r_esi = (u32)(r_eax+0x4e8u);
    /* 0045af4f: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 0045af52: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0045af55: lea esi, [ebp - 0x78] */ r_esi = (u32)(r_ebp+0xffffff88u);
    /* 0045af58: lea edi, [eax + 0x44c] */ r_edi = (u32)(r_eax+0x44cu);
    /* 0045af5e: mov dword ptr [ebp - 0x68], edi */ W32((u32)(r_ebp+0xffffff98u), r_edi);
    /* 0045af61: lea edx, [eax + 0x458] */ r_edx = (u32)(r_eax+0x458u);
    /* 0045af67: lea eax, [eax + 0x464] */ r_eax = (u32)(r_eax+0x464u);
    /* 0045af6d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0045af6f: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0045af72: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_0045af75:; BB(0x0045af75);
    /* 0045af75: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045af78: mov ecx, dword ptr [eax + ebx*4 + 0x40c] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x40cu));
    /* 0045af7f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af81: je 0x45af8f */ if (fZ) goto L_0045af8f;
L_0045af83:; BB(0x0045af83);
    /* 0045af83: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0045af85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045af87: je 0x45af8f */ if (fZ) goto L_0045af8f;
L_0045af89:; BB(0x0045af89);
    /* 0045af89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045af8a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45af8fu); f_00508db8();
L_0045af8f:; BB(0x0045af8f);
    /* 0045af8f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045af92: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045af95: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045af98: jl 0x45af75 */ if ((fS!=fO)) goto L_0045af75;
L_0045af9a:; BB(0x0045af9a);
    /* 0045af9a: jmp 0x45b403 */ goto L_0045b403;
L_0045af9f:; BB(0x0045af9f);
    /* 0045af9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045afa2: movzx ecx, word ptr [eax + 0x3c2] */ r_ecx = (u32)R16((u32)(r_eax+0x3c2u));
    /* 0045afa9: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afaf: je 0x45b3ce */ if (fZ) goto L_0045b3ce;
L_0045afb5:; BB(0x0045afb5);
    /* 0045afb5: fld dword ptr [0x9002b8] */ FPUSH(R_F32((u32)(0x9002b8u)));
    /* 0045afbb: mov edx, eax */ r_edx = r_eax;
    /* 0045afbd: fadd dword ptr [edx + 0x3d0] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3d0u));
    /* 0045afc3: fcom dword ptr [0x90049c] */ fx_compare(ST(0), R_F32((u32)(0x90049cu))); 
    /* 0045afc9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045afcb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045afcc: jbe 0x45afdd */ if ((fC||fZ)) goto L_0045afdd;
L_0045afce:; BB(0x0045afce);
    /* 0045afce: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045afd0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045afd5: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 0045afdb: jmp 0x45afe5 */ goto L_0045afe5;
L_0045afdd:; BB(0x0045afdd);
    /* 0045afdd: mov eax, edx */ r_eax = r_edx;
    /* 0045afdf: fstp dword ptr [eax + 0x3d0] */ W_F32((u32)(r_eax+0x3d0u), ST(0)); FPOP();
L_0045afe5:; BB(0x0045afe5);
    /* 0045afe5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045afe6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45afebu); f_0068d5a8();
    /* 0045afeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045afec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045afee: jne 0x45affd */ if (!fZ) goto L_0045affd;
L_0045aff0:; BB(0x0045aff0);
    /* 0045aff0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045aff3: mov dword ptr [eax + 0x3d0], 0 */ W32((u32)(r_eax+0x3d0u), 0x0u);
L_0045affd:; BB(0x0045affd);
    /* 0045affd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b000: call 0x45bbb0 */ r_esp -= 4; W32(r_esp, 0x45b005u); f_0045bbb0();
    /* 0045b005: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b008: movsx eax, word ptr [ecx + 0x334] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045b00f: mov dword ptr [ecx + 0x3dc], eax */ W32((u32)(r_ecx+0x3dcu), r_eax);
    /* 0045b015: call 0x45bc44 */ r_esp -= 4; W32(r_esp, 0x45b01au); f_0045bc44();
    /* 0045b01a: fld dword ptr [0x9002b4] */ FPUSH(R_F32((u32)(0x9002b4u)));
    /* 0045b020: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b023: fadd dword ptr [edx + 0x3e4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3e4u));
    /* 0045b029: fcom dword ptr [0x90049c] */ fx_compare(ST(0), R_F32((u32)(0x90049cu))); 
    /* 0045b02f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b031: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b032: jb 0x45b044 */ if (fC) goto L_0045b044;
L_0045b034:; BB(0x0045b034);
    /* 0045b034: fadd dword ptr [0x900494] */ ST(0) = ST(0) + R_F32((u32)(0x900494u));
    /* 0045b03a: mov eax, edx */ r_eax = r_edx;
    /* 0045b03c: fstp dword ptr [eax + 0x3e4] */ W_F32((u32)(r_eax+0x3e4u), ST(0)); FPOP();
    /* 0045b042: jmp 0x45b04c */ goto L_0045b04c;
L_0045b044:; BB(0x0045b044);
    /* 0045b044: mov eax, edx */ r_eax = r_edx;
    /* 0045b046: fstp dword ptr [eax + 0x3e4] */ W_F32((u32)(r_eax+0x3e4u), ST(0)); FPOP();
L_0045b04c:; BB(0x0045b04c);
    /* 0045b04c: movzx eax, byte ptr [0xa4580c] */ r_eax = (u32)R8((u32)(0xa4580cu));
    /* 0045b053: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b055: jne 0x45b06b */ if (!fZ) goto L_0045b06b;
L_0045b057:; BB(0x0045b057);
    /* 0045b057: mov dword ptr [0xa45810], 0x41e80000 */ W32((u32)(0xa45810u), 0x41e80000u);
    /* 0045b061: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045b066: mov byte ptr [0xa4580c], al */ W8((u32)(0xa4580cu), (u8)r_eax);
L_0045b06b:; BB(0x0045b06b);
    /* 0045b06b: fld dword ptr [0xa45810] */ FPUSH(R_F32((u32)(0xa45810u)));
    /* 0045b071: fld dword ptr [edx + 0x3fc] */ FPUSH(R_F32((u32)(r_edx+0x3fcu)));
    /* 0045b077: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045b079: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b07b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b07c: ja 0x45b080 */ if ((!fC&&!fZ)) goto L_0045b080;
L_0045b07e:; BB(0x0045b07e);
    /* 0045b07e: fst st(1) */ ST(1) = ST(0);
L_0045b080:; BB(0x0045b080);
    /* 0045b080: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b082: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0045b085: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0045b08c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b08e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x45b093u); f_008581c5();
    /* 0045b093: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b096: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b099: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0045b09c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b09e: je 0x45b3c4 */ if (fZ) goto L_0045b3c4;
L_0045b0a4:; BB(0x0045b0a4);
    /* 0045b0a4: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 0045b0ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0045b0b2: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0045b0b5: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b0b7: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b0ba: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 0045b0bd: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045b0c1: mov dword ptr [esp + 8], 0x3f19999a */ W32((u32)(r_esp+0x8u), 0x3f19999au);
    /* 0045b0c9: mov dword ptr [esp + 0xc], 2 */ W32((u32)(r_esp+0xcu), 0x2u);
    /* 0045b0d1: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x45b0d6u); f_005795a0();
    /* 0045b0d6: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0045b0dd:; BB(0x0045b0dd);
    /* 0045b0dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0045b0e4: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45b0e9u); f_0082fa9c();
    /* 0045b0e9: push dword ptr [0x9a6754] */ { u32 v = R32((u32)(0x9a6754u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b0ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b0f2: mov ecx, dword ptr [eax + 0x398] */ r_ecx = R32((u32)(r_eax+0x398u));
    /* 0045b0f8: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45b0fdu); f_005b8610();
    /* 0045b0fd: mov ebx, eax */ r_ebx = r_eax;
    /* 0045b0ff: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b102: mov edx, dword ptr [edi + 0x3f8] */ r_edx = R32((u32)(r_edi+0x3f8u));
    /* 0045b108: mov ecx, dword ptr [edi + 0x398] */ r_ecx = R32((u32)(r_edi+0x398u));
    /* 0045b10e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 0045b111: push dword ptr [esi*4 + 0x9a6448] */ { u32 v = R32((u32)(r_esi*4+0x9a6448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b118: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45b11du); f_005b8638();
    /* 0045b11d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b120: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b122: push 0x9a6420 */ { u32 v = 0x9a6420u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b129: call 0x579794 */ r_esp -= 4; W32(r_esp, 0x45b12eu); f_00579794();
    /* 0045b12e: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45b133u); f_0082faac();
    /* 0045b133: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0045b136: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b13a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045b13d: call 0x579de0 */ r_esp -= 4; W32(r_esp, 0x45b142u); f_00579de0();
    /* 0045b142: mov esi, eax */ r_esi = r_eax;
    /* 0045b144: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45b149u); f_0082d7b0();
    /* 0045b149: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b14b: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x45b150u); f_00830cd8();
    /* 0045b150: mov edx, edi */ r_edx = r_edi;
    /* 0045b152: lea ecx, [edx + 0x38] */ r_ecx = (u32)(r_edx+0x38u);
    /* 0045b155: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45b15au); f_0082d838();
    /* 0045b15a: mov ebx, edi */ r_ebx = r_edi;
    /* 0045b15c: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0045b15f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b161: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45b166u); f_0082d8bc();
    /* 0045b166: lea ebx, [ebp - 0x50] */ r_ebx = (u32)(r_ebp+0xffffffb0u);
    /* 0045b169: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b16a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b16c: mov edx, esi */ r_edx = r_esi;
    /* 0045b16e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45b173u); f_00830aa0();
    /* 0045b173: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 0045b176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b177: lea edx, [esi + 0xc] */ r_edx = (u32)(r_esi+0xcu);
    /* 0045b17a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045b17c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x45b181u); f_00830aa0();
    /* 0045b181: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45b186u); f_0082da80();
    /* 0045b186: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b188: je 0x45b1b1 */ if (fZ) goto L_0045b1b1;
L_0045b18a:; BB(0x0045b18a);
    /* 0045b18a: mov eax, edi */ r_eax = r_edi;
    /* 0045b18c: mov ecx, dword ptr [eax + 0x420] */ r_ecx = R32((u32)(r_eax+0x420u));
    /* 0045b192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b194: je 0x45b19f */ if (fZ) goto L_0045b19f;
L_0045b196:; BB(0x0045b196);
    /* 0045b196: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0045b199: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b19a: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b19fu); f_00508db8();
L_0045b19f:; BB(0x0045b19f);
    /* 0045b19f: mov eax, edi */ r_eax = r_edi;
    /* 0045b1a1: mov ecx, dword ptr [eax + 0x424] */ r_ecx = R32((u32)(r_eax+0x424u));
    /* 0045b1a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b1a9: je 0x45b1b1 */ if (fZ) goto L_0045b1b1;
L_0045b1ab:; BB(0x0045b1ab);
    /* 0045b1ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1ac: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b1b1u); f_00508db8();
L_0045b1b1:; BB(0x0045b1b1);
    /* 0045b1b1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0045b1b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0045b1b6: je 0x45b1c1 */ if (fZ) goto L_0045b1c1;
L_0045b1b8:; BB(0x0045b1b8);
    /* 0045b1b8: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b1ba: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b1bc: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x45b1c1u); f_0045a950();
L_0045b1c1:; BB(0x0045b1c1);
    /* 0045b1c1: fld dword ptr [0x9002b0] */ FPUSH(R_F32((u32)(0x9002b0u)));
    /* 0045b1c7: fadd dword ptr [edi + 0x3f0] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3f0u));
    /* 0045b1cd: fld dword ptr [0x900498] */ FPUSH(R_F32((u32)(0x900498u)));
    /* 0045b1d3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045b1d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b1d7: movsx edx, word ptr [edi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0045b1de: movsx ecx, word ptr [edi + 0x346] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x346u));
    /* 0045b1e5: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0045b1e8: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0045b1eb: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0045b1ee: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0045b1f1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0045b1f4: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 0045b1f7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045b1f9: fstp dword ptr [edi + 0x3f4] */ W_F32((u32)(r_edi+0x3f4u), ST(0)); FPOP();
    /* 0045b1ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b200: jb 0x45b204 */ if (fC) goto L_0045b204;
L_0045b202:; BB(0x0045b202);
    /* 0045b202: fst st(1) */ ST(1) = ST(0);
L_0045b204:; BB(0x0045b204);
    /* 0045b204: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b206: fstp dword ptr [edi + 0x3f0] */ W_F32((u32)(r_edi+0x3f0u), ST(0)); FPOP();
    /* 0045b20c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0045b20f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0045b212: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0045b219: mov esp, ebp */ r_esp = r_ebp;
    /* 0045b21b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045b21c: ret  */ FN_RET(0x0045ada0); r_esp += 4; return;
L_0045b21d:; BB(0x0045b21d);
    /* 0045b21d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b21e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45b223u); f_0068d5a8();
    /* 0045b223: mov ebx, eax */ r_ebx = r_eax;
    /* 0045b225: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b228: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b22a: je 0x45b469 */ if (fZ) goto L_0045b469;
L_0045b230:; BB(0x0045b230);
    /* 0045b230: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b233: movsx edx, word ptr [ecx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x334u));
    /* 0045b23a: mov esi, dword ptr [ecx + 0x3ec] */ r_esi = R32((u32)(r_ecx+0x3ecu));
    /* 0045b240: movzx edi, word ptr [ecx + 0x3c2] */ r_edi = (u32)R16((u32)(r_ecx+0x3c2u));
    /* 0045b247: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0045b249: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b24a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b24b: call 0x453a2c */ r_esp -= 4; W32(r_esp, 0x45b250u); f_00453a2c();
    /* 0045b250: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b253: movsx edx, word ptr [esi + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0045b25a: movzx ecx, word ptr [esi + 0x3c2] */ r_ecx = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045b261: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b262: mov dword ptr [esi + 0x3ec], edx */ W32((u32)(r_esi+0x3ecu), r_edx);
    /* 0045b268: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b26a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b26b: call 0x4535e0 */ r_esp -= 4; W32(r_esp, 0x45b270u); f_004535e0();
    /* 0045b270: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b273: movzx edx, byte ptr [0xa45868] */ r_edx = (u32)R8((u32)(0xa45868u));
    /* 0045b27a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b27d: jne 0x45b295 */ if (!fZ) goto L_0045b295;
L_0045b27f:; BB(0x0045b27f);
    /* 0045b27f: mov dword ptr [0xa4586c], 0x41c80000 */ W32((u32)(0xa4586cu), 0x41c80000u);
    /* 0045b289: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b28f: mov byte ptr [0xa45868], dl */ W8((u32)(0xa45868u), (u8)r_edx);
L_0045b295:; BB(0x0045b295);
    /* 0045b295: mov esi, dword ptr [ebx + 0x300] */ r_esi = R32((u32)(r_ebx+0x300u));
    /* 0045b29b: mov edi, dword ptr [ebx + 0x304] */ r_edi = R32((u32)(r_ebx+0x304u));
    /* 0045b2a1: mov eax, dword ptr [ebx + 0x308] */ r_eax = R32((u32)(r_ebx+0x308u));
    /* 0045b2a7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b2aa: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045b2b0: mov edx, dword ptr [ebx + 0x48c] */ r_edx = R32((u32)(r_ebx+0x48cu));
    /* 0045b2b6: mov dword ptr [ebp - 0x9c], esi */ W32((u32)(r_ebp+0xffffff64u), r_esi);
    /* 0045b2bc: mov dword ptr [ebp - 0x98], edi */ W32((u32)(r_ebp+0xffffff68u), r_edi);
    /* 0045b2c2: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0045b2c8: mov eax, dword ptr [ebx + 0x490] */ r_eax = R32((u32)(r_ebx+0x490u));
    /* 0045b2ce: mov dword ptr [ebp - 0x90], ecx */ W32((u32)(r_ebp+0xffffff70u), r_ecx);
    /* 0045b2d4: mov dword ptr [ebp - 0x8c], edx */ W32((u32)(r_ebp+0xffffff74u), r_edx);
    /* 0045b2da: mov dword ptr [ebp - 0x88], eax */ W32((u32)(r_ebp+0xffffff78u), r_eax);
    /* 0045b2e0: mov dword ptr [ebp - 0x84], ecx */ W32((u32)(r_ebp+0xffffff7cu), r_ecx);
    /* 0045b2e6: mov dword ptr [ebp - 0x80], edx */ W32((u32)(r_ebp+0xffffff80u), r_edx);
    /* 0045b2e9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0045b2ec: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b2f2: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0045b2f8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45b2fdu); f_0082f9c4();
    /* 0045b2fd: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b303: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45b308u); f_0083173c();
    /* 0045b308: fcomp dword ptr [0x9004a4] */ fx_compare(ST(0), R_F32((u32)(0x9004a4u))); FPOP();
    /* 0045b30e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b310: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b311: jbe 0x45b45c */ if ((fC||fZ)) goto L_0045b45c;
L_0045b317:; BB(0x0045b317);
    /* 0045b317: lea ecx, [ebp - 0x84] */ r_ecx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b31d: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45b322u); f_0082df08();
    /* 0045b322: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b324: fld dword ptr [0xa4586c] */ FPUSH(R_F32((u32)(0xa4586cu)));
    /* 0045b32a: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 0045b330: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045b332: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 0045b335: fld dword ptr [ebp - 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff84u)));
    /* 0045b338: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b33a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0045b33c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0045b33e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0045b340: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b342: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 0045b348: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b34a: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 0045b34d: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 0045b350: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0045b352:; BB(0x0045b352);
    /* 0045b352: lea eax, [ebp - 0x9c] */ r_eax = (u32)(r_ebp+0xffffff64u);
    /* 0045b358: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b35a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b35b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x45b360u); f_0050b510();
    /* 0045b360: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b365: je 0x45b370 */ if (fZ) goto L_0045b370;
L_0045b367:; BB(0x0045b367);
    /* 0045b367: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b369: mov ecx, eax */ r_ecx = r_eax;
    /* 0045b36b: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x45b370u); f_00508efc();
L_0045b370:; BB(0x0045b370);
    /* 0045b370: lea ecx, [ebp - 0x9c] */ r_ecx = (u32)(r_ebp+0xffffff64u);
    /* 0045b376: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 0045b37c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b381u); f_0082ebac();
    /* 0045b381: lea edx, [ebp - 0x9c] */ r_edx = (u32)(r_ebp+0xffffff64u);
    /* 0045b387: lea eax, [ebp - 0x90] */ r_eax = (u32)(r_ebp+0xffffff70u);
    /* 0045b38d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b38e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b38f: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x45b394u); f_00836208();
    /* 0045b394: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b397: fld dword ptr [0x9004a0] */ FPUSH(R_F32((u32)(0x9004a0u)));
    /* 0045b39d: fmul dword ptr [0xa4586c] */ ST(0) = ST(0) * R_F32((u32)(0xa4586cu));
    /* 0045b3a3: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0045b3a5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b3a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b3a8: jae 0x45b44e */ if (!fC) goto L_0045b44e;
L_0045b3ae:; BB(0x0045b3ae);
    /* 0045b3ae: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0045b3b1: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b3b4: jl 0x45b352 */ if ((fS!=fO)) goto L_0045b352;
L_0045b3b6:; BB(0x0045b3b6);
    /* 0045b3b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b3b9: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b3bf: jmp 0x45af22 */ goto L_0045af22;
L_0045b3c4:; BB(0x0045b3c4);
    /* 0045b3c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045b3c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0045b3c9: jmp 0x45b0dd */ goto L_0045b0dd;
L_0045b3ce:; BB(0x0045b3ce);
    /* 0045b3ce: mov edx, eax */ r_edx = r_eax;
    /* 0045b3d0: fld dword ptr [edx + 0x3d0] */ FPUSH(R_F32((u32)(r_edx+0x3d0u)));
    /* 0045b3d6: fsub dword ptr [0x9002b8] */ ST(0) = ST(0) - R_F32((u32)(0x9002b8u));
    /* 0045b3dc: fcom dword ptr [0x900498] */ fx_compare(ST(0), R_F32((u32)(0x900498u))); 
    /* 0045b3e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b3e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b3e5: jae 0x45b3f6 */ if (!fC) goto L_0045b3f6;
L_0045b3e7:; BB(0x0045b3e7);
    /* 0045b3e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b3e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045b3eb: mov dword ptr [edx + 0x3d0], eax */ W32((u32)(r_edx+0x3d0u), r_eax);
    /* 0045b3f1: jmp 0x45affd */ goto L_0045affd;
L_0045b3f6:; BB(0x0045b3f6);
    /* 0045b3f6: mov eax, edx */ r_eax = r_edx;
    /* 0045b3f8: fstp dword ptr [eax + 0x3d0] */ W_F32((u32)(r_eax+0x3d0u), ST(0)); FPOP();
    /* 0045b3fe: jmp 0x45affd */ goto L_0045affd;
L_0045b403:; BB(0x0045b403);
    /* 0045b403: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b406: movzx edx, word ptr [eax + 0x3c2] */ r_edx = (u32)R16((u32)(r_eax+0x3c2u));
    /* 0045b40d: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b413: je 0x45b43c */ if (fZ) goto L_0045b43c;
L_0045b415:; BB(0x0045b415);
    /* 0045b415: mov edx, eax */ r_edx = r_eax;
    /* 0045b417: mov ecx, dword ptr [edx + 0x428] */ r_ecx = R32((u32)(r_edx+0x428u));
    /* 0045b41d: lea eax, [edx + 0x488] */ r_eax = (u32)(r_edx+0x488u);
    /* 0045b423: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b424: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b429u); f_00508db8();
L_0045b429:; BB(0x0045b429);
    /* 0045b429: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b42c: lea ecx, [eax + 0x380] */ r_ecx = (u32)(r_eax+0x380u);
    /* 0045b432: call 0x44d180 */ r_esp -= 4; W32(r_esp, 0x45b437u); f_0044d180();
    /* 0045b437: jmp 0x45af9f */ goto L_0045af9f;
L_0045b43c:; BB(0x0045b43c);
    /* 0045b43c: push 0xa45870 */ { u32 v = 0xa45870u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b441: mov ecx, dword ptr [eax + 0x428] */ r_ecx = R32((u32)(r_eax+0x428u));
    /* 0045b447: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x45b44cu); f_00508db8();
    /* 0045b44c: jmp 0x45b429 */ goto L_0045b429;
L_0045b44e:; BB(0x0045b44e);
    /* 0045b44e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b451: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b457: jmp 0x45af22 */ goto L_0045af22;
L_0045b45c:; BB(0x0045b45c);
    /* 0045b45c: mov eax, ebx */ r_eax = r_ebx;
    /* 0045b45e: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0045b464: jmp 0x45af22 */ goto L_0045af22;
L_0045b469:; BB(0x0045b469);
    /* 0045b469: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b46c: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 0045b472: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b479: jmp 0x45af1c */ goto L_0045af1c;
L_0045b47e:; BB(0x0045b47e);
    /* 0045b47e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b481: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b488: jmp 0x45af1c */ goto L_0045af1c;
L_0045b48d:; BB(0x0045b48d);
    /* 0045b48d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b490: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b497: jmp 0x45af1c */ goto L_0045af1c;
L_0045b49c:; BB(0x0045b49c);
    /* 0045b49c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0045b49f: mov eax, dword ptr [edx + 0x37c] */ r_eax = R32((u32)(r_edx+0x37cu));
    /* 0045b4a5: movsx ebx, word ptr [edx + 0x334] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x334u));
    /* 0045b4ac: jmp 0x45af1c */ goto L_0045af1c;
}

