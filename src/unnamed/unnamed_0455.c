#include "protos.h"

void f_004551f4(void) /* sub_4551F4 */
{
    FN_ENTER(0x004551f4);
    /* 004551f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004551f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004551f6: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004551fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004551fe: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x455203u); f_0082d7b0();
    /* 00455203: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00455205: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x45520au); f_00830cd8();
    /* 0045520a: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0045520d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045520f: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x455214u); f_008316b4();
    /* 00455214: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00455217: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00455219: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45521eu); f_0082d8bc();
    /* 0045521e: mov edx, dword ptr [ebp + 0x3d8] */ r_edx = R32((u32)(r_ebp+0x3d8u));
    /* 00455224: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00455226: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455228: jle 0x455274 */ if ((fZ||fS!=fO)) goto L_00455274;
L_0045522a:; BB(0x0045522a);
    /* 0045522a: mov edi, eax */ r_edi = r_eax;
L_0045522c:; BB(0x0045522c);
    /* 0045522c: mov edx, dword ptr [edi*8 + 0xa456c4] */ r_edx = R32((u32)(r_edi*8+0xa456c4u));
    /* 00455233: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045523b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045523d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00455240: mov edx, dword ptr [edi*8 + 0xa456c8] */ r_edx = R32((u32)(r_edi*8+0xa456c8u));
    /* 00455247: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045524b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455254: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x455259u); f_00830aa0();
    /* 00455259: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0045525d: mov dword ptr [esp + edi*8 + 0x18], edx */ W32((u32)(r_esp+r_edi*8+0x18u), r_edx);
    /* 00455261: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00455265: mov dword ptr [esp + edi*8 + 0x1c], edx */ W32((u32)(r_esp+r_edi*8+0x1cu), r_edx);
    /* 00455269: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045526c: cmp edi, dword ptr [ebp + 0x3d8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455272: jl 0x45522c */ if ((fS!=fO)) goto L_0045522c;
L_00455274:; BB(0x00455274);
    /* 00455274: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455279u); f_0082da80();
    /* 00455279: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0045527e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455282: jle 0x4552ad */ if ((fZ||fS!=fO)) goto L_004552ad;
L_00455284:; BB(0x00455284);
    /* 00455284: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00455288: mov esi, ebp */ r_esi = r_ebp;
    /* 0045528a: mov ebp, edx */ r_ebp = r_edx;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
L_004552ad:; BB(0x004552ad);
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x004551f4); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455241(void)
{
    FN_ENTER(0x00455241);
    goto L_00455241;
L_0045522c:; BB(0x0045522c);
    /* 0045522c: mov edx, dword ptr [edi*8 + 0xa456c4] */ r_edx = R32((u32)(r_edi*8+0xa456c4u));
    /* 00455233: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045523b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045523d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00455240: mov edx, dword ptr [edi*8 + 0xa456c8] */ r_edx = R32((u32)(r_edi*8+0xa456c8u));
L_00455241:; BB(0x00455241);
    /* 00455241: adc al, 0xfd */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfdu; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00455243: enter -0x5baa, 0 */ { u32 f = 0xa456u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00455247: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045524b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455254: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x455259u); f_00830aa0();
    /* 00455259: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0045525d: mov dword ptr [esp + edi*8 + 0x18], edx */ W32((u32)(r_esp+r_edi*8+0x18u), r_edx);
    /* 00455261: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00455265: mov dword ptr [esp + edi*8 + 0x1c], edx */ W32((u32)(r_esp+r_edi*8+0x1cu), r_edx);
    /* 00455269: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045526c: cmp edi, dword ptr [ebp + 0x3d8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455272: jl 0x45522c */ if ((fS!=fO)) goto L_0045522c;
L_00455274:; BB(0x00455274);
    /* 00455274: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455279u); f_0082da80();
    /* 00455279: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0045527e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455282: jle 0x4552ad */ if ((fZ||fS!=fO)) goto L_004552ad;
L_00455284:; BB(0x00455284);
    /* 00455284: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00455288: mov esi, ebp */ r_esi = r_ebp;
    /* 0045528a: mov ebp, edx */ r_ebp = r_edx;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
L_004552ad:; BB(0x004552ad);
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455241); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455249(void)
{
    FN_ENTER(0x00455249);
    goto L_00455249;
L_0045522c:; BB(0x0045522c);
    /* 0045522c: mov edx, dword ptr [edi*8 + 0xa456c4] */ r_edx = R32((u32)(r_edi*8+0xa456c4u));
    /* 00455233: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045523b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045523d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00455240: mov edx, dword ptr [edi*8 + 0xa456c8] */ r_edx = R32((u32)(r_edi*8+0xa456c8u));
    /* 00455247: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_00455249:; BB(0x00455249);
    /* 00455249: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045524b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455254: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x455259u); f_00830aa0();
    /* 00455259: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0045525d: mov dword ptr [esp + edi*8 + 0x18], edx */ W32((u32)(r_esp+r_edi*8+0x18u), r_edx);
    /* 00455261: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00455265: mov dword ptr [esp + edi*8 + 0x1c], edx */ W32((u32)(r_esp+r_edi*8+0x1cu), r_edx);
    /* 00455269: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045526c: cmp edi, dword ptr [ebp + 0x3d8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455272: jl 0x45522c */ if ((fS!=fO)) goto L_0045522c;
L_00455274:; BB(0x00455274);
    /* 00455274: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455279u); f_0082da80();
    /* 00455279: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0045527e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455282: jle 0x4552ad */ if ((fZ||fS!=fO)) goto L_004552ad;
L_00455284:; BB(0x00455284);
    /* 00455284: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00455288: mov esi, ebp */ r_esi = r_ebp;
    /* 0045528a: mov ebp, edx */ r_ebp = r_edx;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
L_004552ad:; BB(0x004552ad);
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455249); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455250(void)
{
    FN_ENTER(0x00455250);
    goto L_00455250;
L_0045522c:; BB(0x0045522c);
    /* 0045522c: mov edx, dword ptr [edi*8 + 0xa456c4] */ r_edx = R32((u32)(r_edi*8+0xa456c4u));
    /* 00455233: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045523b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045523d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00455240: mov edx, dword ptr [edi*8 + 0xa456c8] */ r_edx = R32((u32)(r_edi*8+0xa456c8u));
    /* 00455247: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045524b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
L_00455250:; BB(0x00455250);
    /* 00455250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455254: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x455259u); f_00830aa0();
    /* 00455259: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0045525d: mov dword ptr [esp + edi*8 + 0x18], edx */ W32((u32)(r_esp+r_edi*8+0x18u), r_edx);
    /* 00455261: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00455265: mov dword ptr [esp + edi*8 + 0x1c], edx */ W32((u32)(r_esp+r_edi*8+0x1cu), r_edx);
    /* 00455269: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045526c: cmp edi, dword ptr [ebp + 0x3d8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455272: jl 0x45522c */ if ((fS!=fO)) goto L_0045522c;
L_00455274:; BB(0x00455274);
    /* 00455274: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455279u); f_0082da80();
    /* 00455279: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0045527e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455282: jle 0x4552ad */ if ((fZ||fS!=fO)) goto L_004552ad;
L_00455284:; BB(0x00455284);
    /* 00455284: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00455288: mov esi, ebp */ r_esi = r_ebp;
    /* 0045528a: mov ebp, edx */ r_ebp = r_edx;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
L_004552ad:; BB(0x004552ad);
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455250); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455255(void)
{
    FN_ENTER(0x00455255);
    goto L_00455255;
L_0045522c:; BB(0x0045522c);
    /* 0045522c: mov edx, dword ptr [edi*8 + 0xa456c4] */ r_edx = R32((u32)(r_edi*8+0xa456c4u));
    /* 00455233: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0045523b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045523d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00455240: mov edx, dword ptr [edi*8 + 0xa456c8] */ r_edx = R32((u32)(r_edi*8+0xa456c8u));
    /* 00455247: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045524b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045524f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455250: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455254: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x455259u); f_00830aa0();
L_00455255:; BB(0x00455255);
    /* 00455255: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00455256: mov eax, 0x548b003d */ r_eax = 0x548b003du;
    /* 00455259: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0045525b: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045525d: mov dword ptr [esp + edi*8 + 0x18], edx */ W32((u32)(r_esp+r_edi*8+0x18u), r_edx);
    /* 00455261: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00455265: mov dword ptr [esp + edi*8 + 0x1c], edx */ W32((u32)(r_esp+r_edi*8+0x1cu), r_edx);
    /* 00455269: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045526c: cmp edi, dword ptr [ebp + 0x3d8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455272: jl 0x45522c */ if ((fS!=fO)) goto L_0045522c;
L_00455274:; BB(0x00455274);
    /* 00455274: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455279u); f_0082da80();
    /* 00455279: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0045527e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00455280: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00455282: jle 0x4552ad */ if ((fZ||fS!=fO)) goto L_004552ad;
L_00455284:; BB(0x00455284);
    /* 00455284: mov dword ptr [esp + 0x78], esi */ W32((u32)(r_esp+0x78u), r_esi);
    /* 00455288: mov esi, ebp */ r_esi = r_ebp;
    /* 0045528a: mov ebp, edx */ r_ebp = r_edx;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
L_004552ad:; BB(0x004552ad);
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455255); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455345(void)
{
    FN_ENTER(0x00455345);
    goto L_00455345;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455345); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
L_00455345:; BB(0x00455345);
    /* 00455345: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455349(void)
{
    FN_ENTER(0x00455349);
    goto L_00455349;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455349); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_0045534f(void)
{
    FN_ENTER(0x0045534f);
    goto L_0045534f;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x0045534f); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
L_0045534f:; BB(0x0045534f);
    /* 0045534f: sbb eax, 0x8ffee0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x8ffee0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455350(void)
{
    FN_ENTER(0x00455350);
    goto L_00455350;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455350); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
L_00455350:; BB(0x00455350);
    /* 00455350: loopne 0x455350 */ r_ecx--; if (r_ecx && !fZ) goto L_00455350;
    /* 00455352: pop dword ptr [eax] */ { u32 v = R32(r_esp); r_esp += 4; W32((u32)(r_eax), v); }
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455441(void)
{
    FN_ENTER(0x00455441);
    goto L_00455441;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455441); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
L_00455441:; BB(0x00455441);
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455449(void)
{
    FN_ENTER(0x00455449);
    goto L_00455449;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455449); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
L_00455449:; BB(0x00455449);
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455455(void)
{
    FN_ENTER(0x00455455);
    goto L_00455455;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x00455455); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
L_00455455:; BB(0x00455455);
    /* 00455455: and al, 0x60 */ {  u32 a = (u8)r_eax; u32 b = 0x60u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_0045554c(void)
{
    FN_ENTER(0x0045554c);
    goto L_0045554c;
L_0045528c:; BB(0x0045528c);
    /* 0045528c: mov edi, dword ptr [ebp*4 + 0xaad720] */ r_edi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00455293: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455295: je 0x4552a2 */ if (fZ) goto L_004552a2;
L_00455297:; BB(0x00455297);
    /* 00455297: mov edx, dword ptr [edi + 0x3ec] */ r_edx = R32((u32)(r_edi+0x3ecu));
    /* 0045529d: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004552a0: je 0x4552b6 */ if (fZ) goto L_004552b6;
L_004552a2:; BB(0x004552a2);
    /* 004552a2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004552a5: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004552a7: jl 0x45528c */ if ((fS!=fO)) goto L_0045528c;
L_004552a9:; BB(0x004552a9);
    /* 004552a9: mov esi, dword ptr [esp + 0x78] */ r_esi = R32((u32)(r_esp+0x78u));
    /* 004552ad: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004552b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004552b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004552b5: ret  */ FN_RET(0x0045554c); r_esp += 4; return;
L_004552b6:; BB(0x004552b6);
    /* 004552b6: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 004552b9: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 004552bc: mov ecx, dword ptr [esi + 0x3d8] */ r_ecx = R32((u32)(r_esi+0x3d8u));
    /* 004552c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 004552c6: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 004552c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 004552cd: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004552d0: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004552d3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004552d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004552d8: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 004552dc: mov edx, 0 */ r_edx = 0x0u;
    /* 004552e1: jle 0x45555e */ if ((fZ||fS!=fO)) goto L_0045555e;
L_004552e7:; BB(0x004552e7);
    /* 004552e7: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 004552eb: mov dword ptr [esp + 0x70], ebp */ W32((u32)(r_esp+0x70u), r_ebp);
    /* 004552ef: mov ebp, eax */ r_ebp = r_eax;
    /* 004552f1: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 004552f5: mov ebx, edx */ r_ebx = r_edx;
    /* 004552f7: jmp 0x455301 */ goto L_00455301;
L_004552f9:; BB(0x004552f9);
    /* 004552f9: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 004552fd: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
L_00455301:; BB(0x00455301);
    /* 00455301: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455303: fsub dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 00455307: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455309: fsub dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 0045530d: fld dword ptr [ebx*4 + 0xa456f4] */ FPUSH(R_F32((u32)(r_ebx*4+0xa456f4u)));
    /* 00455314: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455318: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045531a: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0045531e: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 00455322: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455326: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0045532e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455333u); f_0083173c();
    /* 00455333: fcom dword ptr [esp + 0x7c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x7cu))); 
    /* 00455337: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455339: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045533a: jbe 0x45534e */ if ((fC||fZ)) goto L_0045534e;
L_0045533c:; BB(0x0045533c);
    /* 0045533c: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0045533e:; BB(0x0045533e);
    /* 0045533e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00455341: cmp ebx, dword ptr [esi + 0x3d8] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3d8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455347: jl 0x4552f9 */ if ((fS!=fO)) goto L_004552f9;
L_00455349:; BB(0x00455349);
    /* 00455349: jmp 0x45548a */ goto L_0045548a;
L_0045534e:; BB(0x0045534e);
    /* 0045534e: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 00455354: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455356: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455357: je 0x455517 */ if (fZ) goto L_00455517;
L_0045535d:; BB(0x0045535d);
    /* 0045535d: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 00455361: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x455366u); f_0082df08();
    /* 00455366: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455368: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 0045536f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455371: jne 0x45538d */ if (!fZ) goto L_0045538d;
L_00455373:; BB(0x00455373);
    /* 00455373: fld dword ptr [0x8ffed8] */ FPUSH(R_F32((u32)(0x8ffed8u)));
    /* 00455379: mov dword ptr [0xa45248], 0x3f400000 */ W32((u32)(0xa45248u), 0x3f400000u);
    /* 00455383: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455386: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 0045538b: jmp 0x455393 */ goto L_00455393;
L_0045538d:; BB(0x0045538d);
    /* 0045538d: fld dword ptr [0xa45248] */ FPUSH(R_F32((u32)(0xa45248u)));
L_00455393:; BB(0x00455393);
    /* 00455393: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00455397: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0045539b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045539d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004553a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004553a3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 004553a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553a9: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 004553ad: fadd dword ptr [esp + ebx*8 + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x18u));
    /* 004553b1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553b3: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004553b7: fadd dword ptr [esp + ebx*8 + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+r_ebx*8+0x1cu));
    /* 004553bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004553bd: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 004553c1: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004553c5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004553c7: fst dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0));
    /* 004553cb: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_004553cf:; BB(0x004553cf);
    /* 004553cf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004553d1: jne 0x4553ef */ if (!fZ) goto L_004553ef;
L_004553d3:; BB(0x004553d3);
    /* 004553d3: fld dword ptr [0x8ffed4] */ FPUSH(R_F32((u32)(0x8ffed4u)));
    /* 004553d9: mov dword ptr [0xa45250], 0x40a00000 */ W32((u32)(0xa45250u), 0x40a00000u);
    /* 004553e3: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004553e8: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
    /* 004553ed: jmp 0x4553f5 */ goto L_004553f5;
L_004553ef:; BB(0x004553ef);
    /* 004553ef: fld dword ptr [0xa45250] */ FPUSH(R_F32((u32)(0xa45250u)));
L_004553f5:; BB(0x004553f5);
    /* 004553f5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004553f7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 004553fb: lea edi, [esp + 0x60] */ r_edi = (u32)(r_esp+0x60u);
    /* 004553ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455401: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455402: mov ecx, esi */ r_ecx = r_esi;
    /* 00455404: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x455409u); f_007b4c58();
    /* 00455409: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045540b: jne 0x4554fa */ if (!fZ) goto L_004554fa;
L_00455411:; BB(0x00455411);
    /* 00455411: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455418: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045541a: jne 0x455430 */ if (!fZ) goto L_00455430;
L_0045541c:; BB(0x0045541c);
    /* 0045541c: mov dword ptr [0xa45254], 0x3e800000 */ W32((u32)(0xa45254u), 0x3e800000u);
    /* 00455426: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045542b: mov byte ptr [0xa4524c], al */ W8((u32)(0xa4524cu), (u8)r_eax);
L_00455430:; BB(0x00455430);
    /* 00455430: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 00455438: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 0045543c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455441u); f_0083173c();
    /* 00455441: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455445: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455449: fsub dword ptr [0xa45254] */ ST(0) = ST(0) - R_F32((u32)(0xa45254u));
    /* 0045544f: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00455453: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 00455457: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45545cu); f_0082df08();
    /* 0045545c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045545e: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00455462: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 00455466: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00455468: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 0045546c: movzx eax, byte ptr [0xa4524c] */ r_eax = (u32)R8((u32)(0xa4524cu));
    /* 00455473: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455475: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455477: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 0045547b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 0045547f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00455481: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 00455485: jmp 0x4553cf */ goto L_004553cf;
L_0045548a:; BB(0x0045548a);
    /* 0045548a: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 0045548e: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00455492: mov eax, ebp */ r_eax = r_ebp;
    /* 00455494: mov ebp, dword ptr [esp + 0x70] */ r_ebp = R32((u32)(r_esp+0x70u));
L_00455498:; BB(0x00455498);
    /* 00455498: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 0045549c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045549d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045549e: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x4554a3u); f_00836208();
    /* 004554a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004554a6: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 004554ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004554ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004554af: ja 0x4554bb */ if ((!fC&&!fZ)) goto L_004554bb;
L_004554b1:; BB(0x004554b1);
    /* 004554b1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554b6: jmp 0x4552a2 */ goto L_004552a2;
L_004554bb:; BB(0x004554bb);
    /* 004554bb: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 004554bf: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 004554c3: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 004554c7: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004554ca: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004554cd: mov dword ptr [edi + 0x40], ecx */ W32((u32)(r_edi+0x40u), r_ecx);
    /* 004554d0: push 0x900000 */ { u32 v = 0x900000u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004554d7: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 004554da: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004554dd: mov dword ptr [edi + 0x4c], ecx */ W32((u32)(r_edi+0x4cu), r_ecx);
    /* 004554e0: mov ecx, edi */ r_ecx = r_edi;
    /* 004554e2: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x4554e7u); f_007b52c4();
    /* 004554e7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004554ea: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004554ed: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004554f0: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004554f5: jmp 0x4552a2 */ goto L_004552a2;
L_004554fa:; BB(0x004554fa);
    /* 004554fa: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 004554fe: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00455502: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 00455506: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0045550a: mov edi, dword ptr [esp + 0x68] */ r_edi = R32((u32)(r_esp+0x68u));
    /* 0045550e: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00455512: jmp 0x45533e */ goto L_0045533e;
L_00455517:; BB(0x00455517);
    /* 00455517: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0045551b: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 0045551f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00455523: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455527: lea ecx, [esp + 0x54] */ r_ecx = (u32)(r_esp+0x54u);
    /* 0045552b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045552d: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455531: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x455536u); f_0083173c();
    /* 00455536: fcomp dword ptr [0x8ffee0] */ fx_compare(ST(0), R_F32((u32)(0x8ffee0u))); FPOP();
    /* 0045553c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045553e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045553f: jne 0x45535d */ if (!fZ) goto L_0045535d;
L_00455545:; BB(0x00455545);
    /* 00455545: mov dword ptr [esp + 0x54], 0x3f800000 */ W32((u32)(r_esp+0x54u), 0x3f800000u);
L_0045554c:; BB(0x0045554c);
    /* 0045554c: aas  */ UNSUP(0x0045554c, "aas ");
    /* 0045554d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0045554f: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 00455553: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00455555: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00455559: jmp 0x45535d */ goto L_0045535d;
L_0045555e:; BB(0x0045555e);
    /* 0045555e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455562: jmp 0x455498 */ goto L_00455498;
}

void f_00455568(void) /* sub_455568 */
{
    FN_ENTER(0x00455568);
    /* 00455568: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455569: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045556a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045556b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045556c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045556e: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x455573u); f_00578b38();
    /* 00455573: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x455578u); f_0082d7b0();
    /* 00455578: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0045557b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x455580u); f_0082d838();
    /* 00455580: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00455583: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00455585: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45558au); f_0082d8bc();
    /* 0045558a: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45558fu); f_0082fa9c();
    /* 0045558f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00455591: mov ebp, eax */ r_ebp = r_eax;
L_00455593:; BB(0x00455593);
    /* 00455593: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045559a: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4555a5u); f_005b8624();
    /* 004555a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004555a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4555acu); f_00829cc8();
    /* 004555ac: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555af: jl 0x4556a1 */ if ((fS!=fO)) goto L_004556a1;
L_004555b5:; BB(0x004555b5);
    /* 004555b5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555b8: jle 0x455624 */ if ((fZ||fS!=fO)) goto L_00455624;
L_004555ba:; BB(0x004555ba);
    /* 004555ba: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555bd: jne 0x4556a1 */ if (!fZ) goto L_004556a1;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 004555c9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4555ceu); f_00588428();
    /* 004555ce: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555d5: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555db: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4555e0u); f_005b8610();
    /* 004555e0: mov esi, eax */ r_esi = r_eax;
    /* 004555e2: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004555e8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f8: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x455604u); f_005b8638();
    /* 00455604: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045560b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045560c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x455611u); f_0083046c();
    /* 00455611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455614: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045561a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45561fu); f_00452050();
    /* 0045561f: jmp 0x4556e7 */ goto L_004556e7;
L_00455624:; BB(0x00455624);
    /* 00455624: push dword ptr [ebx + 0x3e8] */ { u32 v = R32((u32)(r_ebx+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045562a: push dword ptr [ebx + 0x3e4] */ { u32 v = R32((u32)(r_ebx+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455630: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00455634: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x455639u); f_0048e148();
    /* 00455639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045563c: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455643: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x455648u); f_00588428();
    /* 00455648: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045564f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455655: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45565au); f_005b8610();
    /* 0045565a: mov esi, eax */ r_esi = r_eax;
    /* 0045565c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 00455662: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455668: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455670: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455672: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455679: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45567eu); f_005b8638();
    /* 0045567e: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455686: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45568bu); f_0083046c();
    /* 0045568b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045568e: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455695: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45569au); f_00452050();
    /* 0045569a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45569fu); f_0048e364();
    /* 0045569f: jmp 0x4556e7 */ goto L_004556e7;
L_004556a1:; BB(0x004556a1);
    /* 004556a1: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4556b3u); f_005b8610();
    /* 004556b3: mov esi, eax */ r_esi = r_eax;
    /* 004556b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004556bb: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556cb: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556d2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4556d7u); f_005b8638();
    /* 004556d7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004556df: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4556e4u); f_0083046c();
    /* 004556e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004556e7:; BB(0x004556e7);
    /* 004556e7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004556ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556ed: jl 0x455593 */ if ((fS!=fO)) goto L_00455593;
L_004556f3:; BB(0x004556f3);
    /* 004556f3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4556f8u); f_0082faac();
    /* 004556f8: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00455702: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455707u); f_0082da80();
    /* 00455707: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45570cu); f_0082dab0();
    /* 0045570c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045570d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045570e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455710: ret  */ FN_RET(0x00455568); r_esp += 4; return;
}

void f_00455641(void)
{
    FN_ENTER(0x00455641);
    goto L_00455641;
L_00455593:; BB(0x00455593);
    /* 00455593: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045559a: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4555a5u); f_005b8624();
    /* 004555a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004555a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4555acu); f_00829cc8();
    /* 004555ac: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555af: jl 0x4556a1 */ if ((fS!=fO)) goto L_004556a1;
L_004555b5:; BB(0x004555b5);
    /* 004555b5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555b8: jle 0x455624 */ if ((fZ||fS!=fO)) goto L_00455624;
L_004555ba:; BB(0x004555ba);
    /* 004555ba: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555bd: jne 0x4556a1 */ if (!fZ) goto L_004556a1;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 004555c9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4555ceu); f_00588428();
    /* 004555ce: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555d5: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555db: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4555e0u); f_005b8610();
    /* 004555e0: mov esi, eax */ r_esi = r_eax;
    /* 004555e2: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004555e8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f8: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x455604u); f_005b8638();
    /* 00455604: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045560b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045560c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x455611u); f_0083046c();
    /* 00455611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455614: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045561a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45561fu); f_00452050();
    /* 0045561f: jmp 0x4556e7 */ goto L_004556e7;
L_00455624:; BB(0x00455624);
    /* 00455624: push dword ptr [ebx + 0x3e8] */ { u32 v = R32((u32)(r_ebx+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045562a: push dword ptr [ebx + 0x3e4] */ { u32 v = R32((u32)(r_ebx+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455630: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00455634: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x455639u); f_0048e148();
    /* 00455639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045563c: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
L_00455641:; BB(0x00455641);
    /* 00455641: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00455643: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x455648u); f_00588428();
    /* 00455648: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045564f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455655: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45565au); f_005b8610();
    /* 0045565a: mov esi, eax */ r_esi = r_eax;
    /* 0045565c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 00455662: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455668: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455670: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455672: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455679: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45567eu); f_005b8638();
    /* 0045567e: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455686: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45568bu); f_0083046c();
    /* 0045568b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045568e: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455695: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45569au); f_00452050();
    /* 0045569a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45569fu); f_0048e364();
    /* 0045569f: jmp 0x4556e7 */ goto L_004556e7;
L_004556a1:; BB(0x004556a1);
    /* 004556a1: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4556b3u); f_005b8610();
    /* 004556b3: mov esi, eax */ r_esi = r_eax;
    /* 004556b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004556bb: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556cb: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556d2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4556d7u); f_005b8638();
    /* 004556d7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004556df: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4556e4u); f_0083046c();
    /* 004556e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004556e7:; BB(0x004556e7);
    /* 004556e7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004556ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556ed: jl 0x455593 */ if ((fS!=fO)) goto L_00455593;
L_004556f3:; BB(0x004556f3);
    /* 004556f3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4556f8u); f_0082faac();
    /* 004556f8: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00455702: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455707u); f_0082da80();
    /* 00455707: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45570cu); f_0082dab0();
    /* 0045570c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045570d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045570e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455710: ret  */ FN_RET(0x00455641); r_esp += 4; return;
}

void f_00455649(void)
{
    FN_ENTER(0x00455649);
    goto L_00455649;
L_00455593:; BB(0x00455593);
    /* 00455593: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045559a: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4555a5u); f_005b8624();
    /* 004555a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004555a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4555acu); f_00829cc8();
    /* 004555ac: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555af: jl 0x4556a1 */ if ((fS!=fO)) goto L_004556a1;
L_004555b5:; BB(0x004555b5);
    /* 004555b5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555b8: jle 0x455624 */ if ((fZ||fS!=fO)) goto L_00455624;
L_004555ba:; BB(0x004555ba);
    /* 004555ba: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555bd: jne 0x4556a1 */ if (!fZ) goto L_004556a1;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 004555c9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4555ceu); f_00588428();
    /* 004555ce: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555d5: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555db: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4555e0u); f_005b8610();
    /* 004555e0: mov esi, eax */ r_esi = r_eax;
    /* 004555e2: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004555e8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f8: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x455604u); f_005b8638();
    /* 00455604: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045560b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045560c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x455611u); f_0083046c();
    /* 00455611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455614: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045561a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45561fu); f_00452050();
    /* 0045561f: jmp 0x4556e7 */ goto L_004556e7;
L_00455624:; BB(0x00455624);
    /* 00455624: push dword ptr [ebx + 0x3e8] */ { u32 v = R32((u32)(r_ebx+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045562a: push dword ptr [ebx + 0x3e4] */ { u32 v = R32((u32)(r_ebx+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455630: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00455634: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x455639u); f_0048e148();
    /* 00455639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045563c: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455643: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x455648u); f_00588428();
    /* 00455648: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
L_00455649:; BB(0x00455649);
    /* 00455649: xor al, 0xad */ {  u32 a = (u8)r_eax; u32 b = 0xadu; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045564b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045564c: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 0045564d: lcall 3, 0x988b8b00 */ UNSUP(0x0045564d, "lcall 3, 0x988b8b00");
    /* 0045564f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455654: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00455655: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45565au); f_005b8610();
    /* 00455656: mov dh, 0x2f */ r_edx = (r_edx & 0xffff00ffu) | (((0x2fu) & 0xffu) << 8);
    /* 00455658: push ss */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00455659: add byte ptr [ebx - 0x136c7410], cl */ { u32 ad = (u32)(r_ebx+0xec938bf0u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045565a: mov esi, eax */ r_esi = r_eax;
    /* 0045565c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 0045565f: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455661: add byte ptr [ebx + 0x3988b], cl */ { u32 ad = (u32)(r_ebx+0x3988bu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00455662: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455667: add byte ptr [ebx], al */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00455668: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455669: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 0045566a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566b: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 0045566c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566d: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 0045566e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566f: rol byte ptr [ebx], cl */ { u32 ad = (u32)(r_ebx); u32 c = ((u8)r_ecx) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a << k) | (a >> (8 - k))) & 0xffu) : a; } W8(ad, r); fC = r & 1; fO = ((r >> 7) ^ r) & 1; } }
    /* 00455670: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455671: sar bh, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = (u8)(r_ebx>>8); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  } }
    /* 00455672: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455673: mov ah, 0xaa */ r_eax = (r_eax & 0xffff00ffu) | (((0xaau) & 0xffu) << 8);
    /* 00455675: sub byte ptr [esi - 0x66], bl */ { u32 ad = (u32)(r_esi+0xffffff9au);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 00455678: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00455679: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45567eu); f_005b8638();
    /* 0045567a: mov edx, 0xff00162f */ r_edx = 0xff00162fu;
    /* 0045567e: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045567f: mov bl, 0xf0 */ r_ebx = (r_ebx & 0xffffff00u) | ((0xf0u) & 0xffu);
    /* 00455681: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455683: add byte ptr [eax + 0x56], dl */ { u32 ad = (u32)(r_eax+0x56u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00455684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455686: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45568bu); f_0083046c();
    /* 0045568b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045568e: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455695: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45569au); f_00452050();
    /* 0045569a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45569fu); f_0048e364();
    /* 0045569f: jmp 0x4556e7 */ goto L_004556e7;
L_004556a1:; BB(0x004556a1);
    /* 004556a1: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4556b3u); f_005b8610();
    /* 004556b3: mov esi, eax */ r_esi = r_eax;
    /* 004556b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004556bb: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556cb: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556d2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4556d7u); f_005b8638();
    /* 004556d7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004556df: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4556e4u); f_0083046c();
    /* 004556e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004556e7:; BB(0x004556e7);
    /* 004556e7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004556ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556ed: jl 0x455593 */ if ((fS!=fO)) goto L_00455593;
L_004556f3:; BB(0x004556f3);
    /* 004556f3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4556f8u); f_0082faac();
    /* 004556f8: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00455702: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455707u); f_0082da80();
    /* 00455707: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45570cu); f_0082dab0();
    /* 0045570c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045570d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045570e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455710: ret  */ FN_RET(0x00455649); r_esp += 4; return;
}

void f_0045564f(void)
{
    FN_ENTER(0x0045564f);
    goto L_0045564f;
L_00455593:; BB(0x00455593);
    /* 00455593: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045559a: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4555a5u); f_005b8624();
    /* 004555a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004555a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4555acu); f_00829cc8();
    /* 004555ac: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555af: jl 0x4556a1 */ if ((fS!=fO)) goto L_004556a1;
L_004555b5:; BB(0x004555b5);
    /* 004555b5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555b8: jle 0x455624 */ if ((fZ||fS!=fO)) goto L_00455624;
L_004555ba:; BB(0x004555ba);
    /* 004555ba: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555bd: jne 0x4556a1 */ if (!fZ) goto L_004556a1;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 004555c9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4555ceu); f_00588428();
    /* 004555ce: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555d5: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555db: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4555e0u); f_005b8610();
    /* 004555e0: mov esi, eax */ r_esi = r_eax;
    /* 004555e2: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004555e8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f8: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x455604u); f_005b8638();
    /* 00455604: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045560b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045560c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x455611u); f_0083046c();
    /* 00455611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455614: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045561a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45561fu); f_00452050();
    /* 0045561f: jmp 0x4556e7 */ goto L_004556e7;
L_00455624:; BB(0x00455624);
    /* 00455624: push dword ptr [ebx + 0x3e8] */ { u32 v = R32((u32)(r_ebx+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045562a: push dword ptr [ebx + 0x3e4] */ { u32 v = R32((u32)(r_ebx+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455630: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00455634: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x455639u); f_0048e148();
    /* 00455639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045563c: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455643: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x455648u); f_00588428();
    /* 00455648: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
L_0045564f:; BB(0x0045564f);
    /* 0045564f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455655: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45565au); f_005b8610();
    /* 0045565a: mov esi, eax */ r_esi = r_eax;
    /* 0045565c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 00455662: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455668: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455670: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455672: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455679: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45567eu); f_005b8638();
    /* 0045567e: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455686: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45568bu); f_0083046c();
    /* 0045568b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045568e: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455695: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45569au); f_00452050();
    /* 0045569a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45569fu); f_0048e364();
    /* 0045569f: jmp 0x4556e7 */ goto L_004556e7;
L_004556a1:; BB(0x004556a1);
    /* 004556a1: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4556b3u); f_005b8610();
    /* 004556b3: mov esi, eax */ r_esi = r_eax;
    /* 004556b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004556bb: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556cb: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556d2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4556d7u); f_005b8638();
    /* 004556d7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004556df: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4556e4u); f_0083046c();
    /* 004556e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004556e7:; BB(0x004556e7);
    /* 004556e7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004556ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556ed: jl 0x455593 */ if ((fS!=fO)) goto L_00455593;
L_004556f3:; BB(0x004556f3);
    /* 004556f3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4556f8u); f_0082faac();
    /* 004556f8: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00455702: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455707u); f_0082da80();
    /* 00455707: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45570cu); f_0082dab0();
    /* 0045570c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045570d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045570e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455710: ret  */ FN_RET(0x0045564f); r_esp += 4; return;
}

void f_00455653(void)
{
    FN_ENTER(0x00455653);
    goto L_00455653;
L_00455593:; BB(0x00455593);
    /* 00455593: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045559a: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555a0: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4555a5u); f_005b8624();
    /* 004555a5: mov ecx, eax */ r_ecx = r_eax;
    /* 004555a7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4555acu); f_00829cc8();
    /* 004555ac: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555af: jl 0x4556a1 */ if ((fS!=fO)) goto L_004556a1;
L_004555b5:; BB(0x004555b5);
    /* 004555b5: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004555b8: jle 0x455624 */ if ((fZ||fS!=fO)) goto L_00455624;
L_004555ba:; BB(0x004555ba);
    /* 004555ba: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004555bd: jne 0x4556a1 */ if (!fZ) goto L_004556a1;
L_004555c3:; BB(0x004555c3);
    /* 004555c3: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 004555c9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x4555ceu); f_00588428();
    /* 004555ce: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555d5: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555db: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4555e0u); f_005b8610();
    /* 004555e0: mov esi, eax */ r_esi = r_eax;
    /* 004555e2: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004555e8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004555ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004555f8: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004555ff: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x455604u); f_005b8638();
    /* 00455604: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045560a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045560b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045560c: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x455611u); f_0083046c();
    /* 00455611: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455614: mov ecx, dword ptr [ebx + 0x488] */ r_ecx = R32((u32)(r_ebx+0x488u));
    /* 0045561a: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45561fu); f_00452050();
    /* 0045561f: jmp 0x4556e7 */ goto L_004556e7;
L_00455624:; BB(0x00455624);
    /* 00455624: push dword ptr [ebx + 0x3e8] */ { u32 v = R32((u32)(r_ebx+0x3e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045562a: push dword ptr [ebx + 0x3e4] */ { u32 v = R32((u32)(r_ebx+0x3e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455630: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00455634: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x455639u); f_0048e148();
    /* 00455639: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045563c: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455643: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x455648u); f_00588428();
    /* 00455648: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045564f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
L_00455653:; BB(0x00455653);
    /* 00455653: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00455655: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45565au); f_005b8610();
    /* 0045565a: mov esi, eax */ r_esi = r_eax;
    /* 0045565c: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 00455662: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 00455668: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045566e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455670: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455672: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455679: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45567eu); f_005b8638();
    /* 0045567e: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455685: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455686: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45568bu); f_0083046c();
    /* 0045568b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045568e: mov ecx, dword ptr [ebx + edi*2 + 0x42c] */ r_ecx = R32((u32)(r_ebx+r_edi*2+0x42cu));
    /* 00455695: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45569au); f_00452050();
    /* 0045569a: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45569fu); f_0048e364();
    /* 0045569f: jmp 0x4556e7 */ goto L_004556e7;
L_004556a1:; BB(0x004556a1);
    /* 004556a1: push dword ptr [ebp*4 + 0x9a6140] */ { u32 v = R32((u32)(r_ebp*4+0x9a6140u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556a8: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4556b3u); f_005b8610();
    /* 004556b3: mov esi, eax */ r_esi = r_eax;
    /* 004556b5: mov edx, dword ptr [ebx + 0x3ec] */ r_edx = R32((u32)(r_ebx+0x3ecu));
    /* 004556bb: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 004556c1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004556cb: push dword ptr [edx + ebp*4 + 0x9a5e28] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a5e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556d2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x4556d7u); f_005b8638();
    /* 004556d7: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004556dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004556de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004556df: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x4556e4u); f_0083046c();
    /* 004556e4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004556e7:; BB(0x004556e7);
    /* 004556e7: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004556ea: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004556ed: jl 0x455593 */ if ((fS!=fO)) goto L_00455593;
L_004556f3:; BB(0x004556f3);
    /* 004556f3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x4556f8u); f_0082faac();
    /* 004556f8: mov dword ptr [ebx + 0x3dc], 0 */ W32((u32)(r_ebx+0x3dcu), 0x0u);
    /* 00455702: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x455707u); f_0082da80();
    /* 00455707: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45570cu); f_0082dab0();
    /* 0045570c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045570d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045570e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045570f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455710: ret  */ FN_RET(0x00455653); r_esp += 4; return;
}

void f_00455714(void) /* sub_455714 */
{
    FN_ENTER(0x00455714);
    /* 00455714: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 0045571a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045571c: jne 0x455723 */ if (!fZ) goto L_00455723;
L_0045571e:; BB(0x0045571e);
    /* 0045571e: call 0x455724 */ r_esp -= 4; W32(r_esp, 0x455723u); f_00455724();
L_00455723:; BB(0x00455723);
    /* 00455723: ret  */ FN_RET(0x00455714); r_esp += 4; return;
}

void f_00455724(void) /* sub_455724 */
{
    FN_ENTER(0x00455724);
    /* 00455724: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455725: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455726: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0045572c: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00455732: sub edx, dword ptr [eax + 0x394] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x394u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00455738: mov ebp, dword ptr [ecx + 0x3cc] */ r_ebp = R32((u32)(r_ecx+0x3ccu));
    /* 0045573e: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00455740: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00455743: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455745: jg 0x45579d */ if ((!fZ&&fS==fO)) goto L_0045579d;
L_00455747:; BB(0x00455747);
    /* 00455747: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00455749: je 0x45579a */ if (fZ) goto L_0045579a;
L_0045574b:; BB(0x0045574b);
    /* 0045574b: mov esi, dword ptr [ecx + 0x3a8] */ r_esi = R32((u32)(r_ecx+0x3a8u));
    /* 00455751: mov ebp, dword ptr [ecx + 0x3b0] */ r_ebp = R32((u32)(r_ecx+0x3b0u));
    /* 00455757: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045575a: and ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045575d: mov edx, esi */ r_edx = r_esi;
    /* 0045575f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455762: or edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455765: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455768: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045576a: mov esi, ebp */ r_esi = r_ebp;
    /* 0045576c: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045576f: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455771: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455774: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455776: mov ebp, dword ptr [ecx + 0x3b8] */ r_ebp = R32((u32)(r_ecx+0x3b8u));
    /* 0045577c: mov ecx, dword ptr [ecx + 0x3bc] */ r_ecx = R32((u32)(r_ecx+0x3bcu));
    /* 00455782: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00455785: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455788: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045578a: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045578d: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00455790: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455792: mov ecx, eax */ r_ecx = r_eax;
    /* 00455794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455795: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45579au); f_0044cf88();
L_0045579a:; BB(0x0045579a);
    /* 0045579a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045579b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045579c: ret  */ FN_RET(0x00455724); r_esp += 4; return;
L_0045579d:; BB(0x0045579d);
    /* 0045579d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045579f: je 0x4557f0 */ if (fZ) goto L_004557f0;
L_004557a1:; BB(0x004557a1);
    /* 004557a1: mov esi, dword ptr [ecx + 0x3a8] */ r_esi = R32((u32)(r_ecx+0x3a8u));
    /* 004557a7: mov ebp, dword ptr [ecx + 0x3b0] */ r_ebp = R32((u32)(r_ecx+0x3b0u));
    /* 004557ad: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004557b0: and ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004557b3: mov edx, esi */ r_edx = r_esi;
    /* 004557b5: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004557b8: or edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557bb: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004557be: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557c0: mov esi, ebp */ r_esi = r_ebp;
    /* 004557c2: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004557c5: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557c7: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 004557ca: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557cc: mov ebp, dword ptr [ecx + 0x3b8] */ r_ebp = R32((u32)(r_ecx+0x3b8u));
    /* 004557d2: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004557d5: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 004557d8: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557da: mov ebp, dword ptr [ecx + 0x3bc] */ r_ebp = R32((u32)(r_ecx+0x3bcu));
    /* 004557e0: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 004557e3: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 004557e6: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004557e8: mov ecx, eax */ r_ecx = r_eax;
    /* 004557ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004557eb: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x4557f0u); f_0044cf88();
L_004557f0:; BB(0x004557f0);
    /* 004557f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004557f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004557f2: ret  */ FN_RET(0x00455724); r_esp += 4; return;
}

void f_00455753(void)
{
    FN_ENTER(0x00455753);
    /* 00455753: mov al, 3 */ r_eax = (r_eax & 0xffffff00u) | ((0x3u) & 0xffu);
    /* 00455755: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00455757: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045575a: and ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0045575d: mov edx, esi */ r_edx = r_esi;
    /* 0045575f: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455762: or edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455765: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455768: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045576a: mov esi, ebp */ r_esi = r_ebp;
    /* 0045576c: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045576f: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455771: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455774: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455776: mov ebp, dword ptr [ecx + 0x3b8] */ r_ebp = R32((u32)(r_ecx+0x3b8u));
    /* 0045577c: mov ecx, dword ptr [ecx + 0x3bc] */ r_ecx = R32((u32)(r_ecx+0x3bcu));
    /* 00455782: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00455785: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455788: or edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045578a: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0045578d: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00455790: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455792: mov ecx, eax */ r_ecx = r_eax;
    /* 00455794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455795: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x45579au); f_0044cf88();
    /* 0045579a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0045579b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045579c: ret  */ FN_RET(0x00455753); r_esp += 4; return;
}

void f_004557f4(void) /* sub_4557F4 */
{
    FN_ENTER(0x004557f4);
    /* 004557f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004557f5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004557f8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004557fa: fild dword ptr [ebx + 0x3a0] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x3a0u)));
    /* 00455800: fild dword ptr [0xa45600] */ FPUSH((long double)(i32)R32((u32)(0xa45600u)));
    /* 00455806: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455807: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00455809: fchs  */ ST(0) = -ST(0);
    /* 0045580b: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045580d: fadd dword ptr [0x8ffecc] */ ST(0) = ST(0) + R_F32((u32)(0x8ffeccu));
    /* 00455813: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00455816: call 0x455900 */ r_esp -= 4; W32(r_esp, 0x45581bu); f_00455900();
    /* 0045581b: mov eax, dword ptr [0xa45604] */ r_eax = R32((u32)(0xa45604u));
    /* 00455820: mov edx, dword ptr [0xa45608] */ r_edx = R32((u32)(0xa45608u));
    /* 00455826: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 0045582c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00455830: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00455832: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00455839: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0045583d: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00455845: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00455848: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00455850: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00455854: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0045585c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045585d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045585e: call 0x455948 */ r_esp -= 4; W32(r_esp, 0x455863u); f_00455948();
    /* 00455863: mov eax, dword ptr [ebx + 0x3a0] */ r_eax = R32((u32)(r_ebx+0x3a0u));
    /* 00455869: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045586c: mov dword ptr [ebx + 0x3a0], eax */ W32((u32)(r_ebx+0x3a0u), r_eax);
    /* 00455872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00455874: jl 0x45587b */ if ((fS!=fO)) goto L_0045587b;
L_00455876:; BB(0x00455876);
    /* 00455876: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455879: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045587a: ret  */ FN_RET(0x004557f4); r_esp += 4; return;
L_0045587b:; BB(0x0045587b);
    /* 0045587b: mov dword ptr [ebx + 0x37c], 1 */ W32((u32)(r_ebx+0x37cu), 0x1u);
    /* 00455885: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00455889: lea edx, [ebx + 0x420] */ r_edx = (u32)(r_ebx+0x420u);
    /* 0045588f: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00455893: lea eax, [ebx + 0x434] */ r_eax = (u32)(r_ebx+0x434u);
    /* 00455899: mov ebp, eax */ r_ebp = r_eax;
    /* 0045589b: mov edi, edx */ r_edi = r_edx;
L_0045589d:; BB(0x0045589d);
    /* 0045589d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0045589f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004558a1: je 0x4558b0 */ if (fZ) goto L_004558b0;
L_004558a3:; BB(0x004558a3);
    /* 004558a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004558a4: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x4558a9u); f_005cdcc0();
    /* 004558a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004558aa: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_004558b0:; BB(0x004558b0);
    /* 004558b0: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004558b3: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004558b5: ja 0x45589d */ if ((!fC&&!fZ)) goto L_0045589d;
L_004558b7:; BB(0x004558b7);
    /* 004558b7: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 004558bb: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 004558bf: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 004558c5: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004558c8: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 004558cf: mov dword ptr [ebx + 0x3d8], 5 */ W32((u32)(r_ebx+0x3d8u), 0x5u);
    /* 004558d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004558db: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x4558e0u); f_00454804();
    /* 004558e0: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 004558e6: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004558e9: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 004558f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004558f2: je 0x4558f8 */ if (fZ) goto L_004558f8;
L_004558f4:; BB(0x004558f4);
    /* 004558f4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004558f6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4558f8u); call_ind(t); }
L_004558f8:; BB(0x004558f8);
    /* 004558f8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004558fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004558fc: ret  */ FN_RET(0x004557f4); r_esp += 4; return;
}

void f_00455900(void) /* sub_455900 */
{
    FN_ENTER(0x00455900);
    /* 00455900: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455903: fld dword ptr [0x8ffeb8] */ FPUSH(R_F32((u32)(0x8ffeb8u)));
    /* 00455909: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0045590d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00455910: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00455914: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455919: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045591d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00455921: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00455925: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00455928: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 0045592c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x455931u); f_0082ddd8();
    /* 00455931: fld dword ptr [0x8ffeb0] */ FPUSH(R_F32((u32)(0x8ffeb0u)));
    /* 00455937: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00455939: fmul dword ptr [0x8ffeb4] */ ST(0) = ST(0) * R_F32((u32)(0x8ffeb4u));
    /* 0045593f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455942: ret 4 */ FN_RET(0x00455900); r_esp += 8; return;
}

void f_00455948(void) /* sub_455948 */
{
    FN_ENTER(0x00455948);
    /* 00455948: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455949: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045594a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045594d: mov esi, ecx */ r_esi = r_ecx;
    /* 0045594f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00455953: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00455957: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0045595a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0045595c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0045595f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00455962: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00455966: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00455969: mov edx, ebx */ r_edx = r_ebx;
    /* 0045596b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0045596f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x455974u); f_0082f9c4();
    /* 00455974: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00455977: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045597b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045597f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00455982: fld dword ptr [esi + 0x3a4] */ FPUSH(R_F32((u32)(r_esi+0x3a4u)));
    /* 00455988: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0045598a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0045598c: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0045598e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455990: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00455992: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00455995: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00455999: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045599d: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004559a0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 004559a3: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 004559a6: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 004559a9: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 004559ac: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004559af: mov ecx, esi */ r_ecx = r_esi;
    /* 004559b1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4559b6u); f_0082ebac();
    /* 004559b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004559b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004559ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004559bb: ret 8 */ FN_RET(0x00455948); r_esp += 12; return;
}

void f_004559c0(void) /* sub_4559C0 */
{
    FN_ENTER(0x004559c0);
    /* 004559c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004559c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004559c2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004559c4: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 004559c7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004559cc: je 0x455a28 */ if (fZ) goto L_00455a28;
L_004559ce:; BB(0x004559ce);
    /* 004559ce: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 004559d4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004559d6: je 0x455a25 */ if (fZ) goto L_00455a25;
L_004559d8:; BB(0x004559d8);
    /* 004559d8: mov esi, dword ptr [ebp + 0x3a8] */ r_esi = R32((u32)(r_ebp+0x3a8u));
    /* 004559de: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 004559e4: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 004559e7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004559ea: mov eax, esi */ r_eax = r_esi;
    /* 004559ec: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 004559ef: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004559f2: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004559f5: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004559f7: mov esi, edx */ r_esi = r_edx;
    /* 004559f9: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 004559fc: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004559fe: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a01: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a03: mov edx, dword ptr [ebp + 0x3b8] */ r_edx = R32((u32)(r_ebp+0x3b8u));
    /* 00455a09: mov ebp, dword ptr [ebp + 0x3bc] */ r_ebp = R32((u32)(r_ebp+0x3bcu));
    /* 00455a0f: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00455a12: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a15: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a17: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00455a1a: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455a1d: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455a20: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x455a25u); f_0044cf88();
L_00455a25:; BB(0x00455a25);
    /* 00455a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455a26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455a27: ret  */ FN_RET(0x004559c0); r_esp += 4; return;
L_00455a28:; BB(0x00455a28);
    /* 00455a28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455a2a: call 0x455a34 */ r_esp -= 4; W32(r_esp, 0x455a2fu); f_00455a34();
    /* 00455a2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455a30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455a31: ret  */ FN_RET(0x004559c0); r_esp += 4; return;
}

void f_00455a34(void) /* sub_455A34 */
{
    FN_ENTER(0x00455a34);
    /* 00455a34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455a35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455a36: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455a39: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00455a3b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455a3f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00455a42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455a43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a46: call 0x455ab4 */ r_esp -= 4; W32(r_esp, 0x455a4bu); f_00455ab4();
    /* 00455a4b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00455a4f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00455a52: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 00455a58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a5a: je 0x455aab */ if (fZ) goto L_00455aab;
L_00455a5c:; BB(0x00455a5c);
    /* 00455a5c: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00455a62: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00455a65: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00455a68: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a6b: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00455a6e: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455a71: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a73: mov esi, dword ptr [ebp + 0x3b0] */ r_esi = R32((u32)(r_ebp+0x3b0u));
    /* 00455a79: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00455a7c: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455a7f: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a81: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00455a84: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a87: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a89: mov edx, dword ptr [ebp + 0x3b8] */ r_edx = R32((u32)(r_ebp+0x3b8u));
    /* 00455a8f: mov ebp, dword ptr [ebp + 0x3bc] */ r_ebp = R32((u32)(r_ebp+0x3bcu));
    /* 00455a95: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00455a98: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a9b: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a9d: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00455aa0: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455aa3: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455aa6: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x455aabu); f_0044cf88();
L_00455aab:; BB(0x00455aab);
    /* 00455aab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455ab0: ret  */ FN_RET(0x00455a34); r_esp += 4; return;
}

void f_00455a43(void)
{
    FN_ENTER(0x00455a43);
    /* 00455a43: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455a45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455a46: call 0x455ab4 */ r_esp -= 4; W32(r_esp, 0x455a4bu); f_00455ab4();
    /* 00455a4b: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00455a4f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00455a52: mov ecx, dword ptr [ebp + 0x394] */ r_ecx = R32((u32)(r_ebp+0x394u));
    /* 00455a58: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455a5a: je 0x455aab */ if (fZ) goto L_00455aab;
L_00455a5c:; BB(0x00455a5c);
    /* 00455a5c: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00455a62: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00455a65: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00455a68: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a6b: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00455a6e: shl esi, 6 */ { u32 c = (6u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455a71: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a73: mov esi, dword ptr [ebp + 0x3b0] */ r_esi = R32((u32)(r_ebp+0x3b0u));
    /* 00455a79: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00455a7c: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00455a7f: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a81: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00455a84: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a87: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a89: mov edx, dword ptr [ebp + 0x3b8] */ r_edx = R32((u32)(r_ebp+0x3b8u));
    /* 00455a8f: mov ebp, dword ptr [ebp + 0x3bc] */ r_ebp = R32((u32)(r_ebp+0x3bcu));
    /* 00455a95: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00455a98: shl edx, 0xc */ { u32 c = (12u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455a9b: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455a9d: and ebp, 0xf */ {  u32 a = r_ebp; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00455aa0: shl ebp, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00455aa3: or eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455aa6: call 0x44cf88 */ r_esp -= 4; W32(r_esp, 0x455aabu); f_0044cf88();
L_00455aab:; BB(0x00455aab);
    /* 00455aab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455aae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455ab0: ret  */ FN_RET(0x00455a43); r_esp += 4; return;
}

void f_00455ab4(void) /* sub_455AB4 */
{
    FN_ENTER(0x00455ab4);
    /* 00455ab4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00455ab5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455ab8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00455aba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00455abc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x455ac1u); f_007751b0();
    /* 00455ac1: fld dword ptr [0x8ffeac] */ FPUSH(R_F32((u32)(0x8ffeacu)));
    /* 00455ac7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00455ac9: mov edx, dword ptr [ebx + 0x3a8] */ r_edx = R32((u32)(r_ebx+0x3a8u));
    /* 00455acf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00455ad2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00455ad6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455adb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00455adf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00455ae3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00455ae7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00455aea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00455aee: lea eax, [eax + edx + 1] */ r_eax = (u32)(r_eax+r_edx+0x1u);
    /* 00455af2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455af5: jl 0x455afa */ if ((fS!=fO)) goto L_00455afa;
L_00455af7:; BB(0x00455af7);
    /* 00455af7: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00455afa:; BB(0x00455afa);
    /* 00455afa: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00455afe: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00455b00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00455b02: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x455b07u); f_007751b0();
    /* 00455b07: fcom dword ptr [0x8ffcc4] */ fx_compare(ST(0), R_F32((u32)(0x8ffcc4u))); 
    /* 00455b0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455b0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455b10: ja 0x455b25 */ if ((!fC&&!fZ)) goto L_00455b25;
L_00455b12:; BB(0x00455b12);
    /* 00455b12: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00455b14: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00455b18: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00455b1e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455b21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00455b22: ret 8 */ FN_RET(0x00455ab4); r_esp += 12; return;
L_00455b25:; BB(0x00455b25);
    /* 00455b25: fcomp dword ptr [0x8ffea8] */ fx_compare(ST(0), R_F32((u32)(0x8ffea8u))); FPOP();
    /* 00455b2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00455b2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00455b2e: ja 0x455b41 */ if ((!fC&&!fZ)) goto L_00455b41;
L_00455b30:; BB(0x00455b30);
    /* 00455b30: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00455b34: mov dword ptr [eax], 1 */ W32((u32)(r_eax), 0x1u);
    /* 00455b3a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455b3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00455b3e: ret 8 */ FN_RET(0x00455ab4); r_esp += 12; return;
L_00455b41:; BB(0x00455b41);
    /* 00455b41: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00455b45: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 00455b4b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455b4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00455b4f: ret 8 */ FN_RET(0x00455ab4); r_esp += 12; return;
}

void f_00455b54(void) /* sub_455B54 */
{
    FN_ENTER(0x00455b54);
    /* 00455b54: mov eax, dword ptr [ecx + 0x3a0] */ r_eax = R32((u32)(r_ecx+0x3a0u));
    /* 00455b5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00455b5c: je 0x455b5f */ if (fZ) goto L_00455b5f;
L_00455b5e:; BB(0x00455b5e);
    /* 00455b5e: ret  */ FN_RET(0x00455b54); r_esp += 4; return;
L_00455b5f:; BB(0x00455b5f);
    /* 00455b5f: call 0x455724 */ r_esp -= 4; W32(r_esp, 0x455b64u); f_00455724();
    /* 00455b64: ret  */ FN_RET(0x00455b54); r_esp += 4; return;
}

void f_00455b68(void) /* sub_455B68 */
{
    FN_ENTER(0x00455b68);
    /* 00455b68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455b69: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455b6c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00455b6e: fild dword ptr [ebp + 0x3a0] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3a0u)));
    /* 00455b74: fild dword ptr [ebp + 0x3d4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x3d4u)));
    /* 00455b7a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00455b7c: fsubr dword ptr [0x8ffea4] */ ST(0) = R_F32((u32)(0x8ffea4u)) - ST(0);
    /* 00455b82: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455b83: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00455b86: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455b88: call 0x455900 */ r_esp -= 4; W32(r_esp, 0x455b8du); f_00455900();
    /* 00455b8d: movzx edx, byte ptr [0xa45258] */ r_edx = (u32)R8((u32)(0xa45258u));
    /* 00455b94: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 00455b9a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455b9d: jne 0x455bce */ if (!fZ) goto L_00455bce;
L_00455b9f:; BB(0x00455b9f);
    /* 00455b9f: fld dword ptr [0xa4560c] */ FPUSH(R_F32((u32)(0xa4560cu)));
    /* 00455ba5: mov eax, dword ptr [0xa4560c] */ r_eax = R32((u32)(0xa4560cu));
    /* 00455baa: mov dword ptr [0xa4561c], eax */ W32((u32)(0xa4561cu), r_eax);
    /* 00455baf: fchs  */ ST(0) = -ST(0);
    /* 00455bb1: fst dword ptr [0xa45618] */ W_F32((u32)(0xa45618u), ST(0));
    /* 00455bb7: fstp dword ptr [0xa45634] */ W_F32((u32)(0xa45634u), ST(0)); FPOP();
    /* 00455bbd: mov dword ptr [0xa45630], eax */ W32((u32)(0xa45630u), r_eax);
    /* 00455bc2: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00455bc8: mov byte ptr [0xa45258], dl */ W8((u32)(0xa45258u), (u8)r_edx);
L_00455bce:; BB(0x00455bce);
    /* 00455bce: mov edx, dword ptr [ebp + 0x3ac] */ r_edx = R32((u32)(r_ebp+0x3acu));
    /* 00455bd4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00455bd7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455bd9: mov ecx, dword ptr [eax + edx*8 + 0xa45610] */ r_ecx = R32((u32)(r_eax+r_edx*8+0xa45610u));
    /* 00455be0: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00455be3: mov ecx, dword ptr [eax + edx*8 + 0xa45614] */ r_ecx = R32((u32)(r_eax+r_edx*8+0xa45614u));
    /* 00455bea: mov eax, dword ptr [eax + edx*8 + 0xa45618] */ r_eax = R32((u32)(r_eax+r_edx*8+0xa45618u));
    /* 00455bf1: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 00455bf7: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00455bfb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00455bff: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00455c02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455c04: mov ecx, dword ptr [eax + edx*8 + 0xa45610] */ r_ecx = R32((u32)(r_eax+r_edx*8+0xa45610u));
    /* 00455c0b: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00455c0f: mov ecx, dword ptr [eax + edx*8 + 0xa45614] */ r_ecx = R32((u32)(r_eax+r_edx*8+0xa45614u));
    /* 00455c16: mov eax, dword ptr [eax + edx*8 + 0xa45618] */ r_eax = R32((u32)(r_eax+r_edx*8+0xa45618u));
    /* 00455c1d: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00455c21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455c23: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00455c27: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00455c2a: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00455c2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c30: call 0x455948 */ r_esp -= 4; W32(r_esp, 0x455c35u); f_00455948();
    /* 00455c35: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 00455c3b: mov eax, dword ptr [eax*4 + 0x9a6164] */ r_eax = R32((u32)(r_eax*4+0x9a6164u));
    /* 00455c42: mov edx, dword ptr [ebp + 0x3b4] */ r_edx = R32((u32)(r_ebp+0x3b4u));
    /* 00455c48: mov ecx, dword ptr [ebp + 0x3a8] */ r_ecx = R32((u32)(r_ebp+0x3a8u));
    /* 00455c4e: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00455c51: lea edx, [eax + edx - 0x4000] */ r_edx = (u32)(r_eax+r_edx+0xffffc000u);
    /* 00455c58: mov ecx, dword ptr [ecx*4 + 0x9a6164] */ r_ecx = R32((u32)(r_ecx*4+0x9a6164u));
    /* 00455c5f: mov eax, dword ptr [ebp + 0x3b0] */ r_eax = R32((u32)(r_ebp+0x3b0u));
    /* 00455c65: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00455c68: lea eax, [ecx + eax - 0x4000] */ r_eax = (u32)(r_ecx+r_eax+0xffffc000u);
    /* 00455c6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c73: call 0x455d40 */ r_esp -= 4; W32(r_esp, 0x455c78u); f_00455d40();
    /* 00455c78: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00455c7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00455c7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455c7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455c81: push 0x36a */ { u32 v = 0x36au; r_esp -= 4; W32(r_esp, v); }
    /* 00455c86: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x455c8bu); f_008144b0();
    /* 00455c8b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455c8e: mov eax, dword ptr [ebp + 0x3a0] */ r_eax = R32((u32)(r_ebp+0x3a0u));
    /* 00455c94: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455c97: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00455c9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00455c9f: jl 0x455ca6 */ if ((fS!=fO)) goto L_00455ca6;
L_00455ca1:; BB(0x00455ca1);
    /* 00455ca1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455ca4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455ca5: ret  */ FN_RET(0x00455b68); r_esp += 4; return;
L_00455ca6:; BB(0x00455ca6);
    /* 00455ca6: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 00455cac: mov edx, dword ptr [ebp + 0x3b0] */ r_edx = R32((u32)(r_ebp+0x3b0u));
    /* 00455cb2: mov dword ptr [ebp + 0x37c], 1 */ W32((u32)(r_ebp+0x37cu), 0x1u);
    /* 00455cbc: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 00455cc2: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00455cc6: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00455cca: mov dword ptr [ebp + 0x3b4], edx */ W32((u32)(r_ebp+0x3b4u), r_edx);
    /* 00455cd0: lea edx, [ebp + 0x420] */ r_edx = (u32)(r_ebp+0x420u);
    /* 00455cd6: lea eax, [ebp + 0x434] */ r_eax = (u32)(r_ebp+0x434u);
    /* 00455cdc: mov esi, eax */ r_esi = r_eax;
    /* 00455cde: mov edi, edx */ r_edi = r_edx;
L_00455ce0:; BB(0x00455ce0);
    /* 00455ce0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00455ce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455ce4: je 0x455cf3 */ if (fZ) goto L_00455cf3;
L_00455ce6:; BB(0x00455ce6);
    /* 00455ce6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455ce7: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x455cecu); f_005cdcc0();
    /* 00455cec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00455ced: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00455cf3:; BB(0x00455cf3);
    /* 00455cf3: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00455cf6: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00455cf8: ja 0x455ce0 */ if ((!fC&&!fZ)) goto L_00455ce0;
L_00455cfa:; BB(0x00455cfa);
    /* 00455cfa: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00455cfe: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00455d02: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00455d08: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00455d0b: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455d12: mov dword ptr [ebp + 0x3d8], 5 */ W32((u32)(r_ebp+0x3d8u), 0x5u);
    /* 00455d1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455d1e: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x455d23u); f_00454804();
    /* 00455d23: mov eax, dword ptr [ebp + 0x37c] */ r_eax = R32((u32)(r_ebp+0x37cu));
    /* 00455d29: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00455d2c: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 00455d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455d35: je 0x455d3b */ if (fZ) goto L_00455d3b;
L_00455d37:; BB(0x00455d37);
    /* 00455d37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00455d39: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x455d3bu); call_ind(t); }
L_00455d3b:; BB(0x00455d3b);
    /* 00455d3b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455d3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00455d3f: ret  */ FN_RET(0x00455b68); r_esp += 4; return;
}

void f_00455d40(void) /* sub_455D40 */
{
    FN_ENTER(0x00455d40);
    /* 00455d40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455d41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455d42: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455d45: mov edi, ecx */ r_edi = r_ecx;
    /* 00455d47: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 00455d4b: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455d4f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00455d50: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x455d55u); f_007a900c();
    /* 00455d55: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00455d59: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00455d5d: fmul dword ptr [edi + 0x3a4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x3a4u));
    /* 00455d63: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00455d67: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00455d6c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00455d71: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00455d75: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00455d79: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00455d7d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00455d81: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00455d85: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455d87: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 00455d8a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455d8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00455d8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455d8f: ret 8 */ FN_RET(0x00455d40); r_esp += 12; return;
}

void f_00455d94(void) /* sub_455D94 */
{
    FN_ENTER(0x00455d94);
    /* 00455d94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455d95: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455d98: mov edi, ecx */ r_edi = r_ecx;
    /* 00455d9a: mov eax, dword ptr [edi + 0x3a0] */ r_eax = R32((u32)(r_edi+0x3a0u));
    /* 00455da0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00455da3: mov dword ptr [edi + 0x3a0], eax */ W32((u32)(r_edi+0x3a0u), r_eax);
    /* 00455da9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00455dab: jl 0x455db2 */ if ((fS!=fO)) goto L_00455db2;
L_00455dad:; BB(0x00455dad);
    /* 00455dad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455db0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455db1: ret  */ FN_RET(0x00455d94); r_esp += 4; return;
L_00455db2:; BB(0x00455db2);
    /* 00455db2: mov dword ptr [edi + 0x37c], 4 */ W32((u32)(r_edi+0x37cu), 0x4u);
    /* 00455dbc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00455dbf: lea edx, [edi + 0x420] */ r_edx = (u32)(r_edi+0x420u);
    /* 00455dc5: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00455dc9: lea eax, [edi + 0x434] */ r_eax = (u32)(r_edi+0x434u);
    /* 00455dcf: mov ebp, eax */ r_ebp = r_eax;
    /* 00455dd1: mov esi, edx */ r_esi = r_edx;
L_00455dd3:; BB(0x00455dd3);
    /* 00455dd3: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00455dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455dd7: je 0x455de6 */ if (fZ) goto L_00455de6;
L_00455dd9:; BB(0x00455dd9);
    /* 00455dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455dda: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x455ddfu); f_005cdcc0();
    /* 00455ddf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00455de0: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_00455de6:; BB(0x00455de6);
    /* 00455de6: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00455de9: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00455deb: ja 0x455dd3 */ if ((!fC&&!fZ)) goto L_00455dd3;
L_00455ded:; BB(0x00455ded);
    /* 00455ded: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00455df0: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00455df4: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00455dfa: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00455dfd: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 00455e04: mov dword ptr [edi + 0x3d8], 5 */ W32((u32)(r_edi+0x3d8u), 0x5u);
    /* 00455e0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00455e10: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x455e15u); f_00454804();
    /* 00455e15: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 00455e1b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00455e1e: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 00455e25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455e27: je 0x455e2d */ if (fZ) goto L_00455e2d;
L_00455e29:; BB(0x00455e29);
    /* 00455e29: mov ecx, edi */ r_ecx = r_edi;
    /* 00455e2b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x455e2du); call_ind(t); }
L_00455e2d:; BB(0x00455e2d);
    /* 00455e2d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00455e30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00455e31: ret  */ FN_RET(0x00455d94); r_esp += 4; return;
}

void f_00455e34(void) /* sub_455E34 */
{
    FN_ENTER(0x00455e34);
    /* 00455e34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00455e35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455e36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00455e37: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00455e3a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00455e3c: mov eax, dword ptr [ebx + 0x3b0] */ r_eax = R32((u32)(r_ebx+0x3b0u));
    /* 00455e42: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
    /* 00455e48: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00455e4b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00455e4d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00455e4f: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00455e52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455e54: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00455e56: lea ebp, [ebx + edx + 0x44c] */ r_ebp = (u32)(r_ebx+r_edx+0x44cu);
    /* 00455e5d: mov edx, dword ptr [0xa45640] */ r_edx = R32((u32)(0xa45640u));
    /* 00455e63: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e65: jge 0x456005 */ if ((fS==fO)) goto L_00456005;
L_00455e6b:; BB(0x00455e6b);
    /* 00455e6b: test cl, 0x1f */ {  u32 a = (u8)r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00455e6e: jne 0x456005 */ if (!fZ) goto L_00456005;
L_00455e74:; BB(0x00455e74);
    /* 00455e74: mov eax, dword ptr [ebx + 0x3d0] */ r_eax = R32((u32)(r_ebx+0x3d0u));
    /* 00455e7a: cmp eax, dword ptr [ebx + 0x3cc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x3ccu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00455e80: jge 0x456005 */ if ((fS==fO)) goto L_00456005;
L_00455e86:; BB(0x00455e86);
    /* 00455e86: movzx eax, word ptr [0xa44ce0] */ r_eax = (u32)R16((u32)(0xa44ce0u));
    /* 00455e8d: movzx edx, word ptr [0xa44ce2] */ r_edx = (u32)R16((u32)(0xa44ce2u));
    /* 00455e94: mov ecx, dword ptr [ebx + 0x394] */ r_ecx = R32((u32)(r_ebx+0x394u));
    /* 00455e9a: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00455e9f: movzx eax, word ptr [0xa44ce4] */ r_eax = (u32)R16((u32)(0xa44ce4u));
    /* 00455ea6: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 00455eab: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00455eb0: movzx eax, word ptr [0xa44ce6] */ r_eax = (u32)R16((u32)(0xa44ce6u));
    /* 00455eb7: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00455ebc: movzx eax, word ptr [0xa44ce8] */ r_eax = (u32)R16((u32)(0xa44ce8u));
    /* 00455ec3: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00455ec8: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 00455ecf: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00455ed4: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 00455edb: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00455ee0: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 00455ee7: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00455eec: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 00455ef1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00455ef5: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 00455efa: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00455efe: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 00455f03: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00455f07: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 00455f0c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00455f10: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 00455f15: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00455f19: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 00455f1e: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00455f22: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 00455f27: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00455f2b: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 00455f30: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00455f34: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 00455f39: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00455f3d: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 00455f42: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00455f46: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 00455f4b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00455f4f: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 00455f56: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 00455f5b: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 00455f62: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 00455f67: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00455f6b: lea eax, [esp + 0xa] */ r_eax = (u32)(r_esp+0xau);
    /* 00455f6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455f70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00455f71: call 0x44cfc0 */ r_esp -= 4; W32(r_esp, 0x455f76u); f_0044cfc0();
    /* 00455f76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455f78: jne 0x455f88 */ if (!fZ) goto L_00455f88;
L_00455f7a:; BB(0x00455f7a);
    /* 00455f7a: mov edx, dword ptr [0xa45640] */ r_edx = R32((u32)(0xa45640u));
    /* 00455f80: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
    /* 00455f86: jmp 0x456005 */ goto L_00456005;
L_00455f88:; BB(0x00455f88);
    /* 00455f88: mov eax, dword ptr [ebx + 0x394] */ r_eax = R32((u32)(r_ebx+0x394u));
    /* 00455f8e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00455f91: mov edx, 1 */ r_edx = 0x1u;
    /* 00455f96: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00455f9b: mov eax, dword ptr [ebx + edi*8 + 0x44c] */ r_eax = R32((u32)(r_ebx+r_edi*8+0x44cu));
    /* 00455fa2: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00455fa6: mov eax, dword ptr [ebx + edi*8 + 0x450] */ r_eax = R32((u32)(r_ebx+r_edi*8+0x450u));
    /* 00455fad: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00455fb1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00455fb4: mov edi, dword ptr [ebx + edi*8 + 0x454] */ r_edi = R32((u32)(r_ebx+r_edi*8+0x454u));
    /* 00455fbb: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00455fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00455fc0: call 0x4606c8 */ r_esp -= 4; W32(r_esp, 0x455fc5u); f_004606c8();
    /* 00455fc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00455fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00455fc8: je 0x455ff9 */ if (fZ) goto L_00455ff9;
L_00455fca:; BB(0x00455fca);
    /* 00455fca: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00455fcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455fcd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x455fd2u); f_0050b510();
    /* 00455fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00455fd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00455fd6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00455fd7: push 0x36d */ { u32 v = 0x36du; r_esp -= 4; W32(r_esp, v); }
    /* 00455fdc: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x455fe1u); f_00814298();
    /* 00455fe1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00455fe4: mov edx, dword ptr [0xa45640] */ r_edx = R32((u32)(0xa45640u));
    /* 00455fea: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
    /* 00455ff0: add dword ptr [ebx + 0x3d0], 1 */ { u32 ad = (u32)(r_ebx+0x3d0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00455ff7: jmp 0x456005 */ goto L_00456005;
L_00455ff9:; BB(0x00455ff9);
    /* 00455ff9: mov edx, dword ptr [0xa45640] */ r_edx = R32((u32)(0xa45640u));
    /* 00455fff: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
L_00456005:; BB(0x00456005);
    /* 00456005: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456007: jne 0x456021 */ if (!fZ) goto L_00456021;
L_00456009:; BB(0x00456009);
    /* 00456009: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045600b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045600d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045600e: push 0x36c */ { u32 v = 0x36cu; r_esp -= 4; W32(r_esp, v); }
    /* 00456013: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x456018u); f_00814298();
    /* 00456018: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045601b: mov ecx, dword ptr [ebx + 0x3a0] */ r_ecx = R32((u32)(r_ebx+0x3a0u));
L_00456021:; BB(0x00456021);
    /* 00456021: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00456024: mov dword ptr [ebx + 0x3a0], ecx */ W32((u32)(r_ebx+0x3a0u), r_ecx);
    /* 0045602a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045602c: jl 0x456035 */ if ((fS!=fO)) goto L_00456035;
L_0045602e:; BB(0x0045602e);
    /* 0045602e: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00456031: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00456032: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00456033: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00456034: ret  */ FN_RET(0x00455e34); r_esp += 4; return;
L_00456035:; BB(0x00456035);
    /* 00456035: mov dword ptr [ebx + 0x3d8], 5 */ W32((u32)(r_ebx+0x3d8u), 0x5u);
    /* 0045603f: lea edi, [ebx + 0x420] */ r_edi = (u32)(r_ebx+0x420u);
    /* 00456045: lea ebp, [ebx + 0x434] */ r_ebp = (u32)(r_ebx+0x434u);
    /* 0045604b: mov dword ptr [ebx + 0x37c], 7 */ W32((u32)(r_ebx+0x37cu), 0x7u);
L_00456055:; BB(0x00456055);
    /* 00456055: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00456057: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00456059: je 0x456068 */ if (fZ) goto L_00456068;
L_0045605b:; BB(0x0045605b);
    /* 0045605b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045605c: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x456061u); f_005cdcc0();
    /* 00456061: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00456062: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
L_00456068:; BB(0x00456068);
    /* 00456068: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045606b: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0045606d: ja 0x456055 */ if ((!fC&&!fZ)) goto L_00456055;
L_0045606f:; BB(0x0045606f);
    /* 0045606f: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00456075: mov dword ptr [ebx + 0x3d8], 5 */ W32((u32)(r_ebx+0x3d8u), 0x5u);
    /* 0045607f: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456082: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00456084: push dword ptr [edx*4 + 0x9a6004] */ { u32 v = R32((u32)(r_edx*4+0x9a6004u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045608b: call 0x454804 */ r_esp -= 4; W32(r_esp, 0x456090u); f_00454804();
    /* 00456090: mov eax, dword ptr [ebx + 0x37c] */ r_eax = R32((u32)(r_ebx+0x37cu));
    /* 00456096: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00456099: mov eax, dword ptr [edx*4 + 0x9a6008] */ r_eax = R32((u32)(r_edx*4+0x9a6008u));
    /* 004560a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004560a2: je 0x4560a8 */ if (fZ) goto L_004560a8;
L_004560a4:; BB(0x004560a4);
    /* 004560a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004560a6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4560a8u); call_ind(t); }
L_004560a8:; BB(0x004560a8);
    /* 004560a8: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004560ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004560ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004560ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004560ae: ret  */ FN_RET(0x00455e34); r_esp += 4; return;
}

