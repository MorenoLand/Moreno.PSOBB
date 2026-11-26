#include "protos.h"

void f_004ad1b4(void) /* sub_4AD1B4 */
{
    FN_ENTER(0x004ad1b4);
    /* 004ad1b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad1b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad1b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad1b7: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad1ba: mov esi, ecx */ r_esi = r_ecx;
    /* 004ad1bc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad1be: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4ad1c3u); f_004b9970();
    /* 004ad1c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad1c4: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 004ad1c7: mov eax, dword ptr [0x906bb4] */ r_eax = R32((u32)(0x906bb4u));
    /* 004ad1cc: mov esi, dword ptr [esi + 0x28] */ r_esi = R32((u32)(r_esi+0x28u));
    /* 004ad1cf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004ad1d3: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ad1d7: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004ad1de: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 004ad1e6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004ad1ea: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 004ad1f2: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 004ad1fa: call 0x4b9450 */ r_esp -= 4; W32(r_esp, 0x4ad1ffu); f_004b9450();
    /* 004ad1ff: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 004ad202: lea edi, [esi + 0x18] */ r_edi = (u32)(r_esi+0x18u);
    /* 004ad205: mov ebx, eax */ r_ebx = r_eax;
L_004ad207:; BB(0x004ad207);
    /* 004ad207: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad209: je 0x4ad2bf */ if (fZ) goto L_004ad2bf;
L_004ad20f:; BB(0x004ad20f);
    /* 004ad20f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad214u); f_0082d7b0();
    /* 004ad214: mov ecx, esi */ r_ecx = r_esi;
    /* 004ad216: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ad21bu); f_0082d838();
    /* 004ad21b: mov ecx, edi */ r_ecx = r_edi;
    /* 004ad21d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ad21f: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x4ad224u); f_00830df8();
    /* 004ad224: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004ad228: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x4ad22du); f_00831290();
    /* 004ad22d: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 004ad230: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad232: jl 0x4ad242 */ if ((fS!=fO)) goto L_004ad242;
L_004ad234:; BB(0x004ad234);
    /* 004ad234: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad237: jg 0x4ad252 */ if ((!fZ&&fS==fO)) goto L_004ad252;
L_004ad239:; BB(0x004ad239);
    /* 004ad239: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad23c: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x4ad241u); f_0082e6b0();
    /* 004ad241: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ad242:; BB(0x004ad242);
    /* 004ad242: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad247u); f_0082da80();
    /* 004ad247: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 004ad24a: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ad24d: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad250: jmp 0x4ad207 */ goto L_004ad207;
L_004ad252:; BB(0x004ad252);
    /* 004ad252: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad255: jne 0x4ad242 */ if (!fZ) goto L_004ad242;
L_004ad257:; BB(0x004ad257);
    /* 004ad257: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004ad25d: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 004ad263: or edx, 0x8810 */ {  u32 a = r_edx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ad269: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004ad26f: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 004ad272: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004ad275: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ad278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad279: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4ad27eu); f_0082d710();
    /* 004ad27e: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad283: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad288: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4ad28du); f_0082d6fc();
    /* 004ad28d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ad290: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 004ad295: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x4ad29au); f_0082e1c4();
    /* 004ad29a: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad29d: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x4ad2a2u); f_0082e6b0();
    /* 004ad2a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2a4: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2a9: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4ad2aeu); f_0082d6fc();
    /* 004ad2ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ad2b1: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 004ad2b7: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004ad2bd: jmp 0x4ad242 */ goto L_004ad242;
L_004ad2bf:; BB(0x004ad2bf);
    /* 004ad2bf: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004ad2c5: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ad2cau); f_0061cdb0();
    /* 004ad2ca: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad2cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad2ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ad2cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ad2d0: ret  */ FN_RET(0x004ad1b4); r_esp += 4; return;
}

void f_004ad2d4(void) /* sub_4AD2D4 */
{
    FN_ENTER(0x004ad2d4);
    /* 004ad2d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004ad2d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2d9: push 0x8d0af4 */ { u32 v = 0x8d0af4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ad2e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad2e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ad2ec: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad2ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ad2f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ad2f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ad2f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ad2fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ad2fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad301: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 004ad304: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ad307: call 0x4acec4 */ r_esp -= 4; W32(r_esp, 0x4ad30cu); f_004acec4();
    /* 004ad30c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ad313: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad316: mov dword ptr [eax], 0xafa738 */ W32((u32)(r_eax), 0xafa738u);
    /* 004ad31c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad31e: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4ad323u); f_004b9970();
    /* 004ad323: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad324: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad328: call 0x4aceec */ r_esp -= 4; W32(r_esp, 0x4ad32du); f_004aceec();
    /* 004ad32d: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad330: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ad333: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 004ad336: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 004ad339: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad33eu); f_0082d7b0();
    /* 004ad33e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad340: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4ad345u); f_00830cd8();
    /* 004ad345: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad348: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ad34b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad34d: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4ad352u); f_00831308();
    /* 004ad352: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad355: mov dword ptr [edx + 0x30], 0 */ W32((u32)(r_edx+0x30u), 0x0u);
    /* 004ad35c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad35e: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 004ad365: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
    /* 004ad36c: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad36f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad370: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4ad375u); f_00830aa0();
    /* 004ad375: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad378: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 004ad37b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004ad37d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad37f: jle 0x4ad463 */ if ((fZ||fS!=fO)) goto L_004ad463;
L_004ad385:; BB(0x004ad385);
    /* 004ad385: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad386: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004ad389: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ad38b: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004ad38e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad390: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad392: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad394: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004ad397: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ad39a: lea edx, [eax + ebx + 4] */ r_edx = (u32)(r_eax+r_ebx+0x4u);
    /* 004ad39e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad3a0: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4ad3a5u); f_00830aa0();
    /* 004ad3a5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad3a8: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004ad3ab: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ad3ae: lea edx, [eax + ebx + 0x10] */ r_edx = (u32)(r_eax+r_ebx+0x10u);
    /* 004ad3b2: lea ebx, [edi + 0xc] */ r_ebx = (u32)(r_edi+0xcu);
    /* 004ad3b5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad3b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad3b8: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4ad3bdu); f_0082eab8();
    /* 004ad3bd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ad3c2u); f_008587a5();
    /* 004ad3c2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 004ad3c5: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 004ad3c8: fdiv dword ptr [0x904768] */ ST(0) = ST(0) / R_F32((u32)(0x904768u));
    /* 004ad3ce: fmul dword ptr [0x904764] */ ST(0) = ST(0) * R_F32((u32)(0x904764u));
    /* 004ad3d4: fadd dword ptr [0x90476c] */ ST(0) = ST(0) + R_F32((u32)(0x90476cu));
    /* 004ad3da: fstp dword ptr [edi + 0x10] */ W_F32((u32)(r_edi+0x10u), ST(0)); FPOP();
    /* 004ad3dd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ad3e2u); f_008587a5();
    /* 004ad3e2: mov dword ptr [edi + 0x18], 0 */ W32((u32)(r_edi+0x18u), 0x0u);
    /* 004ad3e9: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004ad3ec: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ad3ef: fdiv dword ptr [0x904768] */ ST(0) = ST(0) / R_F32((u32)(0x904768u));
    /* 004ad3f5: fmul dword ptr [0x904764] */ ST(0) = ST(0) * R_F32((u32)(0x904764u));
    /* 004ad3fb: fadd dword ptr [0x904760] */ ST(0) = ST(0) + R_F32((u32)(0x904760u));
    /* 004ad401: fsubr dword ptr [edi + 0x14] */ ST(0) = R_F32((u32)(r_edi+0x14u)) - ST(0);
    /* 004ad404: fstp dword ptr [edi + 0x14] */ W_F32((u32)(r_edi+0x14u), ST(0)); FPOP();
    /* 004ad407: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4ad40cu); f_008587a5();
    /* 004ad40c: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad40f: mov dword ptr [edi + 0x24], 0x3f800000 */ W32((u32)(r_edi+0x24u), 0x3f800000u);
    /* 004ad416: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad419: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 004ad41c: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 004ad41f: fdiv dword ptr [0x904768] */ ST(0) = ST(0) / R_F32((u32)(0x904768u));
    /* 004ad425: fadd dword ptr [0x90475c] */ ST(0) = ST(0) + R_F32((u32)(0x90475cu));
    /* 004ad42b: fmul dword ptr [0x90476c] */ ST(0) = ST(0) * R_F32((u32)(0x90476cu));
    /* 004ad431: fmul dword ptr [0x904784] */ ST(0) = ST(0) * R_F32((u32)(0x904784u));
    /* 004ad437: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 004ad43a: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 004ad43e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ad443: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ad446: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 004ad449: fistp dword ptr [edi + 0x1c] */ W32((u32)(r_edi+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004ad44c: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 004ad44f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ad451: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 004ad454: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004ad457: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004ad45a: cmp esi, dword ptr [edx + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad45d: jl 0x4ad385 */ if ((fS!=fO)) goto L_004ad385;
L_004ad463:; BB(0x004ad463);
    /* 004ad463: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad468u); f_0082da80();
    /* 004ad468: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 004ad46b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ad46e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ad471: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ad474: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ad477: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ad47e: mov esp, ebp */ r_esp = r_ebp;
    /* 004ad480: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ad481: ret 8 */ FN_RET(0x004ad2d4); r_esp += 12; return;
}

void f_004ad484(void) /* sub_4AD484 */
{
    FN_ENTER(0x004ad484);
    /* 004ad484: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad487: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004ad48a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ad48d: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 004ad490: cmp eax, 0xa0 */ {  u32 a = r_eax; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad495: jge 0x4ad67d */ if ((fS==fO)) goto L_004ad67d;
L_004ad49b:; BB(0x004ad49b);
    /* 004ad49b: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 004ad49e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ad4a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad4a2: jle 0x4ad679 */ if ((fZ||fS!=fO)) goto L_004ad679;
L_004ad4a8:; BB(0x004ad4a8);
    /* 004ad4a8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004ad4ac: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 004ad4b0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ad4b4: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004ad4b8: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 004ad4bb: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004ad4be: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4c0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4c2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4c6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ad4cc: mov ebp, eax */ r_ebp = r_eax;
    /* 004ad4ce: mov ebx, edx */ r_ebx = r_edx;
L_004ad4d0:; BB(0x004ad4d0);
    /* 004ad4d0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004ad4d4: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 004ad4d7: lea ecx, [ebx + esi] */ r_ecx = (u32)(r_ebx+r_esi);
    /* 004ad4da: mov edi, dword ptr [ecx + 0x1c] */ r_edi = R32((u32)(r_ecx+0x1cu));
    /* 004ad4dd: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 004ad4e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad4e2: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 004ad4e6: mov edi, 0 */ r_edi = 0x0u;
    /* 004ad4eb: je 0x4ad578 */ if (fZ) goto L_004ad578;
L_004ad4f1:; BB(0x004ad4f1);
    /* 004ad4f1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad4f4: jne 0x4ad54a */ if (!fZ) goto L_004ad54a;
L_004ad4f6:; BB(0x004ad4f6);
    /* 004ad4f6: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad4fa: fsub dword ptr [0x9047a0] */ ST(0) = ST(0) - R_F32((u32)(0x9047a0u));
    /* 004ad500: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad504: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 004ad507: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4ad50cu); f_0082ebac();
    /* 004ad50c: fld dword ptr [0x904754] */ FPUSH(R_F32((u32)(0x904754u)));
    /* 004ad512: fadd dword ptr [esi + ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x24u));
    /* 004ad516: fcom dword ptr [0x904750] */ fx_compare(ST(0), R_F32((u32)(0x904750u))); 
    /* 004ad51c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad51e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad51f: jae 0x4ad533 */ if (!fC) goto L_004ad533;
L_004ad521:; BB(0x004ad521);
    /* 004ad521: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad523: mov dword ptr [esi + ebx + 0x28], 3 */ W32((u32)(r_esi+r_ebx+0x28u), 0x3u);
    /* 004ad52b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad52d: mov dword ptr [esi + ebx + 0x24], ecx */ W32((u32)(r_esi+r_ebx+0x24u), r_ecx);
    /* 004ad531: jmp 0x4ad537 */ goto L_004ad537;
L_004ad533:; BB(0x004ad533);
    /* 004ad533: fstp dword ptr [esi + ebx + 0x24] */ W_F32((u32)(r_esi+r_ebx+0x24u), ST(0)); FPOP();
L_004ad537:; BB(0x004ad537);
    /* 004ad537: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004ad53b: add dword ptr [esi + ebx + 0x18], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad53f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad541: add dword ptr [esi + ebx + 0x20], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad545: jmp 0x4ad633 */ goto L_004ad633;
L_004ad54a:; BB(0x004ad54a);
    /* 004ad54a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad54d: jne 0x4ad633 */ if (!fZ) goto L_004ad633;
L_004ad553:; BB(0x004ad553);
    /* 004ad553: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad557: fmul dword ptr [0x904758] */ ST(0) = ST(0) * R_F32((u32)(0x904758u));
    /* 004ad55d: fadd dword ptr [esi + ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x4u));
    /* 004ad561: fld dword ptr [esi + ebx + 8] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x8u)));
    /* 004ad565: fadd dword ptr [esi + ebx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebx+0x14u));
    /* 004ad569: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ad56b: fstp dword ptr [esi + ebx + 4] */ W_F32((u32)(r_esi+r_ebx+0x4u), ST(0)); FPOP();
    /* 004ad56f: fstp dword ptr [esi + ebx + 8] */ W_F32((u32)(r_esi+r_ebx+0x8u), ST(0)); FPOP();
    /* 004ad573: jmp 0x4ad633 */ goto L_004ad633;
L_004ad578:; BB(0x004ad578);
    /* 004ad578: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad57c: fsub dword ptr [0x9047a0] */ ST(0) = ST(0) - R_F32((u32)(0x9047a0u));
    /* 004ad582: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad586: lea edx, [ecx + 0xc] */ r_edx = (u32)(r_ecx+0xcu);
    /* 004ad589: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4ad58eu); f_0082ebac();
    /* 004ad58e: fld dword ptr [esi + ebx + 0x10] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x10u)));
    /* 004ad592: fcom dword ptr [0x904750] */ fx_compare(ST(0), R_F32((u32)(0x904750u))); 
    /* 004ad598: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad59a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad59b: jae 0x4ad623 */ if (!fC) goto L_004ad623;
L_004ad5a1:; BB(0x004ad5a1);
    /* 004ad5a1: fld dword ptr [esi + ebx + 4] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x4u)));
    /* 004ad5a5: fcom dword ptr [0x906bb8] */ fx_compare(ST(0), R_F32((u32)(0x906bb8u))); 
    /* 004ad5ab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad5ad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad5ae: jae 0x4ad68e */ if (!fC) goto L_004ad68e;
L_004ad5b4:; BB(0x004ad5b4);
    /* 004ad5b4: fld dword ptr [esi + ebx] */ FPUSH(R_F32((u32)(r_esi+r_ebx)));
    /* 004ad5b7: fcom dword ptr [0x906bbc] */ fx_compare(ST(0), R_F32((u32)(0x906bbcu))); 
    /* 004ad5bd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad5bf: fld dword ptr [esi + ebx + 8] */ FPUSH(R_F32((u32)(r_esi+r_ebx+0x8u)));
    /* 004ad5c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad5c4: ja 0x4ad603 */ if ((!fC&&!fZ)) goto L_004ad603;
L_004ad5c6:; BB(0x004ad5c6);
    /* 004ad5c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ad5c8: fcomp dword ptr [0x906bc0] */ fx_compare(ST(0), R_F32((u32)(0x906bc0u))); FPOP();
    /* 004ad5ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad5d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad5d1: jb 0x4ad605 */ if (fC) goto L_004ad605;
L_004ad5d3:; BB(0x004ad5d3);
    /* 004ad5d3: fcom dword ptr [0x906bc4] */ fx_compare(ST(0), R_F32((u32)(0x906bc4u))); 
    /* 004ad5d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad5db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad5dc: ja 0x4ad605 */ if ((!fC&&!fZ)) goto L_004ad605;
L_004ad5de:; BB(0x004ad5de);
    /* 004ad5de: fcom dword ptr [0x906bc8] */ fx_compare(ST(0), R_F32((u32)(0x906bc8u))); 
    /* 004ad5e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad5e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad5e7: jb 0x4ad605 */ if (fC) goto L_004ad605;
L_004ad5e9:; BB(0x004ad5e9);
    /* 004ad5e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad5eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad5ed: fld dword ptr [0x90474c] */ FPUSH(R_F32((u32)(0x90474cu)));
    /* 004ad5f3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004ad5f5: fstp dword ptr [esi + ebx + 0x10] */ W_F32((u32)(r_esi+r_ebx+0x10u), ST(0)); FPOP();
    /* 004ad5f9: mov dword ptr [esi + ebx + 0x28], 2 */ W32((u32)(r_esi+r_ebx+0x28u), 0x2u);
    /* 004ad601: jmp 0x4ad625 */ goto L_004ad625;
L_004ad603:; BB(0x004ad603);
    /* 004ad603: fstp st(1) */ ST(1) = ST(0); FPOP();
L_004ad605:; BB(0x004ad605);
    /* 004ad605: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004ad607: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004ad609: fcomp dword ptr [0x906bb0] */ fx_compare(ST(0), R_F32((u32)(0x906bb0u))); FPOP();
    /* 004ad60f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ad611: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ad612: jae 0x4ad625 */ if (!fC) goto L_004ad625;
L_004ad614:; BB(0x004ad614);
    /* 004ad614: mov dword ptr [esi + ebx + 0x28], 1 */ W32((u32)(r_esi+r_ebx+0x28u), 0x1u);
    /* 004ad61c: mov edi, 1 */ r_edi = 0x1u;
    /* 004ad621: jmp 0x4ad625 */ goto L_004ad625;
L_004ad623:; BB(0x004ad623);
    /* 004ad623: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004ad625:; BB(0x004ad625);
    /* 004ad625: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 004ad629: add dword ptr [esi + ebx + 0x18], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x18u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ad62d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad62f: add dword ptr [esi + ebx + 0x20], ecx */ { u32 ad = (u32)(r_esi+r_ebx+0x20u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004ad633:; BB(0x004ad633);
    /* 004ad633: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad635: je 0x4ad657 */ if (fZ) goto L_004ad657;
L_004ad637:; BB(0x004ad637);
    /* 004ad637: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ad639: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad63c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad63e: jne 0x4ad657 */ if (!fZ) goto L_004ad657;
L_004ad640:; BB(0x004ad640);
    /* 004ad640: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004ad644: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad649: mov esi, ebx */ r_esi = r_ebx;
    /* 004ad64b: add esi, dword ptr [ecx + 0x28] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0x28u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad64e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad64f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4ad654u); f_0050b510();
    /* 004ad654: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004ad657:; BB(0x004ad657);
    /* 004ad657: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004ad65b: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad65e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ad661: cmp ebp, dword ptr [ecx + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ecx+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad664: jl 0x4ad4d0 */ if ((fS!=fO)) goto L_004ad4d0;
L_004ad66a:; BB(0x004ad66a);
    /* 004ad66a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 004ad66e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 004ad672: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004ad676: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_004ad679:; BB(0x004ad679);
    /* 004ad679: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad67c: ret  */ FN_RET(0x004ad484); r_esp += 4; return;
L_004ad67d:; BB(0x004ad67d);
    /* 004ad67d: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ad681: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ad686: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 004ad68a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad68d: ret  */ FN_RET(0x004ad484); r_esp += 4; return;
L_004ad68e:; BB(0x004ad68e);
    /* 004ad68e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad690: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ad692: jmp 0x4ad625 */ goto L_004ad625;
}

void f_004ad694(void) /* sub_4AD694 */
{
    FN_ENTER(0x004ad694);
    /* 004ad694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad696: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ad697: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad698: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad69b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ad69d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad69f: call 0x4b9970 */ r_esp -= 4; W32(r_esp, 0x4ad6a4u); f_004b9970();
    /* 004ad6a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad6a5: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 004ad6a8: mov ebp, dword ptr [ebx + 0x28] */ r_ebp = R32((u32)(r_ebx+0x28u));
    /* 004ad6ab: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004ad6b2: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 004ad6ba: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 004ad6c2: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 004ad6ca: call 0x4b9450 */ r_esp -= 4; W32(r_esp, 0x4ad6cfu); f_004b9450();
    /* 004ad6cf: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad6d4u); f_0082d7b0();
    /* 004ad6d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ad6d6: mov esi, ebx */ r_esi = r_ebx;
    /* 004ad6d8: mov ebx, eax */ r_ebx = r_eax;
L_004ad6da:; BB(0x004ad6da);
    /* 004ad6da: cmp ebx, dword ptr [esi + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad6dd: jge 0x4ad7c8 */ if ((fS==fO)) goto L_004ad7c8;
L_004ad6e3:; BB(0x004ad6e3);
    /* 004ad6e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad6e8u); f_0082d7b0();
    /* 004ad6e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ad6ea: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x4ad6efu); f_0082d838();
    /* 004ad6ef: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004ad6f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad6f4: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4ad6f9u); f_00830c04();
    /* 004ad6f9: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 004ad6fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad6fe: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x4ad703u); f_0082e9e4();
    /* 004ad703: fld dword ptr [esi + 0x30] */ FPUSH(R_F32((u32)(r_esi+0x30u)));
    /* 004ad706: fld dword ptr [esi + 0x34] */ FPUSH(R_F32((u32)(r_esi+0x34u)));
    /* 004ad709: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004ad70c: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ad70f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ad711: fchs  */ ST(0) = -ST(0);
    /* 004ad713: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ad716: fchs  */ ST(0) = -ST(0);
    /* 004ad718: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004ad71c: fchs  */ ST(0) = -ST(0);
    /* 004ad71e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004ad722: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad724: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x4ad729u); f_00830b74();
    /* 004ad729: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 004ad72c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad72e: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x4ad733u); f_00831308();
    /* 004ad733: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 004ad736: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad738: jl 0x4ad7b5 */ if ((fS!=fO)) goto L_004ad7b5;
L_004ad73a:; BB(0x004ad73a);
    /* 004ad73a: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad73d: jle 0x4ad7ac */ if ((fZ||fS!=fO)) goto L_004ad7ac;
L_004ad73f:; BB(0x004ad73f);
    /* 004ad73f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ad742: jne 0x4ad7b5 */ if (!fZ) goto L_004ad7b5;
L_004ad744:; BB(0x004ad744);
    /* 004ad744: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 004ad74a: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 004ad750: or edx, 0x8810 */ {  u32 a = r_edx; u32 b = 0x8810u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ad756: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004ad75c: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004ad75f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004ad762: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004ad765: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad766: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4ad76bu); f_0082d710();
    /* 004ad76b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad770: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad775: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4ad77au); f_0082d6fc();
    /* 004ad77a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ad77d: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 004ad782: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x4ad787u); f_0082e1c4();
    /* 004ad787: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad78a: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x4ad78fu); f_0082e6b0();
    /* 004ad78f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad791: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad796: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4ad79bu); f_0082d6fc();
    /* 004ad79b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ad79e: mov edx, dword ptr [0xaab518] */ r_edx = R32((u32)(0xaab518u));
    /* 004ad7a4: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 004ad7aa: jmp 0x4ad7b5 */ goto L_004ad7b5;
L_004ad7ac:; BB(0x004ad7ac);
    /* 004ad7ac: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad7af: call 0x82e6b0 */ r_esp -= 4; W32(r_esp, 0x4ad7b4u); f_0082e6b0();
    /* 004ad7b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ad7b5:; BB(0x004ad7b5);
    /* 004ad7b5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad7bau); f_0082da80();
    /* 004ad7ba: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 004ad7bd: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ad7c0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad7c3: jmp 0x4ad6da */ goto L_004ad6da;
L_004ad7c8:; BB(0x004ad7c8);
    /* 004ad7c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad7cdu); f_0082da80();
    /* 004ad7cd: mov ecx, dword ptr [0xa9d4d0] */ r_ecx = R32((u32)(0xa9d4d0u));
    /* 004ad7d3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ad7d8u); f_0061cdb0();
    /* 004ad7d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ad7db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad7dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ad7dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ad7de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ad7df: ret  */ FN_RET(0x004ad694); r_esp += 4; return;
}

void f_004ad7e0(void) /* sub_4AD7E0 */
{
    FN_ENTER(0x004ad7e0);
    /* 004ad7e0: mov eax, dword ptr [0x906bb0] */ r_eax = R32((u32)(0x906bb0u));
    /* 004ad7e5: mov dword ptr [0xa4774c], eax */ W32((u32)(0xa4774cu), r_eax);
    /* 004ad7ea: ret  */ FN_RET(0x004ad7e0); r_esp += 4; return;
}

void f_004ad7ec(void) /* sub_4AD7EC */
{
    FN_ENTER(0x004ad7ec);
    /* 004ad7ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad7ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad7ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad7ef: mov esi, ecx */ r_esi = r_ecx;
    /* 004ad7f1: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad7f6u); f_0082d7b0();
    /* 004ad7f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad7f8: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4ad7fdu); f_00830cd8();
    /* 004ad7fd: push 0x3f8ccccd */ { u32 v = 0x3f8ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad802: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad804: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad806: push 0x3f8ccccd */ { u32 v = 0x3f8ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad80b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4ad810u); f_0082fa0c();
    /* 004ad810: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ad813: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 004ad816: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ad818: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad81a: jle 0x4ad851 */ if ((fZ||fS!=fO)) goto L_004ad851;
L_004ad81c:; BB(0x004ad81c);
    /* 004ad81c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004ad81f: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004ad822: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad824: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004ad827: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad829: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad82b: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad82d: mov edi, esi */ r_edi = r_esi;
    /* 004ad82f: mov esi, edx */ r_esi = r_edx;
L_004ad831:; BB(0x004ad831);
    /* 004ad831: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ad834: lea edx, [eax + ebx + 0x10] */ r_edx = (u32)(r_eax+r_ebx+0x10u);
    /* 004ad838: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad839: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad83b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4ad840u); f_0082eab8();
    /* 004ad840: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004ad843: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad846: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad849: cmp esi, dword ptr [eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad84c: jl 0x4ad831 */ if ((fS!=fO)) goto L_004ad831;
L_004ad84e:; BB(0x004ad84e);
    /* 004ad84e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004ad851:; BB(0x004ad851);
    /* 004ad851: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad856u); f_0082da80();
    /* 004ad856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad857: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad858: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ad859: ret  */ FN_RET(0x004ad7ec); r_esp += 4; return;
}

void f_004ad85c(void) /* sub_4AD85C */
{
    FN_ENTER(0x004ad85c);
    /* 004ad85c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad85d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad85e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ad85f: mov esi, ecx */ r_esi = r_ecx;
    /* 004ad861: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4ad866u); f_0082d7b0();
    /* 004ad866: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad868: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x4ad86du); f_00830cd8();
    /* 004ad86d: mov eax, dword ptr [0x906bb4] */ r_eax = R32((u32)(0x906bb4u));
    /* 004ad872: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad873: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad874: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad876: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad877: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x4ad87cu); f_0082fa0c();
    /* 004ad87c: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004ad87f: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 004ad882: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004ad884: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ad886: jle 0x4ad8bd */ if ((fZ||fS!=fO)) goto L_004ad8bd;
L_004ad888:; BB(0x004ad888);
    /* 004ad888: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004ad88b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004ad88e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad890: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 004ad893: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad895: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad897: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad899: mov edi, esi */ r_edi = r_esi;
    /* 004ad89b: mov esi, edx */ r_esi = r_edx;
L_004ad89d:; BB(0x004ad89d);
    /* 004ad89d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ad8a0: lea edx, [eax + ebx + 4] */ r_edx = (u32)(r_eax+r_ebx+0x4u);
    /* 004ad8a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ad8a7: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4ad8acu); f_0082eab8();
    /* 004ad8ac: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004ad8af: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004ad8b2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ad8b5: cmp esi, dword ptr [eax + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ad8b8: jl 0x4ad89d */ if ((fS!=fO)) goto L_004ad89d;
L_004ad8ba:; BB(0x004ad8ba);
    /* 004ad8ba: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_004ad8bd:; BB(0x004ad8bd);
    /* 004ad8bd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4ad8c2u); f_0082da80();
    /* 004ad8c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad8c3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad8c4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ad8c5: ret  */ FN_RET(0x004ad85c); r_esp += 4; return;
}

void f_004ad8c8(void) /* sub_4AD8C8 */
{
    FN_ENTER(0x004ad8c8);
    /* 004ad8c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ad8cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ad8cd: call 0x4ad8ec */ r_esp -= 4; W32(r_esp, 0x4ad8d2u); f_004ad8ec();
    /* 004ad8d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ad8d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ad8d8: jne 0x4ad8de */ if (!fZ) goto L_004ad8de;
L_004ad8da:; BB(0x004ad8da);
    /* 004ad8da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad8db: ret 4 */ FN_RET(0x004ad8c8); r_esp += 8; return;
L_004ad8de:; BB(0x004ad8de);
    /* 004ad8de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ad8e4u); f_005c2f74();
    /* 004ad8e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad8e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ad8e6: ret 4 */ FN_RET(0x004ad8c8); r_esp += 8; return;
}

void f_004ad8ec(void) /* sub_4AD8EC */
{
    FN_ENTER(0x004ad8ec);
    /* 004ad8ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8ed: mov ebp, esp */ r_ebp = r_esp;
    /* 004ad8ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8f1: push 0x8d0b10 */ { u32 v = 0x8d0b10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ad8fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad8fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ad904: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad907: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ad90a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ad90d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ad910: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ad913: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ad916: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ad91d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ad920: mov dword ptr [eax], 0xafa7c0 */ W32((u32)(r_eax), 0xafa7c0u);
    /* 004ad926: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad927: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x4ad92cu); f_007b4e84();
    /* 004ad92c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ad92d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ad930: call 0x7b9de0 */ r_esp -= 4; W32(r_esp, 0x4ad935u); f_007b9de0();
    /* 004ad935: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ad938: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4ad93du); f_004ae724();
    /* 004ad93d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ad944: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ad947: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x4ad94cu); f_0078638c();
    /* 004ad94c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ad94f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ad956: mov esp, ebp */ r_esp = r_ebp;
    /* 004ad958: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ad959: ret  */ FN_RET(0x004ad8ec); r_esp += 4; return;
}

void f_004ad95c(void) /* sub_4AD95C */
{
    FN_ENTER(0x004ad95c);
    /* 004ad95c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ad95d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ad95f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad961: push 0x8d0b2c */ { u32 v = 0x8d0b2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ad966: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ad96c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad96d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ad974: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ad977: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ad97a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ad97d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ad980: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ad983: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ad986: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ad989: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ad98c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ad98f: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x4ad994u); f_007865e8();
    /* 004ad994: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ad99b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ad99e: mov ecx, dword ptr [0xa47758] */ r_ecx = R32((u32)(0xa47758u));
    /* 004ad9a4: mov dword ptr [edx], 0xafa7c0 */ W32((u32)(r_edx), 0xafa7c0u);
    /* 004ad9aa: mov eax, dword ptr [0x9ab9b8] */ r_eax = R32((u32)(0x9ab9b8u));
    /* 004ad9af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004ad9b1: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004ad9b4: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4ad9b9u); f_005b8624();
    /* 004ad9b9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ad9bc: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 004ad9c6: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 004ad9c9: lea eax, [ecx + 0x37c] */ r_eax = (u32)(r_ecx+0x37cu);
    /* 004ad9cf: mov dword ptr [ecx + 0x380], 0 */ W32((u32)(r_ecx+0x380u), 0x0u);
    /* 004ad9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ad9da: mov dword ptr [ecx + 0x384], 0 */ W32((u32)(r_ecx+0x384u), 0x0u);
    /* 004ad9e4: mov dword ptr [ecx + 0x388], 0x41200000 */ W32((u32)(r_ecx+0x388u), 0x41200000u);
    /* 004ad9ee: mov dword ptr [ecx + 0x38c], 0 */ W32((u32)(r_ecx+0x38cu), 0x0u);
    /* 004ad9f8: mov dword ptr [ecx + 0x390], 0 */ W32((u32)(r_ecx+0x390u), 0x0u);
    /* 004ada02: mov dword ptr [ecx + 0x394], 0x8003 */ W32((u32)(r_ecx+0x394u), 0x8003u);
    /* 004ada0c: mov dword ptr [ecx + 0x398], 0 */ W32((u32)(r_ecx+0x398u), 0x0u);
    /* 004ada16: mov dword ptr [ecx + 0x39c], 0 */ W32((u32)(r_ecx+0x39cu), 0x0u);
    /* 004ada20: mov dword ptr [ecx + 0x3a0], 0 */ W32((u32)(r_ecx+0x3a0u), 0x0u);
    /* 004ada2a: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
    /* 004ada34: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x4ada39u); f_007b9ccc();
    /* 004ada39: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ada3c: mov eax, dword ptr [0xa47758] */ r_eax = R32((u32)(0xa47758u));
    /* 004ada41: mov dword ptr [ecx + 0xd8], 0x9ab920 */ W32((u32)(r_ecx+0xd8u), 0x9ab920u);
    /* 004ada4b: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 004ada51: mov dword ptr [ecx + 0xdc], edx */ W32((u32)(r_ecx+0xdcu), r_edx);
    /* 004ada57: mov ebx, 2 */ r_ebx = 0x2u;
    /* 004ada5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ada5d: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 004ada64: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x4ada69u); f_007aa4c8();
    /* 004ada69: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ada6c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ada6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ada70: movzx eax, word ptr [ecx + 0xb8] */ r_eax = (u32)R16((u32)(r_ecx+0xb8u));
    /* 004ada77: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 004ada7d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004ada7f: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004ada86: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ada89: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 004ada8f: call dword ptr [esi + 0x14c] */ { u32 t = R32((u32)(r_esi+0x14cu)); r_esp -= 4; W32(r_esp, 0x4ada95u); call_ind(t); }
    /* 004ada95: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ada98: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 004ada9e: fcomp dword ptr [0x904860] */ fx_compare(ST(0), R_F32((u32)(0x904860u))); FPOP();
    /* 004adaa4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004adaa6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004adaa7: jne 0x4adafd */ if (!fZ) goto L_004adafd;
L_004adaa9:; BB(0x004adaa9);
    /* 004adaa9: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 004adaab: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x4adab0u); f_00787550();
    /* 004adab0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004adab2: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4adab7u); f_0077a684();
    /* 004adab7: mov esi, eax */ r_esi = r_eax;
    /* 004adab9: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004adabb: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4adac0u); f_0077a698();
    /* 004adac0: mov ebx, eax */ r_ebx = r_eax;
    /* 004adac2: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004adac4: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4adac9u); f_0077a6b4();
    /* 004adac9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adacc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adacf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adad0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004adad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004adad2: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x4adad7u); f_007868f8();
    /* 004adad7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004adad9: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4adadeu); f_0077a6cc();
    /* 004adade: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004adadf: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adae2: mov ecx, dword ptr [0xa47758] */ r_ecx = R32((u32)(0xa47758u));
    /* 004adae8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004adaea: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
    /* 004adaf0: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4adaf5u); f_005b8610();
    /* 004adaf5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adaf8: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004adafb: jmp 0x4adb4f */ goto L_004adb4f;
L_004adafd:; BB(0x004adafd);
    /* 004adafd: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 004adaff: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x4adb04u); f_00787550();
    /* 004adb04: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb06: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4adb0bu); f_0077a684();
    /* 004adb0b: mov esi, eax */ r_esi = r_eax;
    /* 004adb0d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb0f: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4adb14u); f_0077a698();
    /* 004adb14: mov ebx, eax */ r_ebx = r_eax;
    /* 004adb16: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb18: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4adb1du); f_0077a6b4();
    /* 004adb1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adb20: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adb24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004adb25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004adb26: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x4adb2bu); f_007868f8();
    /* 004adb2b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb2d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x4adb32u); f_0077a6cc();
    /* 004adb32: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004adb33: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb36: mov ecx, dword ptr [0xa47758] */ r_ecx = R32((u32)(0xa47758u));
    /* 004adb3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb3e: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
    /* 004adb44: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4adb49u); f_005b8610();
    /* 004adb49: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb4c: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
L_004adb4f:; BB(0x004adb4f);
    /* 004adb4f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004adb51: call 0x7ba834 */ r_esp -= 4; W32(r_esp, 0x4adb56u); f_007ba834();
    /* 004adb56: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb59: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x4adb5eu); f_007b4f54();
    /* 004adb5e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb61: call 0x4adce0 */ r_esp -= 4; W32(r_esp, 0x4adb66u); f_004adce0();
    /* 004adb66: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb69: mov ebx, dword ptr [edx + 0xa4] */ r_ebx = R32((u32)(r_edx+0xa4u));
    /* 004adb6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004adb71: mov word ptr [edx + 0x32e], ax */ W16((u32)(r_edx+0x32eu), (u16)r_eax);
    /* 004adb78: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 004adb7b: or ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004adb81: mov dword ptr [ebx + 0x18], ecx */ W32((u32)(r_ebx+0x18u), r_ecx);
    /* 004adb84: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adb87: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 004adb8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adb90: je 0x4adcc6 */ if (fZ) goto L_004adcc6;
L_004adb96:; BB(0x004adb96);
    /* 004adb96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adb99: je 0x4adbe0 */ if (fZ) goto L_004adbe0;
L_004adb9b:; BB(0x004adb9b);
    /* 004adb9b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adb9e: je 0x4adc60 */ if (fZ) goto L_004adc60;
L_004adba4:; BB(0x004adba4);
    /* 004adba4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adba7: je 0x4adbd4 */ if (fZ) goto L_004adbd4;
L_004adba9:; BB(0x004adba9);
    /* 004adba9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adbac: jne 0x4adbe0 */ if (!fZ) goto L_004adbe0;
L_004adbae:; BB(0x004adbae);
    /* 004adbae: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004adbb1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004adbb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adbb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adbb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004adbb6: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004adbbb: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4adbc0u); f_00814298();
    /* 004adbc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adbc3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adbc6: mov eax, 1 */ r_eax = 0x1u;
    /* 004adbcb: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004adbd2: jmp 0x4adbe0 */ goto L_004adbe0;
L_004adbd4:; BB(0x004adbd4);
    /* 004adbd4: mov eax, 4 */ r_eax = 0x4u;
    /* 004adbd9: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
L_004adbe0:; BB(0x004adbe0);
    /* 004adbe0: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004adbe7: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 004adbea: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004adbf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adbf2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 004adbf9: call 0x4add2c */ r_esp -= 4; W32(r_esp, 0x4adbfeu); f_004add2c();
    /* 004adbfe: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adc01: fld dword ptr [edx + 0x35c] */ FPUSH(R_F32((u32)(r_edx+0x35cu)));
    /* 004adc07: fcomp dword ptr [0x904860] */ fx_compare(ST(0), R_F32((u32)(0x904860u))); FPOP();
    /* 004adc0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004adc0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004adc10: jne 0x4adc29 */ if (!fZ) goto L_004adc29;
L_004adc12:; BB(0x004adc12);
    /* 004adc12: mov dword ptr [edx + 0x70], 0x3f4ccccd */ W32((u32)(r_edx+0x70u), 0x3f4ccccdu);
    /* 004adc19: mov dword ptr [edx + 0x6c], 0x3f4ccccd */ W32((u32)(r_edx+0x6cu), 0x3f4ccccdu);
    /* 004adc20: mov dword ptr [edx + 0x68], 0x3f4ccccd */ W32((u32)(r_edx+0x68u), 0x3f4ccccdu);
    /* 004adc27: jmp 0x4adc3e */ goto L_004adc3e;
L_004adc29:; BB(0x004adc29);
    /* 004adc29: mov dword ptr [edx + 0x70], 0x3f800000 */ W32((u32)(r_edx+0x70u), 0x3f800000u);
    /* 004adc30: mov dword ptr [edx + 0x6c], 0x3f800000 */ W32((u32)(r_edx+0x6cu), 0x3f800000u);
    /* 004adc37: mov dword ptr [edx + 0x68], 0x3f800000 */ W32((u32)(r_edx+0x68u), 0x3f800000u);
L_004adc3e:; BB(0x004adc3e);
    /* 004adc3e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004adc41: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004adc44: mov eax, edx */ r_eax = r_edx;
    /* 004adc46: mov dword ptr [edx + 0x3d4], 0 */ W32((u32)(r_edx+0x3d4u), 0x0u);
    /* 004adc50: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004adc53: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004adc5a: mov esp, ebp */ r_esp = r_ebp;
    /* 004adc5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004adc5d: ret 8 */ FN_RET(0x004ad95c); r_esp += 12; return;
L_004adc60:; BB(0x004adc60);
    /* 004adc60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004adc62: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004adc69: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 004adc6f: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 004adc75: mov dword ptr [ecx + 0x3b8], eax */ W32((u32)(r_ecx+0x3b8u), r_eax);
    /* 004adc7b: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 004adc81: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 004adc87: mov dword ptr [ecx + 0x3c4], eax */ W32((u32)(r_ecx+0x3c4u), r_eax);
    /* 004adc8d: mov dword ptr [ecx + 0x3c8], eax */ W32((u32)(r_ecx+0x3c8u), r_eax);
    /* 004adc93: mov dword ptr [ecx + 0x3cc], eax */ W32((u32)(r_ecx+0x3ccu), r_eax);
    /* 004adc99: mov dword ptr [ecx + 0x3ac], eax */ W32((u32)(r_ecx+0x3acu), r_eax);
    /* 004adc9f: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4adca4u); f_004ae724();
    /* 004adca4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adca7: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004adcac: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004adcaf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adcb0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4adcb5u); f_00509590();
    /* 004adcb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adcb8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004adcbb: mov dword ptr [ecx + 0x3d4], eax */ W32((u32)(r_ecx+0x3d4u), r_eax);
    /* 004adcc1: jmp 0x4adbe0 */ goto L_004adbe0;
L_004adcc6:; BB(0x004adcc6);
    /* 004adcc6: mov eax, dword ptr [ecx + 0x3a8] */ r_eax = R32((u32)(r_ecx+0x3a8u));
    /* 004adccc: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004adccf: add edx, -0xa */ {  u32 a = r_edx; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004adcd2: mov dword ptr [ecx + 0x3d0], edx */ W32((u32)(r_ecx+0x3d0u), r_edx);
    /* 004adcd8: jmp 0x4adbe0 */ goto L_004adbe0;
}

void f_004adce0(void) /* sub_4ADCE0 */
{
    FN_ENTER(0x004adce0);
    /* 004adce0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004adce1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004adce2: movsx edx, word ptr [ecx + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 004adce6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004adce8: jl 0x4add26 */ if ((fS!=fO)) goto L_004add26;
L_004adcea:; BB(0x004adcea);
    /* 004adcea: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004adcf0: jg 0x4add26 */ if ((!fZ&&fS==fO)) goto L_004add26;
L_004adcf2:; BB(0x004adcf2);
    /* 004adcf2: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 004adcf8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004adcfb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004adcfd: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004add00: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004add02: mov ebx, dword ptr [eax + edi + 8] */ r_ebx = R32((u32)(r_eax+r_edi+0x8u));
    /* 004add06: movzx ecx, word ptr [eax + edi + 4] */ r_ecx = (u32)R16((u32)(r_eax+r_edi+0x4u));
    /* 004add0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004add0d: jl 0x4add26 */ if ((fS!=fO)) goto L_004add26;
L_004add0f:; BB(0x004add0f);
    /* 004add0f: cmp edx, 0xb4f */ {  u32 a = r_edx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004add15: jg 0x4add26 */ if ((!fZ&&fS==fO)) goto L_004add26;
L_004add17:; BB(0x004add17);
    /* 004add17: mov dword ptr [eax + edi], 0 */ W32((u32)(r_eax+r_edi), 0x0u);
    /* 004add1e: mov dword ptr [eax + edi + 4], ecx */ W32((u32)(r_eax+r_edi+0x4u), r_ecx);
    /* 004add22: mov dword ptr [eax + edi + 8], ebx */ W32((u32)(r_eax+r_edi+0x8u), r_ebx);
L_004add26:; BB(0x004add26);
    /* 004add26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004add27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004add28: ret  */ FN_RET(0x004adce0); r_esp += 4; return;
}

void f_004add2c(void) /* sub_4ADD2C */
{
    FN_ENTER(0x004add2c);
    /* 004add2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004add2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004add2e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004add31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004add33: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004add37: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004add3a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004add3c: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 004add3f: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004add42: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 004add45: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004add48: fadd dword ptr [ebx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x40u));
    /* 004add4b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004add4d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004add4f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004add52: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004add56: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004add5a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004add5b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004add5d: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x4add60u); call_ind(t); }
    /* 004add60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004add62: je 0x4add8a */ if (fZ) goto L_004add8a;
L_004add64:; BB(0x004add64);
    /* 004add64: fld dword ptr [0x904850] */ FPUSH(R_F32((u32)(0x904850u)));
    /* 004add6a: fcomp dword ptr [ebx + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x38u))); FPOP();
    /* 004add6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004add6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004add70: jae 0x4add76 */ if (!fC) goto L_004add76;
L_004add72:; BB(0x004add72);
    /* 004add72: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 004add74: jmp 0x4add8c */ goto L_004add8c;
L_004add76:; BB(0x004add76);
    /* 004add76: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004add79: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004add7d: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 004add80: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004add83: mov ebp, 1 */ r_ebp = 0x1u;
    /* 004add88: jmp 0x4add8c */ goto L_004add8c;
L_004add8a:; BB(0x004add8a);
    /* 004add8a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_004add8c:; BB(0x004add8c);
    /* 004add8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004add8e: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x4add93u); f_0078730c();
    /* 004add93: mov eax, ebp */ r_eax = r_ebp;
    /* 004add95: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004add98: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004add99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004add9a: ret 4 */ FN_RET(0x004add2c); r_esp += 8; return;
}

void f_004adda0(void) /* sub_4ADDA0 */
{
    FN_ENTER(0x004adda0);
    /* 004adda0: mov ecx, dword ptr [0xa47758] */ r_ecx = R32((u32)(0xa47758u));
    /* 004adda6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004adda8: je 0x4addbd */ if (fZ) goto L_004addbd;
L_004addaa:; BB(0x004addaa);
    /* 004addaa: je 0x4addb3 */ if (fZ) goto L_004addb3;
L_004addac:; BB(0x004addac);
    /* 004addac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004addae: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4addb3u); f_004066a8();
L_004addb3:; BB(0x004addb3);
    /* 004addb3: mov dword ptr [0xa47758], 0 */ W32((u32)(0xa47758u), 0x0u);
L_004addbd:; BB(0x004addbd);
    /* 004addbd: ret  */ FN_RET(0x004adda0); r_esp += 4; return;
}

void f_004addc0(void) /* sub_4ADDC0 */
{
    FN_ENTER(0x004addc0);
    /* 004addc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004addc1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004addc2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004addc4: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004addcb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004addce: je 0x4ade70 */ if (fZ) goto L_004ade70;
L_004addd4:; BB(0x004addd4);
    /* 004addd4: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004addd7: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adddd: jne 0x4adde7 */ if (!fZ) goto L_004adde7;
L_004adddf:; BB(0x004adddf);
    /* 004adddf: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004adde2: jmp 0x4ade73 */ goto L_004ade73;
L_004adde7:; BB(0x004adde7);
    /* 004adde7: mov edi, dword ptr [ebp + 0xa4] */ r_edi = R32((u32)(r_ebp+0xa4u));
    /* 004added: mov eax, 4 */ r_eax = 0x4u;
    /* 004addf2: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 004addf9: mov edx, dword ptr [edi + 0x18] */ r_edx = R32((u32)(r_edi+0x18u));
    /* 004addfc: or edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004ade02: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 004ade05: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004ade0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade0e: je 0x4adf6d */ if (fZ) goto L_004adf6d;
L_004ade14:; BB(0x004ade14);
    /* 004ade14: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade17: je 0x4adf65 */ if (fZ) goto L_004adf65;
L_004ade1d:; BB(0x004ade1d);
    /* 004ade1d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade20: je 0x4adefc */ if (fZ) goto L_004adefc;
L_004ade26:; BB(0x004ade26);
    /* 004ade26: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade29: je 0x4ade5f */ if (fZ) goto L_004ade5f;
L_004ade2b:; BB(0x004ade2b);
    /* 004ade2b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade2e: je 0x4ade35 */ if (fZ) goto L_004ade35;
L_004ade30:; BB(0x004ade30);
    /* 004ade30: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004ade33: jmp 0x4ade73 */ goto L_004ade73;
L_004ade35:; BB(0x004ade35);
    /* 004ade35: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004ade38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ade3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ade3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ade3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ade3d: push 0x3f5 */ { u32 v = 0x3f5u; r_esp -= 4; W32(r_esp, v); }
    /* 004ade42: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ade47u); f_00814298();
    /* 004ade47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ade4a: mov eax, 1 */ r_eax = 0x1u;
    /* 004ade4f: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004ade56: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004ade5d: jmp 0x4ade73 */ goto L_004ade73;
L_004ade5f:; BB(0x004ade5f);
    /* 004ade5f: mov edx, 4 */ r_edx = 0x4u;
    /* 004ade64: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 004ade6b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004ade6e: jmp 0x4ade73 */ goto L_004ade73;
L_004ade70:; BB(0x004ade70);
    /* 004ade70: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_004ade73:; BB(0x004ade73);
    /* 004ade73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade75: je 0x4adf9f */ if (fZ) goto L_004adf9f;
L_004ade7b:; BB(0x004ade7b);
    /* 004ade7b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade7e: je 0x4adf93 */ if (fZ) goto L_004adf93;
L_004ade84:; BB(0x004ade84);
    /* 004ade84: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade87: je 0x4adf87 */ if (fZ) goto L_004adf87;
L_004ade8d:; BB(0x004ade8d);
    /* 004ade8d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade90: je 0x4adeae */ if (fZ) goto L_004adeae;
L_004ade92:; BB(0x004ade92);
    /* 004ade92: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ade95: jne 0x4adea0 */ if (!fZ) goto L_004adea0;
L_004ade97:; BB(0x004ade97);
    /* 004ade97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ade99: call 0x4ae024 */ r_esp -= 4; W32(r_esp, 0x4ade9eu); f_004ae024();
    /* 004ade9e: jmp 0x4adeb5 */ goto L_004adeb5;
L_004adea0:; BB(0x004adea0);
    /* 004adea0: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adea3: jne 0x4adeb5 */ if (!fZ) goto L_004adeb5;
L_004adea5:; BB(0x004adea5);
    /* 004adea5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adea7: call 0x4adfac */ r_esp -= 4; W32(r_esp, 0x4adeacu); f_004adfac();
    /* 004adeac: jmp 0x4adeb5 */ goto L_004adeb5;
L_004adeae:; BB(0x004adeae);
    /* 004adeae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adeb0: call 0x4ae10c */ r_esp -= 4; W32(r_esp, 0x4adeb5u); f_004ae10c();
L_004adeb5:; BB(0x004adeb5);
    /* 004adeb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004adeb6: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x4adebbu); f_007b999c();
    /* 004adebb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004adebc: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 004adec2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004adec5: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004adecb: jne 0x4aded8 */ if (!fZ) goto L_004aded8;
L_004adecd:; BB(0x004adecd);
    /* 004adecd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004adecf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004aded0: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x4aded5u); f_006946a8();
    /* 004aded5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004aded8:; BB(0x004aded8);
    /* 004aded8: mov eax, 1 */ r_eax = 0x1u;
    /* 004adedd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adede: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004adedf: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 004adee4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004adee9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004adeea: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4adeefu); f_0080575c();
    /* 004adeef: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adef2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adef4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4adef9u); f_007aa094();
    /* 004adef9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004adefa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004adefb: ret  */ FN_RET(0x004addc0); r_esp += 4; return;
L_004adefc:; BB(0x004adefc);
    /* 004adefc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004adefe: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004adf05: mov dword ptr [ebp + 0x3b0], eax */ W32((u32)(r_ebp+0x3b0u), r_eax);
    /* 004adf0b: mov dword ptr [ebp + 0x3b4], eax */ W32((u32)(r_ebp+0x3b4u), r_eax);
    /* 004adf11: mov dword ptr [ebp + 0x3b8], eax */ W32((u32)(r_ebp+0x3b8u), r_eax);
    /* 004adf17: mov dword ptr [ebp + 0x3bc], eax */ W32((u32)(r_ebp+0x3bcu), r_eax);
    /* 004adf1d: mov dword ptr [ebp + 0x3c0], eax */ W32((u32)(r_ebp+0x3c0u), r_eax);
    /* 004adf23: mov dword ptr [ebp + 0x3c4], eax */ W32((u32)(r_ebp+0x3c4u), r_eax);
    /* 004adf29: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004adf2f: mov dword ptr [ebp + 0x3cc], eax */ W32((u32)(r_ebp+0x3ccu), r_eax);
    /* 004adf35: mov dword ptr [ebp + 0x3ac], eax */ W32((u32)(r_ebp+0x3acu), r_eax);
    /* 004adf3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adf3d: call 0x4ae724 */ r_esp -= 4; W32(r_esp, 0x4adf42u); f_004ae724();
    /* 004adf42: push 0x20b */ { u32 v = 0x20bu; r_esp -= 4; W32(r_esp, v); }
    /* 004adf47: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004adf4a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004adf4b: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x4adf50u); f_00509590();
    /* 004adf50: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004adf53: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 004adf59: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 004adf60: jmp 0x4ade73 */ goto L_004ade73;
L_004adf65:; BB(0x004adf65);
    /* 004adf65: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004adf68: jmp 0x4ade73 */ goto L_004ade73;
L_004adf6d:; BB(0x004adf6d);
    /* 004adf6d: mov edx, dword ptr [ebp + 0x3a8] */ r_edx = R32((u32)(r_ebp+0x3a8u));
    /* 004adf73: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 004adf76: add edi, -0xa */ {  u32 a = r_edi; u32 b = 0xfffffff6u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004adf79: mov dword ptr [ebp + 0x3d0], edi */ W32((u32)(r_ebp+0x3d0u), r_edi);
    /* 004adf7f: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 004adf82: jmp 0x4ade73 */ goto L_004ade73;
L_004adf87:; BB(0x004adf87);
    /* 004adf87: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adf89: call 0x4ae398 */ r_esp -= 4; W32(r_esp, 0x4adf8eu); f_004ae398();
    /* 004adf8e: jmp 0x4adeb5 */ goto L_004adeb5;
L_004adf93:; BB(0x004adf93);
    /* 004adf93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adf95: call 0x4ae748 */ r_esp -= 4; W32(r_esp, 0x4adf9au); f_004ae748();
    /* 004adf9a: jmp 0x4adeb5 */ goto L_004adeb5;
L_004adf9f:; BB(0x004adf9f);
    /* 004adf9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adfa1: call 0x4ae918 */ r_esp -= 4; W32(r_esp, 0x4adfa6u); f_004ae918();
    /* 004adfa6: jmp 0x4adeb5 */ goto L_004adeb5;
}

void f_004adfac(void) /* sub_4ADFAC */
{
    FN_ENTER(0x004adfac);
    /* 004adfac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004adfad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004adfaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adfb1: push 0x41600000 */ { u32 v = 0x41600000u; r_esp -= 4; W32(r_esp, v); }
    /* 004adfb6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4adfbbu); f_007aaa30();
    /* 004adfbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 004adfbd: je 0x4adfc6 */ if (fZ) goto L_004adfc6;
L_004adfbf:; BB(0x004adfbf);
    /* 004adfbf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004adfc1: call 0x4adfe8 */ r_esp -= 4; W32(r_esp, 0x4adfc6u); f_004adfe8();
L_004adfc6:; BB(0x004adfc6);
    /* 004adfc6: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004adfcc: fcomp dword ptr [0x904844] */ fx_compare(ST(0), R_F32((u32)(0x904844u))); FPOP();
    /* 004adfd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004adfd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004adfd5: je 0x4adfd9 */ if (fZ) goto L_004adfd9;
L_004adfd7:; BB(0x004adfd7);
    /* 004adfd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004adfd8: ret  */ FN_RET(0x004adfac); r_esp += 4; return;
L_004adfd9:; BB(0x004adfd9);
    /* 004adfd9: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004adfdd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004adfe2: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004adfe6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004adfe7: ret  */ FN_RET(0x004adfac); r_esp += 4; return;
}

void f_004adfe8(void) /* sub_4ADFE8 */
{
    FN_ENTER(0x004adfe8);
    /* 004adfe8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004adfeb: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 004adfee: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004adff1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004adff4: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004adffc: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004ae000: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004ae003: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 004ae008: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae009: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4ae00eu); f_0050b510();
    /* 004ae00e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004ae012: push 0x20e */ { u32 v = 0x20eu; r_esp -= 4; W32(r_esp, v); }
    /* 004ae017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ae018: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4ae01du); f_0050b510();
    /* 004ae01d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ae020: ret  */ FN_RET(0x004adfe8); r_esp += 4; return;
}

