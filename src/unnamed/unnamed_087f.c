#include "protos.h"

void f_0087f1ec(void) /* sub_87F1EC */
{
    FN_ENTER(0x0087f1ec);
L_0087f1ec:; BB(0x0087f1ec);
    /* 0087f1ec: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087f1f6: jne 0x87f214 */ if (!fZ) goto L_0087f214;
L_0087f1fc:; BB(0x0087f1fc);
    /* 0087f1fc: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087f206: jne 0x87fc34 */ if (!fZ) goto L_0087fc34;
L_0087f20c:; BB(0x0087f20c);
    /* 0087f20c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x87f211u); f_0086b8a0();
    /* 0087f211: jmp 0x87f1ec */ goto L_0087f1ec;
L_0087f214:; BB(0x0087f214);
    /* 0087f214: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087f215: mov ebx, esp */ r_ebx = r_esp;
    /* 0087f217: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087f21a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087f21b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087f21c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087f21d: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087f223: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087f226: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087f229: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0087f22c: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0087f22f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0087f233: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0087f236: mov eax, 0xffffff9d */ r_eax = 0xffffff9du;
    /* 0087f23b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0087f23f: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0087f243: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0087f247: mov eax, 1 */ r_eax = 0x1u;
    /* 0087f24c: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0087f250: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087f252: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0087f254: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0087f257: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0087f25a: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0087f25d: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0087f260: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0087f263: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0087f266: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0087f269: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0087f26c: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0087f26f: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0087f272: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0087f275: mov ecx, edx */ r_ecx = r_edx;
    /* 0087f277: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0087f279: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0087f27c: fild dword ptr [ecx] */ FPUSH((long double)(i32)R32((u32)(r_ecx)));
    /* 0087f27e: fmul dword ptr [0x99abc4] */ ST(0) = ST(0) * R_F32((u32)(0x99abc4u));
    /* 0087f284: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f287: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87f28cu); f_0084d1ac();
    /* 0087f28c: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0087f290: fld qword ptr [0x99a920] */ FPUSH(R_F64((u32)(0x99a920u)));
    /* 0087f296: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f299: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87f29eu); f_0084d1ac();
    /* 0087f29e: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0087f2a2: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0087f2a4: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087f2aa: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f2ad: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x87f2b2u); f_008c9b50();
    /* 0087f2b2: fadd qword ptr [0x99a910] */ ST(0) = ST(0) + R_F64((u32)(0x99a910u));
    /* 0087f2b8: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0087f2bc: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0087f2c0: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0087f2c4: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0087f2c8: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087f2cb: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f2d1: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f2d7: jle 0x87f2ff */ if ((fZ||fS!=fO)) goto L_0087f2ff;
L_0087f2d9:; BB(0x0087f2d9);
    /* 0087f2d9: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 0087f2dd: mov edx, eax */ r_edx = r_eax;
    /* 0087f2df: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f2e1: shld edx, ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 b = r_ebp; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087f2e5: or edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0087f2eb: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087f2f1: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087f2f3: mov ebp, edx */ r_ebp = r_edx;
    /* 0087f2f5: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f2f7: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f2fa: cmovge ebp, edx */ if ((fS==fO)) { r_ebp = r_edx; }
    /* 0087f2fd: jmp 0x87f301 */ goto L_0087f301;
L_0087f2ff:; BB(0x0087f2ff);
    /* 0087f2ff: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0087f301:; BB(0x0087f301);
    /* 0087f301: mov dword ptr [edi + 0x20], ebp */ W32((u32)(r_edi+0x20u), r_ebp);
    /* 0087f304: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0087f308: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f30c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f310: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0087f314: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0087f318: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f31c: fst qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0));
    /* 0087f320: fld dword ptr [0x99abc0] */ FPUSH(R_F32((u32)(0x99abc0u)));
    /* 0087f326: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087f328: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f32a: fmul qword ptr [0x99a918] */ ST(0) = ST(0) * R_F64((u32)(0x99a918u));
    /* 0087f330: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0087f332: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f335: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87f33au); f_0084d1ac();
    /* 0087f33a: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0087f33b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0087f33d: mov eax, 1 */ r_eax = 0x1u;
    /* 0087f342: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087f346: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087f348: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f34c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f350: fst qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0));
    /* 0087f354: fild dword ptr [ebp] */ FPUSH((long double)(i32)R32((u32)(r_ebp)));
    /* 0087f357: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087f359: fmul qword ptr [0x99a900] */ ST(0) = ST(0) * R_F64((u32)(0x99a900u));
    /* 0087f35f: fadd qword ptr [0x99a908] */ ST(0) = ST(0) + R_F64((u32)(0x99a908u));
    /* 0087f365: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f367: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087f369: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0087f36d: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0087f371: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0087f375: mov ecx, eax */ r_ecx = r_eax;
    /* 0087f377: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087f37a: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f380: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f386: jle 0x87f3aa */ if ((fZ||fS!=fO)) goto L_0087f3aa;
L_0087f388:; BB(0x0087f388);
    /* 0087f388: mov edx, eax */ r_edx = r_eax;
    /* 0087f38a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f38c: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f392: shld edx, ebp, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 b = r_ebp; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087f396: or edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087f39c: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087f39e: mov ebp, edx */ r_ebp = r_edx;
    /* 0087f3a0: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f3a2: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f3a5: cmovge ebp, edx */ if ((fS==fO)) { r_ebp = r_edx; }
    /* 0087f3a8: jmp 0x87f3ac */ goto L_0087f3ac;
L_0087f3aa:; BB(0x0087f3aa);
    /* 0087f3aa: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0087f3ac:; BB(0x0087f3ac);
    /* 0087f3ac: mov dword ptr [edi + 0x1c], ebp */ W32((u32)(r_edi+0x1cu), r_ebp);
    /* 0087f3af: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0087f3b3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f3b7: fadd dword ptr [0x99abc0] */ ST(0) = ST(0) + R_F32((u32)(0x99abc0u));
    /* 0087f3bd: fmul dword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x38u));
    /* 0087f3c1: fmul qword ptr [0x99a918] */ ST(0) = ST(0) * R_F64((u32)(0x99a918u));
    /* 0087f3c7: fdiv qword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x30u));
    /* 0087f3cb: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f3ce: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87f3d3u); f_0084d1ac();
    /* 0087f3d3: fmul qword ptr [0x99a900] */ ST(0) = ST(0) * R_F64((u32)(0x99a900u));
    /* 0087f3d9: fsub qword ptr [0x99a8f8] */ ST(0) = ST(0) - R_F64((u32)(0x99a8f8u));
    /* 0087f3df: fmul qword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x58u));
    /* 0087f3e3: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087f3e9: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0087f3ed: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0087f3f1: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0087f3f5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0087f3f9: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 0087f3fd: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087f400: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f406: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f40c: jle 0x87f43f */ if ((fZ||fS!=fO)) goto L_0087f43f;
L_0087f40e:; BB(0x0087f40e);
    /* 0087f40e: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 0087f412: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0087f416: mov eax, ebp */ r_eax = r_ebp;
    /* 0087f418: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0087f41c: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f41e: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f424: shld eax, edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_edx; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087f428: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087f42d: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087f42f: mov ecx, eax */ r_ecx = r_eax;
    /* 0087f431: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f433: cmp ebp, 0 */ {  u32 a = r_ebp; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f436: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
    /* 0087f43a: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087f43d: jmp 0x87f441 */ goto L_0087f441;
L_0087f43f:; BB(0x0087f43f);
    /* 0087f43f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087f441:; BB(0x0087f441);
    /* 0087f441: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f443: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f444: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0087f447: mov dword ptr [edi + 0x28], ecx */ W32((u32)(r_edi+0x28u), r_ecx);
    /* 0087f44a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087f44d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87f452u); f_00859c55();
    /* 0087f452: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0087f455: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087f456: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87f45bu); f_00859c55();
    /* 0087f45b: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0087f45e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087f45f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87f464u); f_00859c55();
    /* 0087f464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087f467: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0087f46a: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0087f46e: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0087f472: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0087f475: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087f477: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f479: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0087f47b: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0087f47e: fld qword ptr [0x99a918] */ FPUSH(R_F64((u32)(0x99a918u)));
    /* 0087f484: fld qword ptr [0x99a8f0] */ FPUSH(R_F64((u32)(0x99a8f0u)));
    /* 0087f48a: fld qword ptr [0x99a8e8] */ FPUSH(R_F64((u32)(0x99a8e8u)));
    /* 0087f490: fld qword ptr [0x99a8e0] */ FPUSH(R_F64((u32)(0x99a8e0u)));
    /* 0087f496: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0087f49a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f49e: fstp qword ptr [esp + 0x38] */ W_F64((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0087f4a2: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0087f4a6: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0087f4aa: mov ebp, eax */ r_ebp = r_eax;
    /* 0087f4ac: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0087f4b0: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0087f4b4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f4b6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f4b8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f4ba: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087f4bc:; BB(0x0087f4bc);
    /* 0087f4bc: lea esi, [ebp + 1] */ r_esi = (u32)(r_ebp+0x1u);
    /* 0087f4bf: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0087f4c3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f4c7: fmul qword ptr [0x99a8e8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8e8u));
    /* 0087f4cd: fadd qword ptr [0x99a8f0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8f0u));
    /* 0087f4d3: fmul qword ptr [0x99a8e0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8e0u));
    /* 0087f4d9: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f4dc: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87f4e1u); f_008c9b28();
    /* 0087f4e1: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0087f4e3: fmul qword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x30u));
    /* 0087f4e7: fdiv qword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x38u));
    /* 0087f4eb: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087f4f1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f4f4: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x87f4f9u); f_008c9b50();
    /* 0087f4f9: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0087f4fd: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0087f501: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0087f505: mov ecx, edi */ r_ecx = r_edi;
    /* 0087f507: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087f50a: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f510: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f516: jle 0x87f53a */ if ((fZ||fS!=fO)) goto L_0087f53a;
L_0087f518:; BB(0x0087f518);
    /* 0087f518: mov edx, edi */ r_edx = r_edi;
    /* 0087f51a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f51c: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f522: shld edx, eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 b = r_eax; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_edx = r; } }
    /* 0087f526: or edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087f52c: shr edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0087f52e: mov eax, edx */ r_eax = r_edx;
    /* 0087f530: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087f532: cmp edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f535: cmovge eax, edx */ if ((fS==fO)) { r_eax = r_edx; }
    /* 0087f538: jmp 0x87f53c */ goto L_0087f53c;
L_0087f53a:; BB(0x0087f53a);
    /* 0087f53a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0087f53c:; BB(0x0087f53c);
    /* 0087f53c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f53e: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0087f542: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0087f546: fld dword ptr [edx + 0xa2aca0] */ FPUSH(R_F32((u32)(r_edx+0xa2aca0u)));
    /* 0087f54c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f54e: jge 0x87fc25 */ if ((fS==fO)) goto L_0087fc25;
L_0087f554:; BB(0x0087f554);
    /* 0087f554: mov edx, eax */ r_edx = r_eax;
    /* 0087f556: sub edx, dword ptr [esp + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087f55a: fld dword ptr [ebp*2 + 0xa2aca4] */ FPUSH(R_F32((u32)(r_ebp*2+0xa2aca4u)));
    /* 0087f561: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087f563: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f566: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0087f56a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f56e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0087f570: jl 0x87f614 */ if ((fS!=fO)) goto L_0087f614;
L_0087f576:; BB(0x0087f576);
    /* 0087f576: lea edi, [eax - 6] */ r_edi = (u32)(r_eax+0xfffffffau);
    /* 0087f579: mov edx, ecx */ r_edx = r_ecx;
    /* 0087f57b: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0087f57f: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 0087f583: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
L_0087f587:; BB(0x0087f587);
    /* 0087f587: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f589: jge 0x87fbb8 */ if ((fS==fO)) goto L_0087fbb8;
L_0087f58f:; BB(0x0087f58f);
    /* 0087f58f: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f595: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f597: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087f59a: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087f59d: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f59f: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f5a0: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f5a2: jge 0x87fc14 */ if ((fS==fO)) goto L_0087fc14;
L_0087f5a8:; BB(0x0087f5a8);
    /* 0087f5a8: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f5ae: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f5b0: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087f5b3: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087f5b6: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f5b8: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f5b9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f5bb: jge 0x87fc03 */ if ((fS==fO)) goto L_0087fc03;
L_0087f5c1:; BB(0x0087f5c1);
    /* 0087f5c1: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f5c7: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f5c9: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087f5cc: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087f5cf: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f5d1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f5d2: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f5d4: jge 0x87fbf2 */ if ((fS==fO)) goto L_0087fbf2;
L_0087f5da:; BB(0x0087f5da);
    /* 0087f5da: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f5e0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f5e2: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087f5e5: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087f5e8: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f5ea: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f5eb: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f5ed: jge 0x87fbe1 */ if ((fS==fO)) goto L_0087fbe1;
L_0087f5f3:; BB(0x0087f5f3);
    /* 0087f5f3: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f5f9: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f5fb: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0087f5fe: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087f601: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f603: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087f604: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f606: jle 0x87f587 */ if ((fZ||fS!=fO)) goto L_0087f587;
L_0087f60c:; BB(0x0087f60c);
    /* 0087f60c: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087f610: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
L_0087f614:; BB(0x0087f614);
    /* 0087f614: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0087f618: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0087f61c: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
L_0087f620:; BB(0x0087f620);
    /* 0087f620: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f622: jge 0x87fbab */ if ((fS==fO)) goto L_0087fbab;
L_0087f628:; BB(0x0087f628);
    /* 0087f628: fld qword ptr [0x99a8c0] */ FPUSH(R_F64((u32)(0x99a8c0u)));
    /* 0087f62e: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087f630: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0087f633: fstp dword ptr [edx + edi*4] */ W_F32((u32)(r_edx+r_edi*4), ST(0)); FPOP();
    /* 0087f636: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087f638: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f639: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f63b: jl 0x87f620 */ if ((fS!=fO)) goto L_0087f620;
L_0087f63d:; BB(0x0087f63d);
    /* 0087f63d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087f63f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f641: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
L_0087f645:; BB(0x0087f645);
    /* 0087f645: mov ebp, esi */ r_ebp = r_esi;
    /* 0087f647: cmp esi, 0x57 */ {  u32 a = r_esi; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f64a: jl 0x87f4bc */ if ((fS!=fO)) goto L_0087f4bc;
L_0087f650:; BB(0x0087f650);
    /* 0087f650: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087f654: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0087f658: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 0087f65c: fld qword ptr [0x99a918] */ FPUSH(R_F64((u32)(0x99a918u)));
    /* 0087f662: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087f664: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087f666: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0087f66a: jle 0x87f95b */ if ((fZ||fS!=fO)) goto L_0087f95b;
L_0087f670:; BB(0x0087f670);
    /* 0087f670: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087f673: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 0087f677: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087f678: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0087f678, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0087f678, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0087f67a: mov ecx, eax */ r_ecx = r_eax;
    /* 0087f67c: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f67f: fld dword ptr [0x99abb8] */ FPUSH(R_F32((u32)(0x99abb8u)));
    /* 0087f685: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0087f689: fld qword ptr [0x99a8d8] */ FPUSH(R_F64((u32)(0x99a8d8u)));
    /* 0087f68f: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f692: fld qword ptr [0x99a8d0] */ FPUSH(R_F64((u32)(0x99a8d0u)));
    /* 0087f698: fld dword ptr [0x99abb4] */ FPUSH(R_F32((u32)(0x99abb4u)));
    /* 0087f69e: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 0087f6a2: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 0087f6a6: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 0087f6aa: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0087f6ae: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0087f6b2: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0087f6b6: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0087f6ba: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 0087f6be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f6c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f6c2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f6c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f6c6: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087f6c8:; BB(0x0087f6c8);
    /* 0087f6c8: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0087f6cc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f6d0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f6d4: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0087f6d8: fld dword ptr [0x99abbc] */ FPUSH(R_F32((u32)(0x99abbcu)));
    /* 0087f6de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f6e0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f6e3: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f6e8u); f_0084d1fc();
    /* 0087f6e8: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0087f6ec: mov eax, ebp */ r_eax = r_ebp;
    /* 0087f6ee: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f6f1: imul eax, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x64u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f6f6: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f6fa: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f6fe: fmul dword ptr [0x99abb8] */ ST(0) = ST(0) * R_F32((u32)(0x99abb8u));
    /* 0087f704: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f707: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f70cu); f_0084d1fc();
    /* 0087f70c: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0087f710: mov edi, dword ptr [edi + 0x78] */ r_edi = R32((u32)(r_edi+0x78u));
    /* 0087f713: fld qword ptr [esp + 0x58] */ FPUSH(R_F64((u32)(r_esp+0x58u)));
    /* 0087f717: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 0087f71a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f71c: fmul qword ptr [0x99a8d8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d8u));
    /* 0087f722: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f724: fmul qword ptr [0x99a8d0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d0u));
    /* 0087f72a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f72c: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0087f730: fmul dword ptr [0x99abb4] */ ST(0) = ST(0) * R_F32((u32)(0x99abb4u));
    /* 0087f736: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f738: fstp qword ptr [esp + 0x58] */ W_F64((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0087f73c: jge 0x87f855 */ if ((fS==fO)) goto L_0087f855;
L_0087f742:; BB(0x0087f742);
    /* 0087f742: mov eax, esi */ r_eax = r_esi;
    /* 0087f744: imul eax, dword ptr [esp + 0x4c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x4cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f749: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f74d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f751: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0087f755: fld dword ptr [0x99abbc] */ FPUSH(R_F32((u32)(0x99abbcu)));
    /* 0087f75b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f75d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f760: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f765u); f_0084d1fc();
    /* 0087f765: fstp qword ptr [esp + 0x70] */ W_F64((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0087f769: mov eax, esi */ r_eax = r_esi;
    /* 0087f76b: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f76e: imul eax, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x64u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f773: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087f777: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f77b: fmul dword ptr [0x99abb8] */ ST(0) = ST(0) * R_F32((u32)(0x99abb8u));
    /* 0087f781: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f784: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f789u); f_0084d1fc();
    /* 0087f789: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0087f78d: fld qword ptr [esp + 0x70] */ FPUSH(R_F64((u32)(r_esp+0x70u)));
    /* 0087f791: fmul qword ptr [0x99a8d8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d8u));
    /* 0087f797: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f799: fmul qword ptr [0x99a8d0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d0u));
    /* 0087f79f: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0087f7a3: fmul dword ptr [0x99abb4] */ ST(0) = ST(0) * R_F32((u32)(0x99abb4u));
    /* 0087f7a9: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087f7ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f7ad: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 0087f7b0: fsubr qword ptr [esp + 0x58] */ ST(0) = R_F64((u32)(r_esp+0x58u)) - ST(0);
    /* 0087f7b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f7b6: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0087f7b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f7ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f7bb: jae 0x87fc2c */ if (!fC) goto L_0087fc2c;
L_0087f7c1:; BB(0x0087f7c1);
    /* 0087f7c1: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f7c3: mov eax, esi */ r_eax = r_esi;
    /* 0087f7c5: imul eax, dword ptr [esp + 0x4c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x4cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f7ca: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0087f7ce: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0087f7d2: mov ebp, edi */ r_ebp = r_edi;
    /* 0087f7d4: mov edi, eax */ r_edi = r_eax;
L_0087f7d6:; BB(0x0087f7d6);
    /* 0087f7d6: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f7d7: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087f7d8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0087f7dc: add edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f7e0: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f7e2: jge 0x87fbda */ if ((fS==fO)) goto L_0087fbda;
L_0087f7e8:; BB(0x0087f7e8);
    /* 0087f7e8: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0087f7ec: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f7f0: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 0087f7f4: fld dword ptr [0x99abbc] */ FPUSH(R_F32((u32)(0x99abbcu)));
    /* 0087f7fa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f7fc: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f7ff: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f804u); f_0084d1fc();
    /* 0087f804: fstp qword ptr [esp + 0x78] */ W_F64((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0087f808: mov edx, esi */ r_edx = r_esi;
    /* 0087f80a: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f80d: imul edx, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x64u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f812: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0087f816: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f81a: fmul dword ptr [0x99abb8] */ ST(0) = ST(0) * R_F32((u32)(0x99abb8u));
    /* 0087f820: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f823: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f828u); f_0084d1fc();
    /* 0087f828: fld qword ptr [esp + 0x78] */ FPUSH(R_F64((u32)(r_esp+0x78u)));
    /* 0087f82c: fmul qword ptr [0x99a8d8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d8u));
    /* 0087f832: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f834: fmul qword ptr [0x99a8d0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d0u));
    /* 0087f83a: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0087f83e: fmul dword ptr [0x99abb4] */ ST(0) = ST(0) * R_F32((u32)(0x99abb4u));
    /* 0087f844: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0087f846: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f848: fcomp dword ptr [esp + 0x70] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x70u))); FPOP();
    /* 0087f84c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f84e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f84f: jb 0x87f7d6 */ if (fC) goto L_0087f7d6;
L_0087f851:; BB(0x0087f851);
    /* 0087f851: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
L_0087f855:; BB(0x0087f855);
    /* 0087f855: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0087f859: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0087f85d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f85f: jg 0x87f91c */ if ((!fZ&&fS==fO)) goto L_0087f91c;
L_0087f865:; BB(0x0087f865);
    /* 0087f865: mov eax, ebp */ r_eax = r_ebp;
    /* 0087f867: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0087f86b: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 0087f86f: add eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087f872: imul edi, dword ptr [esp + 0x4c] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x4cu)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f877: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0087f87b: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 0087f87f: mov ebp, eax */ r_ebp = r_eax;
    /* 0087f881: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_0087f885:; BB(0x0087f885);
    /* 0087f885: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f887: jl 0x87f8ff */ if ((fS!=fO)) goto L_0087f8ff;
L_0087f889:; BB(0x0087f889);
    /* 0087f889: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0087f88d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f891: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 0087f895: fld dword ptr [0x99abbc] */ FPUSH(R_F32((u32)(0x99abbcu)));
    /* 0087f89b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f89d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f8a0: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f8a5u); f_0084d1fc();
    /* 0087f8a5: fstp qword ptr [esp + 0x78] */ W_F64((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 0087f8a9: mov edx, esi */ r_edx = r_esi;
    /* 0087f8ab: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f8ae: imul edx, dword ptr [esp + 0x64] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x64u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087f8b3: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0087f8b7: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f8bb: fmul dword ptr [0x99abb8] */ ST(0) = ST(0) * R_F32((u32)(0x99abb8u));
    /* 0087f8c1: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f8c4: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x87f8c9u); f_0084d1fc();
    /* 0087f8c9: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0087f8cd: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 0087f8d1: fmul dword ptr [0x99abb4] */ ST(0) = ST(0) * R_F32((u32)(0x99abb4u));
    /* 0087f8d7: fld qword ptr [esp + 0x78] */ FPUSH(R_F64((u32)(r_esp+0x78u)));
    /* 0087f8db: fmul qword ptr [0x99a8d8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d8u));
    /* 0087f8e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f8e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087f8e5: fmul qword ptr [0x99a8d0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8d0u));
    /* 0087f8eb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087f8ed: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 0087f8f0: fadd qword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x58u));
    /* 0087f8f4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0087f8f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087f8f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087f8f9: jbe 0x87fbc9 */ if ((fC||fZ)) goto L_0087fbc9;
L_0087f8ff:; BB(0x0087f8ff);
    /* 0087f8ff: add edi, dword ptr [esp + 0x4c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087f903: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087f904: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0087f908: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f90a: jle 0x87f885 */ if ((fZ||fS!=fO)) goto L_0087f885;
L_0087f910:; BB(0x0087f910);
    /* 0087f910: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0087f914: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0087f918: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
L_0087f91c:; BB(0x0087f91c);
    /* 0087f91c: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 0087f91f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087f922: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0087f926: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 0087f92a: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 0087f92e: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0087f931: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 0087f934: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0087f938: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087f939: add eax, dword ptr [esp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087f93d: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 0087f941: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0087f945: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f947: jl 0x87f6c8 */ if ((fS!=fO)) goto L_0087f6c8;
L_0087f94d:; BB(0x0087f94d);
    /* 0087f94d: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087f951: mov esi, eax */ r_esi = r_eax;
    /* 0087f953: mov edi, ecx */ r_edi = r_ecx;
    /* 0087f955: fld qword ptr [0x99a918] */ FPUSH(R_F64((u32)(0x99a918u)));
L_0087f95b:; BB(0x0087f95b);
    /* 0087f95b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087f95d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087f95f: jle 0x87fa35 */ if ((fZ||fS!=fO)) goto L_0087fa35;
L_0087f965:; BB(0x0087f965);
    /* 0087f965: fld dword ptr [0x99abc0] */ FPUSH(R_F32((u32)(0x99abc0u)));
    /* 0087f96b: fld qword ptr [0x99a908] */ FPUSH(R_F64((u32)(0x99a908u)));
    /* 0087f971: fld qword ptr [0x99a900] */ FPUSH(R_F64((u32)(0x99a900u)));
    /* 0087f977: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 0087f97b: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0087f97f: mov ebp, eax */ r_ebp = r_eax;
    /* 0087f981: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f983: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087f987: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087f989:; BB(0x0087f989);
    /* 0087f989: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0087f98d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f991: fadd dword ptr [0x99abc0] */ ST(0) = ST(0) + R_F32((u32)(0x99abc0u));
    /* 0087f997: fmul qword ptr [0x99a918] */ ST(0) = ST(0) * R_F64((u32)(0x99a918u));
    /* 0087f99d: fmul qword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x38u));
    /* 0087f9a1: fdiv qword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x30u));
    /* 0087f9a5: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087f9a8: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87f9adu); f_0084d1ac();
    /* 0087f9ad: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0087f9b0: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0087f9b1: fmul qword ptr [0x99a900] */ ST(0) = ST(0) * R_F64((u32)(0x99a900u));
    /* 0087f9b7: mov edx, 1 */ r_edx = 0x1u;
    /* 0087f9bc: fadd qword ptr [0x99a908] */ ST(0) = ST(0) + R_F64((u32)(0x99a908u));
    /* 0087f9c2: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0087f9c4: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0087f9c8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087f9cc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087f9ce: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087f9d4: fstp qword ptr [esp + 0x18] */ W_F64((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0087f9d8: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 0087f9dc: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0087f9e0: mov ecx, edx */ r_ecx = r_edx;
    /* 0087f9e2: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087f9e5: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f9eb: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087f9f1: jle 0x87fa14 */ if ((fZ||fS!=fO)) goto L_0087fa14;
L_0087f9f3:; BB(0x0087f9f3);
    /* 0087f9f3: mov eax, edx */ r_eax = r_edx;
    /* 0087f9f5: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f9f7: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087f9fd: shld eax, esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 b = r_esi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_eax = r; } }
    /* 0087fa01: or eax, 0x80000000 */ {  u32 a = r_eax; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087fa06: shr eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087fa08: mov ecx, eax */ r_ecx = r_eax;
    /* 0087fa0a: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087fa0c: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fa0f: cmovge ecx, eax */ if ((fS==fO)) { r_ecx = r_eax; }
    /* 0087fa12: jmp 0x87fa16 */ goto L_0087fa16;
L_0087fa14:; BB(0x0087fa14);
    /* 0087fa14: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087fa16:; BB(0x0087fa16);
    /* 0087fa16: mov edx, dword ptr [edi + 0x14] */ r_edx = R32((u32)(r_edi+0x14u));
    /* 0087fa19: mov dword ptr [edx + ebp*4], ecx */ W32((u32)(r_edx+r_ebp*4), r_ecx);
    /* 0087fa1c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087fa1d: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 0087fa21: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fa23: jl 0x87f989 */ if ((fS!=fO)) goto L_0087f989;
L_0087fa29:; BB(0x0087fa29);
    /* 0087fa29: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 0087fa2d: mov esi, ecx */ r_esi = r_ecx;
    /* 0087fa2f: fld qword ptr [0x99a918] */ FPUSH(R_F64((u32)(0x99a918u)));
L_0087fa35:; BB(0x0087fa35);
    /* 0087fa35: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0087fa39: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 0087fa3c: fmul qword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x38u));
    /* 0087fa40: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0087fa43: fdiv qword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x30u));
    /* 0087fa47: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0087fa4b: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 0087fa4e: mov edx, esi */ r_edx = r_esi;
    /* 0087fa50: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 0087fa54: call 0x87ca38 */ r_esp -= 4; W32(r_esp, 0x87fa59u); f_0087ca38();
    /* 0087fa59: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0087fa5c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0087fa5e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87fa63u); f_00859c55();
    /* 0087fa63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087fa64: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0087fa67: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087fa69: mov dword ptr [esp + 0x40], esi */ W32((u32)(r_esp+0x40u), r_esi);
    /* 0087fa6d: mov esi, ebp */ r_esi = r_ebp;
    /* 0087fa6f: mov ebp, eax */ r_ebp = r_eax;
L_0087fa71:; BB(0x0087fa71);
    /* 0087fa71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fa72: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87fa77u); f_00859c55();
    /* 0087fa77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087fa78: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0087fa7b: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 0087fa7e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087fa7f: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fa82: jl 0x87fa71 */ if ((fS!=fO)) goto L_0087fa71;
L_0087fa84:; BB(0x0087fa84);
    /* 0087fa84: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 0087fa88: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0087fa8a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087fa8c: jle 0x87fb9e */ if ((fZ||fS!=fO)) goto L_0087fb9e;
L_0087fa92:; BB(0x0087fa92);
    /* 0087fa92: fld qword ptr [0x99a920] */ FPUSH(R_F64((u32)(0x99a920u)));
    /* 0087fa98: fld qword ptr [0x99a918] */ FPUSH(R_F64((u32)(0x99a918u)));
    /* 0087fa9e: fld qword ptr [esp + 0x30] */ FPUSH(R_F64((u32)(r_esp+0x30u)));
    /* 0087faa2: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0087faa4: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0087faa8: fld qword ptr [0x99a900] */ FPUSH(R_F64((u32)(0x99a900u)));
    /* 0087faae: fld qword ptr [0x99a8f8] */ FPUSH(R_F64((u32)(0x99a8f8u)));
    /* 0087fab4: fld dword ptr [0x99abb0] */ FPUSH(R_F32((u32)(0x99abb0u)));
    /* 0087faba: fld dword ptr [0x99abac] */ FPUSH(R_F32((u32)(0x99abacu)));
    /* 0087fac0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087faca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087facc:; BB(0x0087facc);
    /* 0087facc: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0087fad0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087fad4: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087fada: fmul qword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x38u));
    /* 0087fade: fdiv qword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x30u));
    /* 0087fae2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fae5: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87faeau); f_0084d1ac();
    /* 0087faea: fmul qword ptr [0x99a900] */ ST(0) = ST(0) * R_F64((u32)(0x99a900u));
    /* 0087faf0: fsub qword ptr [0x99a8f8] */ ST(0) = ST(0) - R_F64((u32)(0x99a8f8u));
    /* 0087faf6: fmul qword ptr [0x99a920] */ ST(0) = ST(0) * R_F64((u32)(0x99a920u));
    /* 0087fafc: fld dword ptr [0x99abb0] */ FPUSH(R_F32((u32)(0x99abb0u)));
    /* 0087fb02: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087fb04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087fb06: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087fb07: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 0087fb09: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fb0b: fld dword ptr [0x99abac] */ FPUSH(R_F32((u32)(0x99abacu)));
    /* 0087fb11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087fb13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087fb15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087fb16: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb19: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087fb1b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fb1d: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0087fb21: cvttss2si ecx, dword ptr [esp + 0x18] */ { XMM s; s.d[0] = R32((u32)(r_esp+0x18u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; double v = (double)s.fs[0]; double r = trunc(v); r_ecx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0087fb27: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0087fb2b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087fb2f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087fb31: fld qword ptr [0x99a8c8] */ FPUSH(R_F64((u32)(0x99a8c8u)));
    /* 0087fb37: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087fb39: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 0087fb40: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087fb42: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 0087fb49: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087fb4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb4d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb50: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0087fb52: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb55: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb58: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 0087fb5f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087fb61: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 0087fb68: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087fb6a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb6c: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb6f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0087fb72: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb75: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb78: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 0087fb7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087fb81: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 0087fb88: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087fb8a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb8c: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb8f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0087fb92: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb95: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087fb96: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fb98: jl 0x87facc */ if ((fS!=fO)) goto L_0087facc;
L_0087fb9e:; BB(0x0087fb9e);
    /* 0087fb9e: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087fba4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087fba5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087fba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087fba7: mov esp, ebx */ r_esp = r_ebx;
    /* 0087fba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087fbaa: ret  */ FN_RET(0x0087f1ec); r_esp += 4; return;
L_0087fbab:; BB(0x0087fbab);
    /* 0087fbab: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fbad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fbaf: mov dword ptr [esp + 0x64], edi */ W32((u32)(r_esp+0x64u), r_edi);
    /* 0087fbb3: jmp 0x87f645 */ goto L_0087f645;
L_0087fbb8:; BB(0x0087fbb8);
    /* 0087fbb8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fbba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fbbc: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087fbc0: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0087fbc4: jmp 0x87f645 */ goto L_0087f645;
L_0087fbc9:; BB(0x0087fbc9);
    /* 0087fbc9: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 0087fbcd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0087fbd1: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0087fbd5: jmp 0x87f91c */ goto L_0087f91c;
L_0087fbda:; BB(0x0087fbda);
    /* 0087fbda: mov ebp, edx */ r_ebp = r_edx;
    /* 0087fbdc: jmp 0x87f855 */ goto L_0087f855;
L_0087fbe1:; BB(0x0087fbe1);
    /* 0087fbe1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fbe3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fbe5: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087fbe9: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0087fbed: jmp 0x87f645 */ goto L_0087f645;
L_0087fbf2:; BB(0x0087fbf2);
    /* 0087fbf2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fbf4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fbf6: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087fbfa: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0087fbfe: jmp 0x87f645 */ goto L_0087f645;
L_0087fc03:; BB(0x0087fc03);
    /* 0087fc03: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fc05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fc07: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087fc0b: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0087fc0f: jmp 0x87f645 */ goto L_0087f645;
L_0087fc14:; BB(0x0087fc14);
    /* 0087fc14: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fc16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fc18: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 0087fc1c: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0087fc20: jmp 0x87f645 */ goto L_0087f645;
L_0087fc25:; BB(0x0087fc25);
    /* 0087fc25: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fc27: jmp 0x87f645 */ goto L_0087f645;
L_0087fc2c:; BB(0x0087fc2c);
    /* 0087fc2c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fc2e: jmp 0x87f855 */ goto L_0087f855;
L_0087fc34:; BB(0x0087fc34);
    /* 0087fc34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087fc35: mov ebx, esp */ r_ebx = r_esp;
    /* 0087fc37: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087fc3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fc3b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087fc3d: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087fc43: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087fc46: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087fc49: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0087fc4d: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 0087fc50: mov ebp, dword ptr [ebx + 0x14] */ r_ebp = R32((u32)(r_ebx+0x14u));
    /* 0087fc53: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0087fc56: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 0087fc5a: mov eax, 0xffffff9d */ r_eax = 0xffffff9du;
    /* 0087fc5f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 0087fc63: mov eax, 1 */ r_eax = 0x1u;
    /* 0087fc68: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0087fc6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087fc6e: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0087fc70: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0087fc73: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0087fc76: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0087fc79: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0087fc7c: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0087fc7f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0087fc82: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0087fc85: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0087fc88: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0087fc8b: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0087fc8e: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0087fc91: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0087fc93: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 0087fc96: fild dword ptr [esi] */ FPUSH((long double)(i32)R32((u32)(r_esi)));
    /* 0087fc98: fmul dword ptr [0x99aba8] */ ST(0) = ST(0) * R_F32((u32)(0x99aba8u));
    /* 0087fc9e: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fca1: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87fca6u); f_0084d1ac();
    /* 0087fca6: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0087fcaa: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0087fcaf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087fcb1: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87fcb6u); f_0084d1ac();
    /* 0087fcb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087fcb9: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 0087fcbf: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 0087fcc3: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 0087fcc5: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087fcc7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087fcc9: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0087fccd: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0087fcd2: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087fcd7: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087fcdc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087fce0: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0087fce4: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0087fce6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0087fcea: fadd qword ptr [0x99a8a8] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a8u));
    /* 0087fcf0: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0087fcf4: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0087fcf9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087fcfe: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087fd02: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0087fd06: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087fd0a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0087fd0e: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0087fd12: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0087fd16: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0087fd19: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 0087fd1d: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0087fd21: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fd25: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0087fd29: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0087fd2d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fd31: fst qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0));
    /* 0087fd35: fld dword ptr [0x99aba4] */ FPUSH(R_F32((u32)(0x99aba4u)));
    /* 0087fd3b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087fd3d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087fd3f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087fd41: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0087fd43: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fd46: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87fd4bu); f_0084d1ac();
    /* 0087fd4b: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0087fd4f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0087fd50: mov eax, 1 */ r_eax = 0x1u;
    /* 0087fd55: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0087fd57: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0087fd5b: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fd5f: fst qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0));
    /* 0087fd63: fild dword ptr [esi] */ FPUSH((long double)(i32)R32((u32)(r_esi)));
    /* 0087fd65: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087fd67: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 0087fd6d: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0087fd73: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087fd75: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087fd77: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0087fd7b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0087fd80: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087fd85: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087fd89: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0087fd8d: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087fd91: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0087fd95: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0087fd99: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 0087fd9c: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0087fda0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fda4: fadd dword ptr [0x99aba4] */ ST(0) = ST(0) + R_F32((u32)(0x99aba4u));
    /* 0087fdaa: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0087fdae: fmul qword ptr [0x99a8b0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b0u));
    /* 0087fdb4: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0087fdb8: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fdbb: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87fdc0u); f_0084d1ac();
    /* 0087fdc0: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 0087fdc6: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0087fdcc: fmul qword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x60u));
    /* 0087fdd0: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 0087fdd6: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0087fdda: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0087fddf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087fde4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087fde8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0087fdec: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087fdf0: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0087fdf4: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0087fdf8: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087fdfa: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087fdfb: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0087fdfe: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 0087fe02: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087fe04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fe05: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87fe0au); f_00859c55();
    /* 0087fe0a: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0087fe0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fe0e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87fe13u); f_00859c55();
    /* 0087fe13: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0087fe16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087fe17: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x87fe1cu); f_00859c55();
    /* 0087fe1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087fe1f: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0087fe22: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0087fe26: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0087fe29: mov dword ptr [edi], ebp */ W32((u32)(r_edi), r_ebp);
    /* 0087fe2b: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 0087fe2f: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 0087fe32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087fe34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087fe36: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 0087fe3c: fld qword ptr [0x99a890] */ FPUSH(R_F64((u32)(0x99a890u)));
    /* 0087fe42: fld qword ptr [0x99a888] */ FPUSH(R_F64((u32)(0x99a888u)));
    /* 0087fe48: fld qword ptr [0x99a880] */ FPUSH(R_F64((u32)(0x99a880u)));
    /* 0087fe4e: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 0087fe52: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fe56: fstp qword ptr [esp + 0x40] */ W_F64((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0087fe5a: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0087fe5e: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0087fe62: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 0087fe66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fe68: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fe6a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fe6c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fe6e: mov ebp, eax */ r_ebp = r_eax;
    /* 0087fe70: mov esi, edx */ r_esi = r_edx;
L_0087fe72:; BB(0x0087fe72);
    /* 0087fe72: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 0087fe75: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0087fe79: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fe7d: fmul qword ptr [0x99a888] */ ST(0) = ST(0) * R_F64((u32)(0x99a888u));
    /* 0087fe83: fadd qword ptr [0x99a890] */ ST(0) = ST(0) + R_F64((u32)(0x99a890u));
    /* 0087fe89: fmul qword ptr [0x99a880] */ ST(0) = ST(0) * R_F64((u32)(0x99a880u));
    /* 0087fe8f: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fe92: call 0x8c9b28 */ r_esp -= 4; W32(r_esp, 0x87fe97u); f_008c9b28();
    /* 0087fe97: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0087fe99: fmul qword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x48u));
    /* 0087fe9d: fdiv qword ptr [esp + 0x40] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x40u));
    /* 0087fea1: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 0087fea7: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0087feab: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0087feb0: and eax, 0xfffff3ff */ {  u32 a = r_eax; u32 b = 0xfffff3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0087feb5: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087feba: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0087febe: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0087fec2: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0087fec6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0087feca: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 0087fece: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0087fed1: fld dword ptr [esi*4 + 0xa2aca0] */ FPUSH(R_F32((u32)(r_esi*4+0xa2aca0u)));
    /* 0087fed8: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087feda: jge 0x88059e */ if ((fS==fO)) goto L_0088059e;
L_0087fee0:; BB(0x0087fee0);
    /* 0087fee0: mov edx, eax */ r_edx = r_eax;
    /* 0087fee2: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087fee4: fld dword ptr [ecx*2 + 0xa2aca4] */ FPUSH(R_F32((u32)(r_ecx*2+0xa2aca4u)));
    /* 0087feeb: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087feed: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0087fef1: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0087fef5: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0087fef7: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fefa: jl 0x87ff98 */ if ((fS!=fO)) goto L_0087ff98;
L_0087ff00:; BB(0x0087ff00);
    /* 0087ff00: lea esi, [eax - 6] */ r_esi = (u32)(r_eax+0xfffffffau);
    /* 0087ff03: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 0087ff07: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 0087ff0b: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
L_0087ff0f:; BB(0x0087ff0f);
    /* 0087ff0f: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff11: jge 0x880545 */ if ((fS==fO)) goto L_00880545;
L_0087ff17:; BB(0x0087ff17);
    /* 0087ff17: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ff1d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ff1f: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0087ff22: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 0087ff25: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ff27: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ff28: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff2a: jge 0x880591 */ if ((fS==fO)) goto L_00880591;
L_0087ff30:; BB(0x0087ff30);
    /* 0087ff30: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ff36: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ff38: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0087ff3b: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 0087ff3e: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ff40: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ff41: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff43: jge 0x880584 */ if ((fS==fO)) goto L_00880584;
L_0087ff49:; BB(0x0087ff49);
    /* 0087ff49: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ff4f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ff51: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0087ff54: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 0087ff57: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ff59: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ff5a: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff5c: jge 0x880577 */ if ((fS==fO)) goto L_00880577;
L_0087ff62:; BB(0x0087ff62);
    /* 0087ff62: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ff68: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ff6a: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0087ff6d: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 0087ff70: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ff72: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ff73: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff75: jge 0x88056a */ if ((fS==fO)) goto L_0088056a;
L_0087ff7b:; BB(0x0087ff7b);
    /* 0087ff7b: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ff81: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ff83: mov edi, dword ptr [ecx + 0x10] */ r_edi = R32((u32)(r_ecx+0x10u));
    /* 0087ff86: fstp dword ptr [edi + ebp*4] */ W_F32((u32)(r_edi+r_ebp*4), ST(0)); FPOP();
    /* 0087ff89: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ff8b: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ff8c: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ff8e: jle 0x87ff0f */ if ((fZ||fS!=fO)) goto L_0087ff0f;
L_0087ff94:; BB(0x0087ff94);
    /* 0087ff94: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
L_0087ff98:; BB(0x0087ff98);
    /* 0087ff98: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0087ff9c: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
L_0087ffa0:; BB(0x0087ffa0);
    /* 0087ffa0: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ffa2: jge 0x88053c */ if ((fS==fO)) goto L_0088053c;
L_0087ffa8:; BB(0x0087ffa8);
    /* 0087ffa8: fld qword ptr [0x99a860] */ FPUSH(R_F64((u32)(0x99a860u)));
    /* 0087ffae: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087ffb0: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0087ffb3: fstp dword ptr [edx + ebp*4] */ W_F32((u32)(r_edx+r_ebp*4), ST(0)); FPOP();
    /* 0087ffb6: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0087ffb8: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087ffb9: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ffbb: jl 0x87ffa0 */ if ((fS!=fO)) goto L_0087ffa0;
L_0087ffbd:; BB(0x0087ffbd);
    /* 0087ffbd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087ffbf: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087ffc1:; BB(0x0087ffc1);
    /* 0087ffc1: mov esi, edi */ r_esi = r_edi;
    /* 0087ffc3: cmp edi, 0x57 */ {  u32 a = r_edi; u32 b = 0x57u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087ffc6: jl 0x87fe72 */ if ((fS!=fO)) goto L_0087fe72;
L_0087ffcc:; BB(0x0087ffcc);
    /* 0087ffcc: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0087ffd0: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 0087ffd4: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0087ffd8: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 0087ffde: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087ffe0: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0087ffe4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087ffe6: jle 0x880304 */ if ((fZ||fS!=fO)) goto L_00880304;
L_0087ffec:; BB(0x0087ffec);
    /* 0087ffec: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 0087fff0: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0087fff4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087fff5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0087fff5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0087fff5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0087fff7: mov ecx, eax */ r_ecx = r_eax;
    /* 0087fff9: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0087fffc: fld dword ptr [0x99ab9c] */ FPUSH(R_F32((u32)(0x99ab9cu)));
    /* 00880002: fld qword ptr [0x99a878] */ FPUSH(R_F64((u32)(0x99a878u)));
    /* 00880008: fld qword ptr [0x99a870] */ FPUSH(R_F64((u32)(0x99a870u)));
    /* 0088000e: fld dword ptr [0x99ab98] */ FPUSH(R_F32((u32)(0x99ab98u)));
    /* 00880014: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00880018: imul edx, eax */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_eax; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088001b: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 0088001f: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00880023: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 00880027: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 0088002b: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 0088002f: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00880033: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880035: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880037: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880039: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088003d: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 00880041: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00880045:; BB(0x00880045);
    /* 00880045: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 00880049: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088004d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880051: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880058: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088005e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880060: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880063: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880068u); f_0084d1fc();
    /* 00880068: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0088006c: mov eax, ebp */ r_eax = r_ebp;
    /* 0088006e: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880071: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880076: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088007a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088007e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880084: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880087: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88008cu); f_0084d1fc();
    /* 0088008c: fld qword ptr [esp + 0x60] */ FPUSH(R_F64((u32)(r_esp+0x60u)));
    /* 00880090: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880096: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00880098: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 0088009e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800a0: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 008800a7: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008800ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008800af: fstp qword ptr [esp + 0x60] */ W_F64((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 008800b3: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 008800b7: mov edi, dword ptr [edi + 0x78] */ r_edi = R32((u32)(r_edi+0x78u));
    /* 008800ba: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 008800bd: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008800bf: jge 0x8801ee */ if ((fS==fO)) goto L_008801ee;
L_008800c5:; BB(0x008800c5);
    /* 008800c5: mov eax, esi */ r_eax = r_esi;
    /* 008800c7: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800cc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800d0: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008800d4: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 008800d8: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 008800de: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 008800e0: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008800e3: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8800e8u); f_0084d1fc();
    /* 008800e8: fstp qword ptr [esp + 0x80] */ W_F64((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 008800ef: mov eax, esi */ r_eax = r_esi;
    /* 008800f1: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f4: imul eax, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x68u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008800f9: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 008800fd: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880101: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880107: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088010a: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88010fu); f_0084d1fc();
    /* 0088010f: fld qword ptr [esp + 0x80] */ FPUSH(R_F64((u32)(r_esp+0x80u)));
    /* 00880116: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 0088011c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088011e: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880124: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00880128: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 0088012e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00880130: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880132: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880136: fld dword ptr [edx + 0x70] */ FPUSH(R_F32((u32)(r_edx+0x70u)));
    /* 00880139: fsubr qword ptr [esp + 0x60] */ ST(0) = R_F64((u32)(r_esp+0x60u)) - ST(0);
    /* 0088013d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088013f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00880141: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880143: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880144: jae 0x8805a5 */ if (!fC) goto L_008805a5;
L_0088014a:; BB(0x0088014a);
    /* 0088014a: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088014c: mov eax, esi */ r_eax = r_esi;
    /* 0088014e: imul eax, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x70u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880153: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880157: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0088015e: mov ebp, edi */ r_ebp = r_edi;
    /* 00880160: mov edi, eax */ r_edi = r_eax;
L_00880162:; BB(0x00880162);
    /* 00880162: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00880163: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00880167: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880168: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0088016c: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088016e: jge 0x880563 */ if ((fS==fO)) goto L_00880563;
L_00880174:; BB(0x00880174);
    /* 00880174: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00880178: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088017c: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00880180: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 00880186: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880188: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088018b: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880190u); f_0084d1fc();
    /* 00880190: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00880197: mov edx, esi */ r_edx = r_esi;
    /* 00880199: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088019c: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008801a1: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 008801a5: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 008801a9: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 008801af: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 008801b2: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x8801b7u); f_0084d1fc();
    /* 008801b7: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 008801be: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 008801c4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008801c6: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 008801cc: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008801d0: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 008801d6: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 008801d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008801da: fcomp dword ptr [esp + 0x80] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x80u))); FPOP();
    /* 008801e1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008801e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008801e4: jb 0x880162 */ if (fC) goto L_00880162;
L_008801ea:; BB(0x008801ea);
    /* 008801ea: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
L_008801ee:; BB(0x008801ee);
    /* 008801ee: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008801f2: mov eax, dword ptr [esp + 0x58] */ r_eax = R32((u32)(r_esp+0x58u));
    /* 008801f6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008801f8: jg 0x8802c5 */ if ((!fZ&&fS==fO)) goto L_008802c5;
L_008801fe:; BB(0x008801fe);
    /* 008801fe: mov eax, ebp */ r_eax = r_ebp;
    /* 00880200: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880204: add eax, dword ptr [edx + 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x7cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00880207: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 0088020b: imul edi, dword ptr [esp + 0x70] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_esp+0x70u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880210: mov dword ptr [esp + 0x5c], ebp */ W32((u32)(r_esp+0x5cu), r_ebp);
    /* 00880214: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 00880218: mov ebp, eax */ r_ebp = r_eax;
    /* 0088021a: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_0088021e:; BB(0x0088021e);
    /* 0088021e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880220: jl 0x8802a8 */ if ((fS!=fO)) goto L_008802a8;
L_00880226:; BB(0x00880226);
    /* 00880226: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 0088022a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088022e: fst dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0));
    /* 00880235: fld dword ptr [0x99aba0] */ FPUSH(R_F32((u32)(0x99aba0u)));
    /* 0088023b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088023d: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880240: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x880245u); f_0084d1fc();
    /* 00880245: fstp qword ptr [esp + 0x88] */ W_F64((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0088024c: mov edx, esi */ r_edx = r_esi;
    /* 0088024e: imul edx, edx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880251: imul edx, dword ptr [esp + 0x68] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x68u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00880256: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0088025a: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088025e: fmul dword ptr [0x99ab9c] */ ST(0) = ST(0) * R_F32((u32)(0x99ab9cu));
    /* 00880264: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00880267: call 0x84d1fc */ r_esp -= 4; W32(r_esp, 0x88026cu); f_0084d1fc();
    /* 0088026c: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 00880273: fmul dword ptr [0x99ab98] */ ST(0) = ST(0) * R_F32((u32)(0x99ab98u));
    /* 00880279: fld qword ptr [esp + 0x88] */ FPUSH(R_F64((u32)(r_esp+0x88u)));
    /* 00880280: fmul qword ptr [0x99a878] */ ST(0) = ST(0) * R_F64((u32)(0x99a878u));
    /* 00880286: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880288: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088028a: fmul qword ptr [0x99a870] */ ST(0) = ST(0) * R_F64((u32)(0x99a870u));
    /* 00880290: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00880292: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00880296: fld dword ptr [edx + 0x74] */ FPUSH(R_F32((u32)(r_edx+0x74u)));
    /* 00880299: fadd qword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F64((u32)(r_esp+0x60u));
    /* 0088029d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0088029f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008802a1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008802a2: jbe 0x880552 */ if ((fC||fZ)) goto L_00880552;
L_008802a8:; BB(0x008802a8);
    /* 008802a8: add edi, dword ptr [esp + 0x70] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008802ac: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008802ad: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008802b1: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802b3: jle 0x88021e */ if ((fZ||fS!=fO)) goto L_0088021e;
L_008802b9:; BB(0x008802b9);
    /* 008802b9: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 008802bd: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 008802c1: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_008802c5:; BB(0x008802c5);
    /* 008802c5: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 008802c8: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008802cb: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 008802cf: lea edi, [eax + edx - 1] */ r_edi = (u32)(r_eax+r_edx+0xffffffffu);
    /* 008802d3: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008802d7: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008802da: mov dword ptr [eax + ebp*4], edi */ W32((u32)(r_eax+r_ebp*4), r_edi);
    /* 008802dd: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 008802e1: add eax, dword ptr [esp + 0x70] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x70u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008802e5: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 008802e9: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008802ea: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 008802ee: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008802f0: jl 0x880045 */ if ((fS!=fO)) goto L_00880045;
L_008802f6:; BB(0x008802f6);
    /* 008802f6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008802fa: mov ebp, eax */ r_ebp = r_eax;
    /* 008802fc: mov edi, ecx */ r_edi = r_ecx;
    /* 008802fe: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
L_00880304:; BB(0x00880304);
    /* 00880304: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00880306: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880308: jle 0x8803b0 */ if ((fZ||fS!=fO)) goto L_008803b0;
L_0088030e:; BB(0x0088030e);
    /* 0088030e: fld dword ptr [0x99aba4] */ FPUSH(R_F32((u32)(0x99aba4u)));
    /* 00880314: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 0088031a: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 00880320: mov dword ptr [esp + 0x3c], esi */ W32((u32)(r_esp+0x3cu), r_esi);
    /* 00880324: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880328: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088032c: mov esi, eax */ r_esi = r_eax;
L_0088032e:; BB(0x0088032e);
    /* 0088032e: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880332: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880336: fadd dword ptr [0x99aba4] */ ST(0) = ST(0) + R_F32((u32)(0x99aba4u));
    /* 0088033c: fmul qword ptr [0x99a8b0] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b0u));
    /* 00880342: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880346: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088034a: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088034d: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880352u); f_0084d1ac();
    /* 00880352: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880358: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088035e: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00880361: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00880362: mov eax, 1 */ r_eax = 0x1u;
    /* 00880367: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00880369: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0088036d: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 00880371: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880373: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880379: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088037d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 00880382: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00880387: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0088038b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0088038f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00880393: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00880397: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0088039b: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 0088039e: mov dword ptr [eax + esi*4], ecx */ W32((u32)(r_eax+r_esi*4), r_ecx);
    /* 008803a1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008803a2: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803a4: jl 0x88032e */ if ((fS!=fO)) goto L_0088032e;
L_008803a6:; BB(0x008803a6);
    /* 008803a6: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 008803aa: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
L_008803b0:; BB(0x008803b0);
    /* 008803b0: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 008803b4: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 008803b7: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 008803bb: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 008803bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 008803c2: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 008803c6: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 008803c9: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008803cd: mov edx, ebp */ r_edx = r_ebp;
    /* 008803cf: call 0x87ca38 */ r_esp -= 4; W32(r_esp, 0x8803d4u); f_0087ca38();
    /* 008803d4: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008803d7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008803d9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803deu); f_00859c55();
    /* 008803de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803df: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 008803e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008803e4: mov dword ptr [esp + 0x50], ebp */ W32((u32)(r_esp+0x50u), r_ebp);
    /* 008803e8: mov ebp, eax */ r_ebp = r_eax;
L_008803ea:; BB(0x008803ea);
    /* 008803ea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008803eb: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8803f0u); f_00859c55();
    /* 008803f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008803f1: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008803f4: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 008803f7: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008803f8: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008803fb: jl 0x8803ea */ if ((fS!=fO)) goto L_008803ea;
L_008803fd:; BB(0x008803fd);
    /* 008803fd: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00880401: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00880403: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00880405: jle 0x88052f */ if ((fZ||fS!=fO)) goto L_0088052f;
L_0088040b:; BB(0x0088040b);
    /* 0088040b: fld qword ptr [0x99a8b8] */ FPUSH(R_F64((u32)(0x99a8b8u)));
    /* 00880411: fld qword ptr [0x99a8b0] */ FPUSH(R_F64((u32)(0x99a8b0u)));
    /* 00880417: fld qword ptr [esp + 0x48] */ FPUSH(R_F64((u32)(r_esp+0x48u)));
    /* 0088041b: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0088041d: fstp qword ptr [esp + 0x48] */ W_F64((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00880421: fld qword ptr [0x99a8a0] */ FPUSH(R_F64((u32)(0x99a8a0u)));
    /* 00880427: fld qword ptr [0x99a898] */ FPUSH(R_F64((u32)(0x99a898u)));
    /* 0088042d: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 00880433: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 00880439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088043f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880441: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880443: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00880445:; BB(0x00880445);
    /* 00880445: mov dword ptr [esp + 0x30], esi */ W32((u32)(r_esp+0x30u), r_esi);
    /* 00880449: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 0088044d: fadd qword ptr [0x99a8b0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8b0u));
    /* 00880453: fmul qword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x40u));
    /* 00880457: fdiv qword ptr [esp + 0x48] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x48u));
    /* 0088045b: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088045e: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x880463u); f_0084d1ac();
    /* 00880463: fmul qword ptr [0x99a898] */ ST(0) = ST(0) * R_F64((u32)(0x99a898u));
    /* 00880469: fadd qword ptr [0x99a8a0] */ ST(0) = ST(0) + R_F64((u32)(0x99a8a0u));
    /* 0088046f: fmul qword ptr [0x99a8b8] */ ST(0) = ST(0) * R_F64((u32)(0x99a8b8u));
    /* 00880475: fld dword ptr [0x99ab94] */ FPUSH(R_F32((u32)(0x99ab94u)));
    /* 0088047b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088047d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088047f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880480: jbe 0x880484 */ if ((fC||fZ)) goto L_00880484;
L_00880482:; BB(0x00880482);
    /* 00880482: fst st(1) */ ST(1) = ST(0);
L_00880484:; BB(0x00880484);
    /* 00880484: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880486: fld dword ptr [0x99ab90] */ FPUSH(R_F32((u32)(0x99ab90u)));
    /* 0088048c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0088048e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00880490: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00880491: ja 0x880495 */ if ((!fC&&!fZ)) goto L_00880495;
L_00880493:; BB(0x00880493);
    /* 00880493: fst st(1) */ ST(1) = ST(0);
L_00880495:; BB(0x00880495);
    /* 00880495: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880497: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0088049b: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 008804a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008804a5: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008804a9: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 008804ad: fist dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0)));
    /* 008804b1: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 008804b5: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008804b9: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 008804bd: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 008804bf: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804c2: fld qword ptr [0x99a868] */ FPUSH(R_F64((u32)(0x99a868u)));
    /* 008804c8: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 008804ca: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 008804d1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804d3: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 008804da: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804dc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804de: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 008804e1: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008804e3: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 008804e6: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008804e9: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 008804f0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008804f2: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 008804f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008804fb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008804fd: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880500: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00880503: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880506: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00880509: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 00880510: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00880512: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 00880519: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0088051b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088051d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 00880520: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00880523: fstp dword ptr [eax + esi*4] */ W_F32((u32)(r_eax+r_esi*4), ST(0)); FPOP();
    /* 00880526: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00880527: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00880529: jl 0x880445 */ if ((fS!=fO)) goto L_00880445;
L_0088052f:; BB(0x0088052f);
    /* 0088052f: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00880535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00880536: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00880537: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00880538: mov esp, ebx */ r_esp = r_ebx;
    /* 0088053a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088053b: ret  */ FN_RET(0x0087f1ec); r_esp += 4; return;
L_0088053c:; BB(0x0088053c);
    /* 0088053c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088053e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880540: jmp 0x87ffc1 */ goto L_0087ffc1;
L_00880545:; BB(0x00880545);
    /* 00880545: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00880547: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880549: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 0088054d: jmp 0x87ffc1 */ goto L_0087ffc1;
L_00880552:; BB(0x00880552);
    /* 00880552: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00880556: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 0088055a: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 0088055e: jmp 0x8802c5 */ goto L_008802c5;
L_00880563:; BB(0x00880563);
    /* 00880563: mov ebp, edx */ r_ebp = r_edx;
    /* 00880565: jmp 0x8801ee */ goto L_008801ee;
L_0088056a:; BB(0x0088056a);
    /* 0088056a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0088056c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088056e: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880572: jmp 0x87ffc1 */ goto L_0087ffc1;
L_00880577:; BB(0x00880577);
    /* 00880577: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00880579: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088057b: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 0088057f: jmp 0x87ffc1 */ goto L_0087ffc1;
L_00880584:; BB(0x00880584);
    /* 00880584: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00880586: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880588: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 0088058c: jmp 0x87ffc1 */ goto L_0087ffc1;
L_00880591:; BB(0x00880591);
    /* 00880591: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00880593: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00880595: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00880599: jmp 0x87ffc1 */ goto L_0087ffc1;
L_0088059e:; BB(0x0088059e);
    /* 0088059e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008805a0: jmp 0x87ffc1 */ goto L_0087ffc1;
L_008805a5:; BB(0x008805a5);
    /* 008805a5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008805a7: jmp 0x8801ee */ goto L_008801ee;
}

void f_0087fa9c(void)
{
    FN_ENTER(0x0087fa9c);
    /* 0087fa9c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087fa9d: add ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0087fa9f: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087faa0: and al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0087faa2: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0087faa4: fstp qword ptr [esp + 0x30] */ W_F64((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0087faa8: fld qword ptr [0x99a900] */ FPUSH(R_F64((u32)(0x99a900u)));
    /* 0087faae: fld qword ptr [0x99a8f8] */ FPUSH(R_F64((u32)(0x99a8f8u)));
    /* 0087fab4: fld dword ptr [0x99abb0] */ FPUSH(R_F32((u32)(0x99abb0u)));
    /* 0087faba: fld dword ptr [0x99abac] */ FPUSH(R_F32((u32)(0x99abacu)));
    /* 0087fac0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087fac8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087faca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087facc:; BB(0x0087facc);
    /* 0087facc: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0087fad0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087fad4: fadd qword ptr [0x99a918] */ ST(0) = ST(0) + R_F64((u32)(0x99a918u));
    /* 0087fada: fmul qword ptr [esp + 0x38] */ ST(0) = ST(0) * R_F64((u32)(r_esp+0x38u));
    /* 0087fade: fdiv qword ptr [esp + 0x30] */ ST(0) = ST(0) / R_F64((u32)(r_esp+0x30u));
    /* 0087fae2: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0087fae5: call 0x84d1ac */ r_esp -= 4; W32(r_esp, 0x87faeau); f_0084d1ac();
    /* 0087faea: fmul qword ptr [0x99a900] */ ST(0) = ST(0) * R_F64((u32)(0x99a900u));
    /* 0087faf0: fsub qword ptr [0x99a8f8] */ ST(0) = ST(0) - R_F64((u32)(0x99a8f8u));
    /* 0087faf6: fmul qword ptr [0x99a920] */ ST(0) = ST(0) * R_F64((u32)(0x99a920u));
    /* 0087fafc: fld dword ptr [0x99abb0] */ FPUSH(R_F32((u32)(0x99abb0u)));
    /* 0087fb02: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087fb04: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087fb06: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087fb07: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 0087fb09: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fb0b: fld dword ptr [0x99abac] */ FPUSH(R_F32((u32)(0x99abacu)));
    /* 0087fb11: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087fb13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087fb15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087fb16: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb19: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087fb1b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087fb1d: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0087fb21: cvttss2si ecx, dword ptr [esp + 0x18] */ { XMM s; s.d[0] = R32((u32)(r_esp+0x18u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; double v = (double)s.fs[0]; double r = trunc(v); r_ecx = (r >= -2147483648.0 && r < 2147483648.0) ? (u32)(i32)r : 0x80000000u; }
    /* 0087fb27: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0087fb2b: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0087fb2f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087fb31: fld qword ptr [0x99a8c8] */ FPUSH(R_F64((u32)(0x99a8c8u)));
    /* 0087fb37: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087fb39: fld dword ptr [eax + ecx*4 + 0x84] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x84u)));
    /* 0087fb40: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087fb42: fld dword ptr [eax + ecx*4 + 0x88] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x88u)));
    /* 0087fb49: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087fb4b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb4d: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb50: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0087fb52: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb55: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb58: fld dword ptr [eax + ecx*4 + 0xc8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xc8u)));
    /* 0087fb5f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087fb61: fld dword ptr [eax + ecx*4 + 0xcc] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0xccu)));
    /* 0087fb68: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087fb6a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb6c: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb6f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0087fb72: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb75: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0087fb78: fld dword ptr [eax + ecx*4 + 0x10c] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x10cu)));
    /* 0087fb7f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087fb81: fld dword ptr [eax + ecx*4 + 0x110] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x110u)));
    /* 0087fb88: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087fb8a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087fb8c: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0087fb8f: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0087fb92: fstp dword ptr [eax + ebp*4] */ W_F32((u32)(r_eax+r_ebp*4), ST(0)); FPOP();
    /* 0087fb95: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087fb96: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087fb98: jl 0x87facc */ if ((fS!=fO)) goto L_0087facc;
L_0087fb9e:; BB(0x0087fb9e);
    /* 0087fb9e: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087fba4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087fba5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087fba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087fba7: mov esp, ebx */ r_esp = r_ebx;
    /* 0087fba9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087fbaa: ret  */ FN_RET(0x0087fa9c); r_esp += 4; return;
}

