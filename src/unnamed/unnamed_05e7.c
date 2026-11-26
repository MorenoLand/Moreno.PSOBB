#include "protos.h"

void f_005e7014(void) /* sub_5E7014 */
{
    FN_ENTER(0x005e7014);
    /* 005e7014: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7015: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7016: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7017: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7018: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e701e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e7020: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7022: mov ebx, dword ptr [esp + 0xc8] */ r_ebx = R32((u32)(r_esp+0xc8u));
    /* 005e7029: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e702eu); f_005e908c();
    /* 005e702e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7030: je 0x5e71dc */ if (fZ) goto L_005e71dc;
L_005e7036:; BB(0x005e7036);
    /* 005e7036: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e703c: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7042: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5e7047u); f_006a2e8c();
    /* 005e7047: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7049: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x5e704eu); f_005e4ba8();
    /* 005e704e: mov esi, eax */ r_esi = r_eax;
    /* 005e7050: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7053: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 005e7057: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5e705cu); f_005c5ae4();
    /* 005e705c: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 005e7060: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7061: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7063: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5e7068u); f_005e8f04();
    /* 005e7068: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005e706a: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005e706e: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 005e7071: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 005e7075: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 005e7078: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 005e707c: mov edi, dword ptr [ebp + 0xf8] */ r_edi = R32((u32)(r_ebp+0xf8u));
    /* 005e7082: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 005e7085: mov edi, dword ptr [esp + 0xd0] */ r_edi = R32((u32)(r_esp+0xd0u));
    /* 005e708c: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e708e: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005e7092: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 005e7094: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7097: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7099: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 005e709d: mov edi, dword ptr [ebp + 0x208] */ r_edi = R32((u32)(r_ebp+0x208u));
    /* 005e70a3: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 005e70a7: mov edi, dword ptr [esp + 0xcc] */ r_edi = R32((u32)(r_esp+0xccu));
    /* 005e70ae: mov dword ptr [esp + 0x54], edi */ W32((u32)(r_esp+0x54u), r_edi);
    /* 005e70b2: mov edi, dword ptr [ebp + 0x24] */ r_edi = R32((u32)(r_ebp+0x24u));
    /* 005e70b5: mov dword ptr [esp + 0x58], edi */ W32((u32)(r_esp+0x58u), r_edi);
    /* 005e70b9: lea edi, [esp + 0x10] */ r_edi = (u32)(r_esp+0x10u);
    /* 005e70bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e70be: call dword ptr [eax + 0xe8] */ { u32 t = R32((u32)(r_eax+0xe8u)); r_esp -= 4; W32(r_esp, 0x5e70c4u); call_ind(t); }
    /* 005e70c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e70c6: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e70cbu); f_005e8fa4();
    /* 005e70cb: mov dword ptr [esp + 0x90], 0 */ W32((u32)(r_esp+0x90u), 0x0u);
    /* 005e70d6: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e70db: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 005e70e6: mov dword ptr [esp + 0x98], 0 */ W32((u32)(r_esp+0x98u), 0x0u);
    /* 005e70f1: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e70f6u); f_0082d990();
    /* 005e70f6: mov edi, dword ptr [esp + 0xd0] */ r_edi = R32((u32)(r_esp+0xd0u));
    /* 005e70fd: mov dword ptr [esp + 0xa0], 0 */ W32((u32)(r_esp+0xa0u), 0x0u);
    /* 005e7108: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e710a: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 005e7115: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005e7117: mov esi, dword ptr [ebp + 0xf8] */ r_esi = R32((u32)(r_ebp+0xf8u));
    /* 005e711d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005e7120: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 005e7127: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e7129: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e712eu); f_0082d8bc();
    /* 005e712e: lea esi, [esp + 0x9c] */ r_esi = (u32)(r_esp+0x9cu);
    /* 005e7135: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e713c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e713d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e713e: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e7143u); f_00835c3c();
    /* 005e7143: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7146: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 005e714d: mov edx, ebx */ r_edx = r_ebx;
    /* 005e714f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e7154u); f_0082ebac();
    /* 005e7154: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e7159u); f_0082da80();
    /* 005e7159: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e715a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e715c: call 0x5e9010 */ r_esp -= 4; W32(r_esp, 0x5e7161u); f_005e9010();
    /* 005e7161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7163: je 0x5e7246 */ if (fZ) goto L_005e7246;
L_005e7169:; BB(0x005e7169);
    /* 005e7169: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 005e716d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e7170: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 005e7172: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 005e7176: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e7179: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005e717d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e7180: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7184: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005e718a: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 005e718e: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 005e7195: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 005e719c: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
L_005e71a3:; BB(0x005e71a3);
    /* 005e71a3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005e71a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71aa: je 0x5e7220 */ if (fZ) goto L_005e7220;
L_005e71ac:; BB(0x005e71ac);
    /* 005e71ac: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e71b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e71b7: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e71bcu); f_005c60f0();
    /* 005e71bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71bf: mov eax, dword ptr [ebp + 0x238] */ r_eax = R32((u32)(r_ebp+0x238u));
    /* 005e71c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71c7: je 0x5e71d5 */ if (fZ) goto L_005e71d5;
L_005e71c9:; BB(0x005e71c9);
    /* 005e71c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71cb: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5e71d0u); f_005c5160();
    /* 005e71d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71d3: je 0x5e71e9 */ if (fZ) goto L_005e71e9;
L_005e71d5:; BB(0x005e71d5);
    /* 005e71d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71d7: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e71dcu); f_005e9058();
L_005e71dc:; BB(0x005e71dc);
    /* 005e71dc: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e71e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e71e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e71e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e71e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e71e6: ret 0xc */ FN_RET(0x005e7014); r_esp += 16; return;
L_005e71e9:; BB(0x005e71e9);
    /* 005e71e9: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e71f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e71f7u); f_00836208();
    /* 005e71f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71fa: fld dword ptr [ebp + 0x208] */ FPUSH(R_F32((u32)(r_ebp+0x208u)));
    /* 005e7200: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005e7202: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e7206: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e7209: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005e720d: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e7214: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e7218: call dword ptr [ebp + 0x238] */ { u32 t = R32((u32)(r_ebp+0x238u)); r_esp -= 4; W32(r_esp, 0x5e721eu); call_ind(t); }
    /* 005e721e: jmp 0x5e71d5 */ goto L_005e71d5;
L_005e7220:; BB(0x005e7220);
    /* 005e7220: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7223: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7225: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e722bu); call_ind(t); }
    /* 005e722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e722d: jne 0x5e71ac */ if (!fZ) goto L_005e71ac;
L_005e7233:; BB(0x005e7233);
    /* 005e7233: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e7237: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e723d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e7241: jmp 0x5e71ac */ goto L_005e71ac;
L_005e7246:; BB(0x005e7246);
    /* 005e7246: mov edi, dword ptr [ebp + 0xf8] */ r_edi = R32((u32)(r_ebp+0xf8u));
    /* 005e724c: mov eax, edi */ r_eax = r_edi;
    /* 005e724e: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e7253: je 0x5e71a3 */ if (fZ) goto L_005e71a3;
L_005e7259:; BB(0x005e7259);
    /* 005e7259: mov eax, dword ptr [edi + 0x8d0] */ r_eax = R32((u32)(r_edi+0x8d0u));
    /* 005e725f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e7261: jl 0x5e71a3 */ if ((fS!=fO)) goto L_005e71a3;
L_005e7267:; BB(0x005e7267);
    /* 005e7267: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e726a: jg 0x5e71a3 */ if ((!fZ&&fS==fO)) goto L_005e71a3;
L_005e7270:; BB(0x005e7270);
    /* 005e7270: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e7272: jle 0x5e71a3 */ if ((fZ||fS!=fO)) goto L_005e71a3;
L_005e7278:; BB(0x005e7278);
    /* 005e7278: mov eax, edi */ r_eax = r_edi;
    /* 005e727a: add eax, 0x8d4 */ {  u32 a = r_eax; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e727f: je 0x5e71a3 */ if (fZ) goto L_005e71a3;
L_005e7285:; BB(0x005e7285);
    /* 005e7285: movzx eax, word ptr [edi + 0x8d4] */ r_eax = (u32)R16((u32)(r_edi+0x8d4u));
    /* 005e728c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e728d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5e7292u); f_007b4d18();
    /* 005e7292: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e7293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7295: je 0x5e71a3 */ if (fZ) goto L_005e71a3;
L_005e729b:; BB(0x005e729b);
    /* 005e729b: mov esi, dword ptr [eax + 0xa4] */ r_esi = R32((u32)(r_eax+0xa4u));
    /* 005e72a1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e72a3: je 0x5e71a3 */ if (fZ) goto L_005e71a3;
L_005e72a9:; BB(0x005e72a9);
    /* 005e72a9: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 005e72b0: movsx eax, word ptr [edi + 0x8d6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8d6u));
    /* 005e72b7: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005e72ba: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e72bc: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005e72be: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e72c0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005e72c2: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005e72c4: mov eax, dword ptr [esi + edi*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_edi*4+0x1cu));
    /* 005e72c8: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 005e72cf: mov eax, dword ptr [esi + edi*4 + 0x20] */ r_eax = R32((u32)(r_esi+r_edi*4+0x20u));
    /* 005e72d3: mov edx, ebx */ r_edx = r_ebx;
    /* 005e72d5: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 005e72dc: mov eax, dword ptr [esi + edi*4 + 0x24] */ r_eax = R32((u32)(r_esi+r_edi*4+0x24u));
    /* 005e72e0: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 005e72e7: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5e72ecu); f_0082f9c4();
    /* 005e72ec: lea ecx, [esp + 0xa8] */ r_ecx = (u32)(r_esp+0xa8u);
    /* 005e72f3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5e72f8u); f_0082df08();
    /* 005e72f8: mov eax, dword ptr [esp + 0xa8] */ r_eax = R32((u32)(r_esp+0xa8u));
    /* 005e72ff: fld dword ptr [esi + edi*4 + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edi*4+0xcu)));
    /* 005e7303: mov esi, dword ptr [esp + 0xac] */ r_esi = R32((u32)(r_esp+0xacu));
    /* 005e730a: mov edi, dword ptr [esp + 0xb0] */ r_edi = R32((u32)(r_esp+0xb0u));
    /* 005e7311: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005e7313: mov edx, ebx */ r_edx = r_ebx;
    /* 005e7315: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 005e731c: fld dword ptr [esp + 0x90] */ FPUSH(R_F32((u32)(r_esp+0x90u)));
    /* 005e7323: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e7325: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 005e732c: mov dword ptr [esp + 0x94], esi */ W32((u32)(r_esp+0x94u), r_esi);
    /* 005e7333: fld dword ptr [esp + 0x94] */ FPUSH(R_F32((u32)(r_esp+0x94u)));
    /* 005e733a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e733c: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 005e7343: mov dword ptr [esp + 0x98], edi */ W32((u32)(r_esp+0x98u), r_edi);
    /* 005e734a: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 005e7351: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e7353: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 005e735a: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 005e7361: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5e7366u); f_0082ebac();
    /* 005e7366: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005e736b: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e7370u); f_0082d990();
    /* 005e7370: mov edx, dword ptr [esp + 0xd0] */ r_edx = R32((u32)(r_esp+0xd0u));
    /* 005e7377: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7379: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5e737eu); f_0082d8bc();
    /* 005e737e: lea esi, [esp + 0xa8] */ r_esi = (u32)(r_esp+0xa8u);
    /* 005e7385: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005e7389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e738a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e738b: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5e7390u); f_00835c3c();
    /* 005e7390: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7393: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 005e7397: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e739a: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 005e739e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e73a3u); f_0082da80();
    /* 005e73a3: jmp 0x5e71a3 */ goto L_005e71a3;
}

void f_005e7180(void)
{
    FN_ENTER(0x005e7180);
    /* 005e7180: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7184: or esi, 0x800 */ {  u32 a = r_esi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005e718a: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 005e718e: mov dword ptr [esp + 0x90], edi */ W32((u32)(r_esp+0x90u), r_edi);
    /* 005e7195: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 005e719c: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 005e71a3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005e71a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71aa: je 0x5e7220 */ if (fZ) goto L_005e7220;
L_005e71ac:; BB(0x005e71ac);
    /* 005e71ac: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e71b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e71b7: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e71bcu); f_005c60f0();
    /* 005e71bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71bf: mov eax, dword ptr [ebp + 0x238] */ r_eax = R32((u32)(r_ebp+0x238u));
    /* 005e71c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71c7: je 0x5e71d5 */ if (fZ) goto L_005e71d5;
L_005e71c9:; BB(0x005e71c9);
    /* 005e71c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71cb: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5e71d0u); f_005c5160();
    /* 005e71d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71d3: je 0x5e71e9 */ if (fZ) goto L_005e71e9;
L_005e71d5:; BB(0x005e71d5);
    /* 005e71d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71d7: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e71dcu); f_005e9058();
    /* 005e71dc: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e71e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e71e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e71e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e71e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e71e6: ret 0xc */ FN_RET(0x005e7180); r_esp += 16; return;
L_005e71e9:; BB(0x005e71e9);
    /* 005e71e9: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e71f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e71f7u); f_00836208();
    /* 005e71f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71fa: fld dword ptr [ebp + 0x208] */ FPUSH(R_F32((u32)(r_ebp+0x208u)));
    /* 005e7200: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005e7202: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e7206: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e7209: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005e720d: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e7214: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e7218: call dword ptr [ebp + 0x238] */ { u32 t = R32((u32)(r_ebp+0x238u)); r_esp -= 4; W32(r_esp, 0x5e721eu); call_ind(t); }
    /* 005e721e: jmp 0x5e71d5 */ goto L_005e71d5;
L_005e7220:; BB(0x005e7220);
    /* 005e7220: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7223: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7225: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e722bu); call_ind(t); }
    /* 005e722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e722d: jne 0x5e71ac */ if (!fZ) goto L_005e71ac;
L_005e7233:; BB(0x005e7233);
    /* 005e7233: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e7237: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e723d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e7241: jmp 0x5e71ac */ goto L_005e71ac;
}

void f_005e7392(void)
{
    FN_ENTER(0x005e7392);
    goto L_005e7392;
L_005e71a3:; BB(0x005e71a3);
    /* 005e71a3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005e71a7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71aa: je 0x5e7220 */ if (fZ) goto L_005e7220;
L_005e71ac:; BB(0x005e71ac);
    /* 005e71ac: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005e71b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71b1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e71b7: call 0x5c60f0 */ r_esp -= 4; W32(r_esp, 0x5e71bcu); f_005c60f0();
    /* 005e71bc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71bf: mov eax, dword ptr [ebp + 0x238] */ r_eax = R32((u32)(r_ebp+0x238u));
    /* 005e71c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71c7: je 0x5e71d5 */ if (fZ) goto L_005e71d5;
L_005e71c9:; BB(0x005e71c9);
    /* 005e71c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71cb: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5e71d0u); f_005c5160();
    /* 005e71d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e71d3: je 0x5e71e9 */ if (fZ) goto L_005e71e9;
L_005e71d5:; BB(0x005e71d5);
    /* 005e71d5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e71d7: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e71dcu); f_005e9058();
    /* 005e71dc: add esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e71e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e71e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e71e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e71e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e71e6: ret 0xc */ FN_RET(0x005e7392); r_esp += 16; return;
L_005e71e9:; BB(0x005e71e9);
    /* 005e71e9: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e71f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e71f2: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x5e71f7u); f_00836208();
    /* 005e71f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e71fa: fld dword ptr [ebp + 0x208] */ FPUSH(R_F32((u32)(r_ebp+0x208u)));
    /* 005e7200: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 005e7202: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e7206: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e7209: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005e720d: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 005e7214: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e7218: call dword ptr [ebp + 0x238] */ { u32 t = R32((u32)(r_ebp+0x238u)); r_esp -= 4; W32(r_esp, 0x5e721eu); call_ind(t); }
    /* 005e721e: jmp 0x5e71d5 */ goto L_005e71d5;
L_005e7220:; BB(0x005e7220);
    /* 005e7220: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7223: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7225: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5e722bu); call_ind(t); }
    /* 005e722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e722d: jne 0x5e71ac */ if (!fZ) goto L_005e71ac;
L_005e7233:; BB(0x005e7233);
    /* 005e7233: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 005e7237: fmul dword ptr [0x92d644] */ ST(0) = ST(0) * R_F32((u32)(0x92d644u));
    /* 005e723d: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005e7241: jmp 0x5e71ac */ goto L_005e71ac;
L_005e7392:; BB(0x005e7392);
    /* 005e7392: or byte ptr [ebx - 0x7cafdbbc], cl */ { u32 ad = (u32)(r_ebx+0x83502444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005e7398: enter -0x76ff, 0x44 */ { u32 f = 0x8901u; u32 lv = 4u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 005e739c: and al, 0x50 */ {  u32 a = (u8)r_eax; u32 b = 0x50u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005e739e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e73a3u); f_0082da80();
    /* 005e73a3: jmp 0x5e71a3 */ goto L_005e71a3;
}

void f_005e73a8(void) /* sub_5E73A8 */
{
    FN_ENTER(0x005e73a8);
    /* 005e73a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e73a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e73aa: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e73ad: mov esi, ecx */ r_esi = r_ecx;
    /* 005e73af: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 005e73b3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e73b5: jl 0x5e73bf */ if ((fS!=fO)) goto L_005e73bf;
L_005e73b7:; BB(0x005e73b7);
    /* 005e73b7: cmp ebp, 0xc8 */ {  u32 a = r_ebp; u32 b = 0xc8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e73bd: jl 0x5e73c7 */ if ((fS!=fO)) goto L_005e73c7;
L_005e73bf:; BB(0x005e73bf);
    /* 005e73bf: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e73c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e73c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e73c4: ret 0xc */ FN_RET(0x005e73a8); r_esp += 16; return;
L_005e73c7:; BB(0x005e73c7);
    /* 005e73c7: mov ecx, esi */ r_ecx = r_esi;
    /* 005e73c9: call 0x5e908c */ r_esp -= 4; W32(r_esp, 0x5e73ceu); f_005e908c();
    /* 005e73ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e73d0: je 0x5e7468 */ if (fZ) goto L_005e7468;
L_005e73d6:; BB(0x005e73d6);
    /* 005e73d6: mov ecx, esi */ r_ecx = r_esi;
    /* 005e73d8: call 0x5e8fa4 */ r_esp -= 4; W32(r_esp, 0x5e73ddu); f_005e8fa4();
    /* 005e73dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e73e0: call 0x5d0960 */ r_esp -= 4; W32(r_esp, 0x5e73e5u); f_005d0960();
    /* 005e73e5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e73e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e73e9: mov ecx, esi */ r_ecx = r_esi;
    /* 005e73eb: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5e73f0u); f_005e8f04();
    /* 005e73f0: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e73f4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e73f6: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e73fa: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e73fd: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005e7400: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005e7404: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005e7408: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005e740b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e740f: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 005e7413: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005e7417: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005e741d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005e7421: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e7424: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005e7428: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005e742e: movsx eax, word ptr [eax + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 005e7435: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7438: jne 0x5e744e */ if (!fZ) goto L_005e744e;
L_005e743a:; BB(0x005e743a);
    /* 005e743a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e743d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e743e: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e7444: call 0x5d09f8 */ r_esp -= 4; W32(r_esp, 0x5e7449u); f_005d09f8();
    /* 005e7449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e744c: jmp 0x5e7461 */ goto L_005e7461;
L_005e744e:; BB(0x005e744e);
    /* 005e744e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e7451: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7453: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e7459: call 0x5d0cf8 */ r_esp -= 4; W32(r_esp, 0x5e745eu); f_005d0cf8();
    /* 005e745e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7461:; BB(0x005e7461);
    /* 005e7461: mov ecx, esi */ r_ecx = r_esi;
    /* 005e7463: call 0x5e9058 */ r_esp -= 4; W32(r_esp, 0x5e7468u); f_005e9058();
L_005e7468:; BB(0x005e7468);
    /* 005e7468: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e746b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e746c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e746d: ret 0xc */ FN_RET(0x005e73a8); r_esp += 16; return;
}

void f_005e7470(void) /* sub_5E7470 */
{
    FN_ENTER(0x005e7470);
    /* 005e7470: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005e7476: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7479: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005e747f: ret  */ FN_RET(0x005e7470); r_esp += 4; return;
}

void f_005e7480(void) /* sub_5E7480 */
{
    FN_ENTER(0x005e7480);
    /* 005e7480: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7481: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7484: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e7486: mov eax, dword ptr [ebx + 0x1e0] */ r_eax = R32((u32)(r_ebx+0x1e0u));
    /* 005e748c: mov dword ptr [ebx + 0x1e4], eax */ W32((u32)(r_ebx+0x1e4u), r_eax);
    /* 005e7492: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e7497u); f_008587a5();
    /* 005e7497: fild dword ptr [ebx + 0x1e8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x1e8u)));
    /* 005e749d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e74a0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e74a3: fdiv dword ptr [0x92d63c] */ ST(0) = ST(0) / R_F32((u32)(0x92d63cu));
    /* 005e74a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e74ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e74ad: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005e74b1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005e74b6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e74bb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e74bf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e74c3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e74c7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005e74cb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005e74cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e74d0: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5e74d5u); f_005c36cc();
    /* 005e74d5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e74d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e74d9: ret  */ FN_RET(0x005e7480); r_esp += 4; return;
}

void f_005e74dc(void) /* sub_5E74DC */
{
    FN_ENTER(0x005e74dc);
    /* 005e74dc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e74e0: mov dword ptr [ecx + 0x1e0], eax */ W32((u32)(r_ecx+0x1e0u), r_eax);
    /* 005e74e6: ret 4 */ FN_RET(0x005e74dc); r_esp += 8; return;
}

void f_005e74ec(void) /* sub_5E74EC */
{
    FN_ENTER(0x005e74ec);
    /* 005e74ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e74ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e74ee: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e74f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e74f2: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e74f7u); f_005e84a8();
    /* 005e74f7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e74fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e74fd: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5e7502u); f_005e7534();
    /* 005e7502: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7504: call 0x5d2450 */ r_esp -= 4; W32(r_esp, 0x5e7509u); f_005d2450();
    /* 005e7509: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e750b: movsx ebp, al */ r_ebp = (u32)(i32)(i8)(u8)r_eax;
    /* 005e750e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7510: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e7515u); f_005d240c();
    /* 005e7515: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7517: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5e751cu); f_005e84a8();
    /* 005e751c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e751d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e751f: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e7524u); f_005d240c();
    /* 005e7524: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e7528: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e752a: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5e752fu); f_005e7534();
    /* 005e752f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7530: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7531: ret 8 */ FN_RET(0x005e74ec); r_esp += 12; return;
}

void f_005e7534(void) /* sub_5E7534 */
{
    FN_ENTER(0x005e7534);
    /* 005e7534: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7535: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7538: mov esi, ecx */ r_esi = r_ecx;
    /* 005e753a: mov eax, dword ptr [esi + 0x230] */ r_eax = R32((u32)(r_esi+0x230u));
    /* 005e7540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7542: je 0x5e75a0 */ if (fZ) goto L_005e75a0;
L_005e7544:; BB(0x005e7544);
    /* 005e7544: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7546: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5e754bu); f_0082d990();
    /* 005e754b: mov edx, dword ptr [esi + 0x230] */ r_edx = R32((u32)(r_esi+0x230u));
    /* 005e7551: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005e7559: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e755b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005e7563: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005e756a: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x5e756fu); f_0083b410();
    /* 005e756f: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x5e7574u); f_004d455c();
    /* 005e7574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7575: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7577: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x5e757cu); f_0083a668();
    /* 005e757c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e757f: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005e7583: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7584: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005e7588: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e758a: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x5e758fu); f_00830aa0();
    /* 005e758f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5e7594u); f_0082da80();
    /* 005e7594: mov eax, 1 */ r_eax = 0x1u;
    /* 005e7599: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e759c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e759d: ret 4 */ FN_RET(0x005e7534); r_esp += 8; return;
L_005e75a0:; BB(0x005e75a0);
    /* 005e75a0: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005e75a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e75a5: movsx edx, word ptr [esi + 0x1f2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x1f2u));
    /* 005e75ac: mov ecx, esi */ r_ecx = r_esi;
    /* 005e75ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e75af: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5e75b4u); f_005e83c8();
    /* 005e75b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e75b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e75b8: ret 4 */ FN_RET(0x005e7534); r_esp += 8; return;
}

void f_005e75bc(void) /* sub_5E75BC */
{
    FN_ENTER(0x005e75bc);
    /* 005e75bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e75bd: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e75c0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e75c2: mov ecx, dword ptr [ebx + 0xf8] */ r_ecx = R32((u32)(r_ebx+0xf8u));
    /* 005e75c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e75ca: je 0x5e7622 */ if (fZ) goto L_005e7622;
L_005e75cc:; BB(0x005e75cc);
    /* 005e75cc: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005e75d3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005e75d6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e75d9: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 005e75dd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005e75e1: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005e75e6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e75eb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005e75ef: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e75f3: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005e75f7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005e75fb: movsx eax, word ptr [esp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 005e7600: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7601: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x5e7606u); f_00777414();
    /* 005e7606: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005e760c: movzx ecx, word ptr [eax + 0x1c] */ r_ecx = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e7610: movsx edx, word ptr [eax + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 005e7617: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7618: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7619: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e761a: call 0x693348 */ r_esp -= 4; W32(r_esp, 0x5e761fu); f_00693348();
    /* 005e761f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7622:; BB(0x005e7622);
    /* 005e7622: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7625: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7626: ret 4 */ FN_RET(0x005e75bc); r_esp += 8; return;
}

void f_005e762c(void) /* sub_5E762C */
{
    FN_ENTER(0x005e762c);
    /* 005e762c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e762d: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005e7631: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7633: je 0x5e7643 */ if (fZ) goto L_005e7643;
L_005e7635:; BB(0x005e7635);
    /* 005e7635: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7636: call 0x5caa30 */ r_esp -= 4; W32(r_esp, 0x5e763bu); f_005caa30();
    /* 005e763b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e763c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e763eu); call_ind(t); }
    /* 005e763e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7641: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7642: ret  */ FN_RET(0x005e762c); r_esp += 4; return;
L_005e7643:; BB(0x005e7643);
    /* 005e7643: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7645: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7646: ret  */ FN_RET(0x005e762c); r_esp += 4; return;
}

void f_005e7648(void) /* sub_5E7648 */
{
    FN_ENTER(0x005e7648);
    /* 005e7648: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7649: mov ebp, esp */ r_ebp = r_esp;
    /* 005e764b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e764d: push 0x8dbbb8 */ { u32 v = 0x8dbbb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7652: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e7658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7659: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e7660: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7663: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e7666: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 005e7669: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 005e766c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 005e766f: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005e7676: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 005e7679: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e767e: jl 0x5e76b8 */ if ((fS!=fO)) goto L_005e76b8;
L_005e7680:; BB(0x005e7680);
    /* 005e7680: mov ecx, 0x92d5d8 */ r_ecx = 0x92d5d8u;
    /* 005e7685: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005e7687: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 005e768a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 005e768d: movzx edx, word ptr [ecx + 0xc] */ r_edx = (u32)R16((u32)(r_ecx+0xcu));
    /* 005e7691: movzx ebx, byte ptr [ecx + 0xe] */ r_ebx = (u32)R8((u32)(r_ecx+0xeu));
    /* 005e7695: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 005e7698: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 005e769b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e769e: mov word ptr [ebp - 0x38], dx */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edx);
    /* 005e76a2: mov byte ptr [ebp - 0x36], bl */ W8((u32)(r_ebp+0xffffffcau), (u8)r_ebx);
    /* 005e76a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e76a8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e76aa: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x5e76b0u); call_ind(t); }
    /* 005e76b0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e76b3: movzx eax, byte ptr [ebp + eax - 0x44] */ r_eax = (u32)R8((u32)(r_ebp+r_eax+0xffffffbcu));
L_005e76b8:; BB(0x005e76b8);
    /* 005e76b8: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e76bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e76bc: call 0x5d1a80 */ r_esp -= 4; W32(r_esp, 0x5e76c1u); f_005d1a80();
    /* 005e76c1: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e76c4: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e76c6: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x5e76ccu); call_ind(t); }
    /* 005e76cc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e76cf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e76d2: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e76d8: and dword ptr [ebp - 0x20], 0x8fffffff */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x8fffffffu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005e76df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e76e1: je 0x5e77a3 */ if (fZ) goto L_005e77a3;
L_005e76e7:; BB(0x005e76e7);
    /* 005e76e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e76e9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005e76ec:; BB(0x005e76ec);
    /* 005e76ec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e76ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e76f2: movsx ecx, byte ptr [eax + edx + 0x1c0] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax+r_edx+0x1c0u));
    /* 005e76fa: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e76fd: je 0x5e7761 */ if (fZ) goto L_005e7761;
L_005e76ff:; BB(0x005e76ff);
    /* 005e76ff: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005e7706: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7708: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e770du); f_005caba4();
    /* 005e770d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e7710: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7713: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005e7716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7718: je 0x5e77ba */ if (fZ) goto L_005e77ba;
L_005e771e:; BB(0x005e771e);
    /* 005e771e: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005e7725: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e772c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e772f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e7732: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7735: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7736: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e773c: call 0x5e9a70 */ r_esp -= 4; W32(r_esp, 0x5e7741u); f_005e9a70();
    /* 005e7741: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005e7748:; BB(0x005e7748);
    /* 005e7748: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e774b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e774e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7751: mov dword ptr [edx + ecx*4 + 0x1b0], eax */ W32((u32)(r_edx+r_ecx*4+0x1b0u), r_eax);
    /* 005e7758: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e775f: jmp 0x5e7770 */ goto L_005e7770;
L_005e7761:; BB(0x005e7761);
    /* 005e7761: mov eax, edx */ r_eax = r_edx;
    /* 005e7763: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7766: mov ecx, dword ptr [eax + edx*4 + 0x1b0] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1b0u));
    /* 005e776d: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_005e7770:; BB(0x005e7770);
    /* 005e7770: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7773: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7775: je 0x5e7791 */ if (fZ) goto L_005e7791;
L_005e7777:; BB(0x005e7777);
    /* 005e7777: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e777a: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005e777d: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7783: je 0x5e7791 */ if (fZ) goto L_005e7791;
L_005e7785:; BB(0x005e7785);
    /* 005e7785: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e7788: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 005e778b: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e778e: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_005e7791:; BB(0x005e7791);
    /* 005e7791: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7794: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e7797: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e779a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e779d: jl 0x5e76ec */ if ((fS!=fO)) goto L_005e76ec;
L_005e77a3:; BB(0x005e77a3);
    /* 005e77a3: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 005e77a6: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005e77a9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e77ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e77af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e77b6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e77b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e77b9: ret  */ FN_RET(0x005e7648); r_esp += 4; return;
L_005e77ba:; BB(0x005e77ba);
    /* 005e77ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e77bc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005e77bf: jmp 0x5e7748 */ goto L_005e7748;
}

void f_005e77c4(void) /* sub_5E77C4 */
{
    FN_ENTER(0x005e77c4);
    /* 005e77c4: lea edx, [ecx + 0x1b0] */ r_edx = (u32)(r_ecx+0x1b0u);
    /* 005e77ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e77cc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e77ce: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e77d1: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e77d4: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e77d7: mov eax, dword ptr [ecx + 0x1dc] */ r_eax = R32((u32)(r_ecx+0x1dcu));
    /* 005e77dd: and eax, 0xfffffff3 */ {  u32 a = r_eax; u32 b = 0xfffffff3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e77e0: mov dword ptr [ecx + 0x1dc], eax */ W32((u32)(r_ecx+0x1dcu), r_eax);
    /* 005e77e6: call 0x5d1840 */ r_esp -= 4; W32(r_esp, 0x5e77ebu); f_005d1840();
    /* 005e77eb: ret  */ FN_RET(0x005e77c4); r_esp += 4; return;
}

void f_005e77ec(void) /* sub_5E77EC */
{
    FN_ENTER(0x005e77ec);
    /* 005e77ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e77ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005e77ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e77f1: push 0x8dbbe0 */ { u32 v = 0x8dbbe0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e77f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e77fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e77fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e7804: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7807: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e780a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e780d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e7810: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e7813: mov eax, dword ptr [ecx + 0x190] */ r_eax = R32((u32)(r_ecx+0x190u));
    /* 005e7819: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e781c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e781e: je 0x5e7972 */ if (fZ) goto L_005e7972;
L_005e7824:; BB(0x005e7824);
    /* 005e7824: mov eax, ecx */ r_eax = r_ecx;
    /* 005e7826: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005e782c: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e782f: jne 0x5e786b */ if (!fZ) goto L_005e786b;
L_005e7831:; BB(0x005e7831);
    /* 005e7831: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5e7836u); f_00807d60();
    /* 005e7836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7838: jne 0x5e7845 */ if (!fZ) goto L_005e7845;
L_005e783a:; BB(0x005e783a);
    /* 005e783a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e783d: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005e7843: jmp 0x5e786b */ goto L_005e786b;
L_005e7845:; BB(0x005e7845);
    /* 005e7845: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7848: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e784a: call dword ptr [eax + 0xa4] */ { u32 t = R32((u32)(r_eax+0xa4u)); r_esp -= 4; W32(r_esp, 0x5e7850u); call_ind(t); }
    /* 005e7850: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7853: mov ecx, dword ptr [edx + 0xf8] */ r_ecx = R32((u32)(r_edx+0xf8u));
    /* 005e7859: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e785c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e785d: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x5e7862u); f_00687d30();
    /* 005e7862: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7865: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
L_005e786b:; BB(0x005e786b);
    /* 005e786b: mov ecx, dword ptr [eax + 0x1dc] */ r_ecx = R32((u32)(r_eax+0x1dcu));
    /* 005e7871: and ecx, 0xfffffeff */ {  u32 a = r_ecx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7877: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e787a: jne 0x5e7894 */ if (!fZ) goto L_005e7894;
L_005e787c:; BB(0x005e787c);
    /* 005e787c: mov ebx, dword ptr [eax + 0xf8] */ r_ebx = R32((u32)(r_eax+0xf8u));
    /* 005e7882: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 005e7888: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 005e788f: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7892: jne 0x5e78a2 */ if (!fZ) goto L_005e78a2;
L_005e7894:; BB(0x005e7894);
    /* 005e7894: or ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7897: mov dword ptr [eax + 0x1dc], ecx */ W32((u32)(r_eax+0x1dcu), r_ecx);
    /* 005e789d: jmp 0x5e7995 */ goto L_005e7995;
L_005e78a2:; BB(0x005e78a2);
    /* 005e78a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e78a4: je 0x5e78f3 */ if (fZ) goto L_005e78f3;
L_005e78a6:; BB(0x005e78a6);
    /* 005e78a6: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005e78ad: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e78af: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e78b4u); f_005caba4();
    /* 005e78b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e78b5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e78b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e78ba: je 0x5e78e3 */ if (fZ) goto L_005e78e3;
L_005e78bc:; BB(0x005e78bc);
    /* 005e78bc: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005e78c3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e78ca: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e78cd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005e78cf: push 0x5e94a4 */ { u32 v = 0x5e94a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e78d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e78d5: mov ecx, eax */ r_ecx = r_eax;
    /* 005e78d7: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5e78dcu); f_005e5b88();
    /* 005e78dc: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005e78e3:; BB(0x005e78e3);
    /* 005e78e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e78ea: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e78ed: mov ebx, dword ptr [eax + 0xf8] */ r_ebx = R32((u32)(r_eax+0xf8u));
L_005e78f3:; BB(0x005e78f3);
    /* 005e78f3: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e78f8: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 005e78fd: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005e7901: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7903: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7904: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e790a: call 0x5cd8f8 */ r_esp -= 4; W32(r_esp, 0x5e790fu); f_005cd8f8();
    /* 005e790f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7912: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7915: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005e791b: test edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7921: je 0x5e7948 */ if (fZ) goto L_005e7948;
L_005e7923:; BB(0x005e7923);
    /* 005e7923: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e7928: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 005e792d: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005e7933: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7935: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005e7939: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e793a: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e7940: call 0x5cd8f8 */ r_esp -= 4; W32(r_esp, 0x5e7945u); f_005cd8f8();
    /* 005e7945: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e7948:; BB(0x005e7948);
    /* 005e7948: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e794b: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 005e7951: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7954: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e7956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7957: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7958: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7959: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e795b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5e7960u); f_00814298();
    /* 005e7960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7962: push 0x300 */ { u32 v = 0x300u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7967: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7968: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x5e796du); f_00814664();
    /* 005e796d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7970: jmp 0x5e7995 */ goto L_005e7995;
L_005e7972:; BB(0x005e7972);
    /* 005e7972: mov eax, ecx */ r_eax = r_ecx;
    /* 005e7974: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7976: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 005e797c: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x5e7981u); f_00687d30();
    /* 005e7981: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7984: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005e798a: or eax, 0x108 */ {  u32 a = r_eax; u32 b = 0x108u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e798f: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
L_005e7995:; BB(0x005e7995);
    /* 005e7995: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e7998: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e799a: call dword ptr [eax + 0xe0] */ { u32 t = R32((u32)(r_eax+0xe0u)); r_esp -= 4; W32(r_esp, 0x5e79a0u); call_ind(t); }
    /* 005e79a0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e79a3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e79a6: mov eax, dword ptr [edx + 0x1dc] */ r_eax = R32((u32)(r_edx+0x1dcu));
    /* 005e79ac: and eax, 0x9fffffff */ {  u32 a = r_eax; u32 b = 0x9fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e79b1: mov dword ptr [edx + 0x1dc], eax */ W32((u32)(r_edx+0x1dcu), r_eax);
    /* 005e79b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e79ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e79c1: mov esp, ebp */ r_esp = r_ebp;
    /* 005e79c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e79c4: ret  */ FN_RET(0x005e77ec); r_esp += 4; return;
}

void f_005e79c8(void) /* sub_5E79C8 */
{
    FN_ENTER(0x005e79c8);
    /* 005e79c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e79c9: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e79cc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e79ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e79d0: call 0x5e7a20 */ r_esp -= 4; W32(r_esp, 0x5e79d5u); f_005e7a20();
    /* 005e79d5: mov eax, dword ptr [ebx + 0x200] */ r_eax = R32((u32)(r_ebx+0x200u));
    /* 005e79db: movzx edx, byte ptr [eax + 0x2b] */ r_edx = (u32)R8((u32)(r_eax+0x2bu));
    /* 005e79df: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e79e2: jne 0x5e7a18 */ if (!fZ) goto L_005e7a18;
L_005e79e4:; BB(0x005e79e4);
    /* 005e79e4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005e79e8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 005e79eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e79ed: lea eax, [ebx + 0x1c8] */ r_eax = (u32)(r_ebx+0x1c8u);
    /* 005e79f3: mov edi, ebx */ r_edi = r_ebx;
    /* 005e79f5: mov ebx, eax */ r_ebx = r_eax;
    /* 005e79f7: mov esi, edx */ r_esi = r_edx;
L_005e79f9:; BB(0x005e79f9);
    /* 005e79f9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e79fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e79fb: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e7a01: call 0x770d88 */ r_esp -= 4; W32(r_esp, 0x5e7a06u); f_00770d88();
    /* 005e7a06: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7a09: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e7a0c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7a0f: jl 0x5e79f9 */ if ((fS!=fO)) goto L_005e79f9;
L_005e7a11:; BB(0x005e7a11);
    /* 005e7a11: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 005e7a15: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_005e7a18:; BB(0x005e7a18);
    /* 005e7a18: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7a1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7a1c: ret  */ FN_RET(0x005e79c8); r_esp += 4; return;
}

void f_005e7a20(void) /* sub_5E7A20 */
{
    FN_ENTER(0x005e7a20);
    /* 005e7a20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a21: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a24: mov edi, ecx */ r_edi = r_ecx;
    /* 005e7a26: movzx ecx, byte ptr [edi + 0x1f6] */ r_ecx = (u32)R8((u32)(r_edi+0x1f6u));
    /* 005e7a2d: and ecx, 0x3f */ {  u32 a = r_ecx; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7a30: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005e7a34: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e7a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a38: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a39: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a3a: call 0x5e4cdc */ r_esp -= 4; W32(r_esp, 0x5e7a3fu); f_005e4cdc();
    /* 005e7a3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e7a42: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 005e7a47: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005e7a4d: mov word ptr [edx + 0x116], ax */ W16((u32)(r_edx+0x116u), (u16)r_eax);
    /* 005e7a54: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005e7a58: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005e7a5e: mov word ptr [edx + 0x118], ax */ W16((u32)(r_edx+0x118u), (u16)r_eax);
    /* 005e7a65: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e7a6b: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005e7a6d: call dword ptr [edi + 0x12c] */ { u32 t = R32((u32)(r_edi+0x12cu)); r_esp -= 4; W32(r_esp, 0x5e7a73u); call_ind(t); }
    /* 005e7a73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7a76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7a77: ret  */ FN_RET(0x005e7a20); r_esp += 4; return;
}

void f_005e7a78(void) /* sub_5E7A78 */
{
    FN_ENTER(0x005e7a78);
    /* 005e7a78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a7a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e7a7c: mov ebx, dword ptr [ebp + 0xf8] */ r_ebx = R32((u32)(r_ebp+0xf8u));
    /* 005e7a82: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7a85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7a87: call dword ptr [eax + 0x7c] */ { u32 t = R32((u32)(r_eax+0x7cu)); r_esp -= 4; W32(r_esp, 0x5e7a8au); call_ind(t); }
    /* 005e7a8a: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005e7a8c: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 005e7a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7a90: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7a92: call dword ptr [edx + 0x110] */ { u32 t = R32((u32)(r_edx+0x110u)); r_esp -= 4; W32(r_esp, 0x5e7a98u); call_ind(t); }
    /* 005e7a98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7a9a: je 0x5e7ac2 */ if (fZ) goto L_005e7ac2;
L_005e7a9c:; BB(0x005e7a9c);
    /* 005e7a9c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e7a9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7aa1: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x5e7aa7u); call_ind(t); }
    /* 005e7aa7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e7aa9: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e7aaeu); f_005d1978();
    /* 005e7aae: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005e7ab4: and eax, 0x9fffffff */ {  u32 a = r_eax; u32 b = 0x9fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7ab9: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005e7abf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e7ac1: ret  */ FN_RET(0x005e7a78); r_esp += 4; return;
L_005e7ac2:; BB(0x005e7ac2);
    /* 005e7ac2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ac4: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005e7aca: call 0x687d30 */ r_esp -= 4; W32(r_esp, 0x5e7acfu); f_00687d30();
    /* 005e7acf: jmp 0x5e7a9c */ goto L_005e7a9c;
}

void f_005e7ad4(void) /* sub_5E7AD4 */
{
    FN_ENTER(0x005e7ad4);
    /* 005e7ad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ad5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ad6: mov edx, ecx */ r_edx = r_ecx;
    /* 005e7ad8: mov ecx, dword ptr [edx + 0xf8] */ r_ecx = R32((u32)(r_edx+0xf8u));
    /* 005e7ade: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7ae0: mov word ptr [ecx + 0x116], ax */ W16((u32)(r_ecx+0x116u), (u16)r_eax);
    /* 005e7ae7: mov ecx, dword ptr [edx + 0xf8] */ r_ecx = R32((u32)(r_edx+0xf8u));
    /* 005e7aed: mov word ptr [ecx + 0x118], ax */ W16((u32)(r_ecx+0x118u), (u16)r_eax);
    /* 005e7af4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7af6: mov ebx, eax */ r_ebx = r_eax;
    /* 005e7af8: mov esi, edx */ r_esi = r_edx;
L_005e7afa:; BB(0x005e7afa);
    /* 005e7afa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7afb: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e7b01: call 0x770d6c */ r_esp -= 4; W32(r_esp, 0x5e7b06u); f_00770d6c();
    /* 005e7b06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e7b08: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 005e7b0a: mov byte ptr [eax + 1], cl */ W8((u32)(r_eax+0x1u), (u8)r_ecx);
    /* 005e7b0d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7b10: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e7b13: jl 0x5e7afa */ if ((fS!=fO)) goto L_005e7afa;
L_005e7b15:; BB(0x005e7b15);
    /* 005e7b15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7b16: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7b17: ret  */ FN_RET(0x005e7ad4); r_esp += 4; return;
}

void f_005e7b18(void) /* sub_5E7B18 */
{
    FN_ENTER(0x005e7b18);
    /* 005e7b18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e7b1b: movzx eax, word ptr [ebx + 0x1c8] */ r_eax = (u32)R16((u32)(r_ebx+0x1c8u));
    /* 005e7b22: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 005e7b26: mov word ptr [ecx + 6], ax */ W16((u32)(r_ecx+0x6u), (u16)r_eax);
    /* 005e7b2a: movzx edx, word ptr [ebx + 0x1ca] */ r_edx = (u32)R16((u32)(r_ebx+0x1cau));
    /* 005e7b31: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005e7b35: movzx eax, word ptr [ebx + 0x1cc] */ r_eax = (u32)R16((u32)(r_ebx+0x1ccu));
    /* 005e7b3c: mov word ptr [ecx + 0xa], ax */ W16((u32)(r_ecx+0xau), (u16)r_eax);
    /* 005e7b40: movzx eax, byte ptr [ebx + 0x1f5] */ r_eax = (u32)R8((u32)(r_ebx+0x1f5u));
    /* 005e7b47: mov byte ptr [ecx + 3], al */ W8((u32)(r_ecx+0x3u), (u8)r_eax);
    /* 005e7b4a: movzx eax, byte ptr [ebx + 0x1f6] */ r_eax = (u32)R8((u32)(r_ebx+0x1f6u));
    /* 005e7b51: mov edx, 1 */ r_edx = 0x1u;
    /* 005e7b56: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b5b: je 0x5e7b5f */ if (fZ) goto L_005e7b5f;
L_005e7b5d:; BB(0x005e7b5d);
    /* 005e7b5d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005e7b5f:; BB(0x005e7b5f);
    /* 005e7b5f: mov ebx, dword ptr [ebx + 0x200] */ r_ebx = R32((u32)(r_ebx+0x200u));
    /* 005e7b65: movzx ebx, byte ptr [ebx + 0x1c] */ r_ebx = (u32)R8((u32)(r_ebx+0x1cu));
    /* 005e7b69: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7b6b: jne 0x5e7b71 */ if (!fZ) goto L_005e7b71;
L_005e7b6d:; BB(0x005e7b6d);
    /* 005e7b6d: mov ebx, eax */ r_ebx = r_eax;
    /* 005e7b6f: jmp 0x5e7b75 */ goto L_005e7b75;
L_005e7b71:; BB(0x005e7b71);
    /* 005e7b71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7b73: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005e7b75:; BB(0x005e7b75);
    /* 005e7b75: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7b77: jne 0x5e7b83 */ if (!fZ) goto L_005e7b83;
L_005e7b79:; BB(0x005e7b79);
    /* 005e7b79: or eax, 0xffffff80 */ {  u32 a = r_eax; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7b7c: mov byte ptr [ecx + 4], al */ W8((u32)(r_ecx+0x4u), (u8)r_eax);
    /* 005e7b7f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7b80: ret 4 */ FN_RET(0x005e7b18); r_esp += 8; return;
L_005e7b83:; BB(0x005e7b83);
    /* 005e7b83: mov byte ptr [ecx + 4], bl */ W8((u32)(r_ecx+0x4u), (u8)r_ebx);
    /* 005e7b86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7b87: ret 4 */ FN_RET(0x005e7b18); r_esp += 8; return;
}

void f_005e7b8c(void) /* sub_5E7B8C */
{
    FN_ENTER(0x005e7b8c);
    /* 005e7b8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b8d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7b8e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7b91: mov edi, ecx */ r_edi = r_ecx;
    /* 005e7b93: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 005e7b97: movsx eax, word ptr [edi + 0x20c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20cu));
    /* 005e7b9e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7ba1: je 0x5e7bd2 */ if (fZ) goto L_005e7bd2;
L_005e7ba3:; BB(0x005e7ba3);
    /* 005e7ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ba4: call 0x5e4ac8 */ r_esp -= 4; W32(r_esp, 0x5e7ba9u); f_005e4ac8();
    /* 005e7ba9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e7baa: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e7bac: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7baf: je 0x5e7bf7 */ if (fZ) goto L_005e7bf7;
L_005e7bb1:; BB(0x005e7bb1);
    /* 005e7bb1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e7bb4: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 005e7bb6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005e7bb9: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 005e7bbc: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 005e7bbf: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 005e7bc2: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 005e7bc5: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 005e7bc8: mov eax, esi */ r_eax = r_esi;
    /* 005e7bca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7bcd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7bce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7bcf: ret 4 */ FN_RET(0x005e7b8c); r_esp += 8; return;
L_005e7bd2:; BB(0x005e7bd2);
    /* 005e7bd2: mov dword ptr [esi], 0x3f800000 */ W32((u32)(r_esi), 0x3f800000u);
    /* 005e7bd8: mov eax, esi */ r_eax = r_esi;
    /* 005e7bda: mov dword ptr [esi + 4], 0 */ W32((u32)(r_esi+0x4u), 0x0u);
    /* 005e7be1: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 005e7be8: mov dword ptr [esi + 0xc], 0 */ W32((u32)(r_esi+0xcu), 0x0u);
    /* 005e7bef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7bf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7bf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7bf4: ret 4 */ FN_RET(0x005e7b8c); r_esp += 8; return;
L_005e7bf7:; BB(0x005e7bf7);
    /* 005e7bf7: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 005e7bfa: fsub dword ptr [eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x4u));
    /* 005e7bfd: fmul dword ptr [edi + 0x1ec] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1ecu));
    /* 005e7c03: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 005e7c06: fld dword ptr [eax + 0x18] */ FPUSH(R_F32((u32)(r_eax+0x18u)));
    /* 005e7c09: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 005e7c0c: fmul dword ptr [edi + 0x1ec] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1ecu));
    /* 005e7c12: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 005e7c15: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 005e7c18: fsub dword ptr [eax + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0xcu));
    /* 005e7c1b: fmul dword ptr [edi + 0x1ec] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1ecu));
    /* 005e7c21: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 005e7c24: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 005e7c27: fsub dword ptr [eax + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x10u));
    /* 005e7c2a: fmul dword ptr [edi + 0x1ec] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x1ecu));
    /* 005e7c30: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 005e7c33: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e7c35: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005e7c39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e7c3b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005e7c3e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005e7c42: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005e7c46: mov ecx, edi */ r_ecx = r_edi;
    /* 005e7c48: call 0x5c3538 */ r_esp -= 4; W32(r_esp, 0x5e7c4du); f_005c3538();
    /* 005e7c4d: fcom dword ptr [0x92d634] */ fx_compare(ST(0), R_F32((u32)(0x92d634u))); 
    /* 005e7c53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e7c55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e7c56: je 0x5e7c5c */ if (fZ) goto L_005e7c5c;
L_005e7c58:; BB(0x005e7c58);
    /* 005e7c58: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
L_005e7c5c:; BB(0x005e7c5c);
    /* 005e7c5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e7c5e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005e7c62: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005e7c65: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005e7c69: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005e7c6d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005e7c6f: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 005e7c71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e7c73: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 005e7c76: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 005e7c79: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 005e7c7c: mov eax, esi */ r_eax = r_esi;
    /* 005e7c7e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7c81: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7c82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e7c83: ret 4 */ FN_RET(0x005e7b8c); r_esp += 8; return;
}

void f_005e7c88(void) /* sub_5E7C88 */
{
    FN_ENTER(0x005e7c88);
    /* 005e7c88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c89: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e7c8c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005e7c8e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e7c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e7c92: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5e7c98u); call_ind(t); }
    /* 005e7c98: fld dword ptr [0x92d62c] */ FPUSH(R_F32((u32)(0x92d62cu)));
    /* 005e7c9e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005e7ca1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e7ca3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005e7ca7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005e7cac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e7cb1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7cb5: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005e7cb9: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e7cbd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e7cc1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005e7cc5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e7cc7: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005e7ccb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005e7ccf: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005e7cd4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e7cd9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7cdd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005e7ce1: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e7ce5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e7ce9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005e7ced: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005e7cef: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005e7cf3: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005e7cf7: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005e7cfc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e7d01: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7d05: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005e7d09: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e7d0d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e7d11: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005e7d15: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005e7d17: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 005e7d1a: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 005e7d1d: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005e7d21: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005e7d25: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005e7d2a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e7d2f: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005e7d33: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005e7d37: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 005e7d3b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005e7d3f: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7d41: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005e7d44: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7d46: or ebx, dword ptr [esp + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7d4a: mov eax, ebx */ r_eax = r_ebx;
    /* 005e7d4c: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e7d4f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7d50: ret  */ FN_RET(0x005e7c88); r_esp += 4; return;
}

void f_005e7d54(void) /* sub_5E7D54 */
{
    FN_ENTER(0x005e7d54);
    /* 005e7d54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7d55: mov esi, dword ptr [ecx + 0x200] */ r_esi = R32((u32)(r_ecx+0x200u));
    /* 005e7d5b: movzx edx, byte ptr [ecx + 0x1f5] */ r_edx = (u32)R8((u32)(r_ecx+0x1f5u));
    /* 005e7d62: movzx eax, byte ptr [esi + 0x1a] */ r_eax = (u32)R8((u32)(r_esi+0x1au));
    /* 005e7d66: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7d68: jge 0x5e7d71 */ if ((fS==fO)) goto L_005e7d71;
L_005e7d6a:; BB(0x005e7d6a);
    /* 005e7d6a: mov byte ptr [ecx + 0x1f5], 0 */ W8((u32)(r_ecx+0x1f5u), 0x0u);
L_005e7d71:; BB(0x005e7d71);
    /* 005e7d71: movzx eax, byte ptr [esi + 0x2b] */ r_eax = (u32)R8((u32)(r_esi+0x2bu));
    /* 005e7d75: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7d77: je 0x5e7de8 */ if (fZ) goto L_005e7de8;
L_005e7d79:; BB(0x005e7d79);
    /* 005e7d79: movzx eax, byte ptr [ecx + 0x1c8] */ r_eax = (u32)R8((u32)(r_ecx+0x1c8u));
    /* 005e7d80: movsx edx, byte ptr [ecx + 0x1c9] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1c9u));
    /* 005e7d87: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7d8a: jg 0x5e7d9e */ if ((!fZ&&fS==fO)) goto L_005e7d9e;
L_005e7d8c:; BB(0x005e7d8c);
    /* 005e7d8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7d8e: je 0x5e7d9e */ if (fZ) goto L_005e7d9e;
L_005e7d90:; BB(0x005e7d90);
    /* 005e7d90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7d92: mov byte ptr [ecx + 0x1c8], al */ W8((u32)(r_ecx+0x1c8u), (u8)r_eax);
    /* 005e7d98: mov byte ptr [ecx + 0x1c9], al */ W8((u32)(r_ecx+0x1c9u), (u8)r_eax);
L_005e7d9e:; BB(0x005e7d9e);
    /* 005e7d9e: movzx eax, byte ptr [ecx + 0x1ca] */ r_eax = (u32)R8((u32)(r_ecx+0x1cau));
    /* 005e7da5: movsx edx, byte ptr [ecx + 0x1cb] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1cbu));
    /* 005e7dac: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e7daf: jg 0x5e7dc3 */ if ((!fZ&&fS==fO)) goto L_005e7dc3;
L_005e7db1:; BB(0x005e7db1);
    /* 005e7db1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7db3: je 0x5e7dc3 */ if (fZ) goto L_005e7dc3;
L_005e7db5:; BB(0x005e7db5);
    /* 005e7db5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7db7: mov byte ptr [ecx + 0x1ca], al */ W8((u32)(r_ecx+0x1cau), (u8)r_eax);
    /* 005e7dbd: mov byte ptr [ecx + 0x1cb], al */ W8((u32)(r_ecx+0x1cbu), (u8)r_eax);
L_005e7dc3:; BB(0x005e7dc3);
    /* 005e7dc3: movzx eax, byte ptr [ecx + 0x1cc] */ r_eax = (u32)R8((u32)(r_ecx+0x1ccu));
    /* 005e7dca: movsx edx, byte ptr [ecx + 0x1cd] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1cdu));
    /* 005e7dd1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e7dd4: jg 0x5e7de8 */ if ((!fZ&&fS==fO)) goto L_005e7de8;
L_005e7dd6:; BB(0x005e7dd6);
    /* 005e7dd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7dd8: je 0x5e7de8 */ if (fZ) goto L_005e7de8;
L_005e7dda:; BB(0x005e7dda);
    /* 005e7dda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7ddc: mov byte ptr [ecx + 0x1cc], al */ W8((u32)(r_ecx+0x1ccu), (u8)r_eax);
    /* 005e7de2: mov byte ptr [ecx + 0x1cd], al */ W8((u32)(r_ecx+0x1cdu), (u8)r_eax);
L_005e7de8:; BB(0x005e7de8);
    /* 005e7de8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e7de9: ret  */ FN_RET(0x005e7d54); r_esp += 4; return;
}

void f_005e7dec(void) /* sub_5E7DEC */
{
    FN_ENTER(0x005e7dec);
    /* 005e7dec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e7ded: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e7dee: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e7df0: mov eax, dword ptr [ebx + 0x1dc] */ r_eax = R32((u32)(r_ebx+0x1dcu));
    /* 005e7df6: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7dfb: je 0x5e7e00 */ if (fZ) goto L_005e7e00;
L_005e7dfd:; BB(0x005e7dfd);
    /* 005e7dfd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e7dfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7dff: ret  */ FN_RET(0x005e7dec); r_esp += 4; return;
L_005e7e00:; BB(0x005e7e00);
    /* 005e7e00: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e05: je 0x5e7e0e */ if (fZ) goto L_005e7e0e;
L_005e7e07:; BB(0x005e7e07);
    /* 005e7e07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7e09: call 0x5c34f8 */ r_esp -= 4; W32(r_esp, 0x5e7e0eu); f_005c34f8();
L_005e7e0e:; BB(0x005e7e0e);
    /* 005e7e0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7e10: call 0x5d19f8 */ r_esp -= 4; W32(r_esp, 0x5e7e15u); f_005d19f8();
    /* 005e7e15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7e17: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5e7e1cu); f_005e7f6c();
    /* 005e7e1c: cmp eax, dword ptr [ebx + 0x1f8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1f8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e22: jne 0x5e7e2c */ if (!fZ) goto L_005e7e2c;
L_005e7e24:; BB(0x005e7e24);
    /* 005e7e24: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005e7e2a: jmp 0x5e7e3e */ goto L_005e7e3e;
L_005e7e2c:; BB(0x005e7e2c);
    /* 005e7e2c: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005e7e32: and edx, 0xdfffffff */ {  u32 a = r_edx; u32 b = 0xdfffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e7e38: mov dword ptr [ebx + 0x1f8], eax */ W32((u32)(r_ebx+0x1f8u), r_eax);
L_005e7e3e:; BB(0x005e7e3e);
    /* 005e7e3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e7e40: jl 0x5e7f52 */ if ((fS!=fO)) goto L_005e7f52;
L_005e7e46:; BB(0x005e7e46);
    /* 005e7e46: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e7e49: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
L_005e7e4f:; BB(0x005e7e4f);
    /* 005e7e4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e7e51: jl 0x5e7f2e */ if ((fS!=fO)) goto L_005e7f2e;
L_005e7e57:; BB(0x005e7e57);
    /* 005e7e57: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e7e59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7e5b: call dword ptr [eax + 0xd0] */ { u32 t = R32((u32)(r_eax+0xd0u)); r_esp -= 4; W32(r_esp, 0x5e7e61u); call_ind(t); }
L_005e7e61:; BB(0x005e7e61);
    /* 005e7e61: mov eax, dword ptr [ebx + 0x194] */ r_eax = R32((u32)(r_ebx+0x194u));
    /* 005e7e67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7e69: je 0x5e7ea0 */ if (fZ) goto L_005e7ea0;
L_005e7e6b:; BB(0x005e7e6b);
    /* 005e7e6b: fld dword ptr [ebx + 0x1fc] */ FPUSH(R_F32((u32)(r_ebx+0x1fcu)));
    /* 005e7e71: fadd dword ptr [ebx + 0x22c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x22cu));
    /* 005e7e77: fst dword ptr [ebx + 0x1fc] */ W_F32((u32)(r_ebx+0x1fcu), ST(0));
    /* 005e7e7d: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005e7e80: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e7e83: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005e7e86: fadd dword ptr [edx*4 + 0x92d5e8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92d5e8u));
    /* 005e7e8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005e7e8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e7e91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e7e92: ja 0x5e7f60 */ if ((!fC&&!fZ)) goto L_005e7f60;
L_005e7e98:; BB(0x005e7e98);
    /* 005e7e98: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005e7e9a: fstp dword ptr [ebx + 0x1fc] */ W_F32((u32)(r_ebx+0x1fcu), ST(0)); FPOP();
L_005e7ea0:; BB(0x005e7ea0);
    /* 005e7ea0: push dword ptr [ebx + 0x204] */ { u32 v = R32((u32)(r_ebx+0x204u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e7ea6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7ea8: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e7eadu); f_005d189c();
    /* 005e7ead: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e7eaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7eb1: call dword ptr [eax + 0xdc] */ { u32 t = R32((u32)(r_eax+0xdcu)); r_esp -= 4; W32(r_esp, 0x5e7eb7u); call_ind(t); }
    /* 005e7eb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7eb9: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e7ebeu); f_005c42f4();
    /* 005e7ebe: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005e7ec4: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 005e7ecb: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7ece: je 0x5e7ed7 */ if (fZ) goto L_005e7ed7;
L_005e7ed0:; BB(0x005e7ed0);
    /* 005e7ed0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7ed2: call 0x5e7fa0 */ r_esp -= 4; W32(r_esp, 0x5e7ed7u); f_005e7fa0();
L_005e7ed7:; BB(0x005e7ed7);
    /* 005e7ed7: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 005e7edd: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e7edf: jne 0x5e7f07 */ if (!fZ) goto L_005e7f07;
L_005e7ee1:; BB(0x005e7ee1);
    /* 005e7ee1: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005e7ee4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7ee6: mov esi, ebx */ r_esi = r_ebx;
    /* 005e7ee8: mov ebx, eax */ r_ebx = r_eax;
L_005e7eea:; BB(0x005e7eea);
    /* 005e7eea: mov ecx, dword ptr [esi + ebx*4 + 0x1b0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x1b0u));
    /* 005e7ef1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7ef4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7ef6: je 0x5e7efd */ if (fZ) goto L_005e7efd;
L_005e7ef8:; BB(0x005e7ef8);
    /* 005e7ef8: call 0x5e9ff4 */ r_esp -= 4; W32(r_esp, 0x5e7efdu); f_005e9ff4();
L_005e7efd:; BB(0x005e7efd);
    /* 005e7efd: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e7f00: jl 0x5e7eea */ if ((fS!=fO)) goto L_005e7eea;
L_005e7f02:; BB(0x005e7f02);
    /* 005e7f02: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005e7f05: jmp 0x5e7f2b */ goto L_005e7f2b;
L_005e7f07:; BB(0x005e7f07);
    /* 005e7f07: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005e7f0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e7f0c: mov esi, ebx */ r_esi = r_ebx;
    /* 005e7f0e: mov ebx, eax */ r_ebx = r_eax;
L_005e7f10:; BB(0x005e7f10);
    /* 005e7f10: mov ecx, dword ptr [esi + ebx*4 + 0x1b0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x1b0u));
    /* 005e7f17: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e7f1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f1c: je 0x5e7f23 */ if (fZ) goto L_005e7f23;
L_005e7f1e:; BB(0x005e7f1e);
    /* 005e7f1e: call 0x5ea000 */ r_esp -= 4; W32(r_esp, 0x5e7f23u); f_005ea000();
L_005e7f23:; BB(0x005e7f23);
    /* 005e7f23: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e7f26: jl 0x5e7f10 */ if ((fS!=fO)) goto L_005e7f10;
L_005e7f28:; BB(0x005e7f28);
    /* 005e7f28: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005e7f2b:; BB(0x005e7f2b);
    /* 005e7f2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e7f2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e7f2d: ret  */ FN_RET(0x005e7dec); r_esp += 4; return;
L_005e7f2e:; BB(0x005e7f2e);
    /* 005e7f2e: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005e7f34: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 005e7f37: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e7f3d: jne 0x5e7e57 */ if (!fZ) goto L_005e7e57;
L_005e7f43:; BB(0x005e7f43);
    /* 005e7f43: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e7f45: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e7f47: call dword ptr [eax + 0xd4] */ { u32 t = R32((u32)(r_eax+0xd4u)); r_esp -= 4; W32(r_esp, 0x5e7f4du); call_ind(t); }
    /* 005e7f4d: jmp 0x5e7e61 */ goto L_005e7e61;
L_005e7f52:; BB(0x005e7f52);
    /* 005e7f52: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e7f55: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005e7f5b: jmp 0x5e7e4f */ goto L_005e7e4f;
L_005e7f60:; BB(0x005e7f60);
    /* 005e7f60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e7f62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e7f64: jmp 0x5e7ea0 */ goto L_005e7ea0;
}

void f_005e7f6c(void) /* sub_5E7F6C */
{
    FN_ENTER(0x005e7f6c);
    /* 005e7f6c: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005e7f72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7f74: je 0x5e7f9a */ if (fZ) goto L_005e7f9a;
L_005e7f76:; BB(0x005e7f76);
    /* 005e7f76: mov eax, dword ptr [eax + 0x328] */ r_eax = R32((u32)(r_eax+0x328u));
    /* 005e7f7c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e7f7e: je 0x5e7f83 */ if (fZ) goto L_005e7f83;
L_005e7f80:; BB(0x005e7f80);
    /* 005e7f80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7f82: ret  */ FN_RET(0x005e7f6c); r_esp += 4; return;
L_005e7f83:; BB(0x005e7f83);
    /* 005e7f83: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7f85: je 0x5e7f8d */ if (fZ) goto L_005e7f8d;
L_005e7f87:; BB(0x005e7f87);
    /* 005e7f87: mov eax, 1 */ r_eax = 0x1u;
    /* 005e7f8c: ret  */ FN_RET(0x005e7f6c); r_esp += 4; return;
L_005e7f8d:; BB(0x005e7f8d);
    /* 005e7f8d: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e7f92: je 0x5e7f9a */ if (fZ) goto L_005e7f9a;
L_005e7f94:; BB(0x005e7f94);
    /* 005e7f94: mov eax, 2 */ r_eax = 0x2u;
    /* 005e7f99: ret  */ FN_RET(0x005e7f6c); r_esp += 4; return;
L_005e7f9a:; BB(0x005e7f9a);
    /* 005e7f9a: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005e7f9f: ret  */ FN_RET(0x005e7f6c); r_esp += 4; return;
}

void f_005e7fa0(void) /* sub_5E7FA0 */
{
    FN_ENTER(0x005e7fa0);
    /* 005e7fa0: fld dword ptr [0x92d620] */ FPUSH(R_F32((u32)(0x92d620u)));
    /* 005e7fa6: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 005e7fac: test edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 005e7fb2: jne 0x5e7fc0 */ if (!fZ) goto L_005e7fc0;
L_005e7fb4:; BB(0x005e7fb4);
    /* 005e7fb4: fld dword ptr [ecx + 0x1ec] */ FPUSH(R_F32((u32)(r_ecx+0x1ecu)));
    /* 005e7fba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005e7fbc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 005e7fbe: jmp 0x5e7fca */ goto L_005e7fca;
L_005e7fc0:; BB(0x005e7fc0);
    /* 005e7fc0: fld dword ptr [ecx + 0x1ec] */ FPUSH(R_F32((u32)(r_ecx+0x1ecu)));
    /* 005e7fc6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005e7fc8: fld st(0) */ { long double v = ST(0); FPUSH(v); }
L_005e7fca:; BB(0x005e7fca);
    /* 005e7fca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005e7fcc: fcom dword ptr [0x92d628] */ fx_compare(ST(0), R_F32((u32)(0x92d628u))); 
    /* 005e7fd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e7fd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e7fd5: jb 0x5e7ff5 */ if (fC) goto L_005e7ff5;
L_005e7fd7:; BB(0x005e7fd7);
    /* 005e7fd7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005e7fd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e7fdb: fld dword ptr [0x92d628] */ FPUSH(R_F32((u32)(0x92d628u)));
    /* 005e7fe1: fld dword ptr [0x92d628] */ FPUSH(R_F32((u32)(0x92d628u)));
    /* 005e7fe7: or edx, 0x40000000 */ {  u32 a = r_edx; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 005e7fed: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005e7ff3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_005e7ff5:; BB(0x005e7ff5);
    /* 005e7ff5: fcomp dword ptr [0x92d624] */ fx_compare(ST(0), R_F32((u32)(0x92d624u))); FPOP();
    /* 005e7ffb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e7ffd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e7ffe: jbe 0x5e8007 */ if ((fC||fZ)) goto L_005e8007;
L_005e8000:; BB(0x005e8000);
    /* 005e8000: fstp dword ptr [ecx + 0x1ec] */ W_F32((u32)(r_ecx+0x1ecu), ST(0)); FPOP();
    /* 005e8006: ret  */ FN_RET(0x005e7fa0); r_esp += 4; return;
L_005e8007:; BB(0x005e8007);
    /* 005e8007: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e8009: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e800b: mov dword ptr [ecx + 0x1ec], eax */ W32((u32)(r_ecx+0x1ecu), r_eax);
    /* 005e8011: and edx, 0xbfffffff */ {  u32 a = r_edx; u32 b = 0xbfffffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e8017: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005e801d: ret  */ FN_RET(0x005e7fa0); r_esp += 4; return;
}

