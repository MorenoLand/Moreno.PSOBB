#include "protos.h"

void f_0052407c(void) /* sub_52407C */
{
    FN_ENTER(0x0052407c);
    /* 0052407c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0052407d: mov ebx, esp */ r_ebx = r_esp;
    /* 0052407f: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00524082: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00524083: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524085: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524088: mov esi, ecx */ r_esi = r_ecx;
    /* 0052408a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052408c: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x524091u); f_007aa094();
    /* 00524091: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00524098: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052409a: je 0x5244f9 */ if (fZ) goto L_005244f9;
L_005240a0:; BB(0x005240a0);
    /* 005240a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005240a3: jne 0x5240d0 */ if (!fZ) goto L_005240d0;
L_005240a5:; BB(0x005240a5);
    /* 005240a5: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005240a8: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005240ad: mov edx, dword ptr [esi + 0x3b8] */ r_edx = R32((u32)(r_esi+0x3b8u));
    /* 005240b3: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 005240b6: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 005240bc: call dword ptr [edx + 0x14] */ { u32 t = R32((u32)(r_edx+0x14u)); r_esp -= 4; W32(r_esp, 0x5240bfu); call_ind(t); }
    /* 005240bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005240c2: je 0x524549 */ if (fZ) goto L_00524549;
L_005240c8:; BB(0x005240c8);
    /* 005240c8: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005240cb: jmp 0x524525 */ goto L_00524525;
L_005240d0:; BB(0x005240d0);
    /* 005240d0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005240d3: je 0x5240e1 */ if (fZ) goto L_005240e1;
L_005240d5:; BB(0x005240d5);
    /* 005240d5: mov eax, 2 */ r_eax = 0x2u;
    /* 005240da: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_005240e1:; BB(0x005240e1);
    /* 005240e1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005240e4: movsx eax, word ptr [esi + 0x3a4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x3a4u));
    /* 005240eb: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005240f1: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005240f4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005240f7: jne 0x5244d0 */ if (!fZ) goto L_005244d0;
L_005240fd:; BB(0x005240fd);
    /* 005240fd: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00524102: mov word ptr [esi + 0xb8], bp */ W16((u32)(r_esi+0xb8u), (u16)r_ebp);
    /* 00524109: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052410c: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 0052410f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524111: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x524116u); f_007a9180();
    /* 00524116: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524119: fcomp dword ptr [0x921808] */ fx_compare(ST(0), R_F32((u32)(0x921808u))); FPOP();
    /* 0052411f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524121: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524122: jbe 0x524492 */ if ((fC||fZ)) goto L_00524492;
L_00524128:; BB(0x00524128);
    /* 00524128: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 0052412b: mov edi, dword ptr [esi + 0x54] */ r_edi = R32((u32)(r_esi+0x54u));
    /* 0052412e: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00524131: mov ecx, dword ptr [esi + 0x300] */ r_ecx = R32((u32)(r_esi+0x300u));
    /* 00524137: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0052413d: mov dword ptr [esi + 0x2a8], edi */ W32((u32)(r_esi+0x2a8u), r_edi);
    /* 00524143: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 00524148: mov dword ptr [0xaab4f4], edi */ W32((u32)(0xaab4f4u), r_edi);
    /* 0052414e: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 00524154: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 0052415a: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00524160: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 00524166: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 0052416c: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 00524172: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 00524178: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0052417b: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 0052417e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00524181: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00524184: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00524187: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0052418a: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0052418f: mov edx, ebp */ r_edx = r_ebp;
    /* 00524191: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x524196u); f_0082f9c4();
    /* 00524196: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052419c: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005241a2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005241a4: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005241aa: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005241b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005241b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005241b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005241bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005241c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005241c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005241c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005241cb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005241d1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005241d5: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005241df: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005241e4: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005241ee: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005241f1: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 005241f6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5241fbu); f_0082d990();
    /* 005241fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005241fd: mov edx, edi */ r_edx = r_edi;
    /* 005241ff: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524204u); f_0082d8bc();
    /* 00524204: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524209: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052420b: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524210: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524215u); f_0082eab8();
    /* 00524215: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052421a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52421fu); f_0082eb80();
    /* 0052421f: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524224: mov edx, ebp */ r_edx = r_ebp;
    /* 00524226: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52422bu); f_0082ebac();
    /* 0052422b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052422d: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524232: mov ecx, esi */ r_ecx = r_esi;
    /* 00524234: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524239u); f_007b4c58();
    /* 00524239: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052423c: je 0x5245f2 */ if (fZ) goto L_005245f2;
L_00524242:; BB(0x00524242);
    /* 00524242: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524248: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52424du); f_0082e900();
    /* 0052424d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00524251: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524257: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52425cu); f_0082e900();
    /* 0052425c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00524260: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00524262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524265: jae 0x5242a2 */ if (!fC) goto L_005242a2;
L_00524267:; BB(0x00524267);
    /* 00524267: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052426d: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524273: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524275: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 0052427b: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 00524281: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524284: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052428d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524291: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00524295: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00524299: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052429c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005242a0: jmp 0x5242db */ goto L_005242db;
L_005242a2:; BB(0x005242a2);
    /* 005242a2: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005242a8: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005242ae: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005242b0: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005242b6: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005242bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005242bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005242c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005242c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005242cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005242d0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005242d4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005242d7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005242db:; BB(0x005242db);
    /* 005242db: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005242e1: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005242eb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005242f0: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005242fa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005242fd: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00524302: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524307u); f_0082d990();
    /* 00524307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524309: mov edx, edi */ r_edx = r_edi;
    /* 0052430b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524310u); f_0082d8bc();
    /* 00524310: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524317: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052431c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524321u); f_0082eab8();
    /* 00524321: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524326: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52432bu); f_0082eb80();
    /* 0052432b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524330: mov edx, ebp */ r_edx = r_ebp;
    /* 00524332: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524337u); f_0082ebac();
    /* 00524337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524339: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052433e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524340: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524345u); f_007b4c58();
    /* 00524345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524348: je 0x5245b1 */ if (fZ) goto L_005245b1;
L_0052434e:; BB(0x0052434e);
    /* 0052434e: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524354: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524359u); f_0082e900();
    /* 00524359: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052435d: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524363: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524368u); f_0082e900();
    /* 00524368: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052436c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052436e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524371: jae 0x5243ae */ if (!fC) goto L_005243ae;
L_00524373:; BB(0x00524373);
    /* 00524373: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524379: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052437f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524381: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 00524387: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 0052438d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524390: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524394: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524399: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052439d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243a1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243a5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243a8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005243ac: jmp 0x5243e7 */ goto L_005243e7;
L_005243ae:; BB(0x005243ae);
    /* 005243ae: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005243b4: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005243ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005243bc: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005243c2: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005243c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005243cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005243cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005243d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005243d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243dc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243e3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005243e7:; BB(0x005243e7);
    /* 005243e7: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005243ed: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005243f7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005243fc: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00524406: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00524409: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052440e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524413u); f_0082d990();
    /* 00524413: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524415: mov edx, edi */ r_edx = r_edi;
    /* 00524417: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52441cu); f_0082d8bc();
    /* 0052441c: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524423: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524428: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52442du); f_0082eab8();
    /* 0052442d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524432: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x524437u); f_0082eb80();
    /* 00524437: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052443c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052443e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524443u); f_0082ebac();
    /* 00524443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524445: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052444a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052444c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524451u); f_007b4c58();
    /* 00524451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524454: je 0x524570 */ if (fZ) goto L_00524570;
L_0052445a:; BB(0x0052445a);
    /* 0052445a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052445f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_00524492:; BB(0x00524492);
    /* 00524492: mov edi, dword ptr [esi + 0x358] */ r_edi = R32((u32)(r_esi+0x358u));
    /* 00524498: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0052449b: fmul dword ptr [0x9217fc] */ ST(0) = ST(0) * R_F32((u32)(0x9217fcu));
    /* 005244a1: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 005244a4: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005244a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005244aa: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 005244b2: mov ecx, esi */ r_ecx = r_esi;
    /* 005244b4: mov dword ptr [esp + 8], 0x42480000 */ W32((u32)(r_esp+0x8u), 0x42480000u);
    /* 005244bc: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005244c0: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x5244c5u); f_00772054();
    /* 005244c5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_005244d0:; BB(0x005244d0);
    /* 005244d0: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005244d6: mov eax, 0 */ r_eax = 0x0u;
    /* 005244db: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005244e2: je 0x5244e9 */ if (fZ) goto L_005244e9;
L_005244e4:; BB(0x005244e4);
    /* 005244e4: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005244e7: jmp 0x524525 */ goto L_00524525;
L_005244e9:; BB(0x005244e9);
    /* 005244e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005244eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005244ed: mov ecx, esi */ r_ecx = r_esi;
    /* 005244ef: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5244f4u); f_00772b44();
    /* 005244f4: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005244f7: jmp 0x524525 */ goto L_00524525;
L_005244f9:; BB(0x005244f9);
    /* 005244f9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005244fc: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524501: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00524504: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 0052450a: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x52450fu); f_00576c48();
    /* 0052450f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00524512: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524513: call 0x57895c */ r_esp -= 4; W32(r_esp, 0x524518u); f_0057895c();
    /* 00524518: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524519: mov eax, 1 */ r_eax = 0x1u;
    /* 0052451e: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x0052407c); r_esp += 4; return;
L_00524549:; BB(0x00524549);
    /* 00524549: mov dword ptr [esi + 0x3b4], 0 */ W32((u32)(r_esi+0x3b4u), 0x0u);
    /* 00524553: mov eax, 2 */ r_eax = 0x2u;
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
L_00524570:; BB(0x00524570);
    /* 00524570: mov eax, 1 */ r_eax = 0x1u;
    /* 00524575: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052457c: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524581: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524584: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00524589: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052458c: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524591: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524594: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052459a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052459d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052459e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245a6u); f_007a8c74();
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
L_005245b1:; BB(0x005245b1);
    /* 005245b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005245b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245bd: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 005245c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005245c5: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005245ca: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005245cd: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005245d2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005245d5: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005245db: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005245df: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245e2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245e7u); f_007a8c74();
    /* 005245e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245ea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ed: jmp 0x524466 */ goto L_00524466;
L_005245f2:; BB(0x005245f2);
    /* 005245f2: mov eax, 1 */ r_eax = 0x1u;
    /* 005245f7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245fe: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524603: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524606: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052460b: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052460e: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524613: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524616: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052461c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052461f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00524620: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524623: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x524628u); f_007a8c74();
    /* 00524628: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052462b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052462e: jmp 0x524466 */ goto L_00524466;
}

void f_00524145(void)
{
    FN_ENTER(0x00524145);
    /* 00524145: mov ah, 0xaa */ r_eax = (r_eax & 0xffff00ffu) | (((0xaau) & 0xffu) << 8);
    /* 00524147: add byte ptr [ecx - 0x554b0bc3], cl */ { u32 ad = (u32)(r_ecx+0xaab4f43du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052414d: add byte ptr [ecx - 0x554b07eb], cl */ { u32 ad = (u32)(r_ecx+0xaab4f815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524153: add byte ptr [ecx + 0x2ac96], cl */ { u32 ad = (u32)(r_ecx+0x2ac96u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524159: add byte ptr [ecx + 0x2988e], cl */ { u32 ad = (u32)(r_ecx+0x2988eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052415f: add byte ptr [ebx + 0x3048e], cl */ { u32 ad = (u32)(r_ebx+0x3048eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524165: add byte ptr [ecx + 0x29c8e], cl */ { u32 ad = (u32)(r_ecx+0x29c8eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052416b: add byte ptr [ebx + 0x3088e], cl */ { u32 ad = (u32)(r_ebx+0x3088eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524171: add byte ptr [ecx + 0x2a08e], cl */ { u32 ad = (u32)(r_ecx+0x2a08eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524177: add byte ptr [ebx + 0x4e89384e], cl */ { u32 ad = (u32)(r_ebx+0x4e89384eu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052417d: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052417e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00524181: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00524184: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00524187: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0052418a: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0052418f: mov edx, ebp */ r_edx = r_ebp;
    /* 00524191: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x524196u); f_0082f9c4();
    /* 00524196: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052419c: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005241a2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005241a4: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005241aa: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005241b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005241b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005241b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005241bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005241c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005241c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005241c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005241cb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005241d1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005241d5: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005241df: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005241e4: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005241ee: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005241f1: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 005241f6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5241fbu); f_0082d990();
    /* 005241fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005241fd: mov edx, edi */ r_edx = r_edi;
    /* 005241ff: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524204u); f_0082d8bc();
    /* 00524204: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524209: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052420b: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524210: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524215u); f_0082eab8();
    /* 00524215: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052421a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52421fu); f_0082eb80();
    /* 0052421f: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524224: mov edx, ebp */ r_edx = r_ebp;
    /* 00524226: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52422bu); f_0082ebac();
    /* 0052422b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052422d: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524232: mov ecx, esi */ r_ecx = r_esi;
    /* 00524234: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524239u); f_007b4c58();
    /* 00524239: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052423c: je 0x5245f2 */ if (fZ) goto L_005245f2;
L_00524242:; BB(0x00524242);
    /* 00524242: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524248: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52424du); f_0082e900();
    /* 0052424d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00524251: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524257: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52425cu); f_0082e900();
    /* 0052425c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00524260: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00524262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524265: jae 0x5242a2 */ if (!fC) goto L_005242a2;
L_00524267:; BB(0x00524267);
    /* 00524267: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052426d: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524273: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524275: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 0052427b: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 00524281: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524284: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052428d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524291: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00524295: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00524299: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052429c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005242a0: jmp 0x5242db */ goto L_005242db;
L_005242a2:; BB(0x005242a2);
    /* 005242a2: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005242a8: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005242ae: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005242b0: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005242b6: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005242bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005242bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005242c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005242c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005242cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005242d0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005242d4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005242d7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005242db:; BB(0x005242db);
    /* 005242db: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005242e1: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005242eb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005242f0: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005242fa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005242fd: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00524302: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524307u); f_0082d990();
    /* 00524307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524309: mov edx, edi */ r_edx = r_edi;
    /* 0052430b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524310u); f_0082d8bc();
    /* 00524310: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524317: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052431c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524321u); f_0082eab8();
    /* 00524321: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524326: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52432bu); f_0082eb80();
    /* 0052432b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524330: mov edx, ebp */ r_edx = r_ebp;
    /* 00524332: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524337u); f_0082ebac();
    /* 00524337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524339: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052433e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524340: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524345u); f_007b4c58();
    /* 00524345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524348: je 0x5245b1 */ if (fZ) goto L_005245b1;
L_0052434e:; BB(0x0052434e);
    /* 0052434e: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524354: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524359u); f_0082e900();
    /* 00524359: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052435d: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524363: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524368u); f_0082e900();
    /* 00524368: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052436c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052436e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524371: jae 0x5243ae */ if (!fC) goto L_005243ae;
L_00524373:; BB(0x00524373);
    /* 00524373: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524379: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052437f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524381: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 00524387: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 0052438d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524390: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524394: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524399: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052439d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243a1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243a5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243a8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005243ac: jmp 0x5243e7 */ goto L_005243e7;
L_005243ae:; BB(0x005243ae);
    /* 005243ae: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005243b4: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005243ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005243bc: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005243c2: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005243c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005243cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005243cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005243d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005243d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243dc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243e3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005243e7:; BB(0x005243e7);
    /* 005243e7: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005243ed: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005243f7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005243fc: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00524406: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00524409: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052440e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524413u); f_0082d990();
    /* 00524413: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524415: mov edx, edi */ r_edx = r_edi;
    /* 00524417: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52441cu); f_0082d8bc();
    /* 0052441c: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524423: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524428: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52442du); f_0082eab8();
    /* 0052442d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524432: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x524437u); f_0082eb80();
    /* 00524437: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052443c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052443e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524443u); f_0082ebac();
    /* 00524443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524445: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052444a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052444c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524451u); f_007b4c58();
    /* 00524451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524454: je 0x524570 */ if (fZ) goto L_00524570;
L_0052445a:; BB(0x0052445a);
    /* 0052445a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052445f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524145); r_esp += 4; return;
L_00524570:; BB(0x00524570);
    /* 00524570: mov eax, 1 */ r_eax = 0x1u;
    /* 00524575: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052457c: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524581: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524584: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00524589: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052458c: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524591: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524594: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052459a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052459d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052459e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245a6u); f_007a8c74();
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
L_005245b1:; BB(0x005245b1);
    /* 005245b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005245b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245bd: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 005245c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005245c5: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005245ca: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005245cd: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005245d2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005245d5: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005245db: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005245df: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245e2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245e7u); f_007a8c74();
    /* 005245e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245ea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ed: jmp 0x524466 */ goto L_00524466;
L_005245f2:; BB(0x005245f2);
    /* 005245f2: mov eax, 1 */ r_eax = 0x1u;
    /* 005245f7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245fe: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524603: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524606: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052460b: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052460e: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524613: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524616: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052461c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052461f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00524620: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524623: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x524628u); f_007a8c74();
    /* 00524628: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052462b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052462e: jmp 0x524466 */ goto L_00524466;
}

void f_0052414e(void)
{
    FN_ENTER(0x0052414e);
    /* 0052414e: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 00524154: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 0052415a: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00524160: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 00524166: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 0052416c: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 00524172: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 00524178: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0052417b: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 0052417e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00524181: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00524184: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00524187: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0052418a: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0052418f: mov edx, ebp */ r_edx = r_ebp;
    /* 00524191: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x524196u); f_0082f9c4();
    /* 00524196: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052419c: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005241a2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005241a4: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005241aa: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005241b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005241b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005241b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005241bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005241c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005241c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005241c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005241cb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005241d1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005241d5: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005241df: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005241e4: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005241ee: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005241f1: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 005241f6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5241fbu); f_0082d990();
    /* 005241fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005241fd: mov edx, edi */ r_edx = r_edi;
    /* 005241ff: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524204u); f_0082d8bc();
    /* 00524204: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524209: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052420b: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524210: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524215u); f_0082eab8();
    /* 00524215: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052421a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52421fu); f_0082eb80();
    /* 0052421f: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524224: mov edx, ebp */ r_edx = r_ebp;
    /* 00524226: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52422bu); f_0082ebac();
    /* 0052422b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052422d: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524232: mov ecx, esi */ r_ecx = r_esi;
    /* 00524234: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524239u); f_007b4c58();
    /* 00524239: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052423c: je 0x5245f2 */ if (fZ) goto L_005245f2;
L_00524242:; BB(0x00524242);
    /* 00524242: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524248: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52424du); f_0082e900();
    /* 0052424d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00524251: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524257: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52425cu); f_0082e900();
    /* 0052425c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00524260: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00524262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524265: jae 0x5242a2 */ if (!fC) goto L_005242a2;
L_00524267:; BB(0x00524267);
    /* 00524267: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052426d: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524273: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524275: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 0052427b: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 00524281: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524284: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052428d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524291: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00524295: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00524299: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052429c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005242a0: jmp 0x5242db */ goto L_005242db;
L_005242a2:; BB(0x005242a2);
    /* 005242a2: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005242a8: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005242ae: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005242b0: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005242b6: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005242bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005242bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005242c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005242c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005242cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005242d0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005242d4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005242d7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005242db:; BB(0x005242db);
    /* 005242db: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005242e1: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005242eb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005242f0: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005242fa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005242fd: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00524302: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524307u); f_0082d990();
    /* 00524307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524309: mov edx, edi */ r_edx = r_edi;
    /* 0052430b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524310u); f_0082d8bc();
    /* 00524310: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524317: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052431c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524321u); f_0082eab8();
    /* 00524321: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524326: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52432bu); f_0082eb80();
    /* 0052432b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524330: mov edx, ebp */ r_edx = r_ebp;
    /* 00524332: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524337u); f_0082ebac();
    /* 00524337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524339: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052433e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524340: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524345u); f_007b4c58();
    /* 00524345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524348: je 0x5245b1 */ if (fZ) goto L_005245b1;
L_0052434e:; BB(0x0052434e);
    /* 0052434e: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524354: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524359u); f_0082e900();
    /* 00524359: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052435d: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524363: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524368u); f_0082e900();
    /* 00524368: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052436c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052436e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524371: jae 0x5243ae */ if (!fC) goto L_005243ae;
L_00524373:; BB(0x00524373);
    /* 00524373: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524379: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052437f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524381: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 00524387: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 0052438d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524390: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524394: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524399: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052439d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243a1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243a5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243a8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005243ac: jmp 0x5243e7 */ goto L_005243e7;
L_005243ae:; BB(0x005243ae);
    /* 005243ae: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005243b4: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005243ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005243bc: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005243c2: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005243c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005243cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005243cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005243d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005243d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243dc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243e3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005243e7:; BB(0x005243e7);
    /* 005243e7: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005243ed: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005243f7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005243fc: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00524406: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00524409: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052440e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524413u); f_0082d990();
    /* 00524413: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524415: mov edx, edi */ r_edx = r_edi;
    /* 00524417: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52441cu); f_0082d8bc();
    /* 0052441c: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524423: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524428: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52442du); f_0082eab8();
    /* 0052442d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524432: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x524437u); f_0082eb80();
    /* 00524437: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052443c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052443e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524443u); f_0082ebac();
    /* 00524443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524445: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052444a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052444c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524451u); f_007b4c58();
    /* 00524451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524454: je 0x524570 */ if (fZ) goto L_00524570;
L_0052445a:; BB(0x0052445a);
    /* 0052445a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052445f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x0052414e); r_esp += 4; return;
L_00524570:; BB(0x00524570);
    /* 00524570: mov eax, 1 */ r_eax = 0x1u;
    /* 00524575: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052457c: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524581: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524584: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00524589: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052458c: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524591: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524594: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052459a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052459d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052459e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245a6u); f_007a8c74();
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
L_005245b1:; BB(0x005245b1);
    /* 005245b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005245b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245bd: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 005245c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005245c5: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005245ca: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005245cd: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005245d2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005245d5: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005245db: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005245df: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245e2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245e7u); f_007a8c74();
    /* 005245e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245ea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ed: jmp 0x524466 */ goto L_00524466;
L_005245f2:; BB(0x005245f2);
    /* 005245f2: mov eax, 1 */ r_eax = 0x1u;
    /* 005245f7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245fe: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524603: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524606: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052460b: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052460e: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524613: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524616: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052461c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052461f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00524620: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524623: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x524628u); f_007a8c74();
    /* 00524628: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052462b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052462e: jmp 0x524466 */ goto L_00524466;
}

void f_0052414f(void)
{
    FN_ENTER(0x0052414f);
    /* 0052414f: adc eax, 0xaab4f8 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xaab4f8u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00524154: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 0052415a: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 00524160: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 00524166: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 0052416c: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 00524172: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 00524178: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 0052417b: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 0052417e: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 00524181: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00524184: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 00524187: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 0052418a: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 0052418f: mov edx, ebp */ r_edx = r_ebp;
    /* 00524191: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x524196u); f_0082f9c4();
    /* 00524196: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052419c: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005241a2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005241a4: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005241aa: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005241b0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005241b3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005241b7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005241bc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005241c0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005241c4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005241c8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005241cb: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005241d1: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005241d5: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005241df: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005241e4: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005241ee: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005241f1: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 005241f6: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5241fbu); f_0082d990();
    /* 005241fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005241fd: mov edx, edi */ r_edx = r_edi;
    /* 005241ff: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524204u); f_0082d8bc();
    /* 00524204: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524209: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052420b: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524210: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524215u); f_0082eab8();
    /* 00524215: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0052421a: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52421fu); f_0082eb80();
    /* 0052421f: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524224: mov edx, ebp */ r_edx = r_ebp;
    /* 00524226: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x52422bu); f_0082ebac();
    /* 0052422b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052422d: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524232: mov ecx, esi */ r_ecx = r_esi;
    /* 00524234: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524239u); f_007b4c58();
    /* 00524239: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052423c: je 0x5245f2 */ if (fZ) goto L_005245f2;
L_00524242:; BB(0x00524242);
    /* 00524242: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524248: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52424du); f_0082e900();
    /* 0052424d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00524251: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524257: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52425cu); f_0082e900();
    /* 0052425c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00524260: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00524262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524265: jae 0x5242a2 */ if (!fC) goto L_005242a2;
L_00524267:; BB(0x00524267);
    /* 00524267: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052426d: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524273: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524275: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 0052427b: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 00524281: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524284: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052428d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524291: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00524295: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00524299: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052429c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005242a0: jmp 0x5242db */ goto L_005242db;
L_005242a2:; BB(0x005242a2);
    /* 005242a2: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005242a8: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005242ae: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005242b0: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005242b6: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005242bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005242bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005242c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005242c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005242cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005242d0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005242d4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005242d7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005242db:; BB(0x005242db);
    /* 005242db: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005242e1: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005242eb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005242f0: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005242fa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005242fd: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00524302: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524307u); f_0082d990();
    /* 00524307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524309: mov edx, edi */ r_edx = r_edi;
    /* 0052430b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524310u); f_0082d8bc();
    /* 00524310: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524317: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052431c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524321u); f_0082eab8();
    /* 00524321: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524326: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52432bu); f_0082eb80();
    /* 0052432b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524330: mov edx, ebp */ r_edx = r_ebp;
    /* 00524332: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524337u); f_0082ebac();
    /* 00524337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524339: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052433e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524340: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524345u); f_007b4c58();
    /* 00524345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524348: je 0x5245b1 */ if (fZ) goto L_005245b1;
L_0052434e:; BB(0x0052434e);
    /* 0052434e: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524354: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524359u); f_0082e900();
    /* 00524359: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052435d: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524363: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524368u); f_0082e900();
    /* 00524368: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052436c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052436e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524371: jae 0x5243ae */ if (!fC) goto L_005243ae;
L_00524373:; BB(0x00524373);
    /* 00524373: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524379: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052437f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524381: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 00524387: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 0052438d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524390: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524394: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524399: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052439d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243a1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243a5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243a8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005243ac: jmp 0x5243e7 */ goto L_005243e7;
L_005243ae:; BB(0x005243ae);
    /* 005243ae: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005243b4: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005243ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005243bc: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005243c2: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005243c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005243cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005243cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005243d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005243d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243dc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243e3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005243e7:; BB(0x005243e7);
    /* 005243e7: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005243ed: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005243f7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005243fc: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00524406: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00524409: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052440e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524413u); f_0082d990();
    /* 00524413: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524415: mov edx, edi */ r_edx = r_edi;
    /* 00524417: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52441cu); f_0082d8bc();
    /* 0052441c: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524423: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524428: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52442du); f_0082eab8();
    /* 0052442d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524432: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x524437u); f_0082eb80();
    /* 00524437: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052443c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052443e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524443u); f_0082ebac();
    /* 00524443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524445: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052444a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052444c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524451u); f_007b4c58();
    /* 00524451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524454: je 0x524570 */ if (fZ) goto L_00524570;
L_0052445a:; BB(0x0052445a);
    /* 0052445a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052445f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x0052414f); r_esp += 4; return;
L_00524570:; BB(0x00524570);
    /* 00524570: mov eax, 1 */ r_eax = 0x1u;
    /* 00524575: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052457c: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524581: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524584: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00524589: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052458c: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524591: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524594: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052459a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052459d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052459e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245a6u); f_007a8c74();
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
L_005245b1:; BB(0x005245b1);
    /* 005245b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005245b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245bd: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 005245c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005245c5: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005245ca: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005245cd: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005245d2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005245d5: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005245db: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005245df: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245e2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245e7u); f_007a8c74();
    /* 005245e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245ea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ed: jmp 0x524466 */ goto L_00524466;
L_005245f2:; BB(0x005245f2);
    /* 005245f2: mov eax, 1 */ r_eax = 0x1u;
    /* 005245f7: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245fe: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524603: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524606: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 0052460b: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052460e: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524613: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524616: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052461c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052461f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00524620: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524623: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x524628u); f_007a8c74();
    /* 00524628: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0052462b: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0052462e: jmp 0x524466 */ goto L_00524466;
}

void f_00524247(void)
{
    FN_ENTER(0x00524247);
    /* 00524247: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00524249: mov bl, 0xa6 */ r_ebx = (r_ebx & 0xffffff00u) | ((0xa6u) & 0xffu);
    /* 0052424b: xor byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0052424d: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00524251: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524257: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x52425cu); f_0082e900();
    /* 0052425c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00524260: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00524262: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524264: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524265: jae 0x5242a2 */ if (!fC) goto L_005242a2;
L_00524267:; BB(0x00524267);
    /* 00524267: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 0052426d: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524273: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524275: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 0052427b: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 00524281: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524284: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524288: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0052428d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524291: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00524295: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00524299: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0052429c: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005242a0: jmp 0x5242db */ goto L_005242db;
L_005242a2:; BB(0x005242a2);
    /* 005242a2: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005242a8: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005242ae: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005242b0: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005242b6: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005242bc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005242bf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005242c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005242c8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005242cc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005242d0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005242d4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005242d7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005242db:; BB(0x005242db);
    /* 005242db: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005242e1: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005242eb: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005242f0: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 005242fa: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005242fd: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00524302: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524307u); f_0082d990();
    /* 00524307: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524309: mov edx, edi */ r_edx = r_edi;
    /* 0052430b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x524310u); f_0082d8bc();
    /* 00524310: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524315: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524317: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 0052431c: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x524321u); f_0082eab8();
    /* 00524321: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524326: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x52432bu); f_0082eb80();
    /* 0052432b: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00524330: mov edx, ebp */ r_edx = r_ebp;
    /* 00524332: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524337u); f_0082ebac();
    /* 00524337: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524339: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052433e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524340: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524345u); f_007b4c58();
    /* 00524345: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524348: je 0x5245b1 */ if (fZ) goto L_005245b1;
L_0052434e:; BB(0x0052434e);
    /* 0052434e: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524354: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524359u); f_0082e900();
    /* 00524359: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0052435d: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524363: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x524368u); f_0082e900();
    /* 00524368: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0052436c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0052436e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524370: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524371: jae 0x5243ae */ if (!fC) goto L_005243ae;
L_00524373:; BB(0x00524373);
    /* 00524373: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 00524379: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 0052437f: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00524381: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 00524387: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 0052438d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00524390: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00524394: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00524399: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0052439d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243a1: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243a5: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243a8: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005243ac: jmp 0x5243e7 */ goto L_005243e7;
L_005243ae:; BB(0x005243ae);
    /* 005243ae: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005243b4: fld qword ptr [0x921760] */ FPUSH(R_F64((u32)(0x921760u)));
    /* 005243ba: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005243bc: fmul qword ptr [0x921770] */ ST(0) = ST(0) * R_F64((u32)(0x921770u));
    /* 005243c2: fdiv qword ptr [0x921768] */ ST(0) = ST(0) / R_F64((u32)(0x921768u));
    /* 005243c8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005243cb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005243cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005243d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005243d8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005243dc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005243e0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005243e3: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_005243e7:; BB(0x005243e7);
    /* 005243e7: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005243ed: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 005243f7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005243fc: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00524406: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00524409: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 0052440e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x524413u); f_0082d990();
    /* 00524413: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524415: mov edx, edi */ r_edx = r_edi;
    /* 00524417: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x52441cu); f_0082d8bc();
    /* 0052441c: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00524421: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00524423: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00524428: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x52442du); f_0082eab8();
    /* 0052442d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00524432: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x524437u); f_0082eb80();
    /* 00524437: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 0052443c: mov edx, ebp */ r_edx = r_ebp;
    /* 0052443e: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x524443u); f_0082ebac();
    /* 00524443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524445: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0052444a: mov ecx, esi */ r_ecx = r_esi;
    /* 0052444c: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x524451u); f_007b4c58();
    /* 00524451: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524454: je 0x524570 */ if (fZ) goto L_00524570;
L_0052445a:; BB(0x0052445a);
    /* 0052445a: mov eax, 1 */ r_eax = 0x1u;
    /* 0052445f: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524247); r_esp += 4; return;
L_00524570:; BB(0x00524570);
    /* 00524570: mov eax, 1 */ r_eax = 0x1u;
    /* 00524575: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 0052457c: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00524581: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00524584: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00524589: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 0052458c: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00524591: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00524594: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052459a: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052459d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0052459e: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245a1: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245a6u); f_007a8c74();
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
L_005245b1:; BB(0x005245b1);
    /* 005245b1: mov eax, 1 */ r_eax = 0x1u;
    /* 005245b6: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005245bd: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 005245c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 005245c5: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 005245ca: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 005245cd: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 005245d2: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 005245d5: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 005245db: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005245df: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005245e2: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5245e7u); f_007a8c74();
    /* 005245e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245ea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ed: jmp 0x524466 */ goto L_00524466;
}

void f_00524542(void)
{
    FN_ENTER(0x00524542);
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524542); r_esp += 4; return;
}

void f_00524544(void)
{
    FN_ENTER(0x00524544);
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524544); r_esp += 4; return;
}

void f_00524546(void)
{
    FN_ENTER(0x00524546);
    goto L_00524546;
L_00524466:; BB(0x00524466);
    /* 00524466: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 0052446c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052446f: mov ecx, esi */ r_ecx = r_esi;
    /* 00524471: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x524476u); f_00772358();
    /* 00524476: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524479: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0052447b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00524481: mov ecx, esi */ r_ecx = r_esi;
    /* 00524483: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524486: call dword ptr [edi + 0x48] */ { u32 t = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, 0x524489u); call_ind(t); }
    /* 00524489: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0052448b: mov ecx, esi */ r_ecx = r_esi;
    /* 0052448d: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x524490u); call_ind(t); }
    /* 00524490: jmp 0x5244c7 */ goto L_005244c7;
L_005244c7:; BB(0x005244c7);
    /* 005244c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005244c8: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5244cdu); f_007b999c();
    /* 005244cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005244ce: jmp 0x524525 */ goto L_00524525;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
L_00524546:; BB(0x00524546);
    /* 00524546: jecxz 0x5245a3 */ if (!r_ecx) goto L_005245a3;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00524548:; BB(0x00524548);
    /* 00524548: ret  */ FN_RET(0x00524546); r_esp += 4; return;
L_005245a3:; BB(0x005245a3);
    /* 005245a3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005245a4: sub byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu; W8(ad, r);  }
    /* 005245a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005245a9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 005245ac: jmp 0x524466 */ goto L_00524466;
}

void f_0052454e(void)
{
    FN_ENTER(0x0052454e);
    goto L_0052454e;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x0052454e); r_esp += 4; return;
L_0052454e:; BB(0x0052454e);
    /* 0052454e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524550: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524552: add byte ptr [eax + 2], bh */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524550(void)
{
    FN_ENTER(0x00524550);
    goto L_00524550;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524550); r_esp += 4; return;
L_00524550:; BB(0x00524550);
    /* 00524550: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524552: add byte ptr [eax + 2], bh */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524553(void)
{
    FN_ENTER(0x00524553);
    goto L_00524553;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524553); r_esp += 4; return;
L_00524553:; BB(0x00524553);
    /* 00524553: mov eax, 2 */ r_eax = 0x2u;
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524554(void)
{
    FN_ENTER(0x00524554);
    goto L_00524554;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524554); r_esp += 4; return;
L_00524554:; BB(0x00524554);
    /* 00524554: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00524556: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524556(void)
{
    FN_ENTER(0x00524556);
    goto L_00524556;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524556); r_esp += 4; return;
L_00524556:; BB(0x00524556);
    /* 00524556: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524558: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 0052455f: mov edx, 1 */ r_edx = 0x1u;
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524557(void)
{
    FN_ENTER(0x00524557);
    goto L_00524557;
L_00524525:; BB(0x00524525);
    /* 00524525: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524527: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524529: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 0052452e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0052452f: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x524534u); f_00805608();
    /* 00524534: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524537: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052453c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0052453f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524542: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524543: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00524544: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00524545: mov esp, ebx */ r_esp = r_ebx;
    /* 00524547: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524548: ret  */ FN_RET(0x00524557); r_esp += 4; return;
L_00524557:; BB(0x00524557);
    /* 00524557: add byte ptr [esi - 0x77], ah */ { u32 ad = (u32)(r_esi+0xffffff89u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0052455a: xchg byte ptr [eax], dh */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)(r_edx>>8); W8((u32)(r_eax), y); r_edx = (r_edx & 0xffff00ffu) | (((x) & 0xffu) << 8); }
    /* 0052455c: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0052455e: add byte ptr [edx + 1], bh */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524564: mov word ptr [esi + 0xb8], dx */ W16((u32)(r_esi+0xb8u), (u16)r_edx);
    /* 0052456b: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 0052456e: jmp 0x524525 */ goto L_00524525;
}

void f_00524634(void) /* sub_524634 */
{
    FN_ENTER(0x00524634);
    /* 00524634: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524635: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00524636: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524639: mov esi, ecx */ r_esi = r_ecx;
    /* 0052463b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0052463e: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524643: je 0x52464b */ if (fZ) goto L_0052464b;
L_00524645:; BB(0x00524645);
    /* 00524645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524648: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524649: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0052464a: ret  */ FN_RET(0x00524634); r_esp += 4; return;
L_0052464b:; BB(0x0052464b);
    /* 0052464b: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00524650: mov ecx, esi */ r_ecx = r_esi;
    /* 00524652: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00524654: push 0x43fa0000 */ { u32 v = 0x43fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00524659: push 0x437a0000 */ { u32 v = 0x437a0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0052465e: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x524661u); call_ind(t); }
    /* 00524661: mov dword ptr [esi + 0x3b0], eax */ W32((u32)(r_esi+0x3b0u), r_eax);
    /* 00524667: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524669: je 0x5247dd */ if (fZ) goto L_005247dd;
L_0052466f:; BB(0x0052466f);
    /* 0052466f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524670: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x524675u); f_00794548();
    /* 00524675: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524676: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00524679: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x52467eu); f_00829cc8();
    /* 0052467e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x524683u); f_0082d7b0();
    /* 00524683: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524685: push dword ptr [esi + 0x364] */ { u32 v = R32((u32)(r_esi+0x364u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052468b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052468d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0052468f: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x524694u); f_00830b74();
    /* 00524694: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00524697: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x52469cu); f_0082d838();
    /* 0052469c: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0052469f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005246a1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5246a6u); f_0082d8bc();
    /* 005246a6: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 005246ab: push dword ptr [esi + 0x6c] */ { u32 v = R32((u32)(r_esi+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005246ae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005246b0: push 0x3fa66666 */ { u32 v = 0x3fa66666u; r_esp -= 4; W32(r_esp, v); }
    /* 005246b5: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5246bau); f_0082fa0c();
    /* 005246ba: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5246bfu); f_004f7c84();
    /* 005246bf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005246c2: je 0x524877 */ if (fZ) goto L_00524877;
L_005246c8:; BB(0x005246c8);
    /* 005246c8: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5246cdu); f_00578b38();
    /* 005246cd: mov dword ptr [0xa72f14], 0 */ W32((u32)(0xa72f14u), 0x0u);
    /* 005246d7: mov ecx, 0x522400 */ r_ecx = 0x522400u;
    /* 005246dc: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5246e1u); f_0082fac4();
    /* 005246e1: mov eax, dword ptr [esi + 0x3b4] */ r_eax = R32((u32)(r_esi+0x3b4u));
    /* 005246e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005246ea: je 0x5247ef */ if (fZ) goto L_005247ef;
L_005246f0:; BB(0x005246f0);
    /* 005246f0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005246f5: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005246fa: mov edx, dword ptr [esi + 0x3b0] */ r_edx = R32((u32)(r_esi+0x3b0u));
    /* 00524700: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524703: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00524708: je 0x5247e3 */ if (fZ) goto L_005247e3;
L_0052470e:; BB(0x0052470e);
    /* 0052470e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524710: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x524715u); f_007aa7b8();
L_00524715:; BB(0x00524715);
    /* 00524715: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052471a: and eax, 0xfeffffff */ {  u32 a = r_eax; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0052471f: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_00524724:; BB(0x00524724);
    /* 00524724: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x524729u); f_0082dab0();
L_00524729:; BB(0x00524729);
    /* 00524729: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0052472b: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x524730u); f_0082fac4();
    /* 00524730: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x524735u); f_0082da80();
    /* 00524735: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x52473au); f_00794750();
    /* 0052473a: mov eax, dword ptr [0xa72f08] */ r_eax = R32((u32)(0xa72f08u));
    /* 0052473f: mov edx, dword ptr [0xa72f0c] */ r_edx = R32((u32)(0xa72f0cu));
    /* 00524745: mov ebp, dword ptr [0xa72f10] */ r_ebp = R32((u32)(0xa72f10u));
    /* 0052474b: mov dword ptr [esi + 0x37c], eax */ W32((u32)(r_esi+0x37cu), r_eax);
    /* 00524751: mov eax, dword ptr [0xa72efc] */ r_eax = R32((u32)(0xa72efcu));
    /* 00524756: mov dword ptr [esi + 0x380], edx */ W32((u32)(r_esi+0x380u), r_edx);
    /* 0052475c: mov dword ptr [esi + 0x384], ebp */ W32((u32)(r_esi+0x384u), r_ebp);
    /* 00524762: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 00524768: mov eax, dword ptr [0xa72f00] */ r_eax = R32((u32)(0xa72f00u));
    /* 0052476d: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 00524773: mov eax, dword ptr [0xa72f04] */ r_eax = R32((u32)(0xa72f04u));
    /* 00524778: mov dword ptr [esi + 0x390], eax */ W32((u32)(r_esi+0x390u), r_eax);
    /* 0052477e: mov eax, dword ptr [0xa72ef0] */ r_eax = R32((u32)(0xa72ef0u));
    /* 00524783: mov dword ptr [esi + 0x394], eax */ W32((u32)(r_esi+0x394u), r_eax);
    /* 00524789: mov eax, dword ptr [0xa72ef4] */ r_eax = R32((u32)(0xa72ef4u));
    /* 0052478e: mov dword ptr [esi + 0x398], eax */ W32((u32)(r_esi+0x398u), r_eax);
    /* 00524794: mov eax, dword ptr [0xa72ef8] */ r_eax = R32((u32)(0xa72ef8u));
    /* 00524799: mov dword ptr [esi + 0x39c], eax */ W32((u32)(r_esi+0x39cu), r_eax);
    /* 0052479f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005247a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005247a8: jl 0x5247b9 */ if ((fS!=fO)) goto L_005247b9;
L_005247aa:; BB(0x005247aa);
    /* 005247aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005247ad: jle 0x5247dd */ if ((fZ||fS!=fO)) goto L_005247dd;
L_005247af:; BB(0x005247af);
    /* 005247af: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005247b2: jl 0x5247b9 */ if ((fS!=fO)) goto L_005247b9;
L_005247b4:; BB(0x005247b4);
    /* 005247b4: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005247b7: jle 0x5247dd */ if ((fZ||fS!=fO)) goto L_005247dd;
L_005247b9:; BB(0x005247b9);
    /* 005247b9: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 005247c0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005247c3: mov ecx, esi */ r_ecx = r_esi;
    /* 005247c5: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005247cd: mov dword ptr [esp + 8], 0x40800000 */ W32((u32)(r_esp+0x8u), 0x40800000u);
    /* 005247d5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005247d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005247d8: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x5247ddu); f_00779d4c();
L_005247dd:; BB(0x005247dd);
    /* 005247dd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005247e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005247e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005247e2: ret  */ FN_RET(0x00524634); r_esp += 4; return;
L_005247e3:; BB(0x005247e3);
    /* 005247e3: mov ecx, esi */ r_ecx = r_esi;
    /* 005247e5: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5247eau); f_007aa668();
    /* 005247ea: jmp 0x524715 */ goto L_00524715;
L_005247ef:; BB(0x005247ef);
    /* 005247ef: mov eax, dword ptr [esi + 0x3b8] */ r_eax = R32((u32)(r_esi+0x3b8u));
    /* 005247f5: lea ebp, [esi + 0x3b8] */ r_ebp = (u32)(r_esi+0x3b8u);
    /* 005247fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005247fd: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x524800u); call_ind(t); }
    /* 00524800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524802: je 0x524724 */ if (fZ) goto L_00524724;
L_00524808:; BB(0x00524808);
    /* 00524808: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0052480d: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 00524813: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00524818: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 0052481d: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 00524823: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00524825: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 0052482a: mov eax, dword ptr [esi + 0x3b8] */ r_eax = R32((u32)(r_esi+0x3b8u));
    /* 00524830: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x524833u); call_ind(t); }
    /* 00524833: mov ecx, esi */ r_ecx = r_esi;
    /* 00524835: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x52483au); f_008173d0();
    /* 0052483a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052483c: jne 0x524845 */ if (!fZ) goto L_00524845;
L_0052483e:; BB(0x0052483e);
    /* 0052483e: mov ecx, esi */ r_ecx = r_esi;
    /* 00524840: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x524845u); f_007aa668();
L_00524845:; BB(0x00524845);
    /* 00524845: mov eax, dword ptr [esi + 0x3b8] */ r_eax = R32((u32)(r_esi+0x3b8u));
    /* 0052484b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0052484d: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x524850u); call_ind(t); }
    /* 00524850: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00524855: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 0052485b: mov ebp, dword ptr [0xaab518] */ r_ebp = R32((u32)(0xaab518u));
    /* 00524861: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00524866: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 0052486c: mov dword ptr [0xaf034c], ebp */ W32((u32)(0xaf034cu), r_ebp);
    /* 00524872: jmp 0x524724 */ goto L_00524724;
L_00524877:; BB(0x00524877);
    /* 00524877: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0052487a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x52487fu); f_0082e1e8();
    /* 0052487f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524880: jmp 0x524729 */ goto L_00524729;
}

void f_00524888(void)
{
    FN_ENTER(0x00524888);
    /* 00524888: mov eax, dword ptr [0xa72ee8] */ r_eax = R32((u32)(0xa72ee8u));
    /* 0052488d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0052488f: je 0x5248a2 */ if (fZ) goto L_005248a2;
L_00524891:; BB(0x00524891);
    /* 00524891: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524892: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x524897u); f_00857e98();
    /* 00524897: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524898: mov dword ptr [0xa72ee8], 0 */ W32((u32)(0xa72ee8u), 0x0u);
L_005248a2:; BB(0x005248a2);
    /* 005248a2: mov ecx, dword ptr [0xa72f1c] */ r_ecx = R32((u32)(0xa72f1cu));
    /* 005248a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005248aa: je 0x5248bf */ if (fZ) goto L_005248bf;
L_005248ac:; BB(0x005248ac);
    /* 005248ac: je 0x5248b5 */ if (fZ) goto L_005248b5;
L_005248ae:; BB(0x005248ae);
    /* 005248ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005248b0: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5248b5u); f_0045a950();
L_005248b5:; BB(0x005248b5);
    /* 005248b5: mov dword ptr [0xa72f1c], 0 */ W32((u32)(0xa72f1cu), 0x0u);
L_005248bf:; BB(0x005248bf);
    /* 005248bf: mov ecx, dword ptr [0xa72f18] */ r_ecx = R32((u32)(0xa72f18u));
    /* 005248c5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005248c7: je 0x5248dc */ if (fZ) goto L_005248dc;
L_005248c9:; BB(0x005248c9);
    /* 005248c9: je 0x5248d2 */ if (fZ) goto L_005248d2;
L_005248cb:; BB(0x005248cb);
    /* 005248cb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005248cd: call 0x45a950 */ r_esp -= 4; W32(r_esp, 0x5248d2u); f_0045a950();
L_005248d2:; BB(0x005248d2);
    /* 005248d2: mov dword ptr [0xa72f18], 0 */ W32((u32)(0xa72f18u), 0x0u);
L_005248dc:; BB(0x005248dc);
    /* 005248dc: mov ecx, dword ptr [0xa72edc] */ r_ecx = R32((u32)(0xa72edcu));
    /* 005248e2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005248e4: je 0x5248f9 */ if (fZ) goto L_005248f9;
L_005248e6:; BB(0x005248e6);
    /* 005248e6: je 0x5248ef */ if (fZ) goto L_005248ef;
L_005248e8:; BB(0x005248e8);
    /* 005248e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005248ea: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x5248efu); f_004066a8();
L_005248ef:; BB(0x005248ef);
    /* 005248ef: mov dword ptr [0xa72edc], 0 */ W32((u32)(0xa72edcu), 0x0u);
L_005248f9:; BB(0x005248f9);
    /* 005248f9: ret  */ FN_RET(0x00524888); r_esp += 4; return;
}

void f_005248fc(void)
{
    FN_ENTER(0x005248fc);
    /* 005248fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005248fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005248ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00524901: push 0x8d492e */ { u32 v = 0x8d492eu; r_esp -= 4; W32(r_esp, v); }
    /* 00524906: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0052490c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052490d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00524914: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524917: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0052491a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0052491d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00524920: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00524923: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00524925: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0052492c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x524931u); f_005caba4();
    /* 00524931: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524932: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00524935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524937: je 0x5249bf */ if (fZ) goto L_005249bf;
L_0052493d:; BB(0x0052493d);
    /* 0052493d: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00524944: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052494b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524951: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00524954: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x524959u); f_00787a4c();
    /* 00524959: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052495c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00524963: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_00524966:; BB(0x00524966);
    /* 00524966: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052496d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00524974: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 00524979: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52497eu); f_005caba4();
    /* 0052497e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052497f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00524982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524984: je 0x5249bb */ if (fZ) goto L_005249bb;
L_00524986:; BB(0x00524986);
    /* 00524986: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0052498d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00524994: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524997: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052499a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052499d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052499e: call 0x5249c8 */ r_esp -= 4; W32(r_esp, 0x5249a3u); f_005249c8();
    /* 005249a3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005249a6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005249ad:; BB(0x005249ad);
    /* 005249ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005249b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005249b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005249b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005249ba: ret  */ FN_RET(0x005248fc); r_esp += 4; return;
L_005249bb:; BB(0x005249bb);
    /* 005249bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005249bd: jmp 0x5249ad */ goto L_005249ad;
L_005249bf:; BB(0x005249bf);
    /* 005249bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005249c1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005249c4: jmp 0x524966 */ goto L_00524966;
}

void f_00524944(void)
{
    FN_ENTER(0x00524944);
    /* 00524944: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0052494b: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524951: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00524954: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x524959u); f_00787a4c();
    /* 00524959: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0052495c: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00524963: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00524966: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0052496d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00524974: push 0x40c */ { u32 v = 0x40cu; r_esp -= 4; W32(r_esp, v); }
    /* 00524979: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x52497eu); f_005caba4();
    /* 0052497e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0052497f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00524982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524984: je 0x5249bb */ if (fZ) goto L_005249bb;
L_00524986:; BB(0x00524986);
    /* 00524986: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0052498d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00524994: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524997: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0052499a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0052499d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0052499e: call 0x5249c8 */ r_esp -= 4; W32(r_esp, 0x5249a3u); f_005249c8();
    /* 005249a3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005249a6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005249ad:; BB(0x005249ad);
    /* 005249ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005249b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005249b7: mov esp, ebp */ r_esp = r_ebp;
    /* 005249b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005249ba: ret  */ FN_RET(0x00524944); r_esp += 4; return;
L_005249bb:; BB(0x005249bb);
    /* 005249bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005249bd: jmp 0x5249ad */ goto L_005249ad;
}

void f_005249c8(void) /* sub_5249C8 */
{
    FN_ENTER(0x005249c8);
    /* 005249c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005249c9: mov ebp, esp */ r_ebp = r_esp;
    /* 005249cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005249cd: push 0x8d495c */ { u32 v = 0x8d495cu; r_esp -= 4; W32(r_esp, v); }
    /* 005249d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005249d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005249d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005249e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005249e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005249e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005249e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005249ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005249ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005249f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005249f5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005249f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005249fb: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x524a00u); f_007865e8();
    /* 00524a00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00524a07: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a0a: mov dword ptr [ecx], 0xb00b60 */ W32((u32)(r_ecx), 0xb00b60u);
    /* 00524a10: add ecx, 0x3b8 */ {  u32 a = r_ecx; u32 b = 0x3b8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00524a16: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x524a1bu); f_00576a48();
    /* 00524a1b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00524a22: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a25: mov eax, dword ptr [0x9bbb5c] */ r_eax = R32((u32)(0x9bbb5cu));
    /* 00524a2a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00524a2d: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00524a2f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00524a32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524a33: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x524a39u); call_ind(t); }
    /* 00524a39: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a3c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524a3e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524a40: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00524a43: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00524a46: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 00524a49: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 00524a4f: mov dword ptr [esi + 0x2a8], edx */ W32((u32)(r_esi+0x2a8u), r_edx);
    /* 00524a55: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a58: mov dword ptr [esi + 0x2ac], ebx */ W32((u32)(r_esi+0x2acu), r_ebx);
    /* 00524a5e: mov edi, dword ptr [edx + 0x2a4] */ r_edi = R32((u32)(r_edx+0x2a4u));
    /* 00524a64: mov ecx, dword ptr [edx + 0x2a8] */ r_ecx = R32((u32)(r_edx+0x2a8u));
    /* 00524a6a: mov eax, dword ptr [edx + 0x2ac] */ r_eax = R32((u32)(r_edx+0x2acu));
    /* 00524a70: mov dword ptr [edx + 0x298], edi */ W32((u32)(r_edx+0x298u), r_edi);
    /* 00524a76: mov dword ptr [edx + 0x29c], ecx */ W32((u32)(r_edx+0x29cu), r_ecx);
    /* 00524a7c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a7f: mov dword ptr [edx + 0x2a0], eax */ W32((u32)(r_edx+0x2a0u), r_eax);
    /* 00524a85: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524a88: mov eax, dword ptr [edx + 0x298] */ r_eax = R32((u32)(r_edx+0x298u));
    /* 00524a8e: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 00524a91: mov eax, dword ptr [edx + 0x29c] */ r_eax = R32((u32)(r_edx+0x29cu));
    /* 00524a97: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 00524a9a: mov eax, dword ptr [edx + 0x2a0] */ r_eax = R32((u32)(r_edx+0x2a0u));
    /* 00524aa0: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 00524aa3: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x524aa8u); f_00772b44();
    /* 00524aa8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524aab: mov eax, dword ptr [0xa72edc] */ r_eax = R32((u32)(0xa72edcu));
    /* 00524ab0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00524ab2: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 00524ab8: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 00524abe: mov dword ptr [ecx + 0x6c], 0x3fa66666 */ W32((u32)(r_ecx+0x6cu), 0x3fa66666u);
    /* 00524ac5: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00524acf: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x524ad4u); f_00787550();
    /* 00524ad4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524ad7: mov edi, dword ptr [0xa72edc] */ r_edi = R32((u32)(0xa72edcu));
    /* 00524add: fld dword ptr [0x9217dc] */ FPUSH(R_F32((u32)(0x9217dcu)));
    /* 00524ae3: mov edx, 0x1e */ r_edx = 0x1eu;
    /* 00524ae8: mov word ptr [ecx + 0x342], dx */ W16((u32)(r_ecx+0x342u), (u16)r_edx);
    /* 00524aef: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00524af6: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 00524afc: mov dword ptr [ecx + 0x33c], 0 */ W32((u32)(r_ecx+0x33cu), 0x0u);
    /* 00524b06: mov ebx, dword ptr [edi + 0x42c] */ r_ebx = R32((u32)(r_edi+0x42cu));
    /* 00524b0c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524b0e: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00524b12: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00524b15: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00524b1b: mov eax, dword ptr [eax + edx*8 + 0xc] */ r_eax = R32((u32)(r_eax+r_edx*8+0xcu));
    /* 00524b1f: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00524b22: fcomp dword ptr [ecx + 0x360] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x360u))); FPOP();
    /* 00524b28: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524b2a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524b2b: mov dword ptr [ecx + 0xd8], 0x9bbaa0 */ W32((u32)(r_ecx+0xd8u), 0x9bbaa0u);
    /* 00524b35: jae 0x524b45 */ if (!fC) goto L_00524b45;
L_00524b37:; BB(0x00524b37);
    /* 00524b37: mov eax, 2 */ r_eax = 0x2u;
    /* 00524b3c: mov word ptr [ecx + 0x3a4], ax */ W16((u32)(r_ecx+0x3a4u), (u16)r_eax);
    /* 00524b43: jmp 0x524b51 */ goto L_00524b51;
L_00524b45:; BB(0x00524b45);
    /* 00524b45: mov eax, 1 */ r_eax = 0x1u;
    /* 00524b4a: mov word ptr [ecx + 0x3a4], ax */ W16((u32)(r_ecx+0x3a4u), (u16)r_eax);
L_00524b51:; BB(0x00524b51);
    /* 00524b51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00524b53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524b54: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00524b5b: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x524b60u); f_007aa4c8();
    /* 00524b60: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524b63: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00524b65: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 00524b6c: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 00524b72: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 00524b79: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00524b7c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b7e: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b80: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b82: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b84: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b86: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00524b88: lea esi, [ebx + ebx + 0x9bbb80] */ r_esi = (u32)(r_ebx+r_ebx+0x9bbb80u);
    /* 00524b8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524b90: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x524b95u); f_007b9a88();
    /* 00524b95: push dword ptr [0xa72ee4] */ { u32 v = R32((u32)(0xa72ee4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00524b9b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524b9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00524ba0: mov edx, dword ptr [0xa72ee8] */ r_edx = R32((u32)(0xa72ee8u));
    /* 00524ba6: mov word ptr [ecx + 0x3a6], ax */ W16((u32)(r_ecx+0x3a6u), (u16)r_eax);
    /* 00524bad: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00524baf: push dword ptr [0xa72eec] */ { u32 v = R32((u32)(0xa72eecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00524bb5: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x524bbau); f_007868f8();
    /* 00524bba: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524bbd: mov eax, dword ptr [ecx + 0x370] */ r_eax = R32((u32)(r_ecx+0x370u));
    /* 00524bc3: movzx esi, word ptr [ecx + 0x334] */ r_esi = (u32)R16((u32)(r_ecx+0x334u));
    /* 00524bca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00524bcc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00524bce: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00524bd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524bd3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524bd5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00524bd7: lea ebx, [edx + 0x9bbb64] */ r_ebx = (u32)(r_edx+0x9bbb64u);
    /* 00524bdd: mov dword ptr [ecx + 0x358], ebx */ W32((u32)(r_ecx+0x358u), r_ebx);
    /* 00524be3: mov word ptr [ecx + 0x346], si */ W16((u32)(r_ecx+0x346u), (u16)r_esi);
    /* 00524bea: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x524befu); f_0078730c();
    /* 00524bef: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524bf2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524bf5: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00524bfb: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00524c01: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00524c07: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 00524c0a: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 00524c0d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00524c10: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x524c15u); f_007b4f54();
    /* 00524c15: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524c18: mov edx, dword ptr [esi + 0x2e8] */ r_edx = R32((u32)(r_esi+0x2e8u));
    /* 00524c1e: mov ebx, dword ptr [esi + 0x30] */ r_ebx = R32((u32)(r_esi+0x30u));
    /* 00524c21: mov edi, dword ptr [esi + 0x3b8] */ r_edi = R32((u32)(r_esi+0x3b8u));
    /* 00524c27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00524c29: mov word ptr [esi + 0x32e], ax */ W16((u32)(r_esi+0x32eu), (u16)r_eax);
    /* 00524c30: mov dword ptr [esi + 0x3a0], 0 */ W32((u32)(r_esi+0x3a0u), 0x0u);
    /* 00524c3a: or ebx, 0x4040000 */ {  u32 a = r_ebx; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00524c40: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00524c47: mov dword ptr [esi + 0x3a8], eax */ W32((u32)(r_esi+0x3a8u), r_eax);
    /* 00524c4d: mov dword ptr [esi + 0x3dc], eax */ W32((u32)(r_esi+0x3dcu), r_eax);
    /* 00524c53: mov dword ptr [esi + 0x3e0], eax */ W32((u32)(r_esi+0x3e0u), r_eax);
    /* 00524c59: mov dword ptr [esi + 0x3e4], eax */ W32((u32)(r_esi+0x3e4u), r_eax);
    /* 00524c5f: mov dword ptr [esi + 0x3e8], eax */ W32((u32)(r_esi+0x3e8u), r_eax);
    /* 00524c65: mov dword ptr [esi + 0x3ec], eax */ W32((u32)(r_esi+0x3ecu), r_eax);
    /* 00524c6b: mov dword ptr [esi + 0x3f0], eax */ W32((u32)(r_esi+0x3f0u), r_eax);
    /* 00524c71: mov dword ptr [esi + 0x3f4], eax */ W32((u32)(r_esi+0x3f4u), r_eax);
    /* 00524c77: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 00524c7d: mov dword ptr [esi + 0x3fc], eax */ W32((u32)(r_esi+0x3fcu), r_eax);
    /* 00524c83: mov dword ptr [esi + 0x400], eax */ W32((u32)(r_esi+0x400u), r_eax);
    /* 00524c89: mov dword ptr [esi + 0x404], eax */ W32((u32)(r_esi+0x404u), r_eax);
    /* 00524c8f: mov dword ptr [esi + 0x408], eax */ W32((u32)(r_esi+0x408u), r_eax);
    /* 00524c95: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00524c98: mov dword ptr [esi + 0x2e8], edx */ W32((u32)(r_esi+0x2e8u), r_edx);
    /* 00524c9e: mov dword ptr [esi + 0x30], ebx */ W32((u32)(r_esi+0x30u), r_ebx);
    /* 00524ca1: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 00524ca7: call dword ptr [edi + 0xc] */ { u32 t = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, 0x524caau); call_ind(t); }
    /* 00524caa: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524cad: mov dword ptr [eax + 0x3b4], 1 */ W32((u32)(r_eax+0x3b4u), 0x1u);
    /* 00524cb7: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 00524cbc: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00524cc1: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x524cc6u); f_00578cc4();
    /* 00524cc6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524cc9: push 0xffff0088 */ { u32 v = 0xffff0088u; r_esp -= 4; W32(r_esp, v); }
    /* 00524cce: push 0xa0303030 */ { u32 v = 0xa0303030u; r_esp -= 4; W32(r_esp, v); }
    /* 00524cd3: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 00524cd9: call 0x578cc4 */ r_esp -= 4; W32(r_esp, 0x524cdeu); f_00578cc4();
    /* 00524cde: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00524ce1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524ce4: mov dword ptr [ecx + 0x3b0], 0 */ W32((u32)(r_ecx+0x3b0u), 0x0u);
    /* 00524cee: mov dword ptr [ecx + 0x3d8], eax */ W32((u32)(r_ecx+0x3d8u), r_eax);
    /* 00524cf4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00524cf6: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x524cfcu); call_ind(t); }
    /* 00524cfc: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00524cff: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00524d02: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00524d05: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00524d08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00524d0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00524d12: mov esp, ebp */ r_esp = r_ebp;
    /* 00524d14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00524d15: ret 8 */ FN_RET(0x005249c8); r_esp += 12; return;
}

void f_00524d18(void) /* sub_524D18 */
{
    FN_ENTER(0x00524d18);
    /* 00524d18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00524d19: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00524d1c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00524d1e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00524d20: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524d22: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00524d24: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x524d27u); call_ind(t); }
    /* 00524d27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524d29: je 0x524eff */ if (fZ) goto L_00524eff;
L_00524d2f:; BB(0x00524d2f);
    /* 00524d2f: mov eax, dword ptr [ebx + 0x3b4] */ r_eax = R32((u32)(r_ebx+0x3b4u));
    /* 00524d35: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524d38: je 0x524f20 */ if (fZ) goto L_00524f20;
L_00524d3e:; BB(0x00524d3e);
    /* 00524d3e: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524d41: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00524d43: je 0x524e81 */ if (fZ) goto L_00524e81;
L_00524d49:; BB(0x00524d49);
    /* 00524d49: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00524d4f: add ecx, dword ptr [0xaae164] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00524d55: mov edx, dword ptr [ebx + 0x358] */ r_edx = R32((u32)(r_ebx+0x358u));
    /* 00524d5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00524d5d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00524d64: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00524d69: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00524d71: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00524d79: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00524d7b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00524d7d: mov edx, 0 */ r_edx = 0x0u;
    /* 00524d82: jle 0x524f37 */ if ((fZ||fS!=fO)) goto L_00524f37;
L_00524d88:; BB(0x00524d88);
    /* 00524d88: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00524d8c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00524d90: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00524d94: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00524d98: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00524d9c: mov ebp, edx */ r_ebp = r_edx;
    /* 00524d9e: mov edx, ecx */ r_edx = r_ecx;
L_00524da0:; BB(0x00524da0);
    /* 00524da0: mov esi, dword ptr [ebp*4 + 0xaad720] */ r_esi = R32((u32)(r_ebp*4+0xaad720u));
    /* 00524da7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524da9: je 0x524f0b */ if (fZ) goto L_00524f0b;
L_00524daf:; BB(0x00524daf);
    /* 00524daf: movzx edi, word ptr [esi + 0x1c] */ r_edi = (u32)R16((u32)(r_esi+0x1cu));
    /* 00524db3: cmp edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524db9: jge 0x524e5d */ if ((fS==fO)) goto L_00524e5d;
L_00524dbf:; BB(0x00524dbf);
    /* 00524dbf: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00524dc3: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524dc5: je 0x524e5d */ if (fZ) goto L_00524e5d;
L_00524dcb:; BB(0x00524dcb);
    /* 00524dcb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00524dce: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524dd3: jne 0x524e5d */ if (!fZ) goto L_00524e5d;
L_00524dd9:; BB(0x00524dd9);
    /* 00524dd9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00524ddc: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 00524de2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00524de5: mov eax, dword ptr [esi + 0x304] */ r_eax = R32((u32)(r_esi+0x304u));
    /* 00524deb: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 00524df1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00524df5: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 00524dfb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00524dff: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x524e04u); f_0082f9c4();
    /* 00524e04: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00524e07: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00524e09: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00524e0d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00524e0f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00524e11: fcom dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); 
    /* 00524e15: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00524e17: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00524e1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00524e1c: jb 0x524e2c */ if (fC) goto L_00524e2c;
L_00524e1e:; BB(0x00524e1e);
    /* 00524e1e: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00524e24: add edx, dword ptr [0xaae164] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaae164u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524e2a: jmp 0x524e5d */ goto L_00524e5d;
L_00524e2c:; BB(0x00524e2c);
    /* 00524e2c: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00524e32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00524e33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524e35: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x524e3au); f_00771e14();
    /* 00524e3a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 00524e40: mov esi, dword ptr [0xaae164] */ r_esi = R32((u32)(0xaae164u));
    /* 00524e46: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524e49: je 0x524f04 */ if (fZ) goto L_00524f04;
L_00524e4f:; BB(0x00524e4f);
    /* 00524e4f: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00524e53: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00524e57: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524e59: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
L_00524e5d:; BB(0x00524e5d);
    /* 00524e5d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00524e60: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524e62: jl 0x524da0 */ if ((fS!=fO)) goto L_00524da0;
L_00524e68:; BB(0x00524e68);
    /* 00524e68: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00524e6c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00524e70: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00524e74: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_00524e78:; BB(0x00524e78);
    /* 00524e78: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00524e7f: jmp 0x524e99 */ goto L_00524e99;
L_00524e81:; BB(0x00524e81);
    /* 00524e81: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524e83: mov eax, dword ptr [ebx + 0x358] */ r_eax = R32((u32)(r_ebx+0x358u));
    /* 00524e89: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00524e8b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524e8d: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x524e92u); f_007714cc();
    /* 00524e92: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
L_00524e99:; BB(0x00524e99);
    /* 00524e99: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00524e9c: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524ea2: jl 0x524ec8 */ if ((fS!=fO)) goto L_00524ec8;
L_00524ea4:; BB(0x00524ea4);
    /* 00524ea4: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00524eaa: jge 0x524eff */ if ((fS==fO)) goto L_00524eff;
L_00524eac:; BB(0x00524eac);
    /* 00524eac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524ead: call 0x786b3c */ r_esp -= 4; W32(r_esp, 0x524eb2u); f_00786b3c();
    /* 00524eb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524eb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524eb4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524eb6: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x524ebbu); f_007706b0();
    /* 00524ebb: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524ebe: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00524ec3: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00524ec6: jmp 0x524eff */ goto L_00524eff;
L_00524ec8:; BB(0x00524ec8);
    /* 00524ec8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00524ec9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x524eceu); f_0068d5a8();
    /* 00524ece: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00524ecf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524ed1: je 0x524ef6 */ if (fZ) goto L_00524ef6;
L_00524ed3:; BB(0x00524ed3);
    /* 00524ed3: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 00524ed9: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524edf: jne 0x524ef6 */ if (!fZ) goto L_00524ef6;
L_00524ee1:; BB(0x00524ee1);
    /* 00524ee1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00524ee2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524ee4: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x524ee9u); f_007706b0();
    /* 00524ee9: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524eec: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00524ef1: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00524ef4: jmp 0x524eff */ goto L_00524eff;
L_00524ef6:; BB(0x00524ef6);
    /* 00524ef6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524ef8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524efa: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x524effu); f_007706b0();
L_00524eff:; BB(0x00524eff);
    /* 00524eff: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00524f02: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f03: ret  */ FN_RET(0x00524d18); r_esp += 4; return;
L_00524f04:; BB(0x00524f04);
    /* 00524f04: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00524f06: jmp 0x524e5d */ goto L_00524e5d;
L_00524f0b:; BB(0x00524f0b);
    /* 00524f0b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00524f0f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00524f13: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00524f17: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00524f1b: jmp 0x524e78 */ goto L_00524e78;
L_00524f20:; BB(0x00524f20);
    /* 00524f20: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00524f25: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00524f27: mov word ptr [ebx + 0x340], ax */ W16((u32)(r_ebx+0x340u), (u16)r_eax);
    /* 00524f2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524f30: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x524f35u); f_007706b0();
    /* 00524f35: jmp 0x524eff */ goto L_00524eff;
L_00524f37:; BB(0x00524f37);
    /* 00524f37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00524f39: jmp 0x524e78 */ goto L_00524e78;
}

void f_00524f40(void) /* sub_524F40 */
{
    FN_ENTER(0x00524f40);
    /* 00524f40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00524f41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00524f43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524f45: call 0x777d10 */ r_esp -= 4; W32(r_esp, 0x524f4au); f_00777d10();
    /* 00524f4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524f4c: je 0x524f8d */ if (fZ) goto L_00524f8d;
L_00524f4e:; BB(0x00524f4e);
    /* 00524f4e: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00524f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f57: jne 0x524f86 */ if (!fZ) goto L_00524f86;
L_00524f59:; BB(0x00524f59);
    /* 00524f59: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00524f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00524f86:; BB(0x00524f86);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f40); r_esp += 4; return;
L_00524f8d:; BB(0x00524f8d);
    /* 00524f8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f90: ret  */ FN_RET(0x00524f40); r_esp += 4; return;
}

void f_00524f4b(void)
{
    FN_ENTER(0x00524f4b);
    /* 00524f4b: sal byte ptr [edi + edi + 0xf], 0xbf */ { u32 ad = (u32)(r_edi+r_edi+0xfu); u32 c = (31u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 00524f50: sub dword ptr [esi], 3 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00524f53: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f57: jne 0x524f86 */ if (!fZ) goto L_00524f86;
L_00524f59:; BB(0x00524f59);
    /* 00524f59: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00524f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00524f86:; BB(0x00524f86);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f4b); r_esp += 4; return;
}

void f_00524f4c(void)
{
    FN_ENTER(0x00524f4c);
    /* 00524f4c: je 0x524f8d */ if (fZ) goto L_00524f8d;
L_00524f4e:; BB(0x00524f4e);
    /* 00524f4e: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00524f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f57: jne 0x524f86 */ if (!fZ) goto L_00524f86;
L_00524f59:; BB(0x00524f59);
    /* 00524f59: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00524f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00524f86:; BB(0x00524f86);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f4c); r_esp += 4; return;
L_00524f8d:; BB(0x00524f8d);
    /* 00524f8d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f8f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f90: ret  */ FN_RET(0x00524f4c); r_esp += 4; return;
}

void f_00524f4e(void)
{
    FN_ENTER(0x00524f4e);
    /* 00524f4e: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00524f55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f57: jne 0x524f86 */ if (!fZ) goto L_00524f86;
L_00524f59:; BB(0x00524f59);
    /* 00524f59: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00524f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00524f86:; BB(0x00524f86);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f4e); r_esp += 4; return;
}

void f_00524f4f(void)
{
    FN_ENTER(0x00524f4f);
    /* 00524f4f: mov edi, 0x32e83 */ r_edi = 0x32e83u;
    /* 00524f54: add byte ptr [ebp - 0x38d28a40], al */ { u32 ad = (u32)(r_ebp+0xc72d75c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524f5a: xor dword ptr [ebx + eax], 0 */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00524f62: add byte ptr [eax + 2], bh */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f4f); r_esp += 4; return;
}

void f_00524f54(void)
{
    FN_ENTER(0x00524f54);
    /* 00524f54: add byte ptr [ebp - 0x38d28a40], al */ { u32 ad = (u32)(r_ebp+0xc72d75c0u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524f5a: xor dword ptr [ebx + eax], 0 */ { u32 ad = (u32)(r_ebx+r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00524f62: add byte ptr [eax + 2], bh */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00524f68: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524f6f: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524f72: mov edx, 1 */ r_edx = 0x1u;
    /* 00524f77: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524f7e: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524f83: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00524f86: mov eax, 1 */ r_eax = 0x1u;
    /* 00524f8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524f8c: ret  */ FN_RET(0x00524f54); r_esp += 4; return;
}

void f_00524f94(void) /* sub_524F94 */
{
    FN_ENTER(0x00524f94);
    /* 00524f94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00524f95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00524f97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00524f99: call 0x7780a8 */ r_esp -= 4; W32(r_esp, 0x524f9eu); f_007780a8();
    /* 00524f9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524fa0: je 0x524fe1 */ if (fZ) goto L_00524fe1;
L_00524fa2:; BB(0x00524fa2);
    /* 00524fa2: movsx eax, word ptr [ebx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00524fa9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524fab: jne 0x524fda */ if (!fZ) goto L_00524fda;
L_00524fad:; BB(0x00524fad);
    /* 00524fad: mov dword ptr [ebx + 0x3b4], 0 */ W32((u32)(r_ebx+0x3b4u), 0x0u);
    /* 00524fb7: mov eax, 2 */ r_eax = 0x2u;
    /* 00524fbc: mov word ptr [ebx + 0x330], ax */ W16((u32)(r_ebx+0x330u), (u16)r_eax);
    /* 00524fc3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00524fc6: mov edx, 1 */ r_edx = 0x1u;
    /* 00524fcb: mov word ptr [ebx + 0xb8], dx */ W16((u32)(r_ebx+0xb8u), (u16)r_edx);
    /* 00524fd2: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524fd7: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_00524fda:; BB(0x00524fda);
    /* 00524fda: mov eax, 1 */ r_eax = 0x1u;
    /* 00524fdf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524fe0: ret  */ FN_RET(0x00524f94); r_esp += 4; return;
L_00524fe1:; BB(0x00524fe1);
    /* 00524fe1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00524fe3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00524fe4: ret  */ FN_RET(0x00524f94); r_esp += 4; return;
}

void f_00524fe8(void) /* sub_524FE8 */
{
    FN_ENTER(0x00524fe8);
    /* 00524fe8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00524fef: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00524ff2: je 0x52501d */ if (fZ) goto L_0052501d;
L_00524ff4:; BB(0x00524ff4);
    /* 00524ff4: mov eax, 7 */ r_eax = 0x7u;
    /* 00524ff9: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 00525000: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00525003: mov edx, 5 */ r_edx = 0x5u;
    /* 00525008: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 0052500f: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00525014:; BB(0x00525014);
    /* 00525014: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00525019: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0052501c: ret  */ FN_RET(0x00524fe8); r_esp += 4; return;
L_0052501d:; BB(0x0052501d);
    /* 0052501d: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00525020: jmp 0x525014 */ goto L_00525014;
}

