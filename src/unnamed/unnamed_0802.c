#include "protos.h"

void f_00802078(void) /* sub_802078 */
{
    FN_ENTER(0x00802078);
    /* 00802078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00802079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080207b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0080207d: call 0x80209c */ r_esp -= 4; W32(r_esp, 0x802082u); f_0080209c();
    /* 00802082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00802086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00802088: jne 0x80208e */ if (!fZ) goto L_0080208e;
L_0080208a:; BB(0x0080208a);
    /* 0080208a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080208b: ret 4 */ FN_RET(0x00802078); r_esp += 8; return;
L_0080208e:; BB(0x0080208e);
    /* 0080208e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080208f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x802094u); f_005c2f74();
    /* 00802094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00802096: ret 4 */ FN_RET(0x00802078); r_esp += 8; return;
}

void f_0080209c(void) /* sub_80209C */
{
    FN_ENTER(0x0080209c);
    /* 0080209c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0080209d: mov ebp, esp */ r_ebp = r_esp;
    /* 0080209f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008020a1: push 0x8f7098 */ { u32 v = 0x8f7098u; r_esp -= 4; W32(r_esp, v); }
    /* 008020a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008020ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008020ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008020b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008020b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008020ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008020bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008020c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008020c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008020c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008020c9: mov dword ptr [ecx], 0xb473f0 */ W32((u32)(r_ecx), 0xb473f0u);
    /* 008020cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008020d6: call 0x800ed0 */ r_esp -= 4; W32(r_esp, 0x8020dbu); f_00800ed0();
    /* 008020db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008020de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008020e5: mov esp, ebp */ r_esp = r_ebp;
    /* 008020e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008020e8: ret  */ FN_RET(0x0080209c); r_esp += 4; return;
}

void f_008020ec(void) /* sub_8020EC */
{
    FN_ENTER(0x008020ec);
    /* 008020ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008020ed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008020ef: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008020f3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008020f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008020f9: call 0x800f4c */ r_esp -= 4; W32(r_esp, 0x8020feu); f_00800f4c();
    /* 008020fe: mov dword ptr [ebx], 0xb473f0 */ W32((u32)(r_ebx), 0xb473f0u);
    /* 00802104: mov edx, dword ptr [0xa112ec] */ r_edx = R32((u32)(0xa112ecu));
    /* 0080210a: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0080210d: mov eax, ebx */ r_eax = r_ebx;
    /* 0080210f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00802110: ret 8 */ FN_RET(0x008020ec); r_esp += 12; return;
}

void f_00802114(void) /* sub_802114 */
{
    FN_ENTER(0x00802114);
    /* 00802114: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802115: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00802116: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0080211c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080211e: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 00802121: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802123: je 0x802462 */ if (fZ) goto L_00802462;
L_00802129:; BB(0x00802129);
    /* 00802129: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 0080212c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0080212e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00802130: je 0x802144 */ if (fZ) goto L_00802144;
L_00802132:; BB(0x00802132);
    /* 00802132: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00802134: je 0x80213d */ if (fZ) goto L_0080213d;
L_00802136:; BB(0x00802136);
    /* 00802136: call 0x7a9074 */ r_esp -= 4; W32(r_esp, 0x80213bu); f_007a9074();
    /* 0080213b: jmp 0x802154 */ goto L_00802154;
L_0080213d:; BB(0x0080213d);
    /* 0080213d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x802142u); f_007a9044();
    /* 00802142: jmp 0x802154 */ goto L_00802154;
L_00802144:; BB(0x00802144);
    /* 00802144: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00802146: je 0x80214f */ if (fZ) goto L_0080214f;
L_00802148:; BB(0x00802148);
    /* 00802148: call 0x7a905c */ r_esp -= 4; W32(r_esp, 0x80214du); f_007a905c();
    /* 0080214d: jmp 0x802154 */ goto L_00802154;
L_0080214f:; BB(0x0080214f);
    /* 0080214f: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x802154u); f_007a902c();
L_00802154:; BB(0x00802154);
    /* 00802154: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 0080215a: fld dword ptr [0x97ea00] */ FPUSH(R_F32((u32)(0x97ea00u)));
    /* 00802160: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 00802166: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 0080216c: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 00802172: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00802174: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00802176: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00802178: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080217a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0080217c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080217e: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 00802185: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802187: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0080218e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802190: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 00802197: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0080219b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x8021a0u); f_0082dbac();
    /* 008021a0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008021a5: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x8021aau); f_0082bb30();
    /* 008021aa: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008021ad: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008021b0: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x8021b5u); f_00829cc8();
    /* 008021b5: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008021b8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008021bb: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008021be: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x8021c3u); f_0082bb60();
    /* 008021c3: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008021c6: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 008021c9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008021cb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008021cd: jle 0x802451 */ if ((fZ||fS!=fO)) goto L_00802451;
L_008021d3:; BB(0x008021d3);
    /* 008021d3: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 008021d7: mov dword ptr [esp + 0x60], esi */ W32((u32)(r_esp+0x60u), r_esi);
    /* 008021db: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008021de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008021e0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008021e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008021e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008021e6: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008021e8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008021ea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008021ec: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 008021ef: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008021f1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008021f3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008021f5: mov esi, edx */ r_esi = r_edx;
    /* 008021f7: mov ebx, ecx */ r_ebx = r_ecx;
L_008021f9:; BB(0x008021f9);
    /* 008021f9: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 008021fc: mov edx, dword ptr [ebx + edx] */ r_edx = R32((u32)(r_ebx+r_edx));
    /* 008021ff: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00802202: mov ecx, dword ptr [edi + eax] */ r_ecx = R32((u32)(r_edi+r_eax));
    /* 00802205: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00802209: mov ecx, dword ptr [edi + eax + 4] */ r_ecx = R32((u32)(r_edi+r_eax+0x4u));
    /* 0080220d: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00802211: fld dword ptr [edi + eax + 8] */ FPUSH(R_F32((u32)(r_edi+r_eax+0x8u)));
    /* 00802215: fsub dword ptr [edi + eax] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax));
    /* 00802218: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00802220: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00802224: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 0080222c: fld dword ptr [edi + eax + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax+0xcu)));
    /* 00802230: fsub dword ptr [edi + eax + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax+0x4u));
    /* 00802234: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00802238: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080223a: je 0x80242f */ if (fZ) goto L_0080242f;
L_00802240:; BB(0x00802240);
    /* 00802240: mov dword ptr [esp + 0x58], esi */ W32((u32)(r_esp+0x58u), r_esi);
    /* 00802244: mov esi, edx */ r_esi = r_edx;
L_00802246:; BB(0x00802246);
    /* 00802246: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00802249: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 0080224c: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0080224f: fadd dword ptr [esi + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x18u));
    /* 00802252: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00802256: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802258: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0080225c: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0080225f: fadd dword ptr [esi + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x14u));
    /* 00802262: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00802264: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00802268: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0080226a: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0080226e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802271: je 0x80229d */ if (fZ) goto L_0080229d;
L_00802273:; BB(0x00802273);
    /* 00802273: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00802275: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802277: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802279: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 0080227d: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 00802281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00802282: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00802283: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x802288u); f_00835c3c();
    /* 00802288: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080228b: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0080228f: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00802293: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802295: fchs  */ ST(0) = -ST(0);
    /* 00802297: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0080229b: jmp 0x8022ab */ goto L_008022ab;
L_0080229d:; BB(0x0080229d);
    /* 0080229d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080229f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 008022a3: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 008022a7: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
L_008022ab:; BB(0x008022ab);
    /* 008022ab: fcomp dword ptr [0x97e9f8] */ fx_compare(ST(0), R_F32((u32)(0x97e9f8u))); FPOP();
    /* 008022b1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 008022b3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 008022b4: ja 0x802414 */ if ((!fC&&!fZ)) goto L_00802414;
L_008022ba:; BB(0x008022ba);
    /* 008022ba: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 008022bd: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x8022c2u); f_0082b438();
    /* 008022c2: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 008022c6: fld dword ptr [0x97e9f4] */ FPUSH(R_F32((u32)(0x97e9f4u)));
    /* 008022cc: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 008022d0: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 008022d4: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 008022d8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008022da: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 008022de: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008022e0: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 008022e4: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 008022e8: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 008022ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008022ef: je 0x80246b */ if (fZ) goto L_0080246b;
L_008022f5:; BB(0x008022f5);
    /* 008022f5: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 008022f9: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 00802300: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 00802307: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 0080230b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080230d: fchs  */ ST(0) = -ST(0);
    /* 0080230f: fdivr dword ptr [esp + 0x78] */ ST(0) = R_F32((u32)(r_esp+0x78u)) / ST(0);
    /* 00802313: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 00802317: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802319: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0080231b: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0080231d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080231f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00802321: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00802323: fadd dword ptr [esp + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x80u));
    /* 0080232a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080232c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0080232e: fadd dword ptr [esp + 0x7c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x7cu));
    /* 00802332: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00802334: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 00802338: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080233a: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 0080233e: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00802342: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802344: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 00802348: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
L_0080234c:; BB(0x0080234c);
    /* 0080234c: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00802350: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 00802354: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00802357: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802359: fmul dword ptr [eax + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x14u));
    /* 0080235c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0080235e: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 00802361: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802363: fmul dword ptr [esi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x1cu));
    /* 00802366: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802368: fmul dword ptr [esi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x20u));
    /* 0080236b: movsx ecx, word ptr [esi + 0x2a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2au));
    /* 0080236f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802371: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00802375: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00802379: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x80237eu); f_0082ddd8();
    /* 0080237e: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00802382: movsx ecx, word ptr [esi + 0x2a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x2au));
    /* 00802386: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x80238bu); f_0082dcbc();
    /* 0080238b: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 0080238f: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00802393: fld dword ptr [esp + 0x74] */ FPUSH(R_F32((u32)(r_esp+0x74u)));
    /* 00802397: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00802399: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0080239b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0080239d: fchs  */ ST(0) = -ST(0);
    /* 0080239f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008023a1: fchs  */ ST(0) = -ST(0);
    /* 008023a3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008023a5: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 008023a9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 008023ab: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008023af: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008023b3: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 008023b5: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 008023b7: fld dword ptr [esp + 0x78] */ FPUSH(R_F32((u32)(r_esp+0x78u)));
    /* 008023bb: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008023bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008023bf: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 008023c1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008023c3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008023c5: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 008023c9: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 008023cb: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 008023cf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 008023d1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008023d4: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 008023d6: fld dword ptr [esp + 0x70] */ FPUSH(R_F32((u32)(r_esp+0x70u)));
    /* 008023da: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 008023de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008023e0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008023e4: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 008023e8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 008023ea: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008023ee: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008023f1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 008023f3: fchs  */ ST(0) = -ST(0);
    /* 008023f5: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 008023f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 008023f9: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008023fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 008023fd: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 008023ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802401: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00802405: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00802409: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0080240d: call 0x82bb74 */ r_esp -= 4; W32(r_esp, 0x802412u); f_0082bb74();
    /* 00802412: jmp 0x802421 */ goto L_00802421;
L_00802414:; BB(0x00802414);
    /* 00802414: movsx eax, byte ptr [esi + 0x29] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x29u));
    /* 00802418: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080241b: je 0x8022ba */ if (fZ) goto L_008022ba;
L_00802421:; BB(0x00802421);
    /* 00802421: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00802423: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802425: jne 0x802246 */ if (!fZ) goto L_00802246;
L_0080242b:; BB(0x0080242b);
    /* 0080242b: mov esi, dword ptr [esp + 0x58] */ r_esi = R32((u32)(r_esp+0x58u));
L_0080242f:; BB(0x0080242f);
    /* 0080242f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x802434u); f_004ac444();
    /* 00802434: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00802437: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080243a: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080243d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00802440: cmp esi, dword ptr [eax + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802443: jl 0x8021f9 */ if ((fS!=fO)) goto L_008021f9;
L_00802449:; BB(0x00802449);
    /* 00802449: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 0080244d: mov esi, dword ptr [esp + 0x60] */ r_esi = R32((u32)(r_esp+0x60u));
L_00802451:; BB(0x00802451);
    /* 00802451: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x802456u); f_0082dab0();
    /* 00802456: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802458: call 0x801034 */ r_esp -= 4; W32(r_esp, 0x80245du); f_00801034();
    /* 0080245d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x802462u); f_007a9044();
L_00802462:; BB(0x00802462);
    /* 00802462: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802468: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802469: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0080246a: ret  */ FN_RET(0x00802114); r_esp += 4; return;
L_0080246b:; BB(0x0080246b);
    /* 0080246b: fld dword ptr [0x97e9f4] */ FPUSH(R_F32((u32)(0x97e9f4u)));
    /* 00802471: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00802475: jmp 0x80234c */ goto L_0080234c;
}

void f_0080247c(void) /* sub_80247C */
{
    FN_ENTER(0x0080247c);
    /* 0080247c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0080247d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0080247f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00802481: call 0x8024a0 */ r_esp -= 4; W32(r_esp, 0x802486u); f_008024a0();
    /* 00802486: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0080248a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0080248c: jne 0x802492 */ if (!fZ) goto L_00802492;
L_0080248e:; BB(0x0080248e);
    /* 0080248e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080248f: ret 4 */ FN_RET(0x0080247c); r_esp += 8; return;
L_00802492:; BB(0x00802492);
    /* 00802492: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00802493: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x802498u); f_005c2f74();
    /* 00802498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802499: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0080249a: ret 4 */ FN_RET(0x0080247c); r_esp += 8; return;
}

void f_008024a0(void) /* sub_8024A0 */
{
    FN_ENTER(0x008024a0);
    /* 008024a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008024a1: mov ebp, esp */ r_ebp = r_esp;
    /* 008024a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008024a5: push 0x8f70b4 */ { u32 v = 0x8f70b4u; r_esp -= 4; W32(r_esp, v); }
    /* 008024aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008024b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008024b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008024b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008024bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008024be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008024c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008024c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008024c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008024ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008024cd: mov dword ptr [ecx], 0xb474b8 */ W32((u32)(r_ecx), 0xb474b8u);
    /* 008024d3: mov dword ptr [0xaafbe0], 0 */ W32((u32)(0xaafbe0u), 0x0u);
    /* 008024dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008024e4: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x8024e9u); f_007ba1f0();
    /* 008024e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008024ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008024f3: mov esp, ebp */ r_esp = r_ebp;
    /* 008024f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008024f6: ret  */ FN_RET(0x008024a0); r_esp += 4; return;
}

void f_008024f8(void) /* sub_8024F8 */
{
    FN_ENTER(0x008024f8);
    /* 008024f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008024f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008024fa: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008024fd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008024ff: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00802504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802506: je 0x8027a3 */ if (fZ) goto L_008027a3;
L_0080250c:; BB(0x0080250c);
    /* 0080250c: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 00802512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00802514: jle 0x802525 */ if ((fZ||fS!=fO)) goto L_00802525;
L_00802516:; BB(0x00802516);
    /* 00802516: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00802519: mov dword ptr [ebp + 0x90], eax */ W32((u32)(r_ebp+0x90u), r_eax);
    /* 0080251f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802523: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802524: ret  */ FN_RET(0x008024f8); r_esp += 4; return;
L_00802525:; BB(0x00802525);
    /* 00802525: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 0080252a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080252c: je 0x80254a */ if (fZ) goto L_0080254a;
L_0080252e:; BB(0x0080252e);
    /* 0080252e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802531: jne 0x80253c */ if (!fZ) goto L_0080253c;
L_00802533:; BB(0x00802533);
    /* 00802533: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802535: call 0x8027c8 */ r_esp -= 4; W32(r_esp, 0x80253au); f_008027c8();
    /* 0080253a: jmp 0x802551 */ goto L_00802551;
L_0080253c:; BB(0x0080253c);
    /* 0080253c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080253f: jne 0x802551 */ if (!fZ) goto L_00802551;
L_00802541:; BB(0x00802541);
    /* 00802541: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802543: call 0x802824 */ r_esp -= 4; W32(r_esp, 0x802548u); f_00802824();
    /* 00802548: jmp 0x802551 */ goto L_00802551;
L_0080254a:; BB(0x0080254a);
    /* 0080254a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080254c: call 0x8027c8 */ r_esp -= 4; W32(r_esp, 0x802551u); f_008027c8();
L_00802551:; BB(0x00802551);
    /* 00802551: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802553: call 0x802bfc */ r_esp -= 4; W32(r_esp, 0x802558u); f_00802bfc();
    /* 00802558: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x80255du); f_006dc358();
    /* 0080255d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802560: je 0x8027a9 */ if (fZ) goto L_008027a9;
L_00802566:; BB(0x00802566);
    /* 00802566: push dword ptr [0xaafbe4] */ { u32 v = R32((u32)(0xaafbe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080256c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080256e: call 0x80319c */ r_esp -= 4; W32(r_esp, 0x802573u); f_0080319c();
    /* 00802573: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x802578u); f_006dc358();
    /* 00802578: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080257b: je 0x802686 */ if (fZ) goto L_00802686;
L_00802581:; BB(0x00802581);
    /* 00802581: mov eax, dword ptr [ebp + 0x134] */ r_eax = R32((u32)(r_ebp+0x134u));
    /* 00802587: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080258a: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 0080258f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802591: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802593: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802595: lea ecx, [ebp + edx + 0x94] */ r_ecx = (u32)(r_ebp+r_edx+0x94u);
    /* 0080259c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080259e: je 0x80279c */ if (fZ) goto L_0080279c;
L_008025a4:; BB(0x008025a4);
    /* 008025a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008025a6: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 008025a9: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008025ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008025ad: jle 0x80279c */ if ((fZ||fS!=fO)) goto L_0080279c;
L_008025b3:; BB(0x008025b3);
    /* 008025b3: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008025b7: mov ebx, edx */ r_ebx = r_edx;
    /* 008025b9: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 008025bd: mov esi, ecx */ r_esi = r_ecx;
L_008025bf:; BB(0x008025bf);
    /* 008025bf: movsx edx, word ptr [ebx + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 008025c3: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008025c6: jne 0x80266b */ if (!fZ) goto L_0080266b;
L_008025cc:; BB(0x008025cc);
    /* 008025cc: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008025cf: je 0x80266b */ if (fZ) goto L_0080266b;
L_008025d5:; BB(0x008025d5);
    /* 008025d5: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 008025d8: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 008025db: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008025de: je 0x802607 */ if (fZ) goto L_00802607;
L_008025e0:; BB(0x008025e0);
    /* 008025e0: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008025e3: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008025e5: fadd dword ptr [edx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x1cu));
    /* 008025e8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 008025eb: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008025ee: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 008025f1: fadd dword ptr [eax + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x20u));
    /* 008025f4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 008025f8: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008025fb: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 008025fe: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 00802601: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00802605: jmp 0x80262c */ goto L_0080262c;
L_00802607:; BB(0x00802607);
    /* 00802607: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0080260a: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0080260c: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0080260f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00802612: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00802615: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00802618: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 0080261b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0080261f: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00802622: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00802625: fadd dword ptr [eax + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x10u));
    /* 00802628: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0080262c:; BB(0x0080262c);
    /* 0080262c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0080262f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00802631: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x802636u); f_0078ea50();
    /* 00802636: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802639: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0080263c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0080263e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00802640: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00802642: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00802643: jbe 0x802663 */ if ((fC||fZ)) goto L_00802663;
L_00802645:; BB(0x00802645);
    /* 00802645: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00802649: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 00802650: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00802655: mov word ptr [ebx + 2], ax */ W16((u32)(r_ebx+0x2u), (u16)r_eax);
    /* 00802659: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 0080265e: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00802661: jmp 0x80266b */ goto L_0080266b;
L_00802663:; BB(0x00802663);
    /* 00802663: mov eax, dword ptr [0xaafbdc] */ r_eax = R32((u32)(0xaafbdcu));
    /* 00802668: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
L_0080266b:; BB(0x0080266b);
    /* 0080266b: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080266e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00802671: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802673: jl 0x8025bf */ if ((fS!=fO)) goto L_008025bf;
L_00802679:; BB(0x00802679);
    /* 00802679: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0080267d: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00802681: jmp 0x80279c */ goto L_0080279c;
L_00802686:; BB(0x00802686);
    /* 00802686: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 0080268a: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0080268e: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00802692: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00802694:; BB(0x00802694);
    /* 00802694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802695: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x80269au); f_0068d5a8();
    /* 0080269a: mov esi, eax */ r_esi = r_eax;
    /* 0080269c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0080269f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008026a1: je 0x802784 */ if (fZ) goto L_00802784;
L_008026a7:; BB(0x008026a7);
    /* 008026a7: mov edx, dword ptr [0xaafbdc] */ r_edx = R32((u32)(0xaafbdcu));
    /* 008026ad: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008026b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008026b2: je 0x802784 */ if (fZ) goto L_00802784;
L_008026b8:; BB(0x008026b8);
    /* 008026b8: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 008026ba: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 008026bd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008026bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008026c1: jle 0x802784 */ if ((fZ||fS!=fO)) goto L_00802784;
L_008026c7:; BB(0x008026c7);
    /* 008026c7: movsx eax, word ptr [ebp + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2u));
    /* 008026cb: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008026cd: jne 0x802776 */ if (!fZ) goto L_00802776;
L_008026d3:; BB(0x008026d3);
    /* 008026d3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008026d5: je 0x802776 */ if (fZ) goto L_00802776;
L_008026db:; BB(0x008026db);
    /* 008026db: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 008026de: lea edx, [ebp + 4] */ r_edx = (u32)(r_ebp+0x4u);
    /* 008026e1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008026e3: je 0x80270d */ if (fZ) goto L_0080270d;
L_008026e5:; BB(0x008026e5);
    /* 008026e5: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008026e8: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 008026ea: fadd dword ptr [eax + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x1cu));
    /* 008026ed: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 008026f1: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008026f4: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 008026f7: fadd dword ptr [edx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x20u));
    /* 008026fa: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 008026fe: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00802701: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 00802704: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 00802707: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0080270b: jmp 0x802733 */ goto L_00802733;
L_0080270d:; BB(0x0080270d);
    /* 0080270d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00802710: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00802712: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00802715: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00802719: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0080271c: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 0080271f: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00802722: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00802726: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00802729: fld dword ptr [ebp + 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xcu)));
    /* 0080272c: fadd dword ptr [ecx + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x10u));
    /* 0080272f: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_00802733:; BB(0x00802733);
    /* 00802733: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00802737: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802738: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00802739: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x80273eu); f_0078ea50();
    /* 0080273e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802741: fld dword ptr [ebp + 0x20] */ FPUSH(R_F32((u32)(r_ebp+0x20u)));
    /* 00802744: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00802746: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00802748: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0080274a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0080274b: jbe 0x80276d */ if ((fC||fZ)) goto L_0080276d;
L_0080274d:; BB(0x0080274d);
    /* 0080274d: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00802751: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00802758: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0080275e: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00802762: mov ecx, dword ptr [0xaafbdc] */ r_ecx = R32((u32)(0xaafbdcu));
    /* 00802768: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0080276b: jmp 0x802776 */ goto L_00802776;
L_0080276d:; BB(0x0080276d);
    /* 0080276d: mov edx, dword ptr [0xaafbdc] */ r_edx = R32((u32)(0xaafbdcu));
    /* 00802773: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
L_00802776:; BB(0x00802776);
    /* 00802776: add ebp, 0x28 */ {  u32 a = r_ebp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00802779: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0080277c: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080277e: jl 0x8026c7 */ if ((fS!=fO)) goto L_008026c7;
L_00802784:; BB(0x00802784);
    /* 00802784: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00802787: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080278a: jl 0x802694 */ if ((fS!=fO)) goto L_00802694;
L_00802790:; BB(0x00802790);
    /* 00802790: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00802794: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00802798: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_0080279c:; BB(0x0080279c);
    /* 0080279c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0080279e: call 0x8034b0 */ r_esp -= 4; W32(r_esp, 0x8027a3u); f_008034b0();
L_008027a3:; BB(0x008027a3);
    /* 008027a3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008027a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008027a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008027a8: ret  */ FN_RET(0x008024f8); r_esp += 4; return;
L_008027a9:; BB(0x008027a9);
    /* 008027a9: mov eax, dword ptr [ebp + 0x184] */ r_eax = R32((u32)(r_ebp+0x184u));
    /* 008027af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008027b1: je 0x802566 */ if (fZ) goto L_00802566;
L_008027b7:; BB(0x008027b7);
    /* 008027b7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 008027bb: mov dword ptr [ebp + 0x134], eax */ W32((u32)(r_ebp+0x134u), r_eax);
    /* 008027c1: jmp 0x802566 */ goto L_00802566;
}

void f_008027c8(void) /* sub_8027C8 */
{
    FN_ENTER(0x008027c8);
    /* 008027c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008027c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008027cb: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008027d1: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x8027d6u); f_0068d5a8();
    /* 008027d6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008027d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008027d9: je 0x80281a */ if (fZ) goto L_0080281a;
L_008027db:; BB(0x008027db);
    /* 008027db: mov dword ptr [ebp + 0x184], eax */ W32((u32)(r_ebp+0x184u), r_eax);
L_008027e1:; BB(0x008027e1);
    /* 008027e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008027e3: je 0x802818 */ if (fZ) goto L_00802818;
L_008027e5:; BB(0x008027e5);
    /* 008027e5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008027e7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 008027eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008027ec: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x8027f1u); f_007be19c();
    /* 008027f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008027f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008027f6: je 0x802809 */ if (fZ) goto L_00802809;
L_008027f8:; BB(0x008027f8);
    /* 008027f8: mov eax, dword ptr [ebp + 0x168] */ r_eax = R32((u32)(r_ebp+0x168u));
    /* 008027fe: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00802801: mov dword ptr [ebp + 0x168], eax */ W32((u32)(r_ebp+0x168u), r_eax);
    /* 00802807: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802808: ret  */ FN_RET(0x008027c8); r_esp += 4; return;
L_00802809:; BB(0x00802809);
    /* 00802809: mov eax, dword ptr [ebp + 0x168] */ r_eax = R32((u32)(r_ebp+0x168u));
    /* 0080280f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00802812: mov dword ptr [ebp + 0x168], eax */ W32((u32)(r_ebp+0x168u), r_eax);
L_00802818:; BB(0x00802818);
    /* 00802818: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802819: ret  */ FN_RET(0x008027c8); r_esp += 4; return;
L_0080281a:; BB(0x0080281a);
    /* 0080281a: mov eax, dword ptr [ebp + 0x184] */ r_eax = R32((u32)(r_ebp+0x184u));
    /* 00802820: jmp 0x8027e1 */ goto L_008027e1;
}

void f_00802824(void) /* sub_802824 */
{
    FN_ENTER(0x00802824);
    /* 00802824: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802825: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00802826: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00802829: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0080282b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0080282d: mov edi, eax */ r_edi = r_eax;
L_0080282f:; BB(0x0080282f);
    /* 0080282f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802830: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802835u); f_0068d5a8();
    /* 00802835: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802838: je 0x802849 */ if (fZ) goto L_00802849;
L_0080283a:; BB(0x0080283a);
    /* 0080283a: mov ecx, eax */ r_ecx = r_eax;
    /* 0080283c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x802841u); f_00689410();
    /* 00802841: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802843: jne 0x802b2b */ if (!fZ) goto L_00802b2b;
L_00802849:; BB(0x00802849);
    /* 00802849: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080284c: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080284f: jl 0x80282f */ if ((fS!=fO)) goto L_0080282f;
L_00802851:; BB(0x00802851);
    /* 00802851: mov eax, dword ptr [ebp + 0x184] */ r_eax = R32((u32)(r_ebp+0x184u));
    /* 00802857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802859: je 0x802a71 */ if (fZ) goto L_00802a71;
L_0080285f:; BB(0x0080285f);
    /* 0080285f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00802861: mov edi, eax */ r_edi = r_eax;
L_00802863:; BB(0x00802863);
    /* 00802863: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802864: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802869u); f_0068d5a8();
    /* 00802869: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0080286a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080286c: je 0x802898 */ if (fZ) goto L_00802898;
L_0080286e:; BB(0x0080286e);
    /* 0080286e: mov ecx, eax */ r_ecx = r_eax;
    /* 00802870: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x802875u); f_00694780();
    /* 00802875: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 0080287b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0080287e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802880: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802882: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802884: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 0080288b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x802890u); f_007c1160();
    /* 00802890: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802892: jne 0x802b31 */ if (!fZ) goto L_00802b31;
L_00802898:; BB(0x00802898);
    /* 00802898: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0080289b: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0080289e: jl 0x802863 */ if ((fS!=fO)) goto L_00802863;
L_008028a0:; BB(0x008028a0);
    /* 008028a0: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 008028a6: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x8028abu); f_00694780();
    /* 008028ab: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 008028b1: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008028b4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028b6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028b8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028ba: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 008028c1: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x8028c6u); f_007c1100();
    /* 008028c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008028c8: je 0x8028dc */ if (fZ) goto L_008028dc;
L_008028ca:; BB(0x008028ca);
    /* 008028ca: fld dword ptr [0x97ecec] */ FPUSH(R_F32((u32)(0x97ececu)));
    /* 008028d0: fadd dword ptr [ebp + 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x18cu));
    /* 008028d6: fstp dword ptr [ebp + 0x18c] */ W_F32((u32)(r_ebp+0x18cu), ST(0)); FPOP();
L_008028dc:; BB(0x008028dc);
    /* 008028dc: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 008028e2: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x8028e7u); f_00694780();
    /* 008028e7: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 008028ed: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008028f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028f2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028f4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008028f6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 008028fd: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x802902u); f_007c1100();
    /* 00802902: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802904: je 0x802918 */ if (fZ) goto L_00802918;
L_00802906:; BB(0x00802906);
    /* 00802906: fld dword ptr [ebp + 0x18c] */ FPUSH(R_F32((u32)(r_ebp+0x18cu)));
    /* 0080290c: fsub dword ptr [0x97ecec] */ ST(0) = ST(0) - R_F32((u32)(0x97ececu));
    /* 00802912: fstp dword ptr [ebp + 0x18c] */ W_F32((u32)(r_ebp+0x18cu), ST(0)); FPOP();
L_00802918:; BB(0x00802918);
    /* 00802918: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 0080291e: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x802923u); f_00694780();
    /* 00802923: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00802929: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0080292c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080292e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00802930: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00802932: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00802939: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x80293eu); f_007c1100();
    /* 0080293e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802940: je 0x802954 */ if (fZ) goto L_00802954;
L_00802942:; BB(0x00802942);
    /* 00802942: fld dword ptr [0x97ecec] */ FPUSH(R_F32((u32)(0x97ececu)));
    /* 00802948: fadd dword ptr [ebp + 0x188] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x188u));
    /* 0080294e: fstp dword ptr [ebp + 0x188] */ W_F32((u32)(r_ebp+0x188u), ST(0)); FPOP();
L_00802954:; BB(0x00802954);
    /* 00802954: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 0080295a: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x80295fu); f_00694780();
    /* 0080295f: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00802965: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00802968: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080296a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080296c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0080296e: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00802975: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x80297au); f_007c1100();
    /* 0080297a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0080297c: je 0x802990 */ if (fZ) goto L_00802990;
L_0080297e:; BB(0x0080297e);
    /* 0080297e: fld dword ptr [ebp + 0x188] */ FPUSH(R_F32((u32)(r_ebp+0x188u)));
    /* 00802984: fsub dword ptr [0x97ecec] */ ST(0) = ST(0) - R_F32((u32)(0x97ececu));
    /* 0080298a: fstp dword ptr [ebp + 0x188] */ W_F32((u32)(r_ebp+0x188u), ST(0)); FPOP();
L_00802990:; BB(0x00802990);
    /* 00802990: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 00802996: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x80299bu); f_00694780();
    /* 0080299b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0080299d: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 0080299f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008029a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029a4: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 008029aa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029ac: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029ae: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 008029b5: call 0x7c0ef8 */ r_esp -= 4; W32(r_esp, 0x8029bau); f_007c0ef8();
    /* 008029ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008029bc: je 0x8029d0 */ if (fZ) goto L_008029d0;
L_008029be:; BB(0x008029be);
    /* 008029be: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 008029c4: fsub dword ptr [0x97ece8] */ ST(0) = ST(0) - R_F32((u32)(0x97ece8u));
    /* 008029ca: fstp dword ptr [ebp + 0x190] */ W_F32((u32)(r_ebp+0x190u), ST(0)); FPOP();
L_008029d0:; BB(0x008029d0);
    /* 008029d0: mov ecx, dword ptr [ebp + 0x184] */ r_ecx = R32((u32)(r_ebp+0x184u));
    /* 008029d6: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x8029dbu); f_00694780();
    /* 008029db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008029dd: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 008029df: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008029e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029e4: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 008029ea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029ec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008029ee: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 008029f5: call 0x7c0ef8 */ r_esp -= 4; W32(r_esp, 0x8029fau); f_007c0ef8();
    /* 008029fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008029fc: je 0x802a10 */ if (fZ) goto L_00802a10;
L_008029fe:; BB(0x008029fe);
    /* 008029fe: fld dword ptr [0x97ece8] */ FPUSH(R_F32((u32)(0x97ece8u)));
    /* 00802a04: fadd dword ptr [ebp + 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x190u));
    /* 00802a0a: fstp dword ptr [ebp + 0x190] */ W_F32((u32)(r_ebp+0x190u), ST(0)); FPOP();
L_00802a10:; BB(0x00802a10);
    /* 00802a10: fld dword ptr [ebp + 0x188] */ FPUSH(R_F32((u32)(r_ebp+0x188u)));
    /* 00802a16: call 0x802b48 */ r_esp -= 4; W32(r_esp, 0x802a1bu); f_00802b48();
    /* 00802a1b: fld dword ptr [ebp + 0x18c] */ FPUSH(R_F32((u32)(r_ebp+0x18cu)));
    /* 00802a21: call 0x802b7c */ r_esp -= 4; W32(r_esp, 0x802a26u); f_00802b7c();
    /* 00802a26: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 00802a2c: call 0x802bb0 */ r_esp -= 4; W32(r_esp, 0x802a31u); f_00802bb0();
    /* 00802a31: fld dword ptr [0x97ece4] */ FPUSH(R_F32((u32)(0x97ece4u)));
    /* 00802a37: fld dword ptr [ebp + 0x188] */ FPUSH(R_F32((u32)(r_ebp+0x188u)));
    /* 00802a3d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00802a3f: fld dword ptr [ebp + 0x18c] */ FPUSH(R_F32((u32)(r_ebp+0x18cu)));
    /* 00802a45: fld dword ptr [ebp + 0x190] */ FPUSH(R_F32((u32)(r_ebp+0x190u)));
    /* 00802a4b: fmul dword ptr [0x97ece0] */ ST(0) = ST(0) * R_F32((u32)(0x97ece0u));
    /* 00802a51: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00802a53: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00802a55: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802a57: fstp dword ptr [ebp + 0x188] */ W_F32((u32)(r_ebp+0x188u), ST(0)); FPOP();
    /* 00802a5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00802a5f: fstp dword ptr [ebp + 0x190] */ W_F32((u32)(r_ebp+0x190u), ST(0)); FPOP();
    /* 00802a65: fstp dword ptr [ebp + 0x18c] */ W_F32((u32)(r_ebp+0x18cu), ST(0)); FPOP();
L_00802a6b:; BB(0x00802a6b);
    /* 00802a6b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802a6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802a6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802a70: ret  */ FN_RET(0x00802824); r_esp += 4; return;
L_00802a71:; BB(0x00802a71);
    /* 00802a71: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00802a75: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00802a77: mov edi, eax */ r_edi = r_eax;
    /* 00802a79: mov esi, ebp */ r_esi = r_ebp;
L_00802a7b:; BB(0x00802a7b);
    /* 00802a7b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802a7c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802a81u); f_0068d5a8();
    /* 00802a81: mov ebp, eax */ r_ebp = r_eax;
    /* 00802a83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802a86: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802a88: je 0x802ad6 */ if (fZ) goto L_00802ad6;
L_00802a8a:; BB(0x00802a8a);
    /* 00802a8a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802a8c: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x802a91u); f_00694780();
    /* 00802a91: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 00802a97: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00802a9a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802a9c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802a9e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802aa0: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00802aa7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x802aacu); f_007c1160();
    /* 00802aac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802aae: je 0x802ad6 */ if (fZ) goto L_00802ad6;
L_00802ab0:; BB(0x00802ab0);
    /* 00802ab0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802ab2: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x802ab7u); f_00694780();
    /* 00802ab7: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00802abd: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00802ac0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802ac2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802ac4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00802ac6: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00802acd: call 0x7c1180 */ r_esp -= 4; W32(r_esp, 0x802ad2u); f_007c1180();
    /* 00802ad2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802ad4: jne 0x802ae4 */ if (!fZ) goto L_00802ae4;
L_00802ad6:; BB(0x00802ad6);
    /* 00802ad6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00802ad9: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802adc: jl 0x802a7b */ if ((fS!=fO)) goto L_00802a7b;
L_00802ade:; BB(0x00802ade);
    /* 00802ade: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00802ae2: jmp 0x802a6b */ goto L_00802a6b;
L_00802ae4:; BB(0x00802ae4);
    /* 00802ae4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802ae6: mov ebp, esi */ r_ebp = r_esi;
    /* 00802ae8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00802aec: mov dword ptr [ebp + 0x184], ecx */ W32((u32)(r_ebp+0x184u), r_ecx);
    /* 00802af2: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00802af5: mov dword ptr [0xaafb40], eax */ W32((u32)(0xaafb40u), r_eax);
    /* 00802afa: mov edx, dword ptr [ebp + 0x184] */ r_edx = R32((u32)(r_ebp+0x184u));
    /* 00802b00: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 00802b03: mov dword ptr [0xaafb48], eax */ W32((u32)(0xaafb48u), r_eax);
    /* 00802b08: mov dword ptr [ebp + 0x188], 0 */ W32((u32)(r_ebp+0x188u), 0x0u);
    /* 00802b12: mov dword ptr [ebp + 0x18c], 0 */ W32((u32)(r_ebp+0x18cu), 0x0u);
    /* 00802b1c: mov dword ptr [ebp + 0x190], 0 */ W32((u32)(r_ebp+0x190u), 0x0u);
    /* 00802b26: jmp 0x802a6b */ goto L_00802a6b;
L_00802b2b:; BB(0x00802b2b);
    /* 00802b2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802b2e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802b2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802b30: ret  */ FN_RET(0x00802824); r_esp += 4; return;
L_00802b31:; BB(0x00802b31);
    /* 00802b31: mov dword ptr [ebp + 0x184], 0 */ W32((u32)(r_ebp+0x184u), 0x0u);
    /* 00802b3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802b3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802b40: ret  */ FN_RET(0x00802824); r_esp += 4; return;
}

void f_00802b44(void) /* sub_802B44 */
{
    FN_ENTER(0x00802b44);
    /* 00802b44: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00802b48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802b49: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802b4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802b51: je 0x802b5c */ if (fZ) goto L_00802b5c;
L_00802b53:; BB(0x00802b53);
    /* 00802b53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802b56: je 0x802b5c */ if (fZ) goto L_00802b5c;
L_00802b58:; BB(0x00802b58);
    /* 00802b58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802b5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b5b: ret  */ FN_RET(0x00802b44); r_esp += 4; return;
L_00802b5c:; BB(0x00802b5c);
    /* 00802b5c: fld dword ptr [0xaafb40] */ FPUSH(R_F32((u32)(0xaafb40u)));
    /* 00802b62: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00802b64: fstp dword ptr [0xaafb40] */ W_F32((u32)(0xaafb40u), ST(0)); FPOP();
    /* 00802b6a: mov eax, 0xaafb40 */ r_eax = 0xaafb40u;
    /* 00802b6f: call 0x8058b4 */ r_esp -= 4; W32(r_esp, 0x802b74u); f_008058b4();
    /* 00802b74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b75: ret  */ FN_RET(0x00802b44); r_esp += 4; return;
}

void f_00802b48(void)
{
    FN_ENTER(0x00802b48);
    /* 00802b48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802b49: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802b4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802b51: je 0x802b5c */ if (fZ) goto L_00802b5c;
L_00802b53:; BB(0x00802b53);
    /* 00802b53: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802b56: je 0x802b5c */ if (fZ) goto L_00802b5c;
L_00802b58:; BB(0x00802b58);
    /* 00802b58: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802b5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b5b: ret  */ FN_RET(0x00802b48); r_esp += 4; return;
L_00802b5c:; BB(0x00802b5c);
    /* 00802b5c: fld dword ptr [0xaafb40] */ FPUSH(R_F32((u32)(0xaafb40u)));
    /* 00802b62: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00802b64: fstp dword ptr [0xaafb40] */ W_F32((u32)(0xaafb40u), ST(0)); FPOP();
    /* 00802b6a: mov eax, 0xaafb40 */ r_eax = 0xaafb40u;
    /* 00802b6f: call 0x8058b4 */ r_esp -= 4; W32(r_esp, 0x802b74u); f_008058b4();
    /* 00802b74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b75: ret  */ FN_RET(0x00802b48); r_esp += 4; return;
}

void f_00802b78(void) /* sub_802B78 */
{
    FN_ENTER(0x00802b78);
    /* 00802b78: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00802b7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802b7d: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802b82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802b85: je 0x802b90 */ if (fZ) goto L_00802b90;
L_00802b87:; BB(0x00802b87);
    /* 00802b87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802b8a: je 0x802b90 */ if (fZ) goto L_00802b90;
L_00802b8c:; BB(0x00802b8c);
    /* 00802b8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802b8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b8f: ret  */ FN_RET(0x00802b78); r_esp += 4; return;
L_00802b90:; BB(0x00802b90);
    /* 00802b90: fld dword ptr [0xaafb48] */ FPUSH(R_F32((u32)(0xaafb48u)));
    /* 00802b96: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00802b98: fstp dword ptr [0xaafb48] */ W_F32((u32)(0xaafb48u), ST(0)); FPOP();
    /* 00802b9e: mov eax, 0xaafb40 */ r_eax = 0xaafb40u;
    /* 00802ba3: call 0x8058b4 */ r_esp -= 4; W32(r_esp, 0x802ba8u); f_008058b4();
    /* 00802ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802ba9: ret  */ FN_RET(0x00802b78); r_esp += 4; return;
}

void f_00802b7c(void)
{
    FN_ENTER(0x00802b7c);
    /* 00802b7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802b7d: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802b82: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802b85: je 0x802b90 */ if (fZ) goto L_00802b90;
L_00802b87:; BB(0x00802b87);
    /* 00802b87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802b8a: je 0x802b90 */ if (fZ) goto L_00802b90;
L_00802b8c:; BB(0x00802b8c);
    /* 00802b8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802b8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802b8f: ret  */ FN_RET(0x00802b7c); r_esp += 4; return;
L_00802b90:; BB(0x00802b90);
    /* 00802b90: fld dword ptr [0xaafb48] */ FPUSH(R_F32((u32)(0xaafb48u)));
    /* 00802b96: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00802b98: fstp dword ptr [0xaafb48] */ W_F32((u32)(0xaafb48u), ST(0)); FPOP();
    /* 00802b9e: mov eax, 0xaafb40 */ r_eax = 0xaafb40u;
    /* 00802ba3: call 0x8058b4 */ r_esp -= 4; W32(r_esp, 0x802ba8u); f_008058b4();
    /* 00802ba8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00802ba9: ret  */ FN_RET(0x00802b7c); r_esp += 4; return;
}

void f_00802bac(void) /* sub_802BAC */
{
    FN_ENTER(0x00802bac);
    /* 00802bac: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00802bb0: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802bb5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802bb8: je 0x802bc2 */ if (fZ) goto L_00802bc2;
L_00802bba:; BB(0x00802bba);
    /* 00802bba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802bbd: je 0x802bc2 */ if (fZ) goto L_00802bc2;
L_00802bbf:; BB(0x00802bbf);
    /* 00802bbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bc1: ret  */ FN_RET(0x00802bac); r_esp += 4; return;
L_00802bc2:; BB(0x00802bc2);
    /* 00802bc2: fld dword ptr [0xaafb44] */ FPUSH(R_F32((u32)(0xaafb44u)));
    /* 00802bc8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00802bca: fld dword ptr [0xa11468] */ FPUSH(R_F32((u32)(0xa11468u)));
    /* 00802bd0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00802bd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00802bd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00802bd5: jb 0x802bd9 */ if (fC) goto L_00802bd9;
L_00802bd7:; BB(0x00802bd7);
    /* 00802bd7: fst st(1) */ ST(1) = ST(0);
L_00802bd9:; BB(0x00802bd9);
    /* 00802bd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bdb: fcom dword ptr [0xa11464] */ fx_compare(ST(0), R_F32((u32)(0xa11464u))); 
    /* 00802be1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00802be3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00802be4: mov edx, dword ptr [0xa11464] */ r_edx = R32((u32)(0xa11464u));
    /* 00802bea: jbe 0x802bf5 */ if ((fC||fZ)) goto L_00802bf5;
L_00802bec:; BB(0x00802bec);
    /* 00802bec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bee: mov dword ptr [0xaafb44], edx */ W32((u32)(0xaafb44u), r_edx);
    /* 00802bf4: ret  */ FN_RET(0x00802bac); r_esp += 4; return;
L_00802bf5:; BB(0x00802bf5);
    /* 00802bf5: fstp dword ptr [0xaafb44] */ W_F32((u32)(0xaafb44u), ST(0)); FPOP();
    /* 00802bfb: ret  */ FN_RET(0x00802bac); r_esp += 4; return;
}

void f_00802bb0(void)
{
    FN_ENTER(0x00802bb0);
    /* 00802bb0: mov eax, dword ptr [0xaafbe4] */ r_eax = R32((u32)(0xaafbe4u));
    /* 00802bb5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802bb8: je 0x802bc2 */ if (fZ) goto L_00802bc2;
L_00802bba:; BB(0x00802bba);
    /* 00802bba: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00802bbd: je 0x802bc2 */ if (fZ) goto L_00802bc2;
L_00802bbf:; BB(0x00802bbf);
    /* 00802bbf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bc1: ret  */ FN_RET(0x00802bb0); r_esp += 4; return;
L_00802bc2:; BB(0x00802bc2);
    /* 00802bc2: fld dword ptr [0xaafb44] */ FPUSH(R_F32((u32)(0xaafb44u)));
    /* 00802bc8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00802bca: fld dword ptr [0xa11468] */ FPUSH(R_F32((u32)(0xa11468u)));
    /* 00802bd0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00802bd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00802bd4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00802bd5: jb 0x802bd9 */ if (fC) goto L_00802bd9;
L_00802bd7:; BB(0x00802bd7);
    /* 00802bd7: fst st(1) */ ST(1) = ST(0);
L_00802bd9:; BB(0x00802bd9);
    /* 00802bd9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bdb: fcom dword ptr [0xa11464] */ fx_compare(ST(0), R_F32((u32)(0xa11464u))); 
    /* 00802be1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00802be3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00802be4: mov edx, dword ptr [0xa11464] */ r_edx = R32((u32)(0xa11464u));
    /* 00802bea: jbe 0x802bf5 */ if ((fC||fZ)) goto L_00802bf5;
L_00802bec:; BB(0x00802bec);
    /* 00802bec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00802bee: mov dword ptr [0xaafb44], edx */ W32((u32)(0xaafb44u), r_edx);
    /* 00802bf4: ret  */ FN_RET(0x00802bb0); r_esp += 4; return;
L_00802bf5:; BB(0x00802bf5);
    /* 00802bf5: fstp dword ptr [0xaafb44] */ W_F32((u32)(0xaafb44u), ST(0)); FPOP();
    /* 00802bfb: ret  */ FN_RET(0x00802bb0); r_esp += 4; return;
}

void f_00802bfc(void) /* sub_802BFC */
{
    FN_ENTER(0x00802bfc);
    /* 00802bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00802bfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00802bfe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00802bff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00802c00: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00802c03: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00802c05: mov edi, dword ptr [0xaafca0] */ r_edi = R32((u32)(0xaafca0u));
    /* 00802c0b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00802c11: mov dword ptr [ebp + 0x134], 0xffffffff */ W32((u32)(r_ebp+0x134u), 0xffffffffu);
    /* 00802c1b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00802c1d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802c22u); f_0068d5a8();
    /* 00802c22: mov ebx, eax */ r_ebx = r_eax;
    /* 00802c24: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802c27: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802c29: je 0x80310d */ if (fZ) goto L_0080310d;
L_00802c2f:; BB(0x00802c2f);
    /* 00802c2f: mov esi, dword ptr [ebx + 0x900] */ r_esi = R32((u32)(r_ebx+0x900u));
    /* 00802c35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00802c37: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x802c3cu); f_00689b44();
    /* 00802c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802c3e: jne 0x80309d */ if (!fZ) goto L_0080309d;
L_00802c44:; BB(0x00802c44);
    /* 00802c44: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00802c47: mov dword ptr [ebp + 0x94], edx */ W32((u32)(r_ebp+0x94u), r_edx);
    /* 00802c4d: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00802c50: mov dword ptr [ebp + 0x98], edx */ W32((u32)(r_ebp+0x98u), r_edx);
    /* 00802c56: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 00802c59: mov dword ptr [ebp + 0x9c], edx */ W32((u32)(r_ebp+0x9cu), r_edx);
    /* 00802c5f: mov dword ptr [ebp + 0x98], 0x41200000 */ W32((u32)(r_ebp+0x98u), 0x41200000u);
    /* 00802c69: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00802c6c: mov dword ptr [ebp + 0xa0], edx */ W32((u32)(r_ebp+0xa0u), r_edx);
    /* 00802c72: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 00802c78: mov dword ptr [ebp + 0x134], 0 */ W32((u32)(r_ebp+0x134u), 0x0u);
    /* 00802c82: mov word ptr [ebp + 0xaa], dx */ W16((u32)(r_ebp+0xaau), (u16)r_edx);
    /* 00802c89: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00802c8b: call 0x803180 */ r_esp -= 4; W32(r_esp, 0x802c90u); f_00803180();
    /* 00802c90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802c92: je 0x802cd3 */ if (fZ) goto L_00802cd3;
L_00802c94:; BB(0x00802c94);
    /* 00802c94: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802c97: je 0x802fcb */ if (fZ) goto L_00802fcb;
L_00802c9d:; BB(0x00802c9d);
    /* 00802c9d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802ca0: je 0x802f9c */ if (fZ) goto L_00802f9c;
L_00802ca6:; BB(0x00802ca6);
    /* 00802ca6: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00802cb0: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00802cb5: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 00802cbb: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00802cc0: mov ebx, 0x3f800000 */ r_ebx = 0x3f800000u;
    /* 00802cc5: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 00802ccb: mov dword ptr [ebp + 0xb4], ebx */ W32((u32)(r_ebp+0xb4u), r_ebx);
    /* 00802cd1: jmp 0x802d0d */ goto L_00802d0d;
L_00802cd3:; BB(0x00802cd3);
    /* 00802cd3: movzx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00802cd7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00802cd9: mov eax, dword ptr [ecx*8 + 0x97eaa0] */ r_eax = R32((u32)(r_ecx*8+0x97eaa0u));
    /* 00802ce0: mov edx, dword ptr [ecx*8 + 0x97eaa4] */ r_edx = R32((u32)(r_ecx*8+0x97eaa4u));
    /* 00802ce7: mov ebx, dword ptr [ecx*8 + 0x97eaa8] */ r_ebx = R32((u32)(r_ecx*8+0x97eaa8u));
    /* 00802cee: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 00802cf4: mov eax, dword ptr [ecx*8 + 0x97eaac] */ r_eax = R32((u32)(r_ecx*8+0x97eaacu));
    /* 00802cfb: mov dword ptr [ebp + 0xb0], edx */ W32((u32)(r_ebp+0xb0u), r_edx);
    /* 00802d01: mov dword ptr [ebp + 0xb4], ebx */ W32((u32)(r_ebp+0xb4u), r_ebx);
    /* 00802d07: mov dword ptr [ebp + 0xb8], eax */ W32((u32)(r_ebp+0xb8u), r_eax);
L_00802d0d:; BB(0x00802d0d);
    /* 00802d0d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00802d11: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00802d14: lea eax, [ebp + 0xbc] */ r_eax = (u32)(r_ebp+0xbcu);
    /* 00802d1a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00802d1c: mov ebp, eax */ r_ebp = r_eax;
L_00802d1e:; BB(0x00802d1e);
    /* 00802d1e: cmp ebx, dword ptr [0xa9c4f4] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d24: je 0x802ee9 */ if (fZ) goto L_00802ee9;
L_00802d2a:; BB(0x00802d2a);
    /* 00802d2a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x802d2fu); f_006dc358();
    /* 00802d2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d32: je 0x80308b */ if (fZ) goto L_0080308b;
L_00802d38:; BB(0x00802d38);
    /* 00802d38: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x802d3du); f_00687c48();
    /* 00802d3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d3f: je 0x802e23 */ if (fZ) goto L_00802e23;
L_00802d45:; BB(0x00802d45);
    /* 00802d45: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d47: je 0x80303c */ if (fZ) goto L_0080303c;
L_00802d4d:; BB(0x00802d4d);
    /* 00802d4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00802d4e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802d53u); f_0068d5a8();
    /* 00802d53: mov edi, eax */ r_edi = r_eax;
    /* 00802d55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802d58: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d5a: je 0x802dd4 */ if (fZ) goto L_00802dd4;
L_00802d5c:; BB(0x00802d5c);
    /* 00802d5c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00802d60: cmp edx, dword ptr [edi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d66: jne 0x802dd4 */ if (!fZ) goto L_00802dd4;
L_00802d68:; BB(0x00802d68);
    /* 00802d68: cmp esi, dword ptr [edi + 0x900] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x900u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d6e: jne 0x802dd4 */ if (!fZ) goto L_00802dd4;
L_00802d70:; BB(0x00802d70);
    /* 00802d70: mov ecx, edi */ r_ecx = r_edi;
    /* 00802d72: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x802d77u); f_00689b44();
    /* 00802d77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802d79: jne 0x802dd4 */ if (!fZ) goto L_00802dd4;
L_00802d7b:; BB(0x00802d7b);
    /* 00802d7b: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00802d7e: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00802d81: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00802d84: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00802d87: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00802d8a: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00802d8d: mov dword ptr [ebp + 4], 0x41200000 */ W32((u32)(r_ebp+0x4u), 0x41200000u);
    /* 00802d94: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00802d97: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00802d9a: mov word ptr [ebp + 0x16], bx */ W16((u32)(r_ebp+0x16u), (u16)r_ebx);
    /* 00802d9e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802da1: je 0x80301b */ if (fZ) goto L_0080301b;
L_00802da7:; BB(0x00802da7);
    /* 00802da7: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802daa: je 0x802ff8 */ if (fZ) goto L_00802ff8;
L_00802db0:; BB(0x00802db0);
    /* 00802db0: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00802db7: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00802dbc: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 00802dbf: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 00802dc4: mov edi, 0x3f800000 */ r_edi = 0x3f800000u;
    /* 00802dc9: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 00802dcc: mov dword ptr [ebp + 0x20], edi */ W32((u32)(r_ebp+0x20u), r_edi);
    /* 00802dcf: jmp 0x802ee6 */ goto L_00802ee6;
L_00802dd4:; BB(0x00802dd4);
    /* 00802dd4: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00802ddb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00802ddd: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00802de0: mov word ptr [ebp + 0x14], dx */ W16((u32)(r_ebp+0x14u), (u16)r_edx);
    /* 00802de4: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 00802deb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00802df0: mov word ptr [ebp + 0x16], cx */ W16((u32)(r_ebp+0x16u), (u16)r_ecx);
    /* 00802df4: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00802dfb: mov dword ptr [ebp + 0x10], 0x3f800000 */ W32((u32)(r_ebp+0x10u), 0x3f800000u);
    /* 00802e02: mov dword ptr [ebp + 0x24], 0x3f800000 */ W32((u32)(r_ebp+0x24u), 0x3f800000u);
    /* 00802e09: mov dword ptr [ebp + 0x20], 0x3f800000 */ W32((u32)(r_ebp+0x20u), 0x3f800000u);
    /* 00802e10: mov dword ptr [ebp + 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0x1cu), 0x3f800000u);
    /* 00802e17: mov dword ptr [ebp + 0x18], 0x3f800000 */ W32((u32)(r_ebp+0x18u), 0x3f800000u);
    /* 00802e1e: jmp 0x802ee6 */ goto L_00802ee6;
L_00802e23:; BB(0x00802e23);
    /* 00802e23: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00802e24: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x802e29u); f_0068d5a8();
    /* 00802e29: mov edi, eax */ r_edi = r_eax;
    /* 00802e2b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00802e2e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802e30: je 0x802e9c */ if (fZ) goto L_00802e9c;
L_00802e32:; BB(0x00802e32);
    /* 00802e32: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00802e36: cmp edx, dword ptr [edi + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802e3c: jne 0x802e9c */ if (!fZ) goto L_00802e9c;
L_00802e3e:; BB(0x00802e3e);
    /* 00802e3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00802e40: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x802e45u); f_00689b44();
    /* 00802e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802e47: jne 0x802e9c */ if (!fZ) goto L_00802e9c;
L_00802e49:; BB(0x00802e49);
    /* 00802e49: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00802e4c: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00802e4f: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00802e52: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 00802e55: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 00802e58: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00802e5b: mov dword ptr [ebp + 4], 0x41200000 */ W32((u32)(r_ebp+0x4u), 0x41200000u);
    /* 00802e62: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00802e65: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00802e68: mov word ptr [ebp + 0x16], bx */ W16((u32)(r_ebp+0x16u), (u16)r_ebx);
    /* 00802e6c: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00802e70: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00802e72: mov ecx, dword ptr [eax*8 + 0x97eaa0] */ r_ecx = R32((u32)(r_eax*8+0x97eaa0u));
    /* 00802e79: mov edi, dword ptr [eax*8 + 0x97eaa4] */ r_edi = R32((u32)(r_eax*8+0x97eaa4u));
    /* 00802e80: mov edx, dword ptr [eax*8 + 0x97eaa8] */ r_edx = R32((u32)(r_eax*8+0x97eaa8u));
    /* 00802e87: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00802e8a: mov dword ptr [ebp + 0x1c], edi */ W32((u32)(r_ebp+0x1cu), r_edi);
    /* 00802e8d: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00802e90: mov edx, dword ptr [eax*8 + 0x97eaac] */ r_edx = R32((u32)(r_eax*8+0x97eaacu));
    /* 00802e97: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 00802e9a: jmp 0x802ee6 */ goto L_00802ee6;
L_00802e9c:; BB(0x00802e9c);
    /* 00802e9c: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00802ea3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00802ea5: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00802ea8: mov word ptr [ebp + 0x14], dx */ W16((u32)(r_ebp+0x14u), (u16)r_edx);
    /* 00802eac: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 00802eb3: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00802eb8: mov word ptr [ebp + 0x16], cx */ W16((u32)(r_ebp+0x16u), (u16)r_ecx);
    /* 00802ebc: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00802ec3: mov dword ptr [ebp + 0x10], 0x3f800000 */ W32((u32)(r_ebp+0x10u), 0x3f800000u);
    /* 00802eca: mov dword ptr [ebp + 0x24], 0x3f800000 */ W32((u32)(r_ebp+0x24u), 0x3f800000u);
    /* 00802ed1: mov dword ptr [ebp + 0x20], 0x3f800000 */ W32((u32)(r_ebp+0x20u), 0x3f800000u);
    /* 00802ed8: mov dword ptr [ebp + 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0x1cu), 0x3f800000u);
    /* 00802edf: mov dword ptr [ebp + 0x18], 0x3f800000 */ W32((u32)(r_ebp+0x18u), 0x3f800000u);
L_00802ee6:; BB(0x00802ee6);
    /* 00802ee6: add ebp, 0x28 */ {  u32 a = r_ebp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00802ee9:; BB(0x00802ee9);
    /* 00802ee9: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00802eec: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00802eef: jl 0x802d1e */ if ((fS!=fO)) goto L_00802d1e;
L_00802ef5:; BB(0x00802ef5);
    /* 00802ef5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00802ef8: mov eax, dword ptr [ebp + 0x16c] */ r_eax = R32((u32)(r_ebp+0x16cu));
    /* 00802efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802f00: je 0x802f6c */ if (fZ) goto L_00802f6c;
L_00802f02:; BB(0x00802f02);
    /* 00802f02: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802f05: jne 0x802f37 */ if (!fZ) goto L_00802f37;
L_00802f07:; BB(0x00802f07);
    /* 00802f07: mov dword ptr [ebp + 0xa4], 0x41b00000 */ W32((u32)(r_ebp+0xa4u), 0x41b00000u);
    /* 00802f11: mov dword ptr [ebp + 0xcc], 0x41b00000 */ W32((u32)(r_ebp+0xccu), 0x41b00000u);
    /* 00802f1b: mov dword ptr [ebp + 0xf4], 0x41b00000 */ W32((u32)(r_ebp+0xf4u), 0x41b00000u);
    /* 00802f25: mov dword ptr [ebp + 0x11c], 0x41b00000 */ W32((u32)(r_ebp+0x11cu), 0x41b00000u);
    /* 00802f2f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802f32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00802f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802f34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00802f35: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802f36: ret  */ FN_RET(0x00802bfc); r_esp += 4; return;
L_00802f37:; BB(0x00802f37);
    /* 00802f37: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00802f3a: jne 0x802f94 */ if (!fZ) goto L_00802f94;
L_00802f3c:; BB(0x00802f3c);
    /* 00802f3c: mov dword ptr [ebp + 0xa4], 0x41766666 */ W32((u32)(r_ebp+0xa4u), 0x41766666u);
    /* 00802f46: mov dword ptr [ebp + 0xcc], 0x41766666 */ W32((u32)(r_ebp+0xccu), 0x41766666u);
    /* 00802f50: mov dword ptr [ebp + 0xf4], 0x41766666 */ W32((u32)(r_ebp+0xf4u), 0x41766666u);
    /* 00802f5a: mov dword ptr [ebp + 0x11c], 0x41766666 */ W32((u32)(r_ebp+0x11cu), 0x41766666u);
    /* 00802f64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802f67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00802f68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802f69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00802f6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802f6b: ret  */ FN_RET(0x00802bfc); r_esp += 4; return;
L_00802f6c:; BB(0x00802f6c);
    /* 00802f6c: mov dword ptr [ebp + 0xa4], 0x41b00000 */ W32((u32)(r_ebp+0xa4u), 0x41b00000u);
    /* 00802f76: mov dword ptr [ebp + 0xcc], 0x41b00000 */ W32((u32)(r_ebp+0xccu), 0x41b00000u);
    /* 00802f80: mov dword ptr [ebp + 0xf4], 0x41b00000 */ W32((u32)(r_ebp+0xf4u), 0x41b00000u);
    /* 00802f8a: mov dword ptr [ebp + 0x11c], 0x41b00000 */ W32((u32)(r_ebp+0x11cu), 0x41b00000u);
L_00802f94:; BB(0x00802f94);
    /* 00802f94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00802f97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00802f98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00802f99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00802f9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00802f9b: ret  */ FN_RET(0x00802bfc); r_esp += 4; return;
L_00802f9c:; BB(0x00802f9c);
    /* 00802f9c: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 00802fa6: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00802fab: mov dword ptr [ebp + 0xac], eax */ W32((u32)(r_ebp+0xacu), r_eax);
    /* 00802fb1: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00802fbb: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00802fc0: mov dword ptr [ebp + 0xb4], edx */ W32((u32)(r_ebp+0xb4u), r_edx);
    /* 00802fc6: jmp 0x802d0d */ goto L_00802d0d;
L_00802fcb:; BB(0x00802fcb);
    /* 00802fcb: mov dword ptr [ebp + 0xac], 0x3f800000 */ W32((u32)(r_ebp+0xacu), 0x3f800000u);
    /* 00802fd5: mov dword ptr [ebp + 0xb0], 0x3f800000 */ W32((u32)(r_ebp+0xb0u), 0x3f800000u);
    /* 00802fdf: mov dword ptr [ebp + 0xb4], 0 */ W32((u32)(r_ebp+0xb4u), 0x0u);
    /* 00802fe9: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 00802ff3: jmp 0x802d0d */ goto L_00802d0d;
L_00802ff8:; BB(0x00802ff8);
    /* 00802ff8: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 00802fff: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00803004: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 00803007: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 0080300e: mov ecx, 0x3f800000 */ r_ecx = 0x3f800000u;
    /* 00803013: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00803016: jmp 0x802ee6 */ goto L_00802ee6;
L_0080301b:; BB(0x0080301b);
    /* 0080301b: mov dword ptr [ebp + 0x18], 0x3f800000 */ W32((u32)(r_ebp+0x18u), 0x3f800000u);
    /* 00803022: mov dword ptr [ebp + 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0x1cu), 0x3f800000u);
    /* 00803029: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 00803030: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00803037: jmp 0x802ee6 */ goto L_00802ee6;
L_0080303c:; BB(0x0080303c);
    /* 0080303c: mov dword ptr [ebp + 8], 0 */ W32((u32)(r_ebp+0x8u), 0x0u);
    /* 00803043: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00803045: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00803048: mov word ptr [ebp + 0x14], dx */ W16((u32)(r_ebp+0x14u), (u16)r_edx);
    /* 0080304c: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
    /* 00803053: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00803058: mov word ptr [ebp + 0x16], cx */ W16((u32)(r_ebp+0x16u), (u16)r_ecx);
    /* 0080305c: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 00803063: mov dword ptr [ebp + 0x10], 0x3f800000 */ W32((u32)(r_ebp+0x10u), 0x3f800000u);
    /* 0080306a: mov dword ptr [ebp + 0x24], 0x3f800000 */ W32((u32)(r_ebp+0x24u), 0x3f800000u);
    /* 00803071: mov dword ptr [ebp + 0x20], 0x3f800000 */ W32((u32)(r_ebp+0x20u), 0x3f800000u);
    /* 00803078: mov dword ptr [ebp + 0x1c], 0x3f800000 */ W32((u32)(r_ebp+0x1cu), 0x3f800000u);
    /* 0080307f: mov dword ptr [ebp + 0x18], 0x3f800000 */ W32((u32)(r_ebp+0x18u), 0x3f800000u);
    /* 00803086: jmp 0x802ee6 */ goto L_00802ee6;
L_0080308b:; BB(0x0080308b);
    /* 0080308b: call 0x78b1e8 */ r_esp -= 4; W32(r_esp, 0x803090u); f_0078b1e8();
    /* 00803090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00803092: je 0x802e23 */ if (fZ) goto L_00802e23;
L_00803098:; BB(0x00803098);
    /* 00803098: jmp 0x802d38 */ goto L_00802d38;
L_0080309d:; BB(0x0080309d);
    /* 0080309d: mov dword ptr [ebp + 0x9c], 0 */ W32((u32)(r_ebp+0x9cu), 0x0u);
    /* 008030a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008030a9: mov dword ptr [ebp + 0xa0], eax */ W32((u32)(r_ebp+0xa0u), r_eax);
    /* 008030af: mov word ptr [ebp + 0xa8], ax */ W16((u32)(r_ebp+0xa8u), (u16)r_eax);
    /* 008030b6: mov dword ptr [ebp + 0x98], 0 */ W32((u32)(r_ebp+0x98u), 0x0u);
    /* 008030c0: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 008030c5: mov word ptr [ebp + 0xaa], dx */ W16((u32)(r_ebp+0xaau), (u16)r_edx);
    /* 008030cc: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 008030d6: mov dword ptr [ebp + 0xa4], 0x3f800000 */ W32((u32)(r_ebp+0xa4u), 0x3f800000u);
    /* 008030e0: mov dword ptr [ebp + 0xb8], 0x3f800000 */ W32((u32)(r_ebp+0xb8u), 0x3f800000u);
    /* 008030ea: mov dword ptr [ebp + 0xb4], 0x3f800000 */ W32((u32)(r_ebp+0xb4u), 0x3f800000u);
    /* 008030f4: mov dword ptr [ebp + 0xb0], 0x3f800000 */ W32((u32)(r_ebp+0xb0u), 0x3f800000u);
    /* 008030fe: mov dword ptr [ebp + 0xac], 0x3f800000 */ W32((u32)(r_ebp+0xacu), 0x3f800000u);
    /* 00803108: jmp 0x802d0d */ goto L_00802d0d;
L_0080310d:; BB(0x0080310d);
    /* 0080310d: mov dword ptr [ebp + 0x9c], 0 */ W32((u32)(r_ebp+0x9cu), 0x0u);
    /* 00803117: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00803119: mov dword ptr [ebp + 0xa0], eax */ W32((u32)(r_ebp+0xa0u), r_eax);
    /* 0080311f: mov word ptr [ebp + 0xa8], ax */ W16((u32)(r_ebp+0xa8u), (u16)r_eax);
    /* 00803126: mov dword ptr [ebp + 0x98], 0 */ W32((u32)(r_ebp+0x98u), 0x0u);
    /* 00803130: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00803135: mov word ptr [ebp + 0xaa], dx */ W16((u32)(r_ebp+0xaau), (u16)r_edx);
    /* 0080313c: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 00803146: mov dword ptr [ebp + 0xa4], 0x3f800000 */ W32((u32)(r_ebp+0xa4u), 0x3f800000u);
    /* 00803150: mov dword ptr [ebp + 0xb8], 0x3f800000 */ W32((u32)(r_ebp+0xb8u), 0x3f800000u);
    /* 0080315a: mov dword ptr [ebp + 0xb4], 0x3f800000 */ W32((u32)(r_ebp+0xb4u), 0x3f800000u);
    /* 00803164: mov dword ptr [ebp + 0xb0], 0x3f800000 */ W32((u32)(r_ebp+0xb0u), 0x3f800000u);
    /* 0080316e: mov dword ptr [ebp + 0xac], 0x3f800000 */ W32((u32)(r_ebp+0xacu), 0x3f800000u);
    /* 00803178: jmp 0x802d0d */ goto L_00802d0d;
}

