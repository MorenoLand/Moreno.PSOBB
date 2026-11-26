#include "protos.h"

void f_004e7010(void) /* sub_4E7010 */
{
    FN_ENTER(0x004e7010);
    /* 004e7010: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7013: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004e7017: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004e701c: mov ecx, dword ptr [0xaf0360] */ r_ecx = R32((u32)(0xaf0360u));
    /* 004e7022: fld dword ptr [0x909f1c] */ FPUSH(R_F32((u32)(0x909f1cu)));
    /* 004e7028: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 004e702f: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004e7034: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004e7037: mov dword ptr [0xaab504], ecx */ W32((u32)(0xaab504u), r_ecx);
    /* 004e703d: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 004e7043: mov dword ptr [0xaab500], ecx */ W32((u32)(0xaab500u), r_ecx);
    /* 004e7049: or eax, 0x81c */ {  u32 a = r_eax; u32 b = 0x81cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e704e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004e7053: movsx eax, word ptr [edx + 0x42] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x42u));
    /* 004e7057: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004e705b: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004e705f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004e7061: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004e7065: movsx eax, word ptr [edx + 0x44] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x44u));
    /* 004e7069: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004e706d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e7071: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004e7073: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004e7077: movsx eax, word ptr [edx + 0x46] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x46u));
    /* 004e707b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004e707f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e7083: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004e7086: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004e7088: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004e708c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e708d: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4e7092u); f_0082d710();
    /* 004e7092: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7096: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4e709bu); f_0082e1e8();
    /* 004e709b: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 004e70a0: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 004e70a6: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 004e70ac: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004e70b1: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 004e70b7: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 004e70bd: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e70c0: ret  */ FN_RET(0x004e7010); r_esp += 4; return;
}

void f_004e70c4(void) /* sub_4E70C4 */
{
    FN_ENTER(0x004e70c4);
    /* 004e70c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e70c5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e70c8: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 004e70cc: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004e70d0: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004e70d5: mov edx, dword ptr [0xaf0360] */ r_edx = R32((u32)(0xaf0360u));
    /* 004e70db: mov ecx, dword ptr [0xaf0364] */ r_ecx = R32((u32)(0xaf0364u));
    /* 004e70e1: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 004e70e6: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004e70e9: mov dword ptr [0xaab504], edx */ W32((u32)(0xaab504u), r_edx);
    /* 004e70ef: mov dword ptr [0xaab500], ecx */ W32((u32)(0xaab500u), r_ecx);
    /* 004e70f5: or eax, 0x81c */ {  u32 a = r_eax; u32 b = 0x81cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e70fa: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004e70ff: fcomp dword ptr [0x909f34] */ fx_compare(ST(0), R_F32((u32)(0x909f34u))); FPOP();
    /* 004e7105: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004e7107: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004e7108: jae 0x4e7119 */ if (!fC) goto L_004e7119;
L_004e710a:; BB(0x004e710a);
    /* 004e710a: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 004e710f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e7111: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x4e7116u); f_0082d6fc();
    /* 004e7116: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004e7119:; BB(0x004e7119);
    /* 004e7119: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004e711d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e711f: je 0x4e7128 */ if (fZ) goto L_004e7128;
L_004e7121:; BB(0x004e7121);
    /* 004e7121: call 0x7a950c */ r_esp -= 4; W32(r_esp, 0x4e7126u); f_007a950c();
    /* 004e7126: jmp 0x4e7175 */ goto L_004e7175;
L_004e7128:; BB(0x004e7128);
    /* 004e7128: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004e712c: fld dword ptr [0x909f20] */ FPUSH(R_F32((u32)(0x909f20u)));
    /* 004e7132: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004e7135: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004e7138: movsx edx, word ptr [edi + 0x42] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x42u));
    /* 004e713c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004e7140: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 004e7144: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004e7146: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004e714a: movsx ecx, word ptr [edi + 0x44] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x44u));
    /* 004e714e: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004e7152: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e7156: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004e7158: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004e715c: movsx edi, word ptr [edi + 0x46] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edi+0x46u));
    /* 004e7160: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 004e7164: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004e7168: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004e716a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004e716e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e716f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x4e7174u); f_0082d710();
    /* 004e7174: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004e7175:; BB(0x004e7175);
    /* 004e7175: push dword ptr [esp + 0x28] */ { u32 v = R32((u32)(r_esp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7179: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4e717eu); f_0082e1e8();
    /* 004e717e: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 004e7183: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 004e7189: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 004e718f: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 004e7194: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 004e719a: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 004e71a0: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e71a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e71a4: ret  */ FN_RET(0x004e70c4); r_esp += 4; return;
}

void f_004e71a8(void) /* sub_4E71A8 */
{
    FN_ENTER(0x004e71a8);
    /* 004e71a8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004e71ad: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 004e71af: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e71b2: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004e71b7: call 0x7a9404 */ r_esp -= 4; W32(r_esp, 0x4e71bcu); f_007a9404();
    /* 004e71bc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004e71be: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x4e71c3u); f_007a94a0();
    /* 004e71c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e71c6: ret  */ FN_RET(0x004e71a8); r_esp += 4; return;
}

void f_004e71c8(void) /* sub_4E71C8 */
{
    FN_ENTER(0x004e71c8);
    /* 004e71c8: call 0x7a9424 */ r_esp -= 4; W32(r_esp, 0x4e71cdu); f_007a9424();
    /* 004e71cd: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 004e71d2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004e71d5: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 004e71da: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4e71dfu); f_007a94b0();
    /* 004e71df: ret  */ FN_RET(0x004e71c8); r_esp += 4; return;
}

void f_004e71e0(void) /* sub_4E71E0 */
{
    FN_ENTER(0x004e71e0);
    /* 004e71e0: mov eax, dword ptr [0xa4d848] */ r_eax = R32((u32)(0xa4d848u));
    /* 004e71e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e71e7: je 0x4e71fa */ if (fZ) goto L_004e71fa;
L_004e71e9:; BB(0x004e71e9);
    /* 004e71e9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 004e71ec: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004e71ef: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 004e71f2: mov eax, dword ptr [eax*8 + 0x9b8fc0] */ r_eax = R32((u32)(r_eax*8+0x9b8fc0u));
    /* 004e71f9: ret  */ FN_RET(0x004e71e0); r_esp += 4; return;
L_004e71fa:; BB(0x004e71fa);
    /* 004e71fa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004e71ff: ret  */ FN_RET(0x004e71e0); r_esp += 4; return;
}

void f_004e7200(void) /* sub_4E7200 */
{
    FN_ENTER(0x004e7200);
    /* 004e7200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7201: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7202: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e7203: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7204: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 004e7208: mov ebp, edi */ r_ebp = r_edi;
    /* 004e720a: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 004e720d: je 0x4e7212 */ if (fZ) goto L_004e7212;
L_004e720f:; BB(0x004e720f);
    /* 004e720f: lea ebp, [edi + 0x54] */ r_ebp = (u32)(r_edi+0x54u);
L_004e7212:; BB(0x004e7212);
    /* 004e7212: movzx esi, word ptr [ebp] */ r_esi = (u32)R16((u32)(r_ebp));
    /* 004e7216: mov eax, ebp */ r_eax = r_ebp;
    /* 004e7218: call 0x4e7308 */ r_esp -= 4; W32(r_esp, 0x4e721du); f_004e7308();
    /* 004e721d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e721f: je 0x4e722b */ if (fZ) goto L_004e722b;
L_004e7221:; BB(0x004e7221);
    /* 004e7221: add esi, 0x2d */ {  u32 a = r_esi; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7224: mov eax, 1 */ r_eax = 0x1u;
    /* 004e7229: jmp 0x4e7233 */ goto L_004e7233;
L_004e722b:; BB(0x004e722b);
    /* 004e722b: add esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e722e: mov eax, 2 */ r_eax = 0x2u;
L_004e7233:; BB(0x004e7233);
    /* 004e7233: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e7236: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004e7238:; BB(0x004e7238);
    /* 004e7238: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 004e723c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e723e: je 0x4e7259 */ if (fZ) goto L_004e7259;
L_004e7240:; BB(0x004e7240);
    /* 004e7240: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7243: je 0x4e72c5 */ if (fZ) goto L_004e72c5;
L_004e7249:; BB(0x004e7249);
    /* 004e7249: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e724c: je 0x4e728d */ if (fZ) goto L_004e728d;
L_004e724e:; BB(0x004e724e);
    /* 004e724e: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004e7251: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7254: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7257: jl 0x4e7238 */ if ((fS!=fO)) goto L_004e7238;
L_004e7259:; BB(0x004e7259);
    /* 004e7259: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 004e725e: movsx ecx, byte ptr [edi + 0x31] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edi+0x31u));
    /* 004e7262: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7264: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004e7266: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004e7268: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 004e726b: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004e726e: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e7270: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004e7273: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7275: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7277: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7279: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004e727b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e727d: jl 0x4e7284 */ if ((fS!=fO)) goto L_004e7284;
L_004e727f:; BB(0x004e727f);
    /* 004e727f: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e7282: jl 0x4e7286 */ if ((fS!=fO)) goto L_004e7286;
L_004e7284:; BB(0x004e7284);
    /* 004e7284: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004e7286:; BB(0x004e7286);
    /* 004e7286: mov eax, ecx */ r_eax = r_ecx;
    /* 004e7288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e7289: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e728a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e728b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e728c: ret  */ FN_RET(0x004e7200); r_esp += 4; return;
L_004e728d:; BB(0x004e728d);
    /* 004e728d: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7293: jl 0x4e72a9 */ if ((fS!=fO)) goto L_004e72a9;
L_004e7295:; BB(0x004e7295);
    /* 004e7295: cmp ecx, 0xff61 */ {  u32 a = r_ecx; u32 b = 0xff61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e729b: jl 0x4e72a5 */ if ((fS!=fO)) goto L_004e72a5;
L_004e729d:; BB(0x004e729d);
    /* 004e729d: cmp ecx, 0xff91 */ {  u32 a = r_ecx; u32 b = 0xff91u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e72a3: jle 0x4e72a9 */ if ((fZ||fS!=fO)) goto L_004e72a9;
L_004e72a5:; BB(0x004e72a5);
    /* 004e72a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e72a7: jmp 0x4e72ae */ goto L_004e72ae;
L_004e72a9:; BB(0x004e72a9);
    /* 004e72a9: mov eax, 1 */ r_eax = 0x1u;
L_004e72ae:; BB(0x004e72ae);
    /* 004e72ae: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e72b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e72b2: je 0x4e72be */ if (fZ) goto L_004e72be;
L_004e72b4:; BB(0x004e72b4);
    /* 004e72b4: add esi, 0x2d */ {  u32 a = r_esi; u32 b = 0x2du; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e72b7: mov eax, 1 */ r_eax = 0x1u;
    /* 004e72bc: jmp 0x4e724e */ goto L_004e724e;
L_004e72be:; BB(0x004e72be);
    /* 004e72be: mov eax, 2 */ r_eax = 0x2u;
    /* 004e72c3: jmp 0x4e724e */ goto L_004e724e;
L_004e72c5:; BB(0x004e72c5);
    /* 004e72c5: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e72cb: jl 0x4e72e1 */ if ((fS!=fO)) goto L_004e72e1;
L_004e72cd:; BB(0x004e72cd);
    /* 004e72cd: cmp ecx, 0xff61 */ {  u32 a = r_ecx; u32 b = 0xff61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e72d3: jl 0x4e72dd */ if ((fS!=fO)) goto L_004e72dd;
L_004e72d5:; BB(0x004e72d5);
    /* 004e72d5: cmp ecx, 0xff91 */ {  u32 a = r_ecx; u32 b = 0xff91u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e72db: jle 0x4e72e1 */ if ((fZ||fS!=fO)) goto L_004e72e1;
L_004e72dd:; BB(0x004e72dd);
    /* 004e72dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e72df: jmp 0x4e72e6 */ goto L_004e72e6;
L_004e72e1:; BB(0x004e72e1);
    /* 004e72e1: mov eax, 1 */ r_eax = 0x1u;
L_004e72e6:; BB(0x004e72e6);
    /* 004e72e6: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e72e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e72ea: je 0x4e72f6 */ if (fZ) goto L_004e72f6;
L_004e72ec:; BB(0x004e72ec);
    /* 004e72ec: mov eax, 1 */ r_eax = 0x1u;
    /* 004e72f1: jmp 0x4e724e */ goto L_004e724e;
L_004e72f6:; BB(0x004e72f6);
    /* 004e72f6: add esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e72f9: mov eax, 2 */ r_eax = 0x2u;
    /* 004e72fe: jmp 0x4e724e */ goto L_004e724e;
}

void f_004e7308(void) /* sub_4E7308 */
{
    FN_ENTER(0x004e7308);
    /* 004e7308: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 004e730b: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e7310: jl 0x4e7323 */ if ((fS!=fO)) goto L_004e7323;
L_004e7312:; BB(0x004e7312);
    /* 004e7312: cmp eax, 0xff61 */ {  u32 a = r_eax; u32 b = 0xff61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7317: jl 0x4e7320 */ if ((fS!=fO)) goto L_004e7320;
L_004e7319:; BB(0x004e7319);
    /* 004e7319: cmp eax, 0xff91 */ {  u32 a = r_eax; u32 b = 0xff91u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004e731e: jle 0x4e7323 */ if ((fZ||fS!=fO)) goto L_004e7323;
L_004e7320:; BB(0x004e7320);
    /* 004e7320: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7322: ret  */ FN_RET(0x004e7308); r_esp += 4; return;
L_004e7323:; BB(0x004e7323);
    /* 004e7323: mov eax, 1 */ r_eax = 0x1u;
    /* 004e7328: ret  */ FN_RET(0x004e7308); r_esp += 4; return;
}

void f_004e732c(void) /* sub_4E732C */
{
    FN_ENTER(0x004e732c);
    /* 004e732c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e732d: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7330: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 004e7334: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004e7337: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004e7339: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e733a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e733b: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x4e7340u); f_00857dec();
    /* 004e7340: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7343: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004e7346: movzx eax, word ptr [edx] */ r_eax = (u32)R16((u32)(r_edx));
    /* 004e7349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e734b: je 0x4e7419 */ if (fZ) goto L_004e7419;
L_004e7351:; BB(0x004e7351);
    /* 004e7351: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7353: mov word ptr [esp + 0x18], cx */ W16((u32)(r_esp+0x18u), (u16)r_ecx);
L_004e7358:; BB(0x004e7358);
    /* 004e7358: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e735b: je 0x4e7426 */ if (fZ) goto L_004e7426;
L_004e7361:; BB(0x004e7361);
    /* 004e7361: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7364: je 0x4e740a */ if (fZ) goto L_004e740a;
L_004e736a:; BB(0x004e736a);
    /* 004e736a: cmp eax, 0x3000 */ {  u32 a = r_eax; u32 b = 0x3000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e736f: je 0x4e740a */ if (fZ) goto L_004e740a;
L_004e7375:; BB(0x004e7375);
    /* 004e7375: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004e7378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e7379: call 0x813f0c */ r_esp -= 4; W32(r_esp, 0x4e737eu); f_00813f0c();
    /* 004e737e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e737f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7381: jne 0x4e73fd */ if (!fZ) goto L_004e73fd;
L_004e7383:; BB(0x004e7383);
    /* 004e7383: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004e7386: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004e738a: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 004e738d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e738f: je 0x4e73d2 */ if (fZ) goto L_004e73d2;
L_004e7391:; BB(0x004e7391);
    /* 004e7391: mov dword ptr [esp + 0x38], esi */ W32((u32)(r_esp+0x38u), r_esi);
    /* 004e7395: mov esi, ebp */ r_esi = r_ebp;
    /* 004e7397: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 004e739b: mov ebp, eax */ r_ebp = r_eax;
    /* 004e739d: mov edi, ecx */ r_edi = r_ecx;
L_004e739f:; BB(0x004e739f);
    /* 004e739f: push 0x107 */ { u32 v = 0x107u; r_esp -= 4; W32(r_esp, v); }
    /* 004e73a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004e73a5: call 0x858ba3 */ r_esp -= 4; W32(r_esp, 0x4e73aau); f_00858ba3();
    /* 004e73aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e73ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e73af: je 0x4e73bb */ if (fZ) goto L_004e73bb;
L_004e73b1:; BB(0x004e73b1);
    /* 004e73b1: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 004e73b4: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 004e73b8: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_004e73bb:; BB(0x004e73bb);
    /* 004e73bb: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 004e73bf: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e73c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e73c4: jne 0x4e739f */ if (!fZ) goto L_004e739f;
L_004e73c6:; BB(0x004e73c6);
    /* 004e73c6: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 004e73ca: mov eax, ebp */ r_eax = r_ebp;
    /* 004e73cc: mov ebp, esi */ r_ebp = r_esi;
    /* 004e73ce: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_004e73d2:; BB(0x004e73d2);
    /* 004e73d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e73d4: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 004e73d7: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 004e73db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e73dc: call 0x813f0c */ r_esp -= 4; W32(r_esp, 0x4e73e1u); f_00813f0c();
    /* 004e73e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e73e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e73e4: je 0x4e73f3 */ if (fZ) goto L_004e73f3;
L_004e73e6:; BB(0x004e73e6);
    /* 004e73e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e73e8: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 004e73ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e73ee: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e73f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e73f2: ret  */ FN_RET(0x004e732c); r_esp += 4; return;
L_004e73f3:; BB(0x004e73f3);
    /* 004e73f3: mov eax, 1 */ r_eax = 0x1u;
    /* 004e73f8: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e73fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e73fc: ret  */ FN_RET(0x004e732c); r_esp += 4; return;
L_004e73fd:; BB(0x004e73fd);
    /* 004e73fd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e73ff: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 004e7403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7405: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e7408: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7409: ret  */ FN_RET(0x004e732c); r_esp += 4; return;
L_004e740a:; BB(0x004e740a);
    /* 004e740a: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 004e740e: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7413: jne 0x4e7358 */ if (!fZ) goto L_004e7358;
L_004e7419:; BB(0x004e7419);
    /* 004e7419: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004e741b: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 004e741f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7421: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e7424: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7425: ret  */ FN_RET(0x004e732c); r_esp += 4; return;
L_004e7426:; BB(0x004e7426);
    /* 004e7426: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7429: jmp 0x4e740a */ goto L_004e740a;
}

void f_004e742c(void) /* sub_4E742C */
{
    FN_ENTER(0x004e742c);
    /* 004e742c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004e7430: movzx eax, byte ptr [edx + 0x32] */ r_eax = (u32)R8((u32)(r_edx+0x32u));
    /* 004e7434: test al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7436: jne 0x4e74e8 */ if (!fZ) goto L_004e74e8;
L_004e743c:; BB(0x004e743c);
    /* 004e743c: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 004e743e: mov eax, 0xa49940 */ r_eax = 0xa49940u;
    /* 004e7443: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004e7445: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004e7448: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 004e744b: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 004e744e: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004e7451: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 004e7454: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 004e7457: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 004e745a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004e745d: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 004e7460: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 004e7463: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 004e7466: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 004e7469: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 004e746c: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 004e746f: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 004e7472: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 004e7475: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 004e7478: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 004e747b: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 004e747e: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 004e7481: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 004e7484: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 004e7487: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 004e748a: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 004e748d: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 004e7490: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 004e7493: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 004e7496: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 004e7499: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 004e749c: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 004e749f: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004e74a2: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 004e74a5: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 004e74a8: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 004e74ab: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 004e74ae: mov dword ptr [eax + 0x48], ecx */ W32((u32)(r_eax+0x48u), r_ecx);
    /* 004e74b1: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 004e74b4: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 004e74b7: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 004e74ba: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 004e74bd: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 004e74c0: mov dword ptr [eax + 0x54], ecx */ W32((u32)(r_eax+0x54u), r_ecx);
    /* 004e74c3: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 004e74c6: mov dword ptr [eax + 0x58], ecx */ W32((u32)(r_eax+0x58u), r_ecx);
    /* 004e74c9: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 004e74cc: mov dword ptr [eax + 0x5c], ecx */ W32((u32)(r_eax+0x5cu), r_ecx);
    /* 004e74cf: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 004e74d2: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 004e74d5: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 004e74d8: mov dword ptr [eax + 0x64], ecx */ W32((u32)(r_eax+0x64u), r_ecx);
    /* 004e74db: mov ecx, dword ptr [edx + 0x68] */ r_ecx = R32((u32)(r_edx+0x68u));
    /* 004e74de: mov edx, dword ptr [edx + 0x6c] */ r_edx = R32((u32)(r_edx+0x6cu));
    /* 004e74e1: mov dword ptr [eax + 0x68], ecx */ W32((u32)(r_eax+0x68u), r_ecx);
    /* 004e74e4: mov dword ptr [eax + 0x6c], edx */ W32((u32)(r_eax+0x6cu), r_edx);
    /* 004e74e7: ret  */ FN_RET(0x004e742c); r_esp += 4; return;
L_004e74e8:; BB(0x004e74e8);
    /* 004e74e8: mov byte ptr [0xa49971], 0xff */ W8((u32)(0xa49971u), 0xffu);
    /* 004e74ef: ret  */ FN_RET(0x004e742c); r_esp += 4; return;
}

void f_004e74f0(void) /* sub_4E74F0 */
{
    FN_ENTER(0x004e74f0);
    /* 004e74f0: mov eax, 0xa49940 */ r_eax = 0xa49940u;
    /* 004e74f5: ret  */ FN_RET(0x004e74f0); r_esp += 4; return;
}

void f_004e74f8(void) /* sub_4E74F8 */
{
    FN_ENTER(0x004e74f8);
    /* 004e74f8: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e74fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e74ff: je 0x4e7511 */ if (fZ) goto L_004e7511;
L_004e7501:; BB(0x004e7501);
    /* 004e7501: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004e7504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7506: je 0x4e750e */ if (fZ) goto L_004e750e;
L_004e7508:; BB(0x004e7508);
    /* 004e7508: mov eax, 1 */ r_eax = 0x1u;
    /* 004e750d: ret  */ FN_RET(0x004e74f8); r_esp += 4; return;
L_004e750e:; BB(0x004e750e);
    /* 004e750e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7510: ret  */ FN_RET(0x004e74f8); r_esp += 4; return;
L_004e7511:; BB(0x004e7511);
    /* 004e7511: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7513: ret  */ FN_RET(0x004e74f8); r_esp += 4; return;
}

void f_004e7514(void) /* sub_4E7514 */
{
    FN_ENTER(0x004e7514);
    /* 004e7514: mov dword ptr [0xa4d7e8], 0x3f800000 */ W32((u32)(0xa4d7e8u), 0x3f800000u);
    /* 004e751e: mov dword ptr [0xa4d7ec], 0x41000000 */ W32((u32)(0xa4d7ecu), 0x41000000u);
    /* 004e7528: mov dword ptr [0xa4d7f0], 0x3fc00000 */ W32((u32)(0xa4d7f0u), 0x3fc00000u);
    /* 004e7532: ret  */ FN_RET(0x004e7514); r_esp += 4; return;
}

void f_004e7534(void) /* sub_4E7534 */
{
    FN_ENTER(0x004e7534);
    /* 004e7534: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7535: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e7536: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e753b: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4e7540u); f_006c1bcc();
    /* 004e7540: mov edi, eax */ r_edi = r_eax;
    /* 004e7542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e7544: lea ebp, [edi + 0x370] */ r_ebp = (u32)(r_edi+0x370u);
    /* 004e754a: call 0x4e7604 */ r_esp -= 4; W32(r_esp, 0x4e754fu); f_004e7604();
    /* 004e754f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e7551: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004e7554: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e7557: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 004e755a: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004e755d: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 004e7560: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 004e7563: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004e7566: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 004e7569: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004e756c: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 004e756f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004e7572: mov dword ptr [ebp + 0x14], edx */ W32((u32)(r_ebp+0x14u), r_edx);
    /* 004e7575: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004e7578: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 004e757b: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004e757e: mov dword ptr [ebp + 0x1c], edx */ W32((u32)(r_ebp+0x1cu), r_edx);
    /* 004e7581: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004e7584: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 004e7587: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004e758a: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004e758d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004e7590: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 004e7593: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004e7596: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 004e7599: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004e759c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004e759f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004e75a2: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 004e75a5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004e75a8: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 004e75ab: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004e75ae: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 004e75b1: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004e75b4: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 004e75b7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004e75ba: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 004e75bd: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004e75c0: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004e75c3: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004e75c6: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 004e75c9: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004e75cc: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 004e75cf: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004e75d2: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 004e75d5: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004e75d8: mov dword ptr [ebp + 0x58], edx */ W32((u32)(r_ebp+0x58u), r_edx);
    /* 004e75db: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004e75de: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 004e75e1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004e75e4: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 004e75e7: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004e75ea: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 004e75ed: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004e75f0: mov dword ptr [ebp + 0x68], edx */ W32((u32)(r_ebp+0x68u), r_edx);
    /* 004e75f3: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004e75f6: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 004e75f9: mov byte ptr [edi + 0x3a0], 0xff */ W8((u32)(r_edi+0x3a0u), 0xffu);
    /* 004e7600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e7602: ret  */ FN_RET(0x004e7534); r_esp += 4; return;
}

void f_004e758a(void)
{
    FN_ENTER(0x004e758a);
    /* 004e758a: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 004e758d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004e7590: mov dword ptr [ebp + 0x28], edx */ W32((u32)(r_ebp+0x28u), r_edx);
    /* 004e7593: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004e7596: mov dword ptr [ebp + 0x2c], edx */ W32((u32)(r_ebp+0x2cu), r_edx);
    /* 004e7599: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004e759c: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 004e759f: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004e75a2: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 004e75a5: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004e75a8: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 004e75ab: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004e75ae: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 004e75b1: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004e75b4: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 004e75b7: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004e75ba: mov dword ptr [ebp + 0x44], edx */ W32((u32)(r_ebp+0x44u), r_edx);
    /* 004e75bd: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004e75c0: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004e75c3: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004e75c6: mov dword ptr [ebp + 0x4c], edx */ W32((u32)(r_ebp+0x4cu), r_edx);
    /* 004e75c9: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004e75cc: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 004e75cf: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004e75d2: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 004e75d5: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004e75d8: mov dword ptr [ebp + 0x58], edx */ W32((u32)(r_ebp+0x58u), r_edx);
    /* 004e75db: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004e75de: mov dword ptr [ebp + 0x5c], edx */ W32((u32)(r_ebp+0x5cu), r_edx);
    /* 004e75e1: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004e75e4: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 004e75e7: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004e75ea: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 004e75ed: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004e75f0: mov dword ptr [ebp + 0x68], edx */ W32((u32)(r_ebp+0x68u), r_edx);
    /* 004e75f3: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004e75f6: mov dword ptr [ebp + 0x6c], edx */ W32((u32)(r_ebp+0x6cu), r_edx);
    /* 004e75f9: mov byte ptr [edi + 0x3a0], 0xff */ W8((u32)(r_edi+0x3a0u), 0xffu);
    /* 004e7600: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7601: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e7602: ret  */ FN_RET(0x004e758a); r_esp += 4; return;
}

void f_004e7604(void) /* sub_4E7604 */
{
    FN_ENTER(0x004e7604);
    /* 004e7604: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e7608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004e760a: jl 0x4e7611 */ if ((fS!=fO)) goto L_004e7611;
L_004e760c:; BB(0x004e760c);
    /* 004e760c: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e760f: jl 0x4e7613 */ if ((fS!=fO)) goto L_004e7613;
L_004e7611:; BB(0x004e7611);
    /* 004e7611: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e7613:; BB(0x004e7613);
    /* 004e7613: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004e7616: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7618: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e761a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004e761c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e761e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7620: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e7622: lea eax, [edx + edx + 0x9b5f60] */ r_eax = (u32)(r_edx+r_edx+0x9b5f60u);
    /* 004e7629: ret  */ FN_RET(0x004e7604); r_esp += 4; return;
}

void f_004e762c(void) /* sub_4E762C */
{
    FN_ENTER(0x004e762c);
    /* 004e762c: call 0x4e7534 */ r_esp -= 4; W32(r_esp, 0x4e7631u); f_004e7534();
    /* 004e7631: mov eax, 1 */ r_eax = 0x1u;
    /* 004e7636: ret  */ FN_RET(0x004e762c); r_esp += 4; return;
}

void f_004e7638(void) /* sub_4E7638 */
{
    FN_ENTER(0x004e7638);
    /* 004e7638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e7639: mov ebp, esp */ r_ebp = r_esp;
    /* 004e763b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e763d: push 0x8d27a0 */ { u32 v = 0x8d27a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004e7642: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e7648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e7649: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e7650: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7653: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e7656: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004e7659: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004e765c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004e765f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004e7662: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004e7665: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004e766c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e766e: mov dword ptr [ebx], 0xafd298 */ W32((u32)(r_ebx), 0xafd298u);
    /* 004e7674: mov esi, 0xa4d920 */ r_esi = 0xa4d920u;
    /* 004e7679: mov ebx, 0xa70f20 */ r_ebx = 0xa70f20u;
    /* 004e767e: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e7683: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e7685: jae 0x4e76e4 */ if (!fC) goto L_004e76e4;
L_004e7687:; BB(0x004e7687);
    /* 004e7687: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004e7689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e768b: je 0x4e76da */ if (fZ) goto L_004e76da;
L_004e768d:; BB(0x004e768d);
    /* 004e768d: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 004e7690: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7692: je 0x4e76a6 */ if (fZ) goto L_004e76a6;
L_004e7694:; BB(0x004e7694);
    /* 004e7694: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 004e7697: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7699: je 0x4e76a6 */ if (fZ) goto L_004e76a6;
L_004e769b:; BB(0x004e769b);
    /* 004e769b: lea ecx, [esi + 0x178] */ r_ecx = (u32)(r_esi+0x178u);
    /* 004e76a1: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e76a6u); f_00829de0();
L_004e76a6:; BB(0x004e76a6);
    /* 004e76a6: mov eax, dword ptr [esi + 0x188] */ r_eax = R32((u32)(r_esi+0x188u));
    /* 004e76ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e76ae: je 0x4e76c5 */ if (fZ) goto L_004e76c5;
L_004e76b0:; BB(0x004e76b0);
    /* 004e76b0: mov eax, dword ptr [esi + 0x184] */ r_eax = R32((u32)(r_esi+0x184u));
    /* 004e76b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e76b8: je 0x4e76c5 */ if (fZ) goto L_004e76c5;
L_004e76ba:; BB(0x004e76ba);
    /* 004e76ba: lea ecx, [esi + 0x2ec] */ r_ecx = (u32)(r_esi+0x2ecu);
    /* 004e76c0: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e76c5u); f_00829de0();
L_004e76c5:; BB(0x004e76c5);
    /* 004e76c5: mov eax, dword ptr [esi + 0x2f8] */ r_eax = R32((u32)(r_esi+0x2f8u));
    /* 004e76cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e76cd: je 0x4e76da */ if (fZ) goto L_004e76da;
L_004e76cf:; BB(0x004e76cf);
    /* 004e76cf: lea ecx, [esi + 0x460] */ r_ecx = (u32)(r_esi+0x460u);
    /* 004e76d5: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x4e76dau); f_00829de0();
L_004e76da:; BB(0x004e76da);
    /* 004e76da: add esi, 0x46c */ {  u32 a = r_esi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e76e0: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e76e2: jb 0x4e7687 */ if (fC) goto L_004e7687;
L_004e76e4:; BB(0x004e76e4);
    /* 004e76e4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e76e7: call 0x4e77f8 */ r_esp -= 4; W32(r_esp, 0x4e76ecu); f_004e77f8();
    /* 004e76ec: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e76f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e76f4: je 0x4e76fd */ if (fZ) goto L_004e76fd;
L_004e76f6:; BB(0x004e76f6);
    /* 004e76f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004e76f8: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x4e76fdu); f_004066a8();
L_004e76fd:; BB(0x004e76fd);
    /* 004e76fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e7700: push dword ptr [edx + 0xe0] */ { u32 v = R32((u32)(r_edx+0xe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7706: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7708: mov dword ptr [0xa720f4], eax */ W32((u32)(0xa720f4u), r_eax);
    /* 004e770d: mov dword ptr [0xa4d860], eax */ W32((u32)(0xa4d860u), r_eax);
    /* 004e7712: mov dword ptr [0xa4d8c0], eax */ W32((u32)(0xa4d8c0u), r_eax);
    /* 004e7717: mov dword ptr [0xa4d868], eax */ W32((u32)(0xa4d868u), r_eax);
    /* 004e771c: mov dword ptr [0xa4d8c8], eax */ W32((u32)(0xa4d8c8u), r_eax);
    /* 004e7721: mov dword ptr [0xa4d870], eax */ W32((u32)(0xa4d870u), r_eax);
    /* 004e7726: mov dword ptr [0xa4d8d0], eax */ W32((u32)(0xa4d8d0u), r_eax);
    /* 004e772b: mov dword ptr [0xa4d878], eax */ W32((u32)(0xa4d878u), r_eax);
    /* 004e7730: mov dword ptr [0xa4d8d8], eax */ W32((u32)(0xa4d8d8u), r_eax);
    /* 004e7735: mov dword ptr [0xa4d880], eax */ W32((u32)(0xa4d880u), r_eax);
    /* 004e773a: mov dword ptr [0xa4d8e0], eax */ W32((u32)(0xa4d8e0u), r_eax);
    /* 004e773f: mov dword ptr [0xa4d888], eax */ W32((u32)(0xa4d888u), r_eax);
    /* 004e7744: mov dword ptr [0xa4d8e8], eax */ W32((u32)(0xa4d8e8u), r_eax);
    /* 004e7749: mov dword ptr [0xa4d890], eax */ W32((u32)(0xa4d890u), r_eax);
    /* 004e774e: mov dword ptr [0xa4d8f0], eax */ W32((u32)(0xa4d8f0u), r_eax);
    /* 004e7753: mov dword ptr [0xa4d898], eax */ W32((u32)(0xa4d898u), r_eax);
    /* 004e7758: mov dword ptr [0xa4d8f8], eax */ W32((u32)(0xa4d8f8u), r_eax);
    /* 004e775d: mov dword ptr [0xa4d8a0], eax */ W32((u32)(0xa4d8a0u), r_eax);
    /* 004e7762: mov dword ptr [0xa4d900], eax */ W32((u32)(0xa4d900u), r_eax);
    /* 004e7767: mov dword ptr [0xa4d8a8], eax */ W32((u32)(0xa4d8a8u), r_eax);
    /* 004e776c: mov dword ptr [0xa4d908], eax */ W32((u32)(0xa4d908u), r_eax);
    /* 004e7771: mov dword ptr [0xa720b8], eax */ W32((u32)(0xa720b8u), r_eax);
    /* 004e7776: mov dword ptr [0xa720c0], eax */ W32((u32)(0xa720c0u), r_eax);
    /* 004e777b: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004e777e: mov dword ptr [0xa720c8], eax */ W32((u32)(0xa720c8u), r_eax);
    /* 004e7783: mov dword ptr [0xa720d0], eax */ W32((u32)(0xa720d0u), r_eax);
    /* 004e7788: mov dword ptr [0xa720d8], eax */ W32((u32)(0xa720d8u), r_eax);
    /* 004e778d: mov dword ptr [0xa720b0], eax */ W32((u32)(0xa720b0u), r_eax);
    /* 004e7792: mov dword ptr [0xa720e0], eax */ W32((u32)(0xa720e0u), r_eax);
    /* 004e7797: mov dword ptr [0xa720e4], eax */ W32((u32)(0xa720e4u), r_eax);
    /* 004e779c: mov dword ptr [0xa720e8], eax */ W32((u32)(0xa720e8u), r_eax);
    /* 004e77a1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x4e77a6u); f_00857e98();
    /* 004e77a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e77a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e77a9: mov dword ptr [0xa720ac], eax */ W32((u32)(0xa720acu), r_eax);
    /* 004e77ae: mov dword ptr [0xa720f0], eax */ W32((u32)(0xa720f0u), r_eax);
    /* 004e77b3: mov dword ptr [0xaab3ac], eax */ W32((u32)(0xaab3acu), r_eax);
    /* 004e77b8: mov dword ptr [0xa72124], eax */ W32((u32)(0xa72124u), r_eax);
    /* 004e77bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e77c4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e77c7: call 0x7a9f38 */ r_esp -= 4; W32(r_esp, 0x4e77ccu); f_007a9f38();
    /* 004e77cc: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 004e77cf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e77d1: jne 0x4e77ec */ if (!fZ) goto L_004e77ec;
L_004e77d3:; BB(0x004e77d3);
    /* 004e77d3: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e77d6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004e77d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e77dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e77df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e77e6: mov esp, ebp */ r_esp = r_ebp;
    /* 004e77e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e77e9: ret 4 */ FN_RET(0x004e7638); r_esp += 8; return;
L_004e77ec:; BB(0x004e77ec);
    /* 004e77ec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004e77ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e77f0: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4e77f5u); f_005c2f74();
    /* 004e77f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e77f6: jmp 0x4e77d3 */ goto L_004e77d3;
}

void f_004e77f8(void) /* sub_4E77F8 */
{
    FN_ENTER(0x004e77f8);
    /* 004e77f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e77f9: mov esi, ecx */ r_esi = r_ecx;
    /* 004e77fb: push dword ptr [esi + 0xfc] */ { u32 v = R32((u32)(r_esi+0xfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7801: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4e7806u); f_0082e960();
    /* 004e7806: mov dword ptr [esi + 0xfc], 0 */ W32((u32)(r_esi+0xfcu), 0x0u);
    /* 004e7810: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e7811: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e7812: ret  */ FN_RET(0x004e77f8); r_esp += 4; return;
}

void f_004e7814(void) /* sub_4E7814 */
{
    FN_ENTER(0x004e7814);
    /* 004e7814: mov eax, dword ptr [0xa72128] */ r_eax = R32((u32)(0xa72128u));
    /* 004e7819: call dword ptr [eax*4 + 0x9b1320] */ { u32 t = R32((u32)(r_eax*4+0x9b1320u)); r_esp -= 4; W32(r_esp, 0x4e7820u); call_ind(t); }
    /* 004e7820: ret  */ FN_RET(0x004e7814); r_esp += 4; return;
}

void f_004e7824(void) /* sub_4E7824 */
{
    FN_ENTER(0x004e7824);
    /* 004e7824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7825: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004e7827: mov eax, dword ptr [0xa72128] */ r_eax = R32((u32)(0xa72128u));
    /* 004e782c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e782e: je 0x4e7841 */ if (fZ) goto L_004e7841;
L_004e7830:; BB(0x004e7830);
    /* 004e7830: call 0x4eb3b8 */ r_esp -= 4; W32(r_esp, 0x4e7835u); f_004eb3b8();
    /* 004e7835: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004e7837: call 0x4e7844 */ r_esp -= 4; W32(r_esp, 0x4e783cu); f_004e7844();
    /* 004e783c: call 0x4eb430 */ r_esp -= 4; W32(r_esp, 0x4e7841u); f_004eb430();
L_004e7841:; BB(0x004e7841);
    /* 004e7841: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e7842: ret  */ FN_RET(0x004e7824); r_esp += 4; return;
}

void f_004e7844(void) /* sub_4E7844 */
{
    FN_ENTER(0x004e7844);
    /* 004e7844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7845: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e7846: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004e7848: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x4e784du); f_0082dbac();
    /* 004e784d: mov edi, 0xa4d920 */ r_edi = 0xa4d920u;
    /* 004e7852: mov ecx, 0xa70f20 */ r_ecx = 0xa70f20u;
    /* 004e7857: mov eax, 0xa4d920 */ r_eax = 0xa4d920u;
    /* 004e785c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e785e: jae 0x4e78e0 */ if (!fC) goto L_004e78e0;
L_004e7864:; BB(0x004e7864);
    /* 004e7864: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004e7866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7868: je 0x4e78d6 */ if (fZ) goto L_004e78d6;
L_004e786a:; BB(0x004e786a);
    /* 004e786a: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 004e786d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e786f: je 0x4e7878 */ if (fZ) goto L_004e7878;
L_004e7871:; BB(0x004e7871);
    /* 004e7871: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 004e7874: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7876: je 0x4e78d6 */ if (fZ) goto L_004e78d6;
L_004e7878:; BB(0x004e7878);
    /* 004e7878: mov eax, dword ptr [edi + 0x188] */ r_eax = R32((u32)(r_edi+0x188u));
    /* 004e787e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7880: je 0x4e788c */ if (fZ) goto L_004e788c;
L_004e7882:; BB(0x004e7882);
    /* 004e7882: mov eax, dword ptr [edi + 0x184] */ r_eax = R32((u32)(r_edi+0x184u));
    /* 004e7888: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e788a: je 0x4e78d6 */ if (fZ) goto L_004e78d6;
L_004e788c:; BB(0x004e788c);
    /* 004e788c: mov eax, dword ptr [edi + 0x2f8] */ r_eax = R32((u32)(r_edi+0x2f8u));
    /* 004e7892: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7894: je 0x4e78d6 */ if (fZ) goto L_004e78d6;
L_004e7896:; BB(0x004e7896);
    /* 004e7896: mov edx, dword ptr [0xa4d7f8] */ r_edx = R32((u32)(0xa4d7f8u));
    /* 004e789c: mov al, byte ptr [edi + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+0xeu))) & 0xffu);
    /* 004e789f: cmp al, byte ptr [edx + 0x30] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 004e78a2: jne 0x4e78d6 */ if (!fZ) goto L_004e78d6;
L_004e78a4:; BB(0x004e78a4);
    /* 004e78a4: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 004e78a8: cmp ax, word ptr [edx + 0x38] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x38u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e78ac: jne 0x4e78d6 */ if (!fZ) goto L_004e78d6;
L_004e78ae:; BB(0x004e78ae);
    /* 004e78ae: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 004e78b2: cmp ax, word ptr [edx + 0x3a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e78b6: jne 0x4e78d6 */ if (!fZ) goto L_004e78d6;
L_004e78b8:; BB(0x004e78b8);
    /* 004e78b8: movsx eax, word ptr [edi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 004e78bc: cmp ax, word ptr [edx + 0x3c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e78c0: jne 0x4e78d6 */ if (!fZ) goto L_004e78d6;
L_004e78c2:; BB(0x004e78c2);
    /* 004e78c2: movsx eax, word ptr [edi + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 004e78c6: cmp ax, word ptr [edx + 0x3e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e78ca: jne 0x4e78d6 */ if (!fZ) goto L_004e78d6;
L_004e78cc:; BB(0x004e78cc);
    /* 004e78cc: movsx eax, word ptr [edi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 004e78d0: cmp ax, word ptr [edx + 0x40] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 004e78d4: je 0x4e78e0 */ if (fZ) goto L_004e78e0;
L_004e78d6:; BB(0x004e78d6);
    /* 004e78d6: add edi, 0x46c */ {  u32 a = r_edi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e78dc: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e78de: jb 0x4e7864 */ if (fC) goto L_004e7864;
L_004e78e0:; BB(0x004e78e0);
    /* 004e78e0: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e78e2: je 0x4e7a20 */ if (fZ) goto L_004e7a20;
L_004e78e8:; BB(0x004e78e8);
    /* 004e78e8: mov dword ptr [0xa720ac], 2 */ W32((u32)(0xa720acu), 0x2u);
    /* 004e78f2: mov dword ptr [0xa720ec], edi */ W32((u32)(0xa720ecu), r_edi);
L_004e78f8:; BB(0x004e78f8);
    /* 004e78f8: mov dword ptr [0xa72124], 1 */ W32((u32)(0xa72124u), 0x1u);
    /* 004e7902: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4e7907u); f_0082d7b0();
    /* 004e7907: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 004e790a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e790c: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x4e7911u); f_008316b4();
    /* 004e7911: mov edx, dword ptr [0xa72120] */ r_edx = R32((u32)(0xa72120u));
    /* 004e7917: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7919: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4e791eu); f_0082d8bc();
    /* 004e791e: mov ecx, dword ptr [0xa720ec] */ r_ecx = R32((u32)(0xa720ecu));
    /* 004e7924: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e792a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4e792fu); f_00829cc8();
    /* 004e792f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004e7931: call 0x4e7a48 */ r_esp -= 4; W32(r_esp, 0x4e7936u); f_004e7a48();
    /* 004e7936: mov ecx, dword ptr [ebp + 0xe0] */ r_ecx = R32((u32)(r_ebp+0xe0u));
    /* 004e793c: add ecx, 0xe80 */ {  u32 a = r_ecx; u32 b = 0xe80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7942: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4e7947u); f_0082d990();
    /* 004e7947: mov ecx, dword ptr [0xa720ec] */ r_ecx = R32((u32)(0xa720ecu));
    /* 004e794d: add ecx, 0x2ec */ {  u32 a = r_ecx; u32 b = 0x2ecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7953: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4e7958u); f_00829cc8();
    /* 004e7958: mov eax, dword ptr [0xa720ec] */ r_eax = R32((u32)(0xa720ecu));
    /* 004e795d: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 004e7961: push dword ptr [edx*8 + 0xa720bc] */ { u32 v = R32((u32)(r_edx*8+0xa720bcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7968: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x4e796du); f_006926e8();
    /* 004e796d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e796e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4e7973u); f_0082da80();
    /* 004e7973: mov eax, dword ptr [0xa720ec] */ r_eax = R32((u32)(0xa720ecu));
    /* 004e7978: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 004e797c: mov edi, dword ptr [eax*8 + 0xa4d864] */ r_edi = R32((u32)(r_eax*8+0xa4d864u));
    /* 004e7983: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7985: je 0x4e79c8 */ if (fZ) goto L_004e79c8;
L_004e7987:; BB(0x004e7987);
    /* 004e7987: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x4e798cu); f_004e71a8();
    /* 004e798c: mov ecx, dword ptr [ebp + 0xe0] */ r_ecx = R32((u32)(r_ebp+0xe0u));
    /* 004e7992: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7998: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4e799du); f_0082d990();
    /* 004e799d: mov ecx, dword ptr [0xa720ec] */ r_ecx = R32((u32)(0xa720ecu));
    /* 004e79a3: add ecx, 0x178 */ {  u32 a = r_ecx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e79a9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4e79aeu); f_00829cc8();
    /* 004e79ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e79af: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x4e79b4u); f_006926e8();
    /* 004e79b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e79b5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4e79bau); f_0082da80();
    /* 004e79ba: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x4e79bfu); f_004e71c8();
    /* 004e79bf: mov eax, dword ptr [0xa720ec] */ r_eax = R32((u32)(0xa720ecu));
    /* 004e79c4: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
L_004e79c8:; BB(0x004e79c8);
    /* 004e79c8: mov edi, dword ptr [eax*8 + 0xa4d8c4] */ r_edi = R32((u32)(r_eax*8+0xa4d8c4u));
    /* 004e79cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e79d1: je 0x4e7a13 */ if (fZ) goto L_004e7a13;
L_004e79d3:; BB(0x004e79d3);
    /* 004e79d3: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x4e79d8u); f_004e71a8();
    /* 004e79d8: mov ecx, dword ptr [ebp + 0xe0] */ r_ecx = R32((u32)(r_ebp+0xe0u));
    /* 004e79de: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e79e4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4e79e9u); f_0082d990();
    /* 004e79e9: mov ecx, dword ptr [0xa720ec] */ r_ecx = R32((u32)(0xa720ecu));
    /* 004e79ef: add ecx, 0x178 */ {  u32 a = r_ecx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e79f5: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x4e79fau); f_00829cc8();
    /* 004e79fa: push dword ptr [0xa4d7f8] */ { u32 v = R32((u32)(0xa4d7f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7a00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7a01: call 0x4e7010 */ r_esp -= 4; W32(r_esp, 0x4e7a06u); f_004e7010();
    /* 004e7a06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7a09: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4e7a0eu); f_0082da80();
    /* 004e7a0e: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x4e7a13u); f_004e71c8();
L_004e7a13:; BB(0x004e7a13);
    /* 004e7a13: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4e7a18u); f_0082da80();
    /* 004e7a18: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4e7a1du); f_0082dab0();
    /* 004e7a1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7a1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e7a1f: ret  */ FN_RET(0x004e7844); r_esp += 4; return;
L_004e7a20:; BB(0x004e7a20);
    /* 004e7a20: mov eax, dword ptr [0xa720ec] */ r_eax = R32((u32)(0xa720ecu));
    /* 004e7a25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7a27: je 0x4e7a38 */ if (fZ) goto L_004e7a38;
L_004e7a29:; BB(0x004e7a29);
    /* 004e7a29: mov dword ptr [0xa720ac], 1 */ W32((u32)(0xa720acu), 0x1u);
    /* 004e7a33: jmp 0x4e78f8 */ goto L_004e78f8;
L_004e7a38:; BB(0x004e7a38);
    /* 004e7a38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7a3a: mov dword ptr [0xa720ac], eax */ W32((u32)(0xa720acu), r_eax);
    /* 004e7a3f: mov dword ptr [0xa72124], eax */ W32((u32)(0xa72124u), r_eax);
    /* 004e7a44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7a45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e7a46: ret  */ FN_RET(0x004e7844); r_esp += 4; return;
}

void f_004e7a48(void) /* sub_4E7A48 */
{
    FN_ENTER(0x004e7a48);
    /* 004e7a48: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 004e7a4e: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 004e7a52: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004e7a57: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 004e7a5b: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x4e7a60u); f_007aa8c8();
    /* 004e7a60: ret  */ FN_RET(0x004e7a48); r_esp += 4; return;
}

void f_004e7a64(void) /* sub_4E7A64 */
{
    FN_ENTER(0x004e7a64);
    /* 004e7a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004e7a65: mov ebp, esp */ r_ebp = r_esp;
    /* 004e7a67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004e7a69: push 0x8d27ca */ { u32 v = 0x8d27cau; r_esp -= 4; W32(r_esp, v); }
    /* 004e7a6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004e7a74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004e7a75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004e7a7c: sub esp, 0x68 */ {  u32 a = r_esp; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7a7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004e7a82: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 004e7a85: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 004e7a88: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 004e7a8b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004e7a8e: mov ecx, dword ptr [0xa720f4] */ r_ecx = R32((u32)(0xa720f4u));
    /* 004e7a94: call 0x5b864c */ r_esp -= 4; W32(r_esp, 0x4e7a99u); f_005b864c();
    /* 004e7a99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7a9b: je 0x4e7aaa */ if (fZ) goto L_004e7aaa;
L_004e7a9d:; BB(0x004e7a9d);
    /* 004e7a9d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004e7aa0: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 004e7aa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004e7aa8: jne 0x4e7ab8 */ if (!fZ) goto L_004e7ab8;
L_004e7aaa:; BB(0x004e7aaa);
    /* 004e7aaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e7aad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e7ab4: mov esp, ebp */ r_esp = r_ebp;
    /* 004e7ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7ab7: ret  */ FN_RET(0x004e7a64); r_esp += 4; return;
L_004e7ab8:; BB(0x004e7ab8);
    /* 004e7ab8: mov ecx, eax */ r_ecx = r_eax;
    /* 004e7aba: call 0x4e9944 */ r_esp -= 4; W32(r_esp, 0x4e7abfu); f_004e9944();
    /* 004e7abf: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e7ac4: movzx ecx, word ptr [eax + 0x40] */ r_ecx = (u32)R16((u32)(r_eax+0x40u));
    /* 004e7ac8: mov edx, dword ptr [ecx*8 + 0xa4d8c0] */ r_edx = R32((u32)(r_ecx*8+0xa4d8c0u));
    /* 004e7acf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004e7ad2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ad5: jne 0x4e7ae3 */ if (!fZ) goto L_004e7ae3;
L_004e7ad7:; BB(0x004e7ad7);
    /* 004e7ad7: mov eax, dword ptr [ecx*8 + 0xa4d8c4] */ r_eax = R32((u32)(r_ecx*8+0xa4d8c4u));
    /* 004e7ade: mov dword ptr [0xa720e8], eax */ W32((u32)(0xa720e8u), r_eax);
L_004e7ae3:; BB(0x004e7ae3);
    /* 004e7ae3: mov eax, dword ptr [ecx*8 + 0xa4d860] */ r_eax = R32((u32)(r_ecx*8+0xa4d860u));
    /* 004e7aea: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7aed: jne 0x4e7afb */ if (!fZ) goto L_004e7afb;
L_004e7aef:; BB(0x004e7aef);
    /* 004e7aef: mov eax, dword ptr [ecx*8 + 0xa4d864] */ r_eax = R32((u32)(r_ecx*8+0xa4d864u));
    /* 004e7af6: mov dword ptr [0xa720e4], eax */ W32((u32)(0xa720e4u), r_eax);
L_004e7afb:; BB(0x004e7afb);
    /* 004e7afb: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e7afe: movzx eax, word ptr [eax + 0x3e] */ r_eax = (u32)R16((u32)(r_eax+0x3eu));
    /* 004e7b02: mov edx, dword ptr [eax*8 + 0xa720b8] */ r_edx = R32((u32)(r_eax*8+0xa720b8u));
    /* 004e7b09: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7b0c: jne 0x4e7b1a */ if (!fZ) goto L_004e7b1a;
L_004e7b0e:; BB(0x004e7b0e);
    /* 004e7b0e: mov eax, dword ptr [eax*8 + 0xa720bc] */ r_eax = R32((u32)(r_eax*8+0xa720bcu));
    /* 004e7b15: mov dword ptr [0xa720e0], eax */ W32((u32)(0xa720e0u), r_eax);
L_004e7b1a:; BB(0x004e7b1a);
    /* 004e7b1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e7b1d: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004e7b20: mov eax, dword ptr [edx + 0xfc] */ r_eax = R32((u32)(r_edx+0xfcu));
    /* 004e7b26: mov ebx, dword ptr [edx + 0x100] */ r_ebx = R32((u32)(r_edx+0x100u));
    /* 004e7b2c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004e7b2f: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 004e7b32: call 0x5b9d58 */ r_esp -= 4; W32(r_esp, 0x4e7b37u); f_005b9d58();
    /* 004e7b37: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e7b3a: mov eax, ebx */ r_eax = r_ebx;
    /* 004e7b3c: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 004e7b3f: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 004e7b42: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7b44: mov ecx, dword ptr [eax - 0x20] */ r_ecx = R32((u32)(r_eax+0xffffffe0u));
    /* 004e7b47: mov ebx, dword ptr [eax - 0x1c] */ r_ebx = R32((u32)(r_eax+0xffffffe4u));
    /* 004e7b4a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004e7b4d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004e7b50: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7b52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7b54: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 004e7b56: jbe 0x4e7be6 */ if ((fC||fZ)) goto L_004e7be6;
L_004e7b5c:; BB(0x004e7b5c);
    /* 004e7b5c: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e7b5f: jb 0x4e7bbd */ if (fC) goto L_004e7bbd;
L_004e7b61:; BB(0x004e7b61);
    /* 004e7b61: lea esi, [ebx - 5] */ r_esi = (u32)(r_ebx+0xfffffffbu);
    /* 004e7b64: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
L_004e7b67:; BB(0x004e7b67);
    /* 004e7b67: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 004e7b6a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b6c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b6e: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b70: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7b73: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e7b76: add dword ptr [ebx], edx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7b78: movzx edi, word ptr [ecx + 2] */ r_edi = (u32)R16((u32)(r_ecx+0x2u));
    /* 004e7b7c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7b7e: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7b81: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7b83: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7b85: add dword ptr [edi], esi */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7b87: mov edx, dword ptr [ebp - 0x54] */ r_edx = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7b8a: movzx ebx, word ptr [ecx + 4] */ r_ebx = (u32)R16((u32)(r_ecx+0x4u));
    /* 004e7b8e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b90: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b92: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7b94: add dword ptr [ebx], edx */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7b96: movzx edx, word ptr [ecx + 6] */ r_edx = (u32)R16((u32)(r_ecx+0x6u));
    /* 004e7b9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7b9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7b9e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7ba0: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7ba3: add dword ptr [edx], ebx */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7ba5: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7ba8: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004e7bab: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004e7bad: ja 0x4e7bb7 */ if ((!fC&&!fZ)) goto L_004e7bb7;
L_004e7baf:; BB(0x004e7baf);
    /* 004e7baf: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7bb2: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004e7bb5: jmp 0x4e7b67 */ goto L_004e7b67;
L_004e7bb7:; BB(0x004e7bb7);
    /* 004e7bb7: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7bba: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
L_004e7bbd:; BB(0x004e7bbd);
    /* 004e7bbd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e7bc0: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004e7bc3: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 004e7bc6: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7bc8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7bca: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7bcc: add dword ptr [edx], esi */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7bce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7bd1: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7bd4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004e7bd6: jae 0x4e7be0 */ if (!fC) goto L_004e7be0;
L_004e7bd8:; BB(0x004e7bd8);
    /* 004e7bd8: mov ebx, dword ptr [ebp - 0x54] */ r_ebx = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7bdb: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004e7bde: jmp 0x4e7bbd */ goto L_004e7bbd;
L_004e7be0:; BB(0x004e7be0);
    /* 004e7be0: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 004e7be3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004e7be6:; BB(0x004e7be6);
    /* 004e7be6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004e7be9: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e7bec: add edx, dword ptr [eax - 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7bef: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004e7bf2: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 004e7bf5: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004e7bf8: mov dword ptr [ebp - 0x74], ecx */ W32((u32)(r_ebp+0xffffff8cu), r_ecx);
    /* 004e7bfb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004e7c02: lea ecx, [ebp - 0x70] */ r_ecx = (u32)(r_ebp+0xffffff90u);
    /* 004e7c05: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4e7c0au); f_008171e8();
    /* 004e7c0a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004e7c0d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004e7c10: mov ecx, dword ptr [0xa72098] */ r_ecx = R32((u32)(0xa72098u));
    /* 004e7c16: mov ebx, dword ptr [edx + 0x34] */ r_ebx = R32((u32)(r_edx+0x34u));
    /* 004e7c19: mov edx, dword ptr [0xa7209c] */ r_edx = R32((u32)(0xa7209cu));
    /* 004e7c1f: mov dword ptr [0xa7212c], eax */ W32((u32)(0xa7212cu), r_eax);
    /* 004e7c24: mov eax, 0xa71d60 */ r_eax = 0xa71d60u;
    /* 004e7c29: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_004e7c2b:; BB(0x004e7c2b);
    /* 004e7c2b: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 004e7c2d: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 004e7c30: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 004e7c33: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 004e7c36: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 004e7c39: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 004e7c3c: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 004e7c3f: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 004e7c42: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 004e7c45: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 004e7c48: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7c4b: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7c4e: cmp esi, 0x41 */ {  u32 a = r_esi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7c51: jl 0x4e7c2b */ if ((fS!=fO)) goto L_004e7c2b;
L_004e7c53:; BB(0x004e7c53);
    /* 004e7c53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004e7c55:; BB(0x004e7c55);
    /* 004e7c55: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 004e7c58: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7c5a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7c5c: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 004e7c5f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c61: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c63: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c65: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c67: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c69: lea esi, [esi + edi + 0xa70f20] */ r_esi = (u32)(r_esi+r_edi+0xa70f20u);
    /* 004e7c70: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004e7c72:; BB(0x004e7c72);
    /* 004e7c72: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 004e7c74: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 004e7c77: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 004e7c7a: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 004e7c7d: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 004e7c80: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 004e7c83: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 004e7c86: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004e7c89: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004e7c8c: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 004e7c8f: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e7c92: add esi, 0x28 */ {  u32 a = r_esi; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004e7c95: cmp edi, 0x41 */ {  u32 a = r_edi; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7c98: jl 0x4e7c72 */ if ((fS!=fO)) goto L_004e7c72;
L_004e7c9a:; BB(0x004e7c9a);
    /* 004e7c9a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7c9d: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7ca0: jl 0x4e7c55 */ if ((fS!=fO)) goto L_004e7c55;
L_004e7ca2:; BB(0x004e7ca2);
    /* 004e7ca2: push 0xa71d60 */ { u32 v = 0xa71d60u; r_esp -= 4; W32(r_esp, v); }
    /* 004e7ca7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7ca8: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e7cadu); f_007aaed0();
    /* 004e7cad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7cb0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004e7cb2:; BB(0x004e7cb2);
    /* 004e7cb2: mov eax, dword ptr [0xa7212c] */ r_eax = R32((u32)(0xa7212cu));
    /* 004e7cb7: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004e7cb9: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 004e7cbc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7cbe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7cc0: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004e7cc3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7cc5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7cc7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7cc9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7ccb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7ccd: lea esi, [edx + ecx + 0xa70f20] */ r_esi = (u32)(r_edx+r_ecx+0xa70f20u);
    /* 004e7cd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7cd5: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7cd8: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e7cddu); f_007aaed0();
    /* 004e7cdd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7ce0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7ce3: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7ce6: jl 0x4e7cb2 */ if ((fS!=fO)) goto L_004e7cb2;
L_004e7ce8:; BB(0x004e7ce8);
    /* 004e7ce8: mov esi, dword ptr [0xa720e0] */ r_esi = R32((u32)(0xa720e0u));
    /* 004e7cee: mov ecx, dword ptr [0xa72098] */ r_ecx = R32((u32)(0xa72098u));
    /* 004e7cf4: mov edx, dword ptr [0xa7209c] */ r_edx = R32((u32)(0xa7209cu));
    /* 004e7cfa: mov dword ptr [0xa720f8], ecx */ W32((u32)(0xa720f8u), r_ecx);
    /* 004e7d00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7d02: mov dword ptr [0xa720fc], edx */ W32((u32)(0xa720fcu), r_edx);
    /* 004e7d08: mov dword ptr [0xa72100], ecx */ W32((u32)(0xa72100u), r_ecx);
    /* 004e7d0e: mov dword ptr [0xa72104], edx */ W32((u32)(0xa72104u), r_edx);
    /* 004e7d14: mov dword ptr [0xa72108], ecx */ W32((u32)(0xa72108u), r_ecx);
    /* 004e7d1a: mov dword ptr [0xa7210c], edx */ W32((u32)(0xa7210cu), r_edx);
    /* 004e7d20: mov dword ptr [0xa72110], ecx */ W32((u32)(0xa72110u), r_ecx);
    /* 004e7d26: mov dword ptr [0xa72114], edx */ W32((u32)(0xa72114u), r_edx);
    /* 004e7d2c: mov dword ptr [0xa72118], ecx */ W32((u32)(0xa72118u), r_ecx);
    /* 004e7d32: mov dword ptr [0xa7211c], edx */ W32((u32)(0xa7211cu), r_edx);
L_004e7d38:; BB(0x004e7d38);
    /* 004e7d38: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 004e7d3b: mov dword ptr [eax*8 + 0xa71f80], ecx */ W32((u32)(r_eax*8+0xa71f80u), r_ecx);
    /* 004e7d42: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7d45: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7d48: mov dword ptr [eax*8 + 0xa71f84], edx */ W32((u32)(r_eax*8+0xa71f84u), r_edx);
    /* 004e7d4f: mov dword ptr [eax*8 + 0xa71f88], ecx */ W32((u32)(r_eax*8+0xa71f88u), r_ecx);
    /* 004e7d56: mov dword ptr [eax*8 + 0xa71f8c], edx */ W32((u32)(r_eax*8+0xa71f8cu), r_edx);
    /* 004e7d5d: mov dword ptr [eax*8 + 0xa71f90], ecx */ W32((u32)(r_eax*8+0xa71f90u), r_ecx);
    /* 004e7d64: mov dword ptr [eax*8 + 0xa71f94], edx */ W32((u32)(r_eax*8+0xa71f94u), r_edx);
    /* 004e7d6b: mov dword ptr [eax*8 + 0xa71f98], ecx */ W32((u32)(r_eax*8+0xa71f98u), r_ecx);
    /* 004e7d72: mov dword ptr [eax*8 + 0xa71f9c], edx */ W32((u32)(r_eax*8+0xa71f9cu), r_edx);
    /* 004e7d79: mov dword ptr [eax*8 + 0xa71fa0], ecx */ W32((u32)(r_eax*8+0xa71fa0u), r_ecx);
    /* 004e7d80: mov dword ptr [eax*8 + 0xa71fa4], edx */ W32((u32)(r_eax*8+0xa71fa4u), r_edx);
    /* 004e7d87: jl 0x4e7d38 */ if ((fS!=fO)) goto L_004e7d38;
L_004e7d89:; BB(0x004e7d89);
    /* 004e7d89: push 0xa720f8 */ { u32 v = 0xa720f8u; r_esp -= 4; W32(r_esp, v); }
    /* 004e7d8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7d8f: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e7d94u); f_007aaed0();
    /* 004e7d94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7d97: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004e7d9a: movsx esi, word ptr [eax + 0x3e] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x3eu));
    /* 004e7d9e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_004e7da0:; BB(0x004e7da0);
    /* 004e7da0: mov eax, dword ptr [0xa7212c] */ r_eax = R32((u32)(0xa7212cu));
    /* 004e7da5: mov edi, dword ptr [eax + esi*4 + 4] */ r_edi = R32((u32)(r_eax+r_esi*4+0x4u));
    /* 004e7da9: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 004e7dac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7dae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7db0: lea ecx, [edx + edx + 0xa71f80] */ r_ecx = (u32)(r_edx+r_edx+0xa71f80u);
    /* 004e7db7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7db8: push dword ptr [edi + ebx*4] */ { u32 v = R32((u32)(r_edi+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 004e7dbb: call 0x7aaed0 */ r_esp -= 4; W32(r_esp, 0x4e7dc0u); f_007aaed0();
    /* 004e7dc0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004e7dc3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e7dc6: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004e7dc9: jl 0x4e7da0 */ if ((fS!=fO)) goto L_004e7da0;
L_004e7dcb:; BB(0x004e7dcb);
    /* 004e7dcb: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004e7dd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7dd1: add eax, 0x48 */ {  u32 a = r_eax; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7dd4: call 0x4e7e54 */ r_esp -= 4; W32(r_esp, 0x4e7dd9u); f_004e7e54();
    /* 004e7dd9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e7dda: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 004e7ddd: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004e7de0: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 004e7de3: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 004e7ded: mov dword ptr [0xa72128], 1 */ W32((u32)(0xa72128u), 0x1u);
    /* 004e7df7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004e7dfa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004e7e01: mov esp, ebp */ r_esp = r_ebp;
    /* 004e7e03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004e7e04: ret  */ FN_RET(0x004e7a64); r_esp += 4; return;
}

void f_004e7e50(void) /* sub_4E7E50 */
{
    FN_ENTER(0x004e7e50);
    /* 004e7e50: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004e7e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e57: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7e5a: mov ebx, eax */ r_ebx = r_eax;
    /* 004e7e5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e5d: call 0x4e686c */ r_esp -= 4; W32(r_esp, 0x4e7e62u); f_004e686c();
    /* 004e7e62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e7e63: mov eax, ebx */ r_eax = r_ebx;
    /* 004e7e65: call 0x4e86e4 */ r_esp -= 4; W32(r_esp, 0x4e7e6au); f_004e86e4();
    /* 004e7e6a: mov edx, dword ptr [0xa72130] */ r_edx = R32((u32)(0xa72130u));
    /* 004e7e70: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e7e73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7e75: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004e7e78: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7e7a: mov ecx, dword ptr [ecx + 0x9b16e0] */ r_ecx = R32((u32)(r_ecx+0x9b16e0u));
    /* 004e7e80: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7e83: je 0x4e7e8e */ if (fZ) goto L_004e7e8e;
L_004e7e85:; BB(0x004e7e85);
    /* 004e7e85: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7e88: jne 0x4e7e93 */ if (!fZ) goto L_004e7e93;
L_004e7e8a:; BB(0x004e7e8a);
    /* 004e7e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7e8c: jmp 0x4e7e93 */ goto L_004e7e93;
L_004e7e8e:; BB(0x004e7e8e);
    /* 004e7e8e: mov ecx, 4 */ r_ecx = 0x4u;
L_004e7e93:; BB(0x004e7e93);
    /* 004e7e93: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004e7e97: mov ecx, dword ptr [eax + edx*8 + 0x9b16e4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9b16e4u));
    /* 004e7e9e: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ea1: je 0x4e7eac */ if (fZ) goto L_004e7eac;
L_004e7ea3:; BB(0x004e7ea3);
    /* 004e7ea3: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ea6: jne 0x4e7eb1 */ if (!fZ) goto L_004e7eb1;
L_004e7ea8:; BB(0x004e7ea8);
    /* 004e7ea8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7eaa: jmp 0x4e7eb1 */ goto L_004e7eb1;
L_004e7eac:; BB(0x004e7eac);
    /* 004e7eac: mov ecx, 4 */ r_ecx = 0x4u;
L_004e7eb1:; BB(0x004e7eb1);
    /* 004e7eb1: mov eax, dword ptr [eax + edx*8 + 0x9b16e8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9b16e8u));
    /* 004e7eb8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004e7ebc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ebf: je 0x4e7eca */ if (fZ) goto L_004e7eca;
L_004e7ec1:; BB(0x004e7ec1);
    /* 004e7ec1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ec4: jne 0x4e7ecf */ if (!fZ) goto L_004e7ecf;
L_004e7ec6:; BB(0x004e7ec6);
    /* 004e7ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7ec8: jmp 0x4e7ecf */ goto L_004e7ecf;
L_004e7eca:; BB(0x004e7eca);
    /* 004e7eca: mov eax, 4 */ r_eax = 0x4u;
L_004e7ecf:; BB(0x004e7ecf);
    /* 004e7ecf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004e7ed3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004e7ed7: mov dword ptr [0xa72140], 0xa720f8 */ W32((u32)(0xa72140u), 0xa720f8u);
    /* 004e7ee1: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 004e7ee4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004e7ee8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7eea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7eec: lea ecx, [edx + edx + 0xa71f80] */ r_ecx = (u32)(r_edx+r_edx+0xa71f80u);
    /* 004e7ef3: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 004e7ef6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7ef8: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e7efe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7f00: lea edx, [edx + edx + 0xa71f80] */ r_edx = (u32)(r_edx+r_edx+0xa71f80u);
    /* 004e7f07: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e7f0d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004e7f10: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7f12: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7f14: lea eax, [eax + eax + 0xa71f80] */ r_eax = (u32)(r_eax+r_eax+0xa71f80u);
    /* 004e7f1b: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e7f20: mov ebx, 5 */ r_ebx = 0x5u;
    /* 004e7f25: jmp 0x4e7f38 */ goto L_004e7f38;
L_004e7f27:; BB(0x004e7f27);
    /* 004e7f27: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e7f2c: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e7f32: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
L_004e7f38:; BB(0x004e7f38);
    /* 004e7f38: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e7f3e: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004e7f40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7f42: je 0x4e80a0 */ if (fZ) goto L_004e80a0;
L_004e7f48:; BB(0x004e7f48);
    /* 004e7f48: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 004e7f4b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7f4d: je 0x4e7fdf */ if (fZ) goto L_004e7fdf;
L_004e7f53:; BB(0x004e7f53);
    /* 004e7f53: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7f59: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7f5f: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7f65: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 004e7f67: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004e7f6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e7f6c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e7f6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004e7f71: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e7f74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e7f76: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e7f79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f7b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e7f7d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e7f80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e7f82: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e7f85: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f87: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e7f8a: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7f90: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e7f93: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7f99: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e7f9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f9e: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7fa4: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e7fa7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fa9: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e7fac: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7fb2: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e7fb5: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7fbb: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e7fbe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fc0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7fc6: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e7fc9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fcb: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 004e7fce: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e7fd4: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e7fda: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
L_004e7fdf:; BB(0x004e7fdf);
    /* 004e7fdf: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 004e7fe2: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e7fe5: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004e7fe7: or edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004e7fea: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e7fed: je 0x4e808e */ if (fZ) goto L_004e808e;
L_004e7ff3:; BB(0x004e7ff3);
    /* 004e7ff3: mov ecx, dword ptr [0xa72140] */ r_ecx = R32((u32)(0xa72140u));
    /* 004e7ff9: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004e7ffb: and dword ptr [esi], 0xfffffffe */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7ffe: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e8004: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e8009: mov ecx, dword ptr [0xa72148] */ r_ecx = R32((u32)(0xa72148u));
    /* 004e800f: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8015: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e8017: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e8019: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e801c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8022: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8028: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004e802a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e802c: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 004e802f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004e8031: mov ecx, dword ptr [0xa7214c] */ r_ecx = R32((u32)(0xa7214cu));
    /* 004e8037: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 004e8039: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e803c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e803e: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 004e8041: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8047: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e804a: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8050: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 004e8053: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8055: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e805b: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e805e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8060: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 004e8063: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8069: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e806c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8072: fmul dword ptr [esi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x10u));
    /* 004e8075: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8077: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e807d: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e8080: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8082: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 004e8085: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e808b: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
L_004e808e:; BB(0x004e808e);
    /* 004e808e: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8094: jne 0x4e8374 */ if (!fZ) goto L_004e8374;
L_004e809a:; BB(0x004e809a);
    /* 004e809a: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
L_004e80a0:; BB(0x004e80a0);
    /* 004e80a0: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e80a3: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e80a6: mov dword ptr [0xa72140], edi */ W32((u32)(0xa72140u), r_edi);
    /* 004e80ac: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e80b2: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
    /* 004e80b7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80ba: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80bd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80c0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e80c2: jg 0x4e7f27 */ if ((!fZ&&fS==fO)) goto L_004e7f27;
L_004e80c8:; BB(0x004e80c8);
    /* 004e80c8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004e80cc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004e80d0: mov dword ptr [0xa72140], 0xa71d60 */ W32((u32)(0xa72140u), 0xa71d60u);
    /* 004e80da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80dc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80e0: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004e80e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80ed: lea ecx, [ecx + edx + 0xa70f20] */ r_ecx = (u32)(r_ecx+r_edx+0xa70f20u);
    /* 004e80f4: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e80fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80fe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8100: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004e8103: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8105: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8107: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8109: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e810b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e810d: lea edx, [eax + ebx + 0xa70f20] */ r_edx = (u32)(r_eax+r_ebx+0xa70f20u);
    /* 004e8114: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e8118: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e811e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8120: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8122: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8124: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004e8127: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8129: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8131: lea eax, [eax + ebx + 0xa70f20] */ r_eax = (u32)(r_eax+r_ebx+0xa70f20u);
    /* 004e8138: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e813d: mov ebx, 0x40 */ r_ebx = 0x40u;
L_004e8142:; BB(0x004e8142);
    /* 004e8142: mov esi, dword ptr [0xa72140] */ r_esi = R32((u32)(0xa72140u));
    /* 004e8148: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004e814a: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004e814d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e814f: je 0x4e81e1 */ if (fZ) goto L_004e81e1;
L_004e8155:; BB(0x004e8155);
    /* 004e8155: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e815b: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8161: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8167: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 004e8169: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004e816c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e816e: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e8171: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004e8173: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e8176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8178: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e817b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e817d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e817f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e8182: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8184: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e8187: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8189: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e818c: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8192: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e8195: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e819b: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e819e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81a0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e81a6: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e81a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81ab: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e81ae: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e81b4: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e81b7: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e81bd: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e81c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81c2: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e81c8: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e81cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81cd: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 004e81d0: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e81d6: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e81dc: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
L_004e81e1:; BB(0x004e81e1);
    /* 004e81e1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004e81e4: or ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004e81e7: or ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004e81ea: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e81ed: je 0x4e8285 */ if (fZ) goto L_004e8285;
L_004e81f3:; BB(0x004e81f3);
    /* 004e81f3: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e81f9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004e81fb: and dword ptr [eax], 0xfffffffe */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e81fe: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e8203: mov edi, dword ptr [0xa7214c] */ r_edi = R32((u32)(0xa7214cu));
    /* 004e8209: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e820f: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8215: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004e8217: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 004e8219: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e821e: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8224: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 004e8227: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e8229: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e822b: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e822e: mov eax, dword ptr [0xa72148] */ r_eax = R32((u32)(0xa72148u));
    /* 004e8233: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e8235: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8237: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e823a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e823c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e823e: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e8241: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8247: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e824a: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8250: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e8253: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8255: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e825b: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 004e825e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8260: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e8263: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8269: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e826c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8272: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e8275: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8277: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e827d: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 004e8280: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8282: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
L_004e8285:; BB(0x004e8285);
    /* 004e8285: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e8288: je 0x4e8320 */ if (fZ) goto L_004e8320;
L_004e828e:; BB(0x004e828e);
    /* 004e828e: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e8294: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004e8296: and dword ptr [eax], 0xfffffffb */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e8299: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e829e: mov edi, dword ptr [0xa7214c] */ r_edi = R32((u32)(0xa7214cu));
    /* 004e82a4: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e82aa: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e82b0: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004e82b2: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 004e82b4: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e82b9: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e82bf: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 004e82c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e82c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e82c6: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 004e82c9: mov eax, dword ptr [0xa72148] */ r_eax = R32((u32)(0xa72148u));
    /* 004e82ce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e82d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e82d2: fmul dword ptr [eax + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x20u));
    /* 004e82d5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82d9: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 004e82dc: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e82e2: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 004e82e5: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e82eb: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 004e82ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82f0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e82f6: fmul dword ptr [edi + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x24u));
    /* 004e82f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82fb: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 004e82fe: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8304: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 004e8307: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e830d: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 004e8310: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8312: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8318: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 004e831b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e831d: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
L_004e8320:; BB(0x004e8320);
    /* 004e8320: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e8323: je 0x4e832a */ if (fZ) goto L_004e832a;
L_004e8325:; BB(0x004e8325);
    /* 004e8325: call 0x4e838c */ r_esp -= 4; W32(r_esp, 0x4e832au); f_004e838c();
L_004e832a:; BB(0x004e832a);
    /* 004e832a: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e832f: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e8335: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8338: mov dword ptr [0xa72140], eax */ W32((u32)(0xa72140u), r_eax);
    /* 004e833d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e8340: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e8346: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
    /* 004e834b: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e8351: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8354: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8357: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e835d: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e8362: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8365: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8367: jg 0x4e8142 */ if ((!fZ&&fS==fO)) goto L_004e8142;
L_004e836d:; BB(0x004e836d);
    /* 004e836d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8370: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8371: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e8372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e8373: ret  */ FN_RET(0x004e7e50); r_esp += 4; return;
L_004e8374:; BB(0x004e8374);
    /* 004e8374: call 0x4e838c */ r_esp -= 4; W32(r_esp, 0x4e8379u); f_004e838c();
    /* 004e8379: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e837f: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e8385: jmp 0x4e80a0 */ goto L_004e80a0;
}

void f_004e7e54(void) /* sub_4E7E54 */
{
    FN_ENTER(0x004e7e54);
    /* 004e7e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e57: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004e7e5a: mov ebx, eax */ r_ebx = r_eax;
    /* 004e7e5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004e7e5d: call 0x4e686c */ r_esp -= 4; W32(r_esp, 0x4e7e62u); f_004e686c();
    /* 004e7e62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004e7e63: mov eax, ebx */ r_eax = r_ebx;
    /* 004e7e65: call 0x4e86e4 */ r_esp -= 4; W32(r_esp, 0x4e7e6au); f_004e86e4();
    /* 004e7e6a: mov edx, dword ptr [0xa72130] */ r_edx = R32((u32)(0xa72130u));
    /* 004e7e70: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004e7e73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7e75: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 004e7e78: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7e7a: mov ecx, dword ptr [ecx + 0x9b16e0] */ r_ecx = R32((u32)(r_ecx+0x9b16e0u));
    /* 004e7e80: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7e83: je 0x4e7e8e */ if (fZ) goto L_004e7e8e;
L_004e7e85:; BB(0x004e7e85);
    /* 004e7e85: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7e88: jne 0x4e7e93 */ if (!fZ) goto L_004e7e93;
L_004e7e8a:; BB(0x004e7e8a);
    /* 004e7e8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7e8c: jmp 0x4e7e93 */ goto L_004e7e93;
L_004e7e8e:; BB(0x004e7e8e);
    /* 004e7e8e: mov ecx, 4 */ r_ecx = 0x4u;
L_004e7e93:; BB(0x004e7e93);
    /* 004e7e93: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004e7e97: mov ecx, dword ptr [eax + edx*8 + 0x9b16e4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x9b16e4u));
    /* 004e7e9e: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ea1: je 0x4e7eac */ if (fZ) goto L_004e7eac;
L_004e7ea3:; BB(0x004e7ea3);
    /* 004e7ea3: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ea6: jne 0x4e7eb1 */ if (!fZ) goto L_004e7eb1;
L_004e7ea8:; BB(0x004e7ea8);
    /* 004e7ea8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004e7eaa: jmp 0x4e7eb1 */ goto L_004e7eb1;
L_004e7eac:; BB(0x004e7eac);
    /* 004e7eac: mov ecx, 4 */ r_ecx = 0x4u;
L_004e7eb1:; BB(0x004e7eb1);
    /* 004e7eb1: mov eax, dword ptr [eax + edx*8 + 0x9b16e8] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9b16e8u));
    /* 004e7eb8: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004e7ebc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ebf: je 0x4e7eca */ if (fZ) goto L_004e7eca;
L_004e7ec1:; BB(0x004e7ec1);
    /* 004e7ec1: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7ec4: jne 0x4e7ecf */ if (!fZ) goto L_004e7ecf;
L_004e7ec6:; BB(0x004e7ec6);
    /* 004e7ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004e7ec8: jmp 0x4e7ecf */ goto L_004e7ecf;
L_004e7eca:; BB(0x004e7eca);
    /* 004e7eca: mov eax, 4 */ r_eax = 0x4u;
L_004e7ecf:; BB(0x004e7ecf);
    /* 004e7ecf: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004e7ed3: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 004e7ed7: mov dword ptr [0xa72140], 0xa720f8 */ W32((u32)(0xa72140u), 0xa720f8u);
    /* 004e7ee1: lea edx, [ecx + ecx*4] */ r_edx = (u32)(r_ecx+r_ecx*4);
    /* 004e7ee4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004e7ee8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7eea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7eec: lea ecx, [edx + edx + 0xa71f80] */ r_ecx = (u32)(r_edx+r_edx+0xa71f80u);
    /* 004e7ef3: lea edx, [ebx + ebx*4] */ r_edx = (u32)(r_ebx+r_ebx*4);
    /* 004e7ef6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7ef8: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e7efe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e7f00: lea edx, [edx + edx + 0xa71f80] */ r_edx = (u32)(r_edx+r_edx+0xa71f80u);
    /* 004e7f07: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e7f0d: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004e7f10: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7f12: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e7f14: lea eax, [eax + eax + 0xa71f80] */ r_eax = (u32)(r_eax+r_eax+0xa71f80u);
    /* 004e7f1b: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e7f20: mov ebx, 5 */ r_ebx = 0x5u;
    /* 004e7f25: jmp 0x4e7f38 */ goto L_004e7f38;
L_004e7f27:; BB(0x004e7f27);
    /* 004e7f27: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e7f2c: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e7f32: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
L_004e7f38:; BB(0x004e7f38);
    /* 004e7f38: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e7f3e: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 004e7f40: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7f42: je 0x4e80a0 */ if (fZ) goto L_004e80a0;
L_004e7f48:; BB(0x004e7f48);
    /* 004e7f48: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 004e7f4b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e7f4d: je 0x4e7fdf */ if (fZ) goto L_004e7fdf;
L_004e7f53:; BB(0x004e7f53);
    /* 004e7f53: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7f59: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7f5f: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7f65: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 004e7f67: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004e7f6a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e7f6c: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e7f6f: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004e7f71: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e7f74: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e7f76: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e7f79: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f7b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e7f7d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e7f80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e7f82: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e7f85: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f87: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e7f8a: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7f90: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e7f93: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7f99: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e7f9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7f9e: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7fa4: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e7fa7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fa9: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e7fac: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e7fb2: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e7fb5: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e7fbb: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e7fbe: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fc0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e7fc6: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e7fc9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e7fcb: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 004e7fce: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e7fd4: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e7fda: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
L_004e7fdf:; BB(0x004e7fdf);
    /* 004e7fdf: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 004e7fe2: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e7fe5: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004e7fe7: or edx, dword ptr [eax + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004e7fea: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e7fed: je 0x4e808e */ if (fZ) goto L_004e808e;
L_004e7ff3:; BB(0x004e7ff3);
    /* 004e7ff3: mov ecx, dword ptr [0xa72140] */ r_ecx = R32((u32)(0xa72140u));
    /* 004e7ff9: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004e7ffb: and dword ptr [esi], 0xfffffffe */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e7ffe: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e8004: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e8009: mov ecx, dword ptr [0xa72148] */ r_ecx = R32((u32)(0xa72148u));
    /* 004e800f: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8015: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004e8017: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e8019: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e801c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8022: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8028: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 004e802a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e802c: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 004e802f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004e8031: mov ecx, dword ptr [0xa7214c] */ r_ecx = R32((u32)(0xa7214cu));
    /* 004e8037: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 004e8039: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e803c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e803e: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 004e8041: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8047: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e804a: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8050: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 004e8053: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8055: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e805b: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e805e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8060: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 004e8063: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8069: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e806c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8072: fmul dword ptr [esi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x10u));
    /* 004e8075: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8077: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e807d: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e8080: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8082: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 004e8085: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e808b: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
L_004e808e:; BB(0x004e808e);
    /* 004e808e: test esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e8094: jne 0x4e8374 */ if (!fZ) goto L_004e8374;
L_004e809a:; BB(0x004e809a);
    /* 004e809a: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
L_004e80a0:; BB(0x004e80a0);
    /* 004e80a0: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e80a3: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004e80a6: mov dword ptr [0xa72140], edi */ W32((u32)(0xa72140u), r_edi);
    /* 004e80ac: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e80b2: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
    /* 004e80b7: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80ba: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80bd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80c0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e80c2: jg 0x4e7f27 */ if ((!fZ&&fS==fO)) goto L_004e7f27;
L_004e80c8:; BB(0x004e80c8);
    /* 004e80c8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004e80cc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004e80d0: mov dword ptr [0xa72140], 0xa71d60 */ W32((u32)(0xa72140u), 0xa71d60u);
    /* 004e80da: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80dc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e80e0: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 004e80e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e80ed: lea ecx, [ecx + edx + 0xa70f20] */ r_ecx = (u32)(r_ecx+r_edx+0xa70f20u);
    /* 004e80f4: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e80fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e80fe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8100: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004e8103: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8105: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8107: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8109: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e810b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e810d: lea edx, [eax + ebx + 0xa70f20] */ r_edx = (u32)(r_eax+r_ebx+0xa70f20u);
    /* 004e8114: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004e8118: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e811e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8120: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8122: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8124: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 004e8127: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8129: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e812f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8131: lea eax, [eax + ebx + 0xa70f20] */ r_eax = (u32)(r_eax+r_ebx+0xa70f20u);
    /* 004e8138: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e813d: mov ebx, 0x40 */ r_ebx = 0x40u;
L_004e8142:; BB(0x004e8142);
    /* 004e8142: mov esi, dword ptr [0xa72140] */ r_esi = R32((u32)(0xa72140u));
    /* 004e8148: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 004e814a: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004e814d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004e814f: je 0x4e81e1 */ if (fZ) goto L_004e81e1;
L_004e8155:; BB(0x004e8155);
    /* 004e8155: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e815b: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8161: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8167: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 004e8169: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 004e816c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e816e: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 004e8171: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 004e8173: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 004e8176: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8178: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e817b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e817d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e817f: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004e8182: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8184: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e8187: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8189: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e818c: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8192: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 004e8195: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e819b: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e819e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81a0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e81a6: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e81a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81ab: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e81ae: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e81b4: fmul dword ptr [ecx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x10u));
    /* 004e81b7: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e81bd: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e81c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81c2: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e81c8: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e81cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e81cd: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 004e81d0: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e81d6: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e81dc: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
L_004e81e1:; BB(0x004e81e1);
    /* 004e81e1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 004e81e4: or ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004e81e7: or ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004e81ea: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e81ed: je 0x4e8285 */ if (fZ) goto L_004e8285;
L_004e81f3:; BB(0x004e81f3);
    /* 004e81f3: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e81f9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004e81fb: and dword ptr [eax], 0xfffffffe */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e81fe: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e8203: mov edi, dword ptr [0xa7214c] */ r_edi = R32((u32)(0xa7214cu));
    /* 004e8209: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e820f: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8215: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004e8217: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 004e8219: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e821e: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8224: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 004e8227: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e8229: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e822b: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 004e822e: mov eax, dword ptr [0xa72148] */ r_eax = R32((u32)(0xa72148u));
    /* 004e8233: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e8235: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e8237: fmul dword ptr [eax + 8] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x8u));
    /* 004e823a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e823c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e823e: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 004e8241: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8247: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 004e824a: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8250: fmul dword ptr [eax + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0xcu));
    /* 004e8253: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8255: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e825b: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 004e825e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8260: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 004e8263: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8269: fmul dword ptr [edx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x10u));
    /* 004e826c: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e8272: fmul dword ptr [eax + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x10u));
    /* 004e8275: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8277: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e827d: fmul dword ptr [edi + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x10u));
    /* 004e8280: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8282: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
L_004e8285:; BB(0x004e8285);
    /* 004e8285: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e8288: je 0x4e8320 */ if (fZ) goto L_004e8320;
L_004e828e:; BB(0x004e828e);
    /* 004e828e: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e8294: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004e8296: and dword ptr [eax], 0xfffffffb */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 004e8299: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e829e: mov edi, dword ptr [0xa7214c] */ r_edi = R32((u32)(0xa7214cu));
    /* 004e82a4: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e82aa: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e82b0: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004e82b2: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 004e82b4: mov eax, dword ptr [0xa72144] */ r_eax = R32((u32)(0xa72144u));
    /* 004e82b9: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e82bf: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 004e82c2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004e82c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004e82c6: fmul dword ptr [edx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x20u));
    /* 004e82c9: mov eax, dword ptr [0xa72148] */ r_eax = R32((u32)(0xa72148u));
    /* 004e82ce: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004e82d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004e82d2: fmul dword ptr [eax + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x20u));
    /* 004e82d5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82d9: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 004e82dc: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e82e2: fmul dword ptr [edx + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x24u));
    /* 004e82e5: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e82eb: fmul dword ptr [eax + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x24u));
    /* 004e82ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82f0: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e82f6: fmul dword ptr [edi + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x24u));
    /* 004e82f9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e82fb: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 004e82fe: fld dword ptr [0xa72134] */ FPUSH(R_F32((u32)(0xa72134u)));
    /* 004e8304: fmul dword ptr [edx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x28u));
    /* 004e8307: fld dword ptr [0xa72138] */ FPUSH(R_F32((u32)(0xa72138u)));
    /* 004e830d: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 004e8310: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e8312: fld dword ptr [0xa7213c] */ FPUSH(R_F32((u32)(0xa7213cu)));
    /* 004e8318: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 004e831b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004e831d: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
L_004e8320:; BB(0x004e8320);
    /* 004e8320: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004e8323: je 0x4e832a */ if (fZ) goto L_004e832a;
L_004e8325:; BB(0x004e8325);
    /* 004e8325: call 0x4e838c */ r_esp -= 4; W32(r_esp, 0x4e832au); f_004e838c();
L_004e832a:; BB(0x004e832a);
    /* 004e832a: mov eax, dword ptr [0xa72140] */ r_eax = R32((u32)(0xa72140u));
    /* 004e832f: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e8335: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8338: mov dword ptr [0xa72140], eax */ W32((u32)(0xa72140u), r_eax);
    /* 004e833d: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004e8340: mov edx, dword ptr [0xa72148] */ r_edx = R32((u32)(0xa72148u));
    /* 004e8346: mov eax, dword ptr [0xa7214c] */ r_eax = R32((u32)(0xa7214cu));
    /* 004e834b: mov dword ptr [0xa72144], ecx */ W32((u32)(0xa72144u), r_ecx);
    /* 004e8351: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004e8354: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004e8357: mov dword ptr [0xa72148], edx */ W32((u32)(0xa72148u), r_edx);
    /* 004e835d: mov dword ptr [0xa7214c], eax */ W32((u32)(0xa7214cu), r_eax);
    /* 004e8362: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004e8365: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004e8367: jg 0x4e8142 */ if ((!fZ&&fS==fO)) goto L_004e8142;
L_004e836d:; BB(0x004e836d);
    /* 004e836d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004e8370: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004e8371: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004e8372: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004e8373: ret  */ FN_RET(0x004e7e54); r_esp += 4; return;
L_004e8374:; BB(0x004e8374);
    /* 004e8374: call 0x4e838c */ r_esp -= 4; W32(r_esp, 0x4e8379u); f_004e838c();
    /* 004e8379: mov edi, dword ptr [0xa72140] */ r_edi = R32((u32)(0xa72140u));
    /* 004e837f: mov ecx, dword ptr [0xa72144] */ r_ecx = R32((u32)(0xa72144u));
    /* 004e8385: jmp 0x4e80a0 */ goto L_004e80a0;
}

