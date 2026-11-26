#include "protos.h"

void f_0041504c(void) /* sub_41504C */
{
    FN_ENTER(0x0041504c);
    /* 0041504c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041504f: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x415054u); f_007932e8();
    /* 00415054: mov dword ptr [esp], 0x8fad28 */ W32((u32)(r_esp), 0x8fad28u);
    /* 0041505b: mov eax, 0x8fad34 */ r_eax = 0x8fad34u;
    /* 00415060: mov edx, 0x9a379c */ r_edx = 0x9a379cu;
    /* 00415065: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00415069: mov dword ptr [esp + 0x20], 0x9a3788 */ W32((u32)(r_esp+0x20u), 0x9a3788u);
    /* 00415071: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00415075: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00415079: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0041507d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00415081: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00415085: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00415089: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 0041508e: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00415092: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00415096: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0041509a: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041509e: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004150a2: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004150a6: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 004150aa: mov ecx, dword ptr [esp + eax*4 + 0x20] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x20u));
    /* 004150ae: mov dword ptr [0xa3b1c4], ecx */ W32((u32)(0xa3b1c4u), r_ecx);
    /* 004150b4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004150b5: push dword ptr [esp + eax*4 + 4] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004150b9: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x4150beu); f_0081a934();
    /* 004150be: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004150c1: ret  */ FN_RET(0x0041504c); r_esp += 4; return;
}

void f_004150c4(void) /* sub_4150C4 */
{
    FN_ENTER(0x004150c4);
    /* 004150c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004150c5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004150c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004150c9: call 0x4150e8 */ r_esp -= 4; W32(r_esp, 0x4150ceu); f_004150e8();
    /* 004150ce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004150d2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004150d4: jne 0x4150da */ if (!fZ) goto L_004150da;
L_004150d6:; BB(0x004150d6);
    /* 004150d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004150d7: ret 4 */ FN_RET(0x004150c4); r_esp += 8; return;
L_004150da:; BB(0x004150da);
    /* 004150da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004150db: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4150e0u); f_005c2f74();
    /* 004150e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004150e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004150e2: ret 4 */ FN_RET(0x004150c4); r_esp += 8; return;
}

void f_004150e8(void) /* sub_4150E8 */
{
    FN_ENTER(0x004150e8);
    /* 004150e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004150e9: mov ebp, esp */ r_ebp = r_esp;
    /* 004150eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004150ed: push 0x8cd164 */ { u32 v = 0x8cd164u; r_esp -= 4; W32(r_esp, v); }
    /* 004150f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004150f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004150f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00415100: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415103: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00415106: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00415109: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0041510c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0041510f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00415112: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00415115: mov dword ptr [ecx], 0xaf3500 */ W32((u32)(r_ecx), 0xaf3500u);
    /* 0041511b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00415122: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x415127u); f_008171e8();
    /* 00415127: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0041512a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00415131: mov esp, ebp */ r_esp = r_ebp;
    /* 00415133: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415134: ret  */ FN_RET(0x004150e8); r_esp += 4; return;
}

void f_00415138(void) /* sub_415138 */
{
    FN_ENTER(0x00415138);
    /* 00415138: mov ecx, dword ptr [0xa3b1cc] */ r_ecx = R32((u32)(0xa3b1ccu));
    /* 0041513e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00415140: je 0x415151 */ if (fZ) goto L_00415151;
L_00415142:; BB(0x00415142);
    /* 00415142: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x415147u); f_00829de0();
    /* 00415147: mov dword ptr [0xa3b1cc], 0 */ W32((u32)(0xa3b1ccu), 0x0u);
L_00415151:; BB(0x00415151);
    /* 00415151: ret  */ FN_RET(0x00415138); r_esp += 4; return;
}

void f_00415154(void) /* sub_415154 */
{
    FN_ENTER(0x00415154);
    /* 00415154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415155: mov ebp, esp */ r_ebp = r_esp;
    /* 00415157: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00415159: push 0x8cd180 */ { u32 v = 0x8cd180u; r_esp -= 4; W32(r_esp, v); }
    /* 0041515e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00415164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415165: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0041516c: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041516f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00415172: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00415175: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00415178: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0041517b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0041517e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415181: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00415184: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00415187: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x41518cu); f_008193cc();
    /* 0041518c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00415193: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00415196: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00415199: mov dword ptr [esi], 0xaf3500 */ W32((u32)(r_esi), 0xaf3500u);
    /* 0041519f: mov eax, dword ptr [0x9a3808] */ r_eax = R32((u32)(0x9a3808u));
    /* 004151a4: mov ebx, dword ptr [0xa3b1cc] */ r_ebx = R32((u32)(0xa3b1ccu));
    /* 004151aa: mov dword ptr [esi + 0x128], 0xffffffff */ W32((u32)(r_esi+0x128u), 0xffffffffu);
    /* 004151b4: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004151b7: mov dword ptr [esi + 0x134], 1 */ W32((u32)(r_esi+0x134u), 0x1u);
    /* 004151c1: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004151c6: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004151c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004151cb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004151cd: mov dword ptr [esi + 0x12c], ecx */ W32((u32)(r_esi+0x12cu), r_ecx);
    /* 004151d3: mov dword ptr [esi + 0x130], ecx */ W32((u32)(r_esi+0x130u), r_ecx);
    /* 004151d9: mov dword ptr [esi + 0x23c], ebx */ W32((u32)(r_esi+0x23cu), r_ebx);
    /* 004151df: add esi, 0x13c */ {  u32 a = r_esi; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004151e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004151e6: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x4151ebu); f_0086b688();
    /* 004151eb: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 004151ee: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004151f1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004151f3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4151f8u); f_00792fe8();
    /* 004151f8: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 004151fb: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 004151fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004151fe: add edx, 0x13c */ {  u32 a = r_edx; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415204: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415205: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x41520au); f_00857dec();
    /* 0041520a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041520d: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00415210: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00415213: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415216: jle 0x41521f */ if ((fZ||fS!=fO)) goto L_0041521f;
L_00415218:; BB(0x00415218);
    /* 00415218: mov ebx, 0xfffffff4 */ r_ebx = 0xfffffff4u;
    /* 0041521d: jmp 0x415221 */ goto L_00415221;
L_0041521f:; BB(0x0041521f);
    /* 0041521f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00415221:; BB(0x00415221);
    /* 00415221: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415223: jne 0x41524b */ if (!fZ) goto L_0041524b;
L_00415225:; BB(0x00415225);
    /* 00415225: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x41522au); f_006dc358();
    /* 0041522a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041522b: call 0x6c4480 */ r_esp -= 4; W32(r_esp, 0x415230u); f_006c4480();
    /* 00415230: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415234: call 0x7087dc */ r_esp -= 4; W32(r_esp, 0x415239u); f_007087dc();
    /* 00415239: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041523c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041523f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415240: call 0x4153a8 */ r_esp -= 4; W32(r_esp, 0x415245u); f_004153a8();
    /* 00415245: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00415248: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
L_0041524b:; BB(0x0041524b);
    /* 0041524b: cmp edx, 0x13 */ {  u32 a = r_edx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041524e: je 0x415392 */ if (fZ) goto L_00415392;
L_00415254:; BB(0x00415254);
    /* 00415254: fld dword ptr [0x8fadac] */ FPUSH(R_F32((u32)(0x8fadacu)));
    /* 0041525a: fld dword ptr [0x8fada8] */ FPUSH(R_F32((u32)(0x8fada8u)));
    /* 00415260: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 00415267: lea eax, [edx + ebx] */ r_eax = (u32)(r_edx+r_ebx);
    /* 0041526a: mov dword ptr [ecx + 0x38], 0x3f800000 */ W32((u32)(r_ecx+0x38u), 0x3f800000u);
    /* 00415271: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00415274: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 00415277: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00415279: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0041527b: lea edx, [edx + ebx + 1] */ r_edx = (u32)(r_edx+r_ebx+0x1u);
    /* 0041527f: fst dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0));
    /* 00415282: fst dword ptr [ecx + 0x54] */ W_F32((u32)(r_ecx+0x54u), ST(0));
    /* 00415285: fst dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0));
    /* 00415288: fst dword ptr [ecx + 0x94] */ W_F32((u32)(r_ecx+0x94u), ST(0));
    /* 0041528e: fst dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0));
    /* 00415294: fst dword ptr [ecx + 0xd4] */ W_F32((u32)(r_ecx+0xd4u), ST(0));
    /* 0041529a: fst dword ptr [ecx + 0xf4] */ W_F32((u32)(r_ecx+0xf4u), ST(0));
    /* 004152a0: fstp dword ptr [ecx + 0x114] */ W_F32((u32)(r_ecx+0x114u), ST(0)); FPOP();
    /* 004152a6: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004152a9: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 004152ac: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004152ae: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004152b0: mov dword ptr [ecx + 0x50], 0 */ W32((u32)(r_ecx+0x50u), 0x0u);
    /* 004152b7: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 004152ba: fst dword ptr [ecx + 0x5c] */ W_F32((u32)(r_ecx+0x5cu), ST(0));
    /* 004152bd: fst dword ptr [ecx + 0x7c] */ W_F32((u32)(r_ecx+0x7cu), ST(0));
    /* 004152c0: fst dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0));
    /* 004152c6: fst dword ptr [ecx + 0xbc] */ W_F32((u32)(r_ecx+0xbcu), ST(0));
    /* 004152cc: fst dword ptr [ecx + 0xdc] */ W_F32((u32)(r_ecx+0xdcu), ST(0));
    /* 004152d2: fst dword ptr [ecx + 0xfc] */ W_F32((u32)(r_ecx+0xfcu), ST(0));
    /* 004152d8: fstp dword ptr [ecx + 0x11c] */ W_F32((u32)(r_ecx+0x11cu), ST(0)); FPOP();
    /* 004152de: mov dword ptr [ecx + 0x58], 0x3f800000 */ W32((u32)(r_ecx+0x58u), 0x3f800000u);
    /* 004152e5: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 004152ec: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004152ee: mov dword ptr [ecx + 0x78], 0x3f800000 */ W32((u32)(r_ecx+0x78u), 0x3f800000u);
    /* 004152f5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004152f7: mov dword ptr [ecx + 0x90], 0 */ W32((u32)(r_ecx+0x90u), 0x0u);
    /* 00415301: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415302: mov dword ptr [ecx + 0x98], 0x3f800000 */ W32((u32)(r_ecx+0x98u), 0x3f800000u);
    /* 0041530c: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 00415316: mov dword ptr [ecx + 0xb8], 0x3f800000 */ W32((u32)(r_ecx+0xb8u), 0x3f800000u);
    /* 00415320: mov dword ptr [ecx + 0xd0], 0 */ W32((u32)(r_ecx+0xd0u), 0x0u);
    /* 0041532a: mov dword ptr [ecx + 0xd8], 0x3f800000 */ W32((u32)(r_ecx+0xd8u), 0x3f800000u);
    /* 00415334: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 0041533e: mov dword ptr [ecx + 0xf8], 0x3f800000 */ W32((u32)(r_ecx+0xf8u), 0x3f800000u);
    /* 00415348: mov dword ptr [ecx + 0x110], 0 */ W32((u32)(r_ecx+0x110u), 0x0u);
    /* 00415352: mov dword ptr [ecx + 0x118], 0x3f800000 */ W32((u32)(r_ecx+0x118u), 0x3f800000u);
    /* 0041535c: call 0x4088b8 */ r_esp -= 4; W32(r_esp, 0x415361u); f_004088b8();
    /* 00415361: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415364: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00415367: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0041536a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0041536d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00415370: mov dword ptr [edx + 0x130], eax */ W32((u32)(r_edx+0x130u), r_eax);
    /* 00415376: mov eax, edx */ r_eax = r_edx;
    /* 00415378: mov dword ptr [edx + 0x138], 0 */ W32((u32)(r_edx+0x138u), 0x0u);
    /* 00415382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00415385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0041538c: mov esp, ebp */ r_esp = r_ebp;
    /* 0041538e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041538f: ret 8 */ FN_RET(0x00415154); r_esp += 12; return;
L_00415392:; BB(0x00415392);
    /* 00415392: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00415397: call 0x4153a8 */ r_esp -= 4; W32(r_esp, 0x41539cu); f_004153a8();
    /* 0041539c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0041539f: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004153a2: jmp 0x415254 */ goto L_00415254;
}

void f_00415246(void)
{
    FN_ENTER(0x00415246);
    /* 00415246: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00415247: int3  */ UNSUP(0x00415247, "int3");
}

void f_00415300(void)
{
    FN_ENTER(0x00415300);
    /* 00415300: add byte ptr [ecx - 0x39], dl */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 00415303: sbb dword ptr [eax], 0xc73f8000 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0xc73f8000u; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 0041530d: xor dword ptr [eax], 0xc7000000 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xc7000000u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 00415317: cmp dword ptr [eax], 0xc73f8000 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xc73f8000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00415321: adc eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 00415327: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415329: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 0041532b: sbb eax, 0 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00415331: add byte ptr [eax - 0xf7e38c1], al */ { u32 ad = (u32)(r_eax+0xf081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415337: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415339: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041533b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041533d: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 0041533f: cmp eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;   }
    /* 00415345: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041534b: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041534d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041534f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415351: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 00415353: sbb dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1u; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 00415359: add byte ptr [eax + 0x3557e83f], al */ { u32 ad = (u32)(r_eax+0x3557e83fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x0041535f, "falls out of decoded code");
}

void f_00415345(void)
{
    FN_ENTER(0x00415345);
    /* 00415345: add byte ptr [eax + 0x1081c73f], al */ { u32 ad = (u32)(r_eax+0x1081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041534b: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0041534d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0041534f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415351: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 00415353: sbb dword ptr [eax], 1 */ { u32 ad = (u32)(r_eax); u32 c = fC; u32 a = R32(ad); u32 b = 0x1u; u32 r = (a - b - c) & 0xffffffffu; W32(ad, r);  }
    /* 00415359: add byte ptr [eax + 0x3557e83f], al */ { u32 ad = (u32)(r_eax+0x3557e83fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x0041535f, "falls out of decoded code");
}

void f_00415355(void)
{
    FN_ENTER(0x00415355);
    /* 00415355: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00415357: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00415359: add byte ptr [eax + 0x3557e83f], al */ { u32 ad = (u32)(r_eax+0x3557e83fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    UNSUP(0x0041535f, "falls out of decoded code");
}

void f_004153a8(void) /* sub_4153A8 */
{
    FN_ENTER(0x004153a8);
    /* 004153a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004153a9: mov esi, ecx */ r_esi = r_ecx;
    /* 004153ab: add esi, 0x13c */ {  u32 a = r_esi; u32 b = 0x13cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004153b1: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 004153b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004153b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004153b9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x4153beu); f_0086b688();
    /* 004153be: push 0x7f */ { u32 v = 0x7fu; r_esp -= 4; W32(r_esp, v); }
    /* 004153c0: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004153c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004153c5: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4153cau); f_00857dec();
    /* 004153ca: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004153cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004153ce: ret 4 */ FN_RET(0x004153a8); r_esp += 8; return;
}

void f_004153d4(void) /* sub_4153D4 */
{
    FN_ENTER(0x004153d4);
    /* 004153d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004153d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004153d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004153d7: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004153da: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004153dc: mov ecx, dword ptr [ebx + 0x128] */ r_ecx = R32((u32)(r_ebx+0x128u));
    /* 004153e2: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004153e5: jge 0x4153f0 */ if ((fS==fO)) goto L_004153f0;
L_004153e7:; BB(0x004153e7);
    /* 004153e7: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004153ea: mov dword ptr [ebx + 0x128], ecx */ W32((u32)(r_ebx+0x128u), r_ecx);
L_004153f0:; BB(0x004153f0);
    /* 004153f0: fld dword ptr [0x8fadc8] */ FPUSH(R_F32((u32)(0x8fadc8u)));
    /* 004153f6: fld dword ptr [0x8fadc0] */ FPUSH(R_F32((u32)(0x8fadc0u)));
    /* 004153fc: mov esi, 0x42a60000 */ r_esi = 0x42a60000u;
    /* 00415401: mov edi, 0x422c0000 */ r_edi = 0x422c0000u;
    /* 00415406: mov edx, dword ptr [ebx + 0x12c] */ r_edx = R32((u32)(r_ebx+0x12cu));
    /* 0041540c: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0041540f: mov eax, 0xff */ r_eax = 0xffu;
    /* 00415414: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041541a: jl 0x41541e */ if ((fS!=fO)) goto L_0041541e;
L_0041541c:; BB(0x0041541c);
    /* 0041541c: mov edx, eax */ r_edx = r_eax;
L_0041541e:; BB(0x0041541e);
    /* 0041541e: mov dword ptr [ebx + 0x12c], edx */ W32((u32)(r_ebx+0x12cu), r_edx);
    /* 00415424: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 00415427: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415429: jmp 0x415431 */ goto L_00415431;
L_0041542b:; BB(0x0041542b);
    /* 0041542b: mov ecx, dword ptr [ebx + 0x128] */ r_ecx = R32((u32)(r_ebx+0x128u));
L_00415431:; BB(0x00415431);
    /* 00415431: fld dword ptr [eax + 0x8fad68] */ FPUSH(R_F32((u32)(r_eax+0x8fad68u)));
    /* 00415437: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415439: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041543c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0041543f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00415442: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00415445: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00415447: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00415449: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0041544b: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 0041544d: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00415450: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00415452: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00415455: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415458: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041545b: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041545e: jl 0x41542b */ if ((fS!=fO)) goto L_0041542b;
L_00415460:; BB(0x00415460);
    /* 00415460: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415462: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415464: lea edx, [ebx + 0x120] */ r_edx = (u32)(r_ebx+0x120u);
    /* 0041546a: lea eax, [ebx + 0x13c] */ r_eax = (u32)(r_ebx+0x13cu);
    /* 00415470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415471: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00415473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415474: call 0x415480 */ r_esp -= 4; W32(r_esp, 0x415479u); f_00415480();
    /* 00415479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041547c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041547d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041547e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041547f: ret  */ FN_RET(0x004153d4); r_esp += 4; return;
}

void f_00415441(void)
{
    FN_ENTER(0x00415441);
    goto L_00415441;
L_0041542b:; BB(0x0041542b);
    /* 0041542b: mov ecx, dword ptr [ebx + 0x128] */ r_ecx = R32((u32)(r_ebx+0x128u));
    /* 00415431: fld dword ptr [eax + 0x8fad68] */ FPUSH(R_F32((u32)(r_eax+0x8fad68u)));
    /* 00415437: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415439: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041543c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0041543f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
L_00415441:; BB(0x00415441);
    /* 00415441: and al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fP = !__builtin_parity(r & 0xffu); }
    /* 00415442: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00415443: jp 0x415449 */ if (fP) goto L_00415449;
L_00415445:; BB(0x00415445);
    /* 00415445: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00415447: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_00415449:; BB(0x00415449);
    /* 00415449: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0041544b: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 0041544d: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00415450: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00415452: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00415455: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415458: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041545b: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041545e: jl 0x41542b */ if ((fS!=fO)) goto L_0041542b;
L_00415460:; BB(0x00415460);
    /* 00415460: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415462: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415464: lea edx, [ebx + 0x120] */ r_edx = (u32)(r_ebx+0x120u);
    /* 0041546a: lea eax, [ebx + 0x13c] */ r_eax = (u32)(r_ebx+0x13cu);
    /* 00415470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415471: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00415473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415474: call 0x415480 */ r_esp -= 4; W32(r_esp, 0x415479u); f_00415480();
    /* 00415479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041547c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041547d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041547e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041547f: ret  */ FN_RET(0x00415441); r_esp += 4; return;
}

void f_00415452(void)
{
    FN_ENTER(0x00415452);
    goto L_00415452;
L_0041542b:; BB(0x0041542b);
    /* 0041542b: mov ecx, dword ptr [ebx + 0x128] */ r_ecx = R32((u32)(r_ebx+0x128u));
    /* 00415431: fld dword ptr [eax + 0x8fad68] */ FPUSH(R_F32((u32)(r_eax+0x8fad68u)));
    /* 00415437: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00415439: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0041543c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0041543f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00415442: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00415445: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00415447: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00415449: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0041544b: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 0041544d: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 00415450: fadd st(1) */ ST(0) = ST(0) + ST(1);
L_00415452:; BB(0x00415452);
    /* 00415452: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00415455: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415458: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0041545b: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041545e: jl 0x41542b */ if ((fS!=fO)) goto L_0041542b;
L_00415460:; BB(0x00415460);
    /* 00415460: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415462: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00415464: lea edx, [ebx + 0x120] */ r_edx = (u32)(r_ebx+0x120u);
    /* 0041546a: lea eax, [ebx + 0x13c] */ r_eax = (u32)(r_ebx+0x13cu);
    /* 00415470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415471: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00415473: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00415474: call 0x415480 */ r_esp -= 4; W32(r_esp, 0x415479u); f_00415480();
    /* 00415479: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041547c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041547d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0041547e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0041547f: ret  */ FN_RET(0x00415452); r_esp += 4; return;
}

void f_00415480(void) /* sub_415480 */
{
    FN_ENTER(0x00415480);
    /* 00415480: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415483: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415487: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x41548cu); f_007ac344();
    /* 0041548c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00415490: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00415494: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00415497: fadd dword ptr [eax*4 + 0x8fad88] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fad88u));
    /* 0041549e: fsubr dword ptr [0x8fad9c] */ ST(0) = R_F32((u32)(0x8fad9cu)) - ST(0);
    /* 004154a4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004154a8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004154aa: mov dword ptr [eax + 4], 0x42ac0000 */ W32((u32)(r_eax+0x4u), 0x42ac0000u);
    /* 004154b1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004154b4: ret 8 */ FN_RET(0x00415480); r_esp += 12; return;
}

void f_004154b8(void) /* sub_4154B8 */
{
    FN_ENTER(0x004154b8);
    /* 004154b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004154b9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004154ba: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004154bd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004154bf: mov eax, dword ptr [ebp + 0x138] */ r_eax = R32((u32)(r_ebp+0x138u));
    /* 004154c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154c7: jne 0x4154ed */ if (!fZ) goto L_004154ed;
L_004154c9:; BB(0x004154c9);
    /* 004154c9: mov eax, dword ptr [ebp + 0x134] */ r_eax = R32((u32)(r_ebp+0x134u));
    /* 004154cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154d2: je 0x4155d5 */ if (fZ) goto L_004155d5;
L_004154d8:; BB(0x004154d8);
    /* 004154d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004154da: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x4154dfu); f_008173d0();
    /* 004154df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154e1: je 0x4155cb */ if (fZ) goto L_004155cb;
L_004154e7:; BB(0x004154e7);
    /* 004154e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004154ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004154eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004154ec: ret  */ FN_RET(0x004154b8); r_esp += 4; return;
L_004154ed:; BB(0x004154ed);
    /* 004154ed: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004154f2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004154f5: je 0x4155c5 */ if (fZ) goto L_004155c5;
L_004154fb:; BB(0x004154fb);
    /* 004154fb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004154fd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004154ff: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x415504u); f_0082acfc();
    /* 00415504: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00415506: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00415508: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x41550du); f_0082acfc();
    /* 0041550d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415510: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 00415513: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00415518: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x41551du); f_0082bb30();
    /* 0041551d: mov ecx, dword ptr [ebp + 0x23c] */ r_ecx = R32((u32)(r_ebp+0x23cu));
    /* 00415523: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x415528u); f_00829cc8();
    /* 00415528: cmp edi, 0xb */ {  u32 a = r_edi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041552b: jle 0x415534 */ if ((fZ||fS!=fO)) goto L_00415534;
L_0041552d:; BB(0x0041552d);
    /* 0041552d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00415532: jmp 0x415536 */ goto L_00415536;
L_00415534:; BB(0x00415534);
    /* 00415534: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00415536:; BB(0x00415536);
    /* 00415536: mov edx, 0x1fffffff */ r_edx = 0x1fffffffu;
    /* 0041553b: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x415540u); f_0082bb60();
    /* 00415540: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00415544: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415546: lea edi, [ebp + 0x20] */ r_edi = (u32)(r_ebp+0x20u);
    /* 00415549: mov esi, eax */ r_esi = r_eax;
L_0041554b:; BB(0x0041554b);
    /* 0041554b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041554c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00415550: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00415554: fadd dword ptr [0x8fad90] */ ST(0) = ST(0) + R_F32((u32)(0x8fad90u));
    /* 0041555a: fdivr dword ptr [0x8fad94] */ ST(0) = R_F32((u32)(0x8fad94u)) / ST(0);
    /* 00415560: mov ecx, edi */ r_ecx = r_edi;
    /* 00415562: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415565: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x41556au); f_0082b440();
    /* 0041556a: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0041556d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00415570: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415573: jl 0x41554b */ if ((fS!=fO)) goto L_0041554b;
L_00415575:; BB(0x00415575);
    /* 00415575: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00415579: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x41557eu); f_004ac444();
    /* 0041557e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00415580: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415582: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x415587u); f_0082acfc();
    /* 00415587: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00415589: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041558b: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x415590u); f_0082acfc();
    /* 00415590: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415593: mov edx, dword ptr [ebp + 0x12c] */ r_edx = R32((u32)(r_ebp+0x12cu));
    /* 00415599: lea edi, [ebp + 0x120] */ r_edi = (u32)(r_ebp+0x120u);
    /* 0041559f: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 004155a2: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004155a8: lea eax, [ebp + 0x13c] */ r_eax = (u32)(r_ebp+0x13cu);
    /* 004155ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004155af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004155b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004155b2: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004155b5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004155b6: call 0x4155f0 */ r_esp -= 4; W32(r_esp, 0x4155bbu); f_004155f0();
    /* 004155bb: mov eax, dword ptr [ebp + 0x134] */ r_eax = R32((u32)(r_ebp+0x134u));
    /* 004155c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155c3: je 0x4155e8 */ if (fZ) goto L_004155e8;
L_004155c5:; BB(0x004155c5);
    /* 004155c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004155c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004155c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004155ca: ret  */ FN_RET(0x004154b8); r_esp += 4; return;
L_004155cb:; BB(0x004155cb);
    /* 004155cb: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x4155d0u); f_007a93d8();
    /* 004155d0: jmp 0x4154fb */ goto L_004154fb;
L_004155d5:; BB(0x004155d5);
    /* 004155d5: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004155da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004155dc: jne 0x4154fb */ if (!fZ) goto L_004154fb;
L_004155e2:; BB(0x004155e2);
    /* 004155e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004155e5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004155e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004155e7: ret  */ FN_RET(0x004154b8); r_esp += 4; return;
L_004155e8:; BB(0x004155e8);
    /* 004155e8: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4155edu); f_007a9318();
    /* 004155ed: jmp 0x4155c5 */ goto L_004155c5;
}

void f_004155f0(void) /* sub_4155F0 */
{
    FN_ENTER(0x004155f0);
    /* 004155f0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004155f4: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004155f8: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004155fc: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004155ff: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00415601: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x415606u); f_007ac12c();
    /* 00415606: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415609: ret 0x10 */ FN_RET(0x004155f0); r_esp += 20; return;
}

void f_0041560c(void) /* sub_41560C */
{
    FN_ENTER(0x0041560c);
    /* 0041560c: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0041560f: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x415614u); f_007932e8();
    /* 00415614: mov dword ptr [esp], 0x8fadf8 */ W32((u32)(r_esp), 0x8fadf8u);
    /* 0041561b: mov eax, 0x8fadd0 */ r_eax = 0x8fadd0u;
    /* 00415620: mov edx, 0x9a37c0 */ r_edx = 0x9a37c0u;
    /* 00415625: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00415629: mov dword ptr [esp + 0x14], 0x8fae18 */ W32((u32)(r_esp+0x14u), 0x8fae18u);
    /* 00415631: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00415635: mov dword ptr [esp + 0x20], 0x9a37e0 */ W32((u32)(r_esp+0x20u), 0x9a37e0u);
    /* 0041563d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00415641: mov dword ptr [esp + 0x34], 0x9a3800 */ W32((u32)(r_esp+0x34u), 0x9a3800u);
    /* 00415649: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0041564d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00415651: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00415655: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 0041565a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0041565e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00415662: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00415666: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0041566a: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0041566e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00415672: mov ecx, dword ptr [esp + eax*4 + 0x20] */ r_ecx = R32((u32)(r_esp+r_eax*4+0x20u));
    /* 00415676: mov dword ptr [0xa3b1cc], ecx */ W32((u32)(0xa3b1ccu), r_ecx);
    /* 0041567c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0041567d: push dword ptr [esp + eax*4 + 4] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415681: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x415686u); f_0081a934();
    /* 00415686: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415689: ret  */ FN_RET(0x0041560c); r_esp += 4; return;
}

void f_0041568c(void) /* sub_41568C */
{
    FN_ENTER(0x0041568c);
    /* 0041568c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041568d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041568f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00415691: call 0x4156b0 */ r_esp -= 4; W32(r_esp, 0x415696u); f_004156b0();
    /* 00415696: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0041569a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0041569c: jne 0x4156a2 */ if (!fZ) goto L_004156a2;
L_0041569e:; BB(0x0041569e);
    /* 0041569e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041569f: ret 4 */ FN_RET(0x0041568c); r_esp += 8; return;
L_004156a2:; BB(0x004156a2);
    /* 004156a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004156a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4156a8u); f_005c2f74();
    /* 004156a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004156a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004156aa: ret 4 */ FN_RET(0x0041568c); r_esp += 8; return;
}

void f_004156b0(void) /* sub_4156B0 */
{
    FN_ENTER(0x004156b0);
    /* 004156b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004156b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004156b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004156b5: push 0x8cd19c */ { u32 v = 0x8cd19cu; r_esp -= 4; W32(r_esp, v); }
    /* 004156ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004156c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004156c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004156c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004156cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004156ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004156d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004156d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004156d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004156da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004156dd: mov dword ptr [ecx], 0xaf3538 */ W32((u32)(r_ecx), 0xaf3538u);
    /* 004156e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004156ea: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4156efu); f_008171e8();
    /* 004156ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004156f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004156f9: mov esp, ebp */ r_esp = r_ebp;
    /* 004156fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004156fc: ret  */ FN_RET(0x004156b0); r_esp += 4; return;
}

void f_00415700(void) /* sub_415700 */
{
    FN_ENTER(0x00415700);
    /* 00415700: mov ecx, dword ptr [0xa3b1d4] */ r_ecx = R32((u32)(0xa3b1d4u));
    /* 00415706: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00415708: je 0x415719 */ if (fZ) goto L_00415719;
L_0041570a:; BB(0x0041570a);
    /* 0041570a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x41570fu); f_00829de0();
    /* 0041570f: mov dword ptr [0xa3b1d4], 0 */ W32((u32)(0xa3b1d4u), 0x0u);
L_00415719:; BB(0x00415719);
    /* 00415719: ret  */ FN_RET(0x00415700); r_esp += 4; return;
}

void f_0041571c(void) /* sub_41571C */
{
    FN_ENTER(0x0041571c);
    /* 0041571c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0041571d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0041571f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415723: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00415725: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x41572au); f_008193cc();
    /* 0041572a: mov dword ptr [ebx], 0xaf3538 */ W32((u32)(r_ebx), 0xaf3538u);
    /* 00415730: mov edx, dword ptr [0x9a3834] */ r_edx = R32((u32)(0x9a3834u));
    /* 00415736: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00415739: mov eax, ebx */ r_eax = r_ebx;
    /* 0041573b: mov dword ptr [ebx + 0x7c], 0x33 */ W32((u32)(r_ebx+0x7cu), 0x33u);
    /* 00415742: mov dword ptr [ebx + 0x80], 0xffffffff */ W32((u32)(r_ebx+0x80u), 0xffffffffu);
    /* 0041574c: mov dword ptr [ebx + 0x34], 0x3f1a0000 */ W32((u32)(r_ebx+0x34u), 0x3f1a0000u);
    /* 00415753: mov dword ptr [ebx + 0x38], 0x3f720000 */ W32((u32)(r_ebx+0x38u), 0x3f720000u);
    /* 0041575a: mov dword ptr [ebx + 0x2c], 0x3ef40000 */ W32((u32)(r_ebx+0x2cu), 0x3ef40000u);
    /* 00415761: mov dword ptr [ebx + 0x30], 0x3f520000 */ W32((u32)(r_ebx+0x30u), 0x3f520000u);
    /* 00415768: mov dword ptr [ebx + 0x4c], 0x3f220000 */ W32((u32)(r_ebx+0x4cu), 0x3f220000u);
    /* 0041576f: mov dword ptr [ebx + 0x50], 0x3f520000 */ W32((u32)(r_ebx+0x50u), 0x3f520000u);
    /* 00415776: mov dword ptr [ebx + 0x54], 0x3f420000 */ W32((u32)(r_ebx+0x54u), 0x3f420000u);
    /* 0041577d: mov dword ptr [ebx + 0x58], 0x3f720000 */ W32((u32)(r_ebx+0x58u), 0x3f720000u);
    /* 00415784: mov dword ptr [ebx + 0x84], 0x434d0000 */ W32((u32)(r_ebx+0x84u), 0x434d0000u);
    /* 0041578e: mov dword ptr [ebx + 0x88], 0x43d28000 */ W32((u32)(r_ebx+0x88u), 0x43d28000u);
    /* 00415798: mov dword ptr [ebx + 0x8c], 0x43ae0000 */ W32((u32)(r_ebx+0x8cu), 0x43ae0000u);
    /* 004157a2: mov dword ptr [ebx + 0x90], 0x43d28000 */ W32((u32)(r_ebx+0x90u), 0x43d28000u);
    /* 004157ac: mov dword ptr [ebx + 0x94], 0x43d80000 */ W32((u32)(r_ebx+0x94u), 0x43d80000u);
    /* 004157b6: mov dword ptr [ebx + 0x98], 0x43d28000 */ W32((u32)(r_ebx+0x98u), 0x43d28000u);
    /* 004157c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004157c1: ret 4 */ FN_RET(0x0041571c); r_esp += 8; return;
}

void f_00415741(void)
{
    FN_ENTER(0x00415741);
    /* 00415741: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00415743: add dword ptr [eax - 0x1000000], -1 */ { u32 ad = (u32)(r_eax+0xff000000u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    UNSUP(0x0041574a, "falls out of decoded code");
}

void f_004157c4(void) /* sub_4157C4 */
{
    FN_ENTER(0x004157c4);
    /* 004157c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004157c5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004157c8: mov edi, dword ptr [ecx + 0x80] */ r_edi = R32((u32)(r_ecx+0x80u));
    /* 004157ce: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004157d1: jge 0x4157dc */ if ((fS==fO)) goto L_004157dc;
L_004157d3:; BB(0x004157d3);
    /* 004157d3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004157d6: mov dword ptr [ecx + 0x80], edi */ W32((u32)(r_ecx+0x80u), r_edi);
L_004157dc:; BB(0x004157dc);
    /* 004157dc: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 004157df: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004157e5: jae 0x4157ea */ if (!fC) goto L_004157ea;
L_004157e7:; BB(0x004157e7);
    /* 004157e7: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004157ea:; BB(0x004157ea);
    /* 004157ea: fld dword ptr [0x8fae4c] */ FPUSH(R_F32((u32)(0x8fae4cu)));
    /* 004157f0: fld dword ptr [0x8fae50] */ FPUSH(R_F32((u32)(0x8fae50u)));
    /* 004157f6: fld dword ptr [0x8fae48] */ FPUSH(R_F32((u32)(0x8fae48u)));
    /* 004157fc: fld dword ptr [0x8fae84] */ FPUSH(R_F32((u32)(0x8fae84u)));
    /* 00415802: fld dword ptr [ecx + 0x84] */ FPUSH(R_F32((u32)(r_ecx+0x84u)));
    /* 00415808: fld dword ptr [ecx + 0x88] */ FPUSH(R_F32((u32)(r_ecx+0x88u)));
    /* 0041580e: fld dword ptr [0x8fae50] */ FPUSH(R_F32((u32)(0x8fae50u)));
    /* 00415814: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415816: fsub st(5), st(0) */ ST(5) = ST(5) - ST(0);
    /* 00415818: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041581a: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0041581c: fst dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0));
    /* 0041581f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00415821: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 00415824: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0041582c: mov eax, 0xff */ r_eax = 0xffu;
    /* 00415831: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00415839: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0041583f: jb 0x415843 */ if (fC) goto L_00415843;
L_00415841:; BB(0x00415841);
    /* 00415841: mov edx, eax */ r_edx = r_eax;
L_00415843:; BB(0x00415843);
    /* 00415843: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 00415846: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00415848: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 00415850: add edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00415853: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415856: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00415859: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0041585c: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0041585e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00415860: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 00415862: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00415866: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00415868: fld dword ptr [ecx + 0x8c] */ FPUSH(R_F32((u32)(r_ecx+0x8cu)));
    /* 0041586e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415870: fst dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0));
    /* 00415873: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00415875: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00415878: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0041587a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041587c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0041587e: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 00415880: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 00415886: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415888: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0041588c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0041588e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415890: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 00415893: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415895: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00415897: fst dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0));
    /* 0041589a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0041589c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0041589e: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 004158a1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004158a3: fld dword ptr [0x8fae50] */ FPUSH(R_F32((u32)(0x8fae50u)));
    /* 004158a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004158ab: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 004158ae: fld dword ptr [ecx + 0x94] */ FPUSH(R_F32((u32)(r_ecx+0x94u)));
    /* 004158b4: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004158b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004158b8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 004158ba: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004158bc: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 004158be: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 004158c4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004158c6: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 004158ca: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 004158cc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004158ce: fst dword ptr [ecx + 0x5c] */ W_F32((u32)(r_ecx+0x5cu), ST(0));
    /* 004158d1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004158d3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004158d5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004158d7: fst dword ptr [ecx + 0x60] */ W_F32((u32)(r_ecx+0x60u), ST(0));
    /* 004158da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004158dc: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004158de: fstp dword ptr [ecx + 0x64] */ W_F32((u32)(r_ecx+0x64u), ST(0)); FPOP();
    /* 004158e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004158e3: fstp dword ptr [ecx + 0x68] */ W_F32((u32)(r_ecx+0x68u), ST(0)); FPOP();
    /* 004158e6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004158e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004158ea: ret  */ FN_RET(0x004157c4); r_esp += 4; return;
}

void f_004158ec(void) /* sub_4158EC */
{
    FN_ENTER(0x004158ec);
    /* 004158ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004158ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004158ee: mov esi, ecx */ r_esi = r_ecx;
    /* 004158f0: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004158f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004158f7: jne 0x4158fc */ if (!fZ) goto L_004158fc;
L_004158f9:; BB(0x004158f9);
    /* 004158f9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004158fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004158fb: ret  */ FN_RET(0x004158ec); r_esp += 4; return;
L_004158fc:; BB(0x004158fc);
    /* 004158fc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x415901u); f_0082dbac();
    /* 00415901: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 00415904: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00415907: or eax, 0xffffff */ {  u32 a = r_eax; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0041590c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041590d: mov ecx, esi */ r_ecx = r_esi;
    /* 0041590f: call 0x41594c */ r_esp -= 4; W32(r_esp, 0x415914u); f_0041594c();
    /* 00415914: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x415919u); f_0082dab0();
    /* 00415919: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0041591b: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0041591d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x415922u); f_00792fe8();
    /* 00415922: mov ebp, eax */ r_ebp = r_eax;
    /* 00415924: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00415926: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 00415928: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x41592du); f_00792fe8();
    /* 0041592d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415930: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00415931: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415932: mov edx, dword ptr [esi + 0x7c] */ r_edx = R32((u32)(r_esi+0x7cu));
    /* 00415935: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00415938: or edx, 0xffffff */ {  u32 a = r_edx; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0041593e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0041593f: mov ecx, esi */ r_ecx = r_esi;
    /* 00415941: call 0x4159bc */ r_esp -= 4; W32(r_esp, 0x415946u); f_004159bc();
    /* 00415946: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00415947: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415948: ret  */ FN_RET(0x004158ec); r_esp += 4; return;
}

void f_0041594c(void) /* sub_41594C */
{
    FN_ENTER(0x0041594c);
    /* 0041594c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041594d: mov edi, ecx */ r_edi = r_ecx;
    /* 0041594f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00415954: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x415959u); f_0082bb30();
    /* 00415959: mov ecx, dword ptr [0xa3b1d4] */ r_ecx = R32((u32)(0xa3b1d4u));
    /* 0041595f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x415964u); f_00829cc8();
    /* 00415964: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00415968: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041596a: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x41596fu); f_0082bb60();
    /* 0041596f: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00415974: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 00415977: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x41597cu); f_0082b440();
    /* 0041597c: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x415981u); f_004ac444();
    /* 00415981: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00415986: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x41598bu); f_0082bb30();
    /* 0041598b: mov ecx, dword ptr [0xa3b1d4] */ r_ecx = R32((u32)(0xa3b1d4u));
    /* 00415991: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x415996u); f_00829cc8();
    /* 00415996: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0041599a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0041599c: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x4159a1u); f_0082bb60();
    /* 004159a1: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 004159a6: add edi, 0x3c */ {  u32 a = r_edi; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004159a9: mov ecx, edi */ r_ecx = r_edi;
    /* 004159ab: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x4159b0u); f_0082b440();
    /* 004159b0: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x4159b5u); f_004ac444();
    /* 004159b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004159b6: ret 4 */ FN_RET(0x0041594c); r_esp += 8; return;
}

void f_004159bc(void) /* sub_4159BC */
{
    FN_ENTER(0x004159bc);
    /* 004159bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004159bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004159be: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004159c1: mov edi, ecx */ r_edi = r_ecx;
    /* 004159c3: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 004159c7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004159cb: fld dword ptr [0x8fae3c] */ FPUSH(R_F32((u32)(0x8fae3cu)));
    /* 004159d1: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 004159d4: fld dword ptr [0x8fae40] */ FPUSH(R_F32((u32)(0x8fae40u)));
    /* 004159da: fadd dword ptr [edi + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x20u));
    /* 004159dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004159df: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004159e2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004159e6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004159ea: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004159ee: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x4159f3u); f_007ac12c();
    /* 004159f3: fld dword ptr [0x8fae3c] */ FPUSH(R_F32((u32)(0x8fae3cu)));
    /* 004159f9: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004159fc: fld dword ptr [0x8fae40] */ FPUSH(R_F32((u32)(0x8fae40u)));
    /* 00415a02: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 00415a05: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00415a09: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415a0b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415a0e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00415a12: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00415a16: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00415a1a: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x415a1fu); f_007ac12c();
    /* 00415a1f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415a22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415a23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00415a24: ret 0xc */ FN_RET(0x004159bc); r_esp += 16; return;
}

void f_00415a28(void) /* sub_415A28 */
{
    FN_ENTER(0x00415a28);
    /* 00415a28: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415a2b: mov eax, dword ptr [0xa3b1d4] */ r_eax = R32((u32)(0xa3b1d4u));
    /* 00415a30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415a32: je 0x415a38 */ if (fZ) goto L_00415a38;
L_00415a34:; BB(0x00415a34);
    /* 00415a34: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415a37: ret  */ FN_RET(0x00415a28); r_esp += 4; return;
L_00415a38:; BB(0x00415a38);
    /* 00415a38: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x415a3du); f_007932e8();
    /* 00415a3d: mov dword ptr [esp], 0x9a382c */ W32((u32)(r_esp), 0x9a382cu);
    /* 00415a44: mov eax, 0x9a3818 */ r_eax = 0x9a3818u;
    /* 00415a49: mov edx, 0x8fae94 */ r_edx = 0x8fae94u;
    /* 00415a4e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00415a52: mov dword ptr [esp + 0x20], 0x8faea8 */ W32((u32)(r_esp+0x20u), 0x8faea8u);
    /* 00415a5a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00415a5e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00415a62: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00415a66: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00415a6a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00415a6e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00415a72: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 00415a77: mov ecx, dword ptr [esp + eax*4] */ r_ecx = R32((u32)(r_esp+r_eax*4));
    /* 00415a7a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00415a7e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00415a82: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00415a86: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00415a8a: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00415a8e: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00415a92: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00415a96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00415a97: push dword ptr [esp + eax*4 + 0x24] */ { u32 v = R32((u32)(r_esp+r_eax*4+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415a9b: mov dword ptr [0xa3b1d4], ecx */ W32((u32)(0xa3b1d4u), r_ecx);
    /* 00415aa1: call 0x81a934 */ r_esp -= 4; W32(r_esp, 0x415aa6u); f_0081a934();
    /* 00415aa6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00415aa9: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415aac: ret  */ FN_RET(0x00415a28); r_esp += 4; return;
}

void f_00415ab0(void) /* sub_415AB0 */
{
    FN_ENTER(0x00415ab0);
    /* 00415ab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00415ab2: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415ab5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00415ab7: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x415abcu); f_0082bb30();
    /* 00415abc: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00415ac0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x415ac5u); f_00829cc8();
    /* 00415ac5: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00415ac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415acb: mov ebx, eax */ r_ebx = r_eax;
L_00415acd:; BB(0x00415acd);
    /* 00415acd: mov ecx, dword ptr [ebx + 0x9a3850] */ r_ecx = R32((u32)(r_ebx+0x9a3850u));
    /* 00415ad3: add ecx, dword ptr [esp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415ad7: mov edx, esi */ r_edx = r_esi;
    /* 00415ad9: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x415adeu); f_0082bb60();
    /* 00415ade: fild dword ptr [ebx + 0x9a3840] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3840u)));
    /* 00415ae4: fild dword ptr [ebx + 0x9a3844] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3844u)));
    /* 00415aea: fild dword ptr [ebx + 0x9a3848] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3848u)));
    /* 00415af0: fild dword ptr [ebx + 0x9a384c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a384cu)));
    /* 00415af6: mov ecx, dword ptr [ebx + 0x9a3840] */ r_ecx = R32((u32)(r_ebx+0x9a3840u));
    /* 00415afc: fld dword ptr [0xa3b1dc] */ FPUSH(R_F32((u32)(0xa3b1dcu)));
    /* 00415b02: fld dword ptr [0xa3b1e0] */ FPUSH(R_F32((u32)(0xa3b1e0u)));
    /* 00415b08: fld dword ptr [0xa3b1e4] */ FPUSH(R_F32((u32)(0xa3b1e4u)));
    /* 00415b0e: fld dword ptr [0xa3b1e8] */ FPUSH(R_F32((u32)(0xa3b1e8u)));
    /* 00415b14: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b17: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00415b19: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b20: mov ecx, dword ptr [ebx + 0x9a3844] */ r_ecx = R32((u32)(r_ebx+0x9a3844u));
    /* 00415b26: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00415b28: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415b2d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415b2f: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b32: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415b34: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b3b: mov ecx, dword ptr [ebx + 0x9a3848] */ r_ecx = R32((u32)(r_ebx+0x9a3848u));
    /* 00415b41: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00415b43: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415b45: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00415b49: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415b4b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00415b4d: fld dword ptr [0x8faee8] */ FPUSH(R_F32((u32)(0x8faee8u)));
    /* 00415b53: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00415b5b: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b5e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415b60: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b67: mov ecx, dword ptr [ebx + 0x9a384c] */ r_ecx = R32((u32)(r_ebx+0x9a384cu));
    /* 00415b6d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00415b6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415b71: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00415b75: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00415b7d: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00415b85: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415b8a: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b91: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415b93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415b95: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00415b99: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00415ba1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415ba2: fdiv dword ptr [esp + 0x34] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x34u));
    /* 00415ba6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415ba9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00415bad: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x415bb2u); f_0082b440();
    /* 00415bb2: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00415bb5: cmp ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415bbb: jl 0x415acd */ if ((fS!=fO)) goto L_00415acd;
L_00415bc1:; BB(0x00415bc1);
    /* 00415bc1: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x415bc6u); f_004ac444();
    /* 00415bc6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00415bca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415bcb: ret  */ FN_RET(0x00415ab0); r_esp += 4; return;
}

void f_00415b60(void)
{
    FN_ENTER(0x00415b60);
    goto L_00415b60;
L_00415acd:; BB(0x00415acd);
    /* 00415acd: mov ecx, dword ptr [ebx + 0x9a3850] */ r_ecx = R32((u32)(r_ebx+0x9a3850u));
    /* 00415ad3: add ecx, dword ptr [esp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415ad7: mov edx, esi */ r_edx = r_esi;
    /* 00415ad9: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x415adeu); f_0082bb60();
    /* 00415ade: fild dword ptr [ebx + 0x9a3840] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3840u)));
    /* 00415ae4: fild dword ptr [ebx + 0x9a3844] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3844u)));
    /* 00415aea: fild dword ptr [ebx + 0x9a3848] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3848u)));
    /* 00415af0: fild dword ptr [ebx + 0x9a384c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a384cu)));
    /* 00415af6: mov ecx, dword ptr [ebx + 0x9a3840] */ r_ecx = R32((u32)(r_ebx+0x9a3840u));
    /* 00415afc: fld dword ptr [0xa3b1dc] */ FPUSH(R_F32((u32)(0xa3b1dcu)));
    /* 00415b02: fld dword ptr [0xa3b1e0] */ FPUSH(R_F32((u32)(0xa3b1e0u)));
    /* 00415b08: fld dword ptr [0xa3b1e4] */ FPUSH(R_F32((u32)(0xa3b1e4u)));
    /* 00415b0e: fld dword ptr [0xa3b1e8] */ FPUSH(R_F32((u32)(0xa3b1e8u)));
    /* 00415b14: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b17: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00415b19: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b20: mov ecx, dword ptr [ebx + 0x9a3844] */ r_ecx = R32((u32)(r_ebx+0x9a3844u));
    /* 00415b26: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00415b28: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415b2a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415b2d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415b2f: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b32: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415b34: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b3b: mov ecx, dword ptr [ebx + 0x9a3848] */ r_ecx = R32((u32)(r_ebx+0x9a3848u));
    /* 00415b41: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00415b43: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415b45: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00415b49: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415b4b: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00415b4d: fld dword ptr [0x8faee8] */ FPUSH(R_F32((u32)(0x8faee8u)));
    /* 00415b53: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00415b5b: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b5e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00415b60:; BB(0x00415b60);
    /* 00415b60: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b67: mov ecx, dword ptr [ebx + 0x9a384c] */ r_ecx = R32((u32)(r_ebx+0x9a384cu));
    /* 00415b6d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00415b6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415b71: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00415b75: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00415b7d: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00415b85: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415b88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415b8a: fadd dword ptr [ecx*4 + 0x8faec8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec8u));
    /* 00415b91: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415b93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415b95: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00415b99: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00415ba1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415ba2: fdiv dword ptr [esp + 0x34] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x34u));
    /* 00415ba6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415ba9: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00415bad: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x415bb2u); f_0082b440();
    /* 00415bb2: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00415bb5: cmp ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415bbb: jl 0x415acd */ if ((fS!=fO)) goto L_00415acd;
L_00415bc1:; BB(0x00415bc1);
    /* 00415bc1: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x415bc6u); f_004ac444();
    /* 00415bc6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00415bca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415bcb: ret  */ FN_RET(0x00415b60); r_esp += 4; return;
}

void f_00415bcc(void) /* sub_415BCC */
{
    FN_ENTER(0x00415bcc);
    /* 00415bcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415bcd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00415bce: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415bd1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00415bd6: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x415bdbu); f_0082bb30();
    /* 00415bdb: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00415bdf: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x415be4u); f_00829cc8();
    /* 00415be4: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 00415be8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00415bea: mov ebx, eax */ r_ebx = r_eax;
L_00415bec:; BB(0x00415bec);
    /* 00415bec: mov ecx, dword ptr [ebx + 0x9a3850] */ r_ecx = R32((u32)(r_ebx+0x9a3850u));
    /* 00415bf2: add ecx, dword ptr [esp + 0x34] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00415bf6: mov edx, esi */ r_edx = r_esi;
    /* 00415bf8: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x415bfdu); f_0082bb60();
    /* 00415bfd: fild dword ptr [ebx + 0x9a3840] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3840u)));
    /* 00415c03: fild dword ptr [ebx + 0x9a3844] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3844u)));
    /* 00415c09: fild dword ptr [ebx + 0x9a3848] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a3848u)));
    /* 00415c0f: fild dword ptr [ebx + 0x9a384c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x9a384cu)));
    /* 00415c15: mov ecx, dword ptr [ebx + 0x9a3840] */ r_ecx = R32((u32)(r_ebx+0x9a3840u));
    /* 00415c1b: fld dword ptr [0xa3b1dc] */ FPUSH(R_F32((u32)(0xa3b1dcu)));
    /* 00415c21: fld dword ptr [0xa3b1e0] */ FPUSH(R_F32((u32)(0xa3b1e0u)));
    /* 00415c27: fld dword ptr [0xa3b1e4] */ FPUSH(R_F32((u32)(0xa3b1e4u)));
    /* 00415c2d: fld dword ptr [0xa3b1e8] */ FPUSH(R_F32((u32)(0xa3b1e8u)));
    /* 00415c33: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415c36: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00415c38: fadd dword ptr [ecx*4 + 0x8faec0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec0u));
    /* 00415c3f: mov ecx, dword ptr [ebx + 0x9a3844] */ r_ecx = R32((u32)(r_ebx+0x9a3844u));
    /* 00415c45: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00415c47: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415c49: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415c4c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415c4e: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415c51: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415c53: fadd dword ptr [ecx*4 + 0x8faec0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec0u));
    /* 00415c5a: mov ecx, dword ptr [ebx + 0x9a3848] */ r_ecx = R32((u32)(r_ebx+0x9a3848u));
    /* 00415c60: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00415c62: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00415c64: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00415c68: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00415c6a: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00415c6c: fld dword ptr [0x8faedc] */ FPUSH(R_F32((u32)(0x8faedcu)));
    /* 00415c72: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00415c7a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415c7d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415c7f: fadd dword ptr [ecx*4 + 0x8faec0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec0u));
    /* 00415c86: mov ecx, dword ptr [ebx + 0x9a384c] */ r_ecx = R32((u32)(r_ebx+0x9a384cu));
    /* 00415c8c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00415c8e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00415c90: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00415c94: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00415c9c: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00415ca4: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00415ca7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415ca9: fadd dword ptr [ecx*4 + 0x8faec0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x8faec0u));
    /* 00415cb0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00415cb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00415cb4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00415cb8: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00415cc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415cc1: fdiv dword ptr [esp + 0x34] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x34u));
    /* 00415cc5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415cc8: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00415ccc: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x415cd1u); f_0082b440();
    /* 00415cd1: add ebx, 0x14 */ {  u32 a = r_ebx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00415cd4: cmp ebx, 0xa0 */ {  u32 a = r_ebx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415cda: jl 0x415bec */ if ((fS!=fO)) goto L_00415bec;
L_00415ce0:; BB(0x00415ce0);
    /* 00415ce0: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x415ce5u); f_004ac444();
    /* 00415ce5: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00415ce8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00415ce9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00415cea: ret  */ FN_RET(0x00415bcc); r_esp += 4; return;
}

void f_00415cec(void) /* sub_415CEC */
{
    FN_ENTER(0x00415cec);
    /* 00415cec: movsx eax, byte ptr [0xa3b1f0] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415cf3: ret  */ FN_RET(0x00415cec); r_esp += 4; return;
}

void f_00415cf4(void) /* sub_415CF4 */
{
    FN_ENTER(0x00415cf4);
    /* 00415cf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415cf5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00415cf6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00415cf7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00415cf8: sub esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00415cfe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00415d00: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00415d02: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00415d04:; BB(0x00415d04);
    /* 00415d04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00415d05: call 0x82c204 */ r_esp -= 4; W32(r_esp, 0x415d0au); f_0082c204();
    /* 00415d0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00415d0b: mov dword ptr [ebp + ebx*4 + 0x60], eax */ W32((u32)(r_ebp+r_ebx*4+0x60u), r_eax);
    /* 00415d0f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00415d12: mov ebx, esi */ r_ebx = r_esi;
    /* 00415d14: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00415d1a: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415d1d: jl 0x415d04 */ if ((fS!=fO)) goto L_00415d04;
L_00415d1f:; BB(0x00415d1f);
    /* 00415d1f: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415d26: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 00415d2a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d2c: jne 0x415d52 */ if (!fZ) goto L_00415d52;
L_00415d2e:; BB(0x00415d2e);
    /* 00415d2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00415d30: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00415d32:; BB(0x00415d32);
    /* 00415d32: mov eax, dword ptr [ebp + eax*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_eax*4+0x60u));
    /* 00415d36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d38: jne 0x416d2c */ if (!fZ) goto L_00416d2c;
L_00415d3e:; BB(0x00415d3e);
    /* 00415d3e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00415d41: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 00415d44: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415d47: jl 0x415d32 */ if ((fS!=fO)) goto L_00415d32;
L_00415d49:; BB(0x00415d49);
    /* 00415d49: mov byte ptr [0xa3b1f0], 0 */ W8((u32)(0xa3b1f0u), 0x0u);
    /* 00415d50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00415d52:; BB(0x00415d52);
    /* 00415d52: mov eax, dword ptr [0xa3b1f4] */ r_eax = R32((u32)(0xa3b1f4u));
    /* 00415d57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d59: jne 0x416827 */ if (!fZ) goto L_00416827;
L_00415d5f:; BB(0x00415d5f);
    /* 00415d5f: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00415d62: ja 0x416170 */ if ((!fC&&!fZ)) goto L_00416170;
L_00415d68:; BB(0x00415d68);
    /* 00415d68: mov eax, dword ptr [edx*4 + 0x8faf78] */ r_eax = R32((u32)(r_edx*4+0x8faf78u));
    /* 00415d6f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00416170:; BB(0x00416170);
    /* 00416170: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416173: ja 0x416827 */ if ((!fC&&!fZ)) goto L_00416827;
L_00416179:; BB(0x00416179);
    /* 00416179: mov eax, dword ptr [edx*4 + 0x8faf58] */ r_eax = R32((u32)(r_edx*4+0x8faf58u));
    /* 00416180: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00415cf4); r_esp += 4; return;
L_00416d2c:; BB(0x00416d2c);
    /* 00416d2c: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00416d2f: mov byte ptr [0xa3b1f0], dl */ W8((u32)(0xa3b1f0u), (u8)r_edx);
    /* 00416d35: jmp 0x415d52 */ goto L_00415d52;
}

void f_00415d71(void)
{
    FN_ENTER(0x00415d71);
    /* 00415d71: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d75: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00415d7a: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415d80: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x415d85u); f_007c0c6c();
    /* 00415d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415d87: jne 0x415e92 */ if (!fZ) goto L_00415e92;
L_00415d8d:; BB(0x00415d8d);
    /* 00415d8d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d8f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00415d91: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00415d96: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415d9c: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x415da1u); f_007c0c6c();
    /* 00415da1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415da3: jne 0x415db1 */ if (!fZ) goto L_00415db1;
L_00415da5:; BB(0x00415da5);
    /* 00415da5: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415dac: jmp 0x416170 */ goto L_00416170;
L_00415db1:; BB(0x00415db1);
    /* 00415db1: mov byte ptr [esp + 0x48], 0 */ W8((u32)(r_esp+0x48u), 0x0u);
    /* 00415db6: mov eax, 0xff */ r_eax = 0xffu;
    /* 00415dbb: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00415dc0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00415dc2: mov byte ptr [esp + 0x49], 2 */ W8((u32)(r_esp+0x49u), 0x2u);
    /* 00415dc7: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00415dcb: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00415dcf: mov byte ptr [esp + 0x4a], 4 */ W8((u32)(r_esp+0x4au), 0x4u);
    /* 00415dd4: mov byte ptr [esp + 0x4b], 6 */ W8((u32)(r_esp+0x4bu), 0x6u);
    /* 00415dd9: mov byte ptr [esp + 0x4c], 0xff */ W8((u32)(r_esp+0x4cu), 0xffu);
L_00415dde:; BB(0x00415dde);
    /* 00415dde: mov ebx, esi */ r_ebx = r_esi;
    /* 00415de0: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00415de6: movzx edx, byte ptr [esp + ebx + 0x48] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x48u));
    /* 00415deb: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415df1: je 0x416832 */ if (fZ) goto L_00416832;
L_00415df7:; BB(0x00415df7);
    /* 00415df7: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 00415dfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415dfd: je 0x415e8a */ if (fZ) goto L_00415e8a;
L_00415e03:; BB(0x00415e03);
    /* 00415e03: mov edi, edx */ r_edi = r_edx;
    /* 00415e05: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00415e07: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00415e0b: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00415e0e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00415e11: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00415e15: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415e1c: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00415e1e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00415e21: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415e23: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00415e25: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 00415e28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415e29: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00415e2d: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00415e31: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415e34: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x415e39u); f_0082e900();
    /* 00415e39: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00415e3d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00415e41: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415e44: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00415e48: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00415e4d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00415e52: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00415e56: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00415e5a: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00415e5e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00415e62: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 00415e67: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00415e6a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415e6d: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00415e71: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415e74: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415e76: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415e79: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415e7b: jge 0x415e8a */ if ((fS==fO)) goto L_00415e8a;
L_00415e7d:; BB(0x00415e7d);
    /* 00415e7d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00415e81: movzx eax, byte ptr [esp + ebx + 0x48] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x48u));
    /* 00415e86: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_00415e8a:; BB(0x00415e8a);
    /* 00415e8a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00415e8d: jmp 0x415dde */ goto L_00415dde;
L_00415e92:; BB(0x00415e92);
    /* 00415e92: mov byte ptr [esp + 0x40], 0 */ W8((u32)(r_esp+0x40u), 0x0u);
    /* 00415e97: mov eax, 0xff */ r_eax = 0xffu;
    /* 00415e9c: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00415ea1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00415ea3: mov byte ptr [esp + 0x41], 2 */ W8((u32)(r_esp+0x41u), 0x2u);
    /* 00415ea8: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00415eac: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00415eb0: mov byte ptr [esp + 0x42], 4 */ W8((u32)(r_esp+0x42u), 0x4u);
    /* 00415eb5: mov byte ptr [esp + 0x43], 6 */ W8((u32)(r_esp+0x43u), 0x6u);
    /* 00415eba: mov byte ptr [esp + 0x44], 0xff */ W8((u32)(r_esp+0x44u), 0xffu);
L_00415ebf:; BB(0x00415ebf);
    /* 00415ebf: mov ebx, esi */ r_ebx = r_esi;
    /* 00415ec1: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00415ec7: movzx edx, byte ptr [esp + ebx + 0x40] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x40u));
    /* 00415ecc: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415ed2: je 0x41686a */ if (fZ) goto L_0041686a;
L_00415ed8:; BB(0x00415ed8);
    /* 00415ed8: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 00415edc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415ede: je 0x415f6b */ if (fZ) goto L_00415f6b;
L_00415ee4:; BB(0x00415ee4);
    /* 00415ee4: mov edi, edx */ r_edi = r_edx;
    /* 00415ee6: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00415ee8: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 00415eec: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00415eef: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00415ef2: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00415ef6: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415efd: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00415eff: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00415f02: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415f04: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00415f06: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 00415f09: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00415f0a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00415f0e: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00415f12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00415f15: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x415f1au); f_0082e900();
    /* 00415f1a: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00415f1e: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00415f22: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415f25: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00415f29: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00415f2e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00415f33: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00415f37: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00415f3b: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00415f3f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00415f43: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 00415f48: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00415f4b: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415f4e: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00415f52: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00415f55: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00415f57: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00415f5a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00415f5c: jge 0x415f6b */ if ((fS==fO)) goto L_00415f6b;
L_00415f5e:; BB(0x00415f5e);
    /* 00415f5e: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00415f62: movzx eax, byte ptr [esp + ebx + 0x40] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x40u));
    /* 00415f67: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_00415f6b:; BB(0x00415f6b);
    /* 00415f6b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00415f6e: jmp 0x415ebf */ goto L_00415ebf;
L_00416170:; BB(0x00416170);
    /* 00416170: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416173: ja 0x416827 */ if ((!fC&&!fZ)) goto L_00416827;
L_00416179:; BB(0x00416179);
    /* 00416179: mov eax, dword ptr [edx*4 + 0x8faf58] */ r_eax = R32((u32)(r_edx*4+0x8faf58u));
    /* 00416180: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00415d71); r_esp += 4; return;
L_00416832:; BB(0x00416832);
    /* 00416832: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 00416836: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0041683c: je 0x41685e */ if (fZ) goto L_0041685e;
L_0041683e:; BB(0x0041683e);
    /* 0041683e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00416840: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00416843: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416848: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x41684du); f_00814298();
    /* 0041684d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00416850: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00416853: mov byte ptr [0xa3b1f0], dl */ W8((u32)(0xa3b1f0u), (u8)r_edx);
    /* 00416859: jmp 0x416170 */ goto L_00416170;
L_0041685e:; BB(0x0041685e);
    /* 0041685e: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00416865: jmp 0x416170 */ goto L_00416170;
L_0041686a:; BB(0x0041686a);
    /* 0041686a: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0041686e: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00416874: je 0x415d8d */ if (fZ) goto L_00415d8d;
L_0041687a:; BB(0x0041687a);
    /* 0041687a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0041687c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041687d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041687e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0041687f: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00416884: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x416889u); f_00814298();
    /* 00416889: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0041688c: mov byte ptr [0xa3b1f0], bl */ W8((u32)(0xa3b1f0u), (u8)r_ebx);
    /* 00416892: jmp 0x415d8d */ goto L_00415d8d;
}

void f_00415f73(void)
{
    FN_ENTER(0x00415f73);
    /* 00415f73: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f75: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f77: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00415f7c: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415f82: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x415f87u); f_007c0c6c();
    /* 00415f87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415f89: jne 0x416094 */ if (!fZ) goto L_00416094;
L_00415f8f:; BB(0x00415f8f);
    /* 00415f8f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f91: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00415f93: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 00415f98: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00415f9e: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x415fa3u); f_007c0c6c();
    /* 00415fa3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415fa5: jne 0x415fb3 */ if (!fZ) goto L_00415fb3;
L_00415fa7:; BB(0x00415fa7);
    /* 00415fa7: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 00415fae: jmp 0x416170 */ goto L_00416170;
L_00415fb3:; BB(0x00415fb3);
    /* 00415fb3: mov byte ptr [esp + 0x58], 1 */ W8((u32)(r_esp+0x58u), 0x1u);
    /* 00415fb8: mov eax, 0xff */ r_eax = 0xffu;
    /* 00415fbd: mov ebx, 0xff */ r_ebx = 0xffu;
    /* 00415fc2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00415fc4: mov byte ptr [esp + 0x59], 3 */ W8((u32)(r_esp+0x59u), 0x3u);
    /* 00415fc9: mov dword ptr [esp + 0x38], ebx */ W32((u32)(r_esp+0x38u), r_ebx);
    /* 00415fcd: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00415fd1: mov byte ptr [esp + 0x5a], 5 */ W8((u32)(r_esp+0x5au), 0x5u);
    /* 00415fd6: mov byte ptr [esp + 0x5b], 7 */ W8((u32)(r_esp+0x5bu), 0x7u);
    /* 00415fdb: mov byte ptr [esp + 0x5c], 0xff */ W8((u32)(r_esp+0x5cu), 0xffu);
L_00415fe0:; BB(0x00415fe0);
    /* 00415fe0: mov ebx, esi */ r_ebx = r_esi;
    /* 00415fe2: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00415fe8: movzx edx, byte ptr [esp + ebx + 0x58] */ r_edx = (u32)R8((u32)(r_esp+r_ebx+0x58u));
    /* 00415fed: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415ff3: je 0x416897 */ if (fZ) goto L_00416897;
L_00415ff9:; BB(0x00415ff9);
    /* 00415ff9: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 00415ffd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00415fff: je 0x41608c */ if (fZ) goto L_0041608c;
L_00416005:; BB(0x00416005);
    /* 00416005: mov edi, edx */ r_edi = r_edx;
    /* 00416007: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00416009: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0041600d: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00416010: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00416013: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00416017: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 0041601e: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00416020: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00416023: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416025: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00416027: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 0041602a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0041602b: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0041602f: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00416033: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416036: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x41603bu); f_0082e900();
    /* 0041603b: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0041603f: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00416043: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416046: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0041604a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0041604f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416054: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416058: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0041605c: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00416060: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416064: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 00416069: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0041606c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041606f: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00416073: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416076: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416078: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041607b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0041607d: jge 0x41608c */ if ((fS==fO)) goto L_0041608c;
L_0041607f:; BB(0x0041607f);
    /* 0041607f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00416083: movzx eax, byte ptr [esp + ebx + 0x58] */ r_eax = (u32)R8((u32)(r_esp+r_ebx+0x58u));
    /* 00416088: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_0041608c:; BB(0x0041608c);
    /* 0041608c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0041608f: jmp 0x415fe0 */ goto L_00415fe0;
L_00416094:; BB(0x00416094);
    /* 00416094: mov byte ptr [esp + 0x50], 1 */ W8((u32)(r_esp+0x50u), 0x1u);
    /* 00416099: mov edx, 0xff */ r_edx = 0xffu;
    /* 0041609e: mov eax, 0xff */ r_eax = 0xffu;
    /* 004160a3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004160a5: mov byte ptr [esp + 0x51], 3 */ W8((u32)(r_esp+0x51u), 0x3u);
    /* 004160aa: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004160ae: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004160b2: mov byte ptr [esp + 0x52], 5 */ W8((u32)(r_esp+0x52u), 0x5u);
    /* 004160b7: mov byte ptr [esp + 0x53], 7 */ W8((u32)(r_esp+0x53u), 0x7u);
    /* 004160bc: mov byte ptr [esp + 0x54], 0xff */ W8((u32)(r_esp+0x54u), 0xffu);
L_004160c1:; BB(0x004160c1);
    /* 004160c1: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 004160c4: movzx edx, byte ptr [esp + esi + 0x50] */ r_edx = (u32)R8((u32)(r_esp+r_esi+0x50u));
    /* 004160c9: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160cf: je 0x4168cf */ if (fZ) goto L_004168cf;
L_004160d5:; BB(0x004160d5);
    /* 004160d5: mov eax, dword ptr [ebp + edx*4 + 0x60] */ r_eax = R32((u32)(r_ebp+r_edx*4+0x60u));
    /* 004160d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004160db: je 0x416168 */ if (fZ) goto L_00416168;
L_004160e1:; BB(0x004160e1);
    /* 004160e1: mov edi, edx */ r_edi = r_edx;
    /* 004160e3: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004160e5: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 004160e9: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004160ec: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 004160ef: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 004160f3: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004160fa: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 004160fc: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004160ff: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416101: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00416103: movsx edi, al */ r_edi = (u32)(i32)(i8)(u8)r_eax;
    /* 00416106: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00416107: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0041610b: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 0041610f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00416112: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x416117u); f_0082e900();
    /* 00416117: sub edi, dword ptr [esp + 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x2cu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0041611b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0041611f: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416122: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00416126: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0041612b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00416130: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00416134: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00416138: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 0041613c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00416140: movzx eax, byte ptr [esp + 0x18] */ r_eax = (u32)R8((u32)(r_esp+0x18u));
    /* 00416145: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00416148: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0041614b: sub eax, dword ptr [esp + 0x30] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0041614f: imul eax, eax */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_eax; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00416152: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00416154: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00416157: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00416159: jge 0x416168 */ if ((fS==fO)) goto L_00416168;
L_0041615b:; BB(0x0041615b);
    /* 0041615b: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0041615f: movzx eax, byte ptr [esp + esi + 0x50] */ r_eax = (u32)R8((u32)(r_esp+r_esi+0x50u));
    /* 00416164: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
L_00416168:; BB(0x00416168);
    /* 00416168: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0041616b: jmp 0x4160c1 */ goto L_004160c1;
L_00416170:; BB(0x00416170);
    /* 00416170: cmp edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00416173: ja 0x416827 */ if ((!fC&&!fZ)) goto L_00416827;
L_00416179:; BB(0x00416179);
    /* 00416179: mov eax, dword ptr [edx*4 + 0x8faf58] */ r_eax = R32((u32)(r_edx*4+0x8faf58u));
    /* 00416180: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00416827:; BB(0x00416827);
    /* 00416827: add esp, 0xb0 */ {  u32 a = r_esp; u32 b = 0xb0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0041682d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0041682e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0041682f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00416830: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00416831: ret  */ FN_RET(0x00415f73); r_esp += 4; return;
L_00416897:; BB(0x00416897);
    /* 00416897: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 0041689b: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004168a1: je 0x4168c3 */ if (fZ) goto L_004168c3;
L_004168a3:; BB(0x004168a3);
    /* 004168a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004168a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168a8: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004168ad: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4168b2u); f_00814298();
    /* 004168b2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004168b5: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 004168b8: mov byte ptr [0xa3b1f0], dl */ W8((u32)(0xa3b1f0u), (u8)r_edx);
    /* 004168be: jmp 0x416170 */ goto L_00416170;
L_004168c3:; BB(0x004168c3);
    /* 004168c3: movsx edx, byte ptr [0xa3b1f0] */ r_edx = (u32)(i32)(i8)R8((u32)(0xa3b1f0u));
    /* 004168ca: jmp 0x416170 */ goto L_00416170;
L_004168cf:; BB(0x004168cf);
    /* 004168cf: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004168d3: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004168d8: je 0x415f8f */ if (fZ) goto L_00415f8f;
L_004168de:; BB(0x004168de);
    /* 004168de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004168e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004168e3: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004168e8: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4168edu); f_00814298();
    /* 004168ed: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004168f0: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004168f4: mov byte ptr [0xa3b1f0], al */ W8((u32)(0xa3b1f0u), (u8)r_eax);
    /* 004168f9: jmp 0x415f8f */ goto L_00415f8f;
}

