#include "protos.h"

void f_0057403c(void) /* sub_57403C */
{
    FN_ENTER(0x0057403c);
    /* 0057403c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057403d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057403f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00574041: call 0x574060 */ r_esp -= 4; W32(r_esp, 0x574046u); f_00574060();
    /* 00574046: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057404a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057404c: jne 0x574052 */ if (!fZ) goto L_00574052;
L_0057404e:; BB(0x0057404e);
    /* 0057404e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057404f: ret 4 */ FN_RET(0x0057403c); r_esp += 8; return;
L_00574052:; BB(0x00574052);
    /* 00574052: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00574053: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x574058u); f_005c2f74();
    /* 00574058: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00574059: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057405a: ret 4 */ FN_RET(0x0057403c); r_esp += 8; return;
}

void f_00574060(void) /* sub_574060 */
{
    FN_ENTER(0x00574060);
    /* 00574060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574061: mov ebp, esp */ r_ebp = r_esp;
    /* 00574063: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00574065: push 0x8d71d4 */ { u32 v = 0x8d71d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0057406a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00574070: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574071: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00574078: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057407b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057407e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00574081: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00574084: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00574087: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057408a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057408d: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 00574090: mov dword ptr [ecx], 0xb065f0 */ W32((u32)(r_ecx), 0xb065f0u);
    /* 00574096: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574098: je 0x5740b1 */ if (fZ) goto L_005740b1;
L_0057409a:; BB(0x0057409a);
    /* 0057409a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057409d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005740a1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005740a6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005740aa: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_005740b1:; BB(0x005740b1);
    /* 005740b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005740b8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5740bdu); f_008171e8();
    /* 005740bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005740c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005740c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005740c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005740ca: ret  */ FN_RET(0x00574060); r_esp += 4; return;
}

void f_005740cc(void) /* sub_5740CC */
{
    FN_ENTER(0x005740cc);
    /* 005740cc: mov eax, 0xa73fb8 */ r_eax = 0xa73fb8u;
    /* 005740d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005740d3: je 0x5740df */ if (fZ) goto L_005740df;
L_005740d5:; BB(0x005740d5);
    /* 005740d5: mov ecx, 0xa73fb8 */ r_ecx = 0xa73fb8u;
    /* 005740da: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x5740dfu); f_00829de0();
L_005740df:; BB(0x005740df);
    /* 005740df: mov eax, dword ptr [0xa73fc0] */ r_eax = R32((u32)(0xa73fc0u));
    /* 005740e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005740e6: je 0x5740f9 */ if (fZ) goto L_005740f9;
L_005740e8:; BB(0x005740e8);
    /* 005740e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005740e9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5740eeu); f_00857e98();
    /* 005740ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005740ef: mov dword ptr [0xa73fc0], 0 */ W32((u32)(0xa73fc0u), 0x0u);
L_005740f9:; BB(0x005740f9);
    /* 005740f9: ret  */ FN_RET(0x005740cc); r_esp += 4; return;
}

void f_005740fc(void) /* sub_5740FC */
{
    FN_ENTER(0x005740fc);
    /* 005740fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005740fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005740ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00574101: push 0x8d71f0 */ { u32 v = 0x8d71f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0057410c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057410d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00574114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0057411a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0057411d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00574120: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00574123: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00574126: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574129: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0057412c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057412f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x574134u); f_008193cc();
    /* 00574134: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0057413b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057413e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00574141: mov dword ptr [edx], 0xb065f0 */ W32((u32)(r_edx), 0xb065f0u);
    /* 00574147: mov eax, dword ptr [0x9beaf4] */ r_eax = R32((u32)(0x9beaf4u));
    /* 0057414c: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 00574153: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00574156: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00574159: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057415a: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x57415fu); f_00520f3c();
    /* 0057415f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00574160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00574162: jne 0x574169 */ if (!fZ) goto L_00574169;
L_00574164:; BB(0x00574164);
    /* 00574164: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00574167: jmp 0x574188 */ goto L_00574188;
L_00574169:; BB(0x00574169);
    /* 00574169: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057416c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0057416e: push 0x20d */ { u32 v = 0x20du; r_esp -= 4; W32(r_esp, v); }
    /* 00574173: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00574176: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00574179: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0057417a: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x57417fu); f_0050981c();
    /* 0057417f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00574182: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00574185: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_00574188:; BB(0x00574188);
    /* 00574188: mov eax, edx */ r_eax = r_edx;
    /* 0057418a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057418d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00574194: mov esp, ebp */ r_esp = r_ebp;
    /* 00574196: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574197: ret 8 */ FN_RET(0x005740fc); r_esp += 12; return;
}

void f_0057419c(void) /* sub_57419C */
{
    FN_ENTER(0x0057419c);
    /* 0057419c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0057419d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005741a0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005741a2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005741a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005741a8: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 005741ab: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005741ae: jle 0x5741c2 */ if ((fZ||fS!=fO)) goto L_005741c2;
L_005741b0:; BB(0x005741b0);
    /* 005741b0: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005741b4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005741b9: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005741bd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005741c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005741c1: ret  */ FN_RET(0x0057419c); r_esp += 4; return;
L_005741c2:; BB(0x005741c2);
    /* 005741c2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005741c5: call 0x520f3c */ r_esp -= 4; W32(r_esp, 0x5741cau); f_00520f3c();
    /* 005741ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005741cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005741cd: je 0x574271 */ if (fZ) goto L_00574271;
L_005741d3:; BB(0x005741d3);
    /* 005741d3: fld dword ptr [0x926df4] */ FPUSH(R_F32((u32)(0x926df4u)));
    /* 005741d9: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005741dd: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005741e0: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 005741e3: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005741e6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005741ea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005741ed: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 005741f0: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 005741f6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005741fa: mov eax, dword ptr [edx + 0x178] */ r_eax = R32((u32)(r_edx+0x178u));
    /* 00574200: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00574204: mov eax, dword ptr [edx + 0x17c] */ r_eax = R32((u32)(r_edx+0x17cu));
    /* 0057420a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0057420e: mov eax, dword ptr [edx + 0x180] */ r_eax = R32((u32)(r_edx+0x180u));
    /* 00574214: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00574218: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0057421b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x574220u); f_0082f9c4();
    /* 00574220: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00574224: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574225: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x57422au); f_00782868();
    /* 0057422a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0057422c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057422f: fld dword ptr [0x926df0] */ FPUSH(R_F32((u32)(0x926df0u)));
    /* 00574235: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00574239: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0057423b: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0057423e: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 00574241: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00574245: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00574249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057424b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0057424d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00574251: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00574253: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00574255: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00574259: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057425b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0057425e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574260: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00574264: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00574268: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0057426b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057426c: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x574271u); f_00508db8();
L_00574271:; BB(0x00574271);
    /* 00574271: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00574274: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574275: ret  */ FN_RET(0x0057419c); r_esp += 4; return;
}

void f_005742ac(void) /* sub_5742AC */
{
    FN_ENTER(0x005742ac);
    /* 005742ac: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005742b1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5742b6u); f_008581c5();
    /* 005742b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005742b7: mov dword ptr [0xa73fc0], eax */ W32((u32)(0xa73fc0u), r_eax);
    /* 005742bc: mov edx, 0x20 */ r_edx = 0x20u;
    /* 005742c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005742c2: mov ecx, 0xa73fd4 */ r_ecx = 0xa73fd4u;
    /* 005742c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005742c8: push 0x902 */ { u32 v = 0x902u; r_esp -= 4; W32(r_esp, v); }
    /* 005742cd: mov edx, eax */ r_edx = r_eax;
    /* 005742cf: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x5742d4u); f_0082a9dc();
    /* 005742d4: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005742d9: push 0x18696 */ { u32 v = 0x18696u; r_esp -= 4; W32(r_esp, v); }
    /* 005742de: mov ecx, 0xa74000 */ r_ecx = 0xa74000u;
    /* 005742e3: mov edx, 0xa73fd4 */ r_edx = 0xa73fd4u;
    /* 005742e8: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x5742edu); f_0082aa0c();
    /* 005742ed: mov dword ptr [0xa73fb8], 0xa74000 */ W32((u32)(0xa73fb8u), 0xa74000u);
    /* 005742f7: mov dword ptr [0xa73fbc], 1 */ W32((u32)(0xa73fbcu), 0x1u);
    /* 00574301: push 0xa73fb8 */ { u32 v = 0xa73fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 00574306: call 0x800b78 */ r_esp -= 4; W32(r_esp, 0x57430bu); f_00800b78();
    /* 0057430b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057430c: ret  */ FN_RET(0x005742ac); r_esp += 4; return;
}

void f_00574310(void) /* sub_574310 */
{
    FN_ENTER(0x00574310);
    /* 00574310: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00574311: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00574313: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00574315: call 0x574334 */ r_esp -= 4; W32(r_esp, 0x57431au); f_00574334();
    /* 0057431a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0057431e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00574320: jne 0x574326 */ if (!fZ) goto L_00574326;
L_00574322:; BB(0x00574322);
    /* 00574322: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00574323: ret 4 */ FN_RET(0x00574310); r_esp += 8; return;
L_00574326:; BB(0x00574326);
    /* 00574326: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00574327: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x57432cu); f_005c2f74();
    /* 0057432c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057432d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057432e: ret 4 */ FN_RET(0x00574310); r_esp += 8; return;
}

void f_00574334(void) /* sub_574334 */
{
    FN_ENTER(0x00574334);
    /* 00574334: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574335: mov ebp, esp */ r_ebp = r_esp;
    /* 00574337: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00574339: push 0x8d7230 */ { u32 v = 0x8d7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0057433e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00574344: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574345: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057434c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057434f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00574352: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00574355: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00574358: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057435b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0057435e: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00574365: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00574368: mov dword ptr [ecx], 0xb066e0 */ W32((u32)(r_ecx), 0xb066e0u);
    /* 0057436e: call 0x786f64 */ r_esp -= 4; W32(r_esp, 0x574373u); f_00786f64();
    /* 00574373: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00574376: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x57437bu); f_007b9c8c();
    /* 0057437b: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00574382: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00574385: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057438b: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x574390u); f_005769f8();
    /* 00574390: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574397: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057439a: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x57439fu); f_0052a684();
    /* 0057439f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005743a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005743a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005743ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005743ac: ret  */ FN_RET(0x00574334); r_esp += 4; return;
}

void f_00574380(void)
{
    FN_ENTER(0x00574380);
    /* 00574380: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00574382: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00574385: add ecx, 0x3b0 */ {  u32 a = r_ecx; u32 b = 0x3b0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0057438b: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x574390u); f_005769f8();
    /* 00574390: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00574397: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057439a: call 0x52a684 */ r_esp -= 4; W32(r_esp, 0x57439fu); f_0052a684();
    /* 0057439f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005743a2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005743a9: mov esp, ebp */ r_esp = r_ebp;
    /* 005743ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005743ac: ret  */ FN_RET(0x00574380); r_esp += 4; return;
}

void f_005743b0(void) /* sub_5743B0 */
{
    FN_ENTER(0x005743b0);
    /* 005743b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005743b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005743b3: movsx eax, word ptr [ebp + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 005743ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005743bd: jne 0x57441d */ if (!fZ) goto L_0057441d;
L_005743bf:; BB(0x005743bf);
    /* 005743bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005743c1: call 0x5744a8 */ r_esp -= 4; W32(r_esp, 0x5743c6u); f_005744a8();
    /* 005743c6: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005743cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005743cd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5743d2u); f_007aaa30();
    /* 005743d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005743d4: je 0x5743dd */ if (fZ) goto L_005743dd;
L_005743d6:; BB(0x005743d6);
    /* 005743d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005743d8: call 0x5745e8 */ r_esp -= 4; W32(r_esp, 0x5743ddu); f_005745e8();
L_005743dd:; BB(0x005743dd);
    /* 005743dd: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 005743e3: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005743e6: je 0x57445f */ if (fZ) goto L_0057445f;
L_005743e8:; BB(0x005743e8);
    /* 005743e8: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005743ed: mov eax, 2 */ r_eax = 0x2u;
    /* 005743f2: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 005743f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005743fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005743fc: mov dword ptr [ebp + 0x398], edx */ W32((u32)(r_ebp+0x398u), r_edx);
    /* 00574402: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00574409: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057440b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x574410u); f_007b52ec();
    /* 00574410: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00574413: and eax, 0xfbffffff */ {  u32 a = r_eax; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00574418: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057441b: jmp 0x57445f */ goto L_0057445f;
L_0057441d:; BB(0x0057441d);
    /* 0057441d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574420: jne 0x574448 */ if (!fZ) goto L_00574448;
L_00574422:; BB(0x00574422);
    /* 00574422: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574424: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 0057442a: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0057442c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057442e: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x574433u); f_007714cc();
    /* 00574433: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
    /* 0057443a: mov eax, 1 */ r_eax = 0x1u;
    /* 0057443f: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 00574446: jmp 0x57445f */ goto L_0057445f;
L_00574448:; BB(0x00574448);
    /* 00574448: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0057444e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574451: je 0x574468 */ if (fZ) goto L_00574468;
L_00574453:; BB(0x00574453);
    /* 00574453: mov eax, 2 */ r_eax = 0x2u;
    /* 00574458: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
L_0057445f:; BB(0x0057445f);
    /* 0057445f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574461: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x574466u); f_007aa094();
    /* 00574466: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574467: ret  */ FN_RET(0x005743b0); r_esp += 4; return;
L_00574468:; BB(0x00574468);
    /* 00574468: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0057446d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057446f: mov eax, 1 */ r_eax = 0x1u;
    /* 00574474: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0057447b: mov edx, 0xb */ r_edx = 0xbu;
    /* 00574480: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 00574487: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574489: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x57448eu); f_007b52c4();
    /* 0057448e: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00574491: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574496: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00574499: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0057449c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057449e: call dword ptr [edx + 0x190] */ { u32 t = R32((u32)(r_edx+0x190u)); r_esp -= 4; W32(r_esp, 0x5744a4u); call_ind(t); }
    /* 005744a4: jmp 0x57445f */ goto L_0057445f;
}

void f_005744a8(void) /* sub_5744A8 */
{
    FN_ENTER(0x005744a8);
    /* 005744a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005744a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005744aa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005744ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005744ac: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005744af: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005744b1: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005744b4: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 005744b7: fld dword ptr [0x926ff0] */ FPUSH(R_F32((u32)(0x926ff0u)));
    /* 005744bd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005744c0: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005744c3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005744c7: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005744cb: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005744cf: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005744d3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005744d6: lea eax, [ebp + 0x128] */ r_eax = (u32)(r_ebp+0x128u);
    /* 005744dc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005744de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005744df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005744e0: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5744e5u); f_007806dc();
    /* 005744e5: mov ebx, eax */ r_ebx = r_eax;
    /* 005744e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005744ea: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005744ec: je 0x5745df */ if (fZ) goto L_005745df;
L_005744f2:; BB(0x005744f2);
    /* 005744f2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005744f4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005744f7: je 0x5745df */ if (fZ) goto L_005745df;
L_005744fd:; BB(0x005744fd);
    /* 005744fd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x574502u); f_008587a5();
    /* 00574502: fild dword ptr [0xa9c4ec] */ FPUSH((long double)(i32)R32((u32)(0xa9c4ecu)));
    /* 00574508: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0057450c: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00574510: fdiv dword ptr [0x926fec] */ ST(0) = ST(0) / R_F32((u32)(0x926fecu));
    /* 00574516: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00574518: fnstcw word ptr [esp + 0x14] */ W16((u32)(r_esp+0x14u), fcw);
    /* 0057451c: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00574521: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574526: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0057452a: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 0057452e: fistp dword ptr [esp + 0x24] */ W32((u32)(r_esp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574532: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00574536: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0057453b: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 0057453f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00574541: mov esi, ecx */ r_esi = r_ecx;
    /* 00574543: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00574546: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00574548: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0057454a: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0057454d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057454f: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00574551: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00574553: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574555: jne 0x5745b5 */ if (!fZ) goto L_005745b5;
L_00574557:; BB(0x00574557);
    /* 00574557: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00574559: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0057455c: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057455f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574560: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x574565u); f_0050b510();
    /* 00574565: mov edi, eax */ r_edi = r_eax;
    /* 00574567: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057456a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057456c: je 0x5745a1 */ if (fZ) goto L_005745a1;
L_0057456e:; BB(0x0057456e);
    /* 0057456e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00574570: call 0x50c094 */ r_esp -= 4; W32(r_esp, 0x574575u); f_0050c094();
    /* 00574575: mov esi, eax */ r_esi = r_eax;
    /* 00574577: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057457a: call 0x50c08c */ r_esp -= 4; W32(r_esp, 0x57457fu); f_0050c08c();
    /* 0057457f: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 00574583: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 0057458a: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 0057458d: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 00574590: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 00574597: or edx, 0xffff0600 */ {  u32 a = r_edx; u32 b = 0xffff0600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0057459d: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_005745a1:; BB(0x005745a1);
    /* 005745a1: push 0xa4 */ { u32 v = 0xa4u; r_esp -= 4; W32(r_esp, v); }
    /* 005745a6: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005745a9: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005745ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005745ad: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5745b2u); f_0050b510();
    /* 005745b2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005745b5:; BB(0x005745b5);
    /* 005745b5: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005745ba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005745bc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5745c1u); f_007aaa30();
    /* 005745c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005745c3: jne 0x5745d5 */ if (!fZ) goto L_005745d5;
L_005745c5:; BB(0x005745c5);
    /* 005745c5: push 0x41b00000 */ { u32 v = 0x41b00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005745ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005745cc: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5745d1u); f_007aaa30();
    /* 005745d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005745d3: je 0x5745df */ if (fZ) goto L_005745df;
L_005745d5:; BB(0x005745d5);
    /* 005745d5: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005745d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005745d9: call 0x578b50 */ r_esp -= 4; W32(r_esp, 0x5745deu); f_00578b50();
    /* 005745de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005745df:; BB(0x005745df);
    /* 005745df: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005745e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005745e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005745e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005745e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005745e6: ret  */ FN_RET(0x005744a8); r_esp += 4; return;
}

void f_005745e8(void) /* sub_5745E8 */
{
    FN_ENTER(0x005745e8);
    /* 005745e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005745e9: mov edi, ecx */ r_edi = r_ecx;
    /* 005745eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005745ed: push 0x213 */ { u32 v = 0x213u; r_esp -= 4; W32(r_esp, v); }
    /* 005745f2: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5745f7u); f_007879b8();
    /* 005745f7: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005745fa: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005745fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005745fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005745fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005745ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574600: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x574605u); f_00814298();
    /* 00574605: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00574608: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00574609: ret  */ FN_RET(0x005745e8); r_esp += 4; return;
}

void f_0057460c(void) /* sub_57460C */
{
    FN_ENTER(0x0057460c);
    /* 0057460c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057460d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574610: mov edi, ecx */ r_edi = r_ecx;
    /* 00574612: mov ecx, edi */ r_ecx = r_edi;
    /* 00574614: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x574619u); f_007aa094();
    /* 00574619: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0057461f: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 00574625: mov dword ptr [0xaab4f4], 0 */ W32((u32)(0xaab4f4u), 0x0u);
    /* 0057462f: mov ecx, edi */ r_ecx = r_edi;
    /* 00574631: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 0057463b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0057463e: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 00574644: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00574648: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0057464c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057464e: call 0x7b5264 */ r_esp -= 4; W32(r_esp, 0x574653u); f_007b5264();
    /* 00574653: fstp dword ptr [0xaab4f8] */ W_F32((u32)(0xaab4f8u), ST(0)); FPOP();
    /* 00574659: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0057465e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x574663u); f_0082d990();
    /* 00574663: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00574666: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00574668: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057466a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x57466fu); f_0082d8bc();
    /* 0057466f: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574674: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574676: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0057467b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x574680u); f_0082eab8();
    /* 00574680: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x574685u); f_0082da80();
    /* 00574685: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00574688: mov edx, 0xaab4f0 */ r_edx = 0xaab4f0u;
    /* 0057468d: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x574692u); f_0082ebac();
    /* 00574692: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00574695: fadd dword ptr [edi + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x30cu));
    /* 0057469b: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0057469f: fadd dword ptr [edi + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x314u));
    /* 005746a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005746a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005746aa: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005746ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005746b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005746b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005746b4: call 0x771e14 */ r_esp -= 4; W32(r_esp, 0x5746b9u); f_00771e14();
    /* 005746b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005746bb: je 0x5746d3 */ if (fZ) goto L_005746d3;
L_005746bd:; BB(0x005746bd);
    /* 005746bd: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 005746c7: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 005746d1: jmp 0x5746fc */ goto L_005746fc;
L_005746d3:; BB(0x005746d3);
    /* 005746d3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005746d5: mov ecx, edi */ r_ecx = r_edi;
    /* 005746d7: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5746dau); call_ind(t); }
    /* 005746da: fld dword ptr [0x926fd8] */ FPUSH(R_F32((u32)(0x926fd8u)));
    /* 005746e0: fld dword ptr [edi + 0x30c] */ FPUSH(R_F32((u32)(r_edi+0x30cu)));
    /* 005746e6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005746e8: fld dword ptr [edi + 0x314] */ FPUSH(R_F32((u32)(r_edi+0x314u)));
    /* 005746ee: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005746f0: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 005746f6: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
L_005746fc:; BB(0x005746fc);
    /* 005746fc: mov ecx, edi */ r_ecx = r_edi;
    /* 005746fe: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x574703u); f_007b6880();
    /* 00574703: mov ecx, edi */ r_ecx = r_edi;
    /* 00574705: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x57470au); f_007b7e9c();
    /* 0057470a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057470c: mov ecx, edi */ r_ecx = r_edi;
    /* 0057470e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x574713u); f_007aaa30();
    /* 00574713: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574715: je 0x574721 */ if (fZ) goto L_00574721;
L_00574717:; BB(0x00574717);
    /* 00574717: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00574719: mov ecx, edi */ r_ecx = r_edi;
    /* 0057471b: call dword ptr [eax + 0x190] */ { u32 t = R32((u32)(r_eax+0x190u)); r_esp -= 4; W32(r_esp, 0x574721u); call_ind(t); }
L_00574721:; BB(0x00574721);
    /* 00574721: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00574727: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057472a: je 0x574785 */ if (fZ) goto L_00574785;
L_0057472c:; BB(0x0057472c);
    /* 0057472c: push 0x4000000 */ { u32 v = 0x4000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00574731: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574733: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00574736: and eax, 0xfffff9ff */ {  u32 a = r_eax; u32 b = 0xfffff9ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0057473b: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0057473e: mov ecx, edi */ r_ecx = r_edi;
    /* 00574740: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x574745u); f_007b52ec();
    /* 00574745: movsx ecx, word ptr [edi + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 0057474c: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 00574753: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 00574757: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0057475b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0057475f: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 00574763: fmul dword ptr [edi + 0x3d4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x3d4u));
    /* 00574769: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0057476b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057476d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057476e: jb 0x57477e */ if (fC) goto L_0057477e;
L_00574770:; BB(0x00574770);
    /* 00574770: mov ecx, edi */ r_ecx = r_edi;
    /* 00574772: call 0x57479c */ r_esp -= 4; W32(r_esp, 0x574777u); f_0057479c();
    /* 00574777: movsx ecx, word ptr [edi + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
L_0057477e:; BB(0x0057477e);
    /* 0057477e: mov word ptr [edi + 0x346], cx */ W16((u32)(r_edi+0x346u), (u16)r_ecx);
L_00574785:; BB(0x00574785);
    /* 00574785: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574787: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00574789: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0057478c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00574791: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00574792: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x574797u); f_00805608();
    /* 00574797: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057479a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057479b: ret  */ FN_RET(0x0057460c); r_esp += 4; return;
}

void f_0057479c(void) /* sub_57479C */
{
    FN_ENTER(0x0057479c);
    /* 0057479c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057479d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0057479f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005747a1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5747a6u); f_007751b0();
    /* 005747a6: fcomp dword ptr [ebx + 0x3cc] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3ccu))); FPOP();
    /* 005747ac: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005747ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005747af: ja 0x5747ba */ if ((!fC&&!fZ)) goto L_005747ba;
L_005747b1:; BB(0x005747b1);
    /* 005747b1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005747b3: call 0x57480c */ r_esp -= 4; W32(r_esp, 0x5747b8u); f_0057480c();
    /* 005747b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005747b9: ret  */ FN_RET(0x0057479c); r_esp += 4; return;
L_005747ba:; BB(0x005747ba);
    /* 005747ba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005747bc: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5747c1u); f_007751b0();
    /* 005747c1: fcomp dword ptr [ebx + 0x3d0] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3d0u))); FPOP();
    /* 005747c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005747c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005747ca: ja 0x5747d3 */ if ((!fC&&!fZ)) goto L_005747d3;
L_005747cc:; BB(0x005747cc);
    /* 005747cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005747ce: call 0x5747d8 */ r_esp -= 4; W32(r_esp, 0x5747d3u); f_005747d8();
L_005747d3:; BB(0x005747d3);
    /* 005747d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005747d4: ret  */ FN_RET(0x0057479c); r_esp += 4; return;
}

void f_005747d8(void) /* sub_5747D8 */
{
    FN_ENTER(0x005747d8);
    /* 005747d8: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005747dd: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 005747e0: or edx, 0x200000 */ {  u32 a = r_edx; u32 b = 0x200000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005747e6: mov eax, 0xa */ r_eax = 0xau;
    /* 005747eb: mov word ptr [ecx + 0x32e], ax */ W16((u32)(r_ecx+0x32eu), (u16)r_eax);
    /* 005747f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005747f4: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 005747fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005747fc: and edx, 0xfbfbffff */ {  u32 a = r_edx; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00574802: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00574805: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x57480au); f_007b52ec();
    /* 0057480a: ret  */ FN_RET(0x005747d8); r_esp += 4; return;
}

void f_0057480c(void) /* sub_57480C */
{
    FN_ENTER(0x0057480c);
    /* 0057480c: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00574811: mov edx, 4 */ r_edx = 0x4u;
    /* 00574816: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 0057481d: movzx edx, word ptr [ecx + 0x3e0] */ r_edx = (u32)R16((u32)(r_ecx+0x3e0u));
    /* 00574824: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00574826: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574827: mov word ptr [ecx + 0x330], ax */ W16((u32)(r_ecx+0x330u), (u16)r_eax);
    /* 0057482e: mov word ptr [ecx + 0x37c], dx */ W16((u32)(r_ecx+0x37cu), (u16)r_edx);
    /* 00574835: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00574838: and edx, 0xfbdbffff */ {  u32 a = r_edx; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0057483e: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00574841: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x574846u); f_007b52ec();
    /* 00574846: ret  */ FN_RET(0x0057480c); r_esp += 4; return;
}

void f_00574848(void) /* sub_574848 */
{
    FN_ENTER(0x00574848);
    /* 00574848: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00574849: mov ebx, esp */ r_ebx = r_esp;
    /* 0057484b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0057484e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0057484f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00574850: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574851: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574854: mov esi, ecx */ r_esi = r_ecx;
    /* 00574856: mov ecx, esi */ r_ecx = r_esi;
    /* 00574858: call 0x52ac5c */ r_esp -= 4; W32(r_esp, 0x57485du); f_0052ac5c();
    /* 0057485d: mov ecx, esi */ r_ecx = r_esi;
    /* 0057485f: call 0x52ad44 */ r_esp -= 4; W32(r_esp, 0x574864u); f_0052ad44();
    /* 00574864: mov ecx, esi */ r_ecx = r_esi;
    /* 00574866: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x57486bu); f_007aa094();
    /* 0057486b: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 00574872: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574875: je 0x574897 */ if (fZ) goto L_00574897;
L_00574877:; BB(0x00574877);
    /* 00574877: mov eax, 1 */ r_eax = 0x1u;
    /* 0057487c: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 00574883: mov ecx, esi */ r_ecx = r_esi;
    /* 00574885: call 0x786c54 */ r_esp -= 4; W32(r_esp, 0x57488au); f_00786c54();
    /* 0057488a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057488c: call 0x786bf0 */ r_esp -= 4; W32(r_esp, 0x574891u); f_00786bf0();
    /* 00574891: mov dword ptr [esi + 0x380], eax */ W32((u32)(r_esi+0x380u), r_eax);
L_00574897:; BB(0x00574897);
    /* 00574897: mov ecx, esi */ r_ecx = r_esi;
    /* 00574899: call 0x786c24 */ r_esp -= 4; W32(r_esp, 0x57489eu); f_00786c24();
    /* 0057489e: mov ebp, dword ptr [esi + 0x350] */ r_ebp = R32((u32)(r_esi+0x350u));
    /* 005748a4: mov dword ptr [esi + 0x384], eax */ W32((u32)(r_esi+0x384u), r_eax);
    /* 005748aa: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005748ac: je 0x5748f0 */ if (fZ) goto L_005748f0;
L_005748ae:; BB(0x005748ae);
    /* 005748ae: mov edx, dword ptr [ebp + 0x384] */ r_edx = R32((u32)(r_ebp+0x384u));
    /* 005748b4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005748b6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005748b9: jg 0x5748d9 */ if ((!fZ&&fS==fO)) goto L_005748d9;
L_005748bb:; BB(0x005748bb);
    /* 005748bb: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005748be: jge 0x5748f0 */ if ((fS==fO)) goto L_005748f0;
L_005748c0:; BB(0x005748c0);
    /* 005748c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005748c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005748c2: mov ecx, esi */ r_ecx = r_esi;
    /* 005748c4: call 0x787274 */ r_esp -= 4; W32(r_esp, 0x5748c9u); f_00787274();
    /* 005748c9: add dword ptr [esi + 0x384], -1 */ { u32 ad = (u32)(r_esi+0x384u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005748d0: add dword ptr [ebp + 0x384], 1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005748d7: jmp 0x5748f0 */ goto L_005748f0;
L_005748d9:; BB(0x005748d9);
    /* 005748d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005748da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005748db: mov ecx, esi */ r_ecx = r_esi;
    /* 005748dd: call 0x787274 */ r_esp -= 4; W32(r_esp, 0x5748e2u); f_00787274();
    /* 005748e2: add dword ptr [esi + 0x384], 1 */ { u32 ad = (u32)(r_esi+0x384u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005748e9: add dword ptr [ebp + 0x384], -1 */ { u32 ad = (u32)(r_ebp+0x384u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_005748f0:; BB(0x005748f0);
    /* 005748f0: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 005748f3: lea eax, [esi + 0x50] */ r_eax = (u32)(r_esi+0x50u);
    /* 005748f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005748f7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005748f8: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x5748fdu); f_007a9180();
    /* 005748fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574900: fld dword ptr [esi + 0x360] */ FPUSH(R_F32((u32)(r_esi+0x360u)));
    /* 00574906: mov edx, dword ptr [esi + 0x360] */ r_edx = R32((u32)(r_esi+0x360u));
    /* 0057490c: mov edi, dword ptr [esi + 0x358] */ r_edi = R32((u32)(r_esi+0x358u));
    /* 00574912: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00574915: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00574917: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 0057491d: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00574920: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00574922: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00574924: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574926: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574928: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057492a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057492b: jb 0x574974 */ if (fC) goto L_00574974;
L_0057492d:; BB(0x0057492d);
    /* 0057492d: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00574933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574935: jne 0x574966 */ if (!fZ) goto L_00574966;
L_00574937:; BB(0x00574937);
    /* 00574937: fcom dword ptr [0x926fd4] */ fx_compare(ST(0), R_F32((u32)(0x926fd4u))); 
    /* 0057493d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057493f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00574940: jbe 0x574966 */ if ((fC||fZ)) goto L_00574966;
L_00574942:; BB(0x00574942);
    /* 00574942: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574944: mov eax, 2 */ r_eax = 0x2u;
    /* 00574949: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00574950: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574953: mov ecx, esi */ r_ecx = r_esi;
    /* 00574955: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574956: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574957: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057495a: call 0x772054 */ r_esp -= 4; W32(r_esp, 0x57495fu); f_00772054();
    /* 0057495f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574961: jmp 0x574ca7 */ goto L_00574ca7;
L_00574966:; BB(0x00574966);
    /* 00574966: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574968: mov ecx, esi */ r_ecx = r_esi;
    /* 0057496a: call 0x5751d4 */ r_esp -= 4; W32(r_esp, 0x57496fu); f_005751d4();
    /* 0057496f: jmp 0x574ca7 */ goto L_00574ca7;
L_00574974:; BB(0x00574974);
    /* 00574974: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574976: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00574979: mov edi, dword ptr [esi + 0x54] */ r_edi = R32((u32)(r_esi+0x54u));
    /* 0057497c: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 0057497f: mov ecx, dword ptr [esi + 0x300] */ r_ecx = R32((u32)(r_esi+0x300u));
    /* 00574985: mov dword ptr [esi + 0x2a4], eax */ W32((u32)(r_esi+0x2a4u), r_eax);
    /* 0057498b: mov dword ptr [esi + 0x2a8], edi */ W32((u32)(r_esi+0x2a8u), r_edi);
    /* 00574991: mov dword ptr [0xaab4f0], eax */ W32((u32)(0xaab4f0u), r_eax);
    /* 00574996: mov dword ptr [0xaab4f4], edi */ W32((u32)(0xaab4f4u), r_edi);
    /* 0057499c: mov dword ptr [0xaab4f8], edx */ W32((u32)(0xaab4f8u), r_edx);
    /* 005749a2: mov dword ptr [esi + 0x2ac], edx */ W32((u32)(r_esi+0x2acu), r_edx);
    /* 005749a8: mov dword ptr [esi + 0x298], ecx */ W32((u32)(r_esi+0x298u), r_ecx);
    /* 005749ae: mov ecx, dword ptr [esi + 0x304] */ r_ecx = R32((u32)(r_esi+0x304u));
    /* 005749b4: mov dword ptr [esi + 0x29c], ecx */ W32((u32)(r_esi+0x29cu), r_ecx);
    /* 005749ba: mov ecx, dword ptr [esi + 0x308] */ r_ecx = R32((u32)(r_esi+0x308u));
    /* 005749c0: mov dword ptr [esi + 0x2a0], ecx */ W32((u32)(r_esi+0x2a0u), r_ecx);
    /* 005749c6: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 005749c9: mov dword ptr [esi + 0x44], ecx */ W32((u32)(r_esi+0x44u), r_ecx);
    /* 005749cc: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 005749cf: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 005749d2: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 005749d5: mov dword ptr [esi + 0x4c], ecx */ W32((u32)(r_esi+0x4cu), r_ecx);
    /* 005749d8: mov ecx, 0xaab4f0 */ r_ecx = 0xaab4f0u;
    /* 005749dd: mov edx, ebp */ r_edx = r_ebp;
    /* 005749df: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5749e4u); f_0082f9c4();
    /* 005749e4: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 005749ea: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 005749f0: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005749f2: fmul qword ptr [0x926f40] */ ST(0) = ST(0) * R_F64((u32)(0x926f40u));
    /* 005749f8: fdiv qword ptr [0x926f38] */ ST(0) = ST(0) / R_F64((u32)(0x926f38u));
    /* 005749fe: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00574a01: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00574a05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574a0a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00574a0e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00574a12: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574a16: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00574a19: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00574a1f: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00574a23: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 00574a2d: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00574a32: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00574a37: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00574a41: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x574a46u); f_0082d990();
    /* 00574a46: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574a48: mov edx, edi */ r_edx = r_edi;
    /* 00574a4a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x574a4fu); f_0082d8bc();
    /* 00574a4f: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574a54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574a56: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00574a5b: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x574a60u); f_0082eab8();
    /* 00574a60: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00574a65: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x574a6au); f_0082eb80();
    /* 00574a6a: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00574a6f: mov edx, ebp */ r_edx = r_ebp;
    /* 00574a71: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x574a76u); f_0082ebac();
    /* 00574a76: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574a78: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574a7d: mov ecx, esi */ r_ecx = r_esi;
    /* 00574a7f: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x574a84u); f_007b4c58();
    /* 00574a84: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574a87: je 0x574d79 */ if (fZ) goto L_00574d79;
L_00574a8d:; BB(0x00574a8d);
    /* 00574a8d: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574a93: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x574a98u); f_0082e900();
    /* 00574a98: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00574a9c: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574aa2: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x574aa7u); f_0082e900();
    /* 00574aa7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00574aab: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00574aad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00574aaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00574ab0: jae 0x574aed */ if (!fC) goto L_00574aed;
L_00574ab2:; BB(0x00574ab2);
    /* 00574ab2: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00574ab8: fld qword ptr [0x926f30] */ FPUSH(R_F64((u32)(0x926f30u)));
    /* 00574abe: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00574ac0: fmul qword ptr [0x926f40] */ ST(0) = ST(0) * R_F64((u32)(0x926f40u));
    /* 00574ac6: fdiv qword ptr [0x926f38] */ ST(0) = ST(0) / R_F64((u32)(0x926f38u));
    /* 00574acc: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00574acf: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00574ad3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574ad8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00574adc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00574ae0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574ae4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00574ae7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00574aeb: jmp 0x574b26 */ goto L_00574b26;
L_00574aed:; BB(0x00574aed);
    /* 00574aed: fld qword ptr [0x926f30] */ FPUSH(R_F64((u32)(0x926f30u)));
    /* 00574af3: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00574af9: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00574afb: fmul qword ptr [0x926f40] */ ST(0) = ST(0) * R_F64((u32)(0x926f40u));
    /* 00574b01: fdiv qword ptr [0x926f38] */ ST(0) = ST(0) / R_F64((u32)(0x926f38u));
    /* 00574b07: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00574b0a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00574b0e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574b13: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00574b17: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00574b1b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574b1f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00574b22: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00574b26:; BB(0x00574b26);
    /* 00574b26: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00574b2c: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 00574b36: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00574b3b: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00574b45: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00574b4a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x574b4fu); f_0082d990();
    /* 00574b4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574b51: mov edx, edi */ r_edx = r_edi;
    /* 00574b53: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x574b58u); f_0082d8bc();
    /* 00574b58: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574b5f: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00574b64: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x574b69u); f_0082eab8();
    /* 00574b69: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00574b6e: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x574b73u); f_0082eb80();
    /* 00574b73: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00574b78: mov edx, ebp */ r_edx = r_ebp;
    /* 00574b7a: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x574b7fu); f_0082ebac();
    /* 00574b7f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b81: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574b86: mov ecx, esi */ r_ecx = r_esi;
    /* 00574b88: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x574b8du); f_007b4c58();
    /* 00574b8d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574b90: je 0x574d38 */ if (fZ) goto L_00574d38;
L_00574b96:; BB(0x00574b96);
    /* 00574b96: push dword ptr [0xaab4f0] */ { u32 v = R32((u32)(0xaab4f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574b9c: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x574ba1u); f_0082e900();
    /* 00574ba1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00574ba5: push dword ptr [0xaab4f8] */ { u32 v = R32((u32)(0xaab4f8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574bab: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x574bb0u); f_0082e900();
    /* 00574bb0: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00574bb4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00574bb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00574bb8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00574bb9: jae 0x574bf6 */ if (!fC) goto L_00574bf6;
L_00574bbb:; BB(0x00574bbb);
    /* 00574bbb: fld qword ptr [0x926f30] */ FPUSH(R_F64((u32)(0x926f30u)));
    /* 00574bc1: fld dword ptr [0xaab4f8] */ FPUSH(R_F32((u32)(0xaab4f8u)));
    /* 00574bc7: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00574bc9: fmul qword ptr [0x926f40] */ ST(0) = ST(0) * R_F64((u32)(0x926f40u));
    /* 00574bcf: fdiv qword ptr [0x926f38] */ ST(0) = ST(0) / R_F64((u32)(0x926f38u));
    /* 00574bd5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00574bd8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00574bdc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574be1: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00574be5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00574be9: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574bed: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00574bf0: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00574bf4: jmp 0x574c2f */ goto L_00574c2f;
L_00574bf6:; BB(0x00574bf6);
    /* 00574bf6: fld dword ptr [0xaab4f0] */ FPUSH(R_F32((u32)(0xaab4f0u)));
    /* 00574bfc: fld qword ptr [0x926f30] */ FPUSH(R_F64((u32)(0x926f30u)));
    /* 00574c02: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00574c04: fmul qword ptr [0x926f40] */ ST(0) = ST(0) * R_F64((u32)(0x926f40u));
    /* 00574c0a: fdiv qword ptr [0x926f38] */ ST(0) = ST(0) / R_F64((u32)(0x926f38u));
    /* 00574c10: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00574c13: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00574c17: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00574c1c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00574c20: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00574c24: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00574c28: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00574c2b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
L_00574c2f:; BB(0x00574c2f);
    /* 00574c2f: mov eax, dword ptr [esi + 0x39c] */ r_eax = R32((u32)(r_esi+0x39cu));
    /* 00574c35: mov dword ptr [0xaab4e8], 0 */ W32((u32)(0xaab4e8u), 0x0u);
    /* 00574c3f: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00574c44: mov dword ptr [0xaab4e4], 0 */ W32((u32)(0xaab4e4u), 0x0u);
    /* 00574c4e: mov dword ptr [0xaab4ec], eax */ W32((u32)(0xaab4ecu), r_eax);
    /* 00574c53: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x574c58u); f_0082d990();
    /* 00574c58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574c5a: mov edx, edi */ r_edx = r_edi;
    /* 00574c5c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x574c61u); f_0082d8bc();
    /* 00574c61: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c66: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574c68: mov edx, 0xaab4e4 */ r_edx = 0xaab4e4u;
    /* 00574c6d: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x574c72u); f_0082eab8();
    /* 00574c72: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00574c77: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x574c7cu); f_0082eb80();
    /* 00574c7c: mov ecx, 0xaab4e4 */ r_ecx = 0xaab4e4u;
    /* 00574c81: mov edx, ebp */ r_edx = r_ebp;
    /* 00574c83: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x574c88u); f_0082ebac();
    /* 00574c88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c8a: push 0xaab4e4 */ { u32 v = 0xaab4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00574c8f: mov ecx, esi */ r_ecx = r_esi;
    /* 00574c91: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x574c96u); f_007b4c58();
    /* 00574c96: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574c99: je 0x574cf7 */ if (fZ) goto L_00574cf7;
L_00574c9b:; BB(0x00574c9b);
    /* 00574c9b: mov eax, 2 */ r_eax = 0x2u;
    /* 00574ca0: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
L_00574ca7:; BB(0x00574ca7);
    /* 00574ca7: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00574caa: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574caf: jne 0x574cbc */ if (!fZ) goto L_00574cbc;
L_00574cb1:; BB(0x00574cb1);
    /* 00574cb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cb5: mov ecx, esi */ r_ecx = r_esi;
    /* 00574cb7: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x574cbcu); f_00772b44();
L_00574cbc:; BB(0x00574cbc);
    /* 00574cbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00574cbd: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x574cc2u); f_007b999c();
    /* 00574cc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cc6: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00574ccb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574ccc: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x574cd1u); f_00805608();
    /* 00574cd1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574cd4: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cd9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574cdb: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00574cde: and eax, 0xfbdbffff */ {  u32 a = r_eax; u32 b = 0xfbdbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00574ce3: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00574ce6: mov ecx, esi */ r_ecx = r_esi;
    /* 00574ce8: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x574cedu); f_007b52ec();
    /* 00574ced: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00574cf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574cf1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00574cf2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00574cf3: mov esp, ebx */ r_esp = r_ebx;
    /* 00574cf5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00574cf6: ret  */ FN_RET(0x00574848); r_esp += 4; return;
L_00574cf7:; BB(0x00574cf7);
    /* 00574cf7: mov eax, 2 */ r_eax = 0x2u;
    /* 00574cfc: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00574d03: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00574d08: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00574d0b: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00574d10: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00574d13: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00574d18: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00574d1b: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00574d21: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574d24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00574d25: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574d28: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x574d2du); f_007a8c74();
    /* 00574d2d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574d30: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00574d33: jmp 0x574ca7 */ goto L_00574ca7;
L_00574d38:; BB(0x00574d38);
    /* 00574d38: mov eax, 2 */ r_eax = 0x2u;
    /* 00574d3d: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00574d44: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00574d49: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00574d4c: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00574d51: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00574d54: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00574d59: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00574d5c: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00574d62: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574d65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00574d66: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574d69: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x574d6eu); f_007a8c74();
    /* 00574d6e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574d71: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00574d74: jmp 0x574ca7 */ goto L_00574ca7;
L_00574d79:; BB(0x00574d79);
    /* 00574d79: mov eax, 2 */ r_eax = 0x2u;
    /* 00574d7e: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 00574d85: mov eax, dword ptr [0xaab4e4] */ r_eax = R32((u32)(0xaab4e4u));
    /* 00574d8a: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00574d8d: mov eax, dword ptr [0xaab4e8] */ r_eax = R32((u32)(0xaab4e8u));
    /* 00574d92: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00574d95: mov eax, dword ptr [0xaab4ec] */ r_eax = R32((u32)(0xaab4ecu));
    /* 00574d9a: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00574d9d: mov eax, dword ptr [esi + 0x358] */ r_eax = R32((u32)(r_esi+0x358u));
    /* 00574da3: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574da6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00574da7: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574daa: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x574dafu); f_007a8c74();
    /* 00574daf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574db2: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00574db5: jmp 0x574ca7 */ goto L_00574ca7;
}

void f_00574dbc(void) /* sub_574DBC */
{
    FN_ENTER(0x00574dbc);
    /* 00574dbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574dbd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574dc0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00574dc2: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 00574dc8: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00574dcb: fmul dword ptr [0x926fc8] */ ST(0) = ST(0) * R_F32((u32)(0x926fc8u));
    /* 00574dd1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00574dd8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00574ddc: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 00574de4: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00574de9: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x574deeu); f_0082d990();
    /* 00574dee: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00574df1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574df3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x574df8u); f_0082d8bc();
    /* 00574df8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00574dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574dfc: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00574e00: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00574e02: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x574e07u); f_0082eab8();
    /* 00574e07: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x574e0cu); f_0082da80();
    /* 00574e0c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00574e0f: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00574e12: mov edx, ebp */ r_edx = r_ebp;
    /* 00574e14: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x574e19u); f_0082ebac();
    /* 00574e19: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00574e1c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 00574e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574e1f: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x574e24u); f_005787a4();
    /* 00574e24: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00574e28: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00574e2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574e2b: call 0x578538 */ r_esp -= 4; W32(r_esp, 0x574e30u); f_00578538();
    /* 00574e30: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00574e33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00574e34: ret  */ FN_RET(0x00574dbc); r_esp += 4; return;
}

void f_00574e38(void) /* sub_574E38 */
{
    FN_ENTER(0x00574e38);
    /* 00574e38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00574e39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00574e3a: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00574e3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00574e3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574e41: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x574e46u); f_007aa094();
    /* 00574e46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574e48: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x574e4du); f_00770738();
    /* 00574e4d: mov edi, eax */ r_edi = r_eax;
    /* 00574e4f: movsx edx, word ptr [ebp + 0x330] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x330u));
    /* 00574e56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574e58: je 0x5750ff */ if (fZ) goto L_005750ff;
L_00574e5e:; BB(0x00574e5e);
    /* 00574e5e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574e61: jne 0x57501d */ if (!fZ) goto L_0057501d;
L_00574e67:; BB(0x00574e67);
    /* 00574e67: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574e69: je 0x575141 */ if (fZ) goto L_00575141;
L_00574e6f:; BB(0x00574e6f);
    /* 00574e6f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574e71: call 0x5744a8 */ r_esp -= 4; W32(r_esp, 0x574e76u); f_005744a8();
    /* 00574e76: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00574e79: fld dword ptr [ebp + 0x3dc] */ FPUSH(R_F32((u32)(r_ebp+0x3dcu)));
    /* 00574e7f: fcomp dword ptr [0x926fc0] */ fx_compare(ST(0), R_F32((u32)(0x926fc0u))); FPOP();
    /* 00574e85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00574e87: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00574e8a: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00574e8d: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00574e91: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00574e94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00574e95: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00574e99: mov edx, dword ptr [ebp + 0x3dc] */ r_edx = R32((u32)(r_ebp+0x3dcu));
    /* 00574e9f: ja 0x574ec6 */ if ((!fC&&!fZ)) goto L_00574ec6;
L_00574ea1:; BB(0x00574ea1);
    /* 00574ea1: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ea7: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ead: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574eaf: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574eb5: push dword ptr [ebp + 0x3a0] */ { u32 v = R32((u32)(r_ebp+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ebb: call 0x7723e0 */ r_esp -= 4; W32(r_esp, 0x574ec0u); f_007723e0();
    /* 00574ec0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00574ec4: jmp 0x574ee4 */ goto L_00574ee4;
L_00574ec6:; BB(0x00574ec6);
    /* 00574ec6: push dword ptr [edi + 0x308] */ { u32 v = R32((u32)(r_edi+0x308u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ecc: push dword ptr [edi + 0x304] */ { u32 v = R32((u32)(r_edi+0x304u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ed2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574ed4: push dword ptr [edi + 0x300] */ { u32 v = R32((u32)(r_edi+0x300u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574edb: call 0x7723e0 */ r_esp -= 4; W32(r_esp, 0x574ee0u); f_007723e0();
    /* 00574ee0: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00574ee4:; BB(0x00574ee4);
    /* 00574ee4: mov edx, dword ptr [ebp + 0x358] */ r_edx = R32((u32)(r_ebp+0x358u));
    /* 00574eea: lea eax, [ebp + 0x30c] */ r_eax = (u32)(r_ebp+0x30cu);
    /* 00574ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574ef1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574ef3: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00574ef6: call 0x771858 */ r_esp -= 4; W32(r_esp, 0x574efbu); f_00771858();
    /* 00574efb: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00574eff: movsx edi, word ptr [ebp + 0x37c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x37cu));
    /* 00574f06: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 00574f0c: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00574f12: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00574f15: mov word ptr [ebp + 0x37c], di */ W16((u32)(r_ebp+0x37cu), (u16)r_edi);
    /* 00574f1c: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 00574f1f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00574f21: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00574f23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00574f25: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00574f26: ja 0x574f2f */ if ((!fC&&!fZ)) goto L_00574f2f;
L_00574f28:; BB(0x00574f28);
    /* 00574f28: movsx eax, di */ r_eax = (u32)(i32)(i16)(u16)r_edi;
    /* 00574f2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00574f2d: jge 0x574f44 */ if ((fS==fO)) goto L_00574f44;
L_00574f2f:; BB(0x00574f2f);
    /* 00574f2f: mov eax, 2 */ r_eax = 0x2u;
    /* 00574f34: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00574f3b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00574f3d: mov word ptr [ebp + 0x37c], dx */ W16((u32)(r_ebp+0x37cu), (u16)r_edx);
L_00574f44:; BB(0x00574f44);
    /* 00574f44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574f46: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x574f4bu); f_007b6880();
    /* 00574f4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00574f4d: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x574f52u); f_007b7e9c();
    /* 00574f52: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00574f58: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00574f5b: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574f61: je 0x574f80 */ if (fZ) goto L_00574f80;
L_00574f63:; BB(0x00574f63);
    /* 00574f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00574f68: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00574f6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00574f71: mov word ptr [ebp + 0x37c], dx */ W16((u32)(r_ebp+0x37cu), (u16)r_edx);
    /* 00574f78: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00574f7b: jmp 0x575119 */ goto L_00575119;
L_00574f80:; BB(0x00574f80);
    /* 00574f80: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00574f84: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00574f87: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00574f8a: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00574f8d: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00574f91: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00574f94: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00574f98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00574f9a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00574f9e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00574fa2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00574fa6: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x574fabu); f_0082df08();
    /* 00574fab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574fad: fld dword ptr [0x926fbc] */ FPUSH(R_F32((u32)(0x926fbcu)));
    /* 00574fb3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00574fb7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00574fb9: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00574fbc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00574fc0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00574fc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fc6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00574fc8: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00574fcb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00574fcd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00574fcf: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00574fd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fd4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00574fd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00574fde: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00574fe2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00574fe5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00574fe9: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574fef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574ff0: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x574ff5u); f_0077fffc();
    /* 00574ff5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574ff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574ffa: je 0x57513c */ if (fZ) goto L_0057513c;
L_00575000:; BB(0x00575000);
    /* 00575000: mov eax, 2 */ r_eax = 0x2u;
    /* 00575005: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0057500c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057500e: mov word ptr [ebp + 0x37c], dx */ W16((u32)(r_ebp+0x37cu), (u16)r_edx);
    /* 00575015: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00575018: jmp 0x575119 */ goto L_00575119;
L_0057501d:; BB(0x0057501d);
    /* 0057501d: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575020: jne 0x5750fa */ if (!fZ) goto L_005750fa;
L_00575026:; BB(0x00575026);
    /* 00575026: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00575028: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0057502b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0057502e: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00575033: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00575036: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575038: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x57503bu); call_ind(t); }
    /* 0057503b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057503d: jne 0x575048 */ if (!fZ) goto L_00575048;
L_0057503f:; BB(0x0057503f);
    /* 0057503f: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 00575046: jmp 0x575060 */ goto L_00575060;
L_00575048:; BB(0x00575048);
    /* 00575048: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057504a: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 00575050: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00575052: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575054: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x575059u); f_007714cc();
    /* 00575059: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
L_00575060:; BB(0x00575060);
    /* 00575060: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00575063: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575068: jge 0x5750ee */ if ((fS==fO)) goto L_005750ee;
L_0057506e:; BB(0x0057506e);
    /* 0057506e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057506f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x575074u); f_0068d5a8();
    /* 00575074: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575077: je 0x5750e2 */ if (fZ) goto L_005750e2;
L_00575079:; BB(0x00575079);
    /* 00575079: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0057507f: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575085: je 0x57508c */ if (fZ) goto L_0057508c;
L_00575087:; BB(0x00575087);
    /* 00575087: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057508a: jmp 0x5750e5 */ goto L_005750e5;
L_0057508c:; BB(0x0057508c);
    /* 0057508c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057508f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575090: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00575093: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575094: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x575099u); f_0078ea50();
    /* 00575099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057509c: fcomp dword ptr [0x926fc4] */ fx_compare(ST(0), R_F32((u32)(0x926fc4u))); FPOP();
    /* 005750a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005750a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005750a5: jae 0x5750e5 */ if (!fC) goto L_005750e5;
L_005750a7:; BB(0x005750a7);
    /* 005750a7: push 0xa000000 */ { u32 v = 0xa000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005750ac: mov eax, 1 */ r_eax = 0x1u;
    /* 005750b1: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 005750b8: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005750bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005750bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005750be: mov word ptr [ebp + 0x330], cx */ W16((u32)(r_ebp+0x330u), (u16)r_ecx);
    /* 005750c5: mov edx, 0xa */ r_edx = 0xau;
    /* 005750ca: mov word ptr [ebp + 0xb8], dx */ W16((u32)(r_ebp+0xb8u), (u16)r_edx);
    /* 005750d1: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005750d6: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 005750d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005750db: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5750e0u); f_007b52ec();
    /* 005750e0: jmp 0x575119 */ goto L_00575119;
L_005750e2:; BB(0x005750e2);
    /* 005750e2: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_005750e5:; BB(0x005750e5);
    /* 005750e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005750e7: call 0x5751d4 */ r_esp -= 4; W32(r_esp, 0x5750ecu); f_005751d4();
    /* 005750ec: jmp 0x575119 */ goto L_00575119;
L_005750ee:; BB(0x005750ee);
    /* 005750ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005750f0: call 0x5751d4 */ r_esp -= 4; W32(r_esp, 0x5750f5u); f_005751d4();
    /* 005750f5: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005750f8: jmp 0x575119 */ goto L_00575119;
L_005750fa:; BB(0x005750fa);
    /* 005750fa: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005750fd: jmp 0x575119 */ goto L_00575119;
L_005750ff:; BB(0x005750ff);
    /* 005750ff: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00575102: mov eax, 1 */ r_eax = 0x1u;
    /* 00575107: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0057510e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575110: call dword ptr [edx + 0x198] */ { u32 t = R32((u32)(r_edx+0x198u)); r_esp -= 4; W32(r_esp, 0x575116u); call_ind(t); }
    /* 00575116: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
L_00575119:; BB(0x00575119);
    /* 00575119: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057511b: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x575120u); f_007b6880();
    /* 00575120: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575122: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x575127u); f_007b7e9c();
    /* 00575127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057512b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575131: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575136u); f_00805608();
    /* 00575136: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057513a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057513b: ret  */ FN_RET(0x00574e38); r_esp += 4; return;
L_0057513c:; BB(0x0057513c);
    /* 0057513c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057513f: jmp 0x575119 */ goto L_00575119;
L_00575141:; BB(0x00575141);
    /* 00575141: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 00575143: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00575146: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575148: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x57514bu); call_ind(t); }
    /* 0057514b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057514d: jne 0x575158 */ if (!fZ) goto L_00575158;
L_0057514f:; BB(0x0057514f);
    /* 0057514f: movzx eax, word ptr [ebp + 0x340] */ r_eax = (u32)R16((u32)(r_ebp+0x340u));
    /* 00575156: jmp 0x575170 */ goto L_00575170;
L_00575158:; BB(0x00575158);
    /* 00575158: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057515a: mov eax, dword ptr [ebp + 0x358] */ r_eax = R32((u32)(r_ebp+0x358u));
    /* 00575160: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00575162: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575164: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x575169u); f_007714cc();
    /* 00575169: mov word ptr [ebp + 0x340], ax */ W16((u32)(r_ebp+0x340u), (u16)r_eax);
L_00575170:; BB(0x00575170);
    /* 00575170: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00575173: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00575178: jge 0x5751bb */ if ((fS==fO)) goto L_005751bb;
L_0057517a:; BB(0x0057517a);
    /* 0057517a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057517b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x575180u); f_0068d5a8();
    /* 00575180: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00575181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575183: je 0x5751a3 */ if (fZ) goto L_005751a3;
L_00575185:; BB(0x00575185);
    /* 00575185: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 0057518b: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00575191: jne 0x5751a3 */ if (!fZ) goto L_005751a3;
L_00575193:; BB(0x00575193);
    /* 00575193: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00575194: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575196: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x57519bu); f_007706b0();
    /* 0057519b: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057519e: jmp 0x575119 */ goto L_00575119;
L_005751a3:; BB(0x005751a3);
    /* 005751a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005751a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005751a7: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5751acu); f_007706b0();
    /* 005751ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005751ae: call 0x5751d4 */ r_esp -= 4; W32(r_esp, 0x5751b3u); f_005751d4();
    /* 005751b3: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005751b6: jmp 0x575119 */ goto L_00575119;
L_005751bb:; BB(0x005751bb);
    /* 005751bb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005751bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005751bf: call 0x7706b0 */ r_esp -= 4; W32(r_esp, 0x5751c4u); f_007706b0();
    /* 005751c4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005751c6: call 0x5751d4 */ r_esp -= 4; W32(r_esp, 0x5751cbu); f_005751d4();
    /* 005751cb: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 005751ce: jmp 0x575119 */ goto L_00575119;
}

void f_00574f4c(void)
{
    FN_ENTER(0x00574f4c);
    /* 00574f4c: int 0xe8 */ UNSUP(0x00574f4c, "int 0xe8");
    /* 00574f4e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00574f4f: das  */ UNSUP(0x00574f4f, "das ");
    /* 00574f50: and al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00574f52: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 00574f58: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00574f5b: test edx, 0x380000 */ {  u32 a = r_edx; u32 b = 0x380000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574f61: je 0x574f80 */ if (fZ) goto L_00574f80;
L_00574f63:; BB(0x00574f63);
    /* 00574f63: mov eax, 2 */ r_eax = 0x2u;
    /* 00574f68: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 00574f6f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00574f71: mov word ptr [ebp + 0x37c], dx */ W16((u32)(r_ebp+0x37cu), (u16)r_edx);
    /* 00574f78: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00574f7b: jmp 0x575119 */ goto L_00575119;
L_00574f80:; BB(0x00574f80);
    /* 00574f80: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00574f84: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00574f87: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 00574f8a: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00574f8d: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 00574f91: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00574f94: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 00574f98: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00574f9a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00574f9e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00574fa2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00574fa6: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x574fabu); f_0082df08();
    /* 00574fab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00574fad: fld dword ptr [0x926fbc] */ FPUSH(R_F32((u32)(0x926fbcu)));
    /* 00574fb3: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00574fb7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00574fb9: fadd dword ptr [ebp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x38u));
    /* 00574fbc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00574fc0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00574fc4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fc6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00574fc8: fadd dword ptr [ebp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3cu));
    /* 00574fcb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00574fcd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00574fcf: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 00574fd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fd4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00574fd8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00574fda: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00574fde: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00574fe2: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00574fe5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00574fe9: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00574fee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00574fef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00574ff0: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x574ff5u); f_0077fffc();
    /* 00574ff5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00574ff8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00574ffa: je 0x57513c */ if (fZ) goto L_0057513c;
L_00575000:; BB(0x00575000);
    /* 00575000: mov eax, 2 */ r_eax = 0x2u;
    /* 00575005: mov word ptr [ebp + 0x330], ax */ W16((u32)(r_ebp+0x330u), (u16)r_eax);
    /* 0057500c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0057500e: mov word ptr [ebp + 0x37c], dx */ W16((u32)(r_ebp+0x37cu), (u16)r_edx);
    /* 00575015: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 00575018: jmp 0x575119 */ goto L_00575119;
L_00575119:; BB(0x00575119);
    /* 00575119: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0057511b: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x575120u); f_007b6880();
    /* 00575120: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00575122: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x575127u); f_007b7e9c();
    /* 00575127: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00575129: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0057512b: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00575130: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00575131: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x575136u); f_00805608();
    /* 00575136: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00575139: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057513a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057513b: ret  */ FN_RET(0x00574f4c); r_esp += 4; return;
L_0057513c:; BB(0x0057513c);
    /* 0057513c: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0057513f: jmp 0x575119 */ goto L_00575119;
}

