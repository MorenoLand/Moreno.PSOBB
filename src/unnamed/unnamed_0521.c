#include "protos.h"

void f_00521010(void) /* sub_521010 */
{
    FN_ENTER(0x00521010);
    /* 00521010: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521011: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521012: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00521014: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00521018: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0052101a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052101c: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x521022u); call_ind(t); }
    /* 00521022: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521024: je 0x52103b */ if (fZ) goto L_0052103b;
L_00521026:; BB(0x00521026);
    /* 00521026: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521027: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521029: call 0x52105c */ r_esp -= 4; W32(r_esp, 0x52102eu); f_0052105c();
    /* 0052102e: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00521031: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521037: je 0x521050 */ if (fZ) goto L_00521050;
L_00521039:; BB(0x00521039);
    /* 00521039: jmp 0x521043 */ goto L_00521043;
L_0052103b:; BB(0x0052103b);
    /* 0052103b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052103c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052103e: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x521043u); f_00521160();
L_00521043:; BB(0x00521043);
    /* 00521043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521044: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521046: call 0x520fa8 */ r_esp -= 4; W32(r_esp, 0x52104bu); f_00520fa8();
    /* 0052104b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052104c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052104d: ret 4 */ FN_RET(0x00521010); r_esp += 8; return;
L_00521050:; BB(0x00521050);
    /* 00521050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521051: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521053: call 0x521160 */ r_esp -= 4; W32(r_esp, 0x521058u); f_00521160();
    /* 00521058: jmp 0x521043 */ goto L_00521043;
}

void f_0052105c(void) /* sub_52105C */
{
    FN_ENTER(0x0052105c);
    /* 0052105c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052105d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052105e: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521061: mov esi, ecx */ r_esi = r_ecx;
    /* 00521063: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00521067: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00521069: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0052106f: mov eax, dword ptr [0xaae164] */ r_eax = R32((u32)(0xaae164u));
    /* 00521074: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 00521079: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0052107b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0052107d: jle 0x52115c */ if ((fZ||fS!=fO)) goto L_0052115c;
L_00521083:; BB(0x00521083);
    /* 00521083: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00521087: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521089: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0052108d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00521091: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521093: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00521097: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0052109a:; BB(0x0052109a);
    /* 0052109a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0052109e: mov edi, dword ptr [eax + ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_eax+r_ebx*4+0xaad720u));
    /* 005210a5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005210a8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210aa: je 0x52112d */ if (fZ) goto L_0052112d;
L_005210b0:; BB(0x005210b0);
    /* 005210b0: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005210b3: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210b8: jne 0x52112d */ if (!fZ) goto L_0052112d;
L_005210ba:; BB(0x005210ba);
    /* 005210ba: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210bc: je 0x5210df */ if (fZ) goto L_005210df;
L_005210be:; BB(0x005210be);
    /* 005210be: mov ecx, edi */ r_ecx = r_edi;
    /* 005210c0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5210c5u); f_008173b4();
    /* 005210c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210c7: je 0x5210df */ if (fZ) goto L_005210df;
L_005210c9:; BB(0x005210c9);
    /* 005210c9: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005210cc: test eax, 0x2040800 */ {  u32 a = r_eax; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210d1: mov edx, 0 */ r_edx = 0x0u;
    /* 005210d6: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005210d9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005210dd: jmp 0x5210e5 */ goto L_005210e5;
L_005210df:; BB(0x005210df);
    /* 005210df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005210e1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
L_005210e5:; BB(0x005210e5);
    /* 005210e5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005210e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005210eb: je 0x52112d */ if (fZ) goto L_0052112d;
L_005210ed:; BB(0x005210ed);
    /* 005210ed: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 005210f3: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005210f7: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005210fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005210fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005210fc: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x521101u); f_007a9180();
    /* 00521101: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00521105: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521108: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052110c: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00521110: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00521112: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00521113: jae 0x52112d */ if (!fC) goto L_0052112d;
L_00521115:; BB(0x00521115);
    /* 00521115: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0052111b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052111c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00521120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00521121: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x521126u); f_00780d3c();
    /* 00521126: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521129: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052112b: je 0x52114a */ if (fZ) goto L_0052114a;
L_0052112d:; BB(0x0052112d);
    /* 0052112d: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00521131: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521133: jl 0x52109a */ if ((fS!=fO)) goto L_0052109a;
L_00521139:; BB(0x00521139);
    /* 00521139: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0052113d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00521140:; BB(0x00521140);
    /* 00521140: mov eax, ecx */ r_eax = r_ecx;
    /* 00521142: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521145: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521146: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521147: ret 4 */ FN_RET(0x0052105c); r_esp += 8; return;
L_0052114a:; BB(0x0052114a);
    /* 0052114a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0052114e: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00521152: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00521156: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0052115a: jmp 0x52112d */ goto L_0052112d;
L_0052115c:; BB(0x0052115c);
    /* 0052115c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0052115e: jmp 0x521140 */ goto L_00521140;
}

void f_00521160(void) /* sub_521160 */
{
    FN_ENTER(0x00521160);
    /* 00521160: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521161: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521164: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00521166: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0052116a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0052116c: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00521171: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00521176: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00521178: jle 0x521233 */ if ((fZ||fS!=fO)) goto L_00521233;
L_0052117e:; BB(0x0052117e);
    /* 0052117e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00521182: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00521186: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0052118a: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0052118e: mov esi, eax */ r_esi = r_eax;
    /* 00521190: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00521194: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00521197:; BB(0x00521197);
    /* 00521197: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0052119e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211a0: je 0x5211c0 */ if (fZ) goto L_005211c0;
L_005211a2:; BB(0x005211a2);
    /* 005211a2: mov ecx, edi */ r_ecx = r_edi;
    /* 005211a4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5211a9u); f_008173b4();
    /* 005211a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211ab: je 0x5211c0 */ if (fZ) goto L_005211c0;
L_005211ad:; BB(0x005211ad);
    /* 005211ad: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 005211b0: test edx, 0x2040800 */ {  u32 a = r_edx; u32 b = 0x2040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211b6: mov edx, 0 */ r_edx = 0x0u;
    /* 005211bb: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 005211be: jmp 0x5211c2 */ goto L_005211c2;
L_005211c0:; BB(0x005211c0);
    /* 005211c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005211c2:; BB(0x005211c2);
    /* 005211c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005211c4: je 0x521202 */ if (fZ) goto L_00521202;
L_005211c6:; BB(0x005211c6);
    /* 005211c6: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 005211ca: lea ebp, [ebp + 0x300] */ r_ebp = (u32)(r_ebp+0x300u);
    /* 005211d0: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005211d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005211d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005211d5: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5211dau); f_007a9180();
    /* 005211da: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005211de: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005211e1: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005211e5: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 005211e9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005211eb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005211ec: jae 0x521202 */ if (!fC) goto L_00521202;
L_005211ee:; BB(0x005211ee);
    /* 005211ee: lea edx, [edi + 0x300] */ r_edx = (u32)(r_edi+0x300u);
    /* 005211f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005211f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005211f6: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x5211fbu); f_00780d3c();
    /* 005211fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005211fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521200: je 0x521221 */ if (fZ) goto L_00521221;
L_00521202:; BB(0x00521202);
    /* 00521202: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521205: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521207: jl 0x521197 */ if ((fS!=fO)) goto L_00521197;
L_00521209:; BB(0x00521209);
    /* 00521209: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0052120d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00521211: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00521215: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00521218:; BB(0x00521218);
    /* 00521218: mov eax, edx */ r_eax = r_edx;
    /* 0052121a: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052121d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052121e: ret 4 */ FN_RET(0x00521160); r_esp += 8; return;
L_00521221:; BB(0x00521221);
    /* 00521221: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00521225: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00521229: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0052122d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00521231: jmp 0x521202 */ goto L_00521202;
L_00521233:; BB(0x00521233);
    /* 00521233: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00521235: jmp 0x521218 */ goto L_00521218;
}

void f_00521238(void) /* sub_521238 */
{
    FN_ENTER(0x00521238);
    /* 00521238: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521239: mov esi, ecx */ r_esi = r_ecx;
    /* 0052123b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052123d: mov ecx, esi */ r_ecx = r_esi;
    /* 0052123f: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x521245u); call_ind(t); }
    /* 00521245: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521247: jne 0x521262 */ if (!fZ) goto L_00521262;
L_00521249:; BB(0x00521249);
    /* 00521249: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 00521250: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521255: jl 0x521262 */ if ((fS!=fO)) goto L_00521262;
L_00521257:; BB(0x00521257);
    /* 00521257: mov ecx, esi */ r_ecx = r_esi;
    /* 00521259: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x52125eu); f_00520f68();
    /* 0052125e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521261: ret  */ FN_RET(0x00521238); r_esp += 4; return;
L_00521262:; BB(0x00521262);
    /* 00521262: mov ecx, esi */ r_ecx = r_esi;
    /* 00521264: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x521269u); f_0052126c();
    /* 00521269: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052126a: ret  */ FN_RET(0x00521238); r_esp += 4; return;
}

void f_0052126c(void) /* sub_52126C */
{
    FN_ENTER(0x0052126c);
    /* 0052126c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052126d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052126f: mov eax, dword ptr [ebx + 0x3c0] */ r_eax = R32((u32)(r_ebx+0x3c0u));
    /* 00521275: cmp eax, dword ptr [ebx + 0x3c4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3c4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052127b: jl 0x52129f */ if ((fS!=fO)) goto L_0052129f;
L_0052127d:; BB(0x0052127d);
    /* 0052127d: push dword ptr [ebx + 0x398] */ { u32 v = R32((u32)(r_ebx+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521283: mov dword ptr [ebx + 0x3c0], 0 */ W32((u32)(r_ebx+0x3c0u), 0x0u);
    /* 0052128d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052128f: call 0x5212c8 */ r_esp -= 4; W32(r_esp, 0x521294u); f_005212c8();
    /* 00521294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521296: je 0x5212ba */ if (fZ) goto L_005212ba;
L_00521298:; BB(0x00521298);
    /* 00521298: mov eax, 1 */ r_eax = 0x1u;
    /* 0052129d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052129e: ret  */ FN_RET(0x0052126c); r_esp += 4; return;
L_0052129f:; BB(0x0052129f);
    /* 0052129f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005212a2: mov dword ptr [ebx + 0x3c0], eax */ W32((u32)(r_ebx+0x3c0u), r_eax);
    /* 005212a8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005212aa: call 0x520f04 */ r_esp -= 4; W32(r_esp, 0x5212afu); f_00520f04();
    /* 005212af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005212b1: je 0x5212ba */ if (fZ) goto L_005212ba;
L_005212b3:; BB(0x005212b3);
    /* 005212b3: mov eax, 1 */ r_eax = 0x1u;
    /* 005212b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005212b9: ret  */ FN_RET(0x0052126c); r_esp += 4; return;
L_005212ba:; BB(0x005212ba);
    /* 005212ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005212bc: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5212c1u); f_00520f68();
    /* 005212c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005212c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005212c4: ret  */ FN_RET(0x0052126c); r_esp += 4; return;
}

void f_005212c8(void) /* sub_5212C8 */
{
    FN_ENTER(0x005212c8);
    /* 005212c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005212cb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005212cf: add ecx, 0x300 */ {  u32 a = r_ecx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005212d5: mov edx, ecx */ r_edx = r_ecx;
    /* 005212d7: call 0x5212ec */ r_esp -= 4; W32(r_esp, 0x5212dcu); f_005212ec();
    /* 005212dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005212df: ret 4 */ FN_RET(0x005212c8); r_esp += 8; return;
}

void f_005212ec(void) /* sub_5212EC */
{
    FN_ENTER(0x005212ec);
    /* 005212ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005212ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005212ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005212ef: mov esi, edx */ r_esi = r_edx;
    /* 005212f1: mov ebp, eax */ r_ebp = r_eax;
    /* 005212f3: mov eax, ebp */ r_eax = r_ebp;
    /* 005212f5: call 0x520f40 */ r_esp -= 4; W32(r_esp, 0x5212fau); f_00520f40();
    /* 005212fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005212fc: je 0x521312 */ if (fZ) goto L_00521312;
L_005212fe:; BB(0x005212fe);
    /* 005212fe: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00521304: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521305: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521306: call 0x780d3c */ r_esp -= 4; W32(r_esp, 0x52130bu); f_00780d3c();
    /* 0052130b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052130e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521310: je 0x521318 */ if (fZ) goto L_00521318;
L_00521312:; BB(0x00521312);
    /* 00521312: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521314: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521315: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521316: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521317: ret  */ FN_RET(0x005212ec); r_esp += 4; return;
L_00521318:; BB(0x00521318);
    /* 00521318: mov eax, 1 */ r_eax = 0x1u;
    /* 0052131d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052131e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052131f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521320: ret  */ FN_RET(0x005212ec); r_esp += 4; return;
}

void f_00521324(void) /* sub_521324 */
{
    FN_ENTER(0x00521324);
    /* 00521324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521325: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521326: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00521328: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 0052132f: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521334: je 0x521356 */ if (fZ) goto L_00521356;
L_00521336:; BB(0x00521336);
    /* 00521336: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521337: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x52133cu); f_007b4d18();
    /* 0052133c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052133d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052133f: je 0x52134f */ if (fZ) goto L_0052134f;
L_00521341:; BB(0x00521341);
    /* 00521341: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 00521347: call 0x521360 */ r_esp -= 4; W32(r_esp, 0x52134cu); f_00521360();
    /* 0052134c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052134d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052134e: ret  */ FN_RET(0x00521324); r_esp += 4; return;
L_0052134f:; BB(0x0052134f);
    /* 0052134f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521351: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x521356u); f_00520f68();
L_00521356:; BB(0x00521356);
    /* 00521356: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521358: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521359: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052135a: ret  */ FN_RET(0x00521324); r_esp += 4; return;
}

void f_0052135c(void) /* sub_52135C */
{
    FN_ENTER(0x0052135c);
    /* 0052135c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00521360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521361: mov esi, eax */ r_esi = r_eax;
    /* 00521363: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521365: je 0x521384 */ if (fZ) goto L_00521384;
L_00521367:; BB(0x00521367);
    /* 00521367: mov ecx, esi */ r_ecx = r_esi;
    /* 00521369: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52136eu); f_008173b4();
    /* 0052136e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521370: je 0x521384 */ if (fZ) goto L_00521384;
L_00521372:; BB(0x00521372);
    /* 00521372: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00521375: test eax, 0x6040800 */ {  u32 a = r_eax; u32 b = 0x6040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052137a: mov eax, 0 */ r_eax = 0x0u;
    /* 0052137f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00521382: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521383: ret  */ FN_RET(0x0052135c); r_esp += 4; return;
L_00521384:; BB(0x00521384);
    /* 00521384: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521386: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521387: ret  */ FN_RET(0x0052135c); r_esp += 4; return;
}

void f_00521360(void) /* sub_521360 */
{
    FN_ENTER(0x00521360);
    /* 00521360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521361: mov esi, eax */ r_esi = r_eax;
    /* 00521363: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521365: je 0x521384 */ if (fZ) goto L_00521384;
L_00521367:; BB(0x00521367);
    /* 00521367: mov ecx, esi */ r_ecx = r_esi;
    /* 00521369: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x52136eu); f_008173b4();
    /* 0052136e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521370: je 0x521384 */ if (fZ) goto L_00521384;
L_00521372:; BB(0x00521372);
    /* 00521372: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00521375: test eax, 0x6040800 */ {  u32 a = r_eax; u32 b = 0x6040800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052137a: mov eax, 0 */ r_eax = 0x0u;
    /* 0052137f: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00521382: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521383: ret  */ FN_RET(0x00521360); r_esp += 4; return;
L_00521384:; BB(0x00521384);
    /* 00521384: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521386: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521387: ret  */ FN_RET(0x00521360); r_esp += 4; return;
}

void f_00521388(void) /* sub_521388 */
{
    FN_ENTER(0x00521388);
    /* 00521388: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521389: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0052138d: mov ebp, dword ptr [0xaae168] */ r_ebp = R32((u32)(0xaae168u));
    /* 00521393: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00521398: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 005213a2: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 005213a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005213ab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005213ad: jle 0x5213bf */ if ((fZ||fS!=fO)) goto L_005213bf;
L_005213af:; BB(0x005213af);
    /* 005213af: cmp eax, dword ptr [edx*4 + 0xaad720] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx*4+0xaad720u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005213b6: je 0x5213c3 */ if (fZ) goto L_005213c3;
L_005213b8:; BB(0x005213b8);
    /* 005213b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005213bb: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005213bd: jl 0x5213af */ if ((fS!=fO)) goto L_005213af;
L_005213bf:; BB(0x005213bf);
    /* 005213bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005213c0: ret 4 */ FN_RET(0x00521388); r_esp += 8; return;
L_005213c3:; BB(0x005213c3);
    /* 005213c3: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005213c7: mov word ptr [ecx + 0x394], dx */ W16((u32)(r_ecx+0x394u), (u16)r_edx);
    /* 005213ce: mov dword ptr [ecx + 0x398], eax */ W32((u32)(r_ecx+0x398u), r_eax);
    /* 005213d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005213d5: ret 4 */ FN_RET(0x00521388); r_esp += 8; return;
}

void f_005213d8(void) /* sub_5213D8 */
{
    FN_ENTER(0x005213d8);
    /* 005213d8: mov eax, dword ptr [ecx + 0x398] */ r_eax = R32((u32)(r_ecx+0x398u));
    /* 005213de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005213e0: je 0x5213eb */ if (fZ) goto L_005213eb;
L_005213e2:; BB(0x005213e2);
    /* 005213e2: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005213e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005213e6: call 0x5213ec */ r_esp -= 4; W32(r_esp, 0x5213ebu); f_005213ec();
L_005213eb:; BB(0x005213eb);
    /* 005213eb: ret  */ FN_RET(0x005213d8); r_esp += 4; return;
}

void f_005213ec(void) /* sub_5213EC */
{
    FN_ENTER(0x005213ec);
    /* 005213ec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005213f0: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005213f2: mov dword ptr [ecx + 0x39c], edx */ W32((u32)(r_ecx+0x39cu), r_edx);
    /* 005213f8: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005213fb: mov dword ptr [ecx + 0x3a0], edx */ W32((u32)(r_ecx+0x3a0u), r_edx);
    /* 00521401: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00521404: mov dword ptr [ecx + 0x3a4], eax */ W32((u32)(r_ecx+0x3a4u), r_eax);
    /* 0052140a: ret 4 */ FN_RET(0x005213ec); r_esp += 8; return;
}

void f_00521410(void) /* sub_521410 */
{
    FN_ENTER(0x00521410);
    /* 00521410: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521411: mov esi, ecx */ r_esi = r_ecx;
    /* 00521413: fld dword ptr [esi + 0x39c] */ FPUSH(R_F32((u32)(r_esi+0x39cu)));
    /* 00521419: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0052141c: fld dword ptr [esi + 0x3a4] */ FPUSH(R_F32((u32)(r_esi+0x3a4u)));
    /* 00521422: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 00521425: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00521427: fstp dword ptr [esi + 0x3a8] */ W_F32((u32)(r_esi+0x3a8u), ST(0)); FPOP();
    /* 0052142d: fstp dword ptr [esi + 0x3b0] */ W_F32((u32)(r_esi+0x3b0u), ST(0)); FPOP();
    /* 00521433: mov dword ptr [esi + 0x3ac], 0 */ W32((u32)(r_esi+0x3acu), 0x0u);
    /* 0052143d: lea eax, [esi + 0x3a8] */ r_eax = (u32)(r_esi+0x3a8u);
    /* 00521443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521444: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x521449u); f_007828e4();
    /* 00521449: fstp dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0)); FPOP();
    /* 0052144f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521450: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521451: ret  */ FN_RET(0x00521410); r_esp += 4; return;
}

void f_00521454(void) /* sub_521454 */
{
    FN_ENTER(0x00521454);
    /* 00521454: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521455: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521458: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052145a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052145c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0052145f: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521463: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521468: call 0x521480 */ r_esp -= 4; W32(r_esp, 0x52146du); f_00521480();
    /* 0052146d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521471: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521473: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x521478u); f_00520750();
    /* 00521478: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052147b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052147c: ret 8 */ FN_RET(0x00521454); r_esp += 12; return;
}

void f_00521480(void) /* sub_521480 */
{
    FN_ENTER(0x00521480);
    /* 00521480: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521481: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521482: mov esi, ecx */ r_esi = r_ecx;
    /* 00521484: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521488: mov ecx, esi */ r_ecx = r_esi;
    /* 0052148a: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x52148fu); f_005214cc();
    /* 0052148f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00521492: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x521497u); f_0082dcbc();
    /* 00521497: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052149a: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0052149d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5214a2u); f_0082ddd8();
    /* 005214a2: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005214a5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005214a9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005214ad: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005214b1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005214b5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005214b9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005214bc: mov ecx, esi */ r_ecx = r_esi;
    /* 005214be: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005214c2: call 0x5206cc */ r_esp -= 4; W32(r_esp, 0x5214c7u); f_005206cc();
    /* 005214c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005214c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005214c9: ret 0xc */ FN_RET(0x00521480); r_esp += 16; return;
}

void f_005214cc(void) /* sub_5214CC */
{
    FN_ENTER(0x005214cc);
    /* 005214cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005214cd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005214d0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005214d2: fld dword ptr [ebx + 0x3a8] */ FPUSH(R_F32((u32)(r_ebx+0x3a8u)));
    /* 005214d8: fld dword ptr [ebx + 0x3b0] */ FPUSH(R_F32((u32)(r_ebx+0x3b0u)));
    /* 005214de: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005214e0: fmul qword ptr [0x921678] */ ST(0) = ST(0) * R_F64((u32)(0x921678u));
    /* 005214e6: fdiv qword ptr [0x921670] */ ST(0) = ST(0) / R_F64((u32)(0x921670u));
    /* 005214ec: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005214ef: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005214f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005214f8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005214fc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00521500: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00521504: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00521507: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0052150b: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052150f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521510: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521513: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x521518u); f_007a8c74();
    /* 00521518: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0052151b: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0052151e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521521: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521522: ret 4 */ FN_RET(0x005214cc); r_esp += 8; return;
}

void f_00521528(void) /* sub_521528 */
{
    FN_ENTER(0x00521528);
    /* 00521528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521529: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052152c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052152e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521530: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521533: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521537: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052153b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052153c: call 0x521554 */ r_esp -= 4; W32(r_esp, 0x521541u); f_00521554();
    /* 00521541: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521544: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521545: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521547: call 0x520750 */ r_esp -= 4; W32(r_esp, 0x52154cu); f_00520750();
    /* 0052154c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052154f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521550: ret 8 */ FN_RET(0x00521528); r_esp += 12; return;
}

void f_00521554(void) /* sub_521554 */
{
    FN_ENTER(0x00521554);
    /* 00521554: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521555: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521556: mov esi, ecx */ r_esi = r_ecx;
    /* 00521558: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052155c: mov ecx, esi */ r_ecx = r_esi;
    /* 0052155e: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x521563u); f_005214cc();
    /* 00521563: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00521566: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x52156bu); f_0082dcbc();
    /* 0052156b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0052156e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00521571: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x521576u); f_0082ddd8();
    /* 00521576: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00521579: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0052157d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00521581: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00521585: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00521589: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0052158d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00521590: mov ecx, esi */ r_ecx = r_esi;
    /* 00521592: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00521596: call 0x5207f4 */ r_esp -= 4; W32(r_esp, 0x52159bu); f_005207f4();
    /* 0052159b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052159c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052159d: ret 0xc */ FN_RET(0x00521554); r_esp += 16; return;
}

void f_005215a0(void) /* sub_5215A0 */
{
    FN_ENTER(0x005215a0);
    /* 005215a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005215a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005215a2: mov esi, ecx */ r_esi = r_ecx;
    /* 005215a4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005215a8: mov ecx, esi */ r_ecx = r_esi;
    /* 005215aa: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x5215afu); f_005214cc();
    /* 005215af: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005215b2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5215b7u); f_0082dcbc();
    /* 005215b7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005215ba: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 005215bd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5215c2u); f_0082ddd8();
    /* 005215c2: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005215c5: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005215c9: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005215cd: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005215d1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005215d5: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005215d9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005215dc: mov ecx, esi */ r_ecx = r_esi;
    /* 005215de: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005215e2: call 0x520a04 */ r_esp -= 4; W32(r_esp, 0x5215e7u); f_00520a04();
    /* 005215e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005215e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005215e9: ret 0xc */ FN_RET(0x005215a0); r_esp += 16; return;
}

void f_005215ec(void) /* sub_5215EC */
{
    FN_ENTER(0x005215ec);
    /* 005215ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005215ed: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005215f0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005215f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005215f4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005215f7: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005215fb: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005215ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521600: call 0x521554 */ r_esp -= 4; W32(r_esp, 0x521605u); f_00521554();
    /* 00521605: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521609: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052160c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052160e: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x521614u); call_ind(t); }
    /* 00521614: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521617: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521618: ret 8 */ FN_RET(0x005215ec); r_esp += 12; return;
}

void f_0052161c(void) /* sub_52161C */
{
    FN_ENTER(0x0052161c);
    /* 0052161c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052161d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521620: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00521622: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00521624: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521627: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052162b: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052162f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521630: call 0x5215a0 */ r_esp -= 4; W32(r_esp, 0x521635u); f_005215a0();
    /* 00521635: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00521638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521639: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0052163c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052163e: call dword ptr [edx + 0x19c] */ { u32 t = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, 0x521644u); call_ind(t); }
    /* 00521644: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521647: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521648: ret 8 */ FN_RET(0x0052161c); r_esp += 12; return;
}

void f_0052164c(void) /* sub_52164C */
{
    FN_ENTER(0x0052164c);
    /* 0052164c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052164d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0052164f: movzx eax, word ptr [ebx + 0x394] */ r_eax = (u32)R16((u32)(r_ebx+0x394u));
    /* 00521656: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052165b: jge 0x521668 */ if ((fS==fO)) goto L_00521668;
L_0052165d:; BB(0x0052165d);
    /* 0052165d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052165e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x521663u); f_0068d5a8();
    /* 00521663: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521664: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521666: je 0x521671 */ if (fZ) goto L_00521671;
L_00521668:; BB(0x00521668);
    /* 00521668: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0052166a: call 0x52167c */ r_esp -= 4; W32(r_esp, 0x52166fu); f_0052167c();
    /* 0052166f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521670: ret  */ FN_RET(0x0052164c); r_esp += 4; return;
L_00521671:; BB(0x00521671);
    /* 00521671: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00521673: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x521678u); f_00520f68();
    /* 00521678: jmp 0x521668 */ goto L_00521668;
}

void f_0052167c(void) /* sub_52167C */
{
    FN_ENTER(0x0052167c);
    /* 0052167c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0052167d: mov esi, ecx */ r_esi = r_ecx;
    /* 0052167f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00521681: mov ecx, esi */ r_ecx = r_esi;
    /* 00521683: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x521689u); call_ind(t); }
    /* 00521689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052168b: je 0x52169e */ if (fZ) goto L_0052169e;
L_0052168d:; BB(0x0052168d);
    /* 0052168d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052168f: mov ecx, esi */ r_ecx = r_esi;
    /* 00521691: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x521697u); call_ind(t); }
    /* 00521697: mov eax, 1 */ r_eax = 0x1u;
    /* 0052169c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052169d: ret  */ FN_RET(0x0052167c); r_esp += 4; return;
L_0052169e:; BB(0x0052169e);
    /* 0052169e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216a0: mov ecx, esi */ r_ecx = r_esi;
    /* 005216a2: call dword ptr [eax + 0xac] */ { u32 t = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, 0x5216a8u); call_ind(t); }
    /* 005216a8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216aa: mov ecx, esi */ r_ecx = r_esi;
    /* 005216ac: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x5216b2u); call_ind(t); }
    /* 005216b2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216b4: mov ecx, esi */ r_ecx = r_esi;
    /* 005216b6: call dword ptr [eax + 0xa0] */ { u32 t = R32((u32)(r_eax+0xa0u)); r_esp -= 4; W32(r_esp, 0x5216bcu); call_ind(t); }
    /* 005216bc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216be: mov ecx, esi */ r_ecx = r_esi;
    /* 005216c0: call dword ptr [eax + 0x158] */ { u32 t = R32((u32)(r_eax+0x158u)); r_esp -= 4; W32(r_esp, 0x5216c6u); call_ind(t); }
    /* 005216c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005216c8: je 0x5216d1 */ if (fZ) goto L_005216d1;
L_005216ca:; BB(0x005216ca);
    /* 005216ca: mov eax, 4 */ r_eax = 0x4u;
    /* 005216cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005216d0: ret  */ FN_RET(0x0052167c); r_esp += 4; return;
L_005216d1:; BB(0x005216d1);
    /* 005216d1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216d3: mov ecx, esi */ r_ecx = r_esi;
    /* 005216d5: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x5216dbu); call_ind(t); }
    /* 005216db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005216dd: je 0x5216f0 */ if (fZ) goto L_005216f0;
L_005216df:; BB(0x005216df);
    /* 005216df: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005216e1: mov ecx, esi */ r_ecx = r_esi;
    /* 005216e3: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x5216e9u); call_ind(t); }
    /* 005216e9: mov eax, 2 */ r_eax = 0x2u;
    /* 005216ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005216ef: ret  */ FN_RET(0x0052167c); r_esp += 4; return;
L_005216f0:; BB(0x005216f0);
    /* 005216f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005216f2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005216f3: ret  */ FN_RET(0x0052167c); r_esp += 4; return;
}

void f_005216f4(void) /* sub_5216F4 */
{
    FN_ENTER(0x005216f4);
    /* 005216f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005216f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005216f7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005216fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005216fd: call 0x521738 */ r_esp -= 4; W32(r_esp, 0x521702u); f_00521738();
    /* 00521702: mov dword ptr [ebp], 0xb00740 */ W32((u32)(r_ebp), 0xb00740u);
    /* 00521709: mov eax, dword ptr [0x9bba58] */ r_eax = R32((u32)(0x9bba58u));
    /* 0052170e: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 00521711: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00521713: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x521718u); f_00520f68();
    /* 00521718: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052171a: call 0x521788 */ r_esp -= 4; W32(r_esp, 0x52171fu); f_00521788();
    /* 0052171f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00521721: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00521723: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x521728u); f_00521820();
    /* 00521728: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0052172a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052172c: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x521731u); f_005217fc();
    /* 00521731: mov eax, ebp */ r_eax = r_ebp;
    /* 00521733: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521734: ret 4 */ FN_RET(0x005216f4); r_esp += 8; return;
}

void f_00521738(void) /* sub_521738 */
{
    FN_ENTER(0x00521738);
    /* 00521738: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521739: mov edi, ecx */ r_edi = r_ecx;
    /* 0052173b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052173f: mov ecx, edi */ r_ecx = r_edi;
    /* 00521741: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x521746u); f_007865e8();
    /* 00521746: mov dword ptr [edi], 0xb00580 */ W32((u32)(r_edi), 0xb00580u);
    /* 0052174c: mov edx, dword ptr [0x9bba54] */ r_edx = R32((u32)(0x9bba54u));
    /* 00521752: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00521755: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521757: mov dword ptr [edi + 0x384], 0x40a00000 */ W32((u32)(r_edi+0x384u), 0x40a00000u);
    /* 00521761: mov dword ptr [edi + 0x37c], eax */ W32((u32)(r_edi+0x37cu), r_eax);
    /* 00521767: mov dword ptr [edi + 0x380], eax */ W32((u32)(r_edi+0x380u), r_eax);
    /* 0052176d: mov dword ptr [edi + 0x388], eax */ W32((u32)(r_edi+0x388u), r_eax);
    /* 00521773: mov dword ptr [edi + 0x38c], eax */ W32((u32)(r_edi+0x38cu), r_eax);
    /* 00521779: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 0052177f: mov eax, edi */ r_eax = r_edi;
    /* 00521781: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00521782: ret 4 */ FN_RET(0x00521738); r_esp += 8; return;
}

void f_00521788(void) /* sub_521788 */
{
    FN_ENTER(0x00521788);
    /* 00521788: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 00521792: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 0052179c: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 005217a6: mov dword ptr [ecx + 0x3a8], 0 */ W32((u32)(r_ecx+0x3a8u), 0x0u);
    /* 005217b0: mov dword ptr [ecx + 0x3ac], 0 */ W32((u32)(r_ecx+0x3acu), 0x0u);
    /* 005217ba: mov dword ptr [ecx + 0x3b0], 0 */ W32((u32)(r_ecx+0x3b0u), 0x0u);
    /* 005217c4: mov dword ptr [ecx + 0x3b4], 0 */ W32((u32)(r_ecx+0x3b4u), 0x0u);
    /* 005217ce: ret  */ FN_RET(0x00521788); r_esp += 4; return;
}

void f_005217fc(void) /* sub_5217FC */
{
    FN_ENTER(0x005217fc);
    /* 005217fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005217fd: mov edi, ecx */ r_edi = r_ecx;
    /* 005217ff: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00521803: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521806: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0052180a: mov dword ptr [edi + 0x3c4], ecx */ W32((u32)(r_edi+0x3c4u), r_ecx);
    /* 00521810: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521812: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00521812, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00521812, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00521814: mov dword ptr [edi + 0x3c0], edx */ W32((u32)(r_edi+0x3c0u), r_edx);
    /* 0052181a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052181b: ret 4 */ FN_RET(0x005217fc); r_esp += 8; return;
}

void f_00521820(void) /* sub_521820 */
{
    FN_ENTER(0x00521820);
    /* 00521820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521821: mov edi, ecx */ r_edi = r_ecx;
    /* 00521823: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00521827: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0052182b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0052182d: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0052182d, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0052182d, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0052182f: mov dword ptr [edi + 0x3bc], ecx */ W32((u32)(r_edi+0x3bcu), r_ecx);
    /* 00521835: mov dword ptr [edi + 0x3b8], edx */ W32((u32)(r_edi+0x3b8u), r_edx);
    /* 0052183b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052183c: ret 4 */ FN_RET(0x00521820); r_esp += 8; return;
}

void f_00521840(void) /* sub_521840 */
{
    FN_ENTER(0x00521840);
    /* 00521840: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521841: mov esi, ecx */ r_esi = r_ecx;
    /* 00521843: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00521846: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00521849: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0052184c: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0052184f: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00521852: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 00521855: mov dword ptr [esi + 0x50], eax */ W32((u32)(r_esi+0x50u), r_eax);
    /* 00521858: mov dword ptr [esi + 0x54], edx */ W32((u32)(r_esi+0x54u), r_edx);
    /* 0052185b: mov dword ptr [esi + 0x58], ecx */ W32((u32)(r_esi+0x58u), r_ecx);
    /* 0052185e: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00521861: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00521864: mov dword ptr [esi + 0x7c], ecx */ W32((u32)(r_esi+0x7cu), r_ecx);
    /* 00521867: mov ecx, esi */ r_ecx = r_esi;
    /* 00521869: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x52186eu); f_007b4f54();
    /* 0052186e: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00521871: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00521874: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 0052187e: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 00521884: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00521887: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 00521891: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 00521897: mov dword ptr [esi + 0x308], eax */ W32((u32)(r_esi+0x308u), r_eax);
    /* 0052189d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052189f: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 005218a9: mov ecx, esi */ r_ecx = r_esi;
    /* 005218ab: mov dword ptr [esi + 0x250], 0 */ W32((u32)(r_esi+0x250u), 0x0u);
    /* 005218b5: mov dword ptr [esi + 0x254], 0 */ W32((u32)(r_esi+0x254u), 0x0u);
    /* 005218bf: mov dword ptr [esi + 0x258], 0 */ W32((u32)(r_esi+0x258u), 0x0u);
    /* 005218c9: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x5218cfu); call_ind(t); }
    /* 005218cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005218d0: ret  */ FN_RET(0x00521840); r_esp += 4; return;
}

void f_005218d4(void) /* sub_5218D4 */
{
    FN_ENTER(0x005218d4);
    /* 005218d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005218d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005218d6: mov edi, ecx */ r_edi = r_ecx;
    /* 005218d8: mov ebp, dword ptr [edi + 0x3c] */ r_ebp = R32((u32)(r_edi+0x3cu));
    /* 005218db: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005218dd: mov ecx, edi */ r_ecx = r_edi;
    /* 005218df: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x5218e2u); call_ind(t); }
    /* 005218e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005218e4: je 0x521904 */ if (fZ) goto L_00521904;
L_005218e6:; BB(0x005218e6);
    /* 005218e6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005218e9: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005218ec: mov dword ptr [edi + 0x250], ecx */ W32((u32)(r_edi+0x250u), r_ecx);
    /* 005218f2: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005218f5: mov dword ptr [edi + 0x254], ecx */ W32((u32)(r_edi+0x254u), r_ecx);
    /* 005218fb: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005218fe: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
L_00521904:; BB(0x00521904);
    /* 00521904: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00521907: mov dword ptr [edi + 0x38c], 0 */ W32((u32)(r_edi+0x38cu), 0x0u);
    /* 00521911: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 00521914: mov dword ptr [edi + 0x48], ebp */ W32((u32)(r_edi+0x48u), r_ebp);
    /* 00521917: mov ebp, dword ptr [edi + 0x40] */ r_ebp = R32((u32)(r_edi+0x40u));
    /* 0052191a: mov dword ptr [edi + 0x4c], ebp */ W32((u32)(r_edi+0x4cu), r_ebp);
    /* 0052191d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052191e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052191f: ret  */ FN_RET(0x005218d4); r_esp += 4; return;
}

void f_00521920(void) /* sub_521920 */
{
    FN_ENTER(0x00521920);
    /* 00521920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521921: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521922: mov edi, ecx */ r_edi = r_ecx;
    /* 00521924: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00521926: mov ecx, edi */ r_ecx = r_edi;
    /* 00521928: call dword ptr [eax + 0x98] */ { u32 t = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, 0x52192eu); call_ind(t); }
    /* 0052192e: mov esi, eax */ r_esi = r_eax;
    /* 00521930: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00521932: mov ecx, edi */ r_ecx = r_edi;
    /* 00521934: call dword ptr [edx + 0xa8] */ { u32 t = R32((u32)(r_edx+0xa8u)); r_esp -= 4; W32(r_esp, 0x52193au); call_ind(t); }
    /* 0052193a: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0052193c: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0052193e: mov ecx, edi */ r_ecx = r_edi;
    /* 00521940: call dword ptr [edx + 0xa4] */ { u32 t = R32((u32)(r_edx+0xa4u)); r_esp -= 4; W32(r_esp, 0x521946u); call_ind(t); }
    /* 00521946: or esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521948: mov eax, esi */ r_eax = r_esi;
    /* 0052194a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052194b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052194c: ret  */ FN_RET(0x00521920); r_esp += 4; return;
}

void f_00521950(void) /* sub_521950 */
{
    FN_ENTER(0x00521950);
    /* 00521950: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521951: mov ebp, esp */ r_ebp = r_esp;
    /* 00521953: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521955: push 0x8d47d0 */ { u32 v = 0x8d47d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052195a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521961: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00521968: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0052196b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052196e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00521971: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00521974: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00521977: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052197c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00521983: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x521988u); f_005caba4();
    /* 00521988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521989: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0052198c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052198e: je 0x5219c7 */ if (fZ) goto L_005219c7;
L_00521990:; BB(0x00521990);
    /* 00521990: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00521997: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052199e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005219a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005219a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005219a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005219a5: call 0x521bbc */ r_esp -= 4; W32(r_esp, 0x5219aau); f_00521bbc();
    /* 005219aa: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005219ad: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005219b4:; BB(0x005219b4);
    /* 005219b4: mov dword ptr [0xa72eb4], eax */ W32((u32)(0xa72eb4u), r_eax);
    /* 005219b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005219bc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005219c3: mov esp, ebp */ r_esp = r_ebp;
    /* 005219c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005219c6: ret  */ FN_RET(0x00521950); r_esp += 4; return;
L_005219c7:; BB(0x005219c7);
    /* 005219c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005219c9: jmp 0x5219b4 */ goto L_005219b4;
}

void f_005219cc(void) /* sub_5219CC */
{
    FN_ENTER(0x005219cc);
    /* 005219cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005219cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005219cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005219d1: call 0x5219f0 */ r_esp -= 4; W32(r_esp, 0x5219d6u); f_005219f0();
    /* 005219d6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005219da: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005219dc: jne 0x5219e2 */ if (!fZ) goto L_005219e2;
L_005219de:; BB(0x005219de);
    /* 005219de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005219df: ret 4 */ FN_RET(0x005219cc); r_esp += 8; return;
L_005219e2:; BB(0x005219e2);
    /* 005219e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005219e3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5219e8u); f_005c2f74();
    /* 005219e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005219e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005219ea: ret 4 */ FN_RET(0x005219cc); r_esp += 8; return;
}

void f_005219f0(void) /* sub_5219F0 */
{
    FN_ENTER(0x005219f0);
    /* 005219f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005219f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005219f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005219f5: push 0x8d47ec */ { u32 v = 0x8d47ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005219fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521a00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521a01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00521a08: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521a0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00521a0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00521a11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00521a14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00521a17: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00521a1a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521a21: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521a24: mov dword ptr [ecx], 0xb009a0 */ W32((u32)(r_ecx), 0xb009a0u);
    /* 00521a2a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x521a2fu); f_007b9c8c();
    /* 00521a2f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00521a36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521a39: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x521a3eu); f_007b4aec();
    /* 00521a3e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521a41: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521a48: mov esp, ebp */ r_esp = r_ebp;
    /* 00521a4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521a4b: ret  */ FN_RET(0x005219f0); r_esp += 4; return;
}

void f_00521a4c(void) /* sub_521A4C */
{
    FN_ENTER(0x00521a4c);
    /* 00521a4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521a4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521a4e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00521a50: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00521a54: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00521a56: jle 0x521a69 */ if ((fZ||fS!=fO)) goto L_00521a69;
L_00521a58:; BB(0x00521a58);
    /* 00521a58: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00521a5c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00521a5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521a5f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x521a64u); f_008581c5();
    /* 00521a64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521a65: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00521a67: jmp 0x521a71 */ goto L_00521a71;
L_00521a69:; BB(0x00521a69);
    /* 00521a69: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00521a6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00521a71:; BB(0x00521a71);
    /* 00521a71: mov dword ptr [ebx + 4], 0 */ W32((u32)(r_ebx+0x4u), 0x0u);
    /* 00521a78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00521a7a: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 00521a7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00521a7f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521a81: jg 0x521a8a */ if ((!fZ&&fS==fO)) goto L_00521a8a;
L_00521a83:; BB(0x00521a83);
    /* 00521a83: jmp 0x521a95 */ goto L_00521a95;
L_00521a85:; BB(0x00521a85);
    /* 00521a85: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00521a87: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
L_00521a8a:; BB(0x00521a8a);
    /* 00521a8a: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 00521a8d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521a90: cmp edx, dword ptr [ebx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00521a93: jl 0x521a85 */ if ((fS!=fO)) goto L_00521a85;
L_00521a95:; BB(0x00521a95);
    /* 00521a95: mov dword ptr [ebx + 8], 0 */ W32((u32)(r_ebx+0x8u), 0x0u);
    /* 00521a9c: mov eax, ebx */ r_eax = r_ebx;
    /* 00521a9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521a9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521aa0: ret 4 */ FN_RET(0x00521a4c); r_esp += 8; return;
}

void f_00521ac0(void) /* sub_521AC0 */
{
    FN_ENTER(0x00521ac0);
    /* 00521ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521ac1: mov ebp, esp */ r_ebp = r_esp;
    /* 00521ac3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521ac5: push 0x8d4808 */ { u32 v = 0x8d4808u; r_esp -= 4; W32(r_esp, v); }
    /* 00521aca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521ad1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00521ad8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521adb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00521ade: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00521ae1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00521ae4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00521ae7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00521aea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00521af1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521af4: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00521af6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521af8: je 0x521b0a */ if (fZ) goto L_00521b0a;
L_00521afa:; BB(0x00521afa);
    /* 00521afa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521afb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x521b00u); f_00857e98();
    /* 00521b00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521b01: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00521b04: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_00521b0a:; BB(0x00521b0a);
    /* 00521b0a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521b0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521b14: mov esp, ebp */ r_esp = r_ebp;
    /* 00521b16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521b17: ret  */ FN_RET(0x00521ac0); r_esp += 4; return;
}

void f_00521b18(void) /* sub_521B18 */
{
    FN_ENTER(0x00521b18);
    /* 00521b18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521b19: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521b1a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521b1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521b1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521b1d: mov edi, ecx */ r_edi = r_ecx;
    /* 00521b1f: mov ebp, dword ptr [edi + 8] */ r_ebp = R32((u32)(r_edi+0x8u));
    /* 00521b22: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 00521b25: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00521b29: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521b2b: jge 0x521b93 */ if ((fS==fO)) goto L_00521b93;
L_00521b2d:; BB(0x00521b2d);
    /* 00521b2d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00521b2f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00521b31: jle 0x521b79 */ if ((fZ||fS!=fO)) goto L_00521b79;
L_00521b33:; BB(0x00521b33);
    /* 00521b33: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521b36: jl 0x521b9d */ if ((fS!=fO)) goto L_00521b9d;
L_00521b38:; BB(0x00521b38);
    /* 00521b38: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00521b3a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00521b3d: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00521b40: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521b42: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00521b44:; BB(0x00521b44);
    /* 00521b44: cmp esi, dword ptr [eax + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b47: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b49:; BB(0x00521b49);
    /* 00521b49: cmp esi, dword ptr [ebx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b4c: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b4e:; BB(0x00521b4e);
    /* 00521b4e: cmp esi, dword ptr [ebx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b51: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b53:; BB(0x00521b53);
    /* 00521b53: cmp esi, dword ptr [ebx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b56: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b58:; BB(0x00521b58);
    /* 00521b58: cmp esi, dword ptr [ebx + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b5b: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b5d:; BB(0x00521b5d);
    /* 00521b5d: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521b60: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521b63: lea edi, [ebp - 6] */ r_edi = (u32)(r_ebp+0xfffffffau);
    /* 00521b66: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521b68: jle 0x521b44 */ if ((fZ||fS!=fO)) goto L_00521b44;
L_00521b6a:; BB(0x00521b6a);
    /* 00521b6a: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00521b6d:; BB(0x00521b6d);
    /* 00521b6d: cmp esi, dword ptr [eax + edx*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521b70: je 0x521b93 */ if (fZ) goto L_00521b93;
L_00521b72:; BB(0x00521b72);
    /* 00521b72: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00521b75: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521b77: jl 0x521b6d */ if ((fS!=fO)) goto L_00521b6d;
L_00521b79:; BB(0x00521b79);
    /* 00521b79: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00521b7b: jge 0x521b86 */ if ((fS==fO)) goto L_00521b86;
L_00521b7d:; BB(0x00521b7d);
    /* 00521b7d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00521b7f: mov dword ptr [eax + ebp*4], esi */ W32((u32)(r_eax+r_ebp*4), r_esi);
    /* 00521b82: add dword ptr [edi + 8], 1 */ { u32 ad = (u32)(r_edi+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00521b86:; BB(0x00521b86);
    /* 00521b86: mov eax, 1 */ r_eax = 0x1u;
    /* 00521b8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521b8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521b8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521b8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521b8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00521b90: ret 4 */ FN_RET(0x00521b18); r_esp += 8; return;
L_00521b93:; BB(0x00521b93);
    /* 00521b93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521b95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00521b96: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521b98: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521b99: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00521b9a: ret 4 */ FN_RET(0x00521b18); r_esp += 8; return;
L_00521b9d:; BB(0x00521b9d);
    /* 00521b9d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00521b9f: jmp 0x521b6d */ goto L_00521b6d;
}

void f_00521ba4(void) /* sub_521BA4 */
{
    FN_ENTER(0x00521ba4);
    /* 00521ba4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00521ba8: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521bae: mov eax, 0 */ r_eax = 0x0u;
    /* 00521bb3: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00521bb6: ret 4 */ FN_RET(0x00521ba4); r_esp += 8; return;
}

void f_00521bbc(void) /* sub_521BBC */
{
    FN_ENTER(0x00521bbc);
    /* 00521bbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521bbd: mov ebp, esp */ r_ebp = r_esp;
    /* 00521bbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521bc1: push 0x8d4824 */ { u32 v = 0x8d4824u; r_esp -= 4; W32(r_esp, v); }
    /* 00521bc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521bcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00521bd4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521bd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00521bda: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00521bdd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00521be0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00521be3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00521be6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521be9: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00521bec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00521bef: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x521bf4u); f_007b4b48();
    /* 00521bf4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521bfb: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521bfe: mov dword ptr [ecx], 0xb009a0 */ W32((u32)(r_ecx), 0xb009a0u);
    /* 00521c04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00521c06: push 0x9bba60 */ { u32 v = 0x9bba60u; r_esp -= 4; W32(r_esp, v); }
    /* 00521c0b: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x521c10u); f_007b9a88();
    /* 00521c10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00521c13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00521c15: je 0x521c25 */ if (fZ) goto L_00521c25;
L_00521c17:; BB(0x00521c17);
    /* 00521c17: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521c1b: call 0x521c44 */ r_esp -= 4; W32(r_esp, 0x521c20u); f_00521c44();
    /* 00521c20: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521c23: jmp 0x521c32 */ goto L_00521c32;
L_00521c25:; BB(0x00521c25);
    /* 00521c25: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00521c28: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
L_00521c32:; BB(0x00521c32);
    /* 00521c32: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521c35: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521c3c: mov esp, ebp */ r_esp = r_ebp;
    /* 00521c3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521c3f: ret 8 */ FN_RET(0x00521bbc); r_esp += 12; return;
}

void f_00521c44(void) /* sub_521C44 */
{
    FN_ENTER(0x00521c44);
    /* 00521c44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00521c48: mov dword ptr [ecx + 0xac], eax */ W32((u32)(r_ecx+0xacu), r_eax);
    /* 00521c4e: movzx edx, word ptr [eax + 0x28] */ r_edx = (u32)R16((u32)(r_eax+0x28u));
    /* 00521c52: mov word ptr [ecx + 0x28], dx */ W16((u32)(r_ecx+0x28u), (u16)r_edx);
    /* 00521c56: ret 4 */ FN_RET(0x00521c44); r_esp += 8; return;
}

void f_00521c5c(void) /* sub_521C5C */
{
    FN_ENTER(0x00521c5c);
    /* 00521c5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521c5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00521c5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00521c61: push 0x8d4840 */ { u32 v = 0x8d4840u; r_esp -= 4; W32(r_esp, v); }
    /* 00521c66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00521c6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521c6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00521c74: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521c77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00521c7a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00521c7d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00521c80: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00521c83: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00521c86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521c89: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00521c8c: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00521c8f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00521c92: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00521c95: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00521c98: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00521c9b: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x521ca0u); f_007b4b48();
    /* 00521ca0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00521ca7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521caa: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00521cad: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00521cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521cb1: mov dword ptr [ecx], 0xb009a0 */ W32((u32)(r_ecx), 0xb009a0u);
    /* 00521cb7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00521cb8: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x521cbdu); f_007b9a88();
    /* 00521cbd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00521cc0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00521cc3: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 00521cc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00521ccc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00521cd3: mov esp, ebp */ r_esp = r_ebp;
    /* 00521cd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521cd6: ret 0x10 */ FN_RET(0x00521c5c); r_esp += 20; return;
}

void f_00521cdc(void) /* sub_521CDC */
{
    FN_ENTER(0x00521cdc);
    /* 00521cdc: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00521ce1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00521ce3: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521ce7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521ceb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521cef: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x521cf2u); call_ind(t); }
    /* 00521cf2: ret 0xc */ FN_RET(0x00521cdc); r_esp += 16; return;
}

void f_00521cf8(void) /* sub_521CF8 */
{
    FN_ENTER(0x00521cf8);
    /* 00521cf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521cf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521cfa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521cfb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521cfc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521cff: mov edi, ecx */ r_edi = r_ecx;
    /* 00521d01: mov eax, dword ptr [edi + 0xac] */ r_eax = R32((u32)(r_edi+0xacu));
    /* 00521d07: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00521d09: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00521d0d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00521d0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d11: je 0x521e7f */ if (fZ) goto L_00521e7f;
L_00521d17:; BB(0x00521d17);
    /* 00521d17: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x521d1cu); f_007b51c4();
    /* 00521d1c: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00521d1f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00521d21: je 0x521d36 */ if (fZ) goto L_00521d36;
L_00521d23:; BB(0x00521d23);
    /* 00521d23: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00521d27: mov ecx, edi */ r_ecx = r_edi;
    /* 00521d29: call 0x7b8618 */ r_esp -= 4; W32(r_esp, 0x521d2eu); f_007b8618();
    /* 00521d2e: mov esi, 0x80000 */ r_esi = 0x80000u;
    /* 00521d33: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
L_00521d36:; BB(0x00521d36);
    /* 00521d36: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00521d38: je 0x521d47 */ if (fZ) goto L_00521d47;
L_00521d3a:; BB(0x00521d3a);
    /* 00521d3a: mov ecx, edi */ r_ecx = r_edi;
    /* 00521d3c: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x521d41u); f_007b8980();
    /* 00521d41: or esi, 0x100000 */ {  u32 a = r_esi; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00521d47:; BB(0x00521d47);
    /* 00521d47: mov eax, dword ptr [edi + 0xa4] */ r_eax = R32((u32)(r_edi+0xa4u));
    /* 00521d4d: test dword ptr [eax + 0x18], esi */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d50: je 0x521e5b */ if (fZ) goto L_00521e5b;
L_00521d56:; BB(0x00521d56);
    /* 00521d56: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00521d5a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00521d5c:; BB(0x00521d5c);
    /* 00521d5c: mov ebp, dword ptr [esi + 0xaad6e0] */ r_ebp = R32((u32)(r_esi+0xaad6e0u));
    /* 00521d62: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00521d65: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d67: je 0x521e79 */ if (fZ) goto L_00521e79;
L_00521d6d:; BB(0x00521d6d);
    /* 00521d6d: movzx eax, word ptr [ebp + 0x96] */ r_eax = (u32)R16((u32)(r_ebp+0x96u));
    /* 00521d74: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d77: jne 0x521e4e */ if (!fZ) goto L_00521e4e;
L_00521d7d:; BB(0x00521d7d);
    /* 00521d7d: cmp ebp, dword ptr [edi + 0xac] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d83: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521d89:; BB(0x00521d89);
    /* 00521d89: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00521d8c: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d91: jne 0x521e4e */ if (!fZ) goto L_00521e4e;
L_00521d97:; BB(0x00521d97);
    /* 00521d97: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00521d9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521d9d: je 0x521e34 */ if (fZ) goto L_00521e34;
L_00521da3:; BB(0x00521da3);
    /* 00521da3: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00521da7: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00521daa: mov ebx, dword ptr [eax + 0xc] */ r_ebx = R32((u32)(r_eax+0xcu));
    /* 00521dad: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00521db1: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521db3: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00521db6: jl 0x521e6f */ if ((fS!=fO)) goto L_00521e6f;
L_00521dbc:; BB(0x00521dbc);
    /* 00521dbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00521dbe:; BB(0x00521dbe);
    /* 00521dbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521dc0: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521dc6:; BB(0x00521dc6);
    /* 00521dc6: mov eax, edx */ r_eax = r_edx;
    /* 00521dc8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00521dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00521dcc: jle 0x521e1a */ if ((fZ||fS!=fO)) goto L_00521e1a;
L_00521dce:; BB(0x00521dce);
    /* 00521dce: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521dd1: jl 0x521e67 */ if ((fS!=fO)) goto L_00521e67;
L_00521dd7:; BB(0x00521dd7);
    /* 00521dd7: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00521ddb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00521ddd: lea edx, [edx - 6] */ r_edx = (u32)(r_edx+0xfffffffau);
    /* 00521de0: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00521de3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521de5: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00521de7:; BB(0x00521de7);
    /* 00521de7: cmp ebp, dword ptr [eax + ebx*4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521dea: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521dec:; BB(0x00521dec);
    /* 00521dec: cmp ebp, dword ptr [ecx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521def: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521df1:; BB(0x00521df1);
    /* 00521df1: cmp ebp, dword ptr [ecx + 8] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521df4: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521df6:; BB(0x00521df6);
    /* 00521df6: cmp ebp, dword ptr [ecx + 0xc] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521df9: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521dfb:; BB(0x00521dfb);
    /* 00521dfb: cmp ebp, dword ptr [ecx + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521dfe: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521e00:; BB(0x00521e00);
    /* 00521e00: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521e03: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521e06: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e08: jle 0x521de7 */ if ((fZ||fS!=fO)) goto L_00521de7;
L_00521e0a:; BB(0x00521e0a);
    /* 00521e0a: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
L_00521e0e:; BB(0x00521e0e);
    /* 00521e0e: cmp ebp, dword ptr [eax + ebx*4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521e11: je 0x521e4e */ if (fZ) goto L_00521e4e;
L_00521e13:; BB(0x00521e13);
    /* 00521e13: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521e16: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e18: jl 0x521e0e */ if ((fS!=fO)) goto L_00521e0e;
L_00521e1a:; BB(0x00521e1a);
    /* 00521e1a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00521e1d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00521e21: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e23: jge 0x521e34 */ if ((fS==fO)) goto L_00521e34;
L_00521e25:; BB(0x00521e25);
    /* 00521e25: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 00521e29: mov edx, eax */ r_edx = r_eax;
    /* 00521e2b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00521e2d: mov dword ptr [eax + edx*4], ebp */ W32((u32)(r_eax+r_edx*4), r_ebp);
    /* 00521e30: add dword ptr [ebx + 8], 1 */ { u32 ad = (u32)(r_ebx+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00521e34:; BB(0x00521e34);
    /* 00521e34: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521e38: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00521e3c: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00521e3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00521e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00521e41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521e42: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x521e45u); call_ind(t); }
    /* 00521e45: mov eax, 1 */ r_eax = 0x1u;
    /* 00521e4a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00521e4e:; BB(0x00521e4e);
    /* 00521e4e: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521e51: jl 0x521d5c */ if ((fS!=fO)) goto L_00521d5c;
L_00521e57:; BB(0x00521e57);
    /* 00521e57: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
L_00521e5b:; BB(0x00521e5b);
    /* 00521e5b: mov eax, ebx */ r_eax = r_ebx;
    /* 00521e5d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521e60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521e61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521e62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521e63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00521e64: ret 0x10 */ FN_RET(0x00521cf8); r_esp += 20; return;
L_00521e67:; BB(0x00521e67);
    /* 00521e67: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00521e6b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00521e6d: jmp 0x521e0a */ goto L_00521e0a;
L_00521e6f:; BB(0x00521e6f);
    /* 00521e6f: mov eax, 1 */ r_eax = 0x1u;
    /* 00521e74: jmp 0x521dbe */ goto L_00521dbe;
L_00521e79:; BB(0x00521e79);
    /* 00521e79: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00521e7d: jmp 0x521e5b */ goto L_00521e5b;
L_00521e7f:; BB(0x00521e7f);
    /* 00521e7f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00521e81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00521e84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00521e85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00521e86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00521e87: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00521e88: ret 0x10 */ FN_RET(0x00521cf8); r_esp += 20; return;
}

void f_00521e8c(void) /* sub_521E8C */
{
    FN_ENTER(0x00521e8c);
    /* 00521e8c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00521e8e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00521e90: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00521e94: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00521e98: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x521e9bu); call_ind(t); }
    /* 00521e9b: ret 8 */ FN_RET(0x00521e8c); r_esp += 12; return;
}

void f_00521ea0(void) /* sub_521EA0 */
{
    FN_ENTER(0x00521ea0);
    /* 00521ea0: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00521ea5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00521ea7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00521eab: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00521eaf: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x521eb2u); call_ind(t); }
    /* 00521eb2: ret 8 */ FN_RET(0x00521ea0); r_esp += 12; return;
}

void f_00521eb8(void) /* sub_521EB8 */
{
    FN_ENTER(0x00521eb8);
    /* 00521eb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00521eb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00521eba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00521ebb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00521ebc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00521ebf: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00521ec1: mov eax, dword ptr [ebp + 0xac] */ r_eax = R32((u32)(r_ebp+0xacu));
    /* 00521ec7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00521ec9: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00521ecd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00521ecf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521ed1: je 0x522135 */ if (fZ) goto L_00522135;
L_00521ed7:; BB(0x00521ed7);
    /* 00521ed7: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x521edcu); f_007b51c4();
    /* 00521edc: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00521edf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00521ee1: je 0x521ef6 */ if (fZ) goto L_00521ef6;
L_00521ee3:; BB(0x00521ee3);
    /* 00521ee3: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00521ee7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00521ee9: call 0x7b8618 */ r_esp -= 4; W32(r_esp, 0x521eeeu); f_007b8618();
    /* 00521eee: mov ebx, 0x80000 */ r_ebx = 0x80000u;
    /* 00521ef3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
L_00521ef6:; BB(0x00521ef6);
    /* 00521ef6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00521ef8: je 0x521f07 */ if (fZ) goto L_00521f07;
L_00521efa:; BB(0x00521efa);
    /* 00521efa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00521efc: call 0x7b8980 */ r_esp -= 4; W32(r_esp, 0x521f01u); f_007b8980();
    /* 00521f01: or ebx, 0x100000 */ {  u32 a = r_ebx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_00521f07:; BB(0x00521f07);
    /* 00521f07: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00521f0d: test dword ptr [eax + 0x18], ebx */ {  u32 a = R32((u32)(r_eax+0x18u)); u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f10: je 0x52210e */ if (fZ) goto L_0052210e;
L_00521f16:; BB(0x00521f16);
    /* 00521f16: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00521f1a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00521f1c:; BB(0x00521f1c);
    /* 00521f1c: mov esi, dword ptr [ebx + 0xaad6e0] */ r_esi = R32((u32)(r_ebx+0xaad6e0u));
    /* 00521f22: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00521f25: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f27: je 0x52212f */ if (fZ) goto L_0052212f;
L_00521f2d:; BB(0x00521f2d);
    /* 00521f2d: movzx eax, word ptr [esi + 0x96] */ r_eax = (u32)R16((u32)(r_esi+0x96u));
    /* 00521f34: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f37: jne 0x522101 */ if (!fZ) goto L_00522101;
L_00521f3d:; BB(0x00521f3d);
    /* 00521f3d: cmp esi, dword ptr [ebp + 0xac] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xacu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f43: je 0x522101 */ if (fZ) goto L_00522101;
L_00521f49:; BB(0x00521f49);
    /* 00521f49: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00521f4c: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f51: jne 0x522101 */ if (!fZ) goto L_00522101;
L_00521f57:; BB(0x00521f57);
    /* 00521f57: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00521f5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f5d: je 0x5220ea */ if (fZ) goto L_005220ea;
L_00521f63:; BB(0x00521f63);
    /* 00521f63: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00521f67: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00521f6a: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 00521f6d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00521f71: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521f73: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00521f77: jl 0x522125 */ if ((fS!=fO)) goto L_00522125;
L_00521f7d:; BB(0x00521f7d);
    /* 00521f7d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00521f7f:; BB(0x00521f7f);
    /* 00521f7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521f81: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521f83:; BB(0x00521f83);
    /* 00521f83: mov eax, edx */ r_eax = r_edx;
    /* 00521f85: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00521f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00521f89: jle 0x521fd7 */ if ((fZ||fS!=fO)) goto L_00521fd7;
L_00521f8b:; BB(0x00521f8b);
    /* 00521f8b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521f8e: jl 0x52211a */ if ((fS!=fO)) goto L_0052211a;
L_00521f94:; BB(0x00521f94);
    /* 00521f94: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00521f98: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00521f9a: lea edx, [edx - 6] */ r_edx = (u32)(r_edx+0xfffffffau);
    /* 00521f9d: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 00521fa0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521fa2: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00521fa4:; BB(0x00521fa4);
    /* 00521fa4: cmp esi, dword ptr [eax + edi*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fa7: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fa9:; BB(0x00521fa9);
    /* 00521fa9: cmp esi, dword ptr [ecx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fac: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fae:; BB(0x00521fae);
    /* 00521fae: cmp esi, dword ptr [ecx + 8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fb1: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fb3:; BB(0x00521fb3);
    /* 00521fb3: cmp esi, dword ptr [ecx + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fb6: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fb8:; BB(0x00521fb8);
    /* 00521fb8: cmp esi, dword ptr [ecx + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fbb: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fbd:; BB(0x00521fbd);
    /* 00521fbd: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00521fc0: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00521fc3: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521fc5: jle 0x521fa4 */ if ((fZ||fS!=fO)) goto L_00521fa4;
L_00521fc7:; BB(0x00521fc7);
    /* 00521fc7: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
L_00521fcb:; BB(0x00521fcb);
    /* 00521fcb: cmp esi, dword ptr [eax + edi*4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+r_edi*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00521fce: je 0x521ffb */ if (fZ) goto L_00521ffb;
L_00521fd0:; BB(0x00521fd0);
    /* 00521fd0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00521fd3: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521fd5: jl 0x521fcb */ if ((fS!=fO)) goto L_00521fcb;
L_00521fd7:; BB(0x00521fd7);
    /* 00521fd7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00521fdb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00521fdf: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00521fe1: jge 0x5220ea */ if ((fS==fO)) goto L_005220ea;
L_00521fe7:; BB(0x00521fe7);
    /* 00521fe7: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00521feb: mov edx, eax */ r_edx = r_eax;
    /* 00521fed: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00521fef: mov dword ptr [eax + edx*4], esi */ W32((u32)(r_eax+r_edx*4), r_esi);
    /* 00521ff2: add dword ptr [edi + 8], 1 */ { u32 ad = (u32)(r_edi+0x8u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00521ff6: jmp 0x5220ea */ goto L_005220ea;
L_00521ffb:; BB(0x00521ffb);
    /* 00521ffb: mov edx, dword ptr [esi + 0xa8] */ r_edx = R32((u32)(r_esi+0xa8u));
    /* 00522001: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00522003: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00522005: jle 0x522101 */ if ((fZ||fS!=fO)) goto L_00522101;
L_0052200b:; BB(0x0052200b);
    /* 0052200b: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0052200e: jl 0x5220b3 */ if ((fS!=fO)) goto L_005220b3;
L_00522014:; BB(0x00522014);
    /* 00522014: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00522018: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0052201b: lea ecx, [edx - 6] */ r_ecx = (u32)(r_edx+0xfffffffau);
    /* 0052201e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00522021: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00522023: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00522025: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00522027: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00522029: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0052202b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0052202d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0052202f:; BB(0x0052202f);
    /* 0052202f: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 00522035: mov ebx, dword ptr [edi + ebp + 0x18] */ r_ebx = R32((u32)(r_edi+r_ebp+0x18u));
    /* 00522039: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0052203f: mov dword ptr [edi + ebp + 0x18], ebx */ W32((u32)(r_edi+r_ebp+0x18u), r_ebx);
    /* 00522043: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 00522049: mov ebx, dword ptr [edi + ebp + 0x44] */ r_ebx = R32((u32)(r_edi+r_ebp+0x44u));
    /* 0052204d: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00522053: mov dword ptr [edi + ebp + 0x44], ebx */ W32((u32)(r_edi+r_ebp+0x44u), r_ebx);
    /* 00522057: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 0052205d: mov ebx, dword ptr [edi + ebp + 0x70] */ r_ebx = R32((u32)(r_edi+r_ebp+0x70u));
    /* 00522061: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00522067: mov dword ptr [edi + ebp + 0x70], ebx */ W32((u32)(r_edi+r_ebp+0x70u), r_ebx);
    /* 0052206b: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 00522071: mov ebx, dword ptr [edi + ebp + 0x9c] */ r_ebx = R32((u32)(r_edi+r_ebp+0x9cu));
    /* 00522078: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0052207e: mov dword ptr [edi + ebp + 0x9c], ebx */ W32((u32)(r_edi+r_ebp+0x9cu), r_ebx);
    /* 00522085: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 0052208b: mov ebx, dword ptr [edi + ebp + 0xc8] */ r_ebx = R32((u32)(r_edi+r_ebp+0xc8u));
    /* 00522092: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00522098: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052209b: mov dword ptr [edi + ebp + 0xc8], ebx */ W32((u32)(r_edi+r_ebp+0xc8u), r_ebx);
    /* 005220a2: add edi, 0xdc */ {  u32 a = r_edi; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220a8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005220aa: jle 0x52202f */ if ((fZ||fS!=fO)) goto L_0052202f;
L_005220ac:; BB(0x005220ac);
    /* 005220ac: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 005220b0: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005220b3:; BB(0x005220b3);
    /* 005220b3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005220b6: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005220b9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220bb: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005220bd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220bf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220c1: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005220c3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220c5: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_005220c7:; BB(0x005220c7);
    /* 005220c7: mov ebp, dword ptr [esi + 0xa4] */ r_ebp = R32((u32)(r_esi+0xa4u));
    /* 005220cd: mov ecx, dword ptr [edi + ebp + 0x18] */ r_ecx = R32((u32)(r_edi+r_ebp+0x18u));
    /* 005220d1: and ecx, 0xfbffffff */ {  u32 a = r_ecx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005220d7: mov dword ptr [edi + ebp + 0x18], ecx */ W32((u32)(r_edi+r_ebp+0x18u), r_ecx);
    /* 005220db: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005220de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005220e1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005220e3: jl 0x5220c7 */ if ((fS!=fO)) goto L_005220c7;
L_005220e5:; BB(0x005220e5);
    /* 005220e5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005220e8: jmp 0x522101 */ goto L_00522101;
L_005220ea:; BB(0x005220ea);
    /* 005220ea: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005220ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005220ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005220f0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005220f3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005220f5: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5220f8u); call_ind(t); }
    /* 005220f8: mov eax, 1 */ r_eax = 0x1u;
    /* 005220fd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_00522101:; BB(0x00522101);
    /* 00522101: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00522104: jl 0x521f1c */ if ((fS!=fO)) goto L_00521f1c;
L_0052210a:; BB(0x0052210a);
    /* 0052210a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0052210e:; BB(0x0052210e);
    /* 0052210e: mov eax, esi */ r_eax = r_esi;
    /* 00522110: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00522113: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00522114: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00522115: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00522116: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00522117: ret 0xc */ FN_RET(0x00521eb8); r_esp += 16; return;
L_0052211a:; BB(0x0052211a);
    /* 0052211a: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 0052211e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00522120: jmp 0x521fc7 */ goto L_00521fc7;
L_00522125:; BB(0x00522125);
    /* 00522125: mov eax, 1 */ r_eax = 0x1u;
    /* 0052212a: jmp 0x521f7f */ goto L_00521f7f;
L_0052212f:; BB(0x0052212f);
    /* 0052212f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00522133: jmp 0x52210e */ goto L_0052210e;
L_00522135:; BB(0x00522135);
    /* 00522135: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00522137: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0052213a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0052213b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0052213c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052213d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0052213e: ret 0xc */ FN_RET(0x00521eb8); r_esp += 16; return;
}

