#include "protos.h"

void f_00794034(void) /* sub_794034 */
{
    FN_ENTER(0x00794034);
    /* 00794034: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00794035: mov ebp, esp */ r_ebp = r_esp;
    /* 00794037: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00794039: push 0x8f52b4 */ { u32 v = 0x8f52b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079403e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00794044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794045: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079404c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079404f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00794052: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00794055: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00794058: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0079405b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0079405e: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00794061: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00794063: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00794066: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00794069: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0079406c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0079406f: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00794072: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x794077u); f_0083173c();
    /* 00794077: fcomp dword ptr [0x97c900] */ fx_compare(ST(0), R_F32((u32)(0x97c900u))); FPOP();
    /* 0079407d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0079407f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00794080: je 0x79408c */ if (fZ) goto L_0079408c;
L_00794082:; BB(0x00794082);
    /* 00794082: lea ecx, [ebp - 0x44] */ r_ecx = (u32)(r_ebp+0xffffffbcu);
    /* 00794085: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x79408au); f_0082df08();
    /* 0079408a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0079408c:; BB(0x0079408c);
    /* 0079408c: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0079408f: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00794092: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00794095: mov dword ptr [0xa9d460], eax */ W32((u32)(0xa9d460u), r_eax);
    /* 0079409a: mov dword ptr [0xa9d464], edx */ W32((u32)(0xa9d464u), r_edx);
    /* 007940a0: mov dword ptr [0xa9d468], ecx */ W32((u32)(0xa9d468u), r_ecx);
    /* 007940a6: mov esi, dword ptr [ebx + 0x18] */ r_esi = R32((u32)(r_ebx+0x18u));
    /* 007940a9: mov dword ptr [0xa9d478], esi */ W32((u32)(0xa9d478u), r_esi);
    /* 007940af: mov edi, dword ptr [ebx + 0x1c] */ r_edi = R32((u32)(r_ebx+0x1cu));
    /* 007940b2: mov dword ptr [0xa9d47c], edi */ W32((u32)(0xa9d47cu), r_edi);
    /* 007940b8: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 007940bb: mov dword ptr [0xa9d480], eax */ W32((u32)(0xa9d480u), r_eax);
    /* 007940c0: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007940c3: mov dword ptr [0xa9d488], eax */ W32((u32)(0xa9d488u), r_eax);
    /* 007940c8: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 007940cb: mov dword ptr [0xa9d48c], eax */ W32((u32)(0xa9d48cu), r_eax);
    /* 007940d0: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 007940d3: mov dword ptr [0xa9d490], eax */ W32((u32)(0xa9d490u), r_eax);
    /* 007940d8: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 007940db: mov dword ptr [0xa9d498], eax */ W32((u32)(0xa9d498u), r_eax);
    /* 007940e0: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 007940e3: mov dword ptr [0xa9d49c], eax */ W32((u32)(0xa9d49cu), r_eax);
    /* 007940e8: mov ebx, dword ptr [ebx + 0x40] */ r_ebx = R32((u32)(r_ebx+0x40u));
    /* 007940eb: mov dword ptr [0xa9d4a0], ebx */ W32((u32)(0xa9d4a0u), r_ebx);
    /* 007940f1: call 0x7959c8 */ r_esp -= 4; W32(r_esp, 0x7940f6u); f_007959c8();
    /* 007940f6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007940fd: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007940ff: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x794104u); f_005caba4();
    /* 00794104: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00794105: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00794108: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079410a: je 0x79412e */ if (fZ) goto L_0079412e;
L_0079410c:; BB(0x0079410c);
    /* 0079410c: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00794113: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079411a: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794120: mov ecx, eax */ r_ecx = r_eax;
    /* 00794122: call 0x793e58 */ r_esp -= 4; W32(r_esp, 0x794127u); f_00793e58();
    /* 00794127: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0079412e:; BB(0x0079412e);
    /* 0079412e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00794135: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0079413c: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079413e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x794143u); f_005caba4();
    /* 00794143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00794144: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00794147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794149: je 0x79416d */ if (fZ) goto L_0079416d;
L_0079414b:; BB(0x0079414b);
    /* 0079414b: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00794152: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00794159: push dword ptr [0xaca378] */ { u32 v = R32((u32)(0xaca378u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079415f: mov ecx, eax */ r_ecx = r_eax;
    /* 00794161: call 0x793f0c */ r_esp -= 4; W32(r_esp, 0x794166u); f_00793f0c();
    /* 00794166: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0079416d:; BB(0x0079416d);
    /* 0079416d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00794174: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0079417b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079417d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x794182u); f_005caba4();
    /* 00794182: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00794185: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00794188: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079418b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079418d: je 0x7941e9 */ if (fZ) goto L_007941e9;
L_0079418f:; BB(0x0079418f);
    /* 0079418f: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00794196: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0079419d: mov ecx, eax */ r_ecx = r_eax;
    /* 0079419f: mov eax, dword ptr [0xaca378] */ r_eax = R32((u32)(0xaca378u));
    /* 007941a4: mov dword ptr [ebp - 0x4c], ecx */ W32((u32)(r_ebp+0xffffffb4u), r_ecx);
    /* 007941a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007941a8: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007941ab: call 0x793ed4 */ r_esp -= 4; W32(r_esp, 0x7941b0u); f_00793ed4();
    /* 007941b0: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007941b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007941ba: mov dword ptr [ecx], 0xb45858 */ W32((u32)(r_ecx), 0xb45858u);
    /* 007941c0: mov dword ptr [0xa9d4b8], ecx */ W32((u32)(0xa9d4b8u), r_ecx);
    /* 007941c6: mov dword ptr [0xa9d4b4], 1 */ W32((u32)(0xa9d4b4u), 0x1u);
    /* 007941d0: call 0x794200 */ r_esp -= 4; W32(r_esp, 0x7941d5u); f_00794200();
    /* 007941d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007941d7: mov dword ptr [0xa9d4a8], eax */ W32((u32)(0xa9d4a8u), r_eax);
    /* 007941dc: mov dword ptr [0xa9d4ac], eax */ W32((u32)(0xa9d4acu), r_eax);
    /* 007941e1: mov dword ptr [0xa9d4b0], eax */ W32((u32)(0xa9d4b0u), r_eax);
    /* 007941e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_007941e9:; BB(0x007941e9);
    /* 007941e9: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007941ec: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007941ef: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007941f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007941f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007941fc: mov esp, ebp */ r_esp = r_ebp;
    /* 007941fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007941ff: ret  */ FN_RET(0x00794034); r_esp += 4; return;
}

void f_00794200(void) /* sub_794200 */
{
    FN_ENTER(0x00794200);
    /* 00794200: push dword ptr [0xa9d4a0] */ { u32 v = R32((u32)(0xa9d4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794206: push dword ptr [0xa9d49c] */ { u32 v = R32((u32)(0xa9d49cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079420c: push dword ptr [0xa9d498] */ { u32 v = R32((u32)(0xa9d498u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794212: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x794217u); f_00843980();
    /* 00794217: ret  */ FN_RET(0x00794200); r_esp += 4; return;
}

void f_00794218(void) /* sub_794218 */
{
    FN_ENTER(0x00794218);
    /* 00794218: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00794219: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079421a: mov eax, dword ptr [0xa9d4e4] */ r_eax = R32((u32)(0xa9d4e4u));
    /* 0079421f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794221: je 0x7942d6 */ if (fZ) goto L_007942d6;
L_00794227:; BB(0x00794227);
    /* 00794227: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x79422cu); f_00807ac0();
    /* 0079422c: mov ebp, eax */ r_ebp = r_eax;
    /* 0079422e: call 0x78b220 */ r_esp -= 4; W32(r_esp, 0x794233u); f_0078b220();
    /* 00794233: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794235: je 0x79423a */ if (fZ) goto L_0079423a;
L_00794237:; BB(0x00794237);
    /* 00794237: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0079423a:; BB(0x0079423a);
    /* 0079423a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079423c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079423e: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00794242: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794244: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794246: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794248: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079424a: add eax, dword ptr [0xa9d4e4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9d4e4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794250: mov ebp, 0xa9d460 */ r_ebp = 0xa9d460u;
    /* 00794255: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00794258: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 0079425b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0079425d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00794260: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00794263: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00794266: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00794269: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0079426c: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0079426f: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00794272: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 00794275: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00794278: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 0079427b: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0079427e: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 00794281: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00794284: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00794287: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0079428a: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 0079428d: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00794290: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00794293: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00794296: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 00794299: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0079429c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0079429f: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 007942a2: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 007942a5: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 007942a8: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 007942ab: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 007942ae: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 007942b1: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 007942b4: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 007942b7: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 007942ba: push dword ptr [0xa9d4e8] */ { u32 v = R32((u32)(0xa9d4e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007942c0: push dword ptr [0xa9d4e4] */ { u32 v = R32((u32)(0xa9d4e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007942c6: push 0x97c908 */ { u32 v = 0x97c908u; r_esp -= 4; W32(r_esp, v); }
    /* 007942cb: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x7942d0u); f_005b9f68();
    /* 007942d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007942d3:; BB(0x007942d3);
    /* 007942d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007942d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007942d5: ret  */ FN_RET(0x00794218); r_esp += 4; return;
L_007942d6:; BB(0x007942d6);
    /* 007942d6: push 0x1980 */ { u32 v = 0x1980u; r_esp -= 4; W32(r_esp, v); }
    /* 007942db: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x7942e0u); f_0082e940();
    /* 007942e0: mov ebp, eax */ r_ebp = r_eax;
    /* 007942e2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007942e5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007942e7: je 0x7942d3 */ if (fZ) goto L_007942d3;
L_007942e9:; BB(0x007942e9);
    /* 007942e9: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007942ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007942ee: lea edx, [ebp + 0x1980] */ r_edx = (u32)(r_ebp+0x1980u);
L_007942f4:; BB(0x007942f4);
    /* 007942f4: mov eax, 0x9ff420 */ r_eax = 0x9ff420u;
    /* 007942f9: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 007942fb: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 007942fd: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 00794300: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 00794303: mov edi, dword ptr [eax + 8] */ r_edi = R32((u32)(r_eax+0x8u));
    /* 00794306: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00794309: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0079430c: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 0079430f: mov edi, dword ptr [eax + 0x10] */ r_edi = R32((u32)(r_eax+0x10u));
    /* 00794312: mov dword ptr [ecx + 0x10], edi */ W32((u32)(r_ecx+0x10u), r_edi);
    /* 00794315: mov edi, dword ptr [eax + 0x14] */ r_edi = R32((u32)(r_eax+0x14u));
    /* 00794318: mov dword ptr [ecx + 0x14], edi */ W32((u32)(r_ecx+0x14u), r_edi);
    /* 0079431b: mov edi, dword ptr [eax + 0x18] */ r_edi = R32((u32)(r_eax+0x18u));
    /* 0079431e: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 00794321: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00794324: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 00794327: mov edi, dword ptr [eax + 0x20] */ r_edi = R32((u32)(r_eax+0x20u));
    /* 0079432a: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 0079432d: mov edi, dword ptr [eax + 0x24] */ r_edi = R32((u32)(r_eax+0x24u));
    /* 00794330: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00794333: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00794336: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 00794339: mov edi, dword ptr [eax + 0x2c] */ r_edi = R32((u32)(r_eax+0x2cu));
    /* 0079433c: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 0079433f: mov edi, dword ptr [eax + 0x30] */ r_edi = R32((u32)(r_eax+0x30u));
    /* 00794342: mov dword ptr [ecx + 0x30], edi */ W32((u32)(r_ecx+0x30u), r_edi);
    /* 00794345: mov edi, dword ptr [eax + 0x34] */ r_edi = R32((u32)(r_eax+0x34u));
    /* 00794348: mov dword ptr [ecx + 0x34], edi */ W32((u32)(r_ecx+0x34u), r_edi);
    /* 0079434b: mov edi, dword ptr [eax + 0x38] */ r_edi = R32((u32)(r_eax+0x38u));
    /* 0079434e: mov dword ptr [ecx + 0x38], edi */ W32((u32)(r_ecx+0x38u), r_edi);
    /* 00794351: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 00794354: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 00794357: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 0079435a: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0079435d: add ecx, 0x44 */ {  u32 a = r_ecx; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00794360: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00794362: jg 0x7942f4 */ if ((!fZ&&fS==fO)) goto L_007942f4;
L_00794364:; BB(0x00794364);
    /* 00794364: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00794367: push 0x1980 */ { u32 v = 0x1980u; r_esp -= 4; W32(r_esp, v); }
    /* 0079436c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079436d: push 0x97c908 */ { u32 v = 0x97c908u; r_esp -= 4; W32(r_esp, v); }
    /* 00794372: call 0x5b9f68 */ r_esp -= 4; W32(r_esp, 0x794377u); f_005b9f68();
    /* 00794377: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00794378: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x79437du); f_0082e960();
    /* 0079437d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00794380: jmp 0x7942d3 */ goto L_007942d3;
}

void f_00794388(void) /* sub_794388 */
{
    FN_ENTER(0x00794388);
    /* 00794388: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00794389: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0079438d: mov ecx, dword ptr [0xa9d4e0] */ r_ecx = R32((u32)(0xa9d4e0u));
    /* 00794393: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00794396: jl 0x79439a */ if ((fS!=fO)) goto L_0079439a;
L_00794398:; BB(0x00794398);
    /* 00794398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794399: ret  */ FN_RET(0x00794388); r_esp += 4; return;
L_0079439a:; BB(0x0079439a);
    /* 0079439a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0079439e: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007943a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007943a3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007943a5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007943a7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007943a9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007943ab: mov dword ptr [edx*4 + 0xa9cf08], esi */ W32((u32)(r_edx*4+0xa9cf08u), r_esi);
    /* 007943b2: mov esi, dword ptr [eax + 0xe4] */ r_esi = R32((u32)(r_eax+0xe4u));
    /* 007943b8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007943bb: mov dword ptr [edx*4 + 0xa9cee0], esi */ W32((u32)(r_edx*4+0xa9cee0u), r_esi);
    /* 007943c2: mov esi, dword ptr [eax + 0xe8] */ r_esi = R32((u32)(r_eax+0xe8u));
    /* 007943c8: mov dword ptr [0xa9d4e0], ecx */ W32((u32)(0xa9d4e0u), r_ecx);
    /* 007943ce: mov dword ptr [edx*4 + 0xa9cee4], esi */ W32((u32)(r_edx*4+0xa9cee4u), r_esi);
    /* 007943d5: mov esi, dword ptr [eax + 0xec] */ r_esi = R32((u32)(r_eax+0xecu));
    /* 007943db: mov dword ptr [edx*4 + 0xa9cee8], esi */ W32((u32)(r_edx*4+0xa9cee8u), r_esi);
    /* 007943e2: mov esi, dword ptr [eax + 0xf0] */ r_esi = R32((u32)(r_eax+0xf0u));
    /* 007943e8: mov dword ptr [edx*4 + 0xa9ceec], esi */ W32((u32)(r_edx*4+0xa9ceecu), r_esi);
    /* 007943ef: mov esi, dword ptr [eax + 0xf4] */ r_esi = R32((u32)(r_eax+0xf4u));
    /* 007943f5: mov dword ptr [edx*4 + 0xa9cef0], esi */ W32((u32)(r_edx*4+0xa9cef0u), r_esi);
    /* 007943fc: mov esi, dword ptr [eax + 0xf8] */ r_esi = R32((u32)(r_eax+0xf8u));
    /* 00794402: mov dword ptr [edx*4 + 0xa9cef4], esi */ W32((u32)(r_edx*4+0xa9cef4u), r_esi);
    /* 00794409: mov eax, dword ptr [eax + 0xfc] */ r_eax = R32((u32)(r_eax+0xfcu));
    /* 0079440f: mov dword ptr [edx*4 + 0xa9cef8], eax */ W32((u32)(r_edx*4+0xa9cef8u), r_eax);
    /* 00794416: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794417: ret  */ FN_RET(0x00794388); r_esp += 4; return;
}

void f_00794418(void) /* sub_794418 */
{
    FN_ENTER(0x00794418);
    /* 00794418: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00794419: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079441a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079441b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079441c: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00794420: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00794424: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00794428: mov edx, dword ptr [0xa9d4dc] */ r_edx = R32((u32)(0xa9d4dcu));
    /* 0079442e: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00794431: jl 0x794438 */ if ((fS!=fO)) goto L_00794438;
L_00794433:; BB(0x00794433);
    /* 00794433: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00794434: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794435: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794436: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794437: ret  */ FN_RET(0x00794418); r_esp += 4; return;
L_00794438:; BB(0x00794438);
    /* 00794438: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079443a:; BB(0x0079443a);
    /* 0079443a: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0079443d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079443f: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00794441: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00794443: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00794445: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00794447: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0079444b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079444d: mov edi, dword ptr [edi + 0xa9cda8] */ r_edi = R32((u32)(r_edi+0xa9cda8u));
    /* 00794453: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794455: je 0x7944e2 */ if (fZ) goto L_007944e2;
L_0079445b:; BB(0x0079445b);
    /* 0079445b: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794461: je 0x79446b */ if (fZ) goto L_0079446b;
L_00794463:; BB(0x00794463);
    /* 00794463: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794466: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00794469: jl 0x79443a */ if ((fS!=fO)) goto L_0079443a;
L_0079446b:; BB(0x0079446b);
    /* 0079446b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0079446e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794470: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00794472: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794474: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00794476: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00794478: mov dword ptr [eax*4 + 0xa9cda8], esi */ W32((u32)(r_eax*4+0xa9cda8u), r_esi);
    /* 0079447f: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 00794481: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00794484: mov dword ptr [eax*4 + 0xa9cd80], esi */ W32((u32)(r_eax*4+0xa9cd80u), r_esi);
    /* 0079448b: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0079448e: mov dword ptr [eax*4 + 0xa9cd84], esi */ W32((u32)(r_eax*4+0xa9cd84u), r_esi);
    /* 00794495: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00794498: mov dword ptr [eax*4 + 0xa9cd88], ebx */ W32((u32)(r_eax*4+0xa9cd88u), r_ebx);
    /* 0079449f: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 007944a1: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007944a7: mov dword ptr [eax*4 + 0xa9cd8c], ebx */ W32((u32)(r_eax*4+0xa9cd8cu), r_ebx);
    /* 007944ae: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 007944b1: mov dword ptr [eax*4 + 0xa9cd90], ebx */ W32((u32)(r_eax*4+0xa9cd90u), r_ebx);
    /* 007944b8: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 007944bb: mov dword ptr [eax*4 + 0xa9cd94], ebx */ W32((u32)(r_eax*4+0xa9cd94u), r_ebx);
    /* 007944c2: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 007944c5: mov dword ptr [eax*4 + 0xa9cd98], ecx */ W32((u32)(r_eax*4+0xa9cd98u), r_ecx);
    /* 007944cc: mov ecx, dword ptr [eax*4 + 0xa9cda4] */ r_ecx = R32((u32)(r_eax*4+0xa9cda4u));
    /* 007944d3: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007944d6: mov dword ptr [eax*4 + 0xa9cda4], ecx */ W32((u32)(r_eax*4+0xa9cda4u), r_ecx);
    /* 007944dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007944de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007944df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007944e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007944e1: ret  */ FN_RET(0x00794418); r_esp += 4; return;
L_007944e2:; BB(0x007944e2);
    /* 007944e2: mov eax, ebp */ r_eax = r_ebp;
    /* 007944e4: mov dword ptr [eax*4 + 0xa9cda8], esi */ W32((u32)(r_eax*4+0xa9cda8u), r_esi);
    /* 007944eb: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007944ed: mov dword ptr [eax*4 + 0xa9cd80], edx */ W32((u32)(r_eax*4+0xa9cd80u), r_edx);
    /* 007944f4: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 007944f7: mov dword ptr [eax*4 + 0xa9cd84], esi */ W32((u32)(r_eax*4+0xa9cd84u), r_esi);
    /* 007944fe: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00794501: mov dword ptr [eax*4 + 0xa9cd88], ebx */ W32((u32)(r_eax*4+0xa9cd88u), r_ebx);
    /* 00794508: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0079450a: mov dword ptr [eax*4 + 0xa9cd8c], edx */ W32((u32)(r_eax*4+0xa9cd8cu), r_edx);
    /* 00794511: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00794514: mov dword ptr [eax*4 + 0xa9cd90], edx */ W32((u32)(r_eax*4+0xa9cd90u), r_edx);
    /* 0079451b: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0079451e: mov dword ptr [eax*4 + 0xa9cd94], edx */ W32((u32)(r_eax*4+0xa9cd94u), r_edx);
    /* 00794525: mov edx, dword ptr [eax*4 + 0xa9cda4] */ r_edx = R32((u32)(r_eax*4+0xa9cda4u));
    /* 0079452c: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 0079452f: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00794532: mov dword ptr [eax*4 + 0xa9cd98], ecx */ W32((u32)(r_eax*4+0xa9cd98u), r_ecx);
    /* 00794539: mov dword ptr [eax*4 + 0xa9cda4], edx */ W32((u32)(r_eax*4+0xa9cda4u), r_edx);
    /* 00794540: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00794541: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794542: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794543: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794544: ret  */ FN_RET(0x00794418); r_esp += 4; return;
}

void f_00794548(void) /* sub_794548 */
{
    FN_ENTER(0x00794548);
    /* 00794548: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00794549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079454a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079454b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079454f: mov ecx, dword ptr [0xa9d4dc] */ r_ecx = R32((u32)(0xa9d4dcu));
    /* 00794555: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00794557: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00794559: jle 0x794585 */ if ((fZ||fS!=fO)) goto L_00794585;
L_0079455b:; BB(0x0079455b);
    /* 0079455b: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
L_0079455f:; BB(0x0079455f);
    /* 0079455f: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00794563: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00794565: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00794567: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00794569: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079456b: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0079456d: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00794570: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00794572: cmp edx, dword ptr [edi + 0xa9cda8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0xa9cda8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794578: je 0x794651 */ if (fZ) goto L_00794651;
L_0079457e:; BB(0x0079457e);
    /* 0079457e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00794581: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00794583: jl 0x79455f */ if ((fS!=fO)) goto L_0079455f;
L_00794585:; BB(0x00794585);
    /* 00794585: mov edx, dword ptr [0xa9d4e0] */ r_edx = R32((u32)(0xa9d4e0u));
    /* 0079458b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079458d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079458f: jle 0x7945b7 */ if ((fZ||fS!=fO)) goto L_007945b7;
L_00794591:; BB(0x00794591);
    /* 00794591: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
L_00794595:; BB(0x00794595);
    /* 00794595: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 00794598: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079459a: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0079459c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079459e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007945a0: sub ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007945a2: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 007945a6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007945a8: cmp eax, dword ptr [edi + 0xa9cf08] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007945ae: je 0x794601 */ if (fZ) goto L_00794601;
L_007945b0:; BB(0x007945b0);
    /* 007945b0: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007945b3: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007945b5: jl 0x794595 */ if ((fS!=fO)) goto L_00794595;
L_007945b7:; BB(0x007945b7);
    /* 007945b7: mov eax, dword ptr [0xa9d480] */ r_eax = R32((u32)(0xa9d480u));
    /* 007945bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007945bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007945be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007945bf: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x7945c4u); f_00843980();
    /* 007945c4: push dword ptr [0xa9d474] */ { u32 v = R32((u32)(0xa9d474u)); r_esp -= 4; W32(r_esp, v); }
    /* 007945ca: push dword ptr [0xa9d470] */ { u32 v = R32((u32)(0xa9d470u)); r_esp -= 4; W32(r_esp, v); }
    /* 007945d0: push dword ptr [0xa9d46c] */ { u32 v = R32((u32)(0xa9d46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007945d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007945d8: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x7945ddu); f_00843a68();
    /* 007945dd: push dword ptr [0xa9d490] */ { u32 v = R32((u32)(0xa9d490u)); r_esp -= 4; W32(r_esp, v); }
    /* 007945e3: push dword ptr [0xa9d48c] */ { u32 v = R32((u32)(0xa9d48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007945e9: push dword ptr [0xa9d488] */ { u32 v = R32((u32)(0xa9d488u)); r_esp -= 4; W32(r_esp, v); }
    /* 007945ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007945f1: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x7945f6u); f_00843a38();
    /* 007945f6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007945f8: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x7945fdu); f_00843af8();
    /* 007945fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007945fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007945ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794600: ret  */ FN_RET(0x00794548); r_esp += 4; return;
L_00794601:; BB(0x00794601);
    /* 00794601: push dword ptr [ebp*4 + 0xa9cee8] */ { u32 v = R32((u32)(r_ebp*4+0xa9cee8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794608: push dword ptr [ebp*4 + 0xa9cee4] */ { u32 v = R32((u32)(r_ebp*4+0xa9cee4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079460f: push dword ptr [ebp*4 + 0xa9cee0] */ { u32 v = R32((u32)(r_ebp*4+0xa9cee0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794616: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794618: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x79461du); f_00843a68();
    /* 0079461d: mov eax, dword ptr [0xa9d480] */ r_eax = R32((u32)(0xa9d480u));
    /* 00794622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794625: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x79462au); f_00843980();
    /* 0079462a: push dword ptr [ebp*4 + 0xa9cef8] */ { u32 v = R32((u32)(r_ebp*4+0xa9cef8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794631: push dword ptr [ebp*4 + 0xa9cef4] */ { u32 v = R32((u32)(r_ebp*4+0xa9cef4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794638: push dword ptr [ebp*4 + 0xa9cef0] */ { u32 v = R32((u32)(r_ebp*4+0xa9cef0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079463f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794641: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x794646u); f_00843a38();
    /* 00794646: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794648: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x79464du); f_00843af8();
    /* 0079464d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079464e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079464f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794650: ret  */ FN_RET(0x00794548); r_esp += 4; return;
L_00794651:; BB(0x00794651);
    /* 00794651: mov ebp, esi */ r_ebp = r_esi;
    /* 00794653: mov edx, dword ptr [ebp*4 + 0xa9cda4] */ r_edx = R32((u32)(r_ebp*4+0xa9cda4u));
    /* 0079465a: mov eax, edx */ r_eax = r_edx;
    /* 0079465c: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0079465f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794662: je 0x79470d */ if (fZ) goto L_0079470d;
L_00794668:; BB(0x00794668);
    /* 00794668: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079466b: je 0x794685 */ if (fZ) goto L_00794685;
L_0079466d:; BB(0x0079466d);
    /* 0079466d: mov eax, dword ptr [0xa9d480] */ r_eax = R32((u32)(0xa9d480u));
    /* 00794672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794674: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794675: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x79467au); f_00843980();
    /* 0079467a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079467c: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x794681u); f_00843af8();
    /* 00794681: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794682: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794683: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794684: ret  */ FN_RET(0x00794548); r_esp += 4; return;
L_00794685:; BB(0x00794685);
    /* 00794685: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x79468au); f_0080a640();
    /* 0079468a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079468c: je 0x7946d1 */ if (fZ) goto L_007946d1;
L_0079468e:; BB(0x0079468e);
    /* 0079468e: push dword ptr [ebp*4 + 0xa9cd88] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794695: push dword ptr [ebp*4 + 0xa9cd84] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079469c: push dword ptr [ebp*4 + 0xa9cd80] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd80u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007946a5: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x7946aau); f_00843a68();
    /* 007946aa: push dword ptr [ebp*4 + 0xa9cd98] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd98u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946b1: push dword ptr [ebp*4 + 0xa9cd94] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd94u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946b8: push dword ptr [ebp*4 + 0xa9cd90] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd90u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007946c1: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x7946c6u); f_00843a38();
    /* 007946c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007946c8: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x7946cdu); f_00843af8();
    /* 007946cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007946ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007946cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007946d0: ret  */ FN_RET(0x00794548); r_esp += 4; return;
L_007946d1:; BB(0x007946d1);
    /* 007946d1: push dword ptr [ebp*4 + 0xa9cd88] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd88u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946d8: push dword ptr [ebp*4 + 0xa9cd84] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd84u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946df: push dword ptr [ebp*4 + 0xa9cd80] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd80u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946e6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007946e8: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x7946edu); f_00843a68();
    /* 007946ed: push dword ptr [ebp*4 + 0xa9cd98] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd98u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946f4: push dword ptr [ebp*4 + 0xa9cd94] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd94u)); r_esp -= 4; W32(r_esp, v); }
    /* 007946fb: push dword ptr [ebp*4 + 0xa9cd90] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd90u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794702: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794704: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x794709u); f_00843a38();
    /* 00794709: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079470a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079470b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079470c: ret  */ FN_RET(0x00794548); r_esp += 4; return;
L_0079470d:; BB(0x0079470d);
    /* 0079470d: push dword ptr [ebp*4 + 0xa9cd88] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd88u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794714: push dword ptr [ebp*4 + 0xa9cd84] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079471b: push dword ptr [ebp*4 + 0xa9cd80] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd80u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794722: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794724: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x794729u); f_00843a68();
    /* 00794729: push dword ptr [ebp*4 + 0xa9cd98] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794730: push dword ptr [ebp*4 + 0xa9cd94] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794737: push dword ptr [ebp*4 + 0xa9cd90] */ { u32 v = R32((u32)(r_ebp*4+0xa9cd90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079473e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794740: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x794745u); f_00843a38();
    /* 00794745: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794747: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x79474cu); f_00843af8();
    /* 0079474c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079474d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079474e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079474f: ret  */ FN_RET(0x00794548); r_esp += 4; return;
}

void f_00794750(void) /* sub_794750 */
{
    FN_ENTER(0x00794750);
    /* 00794750: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x794755u); f_0080a640();
    /* 00794755: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00794757: je 0x794794 */ if (fZ) goto L_00794794;
L_00794759:; BB(0x00794759);
    /* 00794759: push dword ptr [0xa9d474] */ { u32 v = R32((u32)(0xa9d474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079475f: push dword ptr [0xa9d470] */ { u32 v = R32((u32)(0xa9d470u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794765: push dword ptr [0xa9d46c] */ { u32 v = R32((u32)(0xa9d46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079476b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079476d: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x794772u); f_00843a68();
    /* 00794772: push dword ptr [0xa9d490] */ { u32 v = R32((u32)(0xa9d490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794778: push dword ptr [0xa9d48c] */ { u32 v = R32((u32)(0xa9d48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0079477e: push dword ptr [0xa9d488] */ { u32 v = R32((u32)(0xa9d488u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794784: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794786: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x79478bu); f_00843a38();
    /* 0079478b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079478d: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x794792u); f_00843af8();
    /* 00794792: jmp 0x7947cd */ goto L_007947cd;
L_00794794:; BB(0x00794794);
    /* 00794794: push dword ptr [0xa9d474] */ { u32 v = R32((u32)(0xa9d474u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079479a: push dword ptr [0xa9d470] */ { u32 v = R32((u32)(0xa9d470u)); r_esp -= 4; W32(r_esp, v); }
    /* 007947a0: push dword ptr [0xa9d46c] */ { u32 v = R32((u32)(0xa9d46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007947a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007947a8: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x7947adu); f_00843a68();
    /* 007947ad: push dword ptr [0xa9d490] */ { u32 v = R32((u32)(0xa9d490u)); r_esp -= 4; W32(r_esp, v); }
    /* 007947b3: push dword ptr [0xa9d48c] */ { u32 v = R32((u32)(0xa9d48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007947b9: push dword ptr [0xa9d488] */ { u32 v = R32((u32)(0xa9d488u)); r_esp -= 4; W32(r_esp, v); }
    /* 007947bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007947c1: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x7947c6u); f_00843a38();
    /* 007947c6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007947c8: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x7947cdu); f_00843af8();
L_007947cd:; BB(0x007947cd);
    /* 007947cd: mov eax, dword ptr [0xa9d480] */ r_eax = R32((u32)(0xa9d480u));
    /* 007947d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007947d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007947d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007947d5: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x7947dau); f_00843980();
    /* 007947da: ret  */ FN_RET(0x00794750); r_esp += 4; return;
}

void f_007947dc(void) /* sub_7947DC */
{
    FN_ENTER(0x007947dc);
    /* 007947dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007947dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007947de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007947df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007947e0: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007947e4: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 007947e8: mov eax, dword ptr [0xa9d4e0] */ r_eax = R32((u32)(0xa9d4e0u));
    /* 007947ed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007947ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007947f1: jle 0x7948d5 */ if ((fZ||fS!=fO)) goto L_007948d5;
L_007947f7:; BB(0x007947f7);
    /* 007947f7: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007947fa: jl 0x7948b5 */ if ((fS!=fO)) goto L_007948b5;
L_00794800:; BB(0x00794800);
    /* 00794800: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00794803:; BB(0x00794803);
    /* 00794803: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00794806: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794808: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079480a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079480c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079480e: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00794810: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794812: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794814: cmp ecx, dword ptr [ebx + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079481a: je 0x794961 */ if (fZ) goto L_00794961;
L_00794820:; BB(0x00794820);
    /* 00794820: lea esi, [edx + 1] */ r_esi = (u32)(r_edx+0x1u);
    /* 00794823: lea ebx, [edx + edx + 2] */ r_ebx = (u32)(r_edx+r_edx+0x2u);
    /* 00794827: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794829: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079482b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079482d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079482f: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00794831: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794833: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794835: cmp ecx, dword ptr [ebx + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079483b: je 0x79497d */ if (fZ) goto L_0079497d;
L_00794841:; BB(0x00794841);
    /* 00794841: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 00794844: lea ebx, [esi + esi + 2] */ r_ebx = (u32)(r_esi+r_esi+0x2u);
    /* 00794848: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079484a: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079484c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079484e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794850: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00794852: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794854: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794856: cmp ecx, dword ptr [ebx + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079485c: je 0x794976 */ if (fZ) goto L_00794976;
L_00794862:; BB(0x00794862);
    /* 00794862: lea edx, [esi + 2] */ r_edx = (u32)(r_esi+0x2u);
    /* 00794865: lea ebx, [esi + esi + 4] */ r_ebx = (u32)(r_esi+r_esi+0x4u);
    /* 00794869: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079486b: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079486d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079486f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794871: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00794873: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794875: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794877: cmp ecx, dword ptr [ebx + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079487d: je 0x79496f */ if (fZ) goto L_0079496f;
L_00794883:; BB(0x00794883);
    /* 00794883: lea edx, [esi + 3] */ r_edx = (u32)(r_esi+0x3u);
    /* 00794886: lea ebx, [esi + esi + 6] */ r_ebx = (u32)(r_esi+r_esi+0x6u);
    /* 0079488a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079488c: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079488e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794890: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794892: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00794894: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794896: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00794898: cmp ecx, dword ptr [ebx + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079489e: je 0x794968 */ if (fZ) goto L_00794968;
L_007948a4:; BB(0x007948a4);
    /* 007948a4: lea edx, [esi + 4] */ r_edx = (u32)(r_esi+0x4u);
    /* 007948a7: lea ebx, [eax - 6] */ r_ebx = (u32)(r_eax+0xfffffffau);
    /* 007948aa: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007948ac: jle 0x794803 */ if ((fZ||fS!=fO)) goto L_00794803;
L_007948b2:; BB(0x007948b2);
    /* 007948b2: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_007948b5:; BB(0x007948b5);
    /* 007948b5: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007948b8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007948ba: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007948bc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007948be: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007948c0: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007948c2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007948c4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007948c6: cmp ecx, dword ptr [esi + 0xa9cf08] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xa9cf08u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007948cc: je 0x794918 */ if (fZ) goto L_00794918;
L_007948ce:; BB(0x007948ce);
    /* 007948ce: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007948d1: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007948d3: jl 0x7948b5 */ if ((fS!=fO)) goto L_007948b5;
L_007948d5:; BB(0x007948d5);
    /* 007948d5: mov eax, dword ptr [0xa9d484] */ r_eax = R32((u32)(0xa9d484u));
    /* 007948da: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 007948dd: mov edx, dword ptr [0xa9d488] */ r_edx = R32((u32)(0xa9d488u));
    /* 007948e3: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 007948e6: mov ecx, dword ptr [0xa9d48c] */ r_ecx = R32((u32)(0xa9d48cu));
    /* 007948ec: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007948f0: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 007948f3: mov eax, dword ptr [0xa9d490] */ r_eax = R32((u32)(0xa9d490u));
    /* 007948f8: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 007948fb: mov ebp, dword ptr [0xa9d46c] */ r_ebp = R32((u32)(0xa9d46cu));
    /* 00794901: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 00794903: mov eax, dword ptr [0xa9d470] */ r_eax = R32((u32)(0xa9d470u));
    /* 00794908: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079490b: mov eax, dword ptr [0xa9d474] */ r_eax = R32((u32)(0xa9d474u));
    /* 00794910: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00794913: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00794914: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794915: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00794916: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794917: ret  */ FN_RET(0x007947dc); r_esp += 4; return;
L_00794918:; BB(0x00794918);
    /* 00794918: mov eax, esi */ r_eax = r_esi;
L_0079491a:; BB(0x0079491a);
    /* 0079491a: mov ecx, dword ptr [eax + 0xa9cee0] */ r_ecx = R32((u32)(r_eax+0xa9cee0u));
    /* 00794920: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00794924: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00794926: mov ecx, dword ptr [eax + 0xa9cee4] */ r_ecx = R32((u32)(r_eax+0xa9cee4u));
    /* 0079492c: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0079492f: mov ecx, dword ptr [eax + 0xa9cee8] */ r_ecx = R32((u32)(r_eax+0xa9cee8u));
    /* 00794935: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00794938: mov edx, dword ptr [eax + 0xa9ceec] */ r_edx = R32((u32)(r_eax+0xa9ceecu));
    /* 0079493e: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00794941: mov edx, dword ptr [eax + 0xa9cef0] */ r_edx = R32((u32)(r_eax+0xa9cef0u));
    /* 00794947: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0079494a: mov edx, dword ptr [eax + 0xa9cef4] */ r_edx = R32((u32)(r_eax+0xa9cef4u));
    /* 00794950: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00794953: mov eax, dword ptr [eax + 0xa9cef8] */ r_eax = R32((u32)(r_eax+0xa9cef8u));
    /* 00794959: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0079495c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079495d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079495e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079495f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794960: ret  */ FN_RET(0x007947dc); r_esp += 4; return;
L_00794961:; BB(0x00794961);
    /* 00794961: mov eax, ebx */ r_eax = r_ebx;
    /* 00794963: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00794966: jmp 0x79491a */ goto L_0079491a;
L_00794968:; BB(0x00794968);
    /* 00794968: mov eax, ebx */ r_eax = r_ebx;
    /* 0079496a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079496d: jmp 0x79491a */ goto L_0079491a;
L_0079496f:; BB(0x0079496f);
    /* 0079496f: mov eax, ebx */ r_eax = r_ebx;
    /* 00794971: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00794974: jmp 0x79491a */ goto L_0079491a;
L_00794976:; BB(0x00794976);
    /* 00794976: mov eax, ebx */ r_eax = r_ebx;
    /* 00794978: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0079497b: jmp 0x79491a */ goto L_0079491a;
L_0079497d:; BB(0x0079497d);
    /* 0079497d: mov eax, ebx */ r_eax = r_ebx;
    /* 0079497f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00794982: jmp 0x79491a */ goto L_0079491a;
}

void f_00794984(void) /* sub_794984 */
{
    FN_ENTER(0x00794984);
    /* 00794984: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00794985: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00794986: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0079498a: mov edx, dword ptr [0xa9d4dc] */ r_edx = R32((u32)(0xa9d4dcu));
    /* 00794990: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00794993: jl 0x794998 */ if ((fS!=fO)) goto L_00794998;
L_00794995:; BB(0x00794995);
    /* 00794995: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794996: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794997: ret  */ FN_RET(0x00794984); r_esp += 4; return;
L_00794998:; BB(0x00794998);
    /* 00794998: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079499a:; BB(0x0079499a);
    /* 0079499a: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0079499d: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079499f: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007949a1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007949a3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007949a5: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007949a7: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 007949ab: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007949ad: mov edi, dword ptr [edi + 0xa9cda8] */ r_edi = R32((u32)(r_edi+0xa9cda8u));
    /* 007949b3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007949b5: je 0x794a0e */ if (fZ) goto L_00794a0e;
L_007949b7:; BB(0x007949b7);
    /* 007949b7: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007949bd: je 0x7949c7 */ if (fZ) goto L_007949c7;
L_007949bf:; BB(0x007949bf);
    /* 007949bf: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007949c2: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007949c5: jl 0x79499a */ if ((fS!=fO)) goto L_0079499a;
L_007949c7:; BB(0x007949c7);
    /* 007949c7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007949ca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007949cc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007949ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007949d0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007949d2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007949d4: mov dword ptr [eax*4 + 0xa9cda8], ecx */ W32((u32)(r_eax*4+0xa9cda8u), r_ecx);
    /* 007949db: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007949df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007949e2: mov dword ptr [eax*4 + 0xa9cd9c], ecx */ W32((u32)(r_eax*4+0xa9cd9cu), r_ecx);
    /* 007949e9: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 007949ed: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007949f3: mov dword ptr [eax*4 + 0xa9cda0], ecx */ W32((u32)(r_eax*4+0xa9cda0u), r_ecx);
    /* 007949fa: mov ecx, dword ptr [eax*4 + 0xa9cda4] */ r_ecx = R32((u32)(r_eax*4+0xa9cda4u));
    /* 00794a01: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00794a04: mov dword ptr [eax*4 + 0xa9cda4], ecx */ W32((u32)(r_eax*4+0xa9cda4u), r_ecx);
    /* 00794a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794a0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794a0d: ret  */ FN_RET(0x00794984); r_esp += 4; return;
L_00794a0e:; BB(0x00794a0e);
    /* 00794a0e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00794a12: mov eax, ebp */ r_eax = r_ebp;
    /* 00794a14: mov dword ptr [eax*4 + 0xa9cda8], ecx */ W32((u32)(r_eax*4+0xa9cda8u), r_ecx);
    /* 00794a1b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00794a1f: mov dword ptr [eax*4 + 0xa9cd9c], edx */ W32((u32)(r_eax*4+0xa9cd9cu), r_edx);
    /* 00794a26: mov edx, dword ptr [eax*4 + 0xa9cda4] */ r_edx = R32((u32)(r_eax*4+0xa9cda4u));
    /* 00794a2d: mov dword ptr [eax*4 + 0xa9cda0], ecx */ W32((u32)(r_eax*4+0xa9cda0u), r_ecx);
    /* 00794a34: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00794a37: mov dword ptr [eax*4 + 0xa9cda4], edx */ W32((u32)(r_eax*4+0xa9cda4u), r_edx);
    /* 00794a3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00794a3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00794a40: ret  */ FN_RET(0x00794984); r_esp += 4; return;
}

void f_00794a44(void) /* sub_794A44 */
{
    FN_ENTER(0x00794a44);
    /* 00794a44: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00794a48: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794a4d: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a50: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a52: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x794a57u); f_00843a68();
    /* 00794a57: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00794a5b: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a5e: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a61: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794a63: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a66: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x794a6bu); f_00843a38();
    /* 00794a6b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00794a6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a72: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x794a77u); f_00843980();
    /* 00794a77: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794a79: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x794a7eu); f_00843af8();
    /* 00794a7e: ret  */ FN_RET(0x00794a44); r_esp += 4; return;
}

void f_00794a80(void) /* sub_794A80 */
{
    FN_ENTER(0x00794a80);
    /* 00794a80: mov eax, dword ptr [0xa9d480] */ r_eax = R32((u32)(0xa9d480u));
    /* 00794a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00794a88: call 0x843980 */ r_esp -= 4; W32(r_esp, 0x794a8du); f_00843980();
    /* 00794a8d: push dword ptr [0xa9d474] */ { u32 v = R32((u32)(0xa9d474u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a93: push dword ptr [0xa9d470] */ { u32 v = R32((u32)(0xa9d470u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a99: push dword ptr [0xa9d46c] */ { u32 v = R32((u32)(0xa9d46cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00794a9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794aa1: call 0x843a68 */ r_esp -= 4; W32(r_esp, 0x794aa6u); f_00843a68();
    /* 00794aa6: push dword ptr [0xa9d490] */ { u32 v = R32((u32)(0xa9d490u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794aac: push dword ptr [0xa9d48c] */ { u32 v = R32((u32)(0xa9d48cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00794ab2: push dword ptr [0xa9d488] */ { u32 v = R32((u32)(0xa9d488u)); r_esp -= 4; W32(r_esp, v); }
    /* 00794ab8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794aba: call 0x843a38 */ r_esp -= 4; W32(r_esp, 0x794abfu); f_00843a38();
    /* 00794abf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ac1: call 0x843af8 */ r_esp -= 4; W32(r_esp, 0x794ac6u); f_00843af8();
    /* 00794ac6: ret  */ FN_RET(0x00794a80); r_esp += 4; return;
}

void f_00794ac8(void) /* sub_794AC8 */
{
    FN_ENTER(0x00794ac8);
    /* 00794ac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00794ac9: mov ebp, esp */ r_ebp = r_esp;
    /* 00794acb: mov dword ptr [0xa9cee0], 0 */ W32((u32)(0xa9cee0u), 0x0u);
    /* 00794ad5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00794ad7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00794adc: mov dword ptr [0xa9cee4], 0 */ W32((u32)(0xa9cee4u), 0x0u);
    /* 00794ae6: mov dword ptr [0xa9cf08], eax */ W32((u32)(0xa9cf08u), r_eax);
    /* 00794aeb: mov dword ptr [0xa9cee8], 0 */ W32((u32)(0xa9cee8u), 0x0u);
    /* 00794af5: mov dword ptr [0xa9ceec], 0 */ W32((u32)(0xa9ceecu), 0x0u);
    /* 00794aff: mov dword ptr [0xa9cf04], edx */ W32((u32)(0xa9cf04u), r_edx);
    /* 00794b05: mov dword ptr [0xa9cf34], eax */ W32((u32)(0xa9cf34u), r_eax);
    /* 00794b0a: mov dword ptr [0xa9cef0], 0 */ W32((u32)(0xa9cef0u), 0x0u);
    /* 00794b14: mov dword ptr [0xa9cef4], 0 */ W32((u32)(0xa9cef4u), 0x0u);
    /* 00794b1e: mov dword ptr [0xa9cf30], edx */ W32((u32)(0xa9cf30u), r_edx);
    /* 00794b24: mov dword ptr [0xa9cf60], eax */ W32((u32)(0xa9cf60u), r_eax);
    /* 00794b29: mov dword ptr [0xa9cef8], 0 */ W32((u32)(0xa9cef8u), 0x0u);
    /* 00794b33: mov dword ptr [0xa9cf00], 0 */ W32((u32)(0xa9cf00u), 0x0u);
    /* 00794b3d: mov dword ptr [0xa9cf5c], edx */ W32((u32)(0xa9cf5cu), r_edx);
    /* 00794b43: mov dword ptr [0xa9cefc], 0 */ W32((u32)(0xa9cefcu), 0x0u);
    /* 00794b4d: mov dword ptr [0xa9cf0c], 0 */ W32((u32)(0xa9cf0cu), 0x0u);
    /* 00794b57: mov dword ptr [0xa9cf10], 0 */ W32((u32)(0xa9cf10u), 0x0u);
    /* 00794b61: mov dword ptr [0xa9cf14], 0 */ W32((u32)(0xa9cf14u), 0x0u);
    /* 00794b6b: mov dword ptr [0xa9cf18], 0 */ W32((u32)(0xa9cf18u), 0x0u);
    /* 00794b75: mov dword ptr [0xa9cf1c], 0 */ W32((u32)(0xa9cf1cu), 0x0u);
    /* 00794b7f: mov dword ptr [0xa9cf20], 0 */ W32((u32)(0xa9cf20u), 0x0u);
    /* 00794b89: mov dword ptr [0xa9cf24], 0 */ W32((u32)(0xa9cf24u), 0x0u);
    /* 00794b93: mov dword ptr [0xa9cf2c], 0 */ W32((u32)(0xa9cf2cu), 0x0u);
    /* 00794b9d: mov dword ptr [0xa9cf28], 0 */ W32((u32)(0xa9cf28u), 0x0u);
    /* 00794ba7: mov dword ptr [0xa9cf38], 0 */ W32((u32)(0xa9cf38u), 0x0u);
    /* 00794bb1: mov dword ptr [0xa9cf3c], 0 */ W32((u32)(0xa9cf3cu), 0x0u);
    /* 00794bbb: mov dword ptr [0xa9cf40], 0 */ W32((u32)(0xa9cf40u), 0x0u);
    /* 00794bc5: mov dword ptr [0xa9cf44], 0 */ W32((u32)(0xa9cf44u), 0x0u);
    /* 00794bcf: mov dword ptr [0xa9cf48], 0 */ W32((u32)(0xa9cf48u), 0x0u);
    /* 00794bd9: mov dword ptr [0xa9cf4c], 0 */ W32((u32)(0xa9cf4cu), 0x0u);
    /* 00794be3: mov dword ptr [0xa9cf50], 0 */ W32((u32)(0xa9cf50u), 0x0u);
    /* 00794bed: mov dword ptr [0xa9cf58], 0 */ W32((u32)(0xa9cf58u), 0x0u);
    /* 00794bf7: mov dword ptr [0xa9cf54], 0 */ W32((u32)(0xa9cf54u), 0x0u);
    /* 00794c01: mov dword ptr [0xa9cf8c], eax */ W32((u32)(0xa9cf8cu), r_eax);
    /* 00794c06: mov dword ptr [0xa9cf88], edx */ W32((u32)(0xa9cf88u), r_edx);
    /* 00794c0c: mov dword ptr [0xa9cfb8], eax */ W32((u32)(0xa9cfb8u), r_eax);
    /* 00794c11: mov dword ptr [0xa9cfb4], edx */ W32((u32)(0xa9cfb4u), r_edx);
    /* 00794c17: mov dword ptr [0xa9cfe4], eax */ W32((u32)(0xa9cfe4u), r_eax);
    /* 00794c1c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794c1e: mov dword ptr [0xa9cf64], ecx */ W32((u32)(0xa9cf64u), r_ecx);
    /* 00794c24: mov dword ptr [0xa9cfe0], edx */ W32((u32)(0xa9cfe0u), r_edx);
    /* 00794c2a: mov dword ptr [0xa9d010], eax */ W32((u32)(0xa9d010u), r_eax);
    /* 00794c2f: mov dword ptr [0xa9d00c], edx */ W32((u32)(0xa9d00cu), r_edx);
    /* 00794c35: mov dword ptr [0xa9d03c], eax */ W32((u32)(0xa9d03cu), r_eax);
    /* 00794c3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794c3c: mov dword ptr [0xa9cf68], ecx */ W32((u32)(0xa9cf68u), r_ecx);
    /* 00794c42: mov dword ptr [0xa9d038], edx */ W32((u32)(0xa9d038u), r_edx);
    /* 00794c48: mov dword ptr [0xa9d068], eax */ W32((u32)(0xa9d068u), r_eax);
    /* 00794c4d: mov dword ptr [0xa9d064], edx */ W32((u32)(0xa9d064u), r_edx);
    /* 00794c53: mov dword ptr [0xa9d094], eax */ W32((u32)(0xa9d094u), r_eax);
    /* 00794c58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794c5a: mov dword ptr [0xa9cf6c], ecx */ W32((u32)(0xa9cf6cu), r_ecx);
    /* 00794c60: mov dword ptr [0xa9d090], edx */ W32((u32)(0xa9d090u), r_edx);
    /* 00794c66: mov dword ptr [0xa9d0c0], eax */ W32((u32)(0xa9d0c0u), r_eax);
    /* 00794c6b: mov dword ptr [0xa9d0bc], edx */ W32((u32)(0xa9d0bcu), r_edx);
    /* 00794c71: mov dword ptr [0xa9d0ec], eax */ W32((u32)(0xa9d0ecu), r_eax);
    /* 00794c76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794c78: mov dword ptr [0xa9cf70], ecx */ W32((u32)(0xa9cf70u), r_ecx);
    /* 00794c7e: mov dword ptr [0xa9d0e8], edx */ W32((u32)(0xa9d0e8u), r_edx);
    /* 00794c84: mov dword ptr [0xa9d118], eax */ W32((u32)(0xa9d118u), r_eax);
    /* 00794c89: mov dword ptr [0xa9d114], edx */ W32((u32)(0xa9d114u), r_edx);
    /* 00794c8f: mov dword ptr [0xa9d144], eax */ W32((u32)(0xa9d144u), r_eax);
    /* 00794c94: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794c96: mov dword ptr [0xa9cf74], ecx */ W32((u32)(0xa9cf74u), r_ecx);
    /* 00794c9c: mov dword ptr [0xa9d140], edx */ W32((u32)(0xa9d140u), r_edx);
    /* 00794ca2: mov dword ptr [0xa9d170], eax */ W32((u32)(0xa9d170u), r_eax);
    /* 00794ca7: mov dword ptr [0xa9d16c], edx */ W32((u32)(0xa9d16cu), r_edx);
    /* 00794cad: mov dword ptr [0xa9d19c], eax */ W32((u32)(0xa9d19cu), r_eax);
    /* 00794cb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794cb4: mov dword ptr [0xa9cf78], ecx */ W32((u32)(0xa9cf78u), r_ecx);
    /* 00794cba: mov dword ptr [0xa9d198], edx */ W32((u32)(0xa9d198u), r_edx);
    /* 00794cc0: mov dword ptr [0xa9d1c8], eax */ W32((u32)(0xa9d1c8u), r_eax);
    /* 00794cc5: mov dword ptr [0xa9d1c4], edx */ W32((u32)(0xa9d1c4u), r_edx);
    /* 00794ccb: mov dword ptr [0xa9d1f4], eax */ W32((u32)(0xa9d1f4u), r_eax);
    /* 00794cd0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794cd2: mov dword ptr [0xa9cf7c], ecx */ W32((u32)(0xa9cf7cu), r_ecx);
    /* 00794cd8: mov dword ptr [0xa9d1f0], edx */ W32((u32)(0xa9d1f0u), r_edx);
    /* 00794cde: mov dword ptr [0xa9d220], eax */ W32((u32)(0xa9d220u), r_eax);
    /* 00794ce3: mov dword ptr [0xa9d21c], edx */ W32((u32)(0xa9d21cu), r_edx);
    /* 00794ce9: mov dword ptr [0xa9d24c], eax */ W32((u32)(0xa9d24cu), r_eax);
    /* 00794cee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794cf0: mov dword ptr [0xa9cf84], ecx */ W32((u32)(0xa9cf84u), r_ecx);
    /* 00794cf6: mov dword ptr [0xa9d248], edx */ W32((u32)(0xa9d248u), r_edx);
    /* 00794cfc: mov dword ptr [0xa9d278], eax */ W32((u32)(0xa9d278u), r_eax);
    /* 00794d01: mov dword ptr [0xa9d274], edx */ W32((u32)(0xa9d274u), r_edx);
    /* 00794d07: mov dword ptr [0xa9d2a4], eax */ W32((u32)(0xa9d2a4u), r_eax);
    /* 00794d0c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794d0e: mov dword ptr [0xa9cf80], ecx */ W32((u32)(0xa9cf80u), r_ecx);
    /* 00794d14: mov dword ptr [0xa9d2a0], edx */ W32((u32)(0xa9d2a0u), r_edx);
    /* 00794d1a: mov dword ptr [0xa9d2d0], eax */ W32((u32)(0xa9d2d0u), r_eax);
    /* 00794d1f: mov dword ptr [0xa9d2cc], edx */ W32((u32)(0xa9d2ccu), r_edx);
    /* 00794d25: mov dword ptr [0xa9d2fc], eax */ W32((u32)(0xa9d2fcu), r_eax);
    /* 00794d2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794d2c: mov dword ptr [0xa9cf90], ecx */ W32((u32)(0xa9cf90u), r_ecx);
    /* 00794d32: mov dword ptr [0xa9d2f8], edx */ W32((u32)(0xa9d2f8u), r_edx);
    /* 00794d38: mov dword ptr [0xa9d328], eax */ W32((u32)(0xa9d328u), r_eax);
    /* 00794d3d: mov dword ptr [0xa9d324], edx */ W32((u32)(0xa9d324u), r_edx);
    /* 00794d43: mov dword ptr [0xa9d354], eax */ W32((u32)(0xa9d354u), r_eax);
    /* 00794d48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794d4a: mov dword ptr [0xa9cf94], ecx */ W32((u32)(0xa9cf94u), r_ecx);
    /* 00794d50: mov dword ptr [0xa9d350], edx */ W32((u32)(0xa9d350u), r_edx);
    /* 00794d56: mov dword ptr [0xa9d380], eax */ W32((u32)(0xa9d380u), r_eax);
    /* 00794d5b: mov dword ptr [0xa9d37c], edx */ W32((u32)(0xa9d37cu), r_edx);
    /* 00794d61: mov dword ptr [0xa9d3ac], eax */ W32((u32)(0xa9d3acu), r_eax);
    /* 00794d66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794d68: mov dword ptr [0xa9cf98], ecx */ W32((u32)(0xa9cf98u), r_ecx);
    /* 00794d6e: mov dword ptr [0xa9d3a8], edx */ W32((u32)(0xa9d3a8u), r_edx);
    /* 00794d74: mov dword ptr [0xa9d3d8], eax */ W32((u32)(0xa9d3d8u), r_eax);
    /* 00794d79: mov dword ptr [0xa9d3d4], edx */ W32((u32)(0xa9d3d4u), r_edx);
    /* 00794d7f: mov dword ptr [0xa9d404], eax */ W32((u32)(0xa9d404u), r_eax);
    /* 00794d84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794d86: mov dword ptr [0xa9cf9c], ecx */ W32((u32)(0xa9cf9cu), r_ecx);
    /* 00794d8c: mov dword ptr [0xa9d400], edx */ W32((u32)(0xa9d400u), r_edx);
    /* 00794d92: mov dword ptr [0xa9d430], eax */ W32((u32)(0xa9d430u), r_eax);
    /* 00794d97: mov dword ptr [0xa9d42c], edx */ W32((u32)(0xa9d42cu), r_edx);
    /* 00794d9d: mov dword ptr [0xa9d45c], eax */ W32((u32)(0xa9d45cu), r_eax);
    /* 00794da2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794da4: mov dword ptr [0xa9cfa0], ecx */ W32((u32)(0xa9cfa0u), r_ecx);
    /* 00794daa: mov dword ptr [0xa9d458], edx */ W32((u32)(0xa9d458u), r_edx);
    /* 00794db0: mov dword ptr [0xa9cda8], eax */ W32((u32)(0xa9cda8u), r_eax);
    /* 00794db5: mov dword ptr [0xa9cda4], edx */ W32((u32)(0xa9cda4u), r_edx);
    /* 00794dbb: mov dword ptr [0xa9cdd4], eax */ W32((u32)(0xa9cdd4u), r_eax);
    /* 00794dc0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794dc2: mov dword ptr [0xa9cfa4], ecx */ W32((u32)(0xa9cfa4u), r_ecx);
    /* 00794dc8: mov dword ptr [0xa9cdd0], edx */ W32((u32)(0xa9cdd0u), r_edx);
    /* 00794dce: mov dword ptr [0xa9ce00], eax */ W32((u32)(0xa9ce00u), r_eax);
    /* 00794dd3: mov dword ptr [0xa9cdfc], edx */ W32((u32)(0xa9cdfcu), r_edx);
    /* 00794dd9: mov dword ptr [0xa9ce2c], eax */ W32((u32)(0xa9ce2cu), r_eax);
    /* 00794dde: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794de0: mov dword ptr [0xa9cfa8], ecx */ W32((u32)(0xa9cfa8u), r_ecx);
    /* 00794de6: mov dword ptr [0xa9ce28], edx */ W32((u32)(0xa9ce28u), r_edx);
    /* 00794dec: mov dword ptr [0xa9ce58], eax */ W32((u32)(0xa9ce58u), r_eax);
    /* 00794df1: mov dword ptr [0xa9ce54], edx */ W32((u32)(0xa9ce54u), r_edx);
    /* 00794df7: mov dword ptr [0xa9ce84], eax */ W32((u32)(0xa9ce84u), r_eax);
    /* 00794dfc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794dfe: mov dword ptr [0xa9cfb0], ecx */ W32((u32)(0xa9cfb0u), r_ecx);
    /* 00794e04: mov dword ptr [0xa9ce80], edx */ W32((u32)(0xa9ce80u), r_edx);
    /* 00794e0a: mov dword ptr [0xa9ceb0], eax */ W32((u32)(0xa9ceb0u), r_eax);
    /* 00794e0f: mov dword ptr [0xa9ceac], edx */ W32((u32)(0xa9ceacu), r_edx);
    /* 00794e15: mov dword ptr [0xa9cedc], eax */ W32((u32)(0xa9cedcu), r_eax);
    /* 00794e1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e1c: mov dword ptr [0xa9cfac], ecx */ W32((u32)(0xa9cfacu), r_ecx);
    /* 00794e22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e24: mov dword ptr [0xa9cfbc], ecx */ W32((u32)(0xa9cfbcu), r_ecx);
    /* 00794e2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e2c: mov dword ptr [0xa9cfc0], ecx */ W32((u32)(0xa9cfc0u), r_ecx);
    /* 00794e32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e34: mov dword ptr [0xa9cfc4], ecx */ W32((u32)(0xa9cfc4u), r_ecx);
    /* 00794e3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e3c: mov dword ptr [0xa9cfc8], ecx */ W32((u32)(0xa9cfc8u), r_ecx);
    /* 00794e42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e44: mov dword ptr [0xa9cfcc], ecx */ W32((u32)(0xa9cfccu), r_ecx);
    /* 00794e4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e4c: mov dword ptr [0xa9cfd0], ecx */ W32((u32)(0xa9cfd0u), r_ecx);
    /* 00794e52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e54: mov dword ptr [0xa9cfd4], ecx */ W32((u32)(0xa9cfd4u), r_ecx);
    /* 00794e5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e5c: mov dword ptr [0xa9cfdc], ecx */ W32((u32)(0xa9cfdcu), r_ecx);
    /* 00794e62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e64: mov dword ptr [0xa9cfd8], ecx */ W32((u32)(0xa9cfd8u), r_ecx);
    /* 00794e6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e6c: mov dword ptr [0xa9cfe8], ecx */ W32((u32)(0xa9cfe8u), r_ecx);
    /* 00794e72: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e74: mov dword ptr [0xa9cfec], ecx */ W32((u32)(0xa9cfecu), r_ecx);
    /* 00794e7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e7c: mov dword ptr [0xa9cff0], ecx */ W32((u32)(0xa9cff0u), r_ecx);
    /* 00794e82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e84: mov dword ptr [0xa9cff4], ecx */ W32((u32)(0xa9cff4u), r_ecx);
    /* 00794e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e8c: mov dword ptr [0xa9cff8], ecx */ W32((u32)(0xa9cff8u), r_ecx);
    /* 00794e92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e94: mov dword ptr [0xa9cffc], ecx */ W32((u32)(0xa9cffcu), r_ecx);
    /* 00794e9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794e9c: mov dword ptr [0xa9d000], ecx */ W32((u32)(0xa9d000u), r_ecx);
    /* 00794ea2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ea4: mov dword ptr [0xa9d008], ecx */ W32((u32)(0xa9d008u), r_ecx);
    /* 00794eaa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794eac: mov dword ptr [0xa9d004], ecx */ W32((u32)(0xa9d004u), r_ecx);
    /* 00794eb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794eb4: mov dword ptr [0xa9d014], ecx */ W32((u32)(0xa9d014u), r_ecx);
    /* 00794eba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ebc: mov dword ptr [0xa9d018], ecx */ W32((u32)(0xa9d018u), r_ecx);
    /* 00794ec2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ec4: mov dword ptr [0xa9d01c], ecx */ W32((u32)(0xa9d01cu), r_ecx);
    /* 00794eca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ecc: mov dword ptr [0xa9d020], ecx */ W32((u32)(0xa9d020u), r_ecx);
    /* 00794ed2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ed4: mov dword ptr [0xa9d024], ecx */ W32((u32)(0xa9d024u), r_ecx);
    /* 00794eda: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794edc: mov dword ptr [0xa9d028], ecx */ W32((u32)(0xa9d028u), r_ecx);
    /* 00794ee2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ee4: mov dword ptr [0xa9d02c], ecx */ W32((u32)(0xa9d02cu), r_ecx);
    /* 00794eea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794eec: mov dword ptr [0xa9d034], ecx */ W32((u32)(0xa9d034u), r_ecx);
    /* 00794ef2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ef4: mov dword ptr [0xa9d030], ecx */ W32((u32)(0xa9d030u), r_ecx);
    /* 00794efa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794efc: mov dword ptr [0xa9d040], ecx */ W32((u32)(0xa9d040u), r_ecx);
    /* 00794f02: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f04: mov dword ptr [0xa9d044], ecx */ W32((u32)(0xa9d044u), r_ecx);
    /* 00794f0a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f0c: mov dword ptr [0xa9d048], ecx */ W32((u32)(0xa9d048u), r_ecx);
    /* 00794f12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f14: mov dword ptr [0xa9d04c], ecx */ W32((u32)(0xa9d04cu), r_ecx);
    /* 00794f1a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f1c: mov dword ptr [0xa9d050], ecx */ W32((u32)(0xa9d050u), r_ecx);
    /* 00794f22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f24: mov dword ptr [0xa9d054], ecx */ W32((u32)(0xa9d054u), r_ecx);
    /* 00794f2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f2c: mov dword ptr [0xa9d058], ecx */ W32((u32)(0xa9d058u), r_ecx);
    /* 00794f32: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f34: mov dword ptr [0xa9d060], ecx */ W32((u32)(0xa9d060u), r_ecx);
    /* 00794f3a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f3c: mov dword ptr [0xa9d05c], ecx */ W32((u32)(0xa9d05cu), r_ecx);
    /* 00794f42: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f44: mov dword ptr [0xa9d06c], ecx */ W32((u32)(0xa9d06cu), r_ecx);
    /* 00794f4a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f4c: mov dword ptr [0xa9d070], ecx */ W32((u32)(0xa9d070u), r_ecx);
    /* 00794f52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f54: mov dword ptr [0xa9d074], ecx */ W32((u32)(0xa9d074u), r_ecx);
    /* 00794f5a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f5c: mov dword ptr [0xa9d078], ecx */ W32((u32)(0xa9d078u), r_ecx);
    /* 00794f62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f64: mov dword ptr [0xa9d07c], ecx */ W32((u32)(0xa9d07cu), r_ecx);
    /* 00794f6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f6c: mov dword ptr [0xa9d080], ecx */ W32((u32)(0xa9d080u), r_ecx);
    /* 00794f72: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f74: mov dword ptr [0xa9d084], ecx */ W32((u32)(0xa9d084u), r_ecx);
    /* 00794f7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f7c: mov dword ptr [0xa9d08c], ecx */ W32((u32)(0xa9d08cu), r_ecx);
    /* 00794f82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f84: mov dword ptr [0xa9d088], ecx */ W32((u32)(0xa9d088u), r_ecx);
    /* 00794f8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f8c: mov dword ptr [0xa9d098], ecx */ W32((u32)(0xa9d098u), r_ecx);
    /* 00794f92: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f94: mov dword ptr [0xa9d09c], ecx */ W32((u32)(0xa9d09cu), r_ecx);
    /* 00794f9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794f9c: mov dword ptr [0xa9d0a0], ecx */ W32((u32)(0xa9d0a0u), r_ecx);
    /* 00794fa2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fa4: mov dword ptr [0xa9d0a4], ecx */ W32((u32)(0xa9d0a4u), r_ecx);
    /* 00794faa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fac: mov dword ptr [0xa9d0a8], ecx */ W32((u32)(0xa9d0a8u), r_ecx);
    /* 00794fb2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fb4: mov dword ptr [0xa9d0ac], ecx */ W32((u32)(0xa9d0acu), r_ecx);
    /* 00794fba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fbc: mov dword ptr [0xa9d0b0], ecx */ W32((u32)(0xa9d0b0u), r_ecx);
    /* 00794fc2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fc4: mov dword ptr [0xa9d0b8], ecx */ W32((u32)(0xa9d0b8u), r_ecx);
    /* 00794fca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fcc: mov dword ptr [0xa9d0b4], ecx */ W32((u32)(0xa9d0b4u), r_ecx);
    /* 00794fd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fd4: mov dword ptr [0xa9d0c4], ecx */ W32((u32)(0xa9d0c4u), r_ecx);
    /* 00794fda: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fdc: mov dword ptr [0xa9d0c8], ecx */ W32((u32)(0xa9d0c8u), r_ecx);
    /* 00794fe2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fe4: mov dword ptr [0xa9d0cc], ecx */ W32((u32)(0xa9d0ccu), r_ecx);
    /* 00794fea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794fec: mov dword ptr [0xa9d0d0], ecx */ W32((u32)(0xa9d0d0u), r_ecx);
    /* 00794ff2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ff4: mov dword ptr [0xa9d0d4], ecx */ W32((u32)(0xa9d0d4u), r_ecx);
    /* 00794ffa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00794ffc: mov dword ptr [0xa9d0d8], ecx */ W32((u32)(0xa9d0d8u), r_ecx);
    /* 00795002: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795004: mov dword ptr [0xa9d0dc], ecx */ W32((u32)(0xa9d0dcu), r_ecx);
    /* 0079500a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079500c: mov dword ptr [0xa9d0e4], ecx */ W32((u32)(0xa9d0e4u), r_ecx);
    /* 00795012: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795014: mov dword ptr [0xa9d0e0], ecx */ W32((u32)(0xa9d0e0u), r_ecx);
    /* 0079501a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079501c: mov dword ptr [0xa9d0f0], ecx */ W32((u32)(0xa9d0f0u), r_ecx);
    /* 00795022: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795024: mov dword ptr [0xa9d0f4], ecx */ W32((u32)(0xa9d0f4u), r_ecx);
    /* 0079502a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079502c: mov dword ptr [0xa9d0f8], ecx */ W32((u32)(0xa9d0f8u), r_ecx);
    /* 00795032: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795034: mov dword ptr [0xa9d0fc], ecx */ W32((u32)(0xa9d0fcu), r_ecx);
    /* 0079503a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079503c: mov dword ptr [0xa9d100], ecx */ W32((u32)(0xa9d100u), r_ecx);
    /* 00795042: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795044: mov dword ptr [0xa9d104], ecx */ W32((u32)(0xa9d104u), r_ecx);
    /* 0079504a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079504c: mov dword ptr [0xa9d108], ecx */ W32((u32)(0xa9d108u), r_ecx);
    /* 00795052: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795054: mov dword ptr [0xa9d110], ecx */ W32((u32)(0xa9d110u), r_ecx);
    /* 0079505a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079505c: mov dword ptr [0xa9d10c], ecx */ W32((u32)(0xa9d10cu), r_ecx);
    /* 00795062: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795064: mov dword ptr [0xa9d11c], ecx */ W32((u32)(0xa9d11cu), r_ecx);
    /* 0079506a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079506c: mov dword ptr [0xa9d120], ecx */ W32((u32)(0xa9d120u), r_ecx);
    /* 00795072: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795074: mov dword ptr [0xa9d124], ecx */ W32((u32)(0xa9d124u), r_ecx);
    /* 0079507a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079507c: mov dword ptr [0xa9d128], ecx */ W32((u32)(0xa9d128u), r_ecx);
    /* 00795082: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795084: mov dword ptr [0xa9d12c], ecx */ W32((u32)(0xa9d12cu), r_ecx);
    /* 0079508a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079508c: mov dword ptr [0xa9d130], ecx */ W32((u32)(0xa9d130u), r_ecx);
    /* 00795092: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795094: mov dword ptr [0xa9d134], ecx */ W32((u32)(0xa9d134u), r_ecx);
    /* 0079509a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079509c: mov dword ptr [0xa9d13c], ecx */ W32((u32)(0xa9d13cu), r_ecx);
    /* 007950a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950a4: mov dword ptr [0xa9d138], ecx */ W32((u32)(0xa9d138u), r_ecx);
    /* 007950aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950ac: mov dword ptr [0xa9d148], ecx */ W32((u32)(0xa9d148u), r_ecx);
    /* 007950b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950b4: mov dword ptr [0xa9d14c], ecx */ W32((u32)(0xa9d14cu), r_ecx);
    /* 007950ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950bc: mov dword ptr [0xa9d150], ecx */ W32((u32)(0xa9d150u), r_ecx);
    /* 007950c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950c4: mov dword ptr [0xa9d154], ecx */ W32((u32)(0xa9d154u), r_ecx);
    /* 007950ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950cc: mov dword ptr [0xa9d158], ecx */ W32((u32)(0xa9d158u), r_ecx);
    /* 007950d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950d4: mov dword ptr [0xa9d15c], ecx */ W32((u32)(0xa9d15cu), r_ecx);
    /* 007950da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950dc: mov dword ptr [0xa9d160], ecx */ W32((u32)(0xa9d160u), r_ecx);
    /* 007950e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950e4: mov dword ptr [0xa9d168], ecx */ W32((u32)(0xa9d168u), r_ecx);
    /* 007950ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950ec: mov dword ptr [0xa9d164], ecx */ W32((u32)(0xa9d164u), r_ecx);
    /* 007950f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950f4: mov dword ptr [0xa9d174], ecx */ W32((u32)(0xa9d174u), r_ecx);
    /* 007950fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007950fc: mov dword ptr [0xa9d178], ecx */ W32((u32)(0xa9d178u), r_ecx);
    /* 00795102: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795104: mov dword ptr [0xa9d17c], ecx */ W32((u32)(0xa9d17cu), r_ecx);
    /* 0079510a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079510c: mov dword ptr [0xa9d180], ecx */ W32((u32)(0xa9d180u), r_ecx);
    /* 00795112: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795114: mov dword ptr [0xa9d184], ecx */ W32((u32)(0xa9d184u), r_ecx);
    /* 0079511a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079511c: mov dword ptr [0xa9d188], ecx */ W32((u32)(0xa9d188u), r_ecx);
    /* 00795122: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795124: mov dword ptr [0xa9d18c], ecx */ W32((u32)(0xa9d18cu), r_ecx);
    /* 0079512a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079512c: mov dword ptr [0xa9d194], ecx */ W32((u32)(0xa9d194u), r_ecx);
    /* 00795132: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795134: mov dword ptr [0xa9d190], ecx */ W32((u32)(0xa9d190u), r_ecx);
    /* 0079513a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079513c: mov dword ptr [0xa9d1a0], ecx */ W32((u32)(0xa9d1a0u), r_ecx);
    /* 00795142: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795144: mov dword ptr [0xa9d1a4], ecx */ W32((u32)(0xa9d1a4u), r_ecx);
    /* 0079514a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079514c: mov dword ptr [0xa9d1a8], ecx */ W32((u32)(0xa9d1a8u), r_ecx);
    /* 00795152: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795154: mov dword ptr [0xa9d1ac], ecx */ W32((u32)(0xa9d1acu), r_ecx);
    /* 0079515a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079515c: mov dword ptr [0xa9d1b0], ecx */ W32((u32)(0xa9d1b0u), r_ecx);
    /* 00795162: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795164: mov dword ptr [0xa9d1b4], ecx */ W32((u32)(0xa9d1b4u), r_ecx);
    /* 0079516a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079516c: mov dword ptr [0xa9d1b8], ecx */ W32((u32)(0xa9d1b8u), r_ecx);
    /* 00795172: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795174: mov dword ptr [0xa9d1c0], ecx */ W32((u32)(0xa9d1c0u), r_ecx);
    /* 0079517a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079517c: mov dword ptr [0xa9d1bc], ecx */ W32((u32)(0xa9d1bcu), r_ecx);
    /* 00795182: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795184: mov dword ptr [0xa9d1cc], ecx */ W32((u32)(0xa9d1ccu), r_ecx);
    /* 0079518a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079518c: mov dword ptr [0xa9d1d0], ecx */ W32((u32)(0xa9d1d0u), r_ecx);
    /* 00795192: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795194: mov dword ptr [0xa9d1d4], ecx */ W32((u32)(0xa9d1d4u), r_ecx);
    /* 0079519a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079519c: mov dword ptr [0xa9d1d8], ecx */ W32((u32)(0xa9d1d8u), r_ecx);
    /* 007951a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951a4: mov dword ptr [0xa9d1dc], ecx */ W32((u32)(0xa9d1dcu), r_ecx);
    /* 007951aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951ac: mov dword ptr [0xa9d1e0], ecx */ W32((u32)(0xa9d1e0u), r_ecx);
    /* 007951b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951b4: mov dword ptr [0xa9d1e4], ecx */ W32((u32)(0xa9d1e4u), r_ecx);
    /* 007951ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951bc: mov dword ptr [0xa9d1ec], ecx */ W32((u32)(0xa9d1ecu), r_ecx);
    /* 007951c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951c4: mov dword ptr [0xa9d1e8], ecx */ W32((u32)(0xa9d1e8u), r_ecx);
    /* 007951ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951cc: mov dword ptr [0xa9d1f8], ecx */ W32((u32)(0xa9d1f8u), r_ecx);
    /* 007951d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951d4: mov dword ptr [0xa9d1fc], ecx */ W32((u32)(0xa9d1fcu), r_ecx);
    /* 007951da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951dc: mov dword ptr [0xa9d200], ecx */ W32((u32)(0xa9d200u), r_ecx);
    /* 007951e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951e4: mov dword ptr [0xa9d204], ecx */ W32((u32)(0xa9d204u), r_ecx);
    /* 007951ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951ec: mov dword ptr [0xa9d208], ecx */ W32((u32)(0xa9d208u), r_ecx);
    /* 007951f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951f4: mov dword ptr [0xa9d20c], ecx */ W32((u32)(0xa9d20cu), r_ecx);
    /* 007951fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007951fc: mov dword ptr [0xa9d210], ecx */ W32((u32)(0xa9d210u), r_ecx);
    /* 00795202: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795204: mov dword ptr [0xa9d218], ecx */ W32((u32)(0xa9d218u), r_ecx);
    /* 0079520a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079520c: mov dword ptr [0xa9d214], ecx */ W32((u32)(0xa9d214u), r_ecx);
    /* 00795212: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795214: mov dword ptr [0xa9d224], ecx */ W32((u32)(0xa9d224u), r_ecx);
    /* 0079521a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079521c: mov dword ptr [0xa9d228], ecx */ W32((u32)(0xa9d228u), r_ecx);
    /* 00795222: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795224: mov dword ptr [0xa9d22c], ecx */ W32((u32)(0xa9d22cu), r_ecx);
    /* 0079522a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079522c: mov dword ptr [0xa9d230], ecx */ W32((u32)(0xa9d230u), r_ecx);
    /* 00795232: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795234: mov dword ptr [0xa9d234], ecx */ W32((u32)(0xa9d234u), r_ecx);
    /* 0079523a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079523c: mov dword ptr [0xa9d238], ecx */ W32((u32)(0xa9d238u), r_ecx);
    /* 00795242: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795244: mov dword ptr [0xa9d23c], ecx */ W32((u32)(0xa9d23cu), r_ecx);
    /* 0079524a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079524c: mov dword ptr [0xa9d244], ecx */ W32((u32)(0xa9d244u), r_ecx);
    /* 00795252: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795254: mov dword ptr [0xa9d240], ecx */ W32((u32)(0xa9d240u), r_ecx);
    /* 0079525a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079525c: mov dword ptr [0xa9d250], ecx */ W32((u32)(0xa9d250u), r_ecx);
    /* 00795262: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795264: mov dword ptr [0xa9d254], ecx */ W32((u32)(0xa9d254u), r_ecx);
    /* 0079526a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079526c: mov dword ptr [0xa9d258], ecx */ W32((u32)(0xa9d258u), r_ecx);
    /* 00795272: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795274: mov dword ptr [0xa9d25c], ecx */ W32((u32)(0xa9d25cu), r_ecx);
    /* 0079527a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079527c: mov dword ptr [0xa9d260], ecx */ W32((u32)(0xa9d260u), r_ecx);
    /* 00795282: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795284: mov dword ptr [0xa9d264], ecx */ W32((u32)(0xa9d264u), r_ecx);
    /* 0079528a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079528c: mov dword ptr [0xa9d268], ecx */ W32((u32)(0xa9d268u), r_ecx);
    /* 00795292: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795294: mov dword ptr [0xa9d270], ecx */ W32((u32)(0xa9d270u), r_ecx);
    /* 0079529a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079529c: mov dword ptr [0xa9d26c], ecx */ W32((u32)(0xa9d26cu), r_ecx);
    /* 007952a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952a4: mov dword ptr [0xa9d27c], ecx */ W32((u32)(0xa9d27cu), r_ecx);
    /* 007952aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952ac: mov dword ptr [0xa9d280], ecx */ W32((u32)(0xa9d280u), r_ecx);
    /* 007952b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952b4: mov dword ptr [0xa9d284], ecx */ W32((u32)(0xa9d284u), r_ecx);
    /* 007952ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952bc: mov dword ptr [0xa9d288], ecx */ W32((u32)(0xa9d288u), r_ecx);
    /* 007952c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952c4: mov dword ptr [0xa9d28c], ecx */ W32((u32)(0xa9d28cu), r_ecx);
    /* 007952ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952cc: mov dword ptr [0xa9d290], ecx */ W32((u32)(0xa9d290u), r_ecx);
    /* 007952d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952d4: mov dword ptr [0xa9d294], ecx */ W32((u32)(0xa9d294u), r_ecx);
    /* 007952da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952dc: mov dword ptr [0xa9d29c], ecx */ W32((u32)(0xa9d29cu), r_ecx);
    /* 007952e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952e4: mov dword ptr [0xa9d298], ecx */ W32((u32)(0xa9d298u), r_ecx);
    /* 007952ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952ec: mov dword ptr [0xa9d2a8], ecx */ W32((u32)(0xa9d2a8u), r_ecx);
    /* 007952f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952f4: mov dword ptr [0xa9d2ac], ecx */ W32((u32)(0xa9d2acu), r_ecx);
    /* 007952fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007952fc: mov dword ptr [0xa9d2b0], ecx */ W32((u32)(0xa9d2b0u), r_ecx);
    /* 00795302: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795304: mov dword ptr [0xa9d2b4], ecx */ W32((u32)(0xa9d2b4u), r_ecx);
    /* 0079530a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079530c: mov dword ptr [0xa9d2b8], ecx */ W32((u32)(0xa9d2b8u), r_ecx);
    /* 00795312: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795314: mov dword ptr [0xa9d2bc], ecx */ W32((u32)(0xa9d2bcu), r_ecx);
    /* 0079531a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079531c: mov dword ptr [0xa9d2c0], ecx */ W32((u32)(0xa9d2c0u), r_ecx);
    /* 00795322: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795324: mov dword ptr [0xa9d2c8], ecx */ W32((u32)(0xa9d2c8u), r_ecx);
    /* 0079532a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079532c: mov dword ptr [0xa9d2c4], ecx */ W32((u32)(0xa9d2c4u), r_ecx);
    /* 00795332: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795334: mov dword ptr [0xa9d2d4], ecx */ W32((u32)(0xa9d2d4u), r_ecx);
    /* 0079533a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079533c: mov dword ptr [0xa9d2d8], ecx */ W32((u32)(0xa9d2d8u), r_ecx);
    /* 00795342: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795344: mov dword ptr [0xa9d2dc], ecx */ W32((u32)(0xa9d2dcu), r_ecx);
    /* 0079534a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079534c: mov dword ptr [0xa9d2e0], ecx */ W32((u32)(0xa9d2e0u), r_ecx);
    /* 00795352: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795354: mov dword ptr [0xa9d2e4], ecx */ W32((u32)(0xa9d2e4u), r_ecx);
    /* 0079535a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079535c: mov dword ptr [0xa9d2e8], ecx */ W32((u32)(0xa9d2e8u), r_ecx);
    /* 00795362: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795364: mov dword ptr [0xa9d2ec], ecx */ W32((u32)(0xa9d2ecu), r_ecx);
    /* 0079536a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079536c: mov dword ptr [0xa9d2f4], ecx */ W32((u32)(0xa9d2f4u), r_ecx);
    /* 00795372: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795374: mov dword ptr [0xa9d2f0], ecx */ W32((u32)(0xa9d2f0u), r_ecx);
    /* 0079537a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079537c: mov dword ptr [0xa9d300], ecx */ W32((u32)(0xa9d300u), r_ecx);
    /* 00795382: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795384: mov dword ptr [0xa9d304], ecx */ W32((u32)(0xa9d304u), r_ecx);
    /* 0079538a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079538c: mov dword ptr [0xa9d308], ecx */ W32((u32)(0xa9d308u), r_ecx);
    /* 00795392: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795394: mov dword ptr [0xa9d30c], ecx */ W32((u32)(0xa9d30cu), r_ecx);
    /* 0079539a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079539c: mov dword ptr [0xa9d310], ecx */ W32((u32)(0xa9d310u), r_ecx);
    /* 007953a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953a4: mov dword ptr [0xa9d314], ecx */ W32((u32)(0xa9d314u), r_ecx);
    /* 007953aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953ac: mov dword ptr [0xa9d318], ecx */ W32((u32)(0xa9d318u), r_ecx);
    /* 007953b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953b4: mov dword ptr [0xa9d320], ecx */ W32((u32)(0xa9d320u), r_ecx);
    /* 007953ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953bc: mov dword ptr [0xa9d31c], ecx */ W32((u32)(0xa9d31cu), r_ecx);
    /* 007953c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953c4: mov dword ptr [0xa9d32c], ecx */ W32((u32)(0xa9d32cu), r_ecx);
    /* 007953ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953cc: mov dword ptr [0xa9d330], ecx */ W32((u32)(0xa9d330u), r_ecx);
    /* 007953d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953d4: mov dword ptr [0xa9d334], ecx */ W32((u32)(0xa9d334u), r_ecx);
    /* 007953da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953dc: mov dword ptr [0xa9d338], ecx */ W32((u32)(0xa9d338u), r_ecx);
    /* 007953e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953e4: mov dword ptr [0xa9d33c], ecx */ W32((u32)(0xa9d33cu), r_ecx);
    /* 007953ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953ec: mov dword ptr [0xa9d340], ecx */ W32((u32)(0xa9d340u), r_ecx);
    /* 007953f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953f4: mov dword ptr [0xa9d344], ecx */ W32((u32)(0xa9d344u), r_ecx);
    /* 007953fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007953fc: mov dword ptr [0xa9d34c], ecx */ W32((u32)(0xa9d34cu), r_ecx);
    /* 00795402: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795404: mov dword ptr [0xa9d348], ecx */ W32((u32)(0xa9d348u), r_ecx);
    /* 0079540a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079540c: mov dword ptr [0xa9d358], ecx */ W32((u32)(0xa9d358u), r_ecx);
    /* 00795412: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795414: mov dword ptr [0xa9d35c], ecx */ W32((u32)(0xa9d35cu), r_ecx);
    /* 0079541a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079541c: mov dword ptr [0xa9d360], ecx */ W32((u32)(0xa9d360u), r_ecx);
    /* 00795422: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795424: mov dword ptr [0xa9d364], ecx */ W32((u32)(0xa9d364u), r_ecx);
    /* 0079542a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079542c: mov dword ptr [0xa9d368], ecx */ W32((u32)(0xa9d368u), r_ecx);
    /* 00795432: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795434: mov dword ptr [0xa9d36c], ecx */ W32((u32)(0xa9d36cu), r_ecx);
    /* 0079543a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079543c: mov dword ptr [0xa9d370], ecx */ W32((u32)(0xa9d370u), r_ecx);
    /* 00795442: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795444: mov dword ptr [0xa9d378], ecx */ W32((u32)(0xa9d378u), r_ecx);
    /* 0079544a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079544c: mov dword ptr [0xa9d374], ecx */ W32((u32)(0xa9d374u), r_ecx);
    /* 00795452: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795454: mov dword ptr [0xa9d384], ecx */ W32((u32)(0xa9d384u), r_ecx);
    /* 0079545a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079545c: mov dword ptr [0xa9d388], ecx */ W32((u32)(0xa9d388u), r_ecx);
    /* 00795462: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795464: mov dword ptr [0xa9d38c], ecx */ W32((u32)(0xa9d38cu), r_ecx);
    /* 0079546a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079546c: mov dword ptr [0xa9d390], ecx */ W32((u32)(0xa9d390u), r_ecx);
    /* 00795472: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795474: mov dword ptr [0xa9d394], ecx */ W32((u32)(0xa9d394u), r_ecx);
    /* 0079547a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079547c: mov dword ptr [0xa9d398], ecx */ W32((u32)(0xa9d398u), r_ecx);
    /* 00795482: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795484: mov dword ptr [0xa9d39c], ecx */ W32((u32)(0xa9d39cu), r_ecx);
    /* 0079548a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079548c: mov dword ptr [0xa9d3a4], ecx */ W32((u32)(0xa9d3a4u), r_ecx);
    /* 00795492: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795494: mov dword ptr [0xa9d3a0], ecx */ W32((u32)(0xa9d3a0u), r_ecx);
    /* 0079549a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079549c: mov dword ptr [0xa9d3b0], ecx */ W32((u32)(0xa9d3b0u), r_ecx);
    /* 007954a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954a4: mov dword ptr [0xa9d3b4], ecx */ W32((u32)(0xa9d3b4u), r_ecx);
    /* 007954aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954ac: mov dword ptr [0xa9d3b8], ecx */ W32((u32)(0xa9d3b8u), r_ecx);
    /* 007954b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954b4: mov dword ptr [0xa9d3bc], ecx */ W32((u32)(0xa9d3bcu), r_ecx);
    /* 007954ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954bc: mov dword ptr [0xa9d3c0], ecx */ W32((u32)(0xa9d3c0u), r_ecx);
    /* 007954c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954c4: mov dword ptr [0xa9d3c4], ecx */ W32((u32)(0xa9d3c4u), r_ecx);
    /* 007954ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954cc: mov dword ptr [0xa9d3c8], ecx */ W32((u32)(0xa9d3c8u), r_ecx);
    /* 007954d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954d4: mov dword ptr [0xa9d3d0], ecx */ W32((u32)(0xa9d3d0u), r_ecx);
    /* 007954da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954dc: mov dword ptr [0xa9d3cc], ecx */ W32((u32)(0xa9d3ccu), r_ecx);
    /* 007954e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954e4: mov dword ptr [0xa9d3dc], ecx */ W32((u32)(0xa9d3dcu), r_ecx);
    /* 007954ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954ec: mov dword ptr [0xa9d3e0], ecx */ W32((u32)(0xa9d3e0u), r_ecx);
    /* 007954f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954f4: mov dword ptr [0xa9d3e4], ecx */ W32((u32)(0xa9d3e4u), r_ecx);
    /* 007954fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007954fc: mov dword ptr [0xa9d3e8], ecx */ W32((u32)(0xa9d3e8u), r_ecx);
    /* 00795502: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795504: mov dword ptr [0xa9d3ec], ecx */ W32((u32)(0xa9d3ecu), r_ecx);
    /* 0079550a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079550c: mov dword ptr [0xa9d3f0], ecx */ W32((u32)(0xa9d3f0u), r_ecx);
    /* 00795512: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795514: mov dword ptr [0xa9d3f4], ecx */ W32((u32)(0xa9d3f4u), r_ecx);
    /* 0079551a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079551c: mov dword ptr [0xa9d3fc], ecx */ W32((u32)(0xa9d3fcu), r_ecx);
    /* 00795522: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795524: mov dword ptr [0xa9d3f8], ecx */ W32((u32)(0xa9d3f8u), r_ecx);
    /* 0079552a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079552c: mov dword ptr [0xa9d408], ecx */ W32((u32)(0xa9d408u), r_ecx);
    /* 00795532: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795534: mov dword ptr [0xa9d40c], ecx */ W32((u32)(0xa9d40cu), r_ecx);
    /* 0079553a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079553c: mov dword ptr [0xa9d410], ecx */ W32((u32)(0xa9d410u), r_ecx);
    /* 00795542: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795544: mov dword ptr [0xa9d414], ecx */ W32((u32)(0xa9d414u), r_ecx);
    /* 0079554a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079554c: mov dword ptr [0xa9d418], ecx */ W32((u32)(0xa9d418u), r_ecx);
    /* 00795552: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795554: mov dword ptr [0xa9d41c], ecx */ W32((u32)(0xa9d41cu), r_ecx);
    /* 0079555a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079555c: mov dword ptr [0xa9d420], ecx */ W32((u32)(0xa9d420u), r_ecx);
    /* 00795562: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795564: mov dword ptr [0xa9d428], ecx */ W32((u32)(0xa9d428u), r_ecx);
    /* 0079556a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079556c: mov dword ptr [0xa9d424], ecx */ W32((u32)(0xa9d424u), r_ecx);
    /* 00795572: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795574: mov dword ptr [0xa9d434], ecx */ W32((u32)(0xa9d434u), r_ecx);
    /* 0079557a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079557c: mov dword ptr [0xa9d438], ecx */ W32((u32)(0xa9d438u), r_ecx);
    /* 00795582: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795584: mov dword ptr [0xa9d43c], ecx */ W32((u32)(0xa9d43cu), r_ecx);
    /* 0079558a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079558c: mov dword ptr [0xa9d440], ecx */ W32((u32)(0xa9d440u), r_ecx);
    /* 00795592: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795594: mov dword ptr [0xa9d444], ecx */ W32((u32)(0xa9d444u), r_ecx);
    /* 0079559a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079559c: mov dword ptr [0xa9d448], ecx */ W32((u32)(0xa9d448u), r_ecx);
    /* 007955a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955a4: mov dword ptr [0xa9d44c], ecx */ W32((u32)(0xa9d44cu), r_ecx);
    /* 007955aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955ac: mov dword ptr [0xa9d454], ecx */ W32((u32)(0xa9d454u), r_ecx);
    /* 007955b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955b4: mov dword ptr [0xa9d450], ecx */ W32((u32)(0xa9d450u), r_ecx);
    /* 007955ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955bc: mov dword ptr [0xa9cd80], ecx */ W32((u32)(0xa9cd80u), r_ecx);
    /* 007955c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955c4: mov dword ptr [0xa9cd84], ecx */ W32((u32)(0xa9cd84u), r_ecx);
    /* 007955ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955cc: mov dword ptr [0xa9cd88], ecx */ W32((u32)(0xa9cd88u), r_ecx);
    /* 007955d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955d4: mov dword ptr [0xa9cd8c], ecx */ W32((u32)(0xa9cd8cu), r_ecx);
    /* 007955da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955dc: mov dword ptr [0xa9cd90], ecx */ W32((u32)(0xa9cd90u), r_ecx);
    /* 007955e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955e4: mov dword ptr [0xa9cd94], ecx */ W32((u32)(0xa9cd94u), r_ecx);
    /* 007955ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955ec: mov dword ptr [0xa9cd98], ecx */ W32((u32)(0xa9cd98u), r_ecx);
    /* 007955f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955f4: mov dword ptr [0xa9cda0], ecx */ W32((u32)(0xa9cda0u), r_ecx);
    /* 007955fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007955fc: mov dword ptr [0xa9cd9c], ecx */ W32((u32)(0xa9cd9cu), r_ecx);
    /* 00795602: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795604: mov dword ptr [0xa9cdac], ecx */ W32((u32)(0xa9cdacu), r_ecx);
    /* 0079560a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079560c: mov dword ptr [0xa9cdb0], ecx */ W32((u32)(0xa9cdb0u), r_ecx);
    /* 00795612: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795614: mov dword ptr [0xa9cdb4], ecx */ W32((u32)(0xa9cdb4u), r_ecx);
    /* 0079561a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079561c: mov dword ptr [0xa9cdb8], ecx */ W32((u32)(0xa9cdb8u), r_ecx);
    /* 00795622: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795624: mov dword ptr [0xa9cdbc], ecx */ W32((u32)(0xa9cdbcu), r_ecx);
    /* 0079562a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079562c: mov dword ptr [0xa9cdc0], ecx */ W32((u32)(0xa9cdc0u), r_ecx);
    /* 00795632: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795634: mov dword ptr [0xa9cdc4], ecx */ W32((u32)(0xa9cdc4u), r_ecx);
    /* 0079563a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079563c: mov dword ptr [0xa9cdcc], ecx */ W32((u32)(0xa9cdccu), r_ecx);
    /* 00795642: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795644: mov dword ptr [0xa9cdc8], ecx */ W32((u32)(0xa9cdc8u), r_ecx);
    /* 0079564a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079564c: mov dword ptr [0xa9cdd8], ecx */ W32((u32)(0xa9cdd8u), r_ecx);
    /* 00795652: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795654: mov dword ptr [0xa9cddc], ecx */ W32((u32)(0xa9cddcu), r_ecx);
    /* 0079565a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079565c: mov dword ptr [0xa9cde0], ecx */ W32((u32)(0xa9cde0u), r_ecx);
    /* 00795662: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795664: mov dword ptr [0xa9cde4], ecx */ W32((u32)(0xa9cde4u), r_ecx);
    /* 0079566a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079566c: mov dword ptr [0xa9cde8], ecx */ W32((u32)(0xa9cde8u), r_ecx);
    /* 00795672: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795674: mov dword ptr [0xa9cdec], ecx */ W32((u32)(0xa9cdecu), r_ecx);
    /* 0079567a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079567c: mov dword ptr [0xa9cdf0], ecx */ W32((u32)(0xa9cdf0u), r_ecx);
    /* 00795682: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795684: mov dword ptr [0xa9cdf8], ecx */ W32((u32)(0xa9cdf8u), r_ecx);
    /* 0079568a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079568c: mov dword ptr [0xa9cdf4], ecx */ W32((u32)(0xa9cdf4u), r_ecx);
    /* 00795692: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795694: mov dword ptr [0xa9ce04], ecx */ W32((u32)(0xa9ce04u), r_ecx);
    /* 0079569a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079569c: mov dword ptr [0xa9ce08], ecx */ W32((u32)(0xa9ce08u), r_ecx);
    /* 007956a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956a4: mov dword ptr [0xa9ce0c], ecx */ W32((u32)(0xa9ce0cu), r_ecx);
    /* 007956aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956ac: mov dword ptr [0xa9ce10], ecx */ W32((u32)(0xa9ce10u), r_ecx);
    /* 007956b2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956b4: mov dword ptr [0xa9ce14], ecx */ W32((u32)(0xa9ce14u), r_ecx);
    /* 007956ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956bc: mov dword ptr [0xa9ce18], ecx */ W32((u32)(0xa9ce18u), r_ecx);
    /* 007956c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956c4: mov dword ptr [0xa9ce1c], ecx */ W32((u32)(0xa9ce1cu), r_ecx);
    /* 007956ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956cc: mov dword ptr [0xa9ce24], ecx */ W32((u32)(0xa9ce24u), r_ecx);
    /* 007956d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956d4: mov dword ptr [0xa9ce20], ecx */ W32((u32)(0xa9ce20u), r_ecx);
    /* 007956da: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956dc: mov dword ptr [0xa9ce30], ecx */ W32((u32)(0xa9ce30u), r_ecx);
    /* 007956e2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956e4: mov dword ptr [0xa9ce34], ecx */ W32((u32)(0xa9ce34u), r_ecx);
    /* 007956ea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956ec: mov dword ptr [0xa9ce38], ecx */ W32((u32)(0xa9ce38u), r_ecx);
    /* 007956f2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956f4: mov dword ptr [0xa9ce3c], ecx */ W32((u32)(0xa9ce3cu), r_ecx);
    /* 007956fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007956fc: mov dword ptr [0xa9ce40], ecx */ W32((u32)(0xa9ce40u), r_ecx);
    /* 00795702: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795704: mov dword ptr [0xa9ce44], ecx */ W32((u32)(0xa9ce44u), r_ecx);
    /* 0079570a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079570c: mov dword ptr [0xa9ce48], ecx */ W32((u32)(0xa9ce48u), r_ecx);
    /* 00795712: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795714: mov dword ptr [0xa9ce50], ecx */ W32((u32)(0xa9ce50u), r_ecx);
    /* 0079571a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079571c: mov dword ptr [0xa9ce4c], ecx */ W32((u32)(0xa9ce4cu), r_ecx);
    /* 00795722: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795724: mov dword ptr [0xa9ce5c], ecx */ W32((u32)(0xa9ce5cu), r_ecx);
    /* 0079572a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079572c: mov dword ptr [0xa9ce60], ecx */ W32((u32)(0xa9ce60u), r_ecx);
    /* 00795732: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795734: mov dword ptr [0xa9ce64], ecx */ W32((u32)(0xa9ce64u), r_ecx);
    /* 0079573a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079573c: mov dword ptr [0xa9ce68], ecx */ W32((u32)(0xa9ce68u), r_ecx);
    /* 00795742: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795744: mov dword ptr [0xa9ce6c], ecx */ W32((u32)(0xa9ce6cu), r_ecx);
    /* 0079574a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079574c: mov dword ptr [0xa9ce70], ecx */ W32((u32)(0xa9ce70u), r_ecx);
    /* 00795752: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795754: mov dword ptr [0xa9ce74], ecx */ W32((u32)(0xa9ce74u), r_ecx);
    /* 0079575a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079575c: mov dword ptr [0xa9ce7c], ecx */ W32((u32)(0xa9ce7cu), r_ecx);
    /* 00795762: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795764: mov dword ptr [0xa9ce78], ecx */ W32((u32)(0xa9ce78u), r_ecx);
    /* 0079576a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079576c: mov dword ptr [0xa9ce88], ecx */ W32((u32)(0xa9ce88u), r_ecx);
    /* 00795772: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795774: mov dword ptr [0xa9ce8c], ecx */ W32((u32)(0xa9ce8cu), r_ecx);
    /* 0079577a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079577c: mov dword ptr [0xa9ce90], ecx */ W32((u32)(0xa9ce90u), r_ecx);
    /* 00795782: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795784: mov dword ptr [0xa9ce94], ecx */ W32((u32)(0xa9ce94u), r_ecx);
    /* 0079578a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079578c: mov dword ptr [0xa9ce98], ecx */ W32((u32)(0xa9ce98u), r_ecx);
    /* 00795792: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00795794: mov dword ptr [0xa9ce9c], ecx */ W32((u32)(0xa9ce9cu), r_ecx);
    /* 0079579a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0079579c: mov dword ptr [0xa9cea0], ecx */ W32((u32)(0xa9cea0u), r_ecx);
    /* 007957a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007957a4: mov dword ptr [0xa9cea8], ecx */ W32((u32)(0xa9cea8u), r_ecx);
    /* 007957aa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007957ac: mov dword ptr [0xa9cea4], ecx */ W32((u32)(0xa9cea4u), r_ecx);
    /* 007957b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957b4: mov dword ptr [0xa9ceb4], eax */ W32((u32)(0xa9ceb4u), r_eax);
    /* 007957b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957bb: mov dword ptr [0xa9ceb8], eax */ W32((u32)(0xa9ceb8u), r_eax);
    /* 007957c0: mov dword ptr [0xa9ced8], edx */ W32((u32)(0xa9ced8u), r_edx);
    /* 007957c6: mov dword ptr [0xa9d4dc], edx */ W32((u32)(0xa9d4dcu), r_edx);
    /* 007957cc: mov dword ptr [0xa9d4e0], edx */ W32((u32)(0xa9d4e0u), r_edx);
    /* 007957d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957d4: mov dword ptr [0xa9cebc], eax */ W32((u32)(0xa9cebcu), r_eax);
    /* 007957d9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007957db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957dd: mov dword ptr [0xa9cec0], ecx */ W32((u32)(0xa9cec0u), r_ecx);
    /* 007957e3: mov dword ptr [0xa9cec4], eax */ W32((u32)(0xa9cec4u), r_eax);
    /* 007957e8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957ea: mov dword ptr [0xa9cec8], eax */ W32((u32)(0xa9cec8u), r_eax);
    /* 007957ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957f1: mov dword ptr [0xa9cecc], eax */ W32((u32)(0xa9ceccu), r_eax);
    /* 007957f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007957f8: mov dword ptr [0xa9ced4], eax */ W32((u32)(0xa9ced4u), r_eax);
    /* 007957fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007957ff: mov dword ptr [0xa9ced0], eax */ W32((u32)(0xa9ced0u), r_eax);
    /* 00795804: mov esp, ebp */ r_esp = r_ebp;
    /* 00795806: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00795807: ret  */ FN_RET(0x00794ac8); r_esp += 4; return;
}

