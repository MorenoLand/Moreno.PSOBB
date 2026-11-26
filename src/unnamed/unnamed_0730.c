#include "protos.h"

void f_00730000(void)
{
    FN_ENTER(0x00730000);
    /* 00730000: insb byte ptr es:[edi], dx */ UNSUP(0x00730000, "insb byte ptr es:[edi], dx");
    /* 00730001: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00730003: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00730007: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0073000b: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 0073000f: mov dword ptr [esp + 0x78], ebx */ W32((u32)(r_esp+0x78u), r_ebx);
    /* 00730013: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00730015: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x73001au); f_007ac174();
    /* 0073001a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073001d: mov ecx, dword ptr [edi + 0x3ec] */ r_ecx = R32((u32)(r_edi+0x3ecu));
    /* 00730023: lea edx, [edi + 0x2ec] */ r_edx = (u32)(r_edi+0x2ecu);
    /* 00730029: lea eax, [edi + 0x418] */ r_eax = (u32)(r_edi+0x418u);
    /* 0073002f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00730033: jle 0x7301c1 */ if ((fZ||fS!=fO)) goto L_007301c1;
L_00730039:; BB(0x00730039);
    /* 00730039: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0073003d: mov ebp, eax */ r_ebp = r_eax;
    /* 0073003f: mov esi, edx */ r_esi = r_edx;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730000); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730020(void)
{
    FN_ENTER(0x00730020);
    /* 00730020: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730022: add byte ptr [ebp + 0x2ec97], cl */ { u32 ad = (u32)(r_ebp+0x2ec97u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730028: add byte ptr [ebp + 0x41887], cl */ { u32 ad = (u32)(r_ebp+0x41887u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073002e: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730030: fild dword ptr [ebp - 0x7771f037] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x888e0fc9u)));
    /* 00730036: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00730038: add byte ptr [ecx - 0x74cfdb94], cl */ { u32 ad = (u32)(r_ecx+0x8b30246cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073003e: call 0xb782f2ce */ r_esp -= 4; W32(r_esp, 0x730043u); f_b782f2ce();
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730043: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730020); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730025(void)
{
    FN_ENTER(0x00730025);
    /* 00730025: in al, dx */ UNSUP(0x00730025, "in al, dx");
    /* 00730026: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00730028: add byte ptr [ebp + 0x41887], cl */ { u32 ad = (u32)(r_ebp+0x41887u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073002e: add byte ptr [ebx], dh */ { u32 ad = (u32)(r_ebx);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730030: fild dword ptr [ebp - 0x7771f037] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x888e0fc9u)));
    /* 00730036: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00730038: add byte ptr [ecx - 0x74cfdb94], cl */ { u32 ad = (u32)(r_ecx+0x8b30246cu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073003e: call 0xb782f2ce */ r_esp -= 4; W32(r_esp, 0x730043u); f_b782f2ce();
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730043: push es */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730025); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730029(void)
{
    FN_ENTER(0x00730029);
    /* 00730029: lea eax, [edi + 0x418] */ r_eax = (u32)(r_edi+0x418u);
    /* 0073002f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00730033: jle 0x7301c1 */ if ((fZ||fS!=fO)) goto L_007301c1;
L_00730039:; BB(0x00730039);
    /* 00730039: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0073003d: mov ebp, eax */ r_ebp = r_eax;
    /* 0073003f: mov esi, edx */ r_esi = r_edx;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730029); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730031(void)
{
    FN_ENTER(0x00730031);
    /* 00730031: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00730033: jle 0x7301c1 */ if ((fZ||fS!=fO)) goto L_007301c1;
L_00730039:; BB(0x00730039);
    /* 00730039: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 0073003d: mov ebp, eax */ r_ebp = r_eax;
    /* 0073003f: mov esi, edx */ r_esi = r_edx;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730031); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730045(void)
{
    FN_ENTER(0x00730045);
    goto L_00730045;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_00730045:; BB(0x00730045);
    /* 00730045: ror byte ptr [edi], 0x84 */ { u32 ad = (u32)(r_edi); u32 c = (4u) & 31; u32 a = R8(ad); u32 r = a; if (c) { { u32 k = c % 8; r = k ? (((a >> k) | (a << (8 - k))) & 0xffu) : a; } W8(ad, r);  } }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
    /* 00730048: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073004a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730045); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_0073005f(void)
{
    FN_ENTER(0x0073005f);
    goto L_0073005f;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
L_0073005f:; BB(0x0073005f);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x0073005f); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730061(void)
{
    FN_ENTER(0x00730061);
    goto L_00730061;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
L_00730061:; BB(0x00730061);
    /* 00730061: daa  */ UNSUP(0x00730061, "daa ");
    /* 00730062: sbb dl, byte ptr [ecx] */ { u32 c = fC; u32 a = (u8)r_edx; u32 b = R8((u32)(r_ecx)); u32 r = (a - b - c) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00730064: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730067: sar byte ptr [edi + eax + 0x50], 0xe8 */ { u32 ad = (u32)(r_edi+r_eax+0x50u); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r); fC = ((i8)a >> ((c > 7 ? 7 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 0073006c: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0073006d: xor dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 0073006f: add byte ptr [ecx - 0x75], bl */ { u32 ad = (u32)(r_ecx+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730072: xchg eax, esi */ { u32 x = r_eax; u32 y = r_esi; r_eax = y; r_esi = x; }
    /* 00730074: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730061); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730064(void)
{
    FN_ENTER(0x00730064);
    goto L_00730064;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
L_00730064:; BB(0x00730064);
    /* 00730064: add byte ptr [ecx - 0x7b], bl */ { u32 ad = (u32)(r_ecx+0xffffff85u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730067: sar byte ptr [edi + eax + 0x50], 0xe8 */ { u32 ad = (u32)(r_edi+r_eax+0x50u); u32 c = (8u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r); fC = ((i8)a >> ((c > 7 ? 7 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 7) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 0073006c: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0073006d: xor dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 0073006f: add byte ptr [ecx - 0x75], bl */ { u32 ad = (u32)(r_ecx+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730072: xchg eax, esi */ { u32 x = r_eax; u32 y = r_esi; r_eax = y; r_esi = x; }
    /* 00730074: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730064); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730065(void)
{
    FN_ENTER(0x00730065);
    goto L_00730065;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
L_00730065:; BB(0x00730065);
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730065); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730069(void)
{
    FN_ENTER(0x00730069);
    goto L_00730069;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_00730069:; BB(0x00730069);
    /* 00730069: pop es */ UNSUP(0x00730069, "pop es");
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730069); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_0073006f(void)
{
    FN_ENTER(0x0073006f);
    goto L_0073006f;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
L_0073006f:; BB(0x0073006f);
    /* 0073006f: add byte ptr [ecx - 0x75], bl */ { u32 ad = (u32)(r_ecx+0xffffff8bu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730072: xchg eax, esi */ { u32 x = r_eax; u32 y = r_esi; r_eax = y; r_esi = x; }
    /* 00730074: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x0073006f); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730072(void)
{
    FN_ENTER(0x00730072);
    goto L_00730072;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
L_00730072:; BB(0x00730072);
    /* 00730072: xchg eax, esi */ { u32 x = r_eax; u32 y = r_esi; r_eax = y; r_esi = x; }
    /* 00730074: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730072); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730073(void)
{
    FN_ENTER(0x00730073);
    goto L_00730073;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
L_00730073:; BB(0x00730073);
    /* 00730073: lock add eax, dword ptr [eax] */ UNSUP(0x00730073, "lock add eax, dword ptr [eax]");
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730073); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730074(void)
{
    FN_ENTER(0x00730074);
    goto L_00730074;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
L_00730074:; BB(0x00730074);
    /* 00730074: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00730076: add byte ptr [ecx + 0x2000], ch */ { u32 ad = (u32)(r_ecx+0x2000u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730074); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730075(void)
{
    FN_ENTER(0x00730075);
    goto L_00730075;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
L_00730075:; BB(0x00730075);
    /* 00730075: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730075); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_00730079(void)
{
    FN_ENTER(0x00730079);
    goto L_00730079;
L_00730041:; BB(0x00730041);
    /* 00730041: movzx eax, word ptr [esi] */ r_eax = (u32)R16((u32)(r_esi));
    /* 00730044: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730046: je 0x7301b6 */ if (fZ) goto L_007301b6;
L_0073004c:; BB(0x0073004c);
    /* 0073004c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00730050: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730054: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00730057: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730059: je 0x730071 */ if (fZ) goto L_00730071;
L_0073005b:; BB(0x0073005b);
    /* 0073005b: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 0073005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730060: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730065u); f_00841a8c();
    /* 00730065: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730066: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730068: jl 0x730071 */ if ((fS!=fO)) goto L_00730071;
L_0073006a:; BB(0x0073006a);
    /* 0073006a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073006b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730070u); f_0079320c();
    /* 00730070: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730071:; BB(0x00730071);
    /* 00730071: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 00730077: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_00730079:; BB(0x00730079);
    /* 00730079: and byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0073007b: add byte ptr [esi + edx - 0x73], dh */ { u32 ad = (u32)(r_esi+r_edx+0xffffff8du);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0073007c: je 0x730094 */ if (fZ) goto L_00730094;
L_0073007e:; BB(0x0073007e);
    /* 0073007e: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 0073007f: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730080: and al, 0x74 */ {  u32 a = (u8)r_eax; u32 b = 0x74u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00730082: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730085: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730087: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73008cu); f_007ac1a0();
    /* 0073008c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073008f: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00730092: jmp 0x7300aa */ goto L_007300aa;
L_00730094:; BB(0x00730094);
    /* 00730094: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730098: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073009a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073009b: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 0073009e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073009f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x7300a4u); f_007ac1a0();
    /* 007300a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007300a7: movzx edx, al */ r_edx = (u32)(u8)r_eax;
L_007300aa:; BB(0x007300aa);
    /* 007300aa: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007300b2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300b6: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007300ba: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300be: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300c2: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007300c6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007300ca: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300ce: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007300d2: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007300d6: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007300d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007300da: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007300dc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007300de: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007300e0: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007300e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007300e5: jae 0x730760 */ if (!fC) goto L_00730760;
L_007300eb:; BB(0x007300eb);
    /* 007300eb: mov eax, dword ptr [esp + 0x12c] */ r_eax = R32((u32)(r_esp+0x12cu));
    /* 007300f2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007300f6: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007300fc: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007300ff: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00730101: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00730103: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730105: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730107: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073010b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073010d: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00730111: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730112: ja 0x730144 */ if ((!fC&&!fZ)) goto L_00730144;
L_00730114:; BB(0x00730114);
    /* 00730114: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730116: mov eax, ebp */ r_eax = r_ebp;
    /* 00730118: mov edx, esi */ r_edx = r_esi;
    /* 0073011a: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 00730121: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00730123: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 00730126: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00730129: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 0073012d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073012f: jne 0x73076d */ if (!fZ) goto L_0073076d;
L_00730135:; BB(0x00730135);
    /* 00730135: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730137: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073013b: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 0073013f: jmp 0x730731 */ goto L_00730731;
L_00730144:; BB(0x00730144);
    /* 00730144: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730146: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730148: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0073014c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073014e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_00730152:; BB(0x00730152);
    /* 00730152: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730156: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073015a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073015c: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00730160: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00730164: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730169: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073016a: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x73016fu); f_007ac200();
    /* 0073016f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730172: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00730176: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730177: mov ecx, dword ptr [esp + 0x130] */ r_ecx = R32((u32)(r_esp+0x130u));
    /* 0073017e: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730183u); f_0071bbb4();
    /* 00730183: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730184: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730188: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0073018b: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 0073018f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730194u); f_0082b440();
    /* 00730194: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730198: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073019c: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073019f: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007301a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007301a5: cmp ebx, dword ptr [edi + 0x3ec] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007301ab: jl 0x730041 */ if ((fS!=fO)) goto L_00730041;
L_007301b1:; BB(0x007301b1);
    /* 007301b1: jmp 0x730750 */ goto L_00730750;
L_007301b6:; BB(0x007301b6);
    /* 007301b6: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007301ba: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
L_007301c1:; BB(0x007301c1);
    /* 007301c1: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301c7: jne 0x7301db */ if (!fZ) goto L_007301db;
L_007301c9:; BB(0x007301c9);
    /* 007301c9: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007301d3: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007301d7: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007301db:; BB(0x007301db);
    /* 007301db: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7301e0u); f_007ac198();
    /* 007301e0: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007301e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007301e6: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007301ec:; BB(0x007301ec);
    /* 007301ec: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007301f0: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007301f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007301f6: lea ebx, [edi + 0x160] */ r_ebx = (u32)(r_edi+0x160u);
    /* 007301fc: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007301ff: mov eax, ebx */ r_eax = r_ebx;
    /* 00730201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730203: je 0x730773 */ if (fZ) goto L_00730773;
L_00730209:; BB(0x00730209);
    /* 00730209: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 0073020d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730211: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730215: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730219: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073021d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730221: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00730225: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730229: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0073022d: mov dword ptr [esp + 0x4c], ebx */ W32((u32)(r_esp+0x4cu), r_ebx);
    /* 00730231: mov ebx, eax */ r_ebx = r_eax;
    /* 00730233: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730237: mov ebp, edx */ r_ebp = r_edx;
L_00730239:; BB(0x00730239);
    /* 00730239: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 0073023f: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730244: je 0x730250 */ if (fZ) goto L_00730250;
L_00730246:; BB(0x00730246);
    /* 00730246: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730248: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x73024du); f_007ac24c();
    /* 0073024d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073024e: jmp 0x73025a */ goto L_0073025a;
L_00730250:; BB(0x00730250);
    /* 00730250: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00730253: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730254: call 0x7ac24c */ r_esp -= 4; W32(r_esp, 0x730259u); f_007ac24c();
    /* 00730259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0073025a:; BB(0x0073025a);
    /* 0073025a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073025e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730262: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00730265: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00730269: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073026d: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 00730271: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00730273: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00730275: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730277: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730278: jae 0x7302a5 */ if (!fC) goto L_007302a5;
L_0073027a:; BB(0x0073027a);
    /* 0073027a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0073027e: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730284: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 00730288: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073028a: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0073028d: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00730291: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00730295: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730296: jb 0x7302a5 */ if (fC) goto L_007302a5;
L_00730298:; BB(0x00730298);
    /* 00730298: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0073029c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 007302a0: jmp 0x7303c2 */ goto L_007303c2;
L_007302a5:; BB(0x007302a5);
    /* 007302a5: movsx eax, byte ptr [ebp + edi + 0x264] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+r_edi+0x264u));
    /* 007302ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007302ae: call 0x840b90 */ r_esp -= 4; W32(r_esp, 0x7302b3u); f_00840b90();
    /* 007302b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007302b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007302b6: je 0x7302bf */ if (fZ) goto L_007302bf;
L_007302b8:; BB(0x007302b8);
    /* 007302b8: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 007302bd: jmp 0x7302c4 */ goto L_007302c4;
L_007302bf:; BB(0x007302bf);
    /* 007302bf: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
L_007302c4:; BB(0x007302c4);
    /* 007302c4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007302c8: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007302cc: fld dword ptr [0x970fdc] */ FPUSH(R_F32((u32)(0x970fdcu)));
    /* 007302d2: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007302d6: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007302da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007302de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007302e0: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007302e2: fst dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0));
    /* 007302e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007302e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007302ea: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007302f5: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 007302fc: mov dword ptr [esp + 0xc], 0x60 */ W32((u32)(r_esp+0xcu), 0x60u);
    /* 00730304: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 0073030b: lea eax, [esp + 0xc4] */ r_eax = (u32)(r_esp+0xc4u);
    /* 00730312: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 00730319: mov eax, 4 */ r_eax = 0x4u;
    /* 0073031e: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 00730325: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0073032c: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 00730333: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00730336: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073033d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730341: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00730344: mov ecx, dword ptr [esp + 0x98] */ r_ecx = R32((u32)(r_esp+0x98u));
    /* 0073034b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0073034d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0073034f: fst dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0));
    /* 00730356: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730358: fst dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0));
    /* 0073035f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730361: fst dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0));
    /* 00730368: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073036a: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 00730371: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 00730378: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073037a: fst dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0));
    /* 00730381: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730383: fstp dword ptr [esp + 0xbc] */ W_F32((u32)(r_esp+0xbcu), ST(0)); FPOP();
    /* 0073038a: fstp dword ptr [esp + 0xc0] */ W_F32((u32)(r_esp+0xc0u), ST(0)); FPOP();
    /* 00730391: lea edx, [esp + 0x94] */ r_edx = (u32)(r_esp+0x94u);
    /* 00730398: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0073039b: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7303a0u); f_0082b5d8();
    /* 007303a0: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007303a4: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007303a8: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007303ac: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007303af: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007303b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303b4: jne 0x730239 */ if (!fZ) goto L_00730239;
L_007303ba:; BB(0x007303ba);
    /* 007303ba: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 007303be: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_007303c2:; BB(0x007303c2);
    /* 007303c2: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 007303c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007303c8: je 0x7305ac */ if (fZ) goto L_007305ac;
L_007303ce:; BB(0x007303ce);
    /* 007303ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007303d0: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7303d5u); f_007ac174();
    /* 007303d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303d6: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x7303dbu); f_00840b9c();
    /* 007303db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303dc: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x7303e1u); f_00841950();
    /* 007303e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007303e2: mov word ptr [esp + 0xd4], ax */ W16((u32)(r_esp+0xd4u), (u16)r_eax);
    /* 007303ea: lea eax, [esp + 0xd4] */ r_eax = (u32)(r_esp+0xd4u);
    /* 007303f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007303f2: mov ecx, edi */ r_ecx = r_edi;
    /* 007303f4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007303f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007303f9: call 0x73077c */ r_esp -= 4; W32(r_esp, 0x7303feu); f_0073077c();
    /* 007303fe: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00730402: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730406: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073040a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073040c: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00730410: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00730414: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00730417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730419: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073041b: je 0x73058d */ if (fZ) goto L_0073058d;
L_00730421:; BB(0x00730421);
    /* 00730421: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00730425: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 00730429: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073042d: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00730431: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730435: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 00730439: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073043d: mov dword ptr [esp + 0x30], ebp */ W32((u32)(r_esp+0x30u), r_ebp);
    /* 00730441: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00730443: mov ebx, eax */ r_ebx = r_eax;
L_00730445:; BB(0x00730445);
    /* 00730445: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 0073044b: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730451: je 0x73046c */ if (fZ) goto L_0073046c;
L_00730453:; BB(0x00730453);
    /* 00730453: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 0073045a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073045c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073045d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0073045f: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730464u); f_007ac1a0();
    /* 00730464: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730467: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0073046a: jmp 0x730486 */ goto L_00730486;
L_0073046c:; BB(0x0073046c);
    /* 0073046c: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730473: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730476: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 0073047a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073047b: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730480u); f_007ac1a0();
    /* 00730480: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730483: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_00730486:; BB(0x00730486);
    /* 00730486: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073048a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073048e: fadd dword ptr [esp + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x54u));
    /* 00730492: fcomp dword ptr [esp + 0x38] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x38u))); FPOP();
    /* 00730496: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730498: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730499: jbe 0x7304b5 */ if ((fC||fZ)) goto L_007304b5;
L_0073049b:; BB(0x0073049b);
    /* 0073049b: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007304a1: jg 0x7304b5 */ if ((!fZ&&fS==fO)) goto L_007304b5;
L_007304a3:; BB(0x007304a3);
    /* 007304a3: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304a7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304ad: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007304b1: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007304b5:; BB(0x007304b5);
    /* 007304b5: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304b9: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007304bd: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007304c1: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007304c5: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007304c7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304c9: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007304cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007304cf: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007304d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304d4: jae 0x730505 */ if (!fC) goto L_00730505;
L_007304d6:; BB(0x007304d6);
    /* 007304d6: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007304da: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 007304e0: fcom dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); 
    /* 007304e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007304e6: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007304e9: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007304ed: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007304f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007304f2: jb 0x7304fb */ if (fC) goto L_007304fb;
L_007304f4:; BB(0x007304f4);
    /* 007304f4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007304f6: jmp 0x730731 */ goto L_00730731;
L_007304fb:; BB(0x007304fb);
    /* 007304fb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007304ff: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00730501: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730505:; BB(0x00730505);
    /* 00730505: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730507: cmp ebx, dword ptr [edi + 0x260] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073050d: jne 0x730521 */ if (!fZ) goto L_00730521;
L_0073050f:; BB(0x0073050f);
    /* 0073050f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730513: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730519: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0073051d: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_00730521:; BB(0x00730521);
    /* 00730521: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730525: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730529: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073052b: fstp dword ptr [esp + 0xd8] */ W_F32((u32)(r_esp+0xd8u), ST(0)); FPOP();
    /* 00730532: fstp dword ptr [esp + 0xdc] */ W_F32((u32)(r_esp+0xdcu), ST(0)); FPOP();
    /* 00730539: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730541: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730542: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x730547u); f_007ac200();
    /* 00730547: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073054a: lea edx, [esp + 0xd8] */ r_edx = (u32)(r_esp+0xd8u);
    /* 00730551: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730552: mov ecx, esi */ r_ecx = r_esi;
    /* 00730554: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x730559u); f_0071bbb4();
    /* 00730559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073055a: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0073055e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730561: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 00730568: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x73056du); f_0082b440();
    /* 0073056d: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730571: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00730575: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730579: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0073057c: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073057f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730581: jne 0x730445 */ if (!fZ) goto L_00730445;
L_00730587:; BB(0x00730587);
    /* 00730587: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0073058b: mov eax, ebx */ r_eax = r_ebx;
L_0073058d:; BB(0x0073058d);
    /* 0073058d: cmp eax, dword ptr [edi + 0x260] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x260u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730593: jne 0x7305a7 */ if (!fZ) goto L_007305a7;
L_00730595:; BB(0x00730595);
    /* 00730595: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730599: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0073059d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073059f: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007305a3: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
L_007305a7:; BB(0x007305a7);
    /* 007305a7: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x7305acu); f_007ac198();
L_007305ac:; BB(0x007305ac);
    /* 007305ac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007305ae: call 0x7ac174 */ r_esp -= 4; W32(r_esp, 0x7305b3u); f_007ac174();
    /* 007305b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007305b4: mov ebx, dword ptr [edi + 0x3ec] */ r_ebx = R32((u32)(r_edi+0x3ecu));
    /* 007305ba: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007305bc: lea eax, [edi + ebx + 0x2ec] */ r_eax = (u32)(r_edi+r_ebx+0x2ecu);
    /* 007305c3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 007305c6: lea ebx, [edi + ebx + 0x418] */ r_ebx = (u32)(r_edi+r_ebx+0x418u);
    /* 007305cd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007305cf: je 0x730731 */ if (fZ) goto L_00730731;
L_007305d5:; BB(0x007305d5);
    /* 007305d5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007305d9: mov dword ptr [esp + 0x28], ebp */ W32((u32)(r_esp+0x28u), r_ebp);
    /* 007305dd: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305e1: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007305e5: mov ebp, eax */ r_ebp = r_eax;
    /* 007305e7: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 007305eb: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007305ef: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007305f3: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 007305f7: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_007305fb:; BB(0x007305fb);
    /* 007305fb: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007305fe: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 00730601: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730603: je 0x730619 */ if (fZ) goto L_00730619;
L_00730605:; BB(0x00730605);
    /* 00730605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730606: mov edi, eax */ r_edi = r_eax;
    /* 00730608: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x73060du); f_00841a8c();
    /* 0073060d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073060e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00730610: jl 0x730619 */ if ((fS!=fO)) goto L_00730619;
L_00730612:; BB(0x00730612);
    /* 00730612: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730613: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x730618u); f_0079320c();
    /* 00730618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00730619:; BB(0x00730619);
    /* 00730619: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0073061d: mov edx, dword ptr [edx + 0x3f0] */ r_edx = R32((u32)(r_edx+0x3f0u));
    /* 00730623: test edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730629: je 0x730644 */ if (fZ) goto L_00730644;
L_0073062b:; BB(0x0073062b);
    /* 0073062b: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 00730632: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00730634: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 00730637: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x73063cu); f_007ac1a0();
    /* 0073063c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073063f: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00730642: jmp 0x73065e */ goto L_0073065e;
L_00730644:; BB(0x00730644);
    /* 00730644: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 0073064b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073064d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073064e: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730653: call 0x7ac1a0 */ r_esp -= 4; W32(r_esp, 0x730658u); f_007ac1a0();
    /* 00730658: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073065b: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
L_0073065e:; BB(0x0073065e);
    /* 0073065e: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730662: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00730666: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0073066a: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 0073066e: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00730670: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730672: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00730674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730676: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730678: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0073067c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073067d: jae 0x7306c5 */ if (!fC) goto L_007306c5;
L_0073067f:; BB(0x0073067f);
    /* 0073067f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00730683: fadd dword ptr [0x970fe0] */ ST(0) = ST(0) + R_F32((u32)(0x970fe0u));
    /* 00730689: fcom dword ptr [esp + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x3cu))); 
    /* 0073068d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0073068f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00730692: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00730696: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0073069a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073069b: jb 0x7306bb */ if (fC) goto L_007306bb;
L_0073069d:; BB(0x0073069d);
    /* 0073069d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073069f: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 007306a3: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007306a7: mov eax, ebp */ r_eax = r_ebp;
    /* 007306a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007306ab: jne 0x730731 */ if (!fZ) goto L_00730731;
L_007306b1:; BB(0x007306b1);
    /* 007306b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007306b3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 007306b6: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 007306b9: jmp 0x730731 */ goto L_00730731;
L_007306bb:; BB(0x007306bb);
    /* 007306bb: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306bf: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007306c1: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007306c5:; BB(0x007306c5);
    /* 007306c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007306c7: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007306cb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007306cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007306d1: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 007306d8: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 007306df: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007306e8: call 0x7ac200 */ r_esp -= 4; W32(r_esp, 0x7306edu); f_007ac200();
    /* 007306ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007306f0: lea edx, [esp + 0xf8] */ r_edx = (u32)(r_esp+0xf8u);
    /* 007306f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007306f8: mov ecx, esi */ r_ecx = r_esi;
    /* 007306fa: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7306ffu); f_0071bbb4();
    /* 007306ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730700: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 00730704: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730707: lea ecx, [esp + 0xfc] */ r_ecx = (u32)(r_esp+0xfcu);
    /* 0073070e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x730713u); f_0082b440();
    /* 00730713: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00730717: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0073071b: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0073071e: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00730722: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730725: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730727: jne 0x7305fb */ if (!fZ) goto L_007305fb;
L_0073072d:; BB(0x0073072d);
    /* 0073072d: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
L_00730731:; BB(0x00730731);
    /* 00730731: call 0x7ac198 */ r_esp -= 4; W32(r_esp, 0x730736u); f_007ac198();
    /* 00730736: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0073073a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073073b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073073c: mov ecx, edi */ r_ecx = r_edi;
    /* 0073073e: call 0x7307a8 */ r_esp -= 4; W32(r_esp, 0x730743u); f_007307a8();
    /* 00730743: add esp, 0x118 */ {  u32 a = r_esp; u32 b = 0x118u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730749: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073074a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073074b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073074c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073074d: ret 4 */ FN_RET(0x00730079); r_esp += 8; return;
L_00730750:; BB(0x00730750);
    /* 00730750: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00730754: mov esi, dword ptr [esp + 0x12c] */ r_esi = R32((u32)(r_esp+0x12cu));
    /* 0073075b: jmp 0x7301c1 */ goto L_007301c1;
L_00730760:; BB(0x00730760);
    /* 00730760: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730762: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00730764: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730766: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730768: jmp 0x730152 */ goto L_00730152;
L_0073076d:; BB(0x0073076d);
    /* 0073076d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0073076f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730771: jmp 0x730731 */ goto L_00730731;
L_00730773:; BB(0x00730773);
    /* 00730773: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730775: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730777: jmp 0x7303ce */ goto L_007303ce;
}

void f_0073077c(void) /* sub_73077C */
{
    FN_ENTER(0x0073077c);
    /* 0073077c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073077d: movzx edi, word ptr [esp + 8] */ r_edi = (u32)R16((u32)(r_esp+0x8u));
    /* 00730782: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00730786: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00730789: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073078b: je 0x7307a1 */ if (fZ) goto L_007307a1;
L_0073078d:; BB(0x0073078d);
    /* 0073078d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073078e: mov edi, eax */ r_edi = r_eax;
    /* 00730790: call 0x841a8c */ r_esp -= 4; W32(r_esp, 0x730795u); f_00841a8c();
    /* 00730795: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730796: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730798: jl 0x7307a1 */ if ((fS!=fO)) goto L_007307a1;
L_0073079a:; BB(0x0073079a);
    /* 0073079a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073079b: call 0x79320c */ r_esp -= 4; W32(r_esp, 0x7307a0u); f_0079320c();
    /* 007307a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007307a1:; BB(0x007307a1);
    /* 007307a1: mov eax, edi */ r_eax = r_edi;
    /* 007307a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007307a4: ret 8 */ FN_RET(0x0073077c); r_esp += 12; return;
}

void f_007307a8(void) /* sub_7307A8 */
{
    FN_ENTER(0x007307a8);
    /* 007307a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007307a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007307aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007307ab: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007307ae: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007307b0: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 007307b4: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 007307b9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007307bb: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007307bd: je 0x7307c4 */ if (fZ) goto L_007307c4;
L_007307bf:; BB(0x007307bf);
    /* 007307bf: mov edi, 1 */ r_edi = 0x1u;
L_007307c4:; BB(0x007307c4);
    /* 007307c4: mov eax, dword ptr [ebp + 0x3f0] */ r_eax = R32((u32)(r_ebp+0x3f0u));
    /* 007307ca: test eax, 0x840 */ {  u32 a = r_eax; u32 b = 0x840u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007307cf: jne 0x7307f1 */ if (!fZ) goto L_007307f1;
L_007307d1:; BB(0x007307d1);
    /* 007307d1: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007307d6: jne 0x7307e1 */ if (!fZ) goto L_007307e1;
L_007307d8:; BB(0x007307d8);
    /* 007307d8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007307db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007307dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007307dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007307de: ret 8 */ FN_RET(0x007307a8); r_esp += 12; return;
L_007307e1:; BB(0x007307e1);
    /* 007307e1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007307e3: call 0x72fe6c */ r_esp -= 4; W32(r_esp, 0x7307e8u); f_0072fe6c();
    /* 007307e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007307ea: jne 0x7307f1 */ if (!fZ) goto L_007307f1;
L_007307ec:; BB(0x007307ec);
    /* 007307ec: mov edi, 2 */ r_edi = 0x2u;
L_007307f1:; BB(0x007307f1);
    /* 007307f1: fld dword ptr [0x970fd8] */ FPUSH(R_F32((u32)(0x970fd8u)));
    /* 007307f7: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007307fb: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 007307fe: mov eax, dword ptr [edi*4 + 0x970f68] */ r_eax = R32((u32)(r_edi*4+0x970f68u));
    /* 00730805: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00730807: fld dword ptr [0x970fd4] */ FPUSH(R_F32((u32)(0x970fd4u)));
    /* 0073080d: fld dword ptr [0x970fd0] */ FPUSH(R_F32((u32)(0x970fd0u)));
    /* 00730813: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00730816: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00730819: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073081b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0073081f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730821: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00730823: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00730827: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0073082a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0073082e: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730831: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00730835: lea ebx, [esp + 0x10] */ r_ebx = (u32)(r_esp+0x10u);
    /* 00730839: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0073083c: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00730840: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00730844: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00730848: call 0x730858 */ r_esp -= 4; W32(r_esp, 0x73084du); f_00730858();
    /* 0073084d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730850: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00730852: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00730853: ret 8 */ FN_RET(0x007307a8); r_esp += 12; return;
}

void f_00730858(void) /* sub_730858 */
{
    FN_ENTER(0x00730858);
    /* 00730858: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00730859: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073085c: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00730860: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00730864: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0073086c: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00730870: mov edx, 4 */ r_edx = 0x4u;
    /* 00730875: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00730878: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0073087c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00730880: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00730884: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00730888: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073088c: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0073088f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00730893: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00730896: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073089a: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0073089c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0073089f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007308a3: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 007308a6: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007308aa: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 007308ae: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007308b0: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007308b4: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 007308b7: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 007308bb: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007308bd: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 007308c1: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007308c4: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 007308c8: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007308cb: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007308cf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007308d2: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007308d6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007308d9: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 007308db: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 007308df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007308e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007308e1: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x7308e6u); f_0082b5d8();
    /* 007308e6: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007308e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007308ea: ret 0x10 */ FN_RET(0x00730858); r_esp += 20; return;
}

void f_007308f0(void) /* sub_7308F0 */
{
    FN_ENTER(0x007308f0);
    /* 007308f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007308f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007308f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007308f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007308f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007308f7: mov edi, ecx */ r_edi = r_ecx;
    /* 007308f9: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 007308ff: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730904: je 0x7309d3 */ if (fZ) goto L_007309d3;
L_0073090a:; BB(0x0073090a);
    /* 0073090a: test eax, 0x2022 */ {  u32 a = r_eax; u32 b = 0x2022u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073090f: jne 0x7309d3 */ if (!fZ) goto L_007309d3;
L_00730915:; BB(0x00730915);
    /* 00730915: call 0x840ba4 */ r_esp -= 4; W32(r_esp, 0x73091au); f_00840ba4();
    /* 0073091a: mov esi, eax */ r_esi = r_eax;
    /* 0073091c: lea edx, [edi + 0x51c] */ r_edx = (u32)(r_edi+0x51cu);
    /* 00730922: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00730926: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730927: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x73092cu); f_00858009();
    /* 0073092c: mov ebp, eax */ r_ebp = r_eax;
    /* 0073092e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073092f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x730934u); f_00858009();
    /* 00730934: lea edx, [eax + ebp + 8] */ r_edx = (u32)(r_eax+r_ebp+0x8u);
    /* 00730938: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073093a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073093b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x730940u); f_008581c5();
    /* 00730940: mov ebx, eax */ r_ebx = r_eax;
    /* 00730942: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730945: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x73094au); f_00840b9c();
    /* 0073094a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073094b: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x730950u); f_00841950();
    /* 00730950: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00730951: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00730954: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730955: push 0x970ff8 */ { u32 v = 0x970ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073095a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073095b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x730960u); f_00857e29();
    /* 00730960: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730963: mov edx, dword ptr [edi + 0x61c] */ r_edx = R32((u32)(r_edi+0x61cu));
    /* 00730969: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073096b: je 0x73098a */ if (fZ) goto L_0073098a;
L_0073096d:; BB(0x0073096d);
    /* 0073096d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073096f: jle 0x73098a */ if ((fZ||fS!=fO)) goto L_0073098a;
L_00730971:; BB(0x00730971);
    /* 00730971: push 0x971004 */ { u32 v = 0x971004u; r_esp -= 4; W32(r_esp, v); }
    /* 00730976: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730977: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x73097cu); f_00857fc3();
    /* 0073097c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00730980: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730981: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730982: call 0x857fc3 */ r_esp -= 4; W32(r_esp, 0x730987u); f_00857fc3();
    /* 00730987: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0073098a:; BB(0x0073098a);
    /* 0073098a: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 0073098e: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00730992: fld dword ptr [edi + 0x400] */ FPUSH(R_F32((u32)(r_edi+0x400u)));
    /* 00730998: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 0073099b: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 0073099e: fld dword ptr [edi + 0x404] */ FPUSH(R_F32((u32)(r_edi+0x404u)));
    /* 007309a4: fsub dword ptr [edi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x44u));
    /* 007309a7: fadd dword ptr [ecx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x14u));
    /* 007309aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007309ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007309af: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007309b3: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 007309bb: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007309bf: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 007309c7: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x7309ccu); f_007ac150();
    /* 007309cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007309cd: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7309d2u); f_00857e98();
    /* 007309d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007309d3:; BB(0x007309d3);
    /* 007309d3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007309d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007309d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007309d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007309d9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007309da: ret 4 */ FN_RET(0x007308f0); r_esp += 8; return;
}

void f_007309e0(void) /* sub_7309E0 */
{
    FN_ENTER(0x007309e0);
    /* 007309e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007309e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007309e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007309e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007309e4: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007309ea: mov edi, ecx */ r_edi = r_ecx;
    /* 007309ec: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 007309f2: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007309f7: je 0x730e0c */ if (fZ) goto L_00730e0c;
L_007309fd:; BB(0x007309fd);
    /* 007309fd: test eax, 0xa2 */ {  u32 a = r_eax; u32 b = 0xa2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730a02: jne 0x730e0c */ if (!fZ) goto L_00730e0c;
L_00730a08:; BB(0x00730a08);
    /* 00730a08: call 0x841028 */ r_esp -= 4; W32(r_esp, 0x730a0du); f_00841028();
    /* 00730a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730a0f: je 0x730e0c */ if (fZ) goto L_00730e0c;
L_00730a15:; BB(0x00730a15);
    /* 00730a15: call 0x841018 */ r_esp -= 4; W32(r_esp, 0x730a1au); f_00841018();
    /* 00730a1a: mov esi, eax */ r_esi = r_eax;
    /* 00730a1c: call 0x841020 */ r_esp -= 4; W32(r_esp, 0x730a21u); f_00841020();
    /* 00730a21: mov ebx, eax */ r_ebx = r_eax;
    /* 00730a23: lea ebp, [esi + ebx] */ r_ebp = (u32)(r_esi+r_ebx);
    /* 00730a26: call 0x841008 */ r_esp -= 4; W32(r_esp, 0x730a2bu); f_00841008();
    /* 00730a2b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00730a2f: call 0x841010 */ r_esp -= 4; W32(r_esp, 0x730a34u); f_00841010();
    /* 00730a34: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00730a38: call 0x840b9c */ r_esp -= 4; W32(r_esp, 0x730a3du); f_00840b9c();
    /* 00730a3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730a3e: call 0x841950 */ r_esp -= 4; W32(r_esp, 0x730a43u); f_00841950();
    /* 00730a43: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00730a47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730a4a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00730a4c: jle 0x730e0c */ if ((fZ||fS!=fO)) goto L_00730e0c;
L_00730a52:; BB(0x00730a52);
    /* 00730a52: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730a55: jg 0x730e0c */ if ((!fZ&&fS==fO)) goto L_00730e0c;
L_00730a5b:; BB(0x00730a5b);
    /* 00730a5b: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00730a5f: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730a61: jl 0x730a67 */ if ((fS!=fO)) goto L_00730a67;
L_00730a63:; BB(0x00730a63);
    /* 00730a63: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730a65: jl 0x730a74 */ if ((fS!=fO)) goto L_00730a74;
L_00730a67:; BB(0x00730a67);
    /* 00730a67: mov eax, edx */ r_eax = r_edx;
    /* 00730a69: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00730a6a: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00730a6a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00730a6a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00730a6c: mov esi, eax */ r_esi = r_eax;
    /* 00730a6e: imul esi, ebx */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ebx; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00730a71: lea ebp, [ebx + esi] */ r_ebp = (u32)(r_ebx+r_esi);
L_00730a74:; BB(0x00730a74);
    /* 00730a74: fld dword ptr [0x970fc8] */ FPUSH(R_F32((u32)(0x970fc8u)));
    /* 00730a7a: fadd dword ptr [edi + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x400u));
    /* 00730a80: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00730a83: mov edx, dword ptr [esp + 0xf0] */ r_edx = R32((u32)(r_esp+0xf0u));
    /* 00730a8a: fadd dword ptr [edx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x10u));
    /* 00730a8d: fld dword ptr [0x970fc4] */ FPUSH(R_F32((u32)(0x970fc4u)));
    /* 00730a93: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00730a95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730a97: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730a99: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00730a9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730a9e: jbe 0x730aaa */ if ((fC||fZ)) goto L_00730aaa;
L_00730aa0:; BB(0x00730aa0);
    /* 00730aa0: fld dword ptr [0x970fc4] */ FPUSH(R_F32((u32)(0x970fc4u)));
    /* 00730aa6: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
L_00730aaa:; BB(0x00730aaa);
    /* 00730aaa: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00730aae: mov eax, ebx */ r_eax = r_ebx;
    /* 00730ab0: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730ab2: jle 0x730ab8 */ if ((fZ||fS!=fO)) goto L_00730ab8;
L_00730ab4:; BB(0x00730ab4);
    /* 00730ab4: mov eax, edx */ r_eax = r_edx;
    /* 00730ab6: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00730ab8:; BB(0x00730ab8);
    /* 00730ab8: mov edx, dword ptr [esp + 0xf0] */ r_edx = R32((u32)(r_esp+0xf0u));
    /* 00730abf: fld dword ptr [edi + 0x404] */ FPUSH(R_F32((u32)(r_edi+0x404u)));
    /* 00730ac5: fsub dword ptr [edi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x44u));
    /* 00730ac8: fadd dword ptr [edx + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x14u));
    /* 00730acb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00730acf: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00730ad3: fadd dword ptr [0x970fc0] */ ST(0) = ST(0) + R_F32((u32)(0x970fc0u));
    /* 00730ad9: fmul dword ptr [0x970fbc] */ ST(0) = ST(0) * R_F32((u32)(0x970fbcu));
    /* 00730adf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00730ae1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00730ae3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730ae5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00730ae7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00730ae9: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00730aed: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00730aee: jae 0x730afa */ if (!fC) goto L_00730afa;
L_00730af0:; BB(0x00730af0);
    /* 00730af0: fld dword ptr [0x970fc4] */ FPUSH(R_F32((u32)(0x970fc4u)));
    /* 00730af6: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_00730afa:; BB(0x00730afa);
    /* 00730afa: mov ecx, edi */ r_ecx = r_edi;
    /* 00730afc: call 0x72fd94 */ r_esp -= 4; W32(r_esp, 0x730b01u); f_0072fd94();
    /* 00730b01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730b03: jne 0x730b10 */ if (!fZ) goto L_00730b10;
L_00730b05:; BB(0x00730b05);
    /* 00730b05: mov edx, 0xc01030a0 */ r_edx = 0xc01030a0u;
    /* 00730b0a: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00730b0e: jmp 0x730b19 */ goto L_00730b19;
L_00730b10:; BB(0x00730b10);
    /* 00730b10: mov edx, 0xc0c03040 */ r_edx = 0xc0c03040u;
    /* 00730b15: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
L_00730b19:; BB(0x00730b19);
    /* 00730b19: mov edx, 1 */ r_edx = 0x1u;
    /* 00730b1e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00730b22: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730b25: je 0x730e19 */ if (fZ) goto L_00730e19;
L_00730b2b:; BB(0x00730b2b);
    /* 00730b2b: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 00730b2f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00730b32: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00730b35: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00730b37: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00730b39: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00730b3b: mov ecx, esi */ r_ecx = r_esi;
    /* 00730b3d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00730b3f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00730b41: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 00730b44: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00730b46: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730b48: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00730b4a: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00730b4c: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00730b50: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00730b54: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 00730b58: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00730b5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730b5d: call 0x840fd0 */ r_esp -= 4; W32(r_esp, 0x730b62u); f_00840fd0();
    /* 00730b62: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00730b66: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00730b6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730b6b: movzx ebx, bx */ r_ebx = (u32)(u16)r_ebx;
    /* 00730b6e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730b6f: push 0x970ff8 */ { u32 v = 0x970ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 00730b74: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730b75: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x730b7au); f_00857e29();
    /* 00730b7a: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 00730b7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730b7f: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x730b84u); f_007ac264();
    /* 00730b84: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00730b88: fld dword ptr [0x970fb8] */ FPUSH(R_F32((u32)(0x970fb8u)));
    /* 00730b8e: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00730b92: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00730b94: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00730b99: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00730b9d: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 00730ba1: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00730ba4: fadd dword ptr [eax*4 + 0x970f80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970f80u));
    /* 00730bab: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00730bad: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 00730bb5: lea edi, [esp + 0x84] */ r_edi = (u32)(r_esp+0x84u);
    /* 00730bbc: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 00730bc0: lea edx, [esp + 0xa4] */ r_edx = (u32)(r_esp+0xa4u);
    /* 00730bc7: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00730bcb: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00730bcf: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 00730bd6: mov dword ptr [esp + 0xb0], edx */ W32((u32)(r_esp+0xb0u), r_edx);
    /* 00730bdd: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00730be1: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00730be4: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00730be8: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00730beb: mov edi, dword ptr [esp + 0x78] */ r_edi = R32((u32)(r_esp+0x78u));
    /* 00730bef: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00730bf1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730bf3: fst dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0));
    /* 00730bfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730bfc: fst dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0));
    /* 00730c03: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730c05: fst dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0));
    /* 00730c0c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730c0e: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 00730c15: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730c17: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 00730c1e: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 00730c25: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730c27: fstp dword ptr [esp + 0x9c] */ W_F32((u32)(r_esp+0x9cu), ST(0)); FPOP();
    /* 00730c2e: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 00730c35: lea edx, [esp + 0x74] */ r_edx = (u32)(r_esp+0x74u);
    /* 00730c39: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00730c3b: push 0xbf8e38e4 */ { u32 v = 0xbf8e38e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00730c40: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730c42: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x730c47u); f_0082b5d8();
    /* 00730c47: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 00730c4b: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 00730c4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730c50: push 0x971010 */ { u32 v = 0x971010u; r_esp -= 4; W32(r_esp, v); }
    /* 00730c55: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730c56: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x730c5bu); f_00857e29();
    /* 00730c5b: fld dword ptr [0x970fb0] */ FPUSH(R_F32((u32)(0x970fb0u)));
    /* 00730c61: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 00730c65: fld dword ptr [0x970fb8] */ FPUSH(R_F32((u32)(0x970fb8u)));
    /* 00730c6b: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 00730c6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730c71: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00730c73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730c75: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00730c77: mov dword ptr [esp + 0xd8], 0 */ W32((u32)(r_esp+0xd8u), 0x0u);
    /* 00730c82: lea edi, [esp + 0xe0] */ r_edi = (u32)(r_esp+0xe0u);
    /* 00730c89: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00730c8e: mov dword ptr [esp + 0xd0], edi */ W32((u32)(r_esp+0xd0u), r_edi);
    /* 00730c95: lea edx, [esp + 0x100] */ r_edx = (u32)(r_esp+0x100u);
    /* 00730c9c: mov dword ptr [esp + 0xd4], edx */ W32((u32)(r_esp+0xd4u), r_edx);
    /* 00730ca3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00730ca7: mov dword ptr [esp + 0xdc], ecx */ W32((u32)(r_esp+0xdcu), r_ecx);
    /* 00730cae: mov dword ptr [esp + 0x10c], edx */ W32((u32)(r_esp+0x10cu), r_edx);
    /* 00730cb5: mov edi, dword ptr [esp + 0xd4] */ r_edi = R32((u32)(r_esp+0xd4u));
    /* 00730cbc: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 00730cbf: mov edi, dword ptr [esp + 0xd4] */ r_edi = R32((u32)(r_esp+0xd4u));
    /* 00730cc6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00730cc9: mov edi, dword ptr [esp + 0xd4] */ r_edi = R32((u32)(r_esp+0xd4u));
    /* 00730cd0: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00730cd2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00730cd4: fst dword ptr [esp + 0xe0] */ W_F32((u32)(r_esp+0xe0u), ST(0));
    /* 00730cdb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00730cdd: fst dword ptr [esp + 0xe4] */ W_F32((u32)(r_esp+0xe4u), ST(0));
    /* 00730ce4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730ce6: fst dword ptr [esp + 0xe8] */ W_F32((u32)(r_esp+0xe8u), ST(0));
    /* 00730ced: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730cef: fstp dword ptr [esp + 0xec] */ W_F32((u32)(r_esp+0xecu), ST(0)); FPOP();
    /* 00730cf6: fstp dword ptr [esp + 0xf0] */ W_F32((u32)(r_esp+0xf0u), ST(0)); FPOP();
    /* 00730cfd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730cff: fst dword ptr [esp + 0xf4] */ W_F32((u32)(r_esp+0xf4u), ST(0));
    /* 00730d06: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730d08: fstp dword ptr [esp + 0xf8] */ W_F32((u32)(r_esp+0xf8u), ST(0)); FPOP();
    /* 00730d0f: fstp dword ptr [esp + 0xfc] */ W_F32((u32)(r_esp+0xfcu), ST(0)); FPOP();
    /* 00730d16: lea edx, [esp + 0xd0] */ r_edx = (u32)(r_esp+0xd0u);
    /* 00730d1d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00730d1f: push 0xbf8e38e4 */ { u32 v = 0xbf8e38e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00730d24: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00730d25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730d26: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x730d2bu); f_0082b5d8();
    /* 00730d2b: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730d2e: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730d30: jge 0x730e0c */ if ((fS==fO)) goto L_00730e0c;
L_00730d36:; BB(0x00730d36);
    /* 00730d36: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
L_00730d3a:; BB(0x00730d3a);
    /* 00730d3a: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00730d3e: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730d40: jge 0x730e0c */ if ((fS==fO)) goto L_00730e0c;
L_00730d46:; BB(0x00730d46);
    /* 00730d46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00730d47: call 0x840fd0 */ r_esp -= 4; W32(r_esp, 0x730d4cu); f_00840fd0();
    /* 00730d4c: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 00730d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00730d51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730d52: push 0x970ff8 */ { u32 v = 0x970ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 00730d57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730d58: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x730d5du); f_00857e29();
    /* 00730d5d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730d60: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00730d64: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00730d68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00730d6a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730d6d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00730d71: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 00730d79: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00730d7d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00730d81: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00730d89: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x730d8eu); f_007ac150();
    /* 00730d8e: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00730d92: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730d93: push 0x971010 */ { u32 v = 0x971010u; r_esp -= 4; W32(r_esp, v); }
    /* 00730d98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730d99: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x730d9eu); f_00857e29();
    /* 00730d9e: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 00730da2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00730da3: call 0x7ac264 */ r_esp -= 4; W32(r_esp, 0x730da8u); f_007ac264();
    /* 00730da8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00730dab: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00730daf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00730db3: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00730db7: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 00730dbb: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 00730dc3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00730dc6: fadd dword ptr [eax*4 + 0x970f80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x970f80u));
    /* 00730dcd: fsubr dword ptr [esp + 0x3c] */ ST(0) = R_F32((u32)(r_esp+0x3cu)) - ST(0);
    /* 00730dd1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00730dd4: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 00730dd8: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00730de0: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00730de4: call 0x7ac150 */ r_esp -= 4; W32(r_esp, 0x730de9u); f_007ac150();
    /* 00730de9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00730dec: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730def: jl 0x730df3 */ if ((fS!=fO)) goto L_00730df3;
L_00730df1:; BB(0x00730df1);
    /* 00730df1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00730df3:; BB(0x00730df3);
    /* 00730df3: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00730df7: fadd dword ptr [0x970fb8] */ ST(0) = ST(0) + R_F32((u32)(0x970fb8u));
    /* 00730dfd: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00730e01: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00730e04: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00730e06: jl 0x730d3a */ if ((fS!=fO)) goto L_00730d3a;
L_00730e0c:; BB(0x00730e0c);
    /* 00730e0c: add esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00730e12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730e13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00730e14: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00730e15: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00730e16: ret 4 */ FN_RET(0x007309e0); r_esp += 8; return;
L_00730e19:; BB(0x00730e19);
    /* 00730e19: call 0x841030 */ r_esp -= 4; W32(r_esp, 0x730e1eu); f_00841030();
    /* 00730e1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730e20: je 0x730b2b */ if (fZ) goto L_00730b2b;
L_00730e26:; BB(0x00730e26);
    /* 00730e26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00730e28: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00730e2c: jmp 0x730b2b */ goto L_00730b2b;
}

void f_00730e34(void) /* sub_730E34 */
{
    FN_ENTER(0x00730e34);
    /* 00730e34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730e35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00730e37: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730e3d: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730e3f: jne 0x730e5a */ if (!fZ) goto L_00730e5a;
L_00730e41:; BB(0x00730e41);
    /* 00730e41: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00730e44: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00730e4a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00730e4c: jne 0x730e53 */ if (!fZ) goto L_00730e53;
L_00730e4e:; BB(0x00730e4e);
    /* 00730e4e: call 0x841198 */ r_esp -= 4; W32(r_esp, 0x730e53u); f_00841198();
L_00730e53:; BB(0x00730e53);
    /* 00730e53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00730e55: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x730e5au); f_007127b0();
L_00730e5a:; BB(0x00730e5a);
    /* 00730e5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730e5b: ret  */ FN_RET(0x00730e34); r_esp += 4; return;
}

void f_00730e5c(void) /* sub_730E5C */
{
    FN_ENTER(0x00730e5c);
    /* 00730e5c: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 00730e62: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00730e65: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00730e6b: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x730e70u); f_0072f248();
    /* 00730e70: ret  */ FN_RET(0x00730e5c); r_esp += 4; return;
}

void f_00730e74(void) /* sub_730E74 */
{
    FN_ENTER(0x00730e74);
    /* 00730e74: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 00730e7a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730e7c: je 0x730e7f */ if (fZ) goto L_00730e7f;
L_00730e7e:; BB(0x00730e7e);
    /* 00730e7e: ret  */ FN_RET(0x00730e74); r_esp += 4; return;
L_00730e7f:; BB(0x00730e7f);
    /* 00730e7f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00730e82: mov dword ptr [ecx + 0x3f0], eax */ W32((u32)(r_ecx+0x3f0u), r_eax);
    /* 00730e88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00730e8a: mov word ptr [ecx + 0x60], ax */ W16((u32)(r_ecx+0x60u), (u16)r_eax);
    /* 00730e8e: mov word ptr [ecx + 0x160], ax */ W16((u32)(r_ecx+0x160u), (u16)r_eax);
    /* 00730e95: mov dword ptr [ecx + 0x260], eax */ W32((u32)(r_ecx+0x260u), r_eax);
    /* 00730e9b: call 0x841198 */ r_esp -= 4; W32(r_esp, 0x730ea0u); f_00841198();
    /* 00730ea0: ret  */ FN_RET(0x00730e74); r_esp += 4; return;
}

void f_00730ea4(void) /* sub_730EA4 */
{
    FN_ENTER(0x00730ea4);
    /* 00730ea4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730ea5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00730ea7: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730ead: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730eaf: jne 0x730eb3 */ if (!fZ) goto L_00730eb3;
L_00730eb1:; BB(0x00730eb1);
    /* 00730eb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730eb2: ret  */ FN_RET(0x00730ea4); r_esp += 4; return;
L_00730eb3:; BB(0x00730eb3);
    /* 00730eb3: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00730eb6: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00730ebc: call 0x841300 */ r_esp -= 4; W32(r_esp, 0x730ec1u); f_00841300();
    /* 00730ec1: call 0x84106c */ r_esp -= 4; W32(r_esp, 0x730ec6u); f_0084106c();
    /* 00730ec6: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730ecc: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730ed1: je 0x730ed8 */ if (fZ) goto L_00730ed8;
L_00730ed3:; BB(0x00730ed3);
    /* 00730ed3: call 0x8411c4 */ r_esp -= 4; W32(r_esp, 0x730ed8u); f_008411c4();
L_00730ed8:; BB(0x00730ed8);
    /* 00730ed8: call 0x841720 */ r_esp -= 4; W32(r_esp, 0x730eddu); f_00841720();
    /* 00730edd: mov dword ptr [ebx + 0x518], 2 */ W32((u32)(r_ebx+0x518u), 0x2u);
    /* 00730ee7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730ee8: ret  */ FN_RET(0x00730ea4); r_esp += 4; return;
}

void f_00730eec(void) /* sub_730EEC */
{
    FN_ENTER(0x00730eec);
    /* 00730eec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730eed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00730eef: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730ef5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730ef7: je 0x730efb */ if (fZ) goto L_00730efb;
L_00730ef9:; BB(0x00730ef9);
    /* 00730ef9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730efa: ret  */ FN_RET(0x00730eec); r_esp += 4; return;
L_00730efb:; BB(0x00730efb);
    /* 00730efb: call 0x840b5c */ r_esp -= 4; W32(r_esp, 0x730f00u); f_00840b5c();
    /* 00730f00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730f02: je 0x730f29 */ if (fZ) goto L_00730f29;
L_00730f04:; BB(0x00730f04);
    /* 00730f04: mov eax, dword ptr [ebx + 0x518] */ r_eax = R32((u32)(r_ebx+0x518u));
    /* 00730f0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730f0c: jne 0x730f29 */ if (!fZ) goto L_00730f29;
L_00730f0e:; BB(0x00730f0e);
    /* 00730f0e: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730f14: mov dword ptr [ebx + 0x408], 1 */ W32((u32)(r_ebx+0x408u), 0x1u);
    /* 00730f1e: or eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00730f23: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
L_00730f29:; BB(0x00730f29);
    /* 00730f29: call 0x840b84 */ r_esp -= 4; W32(r_esp, 0x730f2eu); f_00840b84();
    /* 00730f2e: call 0x84128c */ r_esp -= 4; W32(r_esp, 0x730f33u); f_0084128c();
    /* 00730f33: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730f39: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00730f3c: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00730f42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00730f44: call 0x72f248 */ r_esp -= 4; W32(r_esp, 0x730f49u); f_0072f248();
    /* 00730f49: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730f4f: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730f54: mov dword ptr [ebx + 0x3f0], eax */ W32((u32)(r_ebx+0x3f0u), r_eax);
    /* 00730f5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00730f5b: ret  */ FN_RET(0x00730eec); r_esp += 4; return;
}

void f_00730f5c(void) /* sub_730F5C */
{
    FN_ENTER(0x00730f5c);
    /* 00730f5c: mov eax, dword ptr [ecx + 0x3f0] */ r_eax = R32((u32)(r_ecx+0x3f0u));
    /* 00730f62: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730f65: ret  */ FN_RET(0x00730f5c); r_esp += 4; return;
}

void f_00730f68(void) /* sub_730F68 */
{
    FN_ENTER(0x00730f68);
    /* 00730f68: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 00730f6e: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730f71: mov eax, 0 */ r_eax = 0x0u;
    /* 00730f76: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00730f79: ret  */ FN_RET(0x00730f68); r_esp += 4; return;
}

void f_00730f7c(void) /* sub_730F7C */
{
    FN_ENTER(0x00730f7c);
    /* 00730f7c: mov edx, dword ptr [ecx + 0x3f0] */ r_edx = R32((u32)(r_ecx+0x3f0u));
    /* 00730f82: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00730f85: mov eax, 0 */ r_eax = 0x0u;
    /* 00730f8a: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 00730f8d: ret  */ FN_RET(0x00730f7c); r_esp += 4; return;
}

void f_00730f90(void) /* sub_730F90 */
{
    FN_ENTER(0x00730f90);
    /* 00730f90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00730f91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00730f92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00730f93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00730f94: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00730f97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00730f99: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00730f9b: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00730f9f: mov word ptr [ebx + 0x3ea], dx */ W16((u32)(r_ebx+0x3eau), (u16)r_edx);
    /* 00730fa6: lea ebp, [ebx + 0x2ec] */ r_ebp = (u32)(r_ebx+0x2ecu);
    /* 00730fac: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
    /* 00730fb0: mov edx, ebp */ r_edx = r_ebp;
    /* 00730fb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730fb4: je 0x730fd7 */ if (fZ) goto L_00730fd7;
L_00730fb6:; BB(0x00730fb6);
    /* 00730fb6: movzx eax, word ptr [ebp] */ r_eax = (u32)R16((u32)(r_ebp));
L_00730fba:; BB(0x00730fba);
    /* 00730fba: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730fbd: je 0x730fc4 */ if (fZ) goto L_00730fc4;
L_00730fbf:; BB(0x00730fbf);
    /* 00730fbf: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730fc2: jne 0x730fcc */ if (!fZ) goto L_00730fcc;
L_00730fc4:; BB(0x00730fc4);
    /* 00730fc4: mov eax, 0x20 */ r_eax = 0x20u;
    /* 00730fc9: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
L_00730fcc:; BB(0x00730fcc);
    /* 00730fcc: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 00730fd0: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00730fd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730fd5: jne 0x730fba */ if (!fZ) goto L_00730fba;
L_00730fd7:; BB(0x00730fd7);
    /* 00730fd7: mov eax, dword ptr [ebx + 0x3f0] */ r_eax = R32((u32)(r_ebx+0x3f0u));
    /* 00730fdd: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730fe2: jne 0x73106e */ if (!fZ) goto L_0073106e;
L_00730fe8:; BB(0x00730fe8);
    /* 00730fe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00730fe9: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x730feeu); f_00858009();
    /* 00730fee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00730fef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00730ff1: je 0x73106e */ if (fZ) goto L_0073106e;
L_00730ff3:; BB(0x00730ff3);
    /* 00730ff3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00730ff5: call 0x731080 */ r_esp -= 4; W32(r_esp, 0x730ffau); f_00731080();
    /* 00730ffa: mov edi, 0x20 */ r_edi = 0x20u;
    /* 00730fff: add ebx, 0x418 */ {  u32 a = r_ebx; u32 b = 0x418u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00731005: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00731007: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0073100a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0073100c: jle 0x73105f */ if ((fZ||fS!=fO)) goto L_0073105f;
L_0073100e:; BB(0x0073100e);
    /* 0073100e: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00731012: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00731015:; BB(0x00731015);
    /* 00731015: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00731019: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073101b: je 0x73105f */ if (fZ) goto L_0073105f;
L_0073101d:; BB(0x0073101d);
    /* 0073101d: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00731020: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00731022: je 0x731048 */ if (fZ) goto L_00731048;
L_00731024:; BB(0x00731024);
    /* 00731024: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00731027: lea edi, [edi - 4] */ r_edi = (u32)(r_edi+0xfffffffcu);
    /* 0073102a: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073102c: jg 0x73105f */ if ((!fZ&&fS==fO)) goto L_0073105f;
L_0073102e:; BB(0x0073102e);
    /* 0073102e: mov edi, eax */ r_edi = r_eax;
    /* 00731030: mov ecx, 9 */ r_ecx = 0x9u;
    /* 00731035: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00731038: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 0073103b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073103e: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 00731041: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00731045: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00731048:; BB(0x00731048);
    /* 00731048: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0073104c: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 0073104f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00731052: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00731055: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00731058: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0073105b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073105d: jl 0x731015 */ if ((fS!=fO)) goto L_00731015;
L_0073105f:; BB(0x0073105f);
    /* 0073105f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00731061: mov word ptr [esi], ax */ W16((u32)(r_esi), (u16)r_eax);
    /* 00731064: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00731067: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731068: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00731069: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073106a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073106b: ret 4 */ FN_RET(0x00730f90); r_esp += 8; return;
L_0073106e:; BB(0x0073106e);
    /* 0073106e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073106f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00731070: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x731075u); f_00857fed();
    /* 00731075: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00731078: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00731079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073107a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073107b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073107c: ret 4 */ FN_RET(0x00730f90); r_esp += 8; return;
}

